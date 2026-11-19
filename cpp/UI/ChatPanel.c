// Type: UI.ChatPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/ChatPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ChatPanel.cs
// --------------------------------

// UI.ChatPanel.UIAnchors$$.cctor
// il2cpp: void UI_ChatPanel_UIAnchors___cctor (const MethodInfo* method);
// 0x5d17e30

void UI_ChatPanel_UIAnchors___cctor(MethodInfo *method)

{
  UI_ChatPanel_UIAnchors_c *pUVar1;
  UnityEngine_Vector2_c *pUVar2;
  
  if (Il2CppMethodInitialized_07547d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    Il2CppMethodInitialized_07547d78 = '\x01';
  }
  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopStretch).fields =
       (UnityEngine_Vector2_Fields)0x3f80000000000000;
  pUVar1 = TypeInfo_UI_ChatPanel_UIAnchors;
  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopStretchEnd).fields =
       (UnityEngine_Vector2_Fields)0x3f8000003f800000;
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
    pUVar1 = TypeInfo_UI_ChatPanel_UIAnchors;
  }
  pUVar2 = TypeInfo_UnityEngine_Vector2;
  (pUVar1->static_fields->FullStretch).fields =
       (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
    pUVar1 = TypeInfo_UI_ChatPanel_UIAnchors;
    pUVar2 = TypeInfo_UnityEngine_Vector2;
  }
  (pUVar1->static_fields->FullStretchStart).fields = (pUVar2->static_fields->zeroVector).fields;
  (pUVar1->static_fields->RightStretch).fields = (UnityEngine_Vector2_Fields)0x3f800000;
  (pUVar1->static_fields->RightStretchEnd).fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
  (pUVar1->static_fields->CenterMiddle).fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (pUVar1->static_fields->TopCenter).fields = (UnityEngine_Vector2_Fields)0x3f8000003f000000;
  (pUVar1->static_fields->RightCenter).fields = (UnityEngine_Vector2_Fields)0x3f0000003f800000;
  (pUVar1->static_fields->LeftCenter).fields = (UnityEngine_Vector2_Fields)0x0;
  (pUVar1->static_fields->BottomLeft).fields = (pUVar2->static_fields->zeroVector).fields;
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
    pUVar1 = TypeInfo_UI_ChatPanel_UIAnchors;
    pUVar2 = TypeInfo_UnityEngine_Vector2;
  }
  (pUVar1->static_fields->TopRight).fields = (pUVar2->static_fields->oneVector).fields;
  return;
}


// UI.ChatPanel.ChatLineView$$get_gameObject
// il2cpp: UnityEngine_GameObject_o* UI_ChatPanel_ChatLineView__get_gameObject (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x5d17fc0

UnityEngine_GameObject_o *
UI_ChatPanel_ChatLineView__get_gameObject(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  return (__this->fields)._gameObject_k__BackingField;
}


// UI.ChatPanel.ChatLineView$$set_gameObject
// il2cpp: void UI_ChatPanel_ChatLineView__set_gameObject (UI_ChatPanel_ChatLineView_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x5d17fd0

void UI_ChatPanel_ChatLineView__set_gameObject
               (UI_ChatPanel_ChatLineView_o *__this,UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._gameObject_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameObject_k__BackingField);
  return;
}


// UI.ChatPanel.ChatLineView$$get_transform
// il2cpp: UnityEngine_Transform_o* UI_ChatPanel_ChatLineView__get_transform (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x5d17ff0

UnityEngine_Transform_o *
UI_ChatPanel_ChatLineView__get_transform(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  
  __this_00 = (__this->fields)._gameObject_k__BackingField;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  return pUVar1;
}


// UI.ChatPanel.ChatLineView$$get_RectTransform
// il2cpp: UnityEngine_RectTransform_o* UI_ChatPanel_ChatLineView__get_RectTransform (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x5d18010

UnityEngine_RectTransform_o *
UI_ChatPanel_ChatLineView__get_RectTransform(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  return (__this->fields)._rowRect;
}


// UI.ChatPanel.ChatLineView$$get_Height
// il2cpp: float UI_ChatPanel_ChatLineView__get_Height (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x5d18020

float UI_ChatPanel_ChatLineView__get_Height(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  return (__this->fields)._rowHeight;
}


// UI.ChatPanel.ChatLineView$$.ctor
// il2cpp: void UI_ChatPanel_ChatLineView___ctor (UI_ChatPanel_ChatLineView_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, TMPro_TMP_InputField_o* chatInput, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x5d14dd0

void UI_ChatPanel_ChatLineView___ctor
               (UI_ChatPanel_ChatLineView_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               TMPro_TMP_InputField_o *chatInput,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  TMPro_TextMeshProUGUI_o **targetAddress_00;
  UI_ChatPanel_ChatLineView_Fields *targetAddress_01;
  UnityEngine_GameObject_o **targetAddress_02;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *panel;
  Il2CppType *handle;
  TMPro_TMP_FontAsset_o *pTVar3;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar11;
  UnityEngine_RectTransform_o *__this_01;
  TMPro_TMP_InputField_o *pTVar12;
  UI_ChatPlayerNameOverlay_o *pUVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar14;
  UnityEngine_Color_Fields UVar15;
  
  if (Il2CppMethodInitialized_07547d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ChatPanel_ChatLineClickHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ChatPlayerNameOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Text Area");
    Il2CppMethodInitialized_07547d79 = '\x01';
  }
  (__this->fields)._metricsDirty = true;
  (__this->fields)._playerStyleDirty = true;
  (__this->fields)._styledSenderID = -1;
  (__this->fields)._styledSenderName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._styledSenderName);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._chatPanel = chatPanel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanel);
  if (style == (UI_ElementStyle_o *)0x0) goto label_05d15821;
  (__this->fields)._fontSize = (float)(style->fields).FontSize;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 == (Settings_UISettings_o *)0x0) goto label_05d15821;
  pSVar2 = (pSVar1->fields).ChatWidth;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05d15821;
  (__this->fields)._chatWidth = (float)(pSVar2->fields)._value;
  pTVar3 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                     ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
  (__this->fields)._defaultFont = pTVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultFont);
  panel = (style->fields).ThemePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar15 = (UnityEngine_Color_Fields)
           UI_UIManager__GetThemeColor
                     (panel,"TextColor","Default","DefaultPanel",
                      (MethodInfo *)0x0);
  (__this->fields)._defaultColor.fields = UVar15;
  pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto label_05d15821;
  if (pSVar5 != (System_Type_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d1582b;
  }
  if ((int)pSVar4->max_length == 0) goto label_05d15826;
  pSVar4->m_Items[0] = pSVar5;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar7,"ChatLine",pSVar4,(MethodInfo *)0x0);
  targetAddress_02 = &(__this->fields)._gameObject_k__BackingField;
  (__this->fields)._gameObject_k__BackingField = pUVar7;
  Il2CppCodeGenWriteBarrier(targetAddress_02);
  pUVar7 = (__this->fields)._gameObject_k__BackingField;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_05d15821;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05d15821;
  UnityEngine_Transform__SetParent_692d510(pUVar8,parent,false,(MethodInfo *)0x0);
  if (*targetAddress_02 == (UnityEngine_GameObject_o *)0x0) goto label_05d15821;
  pUVar9 = UnityEngine_GameObject__GetComponent_object_
                     (*targetAddress_02,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  targetAddress = &(__this->fields)._rowRect;
  (__this->fields)._rowRect = pUVar9;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar9 = (__this->fields)._rowRect;
  if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
  }
  if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_05d15821;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopStretch).fields
             ,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_RectTransform_o *)0x0) goto label_05d15821;
  UnityEngine_RectTransform__set_anchorMax
            (*targetAddress,
             (UnityEngine_Vector2_o)(TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopStretchEnd).fields,
             (MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_RectTransform_o *)0x0) goto label_05d15821;
  UnityEngine_RectTransform__set_pivot
            (*targetAddress,
             (UnityEngine_Vector2_o)(TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopCenter).fields,
             (MethodInfo *)0x0);
  fVar14 = ((__this->fields)._fontSize / 18.0) * 30.0;
  (__this->fields)._rowHeight = fVar14;
  pUVar9 = (__this->fields)._rowRect;
  if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_05d15821;
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar9,(UnityEngine_Vector2_o)((ulong)(uint)fVar14 << 0x20),(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar5 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto label_05d15821;
  if (pSVar5 != (System_Type_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d1582b;
  }
  if ((int)pSVar4->max_length == 0) goto label_05d15826;
  pSVar4->m_Items[0] = pSVar5;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_RectMask2D,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d1582b;
  }
  if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05d15826;
  pSVar4->m_Items[1] = pSVar5;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar7,"Text Area",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
label_05d15821:
    ThrowNullReferenceException();
  }
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*targetAddress_02 == (UnityEngine_GameObject_o *)0x0) goto label_05d15821;
  pUVar10 = UnityEngine_GameObject__get_transform(*targetAddress_02,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05d15821;
  UnityEngine_Transform__SetParent_692d510(pUVar8,pUVar10,false,(MethodInfo *)0x0);
  pUVar9 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_05d15821;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar9,(UnityEngine_Vector2_o)
                    (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar9,(UnityEngine_Vector2_o)
                    (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMax(pUVar9,(UnityEngine_Vector2_o)0xc1000000,(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar5 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto label_05d15821;
  if (pSVar5 != (System_Type_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d1582b;
  }
  if ((int)pSVar4->max_length == 0) goto label_05d15826;
  pSVar4->m_Items[0] = pSVar5;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d1582b;
  }
  if ((pSVar4->max_length & 0xfffffffe) != 0) {
    pSVar4->m_Items[1] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) {
label_05d1582b:
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
    }
    if (2 < (uint)pSVar4->max_length) {
      pSVar4->m_Items[2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,"Text",pSVar4,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_Transform__SetParent_692d510(pUVar8,pUVar10,false,(MethodInfo *)0x0);
          pTVar11 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
          targetAddress_00 = &(__this->fields)._displayText;
          (__this->fields)._displayText = pTVar11;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          UI_ChatPanel_ChatLineView__ConfigureText
                    ((__this->fields)._displayText,(float)(style->fields).FontSize,
                     (UnityEngine_Color_o)(__this->fields)._defaultColor.fields,true,true,method_00);
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this_00,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (__this_01,
                       (UnityEngine_Vector2_o)
                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
                       (MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (__this_01,
                       (UnityEngine_Vector2_o)
                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0)
            ;
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (*targetAddress_02 != (UnityEngine_GameObject_o *)0x0) {
              pTVar12 = UnityEngine_GameObject__AddComponent_object_
                                  (*targetAddress_02,
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField);
              targetAddress_01 = &__this->fields;
              (__this->fields)._selectionInput = pTVar12;
              Il2CppCodeGenWriteBarrier(&targetAddress_01->_selectionInput);
              pTVar12 = (__this->fields)._selectionInput;
              if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__set_textComponent
                          (pTVar12,(TMPro_TMP_Text_o *)*targetAddress_00,(MethodInfo *)0x0);
                if (targetAddress_01->_selectionInput != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__set_textViewport
                            (targetAddress_01->_selectionInput,pUVar9,(MethodInfo *)0x0);
                  pTVar12 = targetAddress_01->_selectionInput;
                  if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
                    (pTVar12->fields).m_ReadOnly = true;
                    TMPro_TMP_InputField__set_richText(pTVar12,true,(MethodInfo *)0x0);
                    pTVar12 = targetAddress_01->_selectionInput;
                    if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
                      (pTVar12->fields).m_OnFocusSelectAll = false;
                      (pTVar12->fields).m_ResetOnDeActivation = false;
                      (pTVar12->fields).m_RestoreOriginalTextOnEscape = false;
                      TMPro_TMP_InputField__set_shouldHideMobileInput(pTVar12,true,(MethodInfo *)0x0);
                      if (targetAddress_01->_selectionInput != (TMPro_TMP_InputField_o *)0x0) {
                        TMPro_TMP_InputField__set_caretWidth
                                  (targetAddress_01->_selectionInput,0,(MethodInfo *)0x0);
                        if (targetAddress_01->_selectionInput != (TMPro_TMP_InputField_o *)0x0) {
                          TMPro_TMP_InputField__set_lineType
                                    (targetAddress_01->_selectionInput,2,(MethodInfo *)0x0);
                          if (*targetAddress_02 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar13 = UnityEngine_GameObject__AddComponent_object_
                                                (*targetAddress_02,
                                                 (MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_ChatPlayerNameOverlay
                                                );
                            (__this->fields)._nameOverlay = pUVar13;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._nameOverlay);
                            pUVar13 = (__this->fields)._nameOverlay;
                            if (pUVar13 != (UI_ChatPlayerNameOverlay_o *)0x0) {
                              UI_ChatPlayerNameOverlay__Initialize(pUVar13,*targetAddress_00,method_01);
                              if (*targetAddress_02 != (UnityEngine_GameObject_o *)0x0) {
                                pIVar6 = UnityEngine_GameObject__AddComponent_object_
                                                   (*targetAddress_02,
                                                    (MethodInfo_353B6A0 *)
                                                    MethodInfo_UnityEngine_GameObject_AddComponent_ChatPanel_ChatLineClickHandler
                                                   );
                                if (pIVar6 != (Il2CppObject *)0x0) {
                                  pIVar6[2].klass = (Il2CppClass *)__this;
                                  Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
                                  pIVar6[2].monitor = chatInput;
                                  Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor);
                                  pIVar6[3].klass = (Il2CppClass *)chatPanel;
                                  Il2CppCodeGenWriteBarrier(&pIVar6[3].klass);
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
              }
            }
          }
        }
      }
      goto label_05d15821;
    }
  }
label_05d15826:
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel.ChatLineView$$ApplyChatMetrics
// il2cpp: void UI_ChatPanel_ChatLineView__ApplyChatMetrics (UI_ChatPanel_ChatLineView_o* __this, float fontSize, float width, const MethodInfo* method);
// 0x5d17660

void UI_ChatPanel_ChatLineView__ApplyChatMetrics
               (UI_ChatPanel_ChatLineView_o *__this,float fontSize,float width,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *__this_00;
  TMPro_TextMeshProUGUI_o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_ECX;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_XMM0_Db;
  uint in_XMM1_Db;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  fVar9 = (__this->fields)._fontSize;
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar8 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar1 = (__this->fields)._chatWidth;
  auVar10._0_8_ = CONCAT44(fVar1,fVar9) & 0x7fffffff7fffffff;
  auVar10._8_8_ = 0;
  auVar11._8_4_ = in_XMM0_Db & 0x7fffffff;
  auVar11._0_8_ = CONCAT44(width,fontSize) & 0x7fffffff7fffffff;
  auVar11._12_4_ = in_XMM1_Db & 0x7fffffff;
  auVar11 = maxps(auVar10,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * 1e-06;
  auVar12._4_4_ = auVar11._4_4_ * 1e-06;
  auVar12._8_4_ = auVar11._8_4_ * 0.0;
  auVar12._12_4_ = auVar11._12_4_ * 0.0;
  auVar3._4_4_ = fVar8;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar8;
  auVar3._12_4_ = fVar8;
  auVar11 = maxps(auVar12,auVar3);
  fVar9 = ABS(fontSize - fVar9);
  iVar6 = -(uint)(fVar9 < auVar11._0_4_);
  iVar7 = -(uint)(ABS(width - fVar1) < auVar11._4_4_);
  auVar4._4_4_ = iVar6;
  auVar4._0_4_ = iVar6;
  auVar4._8_4_ = iVar7;
  auVar4._12_4_ = iVar7;
  uVar5 = movmskpd(in_ECX,auVar4);
  if ((char)uVar5 == '\x03') {
    return;
  }
  (__this->fields)._fontSize = fontSize;
  (__this->fields)._chatWidth = width;
  (__this->fields)._metricsDirty = true;
  if (auVar11._0_4_ <= fVar9) {
    (__this->fields)._playerStyleDirty = true;
  }
  fVar9 = ceilf((fontSize / 18.0) * 30.0);
  (__this->fields)._rowHeight = fVar9;
  __this_00 = (__this->fields)._rowRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    value.fields.y = (__this->fields)._rowHeight;
    value.fields.x = UVar2.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._displayText;
    if (__this_01 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_01,fontSize,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$SetFont
// il2cpp: void UI_ChatPanel_ChatLineView__SetFont (UI_ChatPanel_ChatLineView_o* __this, TMPro_TMP_FontAsset_o* fontAsset, const MethodInfo* method);
// 0x5d177b0

void UI_ChatPanel_ChatLineView__SetFont
               (UI_ChatPanel_ChatLineView_o *__this,TMPro_TMP_FontAsset_o *fontAsset,MethodInfo *method)

{
  TMPro_TMP_FontAsset_o *x;
  TMPro_TextMeshProUGUI_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d7a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)fontAsset,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    x = (__this->fields)._defaultFont;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)fontAsset,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields)._defaultFont = fontAsset;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultFont);
      __this_00 = (__this->fields)._displayText;
      if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) {
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this_00,fontAsset,(MethodInfo *)0x0);
      (__this->fields)._metricsDirty = true;
      (__this->fields)._playerStyleDirty = true;
    }
  }
  return;
}


// UI.ChatPanel.ChatLineView$$InvalidatePlayerStyle
// il2cpp: void UI_ChatPanel_ChatLineView__InvalidatePlayerStyle (UI_ChatPanel_ChatLineView_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x5d159a0

void UI_ChatPanel_ChatLineView__InvalidatePlayerStyle
               (UI_ChatPanel_ChatLineView_o *__this,int32_t actorNumber,MethodInfo *method)

{
  if ((__this->fields)._styledSenderID == actorNumber) {
    (__this->fields)._playerStyleDirty = true;
  }
  return;
}


// UI.ChatPanel.ChatLineView$$SetLine
// il2cpp: void UI_ChatPanel_ChatLineView__SetLine (UI_ChatPanel_ChatLineView_o* __this, GameManagers_ChatManager_ChatDisplayLine_o line, const MethodInfo* method);
// 0x5d12c50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d12dea: jmp 0x5d12e4b
// asm:   0x5d12e13: jmp 0x5d12f04
// asm:   0x5d12f02: jmp 0x5d12f1e
// asm:   0x5d12fa4: jmp 0x5d13022

void UI_ChatPanel_ChatLineView__SetLine
               (UI_ChatPanel_ChatLineView_o *__this,GameManagers_ChatManager_ChatDisplayLine_o line,
               MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  UI_ChatPlayerNameOverlay_o *pUVar3;
  bool bVar4;
  char cVar5;
  Photon_Realtime_Room_o *pPVar6;
  Photon_Realtime_Player_o *player;
  TMPro_TMP_FontAsset_o *font;
  MethodInfo *pMVar7;
  TMPro_TMP_FontAsset_o *x;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_08;
  MethodInfo *method_03;
  TMPro_TMP_FontAsset_o *method_04;
  MethodInfo *in_R9;
  System_String_o *pSVar8;
  float fVar9;
  UI_ChatDisplayNameRange_Fields local_78;
  TMPro_TMP_FontAsset_o *local_70;
  int32_t local_64;
  System_String_o *local_60;
  TMPro_TMP_FontAsset_o *local_58;
  System_String_o *local_50;
  System_String_o *local_48;
  TMPro_TMP_FontAsset_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547d7b = '\x01';
    in_RDX = extraout_RDX;
  }
  local_78.SourceStartIndex = 0;
  local_78.SourceEndIndex = 0;
  cVar5 = '\0';
  if ((line.fields.UsePlayerStyle & 1U) != 0) {
    cVar5 = (__this->fields)._playerStyleDirty;
  }
  if ((((__this->fields)._hasLastLine != false) &&
      ((__this->fields)._lastLine.fields.LineID == line.fields.LineID)) &&
     ((((__this->fields)._lastLine.fields.UsePlayerStyle ^ line.fields.UsePlayerStyle) & 1U) == 0)) {
    local_70 = (TMPro_TMP_FontAsset_o *)line.fields.TimeText;
    local_40 = (TMPro_TMP_FontAsset_o *)line.fields.IdText;
    local_58 = (TMPro_TMP_FontAsset_o *)line.fields.BodyText;
    local_38 = (__this->fields)._lastLine.fields.TimeText;
    local_48 = (__this->fields)._lastLine.fields.IdText;
    local_50 = (__this->fields)._lastLine.fields.SenderName;
    local_60 = (__this->fields)._lastLine.fields.BodyText;
    local_64 = (__this->fields)._lastLine.fields.SenderID;
    method = (MethodInfo *)line.fields.PlainText;
    bVar4 = System_String__op_Equality
                      ((__this->fields)._lastLine.fields.PlainText,line.fields.PlainText,(MethodInfo *)0x0);
    in_RDX = extraout_RDX_00;
    if (((((bVar4) &&
          (method = (MethodInfo *)local_70,
          bVar4 = System_String__op_Equality(local_38,(System_String_o *)local_70,(MethodInfo *)0x0),
          in_RDX = extraout_RDX_01, bVar4)) &&
         ((method = (MethodInfo *)local_40,
          bVar4 = System_String__op_Equality(local_48,(System_String_o *)local_40,(MethodInfo *)0x0),
          in_RDX = extraout_RDX_02, bVar4 &&
          ((method = (MethodInfo *)line.fields.SenderName,
           bVar4 = System_String__op_Equality(local_50,line.fields.SenderName,(MethodInfo *)0x0),
           in_RDX = extraout_RDX_03, bVar4 &&
           (method = (MethodInfo *)local_58,
           bVar4 = System_String__op_Equality(local_60,(System_String_o *)local_58,(MethodInfo *)0x0),
           in_RDX = extraout_RDX_04, bVar4)))))) && (local_64 == line.fields.SenderID)) &&
       (((__this->fields)._metricsDirty == false && (cVar5 == '\0')))) {
      return;
    }
  }
  if ((line.fields.UsePlayerStyle & 1U) == 0) {
    if (line.fields.PlainText == (System_String_o *)0x0) {
      cVar5 = (__this->fields)._playerMode;
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      cVar5 = (__this->fields)._playerMode;
      pSVar8 = line.fields.PlainText;
    }
    if (cVar5 != '\0') {
      pUVar3 = (__this->fields)._nameOverlay;
      if (pUVar3 == (UI_ChatPlayerNameOverlay_o *)0x0) goto label_05d1316c;
      UI_ChatPlayerNameOverlay__Clear(pUVar3,method);
      in_RDX = extraout_RDX_05;
    }
    (__this->fields)._playerMode = false;
    (__this->fields)._playerStyleDirty = true;
    UI_ChatPanel_ChatLineView__SetDisplayText(__this,pSVar8,in_RDX);
    UI_ChatPanel_ChatLineView__UpdateRowHeight(__this,pSVar8,method_00);
    goto label_05d13184;
  }
  (__this->fields)._playerMode = true;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar6 != (Photon_Realtime_Room_o *)0x0) goto label_05d12e85;
label_05d12f04:
    font = (__this->fields)._defaultFont;
    player = (Photon_Realtime_Player_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar6 == (Photon_Realtime_Room_o *)0x0) goto label_05d12f04;
label_05d12e85:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar6 == (Photon_Realtime_Room_o *)0x0) goto label_05d1316c;
    player = (*(pPVar6->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar6,line.fields.SenderID,false,(pPVar6->klass->vtable)._10_GetPlayer.method);
    if (player == (Photon_Realtime_Player_o *)0x0) goto label_05d12f04;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    font = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,(MethodInfo *)0x0);
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    font = (__this->fields)._defaultFont;
  }
  pMVar7 = (MethodInfo *)
           UI_ChatDisplayLineComposer__ComposePlayerLine
                     (line,(UI_ChatDisplayNameRange_o *)&local_78,0.0,pMVar7);
  if (((__this->fields)._playerStyleDirty == false) &&
     ((__this->fields)._styledSenderID == line.fields.SenderID)) {
    pSVar8 = (__this->fields)._styledSenderName;
    if (line.fields.SenderName == (System_String_o *)0x0) {
      bVar4 = System_String__op_Inequality
                        (pSVar8,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (!bVar4) goto label_05d12fc9;
      goto label_05d13022;
    }
    bVar4 = System_String__op_Inequality(pSVar8,line.fields.SenderName,(MethodInfo *)0x0);
    if (bVar4) goto label_05d13022;
label_05d12fc9:
    x = (__this->fields)._styledNameFont;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      local_70 = x;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      x = local_70;
    }
    method_04 = font;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)font,(MethodInfo *)0x0);
    if ((bVar4) ||
       (cVar5 = il2cpp_runtime_helper_03296c30((__this->fields)._styledFontSize,(__this->fields)._fontSize,0),
       method_02 = extraout_RDX_06, cVar5 == '\0')) goto label_05d13022;
  }
  else {
label_05d13022:
    fVar9 = UI_ChatPanel_ChatLineView__ApplyPlayerStyle
                      (__this,player,font,line.fields.SenderName,(UI_ChatDisplayNameRange_o)local_78,in_R9);
    (__this->fields)._cachedStyledNameWidth = fVar9;
    fVar9 = UI_ChatPanel_ChatLineView__MeasureDisplayNameWidth(__this,line.fields.SenderName,method_01);
    (__this->fields)._cachedBaseNameWidth = fVar9;
    (__this->fields)._styledSenderID = line.fields.SenderID;
    pSVar8 = line.fields.SenderName;
    if (line.fields.SenderName == (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    (__this->fields)._styledSenderName = pSVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._styledSenderName);
    (__this->fields)._styledNameFont = font;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._styledNameFont);
    (__this->fields)._styledFontSize = (__this->fields)._fontSize;
    (__this->fields)._playerStyleDirty = false;
    method_02 = extraout_RDX_07;
    method_04 = font;
  }
  fVar9 = (__this->fields)._cachedStyledNameWidth;
  fVar1 = (__this->fields)._cachedBaseNameWidth;
  if ((fVar1 < fVar9) && (fVar9 = (fVar9 - fVar1) + 2.0, 0.0 < fVar9)) {
    pMVar7 = (MethodInfo *)
             UI_ChatDisplayLineComposer__ComposePlayerLine
                       (line,(UI_ChatDisplayNameRange_o *)&local_78,fVar9,(MethodInfo *)method_04);
    method_02 = extraout_RDX_08;
  }
  UI_ChatPanel_ChatLineView__SetDisplayText(__this,(System_String_o *)pMVar7,method_02);
  UI_ChatPanel_ChatLineView__UpdateRowHeight(__this,(System_String_o *)pMVar7,method_03);
  pUVar3 = (__this->fields)._nameOverlay;
  if (pUVar3 != (UI_ChatPlayerNameOverlay_o *)0x0) {
    (pUVar3->fields)._range.fields = local_78;
    if ((local_78.SourceStartIndex < 0) || (local_78.SourceEndIndex <= local_78.SourceStartIndex)) {
      (pUVar3->fields)._hasRange = false;
      pUVar3 = (__this->fields)._nameOverlay;
    }
    else {
      pSVar8 = (pUVar3->fields)._nameText;
      if (pSVar8 == (System_String_o *)0x0) goto label_05d1316c;
      (pUVar3->fields)._hasRange = 0 < (pSVar8->fields)._stringLength;
      pUVar3 = (__this->fields)._nameOverlay;
    }
    if (pUVar3 != (UI_ChatPlayerNameOverlay_o *)0x0) {
      UI_ChatPlayerNameOverlay__SyncToSource(pUVar3,pMVar7);
label_05d13184:
      *(long *)&(__this->fields)._lastLine.fields.SenderID = line.fields._48_8_;
      (__this->fields)._lastLine.fields.LineID = line.fields.LineID;
      (__this->fields)._lastLine.fields.SenderName = line.fields.SenderName;
      (__this->fields)._lastLine.fields.BodyText = line.fields.BodyText;
      (__this->fields)._lastLine.fields.TimeText = line.fields.TimeText;
      (__this->fields)._lastLine.fields.IdText = line.fields.IdText;
      (__this->fields)._lastLine.fields.PlainText = line.fields.PlainText;
      *(long *)&(__this->fields)._lastLine.fields.UsePlayerStyle = line.fields._8_8_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._lastLine);
      (__this->fields)._hasLastLine = true;
      (__this->fields)._metricsDirty = false;
      return;
    }
  }
label_05d1316c:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$SetDisplayText
// il2cpp: void UI_ChatPanel_ChatLineView__SetDisplayText (UI_ChatPanel_ChatLineView_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d183c0

void UI_ChatPanel_ChatLineView__SetDisplayText
               (UI_ChatPanel_ChatLineView_o *__this,System_String_o *text,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  TMPro_TMP_FontAsset_o *x;
  TMPro_TMP_InputField_o *pTVar2;
  bool bVar3;
  System_String_o *text_00;
  TMPro_TMP_FontAsset_o *value;
  
  if (Il2CppMethodInitialized_07547d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d7c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  text_00 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(text,false,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText
                    (text_00,(__this->fields)._defaultFont,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._displayText;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    x = (pTVar1->fields).m_fontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)value,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar1 = (__this->fields)._displayText;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d184c6;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
    }
    pTVar2 = (__this->fields)._selectionInput;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      bVar3 = System_String__op_Inequality((pTVar2->fields).m_Text,text_00,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pTVar2 = (__this->fields)._selectionInput;
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,text_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d184c6:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$Shows
// il2cpp: bool UI_ChatPanel_ChatLineView__Shows (UI_ChatPanel_ChatLineView_o* __this, GameManagers_ChatManager_ChatDisplayLine_o line, const MethodInfo* method);
// 0x5d131e0

bool UI_ChatPanel_ChatLineView__Shows
               (UI_ChatPanel_ChatLineView_o *__this,GameManagers_ChatManager_ChatDisplayLine_o line,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *a;
  System_String_o *a_00;
  System_String_o *a_01;
  System_String_o *a_02;
  bool bVar2;
  bool bVar3;
  
  if ((((__this->fields)._hasLastLine == false) ||
      ((__this->fields)._lastLine.fields.LineID != line.fields.LineID)) ||
     ((((__this->fields)._lastLine.fields.UsePlayerStyle ^ line.fields.UsePlayerStyle) & 1U) != 0)) {
    bVar3 = false;
  }
  else {
    a = (__this->fields)._lastLine.fields.TimeText;
    a_00 = (__this->fields)._lastLine.fields.IdText;
    a_01 = (__this->fields)._lastLine.fields.SenderName;
    a_02 = (__this->fields)._lastLine.fields.BodyText;
    iVar1 = (__this->fields)._lastLine.fields.SenderID;
    bVar3 = false;
    bVar2 = System_String__op_Equality
                      ((__this->fields)._lastLine.fields.PlainText,line.fields.PlainText,(MethodInfo *)0x0);
    if (bVar2) {
      bVar3 = false;
      bVar2 = System_String__op_Equality(a,line.fields.TimeText,(MethodInfo *)0x0);
      if (bVar2) {
        bVar3 = false;
        bVar2 = System_String__op_Equality(a_00,line.fields.IdText,(MethodInfo *)0x0);
        if (bVar2) {
          bVar3 = false;
          bVar2 = System_String__op_Equality(a_01,line.fields.SenderName,(MethodInfo *)0x0);
          if (bVar2) {
            bVar3 = System_String__op_Equality(a_02,line.fields.BodyText,(MethodInfo *)0x0);
            bVar3 = iVar1 == line.fields.SenderID && bVar3;
          }
        }
      }
    }
  }
  return bVar3;
}


// UI.ChatPanel.ChatLineView$$RememberLine
// il2cpp: void UI_ChatPanel_ChatLineView__RememberLine (UI_ChatPanel_ChatLineView_o* __this, GameManagers_ChatManager_ChatDisplayLine_o line, const MethodInfo* method);
// 0x5d185b0

void UI_ChatPanel_ChatLineView__RememberLine
               (UI_ChatPanel_ChatLineView_o *__this,GameManagers_ChatManager_ChatDisplayLine_o line,
               MethodInfo *method)

{
  (__this->fields)._lastLine.fields.SenderID = line.fields.SenderID;
  *(undefined4 *)&(__this->fields)._lastLine.fields.field_0x34 = line.fields._52_4_;
  (__this->fields)._lastLine.fields.LineID = line.fields.LineID;
  (__this->fields)._lastLine.fields.SenderName = line.fields.SenderName;
  (__this->fields)._lastLine.fields.BodyText = line.fields.BodyText;
  (__this->fields)._lastLine.fields.TimeText = line.fields.TimeText;
  (__this->fields)._lastLine.fields.IdText = line.fields.IdText;
  (__this->fields)._lastLine.fields.PlainText = line.fields.PlainText;
  (__this->fields)._lastLine.fields.UsePlayerStyle = line.fields.UsePlayerStyle;
  *(undefined7 *)&(__this->fields)._lastLine.fields.field_0x9 = line.fields._9_7_;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._lastLine);
  (__this->fields)._hasLastLine = true;
  (__this->fields)._metricsDirty = false;
  return;
}


// UI.ChatPanel.ChatLineView$$DisplayLinesEqual
// il2cpp: bool UI_ChatPanel_ChatLineView__DisplayLinesEqual (GameManagers_ChatManager_ChatDisplayLine_o a, GameManagers_ChatManager_ChatDisplayLine_o b, const MethodInfo* method);
// 0x5d18d10

bool UI_ChatPanel_ChatLineView__DisplayLinesEqual
               (GameManagers_ChatManager_ChatDisplayLine_o a,GameManagers_ChatManager_ChatDisplayLine_o b,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((a.fields.LineID != b.fields.LineID) ||
     (((b.fields.UsePlayerStyle ^ a.fields.UsePlayerStyle) & 1U) != 0)) {
    return false;
  }
  bVar1 = System_String__op_Equality(a.fields.PlainText,b.fields.PlainText,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__op_Equality(a.fields.TimeText,b.fields.TimeText,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__op_Equality(a.fields.IdText,b.fields.IdText,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__op_Equality(a.fields.SenderName,b.fields.SenderName,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__op_Equality(a.fields.BodyText,b.fields.BodyText,(MethodInfo *)0x0);
  if (bVar1) {
    return a.fields.SenderID == b.fields.SenderID;
  }
  return false;
}


// UI.ChatPanel.ChatLineView$$HandlePointerClick
// il2cpp: void UI_ChatPanel_ChatLineView__HandlePointerClick (UI_ChatPanel_ChatLineView_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d18dc0

void UI_ChatPanel_ChatLineView__HandlePointerClick
               (UI_ChatPanel_ChatLineView_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  TMPro_TMP_LinkInfo_o *pTVar1;
  UnityEngine_Vector2_Fields UVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  TMPro_TMP_LinkInfo_array *pTVar4;
  UI_ChatPanel_o *__this_00;
  TMPro_TMP_LinkInfo_Fields *pTVar5;
  int32_t iVar6;
  bool bVar7;
  uint uVar8;
  TMPro_TMP_TextInfo_o *pTVar9;
  System_String_o *pSVar10;
  Photon_Realtime_Player_o *pPVar11;
  Photon_Realtime_Room_o *pPVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  UnityEngine_Vector3_o position;
  int32_t local_60;
  int32_t local_5c;
  UnityEngine_Vector2_Fields local_58;
  undefined8 uStack_50;
  TMPro_TMP_LinkInfo_o local_48;
  
  if (Il2CppMethodInitialized_07547d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_TextUtilities);
    il2cpp_codegen_initialize_runtime_metadata(&"suggestion_");
    Il2CppMethodInitialized_07547d7d = '\x01';
  }
  local_5c = 0;
  local_60 = 0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    pTVar3 = (__this->fields)._displayText;
    UVar2 = (eventData->fields)._position_k__BackingField.fields;
    fVar13 = UVar2.x;
    fVar14 = UVar2.y;
    if ((TypeInfo_TMPro_TMP_TextUtilities->_2).cctor_finished_or_no_cctor == 0) {
      uStack_50 = 0;
      local_58 = UVar2;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_TextUtilities);
      fVar13 = local_58.x;
      fVar14 = local_58.y;
    }
    position.fields.y = fVar14;
    position.fields.x = fVar13;
    position.fields.z = 0.0;
    uVar8 = TMPro_TMP_TextUtilities__FindIntersectingLink
                      ((TMPro_TMP_Text_o *)pTVar3,position,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
    if (uVar8 == 0xffffffff) {
      return;
    }
    pTVar3 = (__this->fields)._displayText;
    if (((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
        (pTVar9 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
        pTVar9 != (TMPro_TMP_TextInfo_o *)0x0)) &&
       (pTVar4 = (pTVar9->fields).linkInfo, pTVar4 != (TMPro_TMP_LinkInfo_array *)0x0)) {
      if ((uint)pTVar4->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pTVar1 = pTVar4->m_Items + (int)uVar8;
      local_48.fields.textComponent = (pTVar1->fields).textComponent;
      local_48.fields.hashCode = (pTVar1->fields).hashCode;
      local_48.fields.linkIdFirstCharacterIndex = (pTVar1->fields).linkIdFirstCharacterIndex;
      pTVar5 = &pTVar4->m_Items[(int)uVar8].fields;
      local_48.fields.linkIdLength = pTVar5->linkIdLength;
      local_48.fields.linkTextfirstCharacterIndex = pTVar5->linkTextfirstCharacterIndex;
      local_48.fields.linkTextLength = pTVar5->linkTextLength;
      local_48.fields._28_4_ = *(undefined4 *)&pTVar5->field_0x1c;
      local_48.fields.linkID = pTVar4->m_Items[(int)uVar8].fields.linkID;
      pSVar10 = TMPro_TMP_LinkInfo__GetLinkID(&local_48,(MethodInfo *)0x0);
      if (pSVar10 != (System_String_o *)0x0) {
        bVar7 = System_String__StartsWith(pSVar10,"suggestion_",(MethodInfo *)0x0);
        if (bVar7) {
          if ("suggestion_" == (System_String_o *)0x0) goto label_05d1900d;
          pSVar10 = System_String__Substring
                              (pSVar10,("suggestion_"->fields)._stringLength,(MethodInfo *)0x0);
          bVar7 = System_Int32__TryParse(pSVar10,&local_5c,(MethodInfo *)0x0);
          iVar6 = local_5c;
          if (bVar7) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__HandleSuggestionClick(iVar6,(MethodInfo *)0x0);
          }
        }
        else {
          bVar7 = System_Int32__TryParse(pSVar10,&local_60,(MethodInfo *)0x0);
          iVar6 = local_60;
          if (bVar7) {
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar11 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar11 == (Photon_Realtime_Player_o *)0x0) goto label_05d1900d;
            if (iVar6 != (pPVar11->fields).actorNumber) {
              if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
              }
              pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar12 != (Photon_Realtime_Room_o *)0x0) {
                if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                }
                pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
                if (pPVar12 == (Photon_Realtime_Room_o *)0x0) goto label_05d1900d;
                auVar15 = (undefined1  [16])
                          (*(pPVar12->klass->vtable)._10_GetPlayer.methodPtr)
                                    (pPVar12,local_60,false,(pPVar12->klass->vtable)._10_GetPlayer.method);
                if (auVar15._0_8_ != (Photon_Realtime_Player_o *)0x0) {
                  __this_00 = (__this->fields)._chatPanel;
                  if (__this_00 == (UI_ChatPanel_o *)0x0) goto label_05d1900d;
                  UI_ChatPanel__EnterPMMode(__this_00,auVar15._0_8_,auVar15._8_8_);
                }
              }
            }
          }
        }
        return;
      }
    }
  }
label_05d1900d:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$ConfigureText
// il2cpp: void UI_ChatPanel_ChatLineView__ConfigureText (TMPro_TextMeshProUGUI_o* text, float fontSize, UnityEngine_Color_o color, bool richText, bool wordWrap, const MethodInfo* method);
// 0x5d18050

void UI_ChatPanel_ChatLineView__ConfigureText
               (TMPro_TextMeshProUGUI_o *text,float fontSize,UnityEngine_Color_o color,bool richText,
               bool wordWrap,MethodInfo *method)

{
  if (text == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)text,fontSize,(MethodInfo *)0x0);
  (*(text->klass->vtable)._23_set_color.methodPtr)(text,color,(text->klass->vtable)._23_set_color.method);
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,0x201,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,wordWrap,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)text,richText,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_enableKerning((TMPro_TMP_Text_o *)text,true,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_isTextObjectScaleStatic((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,0,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.ChatLineView$$BaseLineHeight
// il2cpp: float UI_ChatPanel_ChatLineView__BaseLineHeight (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x5d18030

float UI_ChatPanel_ChatLineView__BaseLineHeight(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  return ((__this->fields)._fontSize / 18.0) * 30.0;
}


// UI.ChatPanel.ChatLineView$$SetRowHeight
// il2cpp: void UI_ChatPanel_ChatLineView__SetRowHeight (UI_ChatPanel_ChatLineView_o* __this, float height, const MethodInfo* method);
// 0x5d18230

void UI_ChatPanel_ChatLineView__SetRowHeight
               (UI_ChatPanel_ChatLineView_o *__this,float height,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  
  fVar2 = ((__this->fields)._fontSize / 18.0) * 30.0;
  if (height <= fVar2) {
    height = fVar2;
  }
  fVar2 = ceilf(height);
  (__this->fields)._rowHeight = fVar2;
  __this_00 = (__this->fields)._rowRect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
  value.fields.y = (__this->fields)._rowHeight;
  value.fields.x = UVar1.fields.x;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.ChatLineView$$UpdateRowHeight
// il2cpp: void UI_ChatPanel_ChatLineView__UpdateRowHeight (UI_ChatPanel_ChatLineView_o* __this, System_String_o* content, const MethodInfo* method);
// 0x5d184d0

void UI_ChatPanel_ChatLineView__UpdateRowHeight
               (UI_ChatPanel_ChatLineView_o *__this,System_String_o *content,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  float fVar5;
  
  pTVar1 = (__this->fields)._displayText;
  if (content == (System_String_o *)0x0) {
    content = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    fVar4 = (__this->fields)._chatWidth + -8.0;
    fVar5 = 48.0;
    if (48.0 <= fVar4) {
      fVar5 = fVar4;
    }
    UVar2 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                      ((TMPro_TMP_Text_o *)pTVar1,content,fVar5,0.0,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._displayText;
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      fVar5 = (pTVar1->fields).m_fontSize;
      fVar4 = UVar2.fields.y;
      if (UVar2.fields.y <= fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = ((__this->fields)._fontSize / 18.0) * 30.0;
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = ceilf(fVar4);
      (__this->fields)._rowHeight = fVar5;
      __this_00 = (__this->fields)._rowRect;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        UVar2.fields.y = (__this->fields)._rowHeight;
        UVar2.fields.x = UVar3.fields.x;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$MeasureDisplayNameWidth
// il2cpp: float UI_ChatPanel_ChatLineView__MeasureDisplayNameWidth (UI_ChatPanel_ChatLineView_o* __this, System_String_o* senderName, const MethodInfo* method);
// 0x5d18760

float UI_ChatPanel_ChatLineView__MeasureDisplayNameWidth
                (UI_ChatPanel_ChatLineView_o *__this,System_String_o *senderName,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  System_String_o *text;
  float local_38;
  
  if (Il2CppMethodInitialized_07547d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07547d7e = '\x01';
  }
  if ((senderName != (System_String_o *)0x0) ||
     (senderName = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), senderName != (System_String_o *)0x0))
  {
    if ((senderName->fields)._stringLength == 0) {
      return 0.0;
    }
    pTVar1 = (__this->fields)._displayText;
    text = System_String__Concat_52f0320(senderName,"|",(MethodInfo *)0x0);
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      UVar2 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                        ((TMPro_TMP_Text_o *)pTVar1,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._displayText;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        UVar3 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                          ((TMPro_TMP_Text_o *)pTVar1,"|",3.4028235e+38,3.4028235e+38,
                           (MethodInfo *)0x0);
        local_38 = UVar2.fields.x;
        local_38 = local_38 - UVar3.fields.x;
        if (0.0 < local_38) {
          return local_38;
        }
        return 0.0;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$ApplyPlayerStyle
// il2cpp: float UI_ChatPanel_ChatLineView__ApplyPlayerStyle (UI_ChatPanel_ChatLineView_o* __this, Photon_Realtime_Player_o* player, TMPro_TMP_FontAsset_o* font, System_String_o* senderName, UI_ChatDisplayNameRange_o nameRange, const MethodInfo* method);
// 0x5d18600

float UI_ChatPanel_ChatLineView__ApplyPlayerStyle
                (UI_ChatPanel_ChatLineView_o *__this,Photon_Realtime_Player_o *player,
                TMPro_TMP_FontAsset_o *font,System_String_o *senderName,UI_ChatDisplayNameRange_o nameRange,
                MethodInfo *method)

{
  UI_ChatPlayerNameOverlay_o *pUVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  UnityEngine_Color_o a;
  UnityEngine_Color_o b;
  UnityEngine_Color_o c;
  UnityEngine_Color_o d;
  bool bVar3;
  MethodInfo *method_00;
  UI_ChatDisplayNameRange_o method_01;
  float fVar4;
  PatreonEffects_ResolvedNameEffect_Fields local_78;
  
  method_01.fields = nameRange.fields;
  if (Il2CppMethodInitialized_07547d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d7f = '\x01';
  }
  local_78.ColorC.fields.b = 0.0;
  local_78.ColorC.fields.a = 0.0;
  local_78.ColorD.fields.r = 0.0;
  local_78.ColorD.fields.g = 0.0;
  local_78.ColorB.fields.b = 0.0;
  local_78.ColorB.fields.a = 0.0;
  local_78.ColorC.fields.r = 0.0;
  local_78.ColorC.fields.g = 0.0;
  local_78.ColorA.fields.b = 0.0;
  local_78.ColorA.fields.a = 0.0;
  local_78.ColorB.fields.r = 0.0;
  local_78.ColorB.fields.g = 0.0;
  local_78.Enabled = false;
  local_78._1_3_ = 0;
  local_78.Type = 0;
  local_78.ColorA.fields.r = 0.0;
  local_78.ColorA.fields.g = 0.0;
  local_78.ColorD.fields.b = 0.0;
  local_78.ColorD.fields.a = 0.0;
  pUVar1 = (__this->fields)._nameOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    font = (__this->fields)._defaultFont;
  }
  if (pUVar1 == (UI_ChatPlayerNameOverlay_o *)0x0) goto label_05d1874f;
  UI_ChatPlayerNameOverlay__SetName
            (pUVar1,senderName,font,(__this->fields)._fontSize,
             (UnityEngine_Color_o)(__this->fields)._defaultColor.fields,nameRange,
             (MethodInfo *)method_01.fields);
  if (player == (Photon_Realtime_Player_o *)0x0) {
label_05d18719:
    pUVar1 = (__this->fields)._nameOverlay;
    if ((pUVar1 == (UI_ChatPlayerNameOverlay_o *)0x0) ||
       (pPVar2 = (pUVar1->fields)._label, pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0))
    goto label_05d1874f;
    method_00 = (MethodInfo *)0x0;
    PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar2,(MethodInfo *)0x0);
  }
  else {
    bVar3 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                      (player,(PatreonEffects_ResolvedNameEffect_o *)&local_78,(MethodInfo *)0x0);
    if (!bVar3) goto label_05d18719;
    pUVar1 = (__this->fields)._nameOverlay;
    if ((pUVar1 == (UI_ChatPlayerNameOverlay_o *)0x0) ||
       (pPVar2 = (pUVar1->fields)._label, pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0))
    goto label_05d1874f;
    d.fields.b = local_78.ColorD.fields.b;
    d.fields.a = local_78.ColorD.fields.a;
    d.fields.r = local_78.ColorD.fields.r;
    d.fields.g = local_78.ColorD.fields.g;
    c.fields.b = local_78.ColorC.fields.b;
    c.fields.a = local_78.ColorC.fields.a;
    c.fields.r = local_78.ColorC.fields.r;
    c.fields.g = local_78.ColorC.fields.g;
    b.fields.b = local_78.ColorB.fields.b;
    b.fields.a = local_78.ColorB.fields.a;
    b.fields.r = local_78.ColorB.fields.r;
    b.fields.g = local_78.ColorB.fields.g;
    a.fields.b = local_78.ColorA.fields.b;
    a.fields.a = local_78.ColorA.fields.a;
    a.fields.r = local_78.ColorA.fields.r;
    a.fields.g = local_78.ColorA.fields.g;
    method_00 = (MethodInfo *)(ulong)(uint)local_78.Type;
    PatreonEffects_NameEffectLabel__SetNameEffect(pPVar2,local_78.Type,a,b,c,d,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._nameOverlay;
  if (pUVar1 != (UI_ChatPlayerNameOverlay_o *)0x0) {
    fVar4 = UI_ChatPlayerNameOverlay__PreferredNameWidth(pUVar1,method_00);
    return fVar4;
  }
label_05d1874f:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineClickHandler$$Initialize
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__Initialize (UI_ChatPanel_ChatLineClickHandler_o* __this, UI_ChatPanel_ChatLineView_o* lineView, TMPro_TMP_InputField_o* chatInput, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x5d181e0

void UI_ChatPanel_ChatLineClickHandler__Initialize
               (UI_ChatPanel_ChatLineClickHandler_o *__this,UI_ChatPanel_ChatLineView_o *lineView,
               TMPro_TMP_InputField_o *chatInput,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  (__this->fields)._lineView = lineView;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineView);
  (__this->fields)._chatInput = chatInput;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatInput);
  (__this->fields)._chatPanel = chatPanel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanel);
  return;
}


// UI.ChatPanel.ChatLineClickHandler$$OnPointerClick
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__OnPointerClick (UI_ChatPanel_ChatLineClickHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d19330

void UI_ChatPanel_ChatLineClickHandler__OnPointerClick
               (UI_ChatPanel_ChatLineClickHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_ChatPanel_ChatLineView_o *__this_00;
  
  __this_00 = (__this->fields)._lineView;
  if (__this_00 == (UI_ChatPanel_ChatLineView_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ChatPanel_ChatLineView__HandlePointerClick(__this_00,eventData,method);
  return;
}


// UI.ChatPanel.ChatLineClickHandler$$OnScroll
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__OnScroll (UI_ChatPanel_ChatLineClickHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d19350

void UI_ChatPanel_ChatLineClickHandler__OnScroll
               (UI_ChatPanel_ChatLineClickHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  UI_ChatScrollRect_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d80 = '\x01';
  }
  pUVar1 = (__this->fields)._chatPanel;
  if (pUVar1 != (UI_ChatPanel_o *)0x0) {
    pUVar2 = (pUVar1->fields)._scrollRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pUVar1 = (__this->fields)._chatPanel;
    if ((pUVar1 != (UI_ChatPanel_o *)0x0) &&
       (pUVar2 = (pUVar1->fields)._scrollRect, pUVar2 != (UI_ChatScrollRect_o *)0x0)) {
      (*(pUVar2->klass->vtable)._42_OnScroll.methodPtr)
                (pUVar2,eventData,(pUVar2->klass->vtable)._42_OnScroll.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineClickHandler$$.ctor
// il2cpp: void UI_ChatPanel_ChatLineClickHandler___ctor (UI_ChatPanel_ChatLineClickHandler_o* __this, const MethodInfo* method);
// 0x5d193f0

void UI_ChatPanel_ChatLineClickHandler___ctor(UI_ChatPanel_ChatLineClickHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c$$.cctor
// il2cpp: void UI_ChatPanel___c___cctor (const MethodInfo* method);
// 0x5d19400

void UI_ChatPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    Il2CppMethodInitialized_07547d81 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_ChatPanel_c->static_fields->__9 = (UI_ChatPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel_c->static_fields->__9);
  return;
}


// UI.ChatPanel.<>c$$.ctor
// il2cpp: void UI_ChatPanel___c___ctor (UI_ChatPanel___c_o* __this, const MethodInfo* method);
// 0x5d19470

void UI_ChatPanel___c___ctor(UI_ChatPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c$$<Setup>b__61_3
// il2cpp: uint16_t UI_ChatPanel___c___Setup_b__61_3 (UI_ChatPanel___c_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x5d19480

uint16_t UI_ChatPanel___c___Setup_b__61_3
                   (UI_ChatPanel___c_o *__this,System_String_o *text,int32_t charIndex,uint16_t addedChar,
                   MethodInfo *method)

{
  if ((addedChar < 0x1c) && ((0x8002400U >> (addedChar & 0x1f) & 1) != 0)) {
    addedChar = 0;
  }
  return addedChar;
}


// UI.ChatPanel.<>c$$<OnNotificationBadgeClicked>b__66_0
// il2cpp: bool UI_ChatPanel___c___OnNotificationBadgeClicked_b__66_0 (UI_ChatPanel___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d194a0

bool UI_ChatPanel___c___OnNotificationBadgeClicked_b__66_0
               (UI_ChatPanel___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  int32_t playerID;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547d82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_07547d82 = '\x01';
  }
  if (p == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  playerID = (p->fields).actorNumber;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar1 = GameManagers_ChatManager__HasActivePMNotification(playerID,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = GameManagers_ChatManager__HasActivePMNotification(playerID,(MethodInfo *)0x0);
  return bVar1;
}


// UI.ChatPanel.<>c$$<ValidatePMState>b__116_0
// il2cpp: bool UI_ChatPanel___c___ValidatePMState_b__116_0 (UI_ChatPanel___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d19500

bool UI_ChatPanel___c___ValidatePMState_b__116_0
               (UI_ChatPanel___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar1;
  Photon_Realtime_Room_o *pPVar2;
  
  if (Il2CppMethodInitialized_07547d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547d83 = '\x01';
  }
  if (p == (Photon_Realtime_Player_o *)0x0) {
    return true;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if ((pPVar2 == (Photon_Realtime_Room_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(pPVar2->fields).players,
     __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_int__object___ContainsValue
                    (__this_00,(Il2CppObject *)p,
                     (MethodInfo_4A0F970 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
  return !bVar1;
}


// UI.ChatPanel.<>c__DisplayClass113_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass113_0___ctor (UI_ChatPanel___c__DisplayClass113_0_o* __this, const MethodInfo* method);
// 0x5d16240

void UI_ChatPanel___c__DisplayClass113_0___ctor
               (UI_ChatPanel___c__DisplayClass113_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass113_0$$<EnterPMMode>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass113_0___EnterPMMode_b__0 (UI_ChatPanel___c__DisplayClass113_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d19580

bool UI_ChatPanel___c__DisplayClass113_0___EnterPMMode_b__0
               (UI_ChatPanel___c__DisplayClass113_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p == (Photon_Realtime_Player_o *)0x0) ||
     (pPVar1 = (__this->fields).target, pPVar1 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
}


// UI.ChatPanel.<>c__DisplayClass115_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass115_0___ctor (UI_ChatPanel___c__DisplayClass115_0_o* __this, const MethodInfo* method);
// 0x5d16b30

void UI_ChatPanel___c__DisplayClass115_0___ctor
               (UI_ChatPanel___c__DisplayClass115_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass115_0$$<RemovePMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass115_0___RemovePMPartner_b__0 (UI_ChatPanel___c__DisplayClass115_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d195a0

bool UI_ChatPanel___c__DisplayClass115_0___RemovePMPartner_b__0
               (UI_ChatPanel___c__DisplayClass115_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p == (Photon_Realtime_Player_o *)0x0) ||
     (pPVar1 = (__this->fields).player, pPVar1 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
}


// UI.ChatPanel.<>c__DisplayClass120_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass120_0___ctor (UI_ChatPanel___c__DisplayClass120_0_o* __this, const MethodInfo* method);
// 0x5d16b80

void UI_ChatPanel___c__DisplayClass120_0___ctor
               (UI_ChatPanel___c__DisplayClass120_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass120_0$$<CycleToPMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass120_0___CycleToPMPartner_b__0 (UI_ChatPanel___c__DisplayClass120_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d195c0

bool UI_ChatPanel___c__DisplayClass120_0___CycleToPMPartner_b__0
               (UI_ChatPanel___c__DisplayClass120_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (((p == (Photon_Realtime_Player_o *)0x0) ||
      (pUVar1 = (__this->fields).__4__this, pUVar1 == (UI_ChatPanel_o *)0x0)) ||
     (pPVar2 = (pUVar1->fields)._currentPMTarget, pPVar2 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (p->fields).actorNumber == (pPVar2->fields).actorNumber;
}


// UI.ChatPanel.<>c__DisplayClass120_0$$<CycleToPMPartner>b__1
// il2cpp: bool UI_ChatPanel___c__DisplayClass120_0___CycleToPMPartner_b__1 (UI_ChatPanel___c__DisplayClass120_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d195f0

bool UI_ChatPanel___c__DisplayClass120_0___CycleToPMPartner_b__1
               (UI_ChatPanel___c__DisplayClass120_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (((p == (Photon_Realtime_Player_o *)0x0) ||
      (pUVar1 = (__this->fields).__4__this, pUVar1 == (UI_ChatPanel_o *)0x0)) ||
     (pPVar2 = (pUVar1->fields)._currentPMTarget, pPVar2 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (p->fields).actorNumber == (pPVar2->fields).actorNumber;
}


// UI.ChatPanel.<>c__DisplayClass120_0$$<CycleToPMPartner>b__2
// il2cpp: bool UI_ChatPanel___c__DisplayClass120_0___CycleToPMPartner_b__2 (UI_ChatPanel___c__DisplayClass120_0_o* __this, Photon_Realtime_Player_o* p2, const MethodInfo* method);
// 0x5d19620

bool UI_ChatPanel___c__DisplayClass120_0___CycleToPMPartner_b__2
               (UI_ChatPanel___c__DisplayClass120_0_o *__this,Photon_Realtime_Player_o *p2,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  System_Collections_Generic_List_Player__o *__this_00;
  Photon_Realtime_Player_o *pPVar3;
  
  if (Il2CppMethodInitialized_07547d84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    Il2CppMethodInitialized_07547d84 = '\x01';
  }
  if (((p2 != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar2 = (__this->fields).__4__this, pUVar2 != (UI_ChatPanel_o *)0x0)) &&
     (__this_00 = (pUVar2->fields)._pmPartners, __this_00 != (System_Collections_Generic_List_Player__o *)0x0)
     ) {
    iVar1 = (p2->fields).actorNumber;
    pPVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).currentIndexInRecency,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Player_get_Item);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      return iVar1 == (pPVar3->fields).actorNumber;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass121_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass121_0___ctor (UI_ChatPanel___c__DisplayClass121_0_o* __this, const MethodInfo* method);
// 0x5d172a0

void UI_ChatPanel___c__DisplayClass121_0___ctor
               (UI_ChatPanel___c__DisplayClass121_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass121_0$$<GetPmPartnersByRecency>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass121_0___GetPmPartnersByRecency_b__0 (UI_ChatPanel___c__DisplayClass121_0_o* __this, Photon_Realtime_Player_o* r, const MethodInfo* method);
// 0x5d19690

bool UI_ChatPanel___c__DisplayClass121_0___GetPmPartnersByRecency_b__0
               (UI_ChatPanel___c__DisplayClass121_0_o *__this,Photon_Realtime_Player_o *r,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((r == (Photon_Realtime_Player_o *)0x0) ||
     (pPVar1 = (__this->fields).p, pPVar1 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (r->fields).actorNumber == (pPVar1->fields).actorNumber;
}


// UI.ChatPanel.<>c__DisplayClass122_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass122_0___ctor (UI_ChatPanel___c__DisplayClass122_0_o* __this, const MethodInfo* method);
// 0x5d172b0

void UI_ChatPanel___c__DisplayClass122_0___ctor
               (UI_ChatPanel___c__DisplayClass122_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass122_0$$<AddPMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass122_0___AddPMPartner_b__0 (UI_ChatPanel___c__DisplayClass122_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d196b0

bool UI_ChatPanel___c__DisplayClass122_0___AddPMPartner_b__0
               (UI_ChatPanel___c__DisplayClass122_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p == (Photon_Realtime_Player_o *)0x0) ||
     (pPVar1 = (__this->fields).player, pPVar1 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
}


// UI.ChatPanel.<>c__DisplayClass137_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass137_0___ctor (UI_ChatPanel___c__DisplayClass137_0_o* __this, const MethodInfo* method);
// 0x5d17c00

void UI_ChatPanel___c__DisplayClass137_0___ctor
               (UI_ChatPanel___c__DisplayClass137_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass137_0$$<RestorePMPartners>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass137_0___RestorePMPartners_b__0 (UI_ChatPanel___c__DisplayClass137_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x5d196d0

bool UI_ChatPanel___c__DisplayClass137_0___RestorePMPartners_b__0
               (UI_ChatPanel___c__DisplayClass137_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  if (p == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (p->fields).actorNumber == (__this->fields).partnerID;
}


// UI.ChatPanel.<>c__DisplayClass59_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass59_0___ctor (UI_ChatPanel___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x5d08d70

void UI_ChatPanel___c__DisplayClass59_0___ctor
               (UI_ChatPanel___c__DisplayClass59_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass59_0$$<ProcessEmojiCodes>b__0
// il2cpp: System_String_o* UI_ChatPanel___c__DisplayClass59_0___ProcessEmojiCodes_b__0 (UI_ChatPanel___c__DisplayClass59_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x5d196f0

System_String_o *
UI_ChatPanel___c__DisplayClass59_0___ProcessEmojiCodes_b__0
          (UI_ChatPanel___c__DisplayClass59_0_o *__this,System_Text_RegularExpressions_Match_o *match,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  bool bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_01;
  System_Text_RegularExpressions_Group_o *__this_02;
  System_String_o *__this_03;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  System_String_o **ppSVar3;
  int iStack_2c;
  int32_t iStack_28;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_07547d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}>");
    il2cpp_codegen_initialize_runtime_metadata(&"s\xe2\x80\x8b\xe2\x80\x8b");
    il2cpp_codegen_initialize_runtime_metadata(&"\n<size=60><sprite={0}></size>");
    Il2CppMethodInitialized_07547d85 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  if ((((match == (System_Text_RegularExpressions_Match_o *)0x0) ||
       (__this_01 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                              (match,(match->klass->vtable)._5_get_Groups.method),
       __this_01 == (System_Text_RegularExpressions_GroupCollection_o *)0x0)) ||
      (__this_02 = System_Text_RegularExpressions_GroupCollection__get_Item(__this_01,1,(MethodInfo *)0x0),
      __this_02 == (System_Text_RegularExpressions_Group_o *)0x0)) ||
     (__this_03 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)__this_02,(MethodInfo *)0x0),
     pSVar2 = "s\xe2\x80\x8b\xe2\x80\x8b", __this_03 == (System_String_o *)0x0)) {
label_05d198f4:
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(__this_03,"s\xe2\x80\x8b\xe2\x80\x8b",(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields).stickerFound != false) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if (pSVar2 == (System_String_o *)0x0) goto label_05d198f4;
    pSVar2 = System_String__Substring(__this_03,(pSVar2->fields)._stringLength,(MethodInfo *)0x0);
    bVar1 = System_Int32__TryParse(pSVar2,&iStack_28,(MethodInfo *)0x0);
    if (((!bVar1) || (iStack_28 < 0)) || (0x8c < iStack_28)) {
label_05d198de:
      pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
      return pSVar2;
    }
    (__this->fields).stickerFound = true;
    iStack_2c = iStack_28;
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
    ppSVar3 = &"\n<size=60><sprite={0}></size>";
  }
  else {
    pSVar2 = System_String__ToLower(__this_03,(MethodInfo *)0x0);
    if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                TypeInfo_UI_ChatPanel->static_fields->EmojiNameToIndex;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_05d198f4;
    bVar1 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                      (__this_00,(Il2CppObject *)pSVar2,&iStack_24,
                       (MethodInfo_4A9F630 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    if (!bVar1) goto label_05d198de;
    iStack_2c = iStack_24;
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
    ppSVar3 = &"<sprite={0}>";
  }
  pSVar2 = System_String__Format(*ppSVar3,arg0,(MethodInfo *)0x0);
  return pSVar2;
}


// UI.ChatPanel.<>c__DisplayClass61_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass61_0___ctor (UI_ChatPanel___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5d0b300

void UI_ChatPanel___c__DisplayClass61_0___ctor
               (UI_ChatPanel___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass61_0$$<Setup>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass61_0___Setup_b__0 (UI_ChatPanel___c__DisplayClass61_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5d19900

void UI_ChatPanel___c__DisplayClass61_0___Setup_b__0
               (UI_ChatPanel___c__DisplayClass61_0_o *__this,System_String_o *value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  
  pTVar1 = (__this->fields).tmpText;
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(value,(pTVar1->fields).m_fontAsset,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass61_0$$<Setup>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass61_0___Setup_b__1 (UI_ChatPanel___c__DisplayClass61_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x5d19930

void UI_ChatPanel___c__DisplayClass61_0___Setup_b__1
               (UI_ChatPanel___c__DisplayClass61_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  UI_ChatScrollRect_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields).scrollRect;
  if (pUVar1 != (UI_ChatScrollRect_o *)0x0) {
    (pUVar1->fields).isMouseOver = true;
    if (Il2CppMethodInitialized_07547d98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d98 = '\x01';
    }
    pUVar2 = (pUVar1->fields).handleImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pUVar2 = (pUVar1->fields).handleImage;
    bVar3 = true;
    if ((pUVar1->fields).isMouseOver == false) {
      bVar3 = (pUVar1->fields).isDragging != false;
    }
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,bVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass61_0$$<Setup>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass61_0___Setup_b__2 (UI_ChatPanel___c__DisplayClass61_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x5d19a80

void UI_ChatPanel___c__DisplayClass61_0___Setup_b__2
               (UI_ChatPanel___c__DisplayClass61_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  UI_ChatScrollRect_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields).scrollRect;
  if (pUVar1 != (UI_ChatScrollRect_o *)0x0) {
    if (Il2CppMethodInitialized_07547d97 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d97 = '\x01';
    }
    (pUVar1->fields).isMouseOver = false;
    pUVar2 = (pUVar1->fields).handleImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar3) || ((pUVar1->fields).isDragging != false)) {
      return;
    }
    pUVar2 = (pUVar1->fields).handleImage;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass70_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass70_0___ctor (UI_ChatPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d0f0f0

void UI_ChatPanel___c__DisplayClass70_0___ctor
               (UI_ChatPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__0 (UI_ChatPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d19bb0

void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__0
               (UI_ChatPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ChatPanel__SetPanelMode(__this_00,0,in_RDX);
  return;
}


// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__1 (UI_ChatPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d19bd0

void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__1
               (UI_ChatPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ChatPanel__SetPanelMode(__this_00,1,in_RDX);
  return;
}


// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__2 (UI_ChatPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d19bf0

void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__2
               (UI_ChatPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  TMPro_TextMeshProUGUI_o *tooltipText;
  uint uVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (__this_00->fields)._emojiPage - 1;
  method_00 = (MethodInfo *)&g_data_00000008;
  if ((int)uVar1 < 8) {
    method_00 = (MethodInfo *)(ulong)uVar1;
  }
  iVar2 = 0;
  if (0 < (int)method_00) {
    iVar2 = (int)method_00;
  }
  tooltipText = (__this->fields).tooltipText;
  (__this_00->fields)._emojiPage = iVar2;
  UI_ChatPanel__AddEmojiButtons(__this_00,tooltipText,method_00);
  return;
}


// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__3
// il2cpp: void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__3 (UI_ChatPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d19c30

void UI_ChatPanel___c__DisplayClass70_0___CreateEmojiPanel_b__3
               (UI_ChatPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  TMPro_TextMeshProUGUI_o *tooltipText;
  uint uVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (__this_00->fields)._emojiPage + 1;
  method_00 = (MethodInfo *)&g_data_00000008;
  if ((int)uVar1 < 8) {
    method_00 = (MethodInfo *)(ulong)uVar1;
  }
  iVar2 = 0;
  if (0 < (int)method_00) {
    iVar2 = (int)method_00;
  }
  tooltipText = (__this->fields).tooltipText;
  (__this_00->fields)._emojiPage = iVar2;
  UI_ChatPanel__AddEmojiButtons(__this_00,tooltipText,method_00);
  return;
}


// UI.ChatPanel.<>c__DisplayClass72_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass72_0___ctor (UI_ChatPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5d10150

void UI_ChatPanel___c__DisplayClass72_0___ctor
               (UI_ChatPanel___c__DisplayClass72_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__0 (UI_ChatPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5d19c70

void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__0
               (UI_ChatPanel___c__DisplayClass72_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ChatPanel__InsertSticker(__this_00,(__this->fields).spriteIndex,in_RDX);
  return;
}


// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__1 (UI_ChatPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5d19c90

void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__1
               (UI_ChatPanel___c__DisplayClass72_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ChatPanel__InsertEmoji(__this_00,(__this->fields).spriteIndex,in_RDX);
  return;
}


// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__2 (UI_ChatPanel___c__DisplayClass72_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x5d19cb0

void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__2
               (UI_ChatPanel___c__DisplayClass72_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07547d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":{0}:");
    Il2CppMethodInitialized_07547d86 = '\x01';
  }
  pTVar1 = (__this->fields).tooltipText;
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  pSVar2 = System_String__Format(":{0}:",arg0,(MethodInfo *)0x0);
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._66_set_text.methodPtr)(pTVar1,pSVar2,(pTVar1->klass->vtable)._66_set_text.method)
  ;
  return;
}


// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__3
// il2cpp: void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__3 (UI_ChatPanel___c__DisplayClass72_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x5d19d30

void UI_ChatPanel___c__DisplayClass72_0___CreateSpriteButton_b__3
               (UI_ChatPanel___c__DisplayClass72_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  
  if (Il2CppMethodInitialized_07547d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d87 = '\x01';
  }
  pTVar1 = (__this->fields).tooltipText;
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
            (pTVar1,"",(pTVar1->klass->vtable)._66_set_text.method);
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__118$$.ctor
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__118___ctor (UI_ChatPanel__ResetPMToggleActive_d__118_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d16b50

void UI_ChatPanel__ResetPMToggleActive_d__118___ctor
               (UI_ChatPanel__ResetPMToggleActive_d__118_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__118$$System.IDisposable.Dispose
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__118__System_IDisposable_Dispose (UI_ChatPanel__ResetPMToggleActive_d__118_o* __this, const MethodInfo* method);
// 0x5d19d80

void UI_ChatPanel__ResetPMToggleActive_d__118__System_IDisposable_Dispose
               (UI_ChatPanel__ResetPMToggleActive_d__118_o *__this,MethodInfo *method)

{
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__118$$MoveNext
// il2cpp: bool UI_ChatPanel__ResetPMToggleActive_d__118__MoveNext (UI_ChatPanel__ResetPMToggleActive_d__118_o* __this, const MethodInfo* method);
// 0x5d19d90

bool UI_ChatPanel__ResetPMToggleActive_d__118__MoveNext
               (UI_ChatPanel__ResetPMToggleActive_d__118_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_07547d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547d88 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.2,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pUVar2 == (UI_ChatPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pUVar2->fields)._pmToggleActive = false;
  }
  return iVar1 == 0;
}


// UI.ChatPanel.<ResetPMToggleActive>d__118$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ResetPMToggleActive_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ChatPanel__ResetPMToggleActive_d__118_o* __this, const MethodInfo* method);
// 0x5d19e30

Il2CppObject *
UI_ChatPanel__ResetPMToggleActive_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_ChatPanel__ResetPMToggleActive_d__118_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ResetPMToggleActive>d__118$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__118__System_Collections_IEnumerator_Reset (UI_ChatPanel__ResetPMToggleActive_d__118_o* __this, const MethodInfo* method);
// 0x5d19e40

void UI_ChatPanel__ResetPMToggleActive_d__118__System_Collections_IEnumerator_Reset
               (UI_ChatPanel__ResetPMToggleActive_d__118_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_ChatPanel_ResetPMToggleActive_d__118_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.ChatPanel.<ResetPMToggleActive>d__118$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ResetPMToggleActive_d__118__System_Collections_IEnumerator_get_Current (UI_ChatPanel__ResetPMToggleActive_d__118_o* __this, const MethodInfo* method);
// 0x5d19e80

Il2CppObject *
UI_ChatPanel__ResetPMToggleActive_d__118__System_Collections_IEnumerator_get_Current
          (UI_ChatPanel__ResetPMToggleActive_d__118_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__73$$.ctor
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__73___ctor (UI_ChatPanel__ShowTemporaryTooltip_d__73_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d101f0

void UI_ChatPanel__ShowTemporaryTooltip_d__73___ctor
               (UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.IDisposable.Dispose
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__73__System_IDisposable_Dispose (UI_ChatPanel__ShowTemporaryTooltip_d__73_o* __this, const MethodInfo* method);
// 0x5d19e90

void UI_ChatPanel__ShowTemporaryTooltip_d__73__System_IDisposable_Dispose
               (UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this,MethodInfo *method)

{
  return;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__73$$MoveNext
// il2cpp: bool UI_ChatPanel__ShowTemporaryTooltip_d__73__MoveNext (UI_ChatPanel__ShowTemporaryTooltip_d__73_o* __this, const MethodInfo* method);
// 0x5d19ea0

bool UI_ChatPanel__ShowTemporaryTooltip_d__73__MoveNext
               (UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547d89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_07547d89 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pTVar2 = (__this->fields).tooltip;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar2 = (__this->fields).tooltip;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                  (pTVar2,(__this->fields)._prev_5__2,(pTVar2->klass->vtable)._66_set_text.method);
        pTVar2 = (__this->fields).tooltip;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_fontSize
                    ((TMPro_TMP_Text_o *)pTVar2,(__this->fields)._prevSize_5__3,(MethodInfo *)0x0);
          return false;
        }
      }
label_05d1a066:
      ThrowNullReferenceException();
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pTVar2 = (__this->fields).tooltip;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pTVar2 = (__this->fields).tooltip;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar4 = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                           (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
        (__this->fields)._prev_5__2 = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._prev_5__2);
        pTVar2 = (__this->fields).tooltip;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (__this->fields)._prevSize_5__3 = (pTVar2->fields).m_fontSize;
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,(__this->fields).message,(pTVar2->klass->vtable)._66_set_text.method);
          pTVar2 = (__this->fields).tooltip;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            fVar5 = (__this->fields)._prevSize_5__3;
            if (10.0 <= fVar5) {
              fVar5 = 10.0;
            }
            TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar2,fVar5,(MethodInfo *)0x0);
            fVar5 = (__this->fields).duration;
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
            UnityEngine_WaitForSecondsRealtime___ctor(__this_00,fVar5,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
      }
      goto label_05d1a066;
    }
  }
  return false;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ShowTemporaryTooltip_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ChatPanel__ShowTemporaryTooltip_d__73_o* __this, const MethodInfo* method);
// 0x5d1a070

Il2CppObject *
UI_ChatPanel__ShowTemporaryTooltip_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__73__System_Collections_IEnumerator_Reset (UI_ChatPanel__ShowTemporaryTooltip_d__73_o* __this, const MethodInfo* method);
// 0x5d1a080

void UI_ChatPanel__ShowTemporaryTooltip_d__73__System_Collections_IEnumerator_Reset
               (UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_ChatPanel_ShowTemporaryTooltip_d__73_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ShowTemporaryTooltip_d__73__System_Collections_IEnumerator_get_Current (UI_ChatPanel__ShowTemporaryTooltip_d__73_o* __this, const MethodInfo* method);
// 0x5d1a0c0

Il2CppObject *
UI_ChatPanel__ShowTemporaryTooltip_d__73__System_Collections_IEnumerator_get_Current
          (UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel$$get_POOL_SIZE
// il2cpp: int32_t UI_ChatPanel__get_POOL_SIZE (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d08a40

int32_t UI_ChatPanel__get_POOL_SIZE(UI_ChatPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07547d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_07547d35 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    iVar2 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
    return iVar2;
  }
  iVar2 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
  return iVar2;
}


// UI.ChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ChatPanel__get_ThemePanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d08aa0

System_String_o * UI_ChatPanel__get_ThemePanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ChatPanel");
    Il2CppMethodInitialized_07547d36 = '\x01';
  }
  return "ChatPanel";
}


// UI.ChatPanel$$.cctor
// il2cpp: void UI_ChatPanel___cctor (const MethodInfo* method);
// 0x5d08ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d08c1d: nop dword ptr [rax]

void UI_ChatPanel___cctor(MethodInfo *method)

{
  UI_ChatPanel_StaticFields *pUVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  System_String_o *key;
  int32_t local_24;
  
  if (Il2CppMethodInitialized_07547d37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&":([^:\\s]+):");
    il2cpp_codegen_initialize_runtime_metadata(&"<[^>]+>|</[^>]+>");
    Il2CppMethodInitialized_07547d37 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"<[^>]+>|</[^>]+>",8,(MethodInfo *)0x0);
  TypeInfo_UI_ChatPanel->static_fields->_richTextPattern = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel->static_fields->_richTextPattern);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,":([^:\\s]+):",8,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_UI_ChatPanel->static_fields;
  pUVar1->_emojiPattern = pSVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->_emojiPattern);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  pUVar1 = TypeInfo_UI_ChatPanel->static_fields;
  pUVar1->EmojiNameToIndex = __this_00;
  Il2CppCodeGenWriteBarrier(&pUVar1->EmojiNameToIndex);
  local_24 = 0;
  do {
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             TypeInfo_UI_ChatPanel->static_fields->EmojiNameToIndex;
    key = System_Int32__ToString(&local_24,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__int___set_Item
              (__this,(Il2CppObject *)key,local_24,
               (MethodInfo_4A9D760 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    local_24 = local_24 + 1;
  } while (local_24 < 0x8d);
  return;
}


// UI.ChatPanel$$ProcessEmojiCodes
// il2cpp: System_String_o* UI_ChatPanel__ProcessEmojiCodes (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d08c80

System_String_o *
UI_ChatPanel__ProcessEmojiCodes(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  UI_ChatPanel___c__DisplayClass59_0_o *__this_01;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_02;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547d38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass59_0_ProcessEmojiCodes_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass59_0);
    Il2CppMethodInitialized_07547d38 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass59_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass59_0_o *)0x0) {
    (__this_01->fields).stickerFound = false;
    if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
    }
    __this_00 = TypeInfo_UI_ChatPanel->static_fields->_emojiPattern;
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass59_0_ProcessEmojiCodes_b__0,(MethodInfo *)0x0)
    ;
    if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar1 = System_Text_RegularExpressions_Regex__Replace_61e3fe0
                         (__this_00,text,__this_02,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$Setup
// il2cpp: void UI_ChatPanel__Setup (UI_ChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d08d80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d09d33: jmp 0x5d09d4d
// asm:   0x5d0a7d9: jmp 0x5d0a868

void UI_ChatPanel__Setup(UI_ChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  TMPro_TMP_InputField_o **targetAddress;
  UI_ChatPanel___c__DisplayClass61_0_Fields *targetAddress_00;
  UnityEngine_GameObject_o **targetAddress_01;
  UI_ChatScrollRect_o **targetAddress_02;
  int32_t *piVar1;
  TMPro_TextMeshProUGUI_o **targetAddress_03;
  UnityEngine_CanvasGroup_o **targetAddress_04;
  UnityEngine_UI_Image_o **targetAddress_05;
  int iVar2;
  uint uVar3;
  TMPro_TMP_InputField_OnChangeEvent_o *pTVar4;
  TMPro_TMP_InputField_SubmitEvent_o *pTVar5;
  Settings_UISettings_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_ColorSetting_o *pSVar8;
  Utility_Color255_o *__this_00;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *__this_01;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar9;
  UnityEngine_Events_UnityEvent_T0__o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  UnityEngine_Vector2_o UVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  Il2CppType *pIVar16;
  MethodInfo *pMVar17;
  bool bVar18;
  UI_ChatPanel___c__DisplayClass61_0_o *__this_03;
  UnityEngine_GameObject_o *pUVar19;
  System_Action_o *__this_04;
  Utility_GUICallback_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_UI_InputField_o *__this_05;
  System_Type_array *pSVar22;
  System_Type_o *pSVar23;
  Il2CppObject *pIVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_RectTransform_o *pUVar26;
  UnityEngine_RectTransform_o *pUVar27;
  TMPro_TMP_InputField_o *pTVar28;
  UnityEngine_GameObject_o *pUVar29;
  UnityEngine_GameObject_o *pUVar30;
  TMPro_TextMeshProUGUI_o *pTVar31;
  TMPro_TMP_FontAsset_o *value_01;
  System_String_o *pSVar32;
  UnityEngine_CanvasGroup_o *pUVar33;
  UnityEngine_Events_UnityAction_T0__o *pUVar34;
  UI_ChatPanel___c_StaticFields *pUVar35;
  TMPro_TMP_InputField_OnValidateInput_o *__this_06;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar36;
  System_Action_int__o *__this_07;
  UnityEngine_UI_RectMask2D_o *x;
  UI_ElementStyle_o *__this_08;
  UnityEngine_UI_Image_o *pUVar37;
  UnityEngine_Object_o *obj;
  MethodInfo *pMVar38;
  UnityEngine_UI_LayoutElement_o *pUVar39;
  Photon_Realtime_Room_o *pPVar40;
  Photon_Realtime_Player_o *target;
  Photon_Realtime_Player_o *pPVar41;
  UI_ChatScrollRect_o *pUVar42;
  UnityEngine_UI_Scrollbar_o *__this_09;
  UnityEngine_Transform_o *pUVar43;
  UnityEngine_EventSystems_EventTrigger_o *__this_10;
  UnityEngine_EventSystems_EventTrigger_Entry_o *__this_11;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar44;
  Il2CppRGCTXData *method_00;
  int32_t iVar45;
  MethodInfo *method_01;
  UI_ChatScrollRect_o **targetAddress_06;
  System_ValueTuple_string__int__int__o SVar46;
  System_ValueTuple_string__int__o SVar47;
  UnityEngine_Color_o UVar48;
  UnityEngine_Color_o UVar49;
  UnityEngine_Color_o UVar50;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  if (Il2CppMethodInitialized_07547d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_HandleKeys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnEndEdit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnSubmit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_ChatScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ChatScrollRect)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c_Setup_b__61_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass61_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Handle");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"InputTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    il2cpp_codegen_initialize_runtime_metadata(&"TMPInputField");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Text Area");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"InputSelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Sliding Area");
    Il2CppMethodInitialized_07547d39 = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass61_0);
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_04,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_HandleKeys,(MethodInfo *)0x0);
  pUVar20 = Utility_GUICallback__Create(pUVar19,__this_04,(MethodInfo *)0x0);
  (__this->fields)._keyHandler = pUVar20;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._keyHandler);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar21 = UnityEngine_Transform__Find(pUVar21,"InputField",(MethodInfo *)0x0),
     pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05d0b2d4;
  __this_05 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar21,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pIVar16 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar23 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar16,(MethodInfo *)0x0);
  if (pSVar22 == (System_Type_array *)0x0) goto label_05d0b2d4;
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
  pSVar22->m_Items[0] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TMP_InputField,(MethodInfo *)0x0);
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_05d0b2d9;
  pSVar22->m_Items[1] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar19,"TMPInputField",pSVar22,(MethodInfo *)0x0);
  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
  pUVar25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
     (UnityEngine_Transform__SetParent_692d510(pUVar21,pUVar25,false,(MethodInfo *)0x0),
     __this_05 == (UnityEngine_UI_InputField_o *)0x0)) goto label_05d0b2d4;
  pUVar26 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this_05,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  pUVar27 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar19,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if ((pUVar26 == (UnityEngine_RectTransform_o *)0x0) ||
     (UVar11 = UnityEngine_RectTransform__get_anchorMin(pUVar26,(MethodInfo *)0x0),
     pUVar27 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d0b2d4;
  UnityEngine_RectTransform__set_anchorMin(pUVar27,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_anchorMax(pUVar26,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax(pUVar27,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_pivot(pUVar26,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(pUVar27,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar26,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar27,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar26,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar27,UVar11,(MethodInfo *)0x0);
  pTVar28 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar19,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  targetAddress = &(__this->fields)._inputField;
  (__this->fields)._inputField = pTVar28;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pTVar28 = (__this->fields)._inputField;
  if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_characterLimit(pTVar28,500,(MethodInfo *)0x0);
  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar22 == (System_Type_array *)0x0) goto label_05d0b2d4;
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
  pSVar22->m_Items[0] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
  pUVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar29,"Text Area",pSVar22,(MethodInfo *)0x0);
  if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Transform__SetParent_692d510(pUVar21,pUVar25,false,(MethodInfo *)0x0);
  pUVar26 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar29,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
  }
  if (pUVar26 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar26,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar26,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar26,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  UnityEngine_GameObject__AddComponent_object_
            (pUVar29,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar22 == (System_Type_array *)0x0) goto label_05d0b2d4;
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
  pSVar22->m_Items[0] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_05d0b2d9;
  pSVar22->m_Items[1] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
  pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar30,"Text",pSVar22,(MethodInfo *)0x0);
  if (pUVar30 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Transform__SetParent_692d510(pUVar21,pUVar25,false,(MethodInfo *)0x0);
  pUVar27 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar30,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar27 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar27,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar27,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar27,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  pTVar31 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar30,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  if (__this_03 == (UI_ChatPanel___c__DisplayClass61_0_o *)0x0) goto label_05d0b2d4;
  targetAddress_00 = &__this_03->fields;
  (__this_03->fields).tmpText = pTVar31;
  Il2CppCodeGenWriteBarrier(&targetAddress_00->tmpText);
  pTVar31 = (__this_03->fields).tmpText;
  if (pTVar31 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar31,false,(MethodInfo *)0x0);
  if (targetAddress_00->tmpText == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)targetAddress_00->tmpText,false,(MethodInfo *)0x0);
  if (targetAddress_00->tmpText == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)targetAddress_00->tmpText,4,(MethodInfo *)0x0);
  if (targetAddress_00->tmpText == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_horizontalAlignment((TMPro_TMP_Text_o *)targetAddress_00->tmpText,1,(MethodInfo *)0x0);
  if (targetAddress_00->tmpText == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_verticalAlignment((TMPro_TMP_Text_o *)targetAddress_00->tmpText,0x200,(MethodInfo *)0x0)
  ;
  if (targetAddress_00->tmpText == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)targetAddress_00->tmpText,20.0,(MethodInfo *)0x0);
  value_01 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                       ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (targetAddress_00->tmpText == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)targetAddress_00->tmpText,value_01,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_textViewport(*targetAddress,pUVar26,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_textComponent
            (*targetAddress,(TMPro_TMP_Text_o *)targetAddress_00->tmpText,(MethodInfo *)0x0);
  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar22 == (System_Type_array *)0x0) goto label_05d0b2d4;
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
  pSVar22->m_Items[0] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_05d0b2d9;
  pSVar22->m_Items[1] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasGroup,(MethodInfo *)0x0);
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((uint)pSVar22->max_length < 3) goto label_05d0b2d9;
  pSVar22->m_Items[2] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 2);
  pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar30,"Placeholder",pSVar22,(MethodInfo *)0x0);
  if (pUVar30 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Transform__SetParent_692d510(pUVar21,pUVar25,false,(MethodInfo *)0x0);
  pUVar27 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar30,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar27 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar27,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar27,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMin
            (pUVar27,(UnityEngine_Vector2_o)0xc000000000000000,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (pUVar27,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  pTVar31 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar30,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  targetAddress_03 = &(__this->fields)._placeholderText;
  (__this->fields)._placeholderText = pTVar31;
  Il2CppCodeGenWriteBarrier(targetAddress_03);
  pTVar31 = (__this->fields)._placeholderText;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar32 = UI_UIManager__GetLocale
                      ("InGame","Chat","Placeholder",""
                       ,"",(MethodInfo *)0x0);
  if (pTVar31 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  (*(pTVar31->klass->vtable)._66_set_text.methodPtr)
            (pTVar31,pSVar32,(pTVar31->klass->vtable)._66_set_text.method);
  if (*targetAddress_03 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)*targetAddress_03,18.0,(MethodInfo *)0x0);
  if (*targetAddress_03 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)*targetAddress_03,value_01,(MethodInfo *)0x0);
  if (*targetAddress_03 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*targetAddress_03,false,(MethodInfo *)0x0);
  if (*targetAddress_03 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_horizontalAlignment((TMPro_TMP_Text_o *)*targetAddress_03,1,(MethodInfo *)0x0);
  if (*targetAddress_03 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_Text__set_verticalAlignment((TMPro_TMP_Text_o *)*targetAddress_03,0x200,(MethodInfo *)0x0);
  pTVar31 = *targetAddress_03;
  if (pTVar31 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  UVar48.fields.b = 1.0;
  UVar48.fields.a = 0.3;
  UVar48.fields.r = 1.0;
  UVar48.fields.g = 1.0;
  (*(pTVar31->klass->vtable)._23_set_color.methodPtr)
            (pTVar31,UVar48,(pTVar31->klass->vtable)._23_set_color.method);
  pUVar33 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar30,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
  targetAddress_04 = &(__this->fields)._placeholderCanvasGroup;
  (__this->fields)._placeholderCanvasGroup = pUVar33;
  Il2CppCodeGenWriteBarrier(targetAddress_04);
  pUVar33 = (__this->fields)._placeholderCanvasGroup;
  if (pUVar33 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05d0b2d4;
  UnityEngine_CanvasGroup__set_alpha(pUVar33,0.0,(MethodInfo *)0x0);
  pUVar33 = *targetAddress_04;
  if (pUVar33 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05d0b2d4;
  UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar33,false,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_lineType(*targetAddress,0,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_richText(*targetAddress,false,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  pTVar4 = ((*targetAddress)->fields).m_OnValueChanged;
  pUVar34 = (UnityEngine_Events_UnityAction_T0__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
  UnityEngine_Events_UnityAction_object____ctor
            (pUVar34,(Il2CppObject *)__this_03,
             (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__0,(MethodInfo_4311A10 *)0x0);
  if (pTVar4 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Events_UnityEvent_object___AddListener
            ((UnityEngine_Events_UnityEvent_T0__o *)pTVar4,pUVar34,
             (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_inputType(*targetAddress,0,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_scrollSensitivity(*targetAddress,60.0,(MethodInfo *)0x0);
  pTVar28 = *targetAddress;
  if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  pTVar36 = (pTVar28->fields).m_OnValidateInput;
  if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
    pUVar35 = TypeInfo_UI_ChatPanel_c->static_fields;
    __this_06 = pUVar35->__9__61_3;
  }
  else {
    pUVar35 = TypeInfo_UI_ChatPanel_c->static_fields;
    __this_06 = pUVar35->__9__61_3;
  }
  if (__this_06 == (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_ChatPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
      pUVar35 = TypeInfo_UI_ChatPanel_c->static_fields;
    }
    pIVar24 = (Il2CppObject *)pUVar35->__9;
    __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor
              (__this_06,pIVar24,(intptr_t)MethodInfo_UI_ChatPanel_c_Setup_b__61_3,(MethodInfo *)0x0);
    pUVar35 = TypeInfo_UI_ChatPanel_c->static_fields;
    pUVar35->__9__61_3 = __this_06;
    Il2CppCodeGenWriteBarrier(&pUVar35->__9__61_3);
  }
  pTVar36 = (TMPro_TMP_InputField_OnValidateInput_o *)
            System_Delegate__Combine
                      ((System_Delegate_o *)pTVar36,(System_Delegate_o *)__this_06,(MethodInfo *)0x0);
  if ((pTVar36 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
     (pTVar36->klass != TypeInfo_TMPro_TMP_InputField_OnValidateInput)) {
    il2cpp_codegen_raise_invalid_cast_exception(pTVar36);
  }
  TMPro_TMP_InputField__set_onValidateInput(pTVar28,pTVar36,(MethodInfo *)0x0);
  pTVar28 = *targetAddress;
  if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  (pTVar28->fields).m_OnFocusSelectAll = false;
  lVar12 = *(long *)&(pTVar28->fields).m_Navigation.fields.m_WrapAround;
  uVar13 = *(undefined8 *)((long)&(pTVar28->fields).m_Navigation.fields.m_SelectOnUp + 4);
  uVar14 = *(undefined8 *)((long)&(pTVar28->fields).m_Navigation.fields.m_SelectOnDown + 4);
  uVar15 = *(undefined8 *)((long)&(pTVar28->fields).m_Navigation.fields.m_SelectOnLeft + 4);
  uStack_9c = (undefined4)uVar14;
  uStack_98 = (undefined4)((ulong)uVar14 >> 0x20);
  uStack_94 = (undefined4)uVar15;
  uStack_90 = (undefined4)((ulong)uVar15 >> 0x20);
  uStack_a8 = (undefined4)((ulong)lVar12 >> 0x20);
  uStack_a4 = (undefined4)uVar13;
  uStack_a0 = (undefined4)((ulong)uVar13 >> 0x20);
  value.fields.m_SelectOnRight._4_4_ =
       *(undefined4 *)((long)&(pTVar28->fields).m_Navigation.fields.m_SelectOnRight + 4);
  value.fields.m_SelectOnRight._0_4_ = uStack_90;
  lVar12 = lVar12 << 0x20;
  value.fields.m_SelectOnUp._4_4_ = uStack_a4;
  value.fields.m_SelectOnUp._0_4_ = uStack_a8;
  value.fields.m_SelectOnDown._4_4_ = uStack_9c;
  value.fields.m_SelectOnDown._0_4_ = uStack_a0;
  value.fields.m_SelectOnLeft._4_4_ = uStack_94;
  value.fields.m_SelectOnLeft._0_4_ = uStack_98;
  value.fields.m_Mode = (int)lVar12;
  value.fields.m_WrapAround = (bool)(char)((ulong)lVar12 >> 0x20);
  value.fields._5_3_ = (int3)((ulong)lVar12 >> 0x28);
  UnityEngine_UI_Selectable__set_navigation((UnityEngine_UI_Selectable_o *)pTVar28,value,(MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  pTVar4 = ((*targetAddress)->fields).m_OnValueChanged;
  pUVar34 = (UnityEngine_Events_UnityAction_T0__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
  UnityEngine_Events_UnityAction_object____ctor
            (pUVar34,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnValueChanged,
             (MethodInfo_4311A10 *)0x0);
  if (pTVar4 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Events_UnityEvent_object___AddListener
            ((UnityEngine_Events_UnityEvent_T0__o *)pTVar4,pUVar34,
             (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  pTVar5 = ((*targetAddress)->fields).m_OnEndEdit;
  pUVar34 = (UnityEngine_Events_UnityAction_T0__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
  UnityEngine_Events_UnityAction_object____ctor
            (pUVar34,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnEndEdit,
             (MethodInfo_4311A10 *)0x0);
  if (pTVar5 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Events_UnityEvent_object___AddListener
            ((UnityEngine_Events_UnityEvent_T0__o *)pTVar5,pUVar34,
             (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  pTVar5 = ((*targetAddress)->fields).m_OnSubmit;
  pUVar34 = (UnityEngine_Events_UnityAction_T0__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
  UnityEngine_Events_UnityAction_object____ctor
            (pUVar34,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnSubmit,
             (MethodInfo_4311A10 *)0x0);
  if (pTVar5 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Events_UnityEvent_object___AddListener
            ((UnityEngine_Events_UnityEvent_T0__o *)pTVar5,pUVar34,
             (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
  System_Action_int____ctor
            (__this_07,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated,(MethodInfo_4A80B60 *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__add_PlayerInfoUpdated(__this_07,(MethodInfo *)0x0);
  if ((*targetAddress == (TMPro_TMP_InputField_o *)0x0) ||
     (pUVar27 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)*targetAddress,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
     pUVar27 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d0b2d4;
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar27,(UnityEngine_Vector2_o)0x41f0000000000000,(MethodInfo *)0x0);
  x = UnityEngine_GameObject__GetComponent_object_
                (pUVar29,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar18 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar18) {
    UnityEngine_GameObject__AddComponent_object_
              (pUVar29,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
  }
  UnityEngine_RectTransform__set_offsetMin
            (pUVar26,(UnityEngine_Vector2_o)0x4000000040a00000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMax
            (pUVar26,(UnityEngine_Vector2_o)0xc0000000c2200000,(MethodInfo *)0x0);
  pSVar32 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_08,0x14,120.0,20.0,pSVar32,(MethodInfo *)0x0);
  if (__this_08 == (UI_ElementStyle_o *)0x0) goto label_05d0b2d4;
  pSVar32 = (__this_08->fields).ThemePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UI_UIManager__GetThemeColorBlock
            (&UStack_88,pSVar32,"InputField","Input","DefaultPanel",
             (MethodInfo *)0x0);
  if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  value_00.fields.m_NormalColor.fields.b = UStack_88.fields.m_NormalColor.fields.b;
  value_00.fields.m_NormalColor.fields.a = UStack_88.fields.m_NormalColor.fields.a;
  value_00.fields.m_NormalColor.fields.r = UStack_88.fields.m_NormalColor.fields.r;
  value_00.fields.m_NormalColor.fields.g = UStack_88.fields.m_NormalColor.fields.g;
  value_00.fields.m_HighlightedColor.fields.r = UStack_88.fields.m_HighlightedColor.fields.r;
  value_00.fields.m_HighlightedColor.fields.g = UStack_88.fields.m_HighlightedColor.fields.g;
  value_00.fields.m_HighlightedColor.fields.b = UStack_88.fields.m_HighlightedColor.fields.b;
  value_00.fields.m_HighlightedColor.fields.a = UStack_88.fields.m_HighlightedColor.fields.a;
  value_00.fields.m_PressedColor.fields.r = UStack_88.fields.m_PressedColor.fields.r;
  value_00.fields.m_PressedColor.fields.g = UStack_88.fields.m_PressedColor.fields.g;
  value_00.fields.m_PressedColor.fields.b = UStack_88.fields.m_PressedColor.fields.b;
  value_00.fields.m_PressedColor.fields.a = UStack_88.fields.m_PressedColor.fields.a;
  value_00.fields.m_SelectedColor.fields.r = UStack_88.fields.m_SelectedColor.fields.r;
  value_00.fields.m_SelectedColor.fields.g = UStack_88.fields.m_SelectedColor.fields.g;
  value_00.fields.m_SelectedColor.fields.b = UStack_88.fields.m_SelectedColor.fields.b;
  value_00.fields.m_SelectedColor.fields.a = UStack_88.fields.m_SelectedColor.fields.a;
  value_00.fields.m_DisabledColor.fields.r = UStack_88.fields.m_DisabledColor.fields.r;
  value_00.fields.m_DisabledColor.fields.g = UStack_88.fields.m_DisabledColor.fields.g;
  value_00.fields.m_DisabledColor.fields.b = UStack_88.fields.m_DisabledColor.fields.b;
  value_00.fields.m_DisabledColor.fields.a = UStack_88.fields.m_DisabledColor.fields.a;
  value_00.fields.m_ColorMultiplier = UStack_88.fields.m_ColorMultiplier;
  value_00.fields.m_FadeDuration = UStack_88.fields.m_FadeDuration;
  UnityEngine_UI_Selectable__set_colors
            ((UnityEngine_UI_Selectable_o *)*targetAddress,value_00,(MethodInfo *)0x0);
  pTVar31 = targetAddress_00->tmpText;
  UVar48 = UI_UIManager__GetThemeColor
                     ((__this_08->fields).ThemePanel,"InputField","InputTextColor",
                      "DefaultPanel",(MethodInfo *)0x0);
  if (pTVar31 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0b2d4;
  (*(pTVar31->klass->vtable)._23_set_color.methodPtr)
            (pTVar31,UVar48,(pTVar31->klass->vtable)._23_set_color.method);
  pTVar28 = *targetAddress;
  UVar48 = UI_UIManager__GetThemeColor
                     ((__this_08->fields).ThemePanel,"InputField","InputSelectionColor",
                      "DefaultPanel",(MethodInfo *)0x0);
  if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  TMPro_TMP_InputField__set_selectionColor(pTVar28,UVar48,(MethodInfo *)0x0);
  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pIVar16 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar23 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar16,(MethodInfo *)0x0);
  if (pSVar22 == (System_Type_array *)0x0) goto label_05d0b2d4;
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
  pSVar22->m_Items[0] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
  pSVar23 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if ((pSVar23 != (System_Type_o *)0x0) &&
     (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
     pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
  if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_05d0b2d9;
  pSVar22->m_Items[1] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
  pUVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar29,"Background",pSVar22,(MethodInfo *)0x0);
  if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Transform__SetParent_692d510(pUVar21,pUVar25,false,(MethodInfo *)0x0);
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_Transform__SetAsFirstSibling(pUVar21,(MethodInfo *)0x0);
  pUVar26 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar29,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
  }
  if (pUVar26 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0b2d4;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar26,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar26,(UnityEngine_Vector2_o)
                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar26,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  pUVar37 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar29,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto label_05d0b2d4;
  UVar49.fields.b = 0.1;
  UVar49.fields.a = 0.6;
  UVar49.fields.r = 0.1;
  UVar49.fields.g = 0.1;
  (*(pUVar37->klass->vtable)._23_set_color.methodPtr)
            (pUVar37,UVar49,(pUVar37->klass->vtable)._23_set_color.method);
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar21 = UnityEngine_Transform__Find(pUVar21,"Content/Panel",(MethodInfo *)0x0),
     pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05d0b2d4;
  pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0);
  targetAddress_01 = &(__this->fields)._panel;
  (__this->fields)._panel = pUVar19;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  pUVar19 = (__this->fields)._panel;
  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
  pMVar38 = (MethodInfo *)
            UnityEngine_GameObject__GetComponent_object_
                      (pUVar19,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  (__this->fields)._chatPanelRect = (UnityEngine_RectTransform_o *)pMVar38;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanelRect);
  UI_ChatPanel__ConfigureManualLineLayout(__this,pMVar38);
  pTVar28 = (__this->fields)._inputField;
  if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
  pUVar26 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pTVar28,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._inputFieldRect = pUVar26;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputFieldRect);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar21 = UnityEngine_Transform__Find(pUVar21,"Content",(MethodInfo *)0x0),
     pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05d0b2d4;
  pUVar26 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar21,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._contentRect = pUVar26;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._contentRect);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  pUVar26 = (UnityEngine_RectTransform_o *)0x0;
  pUVar21 = UnityEngine_Transform__Find(pUVar21,"Content/Scrollbar",(MethodInfo *)0x0);
  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar21,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  }
  (__this->fields)._scrollbarRect = pUVar26;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollbarRect);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar21 = UnityEngine_Transform__Find(pUVar21,"Content",(MethodInfo *)0x0),
     pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_05d0b2d4;
  pUVar39 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar21,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar6 == (Settings_UISettings_o *)0x0) ||
     ((pSVar7 = (pSVar6->fields).ChatHeight, pSVar7 == (Settings_IntSetting_o *)0x0 ||
      (pUVar39 == (UnityEngine_UI_LayoutElement_o *)0x0)))) goto label_05d0b2d4;
  (*(pUVar39->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar39,(float)(pSVar7->fields)._value,(pUVar39->klass->vtable)._38_set_preferredHeight.method);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05d0b2d4;
  pUVar26 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar21,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (((pSVar6 == (Settings_UISettings_o *)0x0) ||
      (pSVar7 = (pSVar6->fields).ChatWidth, pSVar7 == (Settings_IntSetting_o *)0x0)) ||
     (pUVar26 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d0b2d4;
  UVar11.fields.y = 0.0;
  UVar11.fields.x = (float)(pSVar7->fields)._value;
  UnityEngine_RectTransform__set_sizeDelta(pUVar26,UVar11,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  SVar46 = GameManagers_ChatManager__GetPreservedInputWithCaret((MethodInfo *)0x0);
  SVar47 = GameManagers_ChatManager__GetConversation("PUBLIC",(MethodInfo *)0x0);
  iVar45 = SVar47.fields.Item2;
  bVar18 = System_String__IsNullOrEmpty(SVar47.fields.Item1,(MethodInfo *)0x0);
  if (bVar18) {
    pMVar38 = (MethodInfo *)0x0;
    bVar18 = System_String__IsNullOrEmpty(SVar46.fields.Item1,(MethodInfo *)0x0);
    if (!bVar18) {
      pTVar28 = *targetAddress;
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pMVar38 = (MethodInfo *)MiscExtensions__StripRichText(SVar46.fields.Item1,(MethodInfo *)0x0);
      if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
      TMPro_TMP_InputField__set_text(pTVar28,(System_String_o *)pMVar38,(MethodInfo *)0x0);
      iVar45 = SVar46.fields.Item2;
      goto label_05d0a786;
    }
  }
  else {
    pTVar28 = *targetAddress;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pMVar38 = (MethodInfo *)MiscExtensions__StripRichText(SVar47.fields.Item1,(MethodInfo *)0x0);
    if (pTVar28 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0b2d4;
    TMPro_TMP_InputField__set_text(pTVar28,(System_String_o *)pMVar38,(MethodInfo *)0x0);
label_05d0a786:
    (__this->fields)._desiredCaretPosition = iVar45;
  }
  UI_ChatPanel__SetupChatModeLabel(__this,pMVar38);
  UI_ChatPanel__SetupNotificationBadge(__this,pMVar38);
  UI_ChatPanel__SetupEmojiButton(__this,pMVar38);
  if (0 < SVar46.fields.Item3) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar40 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    }
    else {
      pPVar40 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    }
    if (pPVar40 != (Photon_Realtime_Room_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar40 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar40 == (Photon_Realtime_Room_o *)0x0) goto label_05d0b2d4;
      target = (*(pPVar40->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar40,SVar46.fields.Item3,false,(pPVar40->klass->vtable)._10_GetPlayer.method);
      if (target != (Photon_Realtime_Player_o *)0x0) {
        iVar2 = (target->fields).actorNumber;
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar41 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if (pPVar41 == (Photon_Realtime_Player_o *)0x0) goto label_05d0b2d4;
        if (iVar2 != (pPVar41->fields).actorNumber) {
          UI_ChatPanel__EnterPMMode(__this,target,method_01);
        }
      }
    }
  }
  pUVar42 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                      ((UnityEngine_Component_o *)__this,
                       (MethodInfo_34B09D0 *)
                       MethodInfo_UnityEngine_Component_GetComponentInChildren_ChatScrollRect);
  targetAddress_02 = &(__this->fields)._scrollRect;
  (__this->fields)._scrollRect = pUVar42;
  Il2CppCodeGenWriteBarrier(targetAddress_02);
  UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)pUVar42);
  UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)pUVar42);
  UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)pUVar42);
  UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)pUVar42);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar21 = UnityEngine_Transform__Find(pUVar21,"Content",(MethodInfo *)0x0),
     pUVar21 != (UnityEngine_Transform_o *)0x0)) {
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar21,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    pUVar39 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar21,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar6 != (Settings_UISettings_o *)0x0) &&
       ((pSVar7 = (pSVar6->fields).ChatHeight, pSVar7 != (Settings_IntSetting_o *)0x0 &&
        (pUVar39 != (UnityEngine_UI_LayoutElement_o *)0x0)))) {
      (*(pUVar39->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar39,(float)(pSVar7->fields)._value,
                 (pUVar39->klass->vtable)._38_set_preferredHeight.method);
      if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar37 = UnityEngine_GameObject__GetComponent_object_
                            (*targetAddress_01,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
        targetAddress_05 = &(__this->fields)._panelImage;
        (__this->fields)._panelImage = pUVar37;
        Il2CppCodeGenWriteBarrier(targetAddress_05);
        pUVar37 = (__this->fields)._panelImage;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar18 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar18) {
          if (*targetAddress_01 == (UnityEngine_GameObject_o *)0x0) goto label_05d0b2d4;
          pUVar37 = UnityEngine_GameObject__AddComponent_object_
                              (*targetAddress_01,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          *targetAddress_05 = pUVar37;
          Il2CppCodeGenWriteBarrier(targetAddress_05);
        }
        pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if (((pSVar6 != (Settings_UISettings_o *)0x0) &&
            (pSVar8 = (pSVar6->fields).ChatBackgroundColor, pSVar8 != (Settings_ColorSetting_o *)0x0)) &&
           (__this_00 = (pSVar8->fields)._value, __this_00 != (Utility_Color255_o *)0x0)) {
          pUVar37 = *targetAddress_05;
          UVar48 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
          if (pUVar37 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar37->klass->vtable)._23_set_color.methodPtr)
                      (pUVar37,UVar48,(pUVar37->klass->vtable)._23_set_color.method);
            pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
            pIVar16 = TypeRef_UnityEngine_RectTransform;
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            pSVar23 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar16,(MethodInfo *)0x0);
            if (pSVar22 != (System_Type_array *)0x0) {
              if ((pSVar23 != (System_Type_o *)0x0) &&
                 (pIVar24 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
                 pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
              if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
              pSVar22->m_Items[0] = pSVar23;
              Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
              pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_691aa60(pUVar19,"Scrollbar",pSVar22,(MethodInfo *)0x0);
              if ((pUVar19 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar25 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
                 pUVar25 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent_692d510(pUVar25,pUVar21,false,(MethodInfo *)0x0);
                UnityEngine_GameObject__SetActive(pUVar19,true,(MethodInfo *)0x0);
                pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar19,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
                }
                if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar27,(UnityEngine_Vector2_o)
                                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightStretch).fields,
                             (MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar27,(UnityEngine_Vector2_o)
                                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightStretchEnd).fields,
                             (MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_pivot
                            (pUVar27,(UnityEngine_Vector2_o)
                                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightCenter).fields,
                             (MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar27,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                  __this_09 = UnityEngine_GameObject__AddComponent_object_
                                        (pUVar19,(MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
                  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
                  pSVar23 = System_Type__GetTypeFromHandle
                                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                       (MethodInfo *)0x0);
                  if (pSVar22 != (System_Type_array *)0x0) {
                    if ((pSVar23 != (System_Type_o *)0x0) &&
                       (pIVar24 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)pSVar23,
                                             (((pSVar22->obj).klass)->_1).element_class),
                       pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
                    if ((int)pSVar22->max_length == 0) goto label_05d0b2d9;
                    pSVar22->m_Items[0] = pSVar23;
                    Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
                    pUVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                    UnityEngine_GameObject___ctor_691aa60
                              (pUVar29,"Sliding Area",pSVar22,(MethodInfo *)0x0);
                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar25 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                      pUVar43 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                      if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                        UnityEngine_Transform__SetParent_692d510(pUVar25,pUVar43,false,(MethodInfo *)0x0);
                        pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar29,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                            );
                        if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchorMin
                                    (pUVar27,(UnityEngine_Vector2_o)
                                             (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart
                                             ).fields,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMax
                                    (pUVar27,(UnityEngine_Vector2_o)
                                             (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).
                                             fields,(MethodInfo *)0x0);
                          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                            Il2CppMethodInitialized_0753ecc8 = '\x01';
                          }
                          UnityEngine_RectTransform__set_sizeDelta
                                    (pUVar27,(UnityEngine_Vector2_o)
                                             (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                     (MethodInfo *)0x0);
                          pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                          pSVar23 = System_Type__GetTypeFromHandle
                                              ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                               (MethodInfo *)0x0);
                          if (pSVar22 != (System_Type_array *)0x0) {
                            if ((pSVar23 != (System_Type_o *)0x0) &&
                               (pIVar24 = il2cpp_vm_Object_IsInst
                                                    ((Il2CppObject *)pSVar23,
                                                     (((pSVar22->obj).klass)->_1).element_class),
                               pIVar24 == (Il2CppObject *)0x0)) {
label_05d0b2de:
                              pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                            }
                            if ((int)pSVar22->max_length != 0) {
                              pSVar22->m_Items[0] = pSVar23;
                              Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
                              pSVar23 = System_Type__GetTypeFromHandle
                                                  ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,
                                                   (MethodInfo *)0x0);
                              if ((pSVar23 != (System_Type_o *)0x0) &&
                                 (pIVar24 = il2cpp_vm_Object_IsInst
                                                      ((Il2CppObject *)pSVar23,
                                                       (((pSVar22->obj).klass)->_1).element_class),
                                 pIVar24 == (Il2CppObject *)0x0)) goto label_05d0b2de;
                              if ((pSVar22->max_length & 0xfffffffe) != 0) {
                                pSVar22->m_Items[1] = pSVar23;
                                Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
                                pUVar19 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                UnityEngine_GameObject___ctor_691aa60
                                          (pUVar19,"Handle",pSVar22,(MethodInfo *)0x0);
                                if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar25 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                                  pUVar43 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                                  if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_692d510
                                              (pUVar25,pUVar43,false,(MethodInfo *)0x0);
                                    pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar19,(MethodInfo_353B730 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                    if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (pUVar27,(UnityEngine_Vector2_o)
                                                         (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->
                                                         FullStretchStart).fields,(MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_anchorMax
                                                (pUVar27,(UnityEngine_Vector2_o)
                                                         (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->
                                                         FullStretch).fields,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_0753ecc8 = '\x01';
                                      }
                                      UnityEngine_RectTransform__set_sizeDelta
                                                (pUVar27,(UnityEngine_Vector2_o)
                                                         (TypeInfo_UnityEngine_Vector2->static_fields->
                                                         zeroVector).fields,(MethodInfo *)0x0);
                                      pUVar37 = UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar19,(MethodInfo_353B730 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                                      if ((pUVar37 != (UnityEngine_UI_Image_o *)0x0) &&
                                         (UVar50.fields.b = 0.8, UVar50.fields.a = 0.4, UVar50.fields.r = 0.8,
                                         UVar50.fields.g = 0.8,
                                         (*(pUVar37->klass->vtable)._23_set_color.methodPtr)
                                                   (pUVar37,UVar50,
                                                    (pUVar37->klass->vtable)._23_set_color.method),
                                         __this_09 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
                                        UnityEngine_UI_Scrollbar__set_handleRect
                                                  (__this_09,pUVar27,(MethodInfo *)0x0);
                                        UnityEngine_UI_Selectable__set_targetGraphic
                                                  ((UnityEngine_UI_Selectable_o *)__this_09,
                                                   (UnityEngine_UI_Graphic_o *)pUVar37,(MethodInfo *)0x0);
                                        UnityEngine_UI_Scrollbar__set_direction(__this_09,2,(MethodInfo *)0x0)
                                        ;
                                        pUVar19 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar21,
                                                             (MethodInfo *)0x0);
                                        if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                          pUVar42 = UnityEngine_GameObject__AddComponent_object_
                                                              (pUVar19,(MethodInfo_353B6A0 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_ChatScrollRect
                                                       );
                                          targetAddress_06 = &(__this_03->fields).scrollRect;
                                          (__this_03->fields).scrollRect = pUVar42;
                                          Il2CppCodeGenWriteBarrier(targetAddress_06);
                                          *targetAddress_02 = (__this_03->fields).scrollRect;
                                          Il2CppCodeGenWriteBarrier(targetAddress_02);
                                          pUVar42 = (__this_03->fields).scrollRect;
                                          if (pUVar42 != (UI_ChatScrollRect_o *)0x0) {
                                            *(undefined2 *)&(pUVar42->fields).m_Horizontal = 0x100;
                                            UnityEngine_UI_ScrollRect__set_viewport
                                                      ((UnityEngine_UI_ScrollRect_o *)pUVar42,pUVar26,
                                                       (MethodInfo *)0x0);
                                            if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar42 = *targetAddress_06;
                                              pUVar26 = UnityEngine_GameObject__GetComponent_object_
                                                                  (*targetAddress_01,
                                                                   (MethodInfo_353B730 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                              if (pUVar42 != (UI_ChatScrollRect_o *)0x0) {
                                                (pUVar42->fields).m_Content = pUVar26;
                                                Il2CppCodeGenWriteBarrier(&(pUVar42->fields).m_Content);
                                                if (*targetAddress_06 != (UI_ChatScrollRect_o *)0x0) {
                                                  UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                            ((UnityEngine_UI_ScrollRect_o *)*targetAddress_06,
                                                             __this_09,(MethodInfo *)0x0);
                                                  if (*targetAddress_06 != (UI_ChatScrollRect_o *)0x0) {
                                                    UnityEngine_UI_ScrollRect__set_verticalScrollbarSpacing
                                                              ((UnityEngine_UI_ScrollRect_o *)
                                                               *targetAddress_06,-3.0,(MethodInfo *)0x0);
                                                    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields
                                                             ->UISettings;
                                                    if (((pSVar6 != (Settings_UISettings_o *)0x0) &&
                                                        (pSVar7 = (pSVar6->fields).ChatScrollSensitivity,
                                                        pSVar7 != (Settings_IntSetting_o *)0x0)) &&
                                                       (*targetAddress_06 != (UI_ChatScrollRect_o *)0x0)) {
                                                      ((*targetAddress_06)->fields).m_ScrollSensitivity =
                                                           (float)(pSVar7->fields)._value;
                                                      pUVar19 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pUVar21,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                                        __this_10 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar19,(MethodInfo_353B6A0 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger
                                                       );
                                                       __this_11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                                       UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                                 (__this_11,(MethodInfo *)0x0);
                                                       if (__this_11 !=
                                                           (UnityEngine_EventSystems_EventTrigger_Entry_o *)
                                                           0x0) {
                                                         (__this_11->fields).eventID = 0;
                                                         __this_01 = (__this_11->fields).callback;
                                                         pUVar34 = (UnityEngine_Events_UnityAction_T0__o *)
                                                                   il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
                                                       UnityEngine_Events_UnityAction_object____ctor
                                                                 (pUVar34,(Il2CppObject *)__this_03,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__1,
                                                       (MethodInfo_4311A10 *)0x0);
                                                       if (((__this_01 !=
                                                             (
                                                       UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)
                                                       0x0) && (
                                                       UnityEngine_Events_UnityEvent_object___AddListener
                                                                 ((UnityEngine_Events_UnityEvent_T0__o *)
                                                                  __this_01,pUVar34,
                                                                  (MethodInfo_4318F80 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                       ), __this_10 !=
                                                          (UnityEngine_EventSystems_EventTrigger_o *)0x0)) &&
                                                       (pSVar44 = 
                                                       UnityEngine_EventSystems_EventTrigger__get_triggers
                                                                 (__this_10,(MethodInfo *)0x0),
                                                       pMVar38 = 
                                                       MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add
                                                       , pSVar44 !=
                                                         (
                                                       System_Collections_Generic_List_EventTrigger_Entry__o *
                                                       )0x0)) {
                                                         piVar1 = &(pSVar44->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar9 = (pSVar44->fields)._items;
                                                         if (pUVar9 != (
                                                       UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0
                                                       ) {
                                                         uVar3 = (pSVar44->fields)._size;
                                                         if (uVar3 < (uint)pUVar9->max_length) {
                                                           (pSVar44->fields)._size = uVar3 + 1;
                                                           pUVar9->m_Items[(int)uVar3] = __this_11;
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pUVar9->m_Items + (int)uVar3);
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar44,(Il2CppObject *)__this_11,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar38->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar38 = (MethodInfo *)
                                                                 il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                                       UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                                 ((
                                                       UnityEngine_EventSystems_EventTrigger_Entry_o *)pMVar38
                                                       ,(MethodInfo *)0x0);
                                                       if (pMVar38 != (MethodInfo *)0x0) {
                                                         *(undefined4 *)&pMVar38->invoker_method = 1;
                                                         __this_02 = (UnityEngine_Events_UnityEvent_T0__o *)
                                                                     pMVar38->name;
                                                         pUVar34 = (UnityEngine_Events_UnityAction_T0__o *)
                                                                   il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
                                                       UnityEngine_Events_UnityAction_object____ctor
                                                                 (pUVar34,(Il2CppObject *)__this_03,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__2,
                                                       (MethodInfo_4311A10 *)0x0);
                                                       if (__this_02 !=
                                                           (UnityEngine_Events_UnityEvent_T0__o *)0x0) {
                                                         UnityEngine_Events_UnityEvent_object___AddListener
                                                                   (__this_02,pUVar34,
                                                                    (MethodInfo_4318F80 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                       );
                                                       pSVar44 = 
                                                       UnityEngine_EventSystems_EventTrigger__get_triggers
                                                                 (__this_10,(MethodInfo *)0x0);
                                                       pMVar17 = 
                                                       MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add
                                                       ;
                                                       if (pSVar44 !=
                                                           (
                                                       System_Collections_Generic_List_EventTrigger_Entry__o *
                                                       )0x0) {
                                                         piVar1 = &(pSVar44->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         method_00 = (Il2CppRGCTXData *)
                                                                     (pSVar44->fields)._items;
                                                         if (method_00 != (Il2CppRGCTXData *)0x0) {
                                                           uVar3 = (pSVar44->fields)._size;
                                                           if (uVar3 < *(uint *)&method_00[3].rgctxDataDummy)
                                                           {
                                                             (pSVar44->fields)._size = uVar3 + 1;
                                                             method_00[(long)(int)uVar3 + 4].method = pMVar38;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (&method_00[(long)(int)uVar3 + 4].
                                                                         rgctxDataDummy);
                                                           }
                                                           else {
                                                             method_00 = pMVar17->klass->rgctx_data;
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar44,(Il2CppObject *)pMVar38,
                                                                  (MethodInfo_395D230 *)method_00[0xe].method)
                                                       ;
                                                       }
                                                       pSVar6 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if ((pSVar6 != (Settings_UISettings_o *)0x0) &&
                                                          (pSVar10 = (pSVar6->fields).ChatHidden,
                                                          pSVar10 != (Settings_BoolSetting_o *)0x0)) {
                                                         UI_ChatPanel__SetChatHiddenState
                                                                   (__this,(pSVar10->fields)._value,false,
                                                                    (MethodInfo *)method_00);
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
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto label_05d0b2d4;
                              }
                            }
label_05d0b2d9:
                            ThrowIndexOutOfRangeException();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05d0b2d4:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SetupChatModeLabel
// il2cpp: void UI_ChatPanel__SetupChatModeLabel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0b410

void UI_ChatPanel__SetupChatModeLabel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **targetAddress;
  TMPro_TMP_InputField_o *pTVar1;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ChatModeLabel");
    Il2CppMethodInitialized_07547d3a = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05d0b797:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0b7a1;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05d0b7a1:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar4,"ChatModeLabel",components,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar4,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar5,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar5,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (pUVar5,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar5,(UnityEngine_Vector2_o)0x41d0000042200000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar5,(UnityEngine_Vector2_o)0xc0800000,(MethodInfo *)0x0);
              pTVar6 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar4,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
              targetAddress = &(__this->fields)._chatModeLabel;
              (__this->fields)._chatModeLabel = pTVar6;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pTVar6 = (__this->fields)._chatModeLabel;
              if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar6,18.0,(MethodInfo *)0x0);
                if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*targetAddress,0x202,(MethodInfo *)0x0);
                  if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_verticalAlignment
                              ((TMPro_TMP_Text_o *)*targetAddress,0x200,(MethodInfo *)0x0);
                    if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_horizontalAlignment
                                ((TMPro_TMP_Text_o *)*targetAddress,2,(MethodInfo *)0x0);
                      pTVar6 = *targetAddress;
                      if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        UVar7.fields.b = 1.0;
                        UVar7.fields.a = 0.5;
                        UVar7.fields.r = 1.0;
                        UVar7.fields.g = 1.0;
                        (*(pTVar6->klass->vtable)._23_set_color.methodPtr)
                                  (pTVar6,UVar7,(pTVar6->klass->vtable)._23_set_color.method);
                        pTVar6 = *targetAddress;
                        if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          method_00 = (MethodInfo *)0x0;
                          (*(pTVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (pTVar6,false,(pTVar6->klass->vtable)._25_set_raycastTarget.method);
                          UI_ChatPanel__UpdateChatModeLabel(__this,method_00);
                          pTVar6 = (__this->fields)._chatModeLabel;
                          if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pTVar6,(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                              pTVar1 = (__this->fields)._inputField;
                              if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
                                 (pUVar5 = (pTVar1->fields).m_TextViewport,
                                 pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                                pUVar4 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                                     (pUVar4,(MethodInfo_353B730 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                     );
                                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_offsetMin
                                              (pUVar5,(UnityEngine_Vector2_o)0x4080000040a00000,
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
                }
              }
            }
          }
        }
      }
      goto label_05d0b797;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$UpdateChatModeElements
// il2cpp: void UI_ChatPanel__UpdateChatModeElements (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0cd70

void UI_ChatPanel__UpdateChatModeElements(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar6;
  bool bVar7;
  bool bVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  float fVar11;
  float fVar12;
  
  if (Il2CppMethodInitialized_07547d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d3b = '\x01';
  }
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto label_05d0d0ef;
  iVar1 = (pSVar2->fields)._size;
  if (iVar1 < 1) {
    bVar7 = false;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar7 = GameManagers_ChatManager__HasAnyActivePMNotification((MethodInfo *)0x0);
  }
  pTVar3 = (__this->fields)._chatModeLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pTVar3 = (__this->fields)._chatModeLabel;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0d0ef;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar3,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05d0d0ef;
    UnityEngine_GameObject__SetActive(pUVar9,0 < iVar1,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._notificationBadge;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar9 = (__this->fields)._notificationBadge;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05d0d0ef;
    UnityEngine_GameObject__SetActive(pUVar9,bVar7,(MethodInfo *)0x0);
  }
  pTVar3 = (__this->fields)._chatModeLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar12 = 40.0;
  fVar11 = -4.0;
  if ((0 < iVar1) && (bVar8)) {
    pTVar3 = (__this->fields)._chatModeLabel;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0d0ef;
    (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
    pTVar3 = (__this->fields)._chatModeLabel;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0d0ef;
    fVar11 = (*(pTVar3->klass->vtable)._84_get_preferredWidth.methodPtr)
                       (pTVar3,(pTVar3->klass->vtable)._84_get_preferredWidth.method);
    bVar8 = (__this->fields)._inPMMode;
    pTVar3 = (__this->fields)._chatModeLabel;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0d0ef;
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pTVar3,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0d0ef;
    fVar12 = fVar11 + 8.0;
    if (*(float *)(&g_data_0100afb0 + (ulong)(bVar8 == false) * 4) <= fVar11 + 8.0) {
      fVar12 = *(float *)(&g_data_0100afb0 + (ulong)(bVar8 == false) * 4);
    }
    UVar6.fields.y = 26.0;
    UVar6.fields.x = fVar12;
    UnityEngine_RectTransform__set_sizeDelta(pUVar10,UVar6,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition(pUVar10,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    fVar11 = 0.0;
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._notificationBadge;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar7 & bVar8) != 0) {
    pTVar3 = (__this->fields)._chatModeLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar9 = (__this->fields)._notificationBadge;
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05d0d0ef;
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar9,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0d0ef;
      value.fields.y = 10.0;
      value.fields.x = fVar11 + -10.0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar10,value,(MethodInfo *)0x0);
    }
  }
  pTVar5 = (__this->fields)._inputField;
  if ((pTVar5 != (TMPro_TMP_InputField_o *)0x0) &&
     (pUVar10 = (pTVar5->fields).m_TextViewport, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar9,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        if (iVar1 < 1) {
          fVar11 = 5.0;
        }
        else {
          fVar11 = fVar11 + fVar12;
        }
        UVar6 = UnityEngine_RectTransform__get_offsetMin(pUVar10,(MethodInfo *)0x0);
        value_00.fields.y = UVar6.fields.y;
        value_00.fields.x = fVar11;
        UnityEngine_RectTransform__set_offsetMin(pUVar10,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d0d0ef:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateChatModeLabel
// il2cpp: void UI_ChatPanel__UpdateChatModeLabel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0cb60

void UI_ChatPanel__UpdateChatModeLabel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Photon_Realtime_Player_o *player;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07547d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"..");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d3c = '\x01';
  }
  pTVar1 = (__this->fields)._chatModeLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (((__this->fields)._inPMMode == false) ||
     (player = (__this->fields)._currentPMTarget, player == (Photon_Realtime_Player_o *)0x0)) {
    pTVar1 = (__this->fields)._chatModeLabel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("InGame","Chat","All",
                        "","",(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar3 = MiscExtensions__StripRichText(pSVar3,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_o *)0x0) goto label_05d0cd67;
    pTVar1 = (__this->fields)._chatModeLabel;
    if ((pSVar3->fields)._stringLength < 5) {
      ppSVar4 = &":";
    }
    else {
      pSVar3 = System_String__Substring_53042f0(pSVar3,0,4,(MethodInfo *)0x0);
      ppSVar4 = &"..";
    }
    pSVar3 = System_String__Concat_52f0320(pSVar3,*ppSVar4,(MethodInfo *)0x0);
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,pSVar3,(pTVar1->klass->vtable)._66_set_text.method);
    return;
  }
label_05d0cd67:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SetupNotificationBadge
// il2cpp: void UI_ChatPanel__SetupNotificationBadge (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0b7b0

void UI_ChatPanel__SetupNotificationBadge(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Il2CppType *handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_Image_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Sprite_o *value;
  TMPro_TextMeshProUGUI_o *__this_02;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_Events_UnityAction_o *__this_04;
  UI_ChatPanel_c *method_00;
  UnityEngine_Color_o UVar10;
  UnityEngine_Color_o UVar11;
  
  if (Il2CppMethodInitialized_07547d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnNotificationBadgeClicked);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"!");
    il2cpp_codegen_initialize_runtime_metadata(&"NotificationBadge");
    il2cpp_codegen_initialize_runtime_metadata(&"BadgeCircle");
    il2cpp_codegen_initialize_runtime_metadata(&"BadgeText");
    Il2CppMethodInitialized_07547d3d = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05d0c034;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c03e;
  }
  if ((int)pSVar1->max_length == 0) goto label_05d0c039;
  pSVar1->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c03e;
  }
  if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05d0c039;
  pSVar1->m_Items[1] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c03e;
  }
  if ((uint)pSVar1->max_length < 3) goto label_05d0c039;
  pSVar1->m_Items[2] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar4,"NotificationBadge",pSVar1,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d0c034;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._inputField;
  if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0c034;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d0c034;
  UnityEngine_Transform__SetParent_692d510(pUVar5,pUVar6,false,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar4,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0c034;
  UnityEngine_RectTransform__set_anchorMin(pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchorMax(pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar7,(UnityEngine_Vector2_o)0x41c0000041900000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition(pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) goto label_05d0c034;
  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
            (pUVar8,(UnityEngine_Color_o)ZEXT816(0),(pUVar8->klass->vtable)._23_set_color.method);
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05d0c034;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c03e;
  }
  if ((int)pSVar1->max_length == 0) goto label_05d0c039;
  pSVar1->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c03e;
  }
  if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05d0c039;
  pSVar1->m_Items[1] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
  pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar9,"BadgeCircle",pSVar1,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
label_05d0c034:
    ThrowNullReferenceException();
  }
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d0c034;
  UnityEngine_Transform__SetParent_692d510(pUVar5,pUVar6,false,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar9,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0c034;
  UnityEngine_RectTransform__set_anchorMin(pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchorMax(pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar7,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0)
  ;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  method_00 = TypeInfo_UI_ChatPanel;
  if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
  }
  value = UI_ChatPanel__GetCircleSprite((MethodInfo *)method_00);
  if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) goto label_05d0c034;
  UnityEngine_UI_Image__set_sprite(pUVar8,value,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_type(pUVar8,0,(MethodInfo *)0x0);
  UVar10.fields.b = 0.15;
  UVar10.fields.a = 1.0;
  UVar10.fields.r = 0.8;
  UVar10.fields.g = 0.15;
  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
            (pUVar8,UVar10,(pUVar8->klass->vtable)._23_set_color.method);
  (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
            (pUVar8,false,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05d0c034;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c03e;
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05d0c03e:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar9,"BadgeText",pSVar1,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar5,pUVar6,false,(MethodInfo *)0x0);
          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar9,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar7,(UnityEngine_Vector2_o)
                              (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07542885 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_07542885 = '\x01';
            }
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar7,(UnityEngine_Vector2_o)
                              (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_sizeDelta
                      (pUVar7,(UnityEngine_Vector2_o)
                              (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar9,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
            if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
              (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                        (__this_02,"!",(__this_02->klass->vtable)._66_set_text.method);
              TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_02,16.0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_02,0x202,(MethodInfo *)0x0);
              UVar11.fields.b = 0.2;
              UVar11.fields.a = 1.0;
              UVar11.fields.r = 1.0;
              UVar11.fields.g = 0.8;
              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                        (__this_02,UVar11,(__this_02->klass->vtable)._23_set_color.method);
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              __this_03 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar4,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Button);
              if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
                UnityEngine_UI_Selectable__set_transition
                          ((UnityEngine_UI_Selectable_o *)__this_03,0,(MethodInfo *)0x0);
                __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_OnClick;
                __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          (__this_04,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_ChatPanel_OnNotificationBadgeClicked,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_01,__this_04,(MethodInfo *)0x0);
                  (__this->fields)._notificationBadge = pUVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._notificationBadge);
                  pUVar4 = (__this->fields)._notificationBadge;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_05d0c034;
    }
  }
label_05d0c039:
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$OnNotificationBadgeClicked
// il2cpp: void UI_ChatPanel__OnNotificationBadgeClicked (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0d330
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0d3a7: test r15, r15
// asm:   0x5d0d3b0: jmp 0x5d0d4db

void UI_ChatPanel__OnNotificationBadgeClicked(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *__this_00;
  Il2CppObject *object;
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  UI_ChatPanel___c_StaticFields *pUVar3;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Find);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c_OnNotificationBadgeClicked_b__66_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    Il2CppMethodInitialized_07547d3e = '\x01';
  }
  __this_00 = (__this->fields)._pmPartners;
  if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
    pUVar3 = TypeInfo_UI_ChatPanel_c->static_fields;
    match = (System_Predicate_T__o *)pUVar3->__9__66_0;
  }
  else {
    pUVar3 = TypeInfo_UI_ChatPanel_c->static_fields;
    match = (System_Predicate_T__o *)pUVar3->__9__66_0;
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_ChatPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
      pUVar3 = TypeInfo_UI_ChatPanel_c->static_fields;
    }
    object = (Il2CppObject *)pUVar3->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_UI_ChatPanel_c_OnNotificationBadgeClicked_b__66_0,
               (MethodInfo_3DC95B0 *)0x0);
    pUVar3 = TypeInfo_UI_ChatPanel_c->static_fields;
    pUVar3->__9__66_0 = (System_Predicate_Player__o *)match;
    Il2CppCodeGenWriteBarrier(&pUVar3->__9__66_0);
  }
  if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) {
label_05d0d4db:
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)
              System_Collections_Generic_List_object___Find
                        ((System_Collections_Generic_List_object__o *)__this_00,match,
                         (MethodInfo_395DA40 *)MethodInfo_System_Collections_Generic_List_Player_Find);
  if (method_00 == (MethodInfo *)0x0) {
    return;
  }
  UI_ChatPanel__EnterPMMode(__this,(Photon_Realtime_Player_o *)method_00,method_01);
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0d4db;
      if ((pTVar1->fields).m_AllowInput != false) {
        return;
      }
    }
  }
  UI_ChatPanel__Activate(__this,method_00);
  return;
}


// UI.ChatPanel$$GetCircleSprite
// il2cpp: UnityEngine_Sprite_o* UI_ChatPanel__GetCircleSprite (const MethodInfo* method);
// 0x5d0d100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0d21d: nop dword ptr [rax]

UnityEngine_Sprite_o * UI_ChatPanel__GetCircleSprite(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UI_ChatPanel_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  UnityEngine_Sprite_o *pUVar3;
  long lVar4;
  int32_t iVar5;
  long lVar6;
  long lVar7;
  UnityEngine_Color32_o *pUVar8;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_07547d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_07547d3f = '\x01';
  }
  if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
  }
  x = (UnityEngine_Object_o *)TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
    }
label_05d0d304:
    return TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_68efe30(__this,0x40,0x40,4,false,(MethodInfo *)0x0);
  colors = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x1000);
  if (colors != (UnityEngine_Color32_array *)0x0) {
    pUVar8 = colors->m_Items;
    lVar4 = 0;
    lVar7 = 0;
    do {
      fVar9 = (float)(int)lVar7 + -32.0 + 0.5;
      lVar6 = 0;
      do {
        fVar10 = (float)(int)lVar6 + -32.0 + 0.5;
        if (fVar10 * fVar10 + fVar9 * fVar9 <= 1024.0) {
          iVar5 = -1;
        }
        else {
          iVar5 = 0;
        }
        if ((ulong)(uint)colors->max_length <= (ulong)(lVar4 + lVar6)) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8[lVar6].fields._overlap_0._at_rgba.rgba = iVar5;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x40);
      lVar7 = lVar7 + 1;
      pUVar8 = pUVar8 + 0x40;
      lVar4 = lVar4 + 0x40;
    } while (lVar7 != 0x40);
    if (__this != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32_68f0850(__this,colors,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply_68f05d0(__this,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Sprite__Create_68ba7d0
                         (__this,(UnityEngine_Rect_o)(ZEXT816(0x4280000042800000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
      }
      pUVar1 = TypeInfo_UI_ChatPanel->static_fields;
      pUVar1->_cachedCircleSprite = pUVar3;
      Il2CppCodeGenWriteBarrier(&pUVar1->_cachedCircleSprite);
      goto label_05d0d304;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SetupEmojiButton
// il2cpp: void UI_ChatPanel__SetupEmojiButton (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0c050

void UI_ChatPanel__SetupEmojiButton(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar5;
  TMPro_TextMeshProUGUI_o *__this_02;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_UI_Button_o *pUVar6;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547d40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_ToggleEmojiPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiButton");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x98\xba");
    Il2CppMethodInitialized_07547d40 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05d0c502:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c50c;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05d0c50c;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
label_05d0c50c:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(pUVar4,"EmojiButton",components,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0)
            ;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar4,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
              }
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar5,(UnityEngine_Vector2_o)
                                  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightCenter).fields,
                           (MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar5,(UnityEngine_Vector2_o)
                                  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightCenter).fields,
                           (MethodInfo *)0x0);
                UnityEngine_RectTransform__set_pivot
                          (pUVar5,(UnityEngine_Vector2_o)
                                  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightCenter).fields,
                           (MethodInfo *)0x0);
                UnityEngine_RectTransform__set_sizeDelta
                          (pUVar5,(UnityEngine_Vector2_o)0x41d0000041f00000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar5,(UnityEngine_Vector2_o)0xc0000000,(MethodInfo *)0x0);
                __this_02 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar4,(MethodInfo_353B730 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                  ("text",400,"\xe2\x98\xba",(MethodInfo *)0x0);
                if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this_02,value,(MethodInfo *)0x0);
                  (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                            (__this_02,"\xe2\x98\xba",(__this_02->klass->vtable)._66_set_text.method);
                  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_02,24.0,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_02,0x202,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_verticalAlignment((TMPro_TMP_Text_o *)__this_02,0x200,(MethodInfo *)0x0)
                  ;
                  TMPro_TMP_Text__set_horizontalAlignment((TMPro_TMP_Text_o *)__this_02,2,(MethodInfo *)0x0);
                  (*(__this_02->klass->vtable)._74_set_margin.methodPtr)
                            (__this_02,(UnityEngine_Vector4_o)ZEXT816(0),
                             (__this_02->klass->vtable)._74_set_margin.method);
                  UVar7.fields.b = 1.0;
                  UVar7.fields.a = 0.5;
                  UVar7.fields.r = 1.0;
                  UVar7.fields.g = 1.0;
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (__this_02,UVar7,(__this_02->klass->vtable)._23_set_color.method);
                  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar4,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                  (__this->fields)._emojiButton = pUVar6;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiButton);
                  pUVar6 = (__this->fields)._emojiButton;
                  if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar6->fields).m_OnClick;
                    __this_03 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              (__this_03,(Il2CppObject *)__this,
                               (intptr_t)MethodInfo_UI_ChatPanel_ToggleEmojiPanel,(MethodInfo *)0x0);
                    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
                      pTVar1 = (__this->fields)._inputField;
                      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
                         (pUVar5 = (pTVar1->fields).m_TextViewport,
                         pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                        pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                             (pUVar4,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                             );
                          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_offsetMax
                                      (pUVar5,(UnityEngine_Vector2_o)0xc0000000c2040000,(MethodInfo *)0x0);
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
        }
        goto label_05d0c502;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$ToggleEmojiPanel
// il2cpp: void UI_ChatPanel__ToggleEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0d720

void UI_ChatPanel__ToggleEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  TMPro_TMP_InputField_o *__this_00;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07547d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_07547d41 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    UI_ChatPanel__CreateEmojiPanel(__this,method_00);
  }
  bVar2 = (__this->fields)._emojiPanelActive;
  (__this->fields)._emojiPanelActive = (bool)(bVar2 ^ 1);
  pUVar1 = (__this->fields)._emojiPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,bVar2 == false,(MethodInfo *)0x0);
    if ((__this->fields)._emojiPanelActive == false) {
      return;
    }
    __this_00 = (__this->fields)._inputField;
    if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                            );
      fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__GetWorldCorners(__this_01,fourCornersArray,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._emojiPanel;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
          if (fourCornersArray != (UnityEngine_Vector3_array *)0x0) {
            if ((uint)fourCornersArray->max_length < 3) {
              ThrowIndexOutOfRangeException();
            }
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              value.fields.y = fourCornersArray->m_Items[0].fields.y;
              value.fields.x = fourCornersArray->m_Items[2].fields.x;
              value.fields.z = fourCornersArray->m_Items[2].fields.z;
              UnityEngine_Transform__set_position(pUVar3,value,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._emojiPanel;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$CreateEmojiPanel
// il2cpp: void UI_ChatPanel__CreateEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0d8a0

void UI_ChatPanel__CreateEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  TMPro_TextMeshProUGUI_o **targetAddress_00;
  UI_BaseMenu_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar1;
  Il2CppType *handle;
  UI_ChatPanel___c__DisplayClass70_0_o *__this_01;
  System_Type_array *pSVar2;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  TMPro_TextMeshProUGUI_o *pTVar10;
  System_String_o *pSVar11;
  UnityEngine_UI_Button_o *pUVar12;
  UnityEngine_Events_UnityAction_o *pUVar13;
  UnityEngine_UI_GridLayoutGroup_o *__this_02;
  UnityEngine_GameObject_o *pUVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o **targetAddress_01;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o UVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o UVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Color_o UVar21;
  
  if (Il2CppMethodInitialized_07547d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GridLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_GridLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass70_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiModeButton");
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Sticker");
    il2cpp_codegen_initialize_runtime_metadata(&"NavPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"PageText");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    il2cpp_codegen_initialize_runtime_metadata(&"BackButton");
    il2cpp_codegen_initialize_runtime_metadata(&"NextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"StickerModeButton");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipArea");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07547d42 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass70_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UI_ChatPanel___c__DisplayClass70_0_o *)0x0) goto label_05d0f0ce;
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"EmojiPanel",pSVar2,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._emojiPanel;
  (__this->fields)._emojiPanel = pUVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar5 = (__this->fields)._emojiPanel;
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 == (UI_BaseMenu_o *)0x0) goto label_05d0f0ce;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (*targetAddress,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
  }
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar8,(UnityEngine_Vector2_o)(TypeInfo_UI_ChatPanel_UIAnchors->static_fields->BottomLeft).fields
             ,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar8,(UnityEngine_Vector2_o)(TypeInfo_UI_ChatPanel_UIAnchors->static_fields->BottomLeft).fields
             ,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar8,(UnityEngine_Vector2_o)(TypeInfo_UI_ChatPanel_UIAnchors->static_fields->BottomLeft).fields
             ,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x43630000434d0000,(MethodInfo *)0x0)
  ;
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar9 = UnityEngine_GameObject__GetComponent_object_
                     (*targetAddress,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_05d0f0ce;
  UVar15.fields.b = 0.118;
  UVar15.fields.a = 0.95;
  UVar15.fields.r = 0.118;
  UVar15.fields.g = 0.118;
  (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
            (pUVar9,UVar15,(pUVar9->klass->vtable)._23_set_color.method);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"TooltipArea",pSVar2,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar7 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin(pUVar8,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchorMax(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x40e0000000000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar8,(UnityEngine_Vector2_o)0xc0e0000000000000,(MethodInfo *)0x0);
  pTVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar5,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  targetAddress_01 = &(__this_01->fields).tooltipText;
  (__this_01->fields).tooltipText = pTVar10;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  pTVar10 = (__this_01->fields).tooltipText;
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
  pTVar10 = *targetAddress_01;
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  UVar16.fields.b = 1.0;
  UVar16.fields.a = 0.8;
  UVar16.fields.r = 1.0;
  UVar16.fields.g = 1.0;
  (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
            (pTVar10,UVar16,(pTVar10->klass->vtable)._23_set_color.method);
  if (*targetAddress_01 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*targetAddress_01,0x202,(MethodInfo *)0x0);
  pTVar10 = *targetAddress_01;
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
            (pTVar10,"",(pTVar10->klass->vtable)._66_set_text.method);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((uint)pSVar2->max_length < 3) goto label_05d0f0d3;
  pSVar2->m_Items[2] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"EmojiModeButton",pSVar2,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar7 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchorMax(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x4170000042a00000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar8,(UnityEngine_Vector2_o)0xc0e00000c1f00000,(MethodInfo *)0x0);
  pTVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar5,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  pSVar11 = UI_UIManager__GetLocaleCommon("Emoji",(MethodInfo *)0x0);
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
            (pTVar10,pSVar11,(pTVar10->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar10,0x202,(MethodInfo *)0x0);
  UVar17.fields.b = 1.0;
  UVar17.fields.a = 1.0;
  UVar17.fields.r = 1.0;
  UVar17.fields.g = 1.0;
  (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
            (pTVar10,UVar17,(pTVar10->klass->vtable)._23_set_color.method);
  pUVar12 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar5,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  (__this->fields)._emojiModeButton = pUVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiModeButton);
  pUVar12 = (__this->fields)._emojiModeButton;
  if (pUVar12 == (UnityEngine_UI_Button_o *)0x0) goto label_05d0f0ce;
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar12->fields).m_OnClick;
  pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar13,(Il2CppObject *)__this_01,
             (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__0,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar13,(MethodInfo *)0x0);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((uint)pSVar2->max_length < 3) goto label_05d0f0d3;
  pSVar2->m_Items[2] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"StickerModeButton",pSVar2,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar7 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchorMax(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar8,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x4170000042a00000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar8,(UnityEngine_Vector2_o)0xc0e0000041f00000,(MethodInfo *)0x0);
  pTVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar5,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  pSVar11 = UI_UIManager__GetLocale
                      ("InGame","Chat","Sticker",""
                       ,"",(MethodInfo *)0x0);
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
            (pTVar10,pSVar11,(pTVar10->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar10,0x202,(MethodInfo *)0x0);
  UVar18.fields.b = 1.0;
  UVar18.fields.a = 0.6;
  UVar18.fields.r = 1.0;
  UVar18.fields.g = 1.0;
  (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
            (pTVar10,UVar18,(pTVar10->klass->vtable)._23_set_color.method);
  pUVar12 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar5,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  (__this->fields)._stickerModeButton = pUVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerModeButton);
  pUVar12 = (__this->fields)._stickerModeButton;
  if (pUVar12 == (UnityEngine_UI_Button_o *)0x0) goto label_05d0f0ce;
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar12->fields).m_OnClick;
  pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar13,(Il2CppObject *)__this_01,
             (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__1,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar13,(MethodInfo *)0x0);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_GridLayoutGroup,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"EmojiGrid",pSVar2,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar7 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar8,(UnityEngine_Vector2_o)
                    (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar8,(UnityEngine_Vector2_o)
                    (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar8,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMin(pUVar8,(UnityEngine_Vector2_o)0x41f0000041700000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_offsetMax(pUVar8,(UnityEngine_Vector2_o)0xc1b00000c1700000,(MethodInfo *)0x0)
  ;
  __this_02 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar5,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_GridLayoutGroup);
  if (__this_02 == (UnityEngine_UI_GridLayoutGroup_o *)0x0) goto label_05d0f0ce;
  UnityEngine_UI_GridLayoutGroup__set_cellSize
            (__this_02,(UnityEngine_Vector2_o)0x4220000042200000,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_spacing
            (__this_02,(UnityEngine_Vector2_o)0x40a0000040a00000,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_constraint(__this_02,1,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_constraintCount(__this_02,4,(MethodInfo *)0x0);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"NavPanel",pSVar2,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar7 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin(pUVar8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax(pUVar8,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(pUVar8,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x4170000000000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar8,(UnityEngine_Vector2_o)0x40f0000000000000,(MethodInfo *)0x0);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((uint)pSVar2->max_length < 3) goto label_05d0f0d3;
  pSVar2->m_Items[2] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
  pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar14,"BackButton",pSVar2,(MethodInfo *)0x0);
  if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_05d0f0ce;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar14,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin(pUVar8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax(pUVar8,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar8,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x4170000042700000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition(pUVar8,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
  pTVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar14,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
            (pTVar10,"<",(pTVar10->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar10,0x202,(MethodInfo *)0x0);
  UVar19.fields.b = 1.0;
  UVar19.fields.a = 1.0;
  UVar19.fields.r = 1.0;
  UVar19.fields.g = 1.0;
  (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
            (pTVar10,UVar19,(pTVar10->klass->vtable)._23_set_color.method);
  pUVar12 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar14,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  (__this->fields)._emojiBackButton = pUVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiBackButton);
  pUVar12 = (__this->fields)._emojiBackButton;
  if (pUVar12 == (UnityEngine_UI_Button_o *)0x0) goto label_05d0f0ce;
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar12->fields).m_OnClick;
  pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar13,(Il2CppObject *)__this_01,
             (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__2,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar13,(MethodInfo *)0x0);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d0f0d3;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar14,"PageText",pSVar2,(MethodInfo *)0x0);
  if (pUVar14 == (UnityEngine_GameObject_o *)0x0) {
label_05d0f0ce:
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar14,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_05d0f0ce;
  UnityEngine_RectTransform__set_anchorMin(pUVar8,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax(pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_pivot(pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x4170000042700000,(MethodInfo *)0x0)
  ;
  UnityEngine_RectTransform__set_anchoredPosition(pUVar8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  pTVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar14,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  targetAddress_00 = &(__this->fields)._emojiPageText;
  (__this->fields)._emojiPageText = pTVar10;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pTVar10 = (__this->fields)._emojiPageText;
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
  if (*targetAddress_00 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*targetAddress_00,0x202,(MethodInfo *)0x0);
  pTVar10 = *targetAddress_00;
  if (pTVar10 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f0ce;
  UVar20.fields.b = 1.0;
  UVar20.fields.a = 1.0;
  UVar20.fields.r = 1.0;
  UVar20.fields.g = 1.0;
  (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
            (pTVar10,UVar20,(pTVar10->klass->vtable)._23_set_color.method);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d0f0ce;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d0f0d3;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d0f0d8;
  }
  if ((pSVar2->max_length & 0xfffffffe) != 0) {
    pSVar2->m_Items[1] = pSVar3;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
label_05d0f0d8:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if (2 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[2] = pSVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
      pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar14,"NextButton",pSVar2,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
          pUVar8 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar14,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar8,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar8,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot
                      (pUVar8,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta
                      (pUVar8,(UnityEngine_Vector2_o)0x4170000042700000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (pUVar8,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
            pTVar10 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar14,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
            if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
              (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
                        (pTVar10,">",(pTVar10->klass->vtable)._66_set_text.method);
              TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar10,0x202,(MethodInfo *)0x0);
              UVar21.fields.b = 1.0;
              UVar21.fields.a = 1.0;
              UVar21.fields.r = 1.0;
              UVar21.fields.g = 1.0;
              (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
                        (pTVar10,UVar21,(pTVar10->klass->vtable)._23_set_color.method);
              pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar14,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Button);
              (__this->fields)._emojiNextButton = pUVar12;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiNextButton);
              pUVar12 = (__this->fields)._emojiNextButton;
              if (pUVar12 != (UnityEngine_UI_Button_o *)0x0) {
                pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar12->fields).m_OnClick;
                pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          (pUVar13,(Il2CppObject *)__this_01,
                           (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__3,
                           (MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar13,(MethodInfo *)0x0);
                  UI_ChatPanel__AddEmojiButtons(__this,*targetAddress_01,method_00);
                  UI_ChatPanel__SetPanelMode(__this,0,method_01);
                  pUVar5 = (__this->fields)._emojiPanel;
                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_05d0f0ce;
    }
  }
label_05d0f0d3:
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$AddEmojiButtons
// il2cpp: void UI_ChatPanel__AddEmojiButtons (UI_ChatPanel_o* __this, TMPro_TextMeshProUGUI_o* tooltipText, const MethodInfo* method);
// 0x5d0f100
// eh: try 0x5d0f240..0x5d0f5a8 -> pad 0x5d0f5bd (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d0f5d7..0x5d0f5dc -> pad 0x5d0f5e1 cleanup
// eh: try 0x5d0f5e4..0x5d0f5ee -> pad 0x5d0f5f6 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0f461: nop word ptr cs:[rax + rax]
// asm:   0x5d0f5ad: mov rdi, r14
// asm:   0x5d0f5b0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d0f5b5: jmp 0x5d0f5bf
// asm:   0x5d0f5b7: jmp 0x5d0f5bf
// asm:   0x5d0f5b9: jmp 0x5d0f5bf
// asm:   0x5d0f5bb: jmp 0x5d0f5bf
// asm:   0x5d0f5bd: jmp 0x5d0f5bf
// asm:   0x5d0f5bf: mov r12, rax
// asm:   0x5d0f5c2: cmp edx, 1
// asm:   0x5d0f5c5: jne 0x5d0f5e4
// asm:   0x5d0f5c7: mov rdi, r12
// asm:   0x5d0f5ca: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d0f5cf: mov r14, qword ptr [rax]
// asm:   0x5d0f5d2: mov qword ptr [rsp + 0x18], r14
// asm:   0x5d0f5d7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d0f5dc: jmp 0x5d0f3af
// asm:   0x5d0f5e1: mov r12, rax
// asm:   0x5d0f5e4: lea rdi, [rsp + 0x18]
// asm:   0x5d0f5e9: call 0x2fdbc10  ; il2cpp_runtime_helper_02fdbc10()
// asm:   0x5d0f5ee: mov rdi, r12
// asm:   0x5d0f5f1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d0f5f6: mov rdi, rax
// asm:   0x5d0f5f9: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__AddEmojiButtons
               (UI_ChatPanel_o *__this,TMPro_TextMeshProUGUI_o *tooltipText,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UI_Button_o *pUVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  bool bVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_GridLayoutGroup_o *emojiGrid;
  VirtualInvokeData *pVVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar10;
  Il2CppObject *arg1;
  System_String_o *pSVar11;
  ulong uVar12;
  int32_t spriteIndex;
  int iVar13;
  long lVar14;
  MethodInfo *in_R9;
  Il2CppObject *local_68;
  undefined4 local_5c;
  Il2CppObject *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  Il2CppObject **local_40;
  TMPro_TextMeshProUGUI_o *local_38;
  
  if (Il2CppMethodInitialized_07547d43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_GridLayoutGroup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"{0}/{1}");
    Il2CppMethodInitialized_07547d43 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._emojiPanel;
  if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar8 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar8 = UnityEngine_Transform__Find(pUVar8,"EmojiGrid",(MethodInfo *)0x0),
      pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
     ((emojiGrid = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar8,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_GridLayoutGroup),
      emojiGrid != (UnityEngine_UI_GridLayoutGroup_o *)0x0 &&
      (local_38 = tooltipText,
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)emojiGrid,(MethodInfo *)0x0),
      pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
    local_68 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
    local_48 = (undefined1 *)&local_68;
    local_50 = 0;
    local_40 = &local_58;
    do {
      pIVar10 = local_68;
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_68->klass;
      uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
            goto label_05d0f2b3;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar12 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d0f2b3:
      bVar7 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
      pIVar10 = local_68;
      if (!bVar7) {
        pIVar10 = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
        pTVar6 = local_38;
        local_58 = pIVar10;
        if (pIVar10 == (Il2CppObject *)0x0) goto label_05d0f436;
        pIVar3 = pIVar10->klass;
        uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar12 == 0) goto label_05d0f40f;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        goto label_05d0f400;
      }
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_68->klass;
      uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
            goto label_05d0f347;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar12 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05d0f347:
      __this_01 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(pIVar10,pVVar9->method);
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    } while( true );
  }
  goto label_05d0f5a8;
  while (lVar14 = lVar14 + 0x10, uVar12 * 0x10 != lVar14) {
label_05d0f400:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
      goto label_05d0f42d;
    }
  }
label_05d0f40f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar10,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d0f42d:
  (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
label_05d0f436:
  spriteIndex = (__this->fields)._emojiPage * 0x10;
  iVar1 = spriteIndex + 0x10;
  iVar13 = 0x8d;
  if (iVar1 < 0x8d) {
    iVar13 = iVar1;
  }
  if (spriteIndex < iVar13) {
    do {
      UI_ChatPanel__CreateSpriteButton
                (__this,emojiGrid,pTVar6,spriteIndex,(__this->fields)._panelMode == 1,in_R9);
      spriteIndex = spriteIndex + 1;
    } while (iVar13 != spriteIndex);
  }
  pUVar5 = (__this->fields)._emojiBackButton;
  if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar5,0 < (__this->fields)._emojiPage,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._emojiNextButton;
    if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar5,iVar1 < 0x8d,(MethodInfo *)0x0);
      pTVar6 = (__this->fields)._emojiPageText;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pTVar6 = (__this->fields)._emojiPageText;
        local_50 = CONCAT44(local_50._4_4_,(__this->fields)._emojiPage + 1);
        pIVar10 = il2cpp_vm_Object_Box(g_data_07556710,&local_50);
        local_5c = 9;
        arg1 = il2cpp_vm_Object_Box(g_data_07556710,&local_5c);
        pSVar11 = System_String__Format_5302c50("{0}/{1}",pIVar10,arg1,(MethodInfo *)0x0);
        if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f5a8;
        (*(pTVar6->klass->vtable)._66_set_text.methodPtr)
                  (pTVar6,pSVar11,(pTVar6->klass->vtable)._66_set_text.method);
      }
      return;
    }
  }
label_05d0f5a8:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$CreateSpriteButton
// il2cpp: void UI_ChatPanel__CreateSpriteButton (UI_ChatPanel_o* __this, UnityEngine_UI_GridLayoutGroup_o* emojiGrid, TMPro_TextMeshProUGUI_o* tooltipText, int32_t spriteIndex, bool isSticker, const MethodInfo* method);
// 0x5d0f7e0

void UI_ChatPanel__CreateSpriteButton
               (UI_ChatPanel_o *__this,UnityEngine_UI_GridLayoutGroup_o *emojiGrid,
               TMPro_TextMeshProUGUI_o *tooltipText,int32_t spriteIndex,bool isSticker,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *arg0;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *pUVar4;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar5;
  Il2CppType *pIVar6;
  MethodInfo *pMVar7;
  UI_ChatPanel___c__DisplayClass72_0_o *__this_00;
  System_String_o **ppSVar8;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  System_Type_array *pSVar11;
  System_Type_o *pSVar12;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_UI_Image_o *pUVar15;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *__this_04;
  UnityEngine_UI_Button_o *pUVar16;
  UnityEngine_Events_UnityAction_o *pUVar17;
  UnityEngine_EventSystems_EventTrigger_o *__this_05;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar18;
  UnityEngine_Events_UnityAction_T0__o *pUVar19;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_Color_o UVar22;
  int32_t local_40;
  int32_t local_3c;
  UnityEngine_UI_GridLayoutGroup_o *local_38;
  
  local_38 = emojiGrid;
  if (Il2CppMethodInitialized_07547d44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass72_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiButton_");
    il2cpp_codegen_initialize_runtime_metadata(&"{0}{1}");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}>");
    il2cpp_codegen_initialize_runtime_metadata(&"StickerButton_");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiText");
    il2cpp_codegen_initialize_runtime_metadata(&"StickerText");
    Il2CppMethodInitialized_07547d44 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass72_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel___c__DisplayClass72_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).spriteIndex = spriteIndex;
    (__this_00->fields).tooltipText = tooltipText;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltipText);
    pSVar10 = "{0}{1}";
    if (isSticker) {
      ppSVar8 = &"StickerButton_";
    }
    else {
      ppSVar8 = &"EmojiButton_";
    }
    arg0 = *ppSVar8;
    local_3c = (__this_00->fields).spriteIndex;
    pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
    pSVar10 = System_String__Format_5302c50(pSVar10,(Il2CppObject *)arg0,pIVar9,(MethodInfo *)0x0);
    pSVar11 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
    pIVar6 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar6,(MethodInfo *)0x0);
    if (pSVar11 != (System_Type_array *)0x0) {
      if ((pSVar12 != (System_Type_o *)0x0) &&
         (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class)
         , pIVar9 == (Il2CppObject *)0x0)) {
label_05d10135:
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pSVar12;
        Il2CppCodeGenWriteBarrier(pSVar11->m_Items);
        pSVar12 = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
        if ((pSVar12 != (System_Type_o *)0x0) &&
           (pIVar9 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
           pIVar9 == (Il2CppObject *)0x0)) goto label_05d10135;
        if ((pSVar11->max_length & 0xfffffffe) != 0) {
          pSVar11->m_Items[1] = pSVar12;
          Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1);
          pSVar12 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
          if ((pSVar12 != (System_Type_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) goto label_05d10135;
          if (2 < (uint)pSVar11->max_length) {
            pSVar11->m_Items[2] = pSVar12;
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_691aa60(__this_01,pSVar10,pSVar11,(MethodInfo *)0x0);
            if (((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                (pUVar13 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                local_38 != (UnityEngine_UI_GridLayoutGroup_o *)0x0)) &&
               (pUVar14 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)local_38,(MethodInfo *)0x0),
               pUVar13 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent_692d510(pUVar13,pUVar14,false,(MethodInfo *)0x0);
              pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_01,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
              ;
              if (pUVar15 != (UnityEngine_UI_Image_o *)0x0) {
                UVar21.fields.b = 0.3;
                UVar21.fields.a = 0.8;
                UVar21.fields.r = 0.3;
                UVar21.fields.g = 0.3;
                (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
                          (pUVar15,UVar21,(pUVar15->klass->vtable)._23_set_color.method);
                if (isSticker) {
                  ppSVar8 = &"StickerText";
                }
                else {
                  ppSVar8 = &"EmojiText";
                }
                pSVar10 = *ppSVar8;
                pSVar11 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                pIVar6 = TypeRef_UnityEngine_RectTransform;
                if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_075567a8);
                }
                pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar6,(MethodInfo *)0x0)
                ;
                if (pSVar11 != (System_Type_array *)0x0) {
                  if ((pSVar12 != (System_Type_o *)0x0) &&
                     (pIVar9 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
                     pIVar9 == (Il2CppObject *)0x0)) goto label_05d10135;
                  if ((int)pSVar11->max_length != 0) {
                    pSVar11->m_Items[0] = pSVar12;
                    Il2CppCodeGenWriteBarrier(pSVar11->m_Items);
                    pSVar12 = System_Type__GetTypeFromHandle
                                        ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,
                                         (MethodInfo *)0x0);
                    if ((pSVar12 != (System_Type_o *)0x0) &&
                       (pIVar9 = il2cpp_vm_Object_IsInst
                                           ((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class
                                           ), pIVar9 == (Il2CppObject *)0x0)) goto label_05d10135;
                    if ((pSVar11->max_length & 0xfffffffe) != 0) {
                      pSVar11->m_Items[1] = pSVar12;
                      Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1);
                      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                      UnityEngine_GameObject___ctor_691aa60(__this_02,pSVar10,pSVar11,(MethodInfo *)0x0);
                      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar13 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                        pUVar14 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent_692d510(pUVar13,pUVar14,false,(MethodInfo *)0x0);
                          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                                (__this_02,
                                                 (MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
                          ;
                          if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
                          }
                          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchorMin
                                      (__this_03,
                                       (UnityEngine_Vector2_o)
                                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->CenterMiddle).fields,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (__this_03,
                                       (UnityEngine_Vector2_o)
                                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->CenterMiddle).fields,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (__this_03,
                                       (UnityEngine_Vector2_o)
                                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->CenterMiddle).fields,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_sizeDelta
                                      (__this_03,(UnityEngine_Vector2_o)0x4218000042180000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (__this_03,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                            __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                  (__this_02,
                                                   (MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                  );
                            local_40 = (__this_00->fields).spriteIndex;
                            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
                            pSVar10 = System_String__Format("<sprite={0}>",pIVar9,(MethodInfo *)0x0);
                            if (__this_04 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              (*(__this_04->klass->vtable)._66_set_text.methodPtr)
                                        (__this_04,pSVar10,(__this_04->klass->vtable)._66_set_text.method);
                              TMPro_TMP_Text__set_fontSize
                                        ((TMPro_TMP_Text_o *)__this_04,30.0,(MethodInfo *)0x0);
                              TMPro_TMP_Text__set_alignment
                                        ((TMPro_TMP_Text_o *)__this_04,0x202,(MethodInfo *)0x0);
                              TMPro_TMP_Text__set_verticalAlignment
                                        ((TMPro_TMP_Text_o *)__this_04,0x200,(MethodInfo *)0x0);
                              TMPro_TMP_Text__set_enableAutoSizing
                                        ((TMPro_TMP_Text_o *)__this_04,false,(MethodInfo *)0x0);
                              UVar22.fields.b = 1.0;
                              UVar22.fields.a = 1.0;
                              UVar22.fields.r = 1.0;
                              UVar22.fields.g = 1.0;
                              (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                                        (__this_04,UVar22,(__this_04->klass->vtable)._23_set_color.method);
                              pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                                  (__this_01,
                                                   (MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                              if (isSticker) {
                                if (pUVar16 != (UnityEngine_UI_Button_o *)0x0) {
                                  pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pUVar16->fields).m_OnClick;
                                  pUVar17 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction)
                                  ;
                                  UnityEngine_Events_UnityAction___ctor
                                            (pUVar17,(Il2CppObject *)__this_00,
                                             (intptr_t)
                                             MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__0
                                             ,(MethodInfo *)0x0);
                                  if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (pUVar3,pUVar17,(MethodInfo *)0x0);
                                    UnityEngine_GameObject__AddComponent_object_
                                              (__this_01,
                                               (MethodInfo_353B6A0 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
                                    return;
                                  }
                                }
                              }
                              else if (pUVar16 != (UnityEngine_UI_Button_o *)0x0) {
                                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pUVar16->fields).m_OnClick;
                                pUVar17 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                UnityEngine_Events_UnityAction___ctor
                                          (pUVar17,(Il2CppObject *)__this_00,
                                           (intptr_t)
                                           MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__1
                                           ,(MethodInfo *)0x0);
                                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar17,(MethodInfo *)0x0)
                                  ;
                                  __this_05 = UnityEngine_GameObject__AddComponent_object_
                                                        (__this_01,
                                                         (MethodInfo_353B6A0 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger
                                                       );
                                  pUVar18 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                  UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                            (pUVar18,(MethodInfo *)0x0);
                                  if (pUVar18 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                                    (pUVar18->fields).eventID = 0;
                                    pUVar4 = (pUVar18->fields).callback;
                                    pUVar19 = (UnityEngine_Events_UnityAction_T0__o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction_BaseEventData
                                                        );
                                    UnityEngine_Events_UnityAction_object____ctor
                                              (pUVar19,(Il2CppObject *)__this_00,
                                               (intptr_t)
                                               MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__2
                                               ,(MethodInfo_4311A10 *)0x0);
                                    if (((pUVar4 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)
                                                    0x0) &&
                                        (UnityEngine_Events_UnityEvent_object___AddListener
                                                   ((UnityEngine_Events_UnityEvent_T0__o *)pUVar4,pUVar19,
                                                    (MethodInfo_4318F80 *)
                                                    MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                   ),
                                        __this_05 != (UnityEngine_EventSystems_EventTrigger_o *)0x0)) &&
                                       (pSVar20 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                                            (__this_05,(MethodInfo *)0x0),
                                       pMVar7 = 
                                       MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add,
                                       pSVar20 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0
                                       )) {
                                      piVar1 = &(pSVar20->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pUVar5 = (pSVar20->fields)._items;
                                      if (pUVar5 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0)
                                      {
                                        uVar2 = (pSVar20->fields)._size;
                                        if (uVar2 < (uint)pUVar5->max_length) {
                                          (pSVar20->fields)._size = uVar2 + 1;
                                          pUVar5->m_Items[(int)uVar2] = pUVar18;
                                          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
                                        }
                                        else {
                                          System_Collections_Generic_List_object___AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)pSVar20,
                                                     (Il2CppObject *)pUVar18,
                                                     (MethodInfo_395D230 *)
                                                     pMVar7->klass->rgctx_data[0xe].method);
                                        }
                                        pUVar18 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                                                                                          
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                        UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                  (pUVar18,(MethodInfo *)0x0);
                                        if (pUVar18 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                                          (pUVar18->fields).eventID = 1;
                                          pUVar4 = (pUVar18->fields).callback;
                                          pUVar19 = (UnityEngine_Events_UnityAction_T0__o *)
                                                    il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                                                                                              
                                                       TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
                                          UnityEngine_Events_UnityAction_object____ctor
                                                    (pUVar19,(Il2CppObject *)__this_00,
                                                     (intptr_t)
                                                     MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__3
                                                     ,(MethodInfo_4311A10 *)0x0);
                                          if (pUVar4 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o
                                                         *)0x0) {
                                            UnityEngine_Events_UnityEvent_object___AddListener
                                                      ((UnityEngine_Events_UnityEvent_T0__o *)pUVar4,pUVar19,
                                                       (MethodInfo_4318F80 *)
                                                       MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                      );
                                            pSVar20 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                                                (__this_05,(MethodInfo *)0x0);
                                            pMVar7 = 
                                            MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add;
                                            if (pSVar20 !=
                                                (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)
                                            {
                                              piVar1 = &(pSVar20->fields)._version;
                                              *piVar1 = *piVar1 + 1;
                                              pUVar5 = (pSVar20->fields)._items;
                                              if (pUVar5 != (UnityEngine_EventSystems_EventTrigger_Entry_array
                                                             *)0x0) {
                                                uVar2 = (pSVar20->fields)._size;
                                                if (uVar2 < (uint)pUVar5->max_length) {
                                                  (pSVar20->fields)._size = uVar2 + 1;
                                                  pUVar5->m_Items[(int)uVar2] = pUVar18;
                                                  Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
                                                  return;
                                                }
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           pSVar20,(Il2CppObject *)pUVar18,
                                                           (MethodInfo_395D230 *)
                                                           pMVar7->klass->rgctx_data[0xe].method);
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
                            }
                          }
                        }
                      }
                      goto label_05d1012b;
                    }
                  }
                  goto label_05d10130;
                }
              }
            }
            goto label_05d1012b;
          }
        }
      }
label_05d10130:
      ThrowIndexOutOfRangeException();
    }
  }
label_05d1012b:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ShowTemporaryTooltip
// il2cpp: System_Collections_IEnumerator_o* UI_ChatPanel__ShowTemporaryTooltip (UI_ChatPanel_o* __this, TMPro_TextMeshProUGUI_o* tooltip, System_String_o* message, float duration, const MethodInfo* method);
// 0x5d10160

System_Collections_IEnumerator_o *
UI_ChatPanel__ShowTemporaryTooltip
          (UI_ChatPanel_o *__this,TMPro_TextMeshProUGUI_o *tooltip,System_String_o *message,float duration,
          MethodInfo *method)

{
  UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this_00;
  
  if (Il2CppMethodInitialized_07547d45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__73);
    Il2CppMethodInitialized_07547d45 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__73);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip);
  (__this_00->fields).message = message;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).message);
  (__this_00->fields).duration = duration;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.ChatPanel$$ChangeEmojiPage
// il2cpp: void UI_ChatPanel__ChangeEmojiPage (UI_ChatPanel_o* __this, int32_t delta, TMPro_TextMeshProUGUI_o* tooltipText, const MethodInfo* method);
// 0x5d10210

void UI_ChatPanel__ChangeEmojiPage
               (UI_ChatPanel_o *__this,int32_t delta,TMPro_TextMeshProUGUI_o *tooltipText,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar2 = delta + (__this->fields)._emojiPage;
  iVar1 = 8;
  if (iVar2 < 8) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  (__this->fields)._emojiPage = iVar2;
  UI_ChatPanel__AddEmojiButtons(__this,tooltipText,(MethodInfo *)tooltipText);
  return;
}


// UI.ChatPanel$$SetPanelMode
// il2cpp: void UI_ChatPanel__SetPanelMode (UI_ChatPanel_o* __this, int32_t mode, const MethodInfo* method);
// 0x5d0f600

void UI_ChatPanel__SetPanelMode(UI_ChatPanel_o *__this,int32_t mode,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Transform_o *pUVar4;
  MethodInfo *method_00;
  undefined8 uVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547d46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipArea");
    Il2CppMethodInitialized_07547d46 = '\x01';
  }
  (__this->fields)._panelMode = mode;
  pUVar1 = (__this->fields)._emojiModeButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._emojiModeButton;
    if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto label_05d0f7d1;
    pTVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f7d1;
    uVar5 = 0x3f8000003f800000;
    if (mode != 0) {
      uVar5 = 0x3f19999a3f800000;
    }
    UVar6.fields.b = (float)(int)uVar5;
    UVar6.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
    UVar6.fields.r = 1.0;
    UVar6.fields.g = 1.0;
    (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
              (pTVar3,UVar6,(pTVar3->klass->vtable)._23_set_color.method);
  }
  pUVar1 = (__this->fields)._stickerModeButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._stickerModeButton;
    if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto label_05d0f7d1;
    pTVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d0f7d1;
    uVar5 = 0x3f8000003f800000;
    if (mode != 1) {
      uVar5 = 0x3f19999a3f800000;
    }
    UVar7.fields.b = (float)(int)uVar5;
    UVar7.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
    UVar7.fields.r = 1.0;
    UVar7.fields.g = 1.0;
    (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
              (pTVar3,UVar7,(pTVar3->klass->vtable)._23_set_color.method);
  }
  if (mode == 0) {
    (__this->fields)._stickerInserted = false;
    (__this->fields)._stickerTag = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerTag);
  }
  __this_00 = (__this->fields)._emojiPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"TooltipArea",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pTVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
        UI_ChatPanel__AddEmojiButtons(__this,pTVar3,method_00);
        return;
      }
    }
  }
label_05d0f7d1:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$InsertSticker
// il2cpp: void UI_ChatPanel__InsertSticker (UI_ChatPanel_o* __this, int32_t spriteIndex, const MethodInfo* method);
// 0x5d10240

void UI_ChatPanel__InsertSticker(UI_ChatPanel_o *__this,int32_t spriteIndex,MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *pUVar1;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  TMPro_TextMeshProUGUI_o *x;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  UI_ChatPanel__ShowTemporaryTooltip_d__73_o *__this_00;
  UnityEngine_Coroutine_o *pUVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  int32_t local_30;
  float local_2c;
  
  if (Il2CppMethodInitialized_07547d47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&":s{0}{1}:");
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipArea");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"StickerCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x8b\xe2\x80\x8b");
    Il2CppMethodInitialized_07547d47 = '\x01';
  }
  fVar9 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if (15.0 <= fVar9 - (__this->fields)._lastStickerSentTime) {
    local_30 = spriteIndex;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_30);
    pSVar6 = System_String__Format_5302c50
                       (":s{0}{1}:",(Il2CppObject *)"\xe2\x80\x8b\xe2\x80\x8b",pIVar7,(MethodInfo *)0x0);
    (__this->fields)._stickerInserted = true;
    (__this->fields)._stickerTag = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerTag);
    pTVar2 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d10685;
      TMPro_TMP_InputField__set_text(pTVar2,pSVar6,(MethodInfo *)0x0);
      if ((pSVar6 == (System_String_o *)0x0) ||
         (pTVar2 = (__this->fields)._inputField, pTVar2 == (TMPro_TMP_InputField_o *)0x0)) goto label_05d10685;
      value = (pSVar6->fields)._stringLength;
      TMPro_TMP_InputField__set_caretPosition(pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d10685;
      TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d10685;
      TMPro_TMP_InputField__set_selectionFocusPosition(pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._inputField;
      if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
         (pTVar3 = (pTVar2->fields).m_TextComponent, pTVar3 == (TMPro_TMP_Text_o *)0x0)) goto label_05d10685;
      (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d10685;
      method_00 = (MethodInfo *)0x0;
      TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    }
    UI_ChatPanel__SubmitProcessedInput(__this,method_00);
    fVar9 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    (__this->fields)._lastStickerSentTime = fVar9;
    if ((__this->fields)._emojiPanelActive != false) {
      (__this->fields)._emojiPanelActive = false;
      pUVar1 = (__this->fields)._emojiPanel;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d10685;
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    }
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
label_05d10685:
      ThrowNullReferenceException();
    }
    TMPro_TMP_InputField__DeactivateInputField(pTVar2,false,(MethodInfo *)0x0);
  }
  else {
    x = (TMPro_TextMeshProUGUI_o *)0x0;
    fVar10 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    fVar9 = (__this->fields)._lastStickerSentTime;
    pUVar1 = (__this->fields)._emojiPanel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d10685;
      x = (TMPro_TextMeshProUGUI_o *)0x0;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"TooltipArea",(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar5,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar8 = (__this->fields)._tooltipCoroutine;
      if (pUVar8 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar8,(MethodInfo *)0x0);
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar6 = UI_UIManager__GetLocale
                         ("InGame","Chat","StickerCooldown",
                          "","",(MethodInfo *)0x0);
      local_2c = ceilf((fVar9 - fVar10) + 15.0);
      pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,&local_2c);
      pSVar6 = System_String__Format(pSVar6,pIVar7,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07547d45 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__73);
        Il2CppMethodInitialized_07547d45 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__73);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).tooltip = x;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip);
      (__this_00->fields).message = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).message);
      (__this_00->fields).duration = 1.5;
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      (__this->fields)._tooltipCoroutine = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipCoroutine);
    }
  }
  return;
}


// UI.ChatPanel$$InsertEmoji
// il2cpp: void UI_ChatPanel__InsertEmoji (UI_ChatPanel_o* __this, int32_t spriteIndex, const MethodInfo* method);
// 0x5d10900

void UI_ChatPanel__InsertEmoji(UI_ChatPanel_o *__this,int32_t spriteIndex,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  int32_t startIndex;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *value;
  System_String_o *pSVar2;
  int iVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547d48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":{0}:");
    Il2CppMethodInitialized_07547d48 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      (*(pTVar1->klass->vtable)._38_Select.methodPtr)(pTVar1,(pTVar1->klass->vtable)._38_Select.method);
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        pSVar2 = (pTVar1->fields).m_Text;
        uStack_28 = CONCAT44(spriteIndex,(undefined4)uStack_28);
        arg0 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_28 + 4));
        value = System_String__Format(":{0}:",arg0,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
           (startIndex = TMPro_TMP_InputField__get_caretPosition(pTVar1,(MethodInfo *)0x0),
           pSVar2 != (System_String_o *)0x0)) {
          pSVar2 = System_String__Insert(pSVar2,startIndex,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) && (pSVar2 != (System_String_o *)0x0)) {
            iVar3 = (pTVar1->fields).m_CharacterLimit;
            if ((0 < iVar3) && (iVar3 < (pSVar2->fields)._stringLength)) {
              return;
            }
            TMPro_TMP_InputField__set_text(pTVar1,pSVar2,(MethodInfo *)0x0);
            if ((value != (System_String_o *)0x0) &&
               (pTVar1 = (__this->fields)._inputField, pTVar1 != (TMPro_TMP_InputField_o *)0x0)) {
              iVar3 = startIndex + (value->fields)._stringLength;
              TMPro_TMP_InputField__set_caretPosition(pTVar1,iVar3,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,iVar3,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,iVar3,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._inputField;
                  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                    TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.ChatPanel$$Sync
// il2cpp: void UI_ChatPanel__Sync (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0c820

void UI_ChatPanel__Sync(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UI_ChatPanel__RefreshPoolSize(__this,method);
  UI_ChatPanel__ValidatePMState(__this,method);
  UI_ChatPanel__RestorePMPartners(__this,method);
  UI_ChatPanel__RefreshDisplayedMessages(__this,method);
  return;
}


// UI.ChatPanel$$RefreshDisplayedMessages
// il2cpp: void UI_ChatPanel__RefreshDisplayedMessages (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d11650
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d11b2d: jmp 0x5d11b43
// asm:   0x5d11b5b: jmp 0x5d11a32

void UI_ChatPanel__RefreshDisplayedMessages(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  GameManagers_ChatManager_ChatDisplayLine_o *pGVar3;
  int32_t iVar4;
  uint32_t uVar5;
  uint uVar6;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *pSVar7;
  GameManagers_ChatManager_ChatDisplayLine_array *pGVar8;
  bool bVar9;
  GameManagers_ChatManager_ChatDisplayLine_o item;
  GameManagers_ChatManager_ChatDisplayLine_o item_00;
  GameManagers_ChatManager_ChatDisplayLine_Fields *pGVar10;
  bool bVar11;
  System_String_o *pSVar12;
  System_String_o *str1;
  System_DateTime_o timestamp;
  GameManagers_ChatManager_StaticFields *pGVar13;
  MethodInfo *method_00;
  MethodInfo *pMVar14;
  uint uVar15;
  GameManagers_ChatManager_ChatDisplayLine_o local_70;
  
  if (Il2CppMethodInitialized_07547d49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"PrivateChatWith");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d49 = '\x01';
  }
  pSVar7 = (__this->fields)._visibleMessages;
  if (pSVar7 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar4 = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields)._suggestionLines;
    if (pSVar7 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar4 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      if (0 < iVar4) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar4,(MethodInfo *)0x0);
      }
      bVar9 = true;
      if (((__this->fields)._inPMMode != false) &&
         ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0)) {
        pSVar7 = (__this->fields)._visibleMessages;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar12 = UI_UIManager__GetLocale
                            ("InGame","Chat","PrivateChatWith",
                             "","",(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,3,false,(MethodInfo *)0x0);
        str1 = GameManagers_ChatManager__GetPlayerIdentifier
                         ((__this->fields)._currentPMTarget,(MethodInfo *)0x0);
        pSVar12 = System_String__Concat_52f0320(pSVar12,str1,(MethodInfo *)0x0);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        timestamp = System_DateTime__get_Now((MethodInfo *)0x0);
        pSVar12 = GameManagers_ChatManager__GetFormattedMessage(pSVar12,timestamp,true,(MethodInfo *)0x0);
        GameManagers_ChatManager_ChatDisplayLine__Plain(&local_70,pSVar12,0,(MethodInfo *)0x0);
        pMVar14 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add;
        if (pSVar7 == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
        goto label_05d11b9c;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar8 = (pSVar7->fields)._items;
        if (pGVar8 == (GameManagers_ChatManager_ChatDisplayLine_array *)0x0) goto label_05d11b9c;
        uVar15 = (pSVar7->fields)._size;
        if (uVar15 < (uint)pGVar8->max_length) {
          (pSVar7->fields)._size = uVar15 + 1;
          pGVar10 = &pGVar8->m_Items[(int)uVar15].fields;
          pGVar10->SenderID = local_70.fields.SenderID;
          *(undefined4 *)&pGVar10->field_0x34 = local_70.fields._52_4_;
          pGVar10->LineID = local_70.fields.LineID;
          ppSVar2 = &pGVar8->m_Items[(int)uVar15].fields.SenderName;
          *ppSVar2 = local_70.fields.SenderName;
          ppSVar2[1] = local_70.fields.BodyText;
          ppSVar2 = &pGVar8->m_Items[(int)uVar15].fields.TimeText;
          *ppSVar2 = local_70.fields.TimeText;
          ppSVar2[1] = local_70.fields.IdText;
          pGVar3 = pGVar8->m_Items + (int)uVar15;
          (pGVar3->fields).PlainText = local_70.fields.PlainText;
          (pGVar3->fields).UsePlayerStyle = local_70.fields.UsePlayerStyle;
          *(undefined7 *)&(pGVar3->fields).field_0x9 = local_70.fields._9_7_;
          Il2CppCodeGenWriteBarrier((void **)(pGVar8->m_Items + (int)uVar15));
        }
        else {
          item.fields.UsePlayerStyle = local_70.fields.UsePlayerStyle;
          item.fields._9_7_ = local_70.fields._9_7_;
          item.fields.PlainText = local_70.fields.PlainText;
          item.fields.TimeText = local_70.fields.TimeText;
          item.fields.IdText = local_70.fields.IdText;
          item.fields.SenderName = local_70.fields.SenderName;
          item.fields.BodyText = local_70.fields.BodyText;
          item.fields.SenderID = local_70.fields.SenderID;
          item.fields._52_4_ = local_70.fields._52_4_;
          item.fields.LineID = local_70.fields.LineID;
          System_Collections_Generic_List_ChatManager_ChatDisplayLine___AddWithResize
                    (pSVar7,item,(MethodInfo_3A6D140 *)pMVar14->klass->rgctx_data[0xe].method);
        }
        bVar9 = false;
      }
      uVar15 = 0;
      while( true ) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
        if (pGVar13->RawMessages == (System_Collections_Generic_List_string__o *)0x0) goto label_05d11b9c;
        if ((pGVar13->RawMessages->fields)._size <= (int)uVar15) break;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
        }
        if (pGVar13->SuggestionFlags == (System_Collections_Generic_List_bool__o *)0x0) goto label_05d11b9c;
        pMVar14 = (MethodInfo *)(ulong)uVar15;
        bVar11 = System_Collections_Generic_List_bool___get_Item
                           (pGVar13->SuggestionFlags,uVar15,
                            (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        if (bVar11) {
          pSVar7 = (__this->fields)._suggestionLines;
          uVar5 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
joined_r0x05d11b55:
          if (uVar5 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__GetDisplayLine(&local_70,uVar15,(MethodInfo *)0x0);
          pMVar14 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add;
          if (pSVar7 == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
          goto label_05d11b9c;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar8 = (pSVar7->fields)._items;
          if (pGVar8 == (GameManagers_ChatManager_ChatDisplayLine_array *)0x0) goto label_05d11b9c;
          uVar6 = (pSVar7->fields)._size;
          if (uVar6 < (uint)pGVar8->max_length) {
            (pSVar7->fields)._size = uVar6 + 1;
            pGVar10 = &pGVar8->m_Items[(int)uVar6].fields;
            pGVar10->SenderID = local_70.fields.SenderID;
            *(undefined4 *)&pGVar10->field_0x34 = local_70.fields._52_4_;
            pGVar10->LineID = local_70.fields.LineID;
            ppSVar2 = &pGVar8->m_Items[(int)uVar6].fields.SenderName;
            *ppSVar2 = local_70.fields.SenderName;
            ppSVar2[1] = local_70.fields.BodyText;
            ppSVar2 = &pGVar8->m_Items[(int)uVar6].fields.TimeText;
            *ppSVar2 = local_70.fields.TimeText;
            ppSVar2[1] = local_70.fields.IdText;
            pGVar3 = pGVar8->m_Items + (int)uVar6;
            (pGVar3->fields).PlainText = local_70.fields.PlainText;
            (pGVar3->fields).UsePlayerStyle = local_70.fields.UsePlayerStyle;
            *(undefined7 *)&(pGVar3->fields).field_0x9 = local_70.fields._9_7_;
            Il2CppCodeGenWriteBarrier((void **)(pGVar8->m_Items + (int)uVar6));
          }
          else {
            item_00.fields.UsePlayerStyle = local_70.fields.UsePlayerStyle;
            item_00.fields._9_7_ = local_70.fields._9_7_;
            item_00.fields.PlainText = local_70.fields.PlainText;
            item_00.fields.TimeText = local_70.fields.TimeText;
            item_00.fields.IdText = local_70.fields.IdText;
            item_00.fields.SenderName = local_70.fields.SenderName;
            item_00.fields.BodyText = local_70.fields.BodyText;
            item_00.fields.SenderID = local_70.fields.SenderID;
            item_00.fields._52_4_ = local_70.fields._52_4_;
            item_00.fields.LineID = local_70.fields.LineID;
            System_Collections_Generic_List_ChatManager_ChatDisplayLine___AddWithResize
                      (pSVar7,item_00,(MethodInfo_3A6D140 *)pMVar14->klass->rgctx_data[0xe].method);
          }
        }
        else if (bVar9) {
          if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
          }
          bVar11 = UI_ChatPanel__IsPublicLine(uVar15,pMVar14);
          if (bVar11) {
label_05d11b43:
            pSVar7 = (__this->fields)._visibleMessages;
            uVar5 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
            goto joined_r0x05d11b55;
          }
        }
        else {
          bVar11 = UI_ChatPanel__IsPMWithCurrentTarget(__this,uVar15,method_00);
          if (bVar11) goto label_05d11b43;
        }
        uVar15 = uVar15 + 1;
      }
      pSVar7 = (__this->fields)._visibleMessages;
      if (pSVar7 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
        pMVar14 = (MethodInfo *)(__this->fields)._suggestionLines;
        System_Collections_Generic_List_ChatManager_ChatDisplayLine___AddRange
                  (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pMVar14,
                   (MethodInfo_3A6D4A0 *)
                   MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_AddRange);
        UI_ChatPanel__UpdateVisibleMessages(__this,pMVar14);
        return;
      }
    }
  }
label_05d11b9c:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsPMWithCurrentTarget
// il2cpp: bool UI_ChatPanel__IsPMWithCurrentTarget (UI_ChatPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d11cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d11cfb: jmp 0x5d11e12

bool UI_ChatPanel__IsPMWithCurrentTarget(UI_ChatPanel_o *__this,int32_t index,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_bool__o *__this_00;
  System_Collections_Generic_List_int__o *pSVar2;
  Photon_Realtime_Player_o *pPVar3;
  bool bVar4;
  int32_t iVar5;
  
  if (Il2CppMethodInitialized_07547d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    Il2CppMethodInitialized_07547d4a = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_bool__o **)
                 ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_List_bool__o *)0x0) {
    bVar4 = System_Collections_Generic_List_bool___get_Item
                      (__this_00,index,
                       (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    if (!bVar4) {
      return false;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
    if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar5 = System_Collections_Generic_List_int___get_Item
                        (pSVar2,index,
                         (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pPVar3 = (__this->fields)._currentPMTarget;
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        if (iVar5 == (pPVar3->fields).actorNumber) {
          return true;
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
        if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
          iVar5 = System_Collections_Generic_List_int___get_Item
                            (pSVar2,index,
                             (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          pPVar3 = (__this->fields)._currentPMTarget;
          if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
            return iVar5 == (pPVar3->fields).actorNumber;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsPublicLine
// il2cpp: bool UI_ChatPanel__IsPublicLine (int32_t index, const MethodInfo* method);
// 0x5d11bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d11be3: jmp 0x5d11cbb

bool UI_ChatPanel__IsPublicLine(int32_t index,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_bool__o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547d4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    Il2CppMethodInitialized_07547d4b = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_bool__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0x58);
  }
  if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
    bVar3 = System_Collections_Generic_List_bool___get_Item
                      (pSVar2,index,
                       (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    if (bVar3) {
      return true;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
    if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
      bVar3 = System_Collections_Generic_List_bool___get_Item
                        (pSVar2,index,
                         (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (!bVar3) {
        return true;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
      if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
        bVar3 = System_Collections_Generic_List_bool___get_Item
                          (pSVar2,index,
                           (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        return bVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateVisibleMessages
// il2cpp: void UI_ChatPanel__UpdateVisibleMessages (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d11e20
// eh: try 0x5d12274..0x5d1246c -> pad 0x5d12472 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1248a..0x5d1248f -> pad 0x5d124b9 cleanup
// eh: try 0x5d124bc..0x5d124c6 -> pad 0x5d124ce catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d12063: test r13d, r13d
// asm:   0x5d121ae: jmp 0x5d1245d
// asm:   0x5d1226d: nop dword ptr [rax]
// asm:   0x5d12447: jmp 0x5d11f2d
// asm:   0x5d1244c: mov r15d, ebp
// asm:   0x5d1244f: test r13d, r13d
// asm:   0x5d12452: jg 0x5d12068
// asm:   0x5d12458: jmp 0x5d120ba
// asm:   0x5d1246c: jmp 0x5d12472
// asm:   0x5d1246e: jmp 0x5d12472
// asm:   0x5d12470: jmp 0x5d12472
// asm:   0x5d12472: mov rbx, rax
// asm:   0x5d12475: cmp edx, 1
// asm:   0x5d12478: jne 0x5d124bc
// asm:   0x5d1247a: mov rdi, rbx
// asm:   0x5d1247d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d12482: mov rbx, qword ptr [rax]
// asm:   0x5d12485: mov qword ptr [rsp + 0x78], rbx
// asm:   0x5d1248a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1248f: lea rax, [rip + 0x157cc1a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d12496: mov rsi, qword ptr [rax]
// asm:   0x5d12499: lea rdi, [rsp + 0x60]
// asm:   0x5d1249e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d124a3: test rbx, rbx
// asm:   0x5d124a6: mov r14, qword ptr [rsp + 0x50]
// asm:   0x5d124ab: je 0x5d122bd
// asm:   0x5d124b1: mov rdi, rbx
// asm:   0x5d124b4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d124b9: mov rbx, rax
// asm:   0x5d124bc: lea rdi, [rsp + 0x78]
// asm:   0x5d124c1: call 0x2fdbcb0  ; il2cpp_runtime_helper_02fdbcb0()
// asm:   0x5d124c6: mov rdi, rbx
// asm:   0x5d124c9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d124ce: mov rdi, rax
// asm:   0x5d124d1: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__UpdateVisibleMessages(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  GameManagers_ChatManager_ChatDisplayLine_o firstLine;
  GameManagers_ChatManager_ChatDisplayLine_o line;
  int32_t index;
  bool bVar6;
  int iVar7;
  UI_ChatPanel_ChatLineView_o *__this_00;
  MethodInfo *method_00;
  UI_ChatScrollRect_o *pUVar8;
  int iVar9;
  MethodInfo *method_01;
  MethodInfo *pMVar10;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar11;
  float fVar12;
  UnityEngine_Color_o UVar13;
  float local_9c;
  undefined1 local_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  System_String_o *local_78;
  undefined1 local_70 [16];
  System_String_o *local_60;
  System_String_o *pSStack_58;
  System_String_o *local_50;
  System_String_o *pSStack_48;
  int32_t local_40;
  undefined4 uStack_3c;
  int64_t iStack_38;
  
  if (Il2CppMethodInitialized_07547d4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d4c = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_78 = (System_String_o *)0x0;
  pSVar11 = (__this->fields)._linesPool;
  if ((pSVar11 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) ||
     (pMVar10 = (MethodInfo *)(__this->fields)._visibleMessages, pMVar10 == (MethodInfo *)0x0))
  goto label_05d1245d;
  iVar7 = *(int *)&pMVar10->name;
  if (iVar7 == 0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)pSVar11,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    local_78 = local_60;
    local_88 = (undefined1  [8])local_70._0_8_;
    pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)local_70._8_8_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_88;
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                             ), bVar6) {
      if (local_78 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((*(uint64_t *)((char *)local_78 + 0xc0)) == (System_String_c *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)(*(uint64_t *)((char *)local_78 + 0xc0)),false,(MethodInfo *)0x0)
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    pUVar8 = (__this->fields)._scrollRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar10 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar8 = (__this->fields)._scrollRect;
      if (pUVar8 == (UI_ChatScrollRect_o *)0x0) goto label_05d1245d;
      pUVar3 = (pUVar8->fields).m_VerticalScrollbar;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar10 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
      if (bVar6) {
        pUVar8 = (__this->fields)._scrollRect;
        if ((pUVar8 == (UI_ChatScrollRect_o *)0x0) ||
           (pUVar3 = (pUVar8->fields).m_VerticalScrollbar, pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0))
        goto label_05d1245d;
        pMVar10 = (MethodInfo *)0x0;
        UnityEngine_UI_Scrollbar__set_size(pUVar3,1.0,(MethodInfo *)0x0);
      }
    }
    UI_ChatPanel__LayoutVisibleRows(__this,pMVar10);
    if (Il2CppMethodInitialized_07547d51 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
      Il2CppMethodInitialized_07547d51 = '\x01';
    }
    pUVar5 = (__this->fields)._panelImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      pUVar5 = (__this->fields)._panelImage;
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_05d1245d;
      UVar13 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                         (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
      if (9.9999994e-11 <=
          UVar13.fields.a * UVar13.fields.a +
          UVar13.fields.g * UVar13.fields.g + UVar13.fields.r * UVar13.fields.r +
          UVar13.fields.b * UVar13.fields.b) {
        pUVar5 = (__this->fields)._panelImage;
        if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_05d1245d;
        (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                  (pUVar5,(UnityEngine_Color_o)ZEXT816(0),(pUVar5->klass->vtable)._23_set_color.method);
      }
    }
    return;
  }
  iVar1 = (pSVar11->fields)._size;
  pUVar8 = (__this->fields)._scrollRect;
  if (pUVar8 == (UI_ChatScrollRect_o *)0x0) {
    local_9c = 0.0;
    pUVar8 = (UI_ChatScrollRect_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_9c = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                         ((UnityEngine_UI_ScrollRect_o *)pUVar8,(MethodInfo *)0x0);
    iVar7 = *(int *)&pMVar10->name;
    pUVar8 = (__this->fields)._scrollRect;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar8 = (__this->fields)._scrollRect;
    if (pUVar8 == (UI_ChatScrollRect_o *)0x0) goto label_05d1245d;
    pUVar3 = (pUVar8->fields).m_VerticalScrollbar;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_01 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar8 = (__this->fields)._scrollRect;
      if ((pUVar8 == (UI_ChatScrollRect_o *)0x0) ||
         (pUVar3 = (pUVar8->fields).m_VerticalScrollbar, pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0))
      goto label_05d1245d;
      fVar12 = 1.0;
      if ((float)iVar1 / (float)iVar7 <= 1.0) {
        fVar12 = (float)iVar1 / (float)iVar7;
      }
      method_01 = (MethodInfo *)0x0;
      UnityEngine_UI_Scrollbar__set_size(pUVar3,fVar12,(MethodInfo *)0x0);
    }
  }
  iVar9 = iVar7 - iVar1;
  index = 0;
  if ((iVar9 != 0 && iVar1 <= iVar7) && (index = iVar9, 0.0 < local_9c)) {
    if (Il2CppMethodInitialized_0753e7f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f6 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar12 = floorf((1.0 - local_9c) * (float)iVar9);
    iVar7 = (int)fVar12;
    if (iVar7 < iVar9) {
      iVar9 = iVar7;
    }
    index = 0;
    if (-1 < iVar7) {
      index = iVar9;
    }
  }
  if (0 < iVar1) {
    method_01 = pMVar10;
    System_Collections_Generic_List_ChatManager_ChatDisplayLine___get_Item
              ((GameManagers_ChatManager_ChatDisplayLine_o *)local_70,
               (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)pMVar10,index,
               (MethodInfo_3A6CD10 *)
               MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Item);
    firstLine.fields._8_8_ = local_70._8_8_;
    firstLine.fields.PlainText = (System_String_o *)local_70._0_8_;
    firstLine.fields.TimeText = local_60;
    firstLine.fields.IdText = pSStack_58;
    firstLine.fields.SenderName = local_50;
    firstLine.fields.BodyText = pSStack_48;
    firstLine.fields.SenderID = local_40;
    firstLine.fields._52_4_ = uStack_3c;
    firstLine.fields.LineID = iStack_38;
    UI_ChatPanel__AlignPoolTo(__this,firstLine,method_01);
  }
  pSVar11 = (__this->fields)._linesPool;
  if (pSVar11 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    iVar7 = 0;
    do {
      if ((pSVar11->fields)._size <= iVar7) {
        UI_ChatPanel__LayoutVisibleRows(__this,method_01);
        UI_ChatPanel__UpdateBackgroundVisibility(__this,true,method_00);
        return;
      }
      __this_00 = (UI_ChatPanel_ChatLineView_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar11,iVar7,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
      if (index + iVar7 < *(int *)&pMVar10->name) {
        if ((__this_00 == (UI_ChatPanel_ChatLineView_o *)0x0) ||
           (pUVar4 = (__this_00->fields)._gameObject_k__BackingField,
           pUVar4 == (UnityEngine_GameObject_o *)0x0)) break;
        bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
        if (!bVar6) {
          pUVar4 = (__this_00->fields)._gameObject_k__BackingField;
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) break;
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
        }
        method_01 = pMVar10;
        System_Collections_Generic_List_ChatManager_ChatDisplayLine___get_Item
                  ((GameManagers_ChatManager_ChatDisplayLine_o *)local_70,
                   (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)pMVar10,index + iVar7,
                   (MethodInfo_3A6CD10 *)
                   MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Item);
        line.fields._8_8_ = local_70._8_8_;
        line.fields.PlainText = (System_String_o *)local_70._0_8_;
        line.fields.TimeText = local_60;
        line.fields.IdText = pSStack_58;
        line.fields.SenderName = local_50;
        line.fields.BodyText = pSStack_48;
        line.fields.SenderID = local_40;
        line.fields._52_4_ = uStack_3c;
        line.fields.LineID = iStack_38;
        UI_ChatPanel_ChatLineView__SetLine(__this_00,line,method_01);
      }
      else {
        if ((__this_00 == (UI_ChatPanel_ChatLineView_o *)0x0) ||
           (pUVar4 = (__this_00->fields)._gameObject_k__BackingField,
           pUVar4 == (UnityEngine_GameObject_o *)0x0)) break;
        method_01 = (MethodInfo *)0x0;
        bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar4 = (__this_00->fields)._gameObject_k__BackingField;
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) break;
          method_01 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        }
      }
      iVar7 = iVar7 + 1;
      pSVar11 = (__this->fields)._linesPool;
    } while (pSVar11 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0);
  }
label_05d1245d:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$AlignPoolTo
// il2cpp: void UI_ChatPanel__AlignPoolTo (UI_ChatPanel_o* __this, GameManagers_ChatManager_ChatDisplayLine_o firstLine, const MethodInfo* method);
// 0x5d12a80

void UI_ChatPanel__AlignPoolTo
               (UI_ChatPanel_o *__this,GameManagers_ChatManager_ChatDisplayLine_o firstLine,MethodInfo *method
               )

{
  int iVar1;
  Il2CppClass *a;
  System_String_o *a_00;
  Il2CppClass *a_01;
  System_String_o *a_02;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  
  if (Il2CppMethodInitialized_07547d4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
    Il2CppMethodInitialized_07547d4d = '\x01';
  }
  __this_00 = (__this->fields)._linesPool;
  if (__this_00 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pIVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      if (((*(char *)&pIVar3[9].klass != '\0') && (pIVar3[8].monitor == (void *)firstLine.fields.LineID)) &&
         (((*(byte *)&pIVar3[5].monitor ^ firstLine.fields.UsePlayerStyle) & 1) == 0)) {
        a = pIVar3[6].klass;
        a_00 = pIVar3[6].monitor;
        a_01 = pIVar3[7].klass;
        a_02 = pIVar3[7].monitor;
        iVar1 = *(int *)&pIVar3[8].klass;
        bVar2 = System_String__op_Equality
                          ((System_String_o *)pIVar3[5].klass,firstLine.fields.PlainText,(MethodInfo *)0x0);
        if ((((bVar2) &&
             (bVar2 = System_String__op_Equality
                                ((System_String_o *)a,firstLine.fields.TimeText,(MethodInfo *)0x0), bVar2)) &&
            ((bVar2 = System_String__op_Equality(a_00,firstLine.fields.IdText,(MethodInfo *)0x0), bVar2 &&
             ((bVar2 = System_String__op_Equality
                                 ((System_String_o *)a_01,firstLine.fields.SenderName,(MethodInfo *)0x0),
              bVar2 && (bVar2 = System_String__op_Equality(a_02,firstLine.fields.BodyText,(MethodInfo *)0x0),
                       bVar2)))))) && (iVar1 == firstLine.fields.SenderID)) {
          if (index < 1) {
            return;
          }
          UI_ChatPanel__RotatePool(__this,index,method_00);
          return;
        }
      }
      index = index + 1;
      __this_00 = (__this->fields)._linesPool;
    } while (__this_00 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$RotatePool
// il2cpp: void UI_ChatPanel__RotatePool (UI_ChatPanel_o* __this, int32_t offset, const MethodInfo* method);
// 0x5d132f0

void UI_ChatPanel__RotatePool(UI_ChatPanel_o *__this,int32_t offset,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar4;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  UI_ChatPanel_ChatLineView_array *pUVar5;
  MethodInfo *pMVar6;
  UI_ChatPanel_ChatLineView_o *item;
  int index;
  
  if (Il2CppMethodInitialized_07547d4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
    Il2CppMethodInitialized_07547d4e = '\x01';
  }
  pSVar4 = (__this->fields)._poolRotationBuffer;
  if (pSVar4 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if (0 < offset) {
      index = 0;
      do {
        while( true ) {
          pSVar4 = (__this->fields)._linesPool;
          if (pSVar4 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) goto label_05d134b4;
          __this_00 = (__this->fields)._poolRotationBuffer;
          item = (UI_ChatPanel_ChatLineView_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
          pMVar6 = MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add;
          if (__this_00 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0)
          goto label_05d134b4;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this_00->fields)._items;
          if (pUVar5 == (UI_ChatPanel_ChatLineView_array *)0x0) goto label_05d134b4;
          uVar3 = (__this_00->fields)._size;
          if ((uint)pUVar5->max_length <= uVar3) break;
          (__this_00->fields)._size = uVar3 + 1;
          pUVar5->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3);
          index = index + 1;
          if (offset == index) goto label_05d1342b;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        index = index + 1;
      } while (offset != index);
    }
label_05d1342b:
    pSVar4 = (__this->fields)._linesPool;
    if (pSVar4 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
      System_Collections_Generic_List_object___RemoveRange
                ((System_Collections_Generic_List_object__o *)pSVar4,0,offset,
                 (MethodInfo_395F1A0 *)
                 MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_RemoveRange);
      pSVar4 = (__this->fields)._linesPool;
      if (pSVar4 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar4,
                   (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._poolRotationBuffer,
                   (MethodInfo_395D490 *)
                   MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_AddRange);
        pSVar4 = (__this->fields)._poolRotationBuffer;
        if (pSVar4 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar2 = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (iVar2 < 1) {
            return;
          }
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05d134b4:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ConfigureManualLineLayout
// il2cpp: void UI_ChatPanel__ConfigureManualLineLayout (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0b310

void UI_ChatPanel__ConfigureManualLineLayout(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *x_00;
  
  if (Il2CppMethodInitialized_07547d4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d4f = '\x01';
  }
  pUVar1 = (__this->fields)._panel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar1,(MethodInfo_353B730 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d0b3fc;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._panel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      x_00 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (x_00 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d0b3fc:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$LayoutVisibleRows
// il2cpp: void UI_ChatPanel__LayoutVisibleRows (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d124e0
// eh: try 0x5d125b4..0x5d12853 -> pad 0x5d128b8 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1287f..0x5d12884 -> pad 0x5d128a9 cleanup
// eh: try 0x5d128ac..0x5d128b6 -> pad 0x5d1290f catch (...) [compiler noexcept guard]
// eh: try 0x5d128d0..0x5d128d5 -> pad 0x5d128fa cleanup
// eh: try 0x5d128fd..0x5d12907 -> pad 0x5d1290f catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d125ad: nop dword ptr [rax]
// asm:   0x5d1263d: shufps xmm1, xmm1, 0x55
// asm:   0x5d12641: cmp byte ptr [rip + 0x182c16c], 0
// asm:   0x5d12648: je 0x5d1280e
// asm:   0x5d12853: jmp 0x5d12867
// asm:   0x5d12855: jmp 0x5d12867
// asm:   0x5d12857: jmp 0x5d12867
// asm:   0x5d12859: jmp 0x5d12867
// asm:   0x5d1285b: jmp 0x5d12867
// asm:   0x5d1285d: jmp 0x5d12867
// asm:   0x5d1285f: jmp 0x5d12867
// asm:   0x5d12861: jmp 0x5d128b8
// asm:   0x5d12863: jmp 0x5d128b8
// asm:   0x5d12865: jmp 0x5d128b8
// asm:   0x5d12867: mov r15, rax
// asm:   0x5d1286a: cmp edx, 1
// asm:   0x5d1286d: jne 0x5d128ac
// asm:   0x5d1286f: mov rdi, r15
// asm:   0x5d12872: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d12877: mov rbx, qword ptr [rax]
// asm:   0x5d1287a: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d1287f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d12884: lea rax, [rip + 0x157c825]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d1288b: mov rsi, qword ptr [rax]
// asm:   0x5d1288e: lea rdi, [rsp + 0x30]
// asm:   0x5d12893: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d12898: test rbx, rbx
// asm:   0x5d1289b: je 0x5d127df
// asm:   0x5d128a1: mov rdi, rbx
// asm:   0x5d128a4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d128a9: mov r15, rax
// asm:   0x5d128ac: lea rdi, [rsp + 0x18]
// asm:   0x5d128b1: call 0x2fdbd10  ; il2cpp_runtime_helper_02fdbd10()
// asm:   0x5d128b6: jmp 0x5d12907
// asm:   0x5d128b8: mov r15, rax
// asm:   0x5d128bb: cmp edx, 1
// asm:   0x5d128be: jne 0x5d128fd
// asm:   0x5d128c0: mov rdi, r15
// asm:   0x5d128c3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d128c8: mov r15, qword ptr [rax]
// asm:   0x5d128cb: mov qword ptr [rsp + 0x18], r15
// asm:   0x5d128d0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d128d5: lea rax, [rip + 0x157c7d4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d128dc: mov rsi, qword ptr [rax]
// asm:   0x5d128df: lea rdi, [rsp + 0x30]
// asm:   0x5d128e4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d128e9: test r15, r15
// asm:   0x5d128ec: je 0x5d1260f
// asm:   0x5d128f2: mov rdi, r15
// asm:   0x5d128f5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d128fa: mov r15, rax
// asm:   0x5d128fd: lea rdi, [rsp + 0x18]
// asm:   0x5d12902: call 0x2fdbce0  ; il2cpp_runtime_helper_02fdbce0()
// asm:   0x5d12907: mov rdi, r15
// asm:   0x5d1290a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1290f: mov rdi, rax
// asm:   0x5d12912: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__LayoutVisibleRows(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  float local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07547d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547d50 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._linesPool;
  if (pSVar1 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_object__o *)pSVar1,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    local_58 = local_70;
    local_68 = (undefined1  [8])local_80._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_98 = 10.0;
    local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                             ), pIVar3 = local_58, bVar4) {
      if (local_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_58[0xc].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = UnityEngine_GameObject__get_activeSelf
                        ((UnityEngine_GameObject_o *)local_58[0xc].klass,(MethodInfo *)0x0);
      if (bVar4) {
        local_98 = local_98 + *(float *)((long)&pIVar3[0xb].monitor + 4);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    pUVar2 = (__this->fields)._chatPanelRect;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      fVar8 = UVar10.fields.m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        fStack_40 = (float)in_XMM1_Dc;
        local_48 = (undefined1  [8])UVar10.fields._8_8_;
        fStack_3c = (float)in_XMM1_Dd;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar8 = (float)local_48._4_4_;
      }
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        local_48._4_4_ = fVar8;
        local_48._0_4_ = fVar8;
        fStack_40 = fVar8;
        fStack_3c = fVar8;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
        fVar8 = (float)local_48._0_4_;
      }
      fVar6 = ABS(fVar8);
      if (ABS(fVar8) <= ABS(local_98)) {
        fVar6 = ABS(local_98);
      }
      fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar7 = fVar6 * 1e-06;
      if (fVar6 * 1e-06 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 <= ABS(local_98 - fVar8)) {
        pUVar2 = (__this->fields)._chatPanelRect;
        if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05d12844;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,1,local_98,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields)._linesPool;
      if (pSVar1 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                   (System_Collections_Generic_List_object__o *)pSVar1,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
        local_58 = local_70;
        local_68 = (undefined1  [8])local_80._0_8_;
        pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
        local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_98 = 0.0;
        local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                            );
          pIVar3 = local_58;
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
            return;
          }
          if (local_58 == (Il2CppObject *)0x0) break;
          if (local_58[0xc].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = UnityEngine_GameObject__get_activeSelf
                            ((UnityEngine_GameObject_o *)local_58[0xc].klass,(MethodInfo *)0x0);
          if (bVar4) {
            if (pIVar3[2].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            UVar5 = UnityEngine_RectTransform__get_anchoredPosition
                              ((UnityEngine_RectTransform_o *)pIVar3[2].klass,(MethodInfo *)0x0);
            fVar8 = UVar5.fields.y + local_98;
            if (9.9999994e-11 <= fVar8 * fVar8 + UVar5.fields.x * UVar5.fields.x) {
              if (pIVar3[2].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_RectTransform__set_anchoredPosition
                        ((UnityEngine_RectTransform_o *)pIVar3[2].klass,
                         (UnityEngine_Vector2_o)((ulong)((uint)local_98 ^ (uint)g_data_01004fa0) << 0x20),
                         (MethodInfo *)0x0);
            }
            local_98 = local_98 + *(float *)((long)&pIVar3[0xb].monitor + 4);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_05d12844:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateBackgroundVisibility
// il2cpp: void UI_ChatPanel__UpdateBackgroundVisibility (UI_ChatPanel_o* __this, bool hasMessages, const MethodInfo* method);
// 0x5d12920

void UI_ChatPanel__UpdateBackgroundVisibility(UI_ChatPanel_o *__this,bool hasMessages,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *__this_00;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o UVar9;
  UnityEngine_Color_o UVar10;
  
  if (Il2CppMethodInitialized_07547d51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07547d51 = '\x01';
  }
  pUVar1 = (__this->fields)._panelImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (hasMessages) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (((pSVar2 == (Settings_UISettings_o *)0x0) ||
        (pSVar3 = (pSVar2->fields).ChatBackgroundColor, pSVar3 == (Settings_ColorSetting_o *)0x0)) ||
       (__this_00 = (pSVar3->fields)._value, __this_00 == (Utility_Color255_o *)0x0)) goto label_05d12a75;
    UVar9 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    fVar7 = UVar9.fields.b;
    fVar8 = UVar9.fields.a;
    fVar5 = UVar9.fields.r;
    fVar6 = UVar9.fields.g;
  }
  pUVar1 = (__this->fields)._panelImage;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    UVar9 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    UVar10.fields.g = fVar6;
    UVar10.fields.r = fVar5;
    fVar5 = UVar9.fields.r - fVar5;
    fVar6 = UVar9.fields.g - fVar6;
    UVar10.fields.a = fVar8;
    UVar10.fields.b = fVar7;
    fVar7 = UVar9.fields.b - fVar7;
    fVar8 = UVar9.fields.a - fVar8;
    if (fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) {
      return;
    }
    pUVar1 = (__this->fields)._panelImage;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,UVar10,(pUVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
label_05d12a75:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$Activate
// il2cpp: void UI_ChatPanel__Activate (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0d560

void UI_ChatPanel__Activate(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *pSVar3;
  bool bVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int value;
  
  if (Il2CppMethodInitialized_07547d52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d52 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar2 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((__this->fields)._chatHidden != false) {
        UI_ChatPanel__SetChatHiddenState(__this,false,true,in_RCX);
      }
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        (*(pTVar2->klass->vtable)._38_Select.methodPtr)(pTVar2,(pTVar2->klass->vtable)._38_Select.method);
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__ActivateInputField(pTVar2,(MethodInfo *)0x0);
          UI_ChatPanel__UpdatePlaceholderVisibility(__this,true,method_00);
          if (0 < (__this->fields)._desiredCaretPosition) {
            pTVar2 = (__this->fields)._inputField;
            if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0d718;
            bVar4 = System_String__IsNullOrEmpty((pTVar2->fields).m_Text,(MethodInfo *)0x0);
            if (!bVar4) {
              pTVar2 = (__this->fields)._inputField;
              if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
                 (pSVar3 = (pTVar2->fields).m_Text, pSVar3 == (System_String_o *)0x0)) goto label_05d0d718;
              iVar1 = (__this->fields)._desiredCaretPosition;
              value = (pSVar3->fields)._stringLength;
              if (iVar1 < value) {
                value = iVar1;
              }
              if (iVar1 < 0) {
                value = 0;
              }
              TMPro_TMP_InputField__set_caretPosition(pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (__this->fields)._inputField;
              if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0d718;
              TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (__this->fields)._inputField;
              if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d0d718;
              TMPro_TMP_InputField__set_selectionFocusPosition(pTVar2,value,(MethodInfo *)0x0);
              (__this->fields)._desiredCaretPosition = 0;
            }
          }
          pTVar2 = (__this->fields)._inputField;
          if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
            bVar4 = System_String__IsNullOrEmpty((pTVar2->fields).m_Text,(MethodInfo *)0x0);
            if (bVar4) {
              return;
            }
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ForceSuggestionRefresh((MethodInfo *)0x0);
            pTVar2 = (__this->fields)._inputField;
            if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
              GameManagers_ChatManager__HandleTyping((pTVar2->fields).m_Text,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_05d0d718:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatPanel$$IsInputActive
// il2cpp: bool UI_ChatPanel__IsInputActive (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d0d4e0

bool UI_ChatPanel__IsInputActive(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = false;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = (pTVar1->fields).m_AllowInput != false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// UI.ChatPanel$$OnEndEdit
// il2cpp: void UI_ChatPanel__OnEndEdit (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d13600
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d137ba: xor esi, esi
// asm:   0x5d137bc: call 0x5b57080  ; Settings_KeybindSetting__ContainsEnter()
// asm:   0x5d137c1: mov byte ptr [r15 + 0xb0], al
// asm:   0x5d137c8: jmp 0x5d13697

void UI_ChatPanel__OnEndEdit(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_GameObject_o *__this_00;
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_01;
  bool bVar3;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_07547d54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547d54 = '\x01';
  }
  if ((__this->fields)._isDestroyed != false) {
    return;
  }
  x = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  UI_ChatPanel__UpdatePlaceholderVisibility(__this,false,method_00);
  bVar3 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  method_02 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0);
  if (bVar3) {
label_05d136c1:
    UI_ChatPanel__SubmitProcessedInput(__this,method_02);
    return;
  }
  method_02 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0);
  if (bVar3) goto label_05d136c1;
  UVar4 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  bVar3 = UI_ChatPanel__IsMouseOverAnyChatElement(__this,(UnityEngine_Vector2_o)UVar4.fields._0_8_,method_02);
  if (!bVar3) {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (__this->fields)._emojiPanel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05d137cd;
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        rect = UI_ChatPanel__GetCachedRectTransform(__this,(__this->fields)._emojiPanel,method_01);
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                          (rect,(UnityEngine_Vector2_o)UVar4.fields._0_8_,(MethodInfo *)0x0);
        if (bVar3) goto label_05d1378b;
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
  }
label_05d1378b:
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_01 = (pSVar2->fields).Chat, __this_01 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__ContainsEnter(__this_01,(MethodInfo *)0x0);
    (__this->fields).IgnoreNextActivation = bVar3;
    return;
  }
label_05d137cd:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$OnSubmit
// il2cpp: void UI_ChatPanel__OnSubmit (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d13c80

void UI_ChatPanel__OnSubmit(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d55 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    x = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
      if (bVar1) {
        UI_ChatPanel__SubmitProcessedInput(__this,method_00);
        return;
      }
    }
  }
  return;
}


// UI.ChatPanel$$SubmitProcessedInput
// il2cpp: void UI_ChatPanel__SubmitProcessedInput (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d10690

void UI_ChatPanel__SubmitProcessedInput(UI_ChatPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  TMPro_TMP_InputField_o *pTVar2;
  Photon_Realtime_Player_o *pPVar3;
  Settings_InputSettings_o *pSVar4;
  Settings_GeneralInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *__this_00;
  bool bVar6;
  undefined8 in_RAX;
  System_String_o *pSVar7;
  Il2CppObject *arg0;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  System_String_o **__this_01;
  undefined8 uStack_28;
  
  __this_01 = (System_String_o **)__this;
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    __this_01 = &"";
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d56 = '\x01';
    in_RDX = extraout_RDX;
  }
  pTVar2 = (__this->fields)._inputField;
  if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
    pSVar7 = UI_ChatPanel__ProcessEmojiCodes((UI_ChatPanel_o *)__this_01,(pTVar2->fields).m_Text,in_RDX);
    bVar6 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    if (bVar6) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      (__this->fields).IgnoreNextActivation = true;
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_text(pTVar2,"",(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__DeactivateInputField(pTVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      if (pSVar7 != (System_String_o *)0x0) {
        bVar6 = System_String__StartsWith(pSVar7,"/",(MethodInfo *)0x0);
        if (((bVar6) || ((__this->fields)._inPMMode == false)) ||
           (pPVar3 = (__this->fields)._currentPMTarget, pPVar3 == (Photon_Realtime_Player_o *)0x0)) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__HandleInput(pSVar7,(MethodInfo *)0x0);
          pSVar7 = "PUBLIC";
        }
        else {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__SendPrivateMessage(pPVar3,pSVar7,(MethodInfo *)0x0);
          pPVar3 = (__this->fields)._currentPMTarget;
          if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_05d108f6;
          uStack_28 = CONCAT44((pPVar3->fields).actorNumber,(undefined4)uStack_28);
          arg0 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_28 + 4));
          pSVar7 = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
        }
        GameManagers_ChatManager__ClearConversation(pSVar7,(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__set_text(pTVar2,"",(MethodInfo *)0x0);
          pTVar2 = (__this->fields)._inputField;
          if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            TMPro_TMP_InputField__DeactivateInputField(pTVar2,false,(MethodInfo *)0x0);
            UI_ChatPanel__RefreshPoolSize(__this,method_00);
            UI_ChatPanel__ValidatePMState(__this,method_00);
            UI_ChatPanel__RestorePMPartners(__this,method_00);
            UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
            if (((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_GeneralInputSettings_o *)0x0)) &&
               (__this_00 = (pSVar5->fields).Chat, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
              bVar6 = Settings_KeybindSetting__ContainsEnter(__this_00,(MethodInfo *)0x0);
              (__this->fields).IgnoreNextActivation = bVar6;
              return;
            }
          }
        }
      }
    }
  }
label_05d108f6:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$AddLine
// il2cpp: void UI_ChatPanel__AddLine (UI_ChatPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x5d13d00

void UI_ChatPanel__AddLine(UI_ChatPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)line);
  return;
}


// UI.ChatPanel$$ReplaceLastLine
// il2cpp: void UI_ChatPanel__ReplaceLastLine (UI_ChatPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x5d13d10

void UI_ChatPanel__ReplaceLastLine(UI_ChatPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)line);
  return;
}


// UI.ChatPanel$$AddLines
// il2cpp: void UI_ChatPanel__AddLines (UI_ChatPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x5d13d20
// eh: try 0x5d13dc3..0x5d13dd7 -> pad 0x5d13dfe (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d13e15..0x5d13e1a -> pad 0x5d13e3b cleanup
// eh: try 0x5d13e3e..0x5d13e46 -> pad 0x5d13e4e catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d13dfc: jmp 0x5d13dfe
// asm:   0x5d13dfe: mov rbx, rax
// asm:   0x5d13e01: cmp edx, 1
// asm:   0x5d13e04: jne 0x5d13e3e
// asm:   0x5d13e06: mov rdi, rbx
// asm:   0x5d13e09: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d13e0e: mov rbx, qword ptr [rax]
// asm:   0x5d13e11: mov qword ptr [rsp], rbx
// asm:   0x5d13e15: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d13e1a: lea rax, [rip + 0x157acd7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d13e21: mov rsi, qword ptr [rax]
// asm:   0x5d13e24: lea rdi, [rsp + 0x10]
// asm:   0x5d13e29: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d13e2e: test rbx, rbx
// asm:   0x5d13e31: je 0x5d13ded
// asm:   0x5d13e33: mov rdi, rbx
// asm:   0x5d13e36: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d13e3b: mov rbx, rax
// asm:   0x5d13e3e: mov rdi, rsp
// asm:   0x5d13e41: call 0x2fdbd40  ; il2cpp_runtime_helper_02fdbd40()
// asm:   0x5d13e46: mov rdi, rbx
// asm:   0x5d13e49: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d13e4e: mov rdi, rax
// asm:   0x5d13e51: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__AddLines
               (UI_ChatPanel_o *__this,System_Collections_Generic_List_string__o *lines,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if (Il2CppMethodInitialized_07547d57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_07547d57 = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (lines == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)lines,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  while( true ) {
    method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (!bVar1) break;
    UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// UI.ChatPanel$$HandleKeys
// il2cpp: void UI_ChatPanel__HandleKeys (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d13e60

void UI_ChatPanel__HandleKeys(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *__this_00;
  System_Collections_Generic_List_Player__o *pSVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Event_o *__this_01;
  byte bVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_07547d58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07547d58 = '\x01';
  }
  if ((__this->fields)._isDestroyed != false) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  __this_01 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Event_o *)0x0) goto label_05d141e9;
  iVar5 = UnityEngine_Event__get_type(__this_01,(MethodInfo *)0x0);
  if (iVar5 != 4) {
    return;
  }
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) goto label_05d13f75;
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05d141e9;
    bVar6 = 1;
    if ((pTVar1->fields).m_AllowInput == false) goto label_05d13f75;
  }
  else {
label_05d13f75:
    bVar6 = (__this->fields)._isInteractingWithChatUI;
  }
  iVar5 = UnityEngine_Event__get_keyCode(__this_01,(MethodInfo *)0x0);
  if ((bVar6 & iVar5 == 9) == 0) {
    iVar5 = UnityEngine_Event__get_keyCode(__this_01,(MethodInfo *)0x0);
    if ((bVar6 & iVar5 == 0x1b) != 0) {
      pMVar7 = (MethodInfo *)0x0;
      UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
      bVar3 = UI_ChatPanel__IsInputActive(__this,pMVar7);
      if (bVar3) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (Il2CppMethodInitialized_07547d53 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d53 = '\x01';
    }
    bVar3 = true;
    if ((__this->fields)._isDestroyed == false) {
      pTVar1 = (__this->fields)._inputField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05d141e9;
        if ((pTVar1->fields).m_AllowInput != false) {
          __this_00 = (pTVar1->fields).m_Text;
          if (__this_00 == (System_String_o *)0x0) goto label_05d141e9;
          bVar3 = System_String__StartsWith(__this_00,"/",(MethodInfo *)0x0);
          bVar3 = !bVar3;
        }
      }
    }
    if (Il2CppMethodInitialized_07547d53 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d53 = '\x01';
    }
    if ((__this->fields)._isDestroyed == false) {
      pTVar1 = (__this->fields)._inputField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05d141e9;
        if ((pTVar1->fields).m_AllowInput != false) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          bVar4 = GameManagers_ChatManager__HasActiveSuggestions((MethodInfo *)0x0);
          if (bVar4) {
            UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
            goto label_05d14170;
          }
        }
      }
    }
    if (bVar3) {
      pSVar2 = (__this->fields)._pmPartners;
      if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto label_05d141e9;
      if (0 < (pSVar2->fields)._size) {
        pMVar7 = (MethodInfo *)0x0;
        UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
        UI_ChatPanel__CycleToPMPartner(__this,pMVar7);
        return;
      }
    }
    if (Il2CppMethodInitialized_07547d53 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d53 = '\x01';
    }
    if ((__this->fields)._isDestroyed == false) {
      pTVar1 = (__this->fields)._inputField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_05d141e9:
          ThrowNullReferenceException();
        }
        if ((pTVar1->fields).m_AllowInput != false) {
          UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
label_05d14170:
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__HandleTabComplete((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// UI.ChatPanel$$Update
// il2cpp: void UI_ChatPanel__Update (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d14500

void UI_ChatPanel__Update(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Utility_GUICallback_o *__this_00;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *__this_01;
  bool bVar4;
  TMPro_TMP_InputField_o *in_RCX;
  
  if (Il2CppMethodInitialized_07547d59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547d59 = '\x01';
  }
  if ((__this->fields)._isDestroyed != false) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((__this->fields)._isInteractingWithChatUI != false) {
    if (Il2CppMethodInitialized_07547d53 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d53 = '\x01';
    }
    if ((__this->fields)._isDestroyed == false) {
      pTVar1 = (__this->fields)._inputField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05d146ff;
        if ((pTVar1->fields).m_AllowInput != false) goto label_05d145fb;
      }
    }
    if (((__this->fields)._emojiPanelActive == false) &&
       (bVar4 = UI_InGameMenu__InMenu((MethodInfo *)0x0), bVar4)) {
      (__this->fields)._isInteractingWithChatUI = false;
    }
  }
label_05d145fb:
  __this_00 = (__this->fields)._keyHandler;
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) goto label_05d14666;
    in_RCX = (__this->fields)._inputField;
    if (in_RCX == (TMPro_TMP_InputField_o *)0x0) goto label_05d146ff;
    bVar4 = true;
    if ((in_RCX->fields).m_AllowInput == false) goto label_05d14666;
  }
  else {
label_05d14666:
    bVar4 = (__this->fields)._isInteractingWithChatUI != false;
  }
  if (__this_00 != (Utility_GUICallback_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,bVar4,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_GeneralInputSettings_o *)0x0)) &&
       (__this_01 = (pSVar3->fields).HideChat, __this_01 != (Settings_KeybindSetting_o *)0x0)) {
      bVar4 = Settings_KeybindSetting__GetKeyDown(__this_01,false,(MethodInfo *)0x0);
      if ((bVar4) && ((__this->fields)._isDestroyed == false)) {
        UI_ChatPanel__SetChatHiddenState
                  (__this,(__this->fields)._chatHidden == false,true,(MethodInfo *)in_RCX);
        return;
      }
      return;
    }
  }
label_05d146ff:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ToggleChatVisibility
// il2cpp: void UI_ChatPanel__ToggleChatVisibility (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d14710

void UI_ChatPanel__ToggleChatVisibility(UI_ChatPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if ((__this->fields)._isDestroyed == false) {
    UI_ChatPanel__SetChatHiddenState(__this,(__this->fields)._chatHidden == false,true,in_RCX);
    return;
  }
  return;
}


// UI.ChatPanel$$SetChatHiddenState
// il2cpp: void UI_ChatPanel__SetChatHiddenState (UI_ChatPanel_o* __this, bool hidden, bool saveSetting, const MethodInfo* method);
// 0x5d0c850
// eh: try 0x5d0c9e2..0x5d0cade -> pad 0x5d0cade (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5d0cb03..0x5d0cb45 -> pad 0x5d0cb45 (+1 call sites) cleanup
// eh: try 0x5d0cb48..0x5d0cb4d -> pad 0x5d0cb55 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0ca67: test r14b, r14b
// asm:   0x5d0ca6a: je 0x5d0cac9
// asm:   0x5d0cade: mov rbp, rax
// asm:   0x5d0cae1: cmp edx, 1
// asm:   0x5d0cae4: jne 0x5d0cb4d
// asm:   0x5d0cae6: mov rdi, rbp
// asm:   0x5d0cae9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d0caee: mov rbp, rax
// asm:   0x5d0caf1: lea rax, [rip + 0x1849bd0]
// asm:   0x5d0caf8: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5d0cafc: mov rax, qword ptr [rbp]
// asm:   0x5d0cb00: mov rsi, qword ptr [rax]
// asm:   0x5d0cb03: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d0cb08: test al, al
// asm:   0x5d0cb0a: je 0x5d0cb23
// asm:   0x5d0cb0c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d0cb11: cmp byte ptr [rbx + 0x110], 0
// asm:   0x5d0cb18: jne 0x5d0c9f4
// asm:   0x5d0cb1e: jmp 0x5d0c9fb
// asm:   0x5d0cb23: mov edi, 8
// asm:   0x5d0cb28: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d0cb2d: mov rcx, qword ptr [rbp]
// asm:   0x5d0cb31: mov qword ptr [rax], rcx
// asm:   0x5d0cb34: lea rsi, [rip + 0x11209c5]
// asm:   0x5d0cb3b: mov rdi, rax
// asm:   0x5d0cb3e: xor edx, edx
// asm:   0x5d0cb40: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d0cb45: mov rbp, rax
// asm:   0x5d0cb48: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d0cb4d: mov rdi, rbp
// asm:   0x5d0cb50: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d0cb55: mov rdi, rax
// asm:   0x5d0cb58: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__SetChatHiddenState(UI_ChatPanel_o *__this,bool hidden,bool saveSetting,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  UnityEngine_Object_o *x;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_UI_Button_o *__this_01;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_07547d5a = '\x01';
  }
  (__this->fields)._chatHidden = hidden;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).ChatHidden, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,hidden,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    if ((__this->fields)._chatHidden != false) {
      if (Il2CppMethodInitialized_07547d6e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07547d6e = '\x01';
      }
      x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        (__this->fields)._emojiPanelActive = false;
        pUVar4 = (__this->fields)._emojiPanel;
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d0cad4;
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      }
    }
    pUVar4 = (__this->fields)._panel;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(__this->fields)._chatHidden == false,(MethodInfo *)0x0);
    }
    pTVar2 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar2 = (__this->fields)._inputField;
      if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_05d0cad4;
      bVar3 = (__this->fields)._chatHidden == false;
      method_00 = (MethodInfo *)(ulong)bVar3;
      UnityEngine_GameObject__SetActive(pUVar4,bVar3,(MethodInfo *)0x0);
      if ((__this->fields)._chatHidden != false) {
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
          ThrowNullReferenceException();
        }
        method_00 = (MethodInfo *)0x0;
        TMPro_TMP_InputField__DeactivateInputField(pTVar2,false,(MethodInfo *)0x0);
        if ((__this->fields)._chatHidden != false) {
          (__this->fields).IgnoreNextActivation = false;
        }
      }
    }
    __this_01 = (__this->fields)._emojiButton;
    if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d0cad4;
      bVar3 = (__this->fields)._chatHidden == false;
      method_00 = (MethodInfo *)(ulong)bVar3;
      UnityEngine_GameObject__SetActive(pUVar4,bVar3,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields)._notificationBadge;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      if ((__this->fields)._chatHidden == false) {
        bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      }
      else {
        bVar3 = false;
      }
      method_00 = (MethodInfo *)(ulong)bVar3;
      UnityEngine_GameObject__SetActive(pUVar4,bVar3,(MethodInfo *)0x0);
    }
    if ((__this->fields)._chatHidden == false) {
      UI_ChatPanel__RefreshPoolSize(__this,method_00);
      UI_ChatPanel__ValidatePMState(__this,method_00);
      UI_ChatPanel__RestorePMPartners(__this,method_00);
      UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
      UI_ChatPanel__UpdateChatModeElements(__this,method_00);
    }
    if (!saveSetting) {
      return;
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (pSVar1 != (Settings_UISettings_o *)0x0) {
      (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
      return;
    }
  }
label_05d0cad4:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$LateUpdate
// il2cpp: void UI_ChatPanel__LateUpdate (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d147d0

void UI_ChatPanel__LateUpdate(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547d5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d5b = '\x01';
  }
  if ((__this->fields)._isDestroyed != false) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
    method_00 = extraout_RDX_00;
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX_01;
    if (!bVar3) goto label_05d148a7;
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05d14918;
    bVar3 = true;
    if ((pTVar1->fields).m_AllowInput == false) goto label_05d148a7;
  }
  else {
label_05d148a7:
    bVar3 = (__this->fields)._isInteractingWithChatUI != false;
  }
  method_01 = (MethodInfo *)(ulong)bVar3;
  UI_ChatPanel__UpdatePlaceholderVisibility(__this,bVar3,method_00);
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) {
label_05d14918:
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._size < 1) {
    bVar3 = false;
    if ((__this->fields)._lastNotificationBadgeState != false) goto label_05d14905;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar3 = GameManagers_ChatManager__HasAnyActivePMNotification((MethodInfo *)0x0);
    if (bVar3 != (__this->fields)._lastNotificationBadgeState) {
label_05d14905:
      (__this->fields)._lastNotificationBadgeState = bVar3;
      UI_ChatPanel__UpdateChatModeElements(__this,method_01);
      return;
    }
  }
  return;
}


// UI.ChatPanel$$UpdatePlaceholderVisibility
// il2cpp: void UI_ChatPanel__UpdatePlaceholderVisibility (UI_ChatPanel_o* __this, bool isChatActive, const MethodInfo* method);
// 0x5d134c0

void UI_ChatPanel__UpdatePlaceholderVisibility(UI_ChatPanel_o *__this,bool isChatActive,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  bool bVar4;
  float value;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d5c = '\x01';
  }
  pUVar1 = (__this->fields)._placeholderCanvasGroup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((__this->fields)._isDestroyed != false) {
    return;
  }
  pTVar2 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (isChatActive) {
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d135f3;
    bVar4 = System_String__IsNullOrEmpty((pTVar2->fields).m_Text,(MethodInfo *)0x0);
    if (!bVar4) goto label_05d1359f;
    pSVar3 = (__this->fields)._pmPartners;
    if (pSVar3 == (System_Collections_Generic_List_Player__o *)0x0) goto label_05d135f3;
    if ((pSVar3->fields)._size < 1) goto label_05d1359f;
    value = 1.0;
  }
  else {
label_05d1359f:
    value = 0.0;
  }
  pUVar1 = (__this->fields)._placeholderCanvasGroup;
  if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar5 = UnityEngine_CanvasGroup__get_alpha(pUVar1,(MethodInfo *)0x0);
    if ((fVar5 == value) && (!NAN(fVar5) && !NAN(value))) {
      return;
    }
    pUVar1 = (__this->fields)._placeholderCanvasGroup;
    if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
label_05d135f3:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsPointerOverChatUI
// il2cpp: bool UI_ChatPanel__IsPointerOverChatUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d14920
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d14b22: test r13d, ebp
// asm:   0x5d14b25: je 0x5d14b3e
// asm:   0x5d14b33: test ebx, ebx
// asm:   0x5d14b35: sete bpl
// asm:   0x5d14b39: test r13d, ebp

bool UI_ChatPanel__IsPointerOverChatUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  bool bVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_07547d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547d5d = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    bVar2 = false;
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
label_05d14b5a:
      ThrowNullReferenceException();
    }
    method_01 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(pUVar4,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = UI_ChatPanel__IsMouseOverAnyChatElement
                        (__this,(UnityEngine_Vector2_o)UVar5.fields._0_8_,method_01);
      bVar2 = true;
      if (!bVar3) {
        x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = false;
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (__this->fields)._emojiPanel;
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05d14b5a;
          bVar2 = false;
          bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
          if (bVar3) {
            rect = UI_ChatPanel__GetCachedRectTransform(__this,(__this->fields)._emojiPanel,method_00);
            if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
            }
            bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                              (rect,(UnityEngine_Vector2_o)UVar5.fields._0_8_,(MethodInfo *)0x0);
          }
        }
      }
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    iVar1 = TypeInfo_UI_CursorManager->static_fields->State;
    bVar3 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
    if ((bVar3) && ((iVar1 == 0 & ~bVar2) != 0)) {
      (__this->fields)._isInteractingWithChatUI = false;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      (__this->fields).IgnoreNextActivation = false;
    }
    if ((bVar2 & iVar1 == 0) == 0) {
      bVar3 = (__this->fields)._isInteractingWithChatUI != false;
    }
    else {
      (__this->fields)._isInteractingWithChatUI = true;
      bVar3 = true;
    }
  }
  return bVar3;
}


// UI.ChatPanel$$IsMouseOverAnyChatElement
// il2cpp: bool UI_ChatPanel__IsMouseOverAnyChatElement (UI_ChatPanel_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x5d137e0
// eh: try 0x5d139b4..0x5d13ad1 -> pad 0x5d13ae0 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d13af8..0x5d13afd -> pad 0x5d13b22 cleanup
// eh: try 0x5d13b25..0x5d13b2f -> pad 0x5d13b37 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d13ad6: jmp 0x5d13ae0
// asm:   0x5d13ad8: jmp 0x5d13ae0
// asm:   0x5d13ada: jmp 0x5d13ae0
// asm:   0x5d13adc: jmp 0x5d13ae0
// asm:   0x5d13ade: jmp 0x5d13ae0
// asm:   0x5d13ae0: mov rbp, rax
// asm:   0x5d13ae3: cmp edx, 1
// asm:   0x5d13ae6: jne 0x5d13b25
// asm:   0x5d13ae8: mov rdi, rbp
// asm:   0x5d13aeb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d13af0: mov rbp, qword ptr [rax]
// asm:   0x5d13af3: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5d13af8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d13afd: lea rax, [rip + 0x157b5ac]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d13b04: mov rsi, qword ptr [rax]
// asm:   0x5d13b07: lea rdi, [rsp + 0x10]
// asm:   0x5d13b0c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d13b11: test rbp, rbp
// asm:   0x5d13b14: je 0x5d13a3e
// asm:   0x5d13b1a: mov rdi, rbp
// asm:   0x5d13b1d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d13b22: mov rbp, rax
// asm:   0x5d13b25: lea rdi, [rsp + 0x30]
// asm:   0x5d13b2a: call 0x2fdbd70  ; il2cpp_runtime_helper_02fdbd70()
// asm:   0x5d13b2f: mov rdi, rbp
// asm:   0x5d13b32: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d13b37: mov rdi, rax
// asm:   0x5d13b3a: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_ChatPanel__IsMouseOverAnyChatElement
               (UI_ChatPanel_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  Il2CppClass *rect;
  UnityEngine_UI_Button_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  UnityEngine_GameObject_o *obj;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *method_00;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547d5e = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pUVar4 = (__this->fields)._chatPanelRect;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                    (pUVar4,mousePosition,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar4 = (__this->fields)._inputFieldRect;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                      (pUVar4,mousePosition,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar4 = (__this->fields)._contentRect;
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                        (pUVar4,mousePosition,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar4 = (__this->fields)._scrollbarRect;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar4 = (__this->fields)._scrollbarRect;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (pUVar4,mousePosition,(MethodInfo *)0x0);
          if (bVar3) {
            return true;
          }
        }
        __this_00 = (__this->fields)._linesPool;
        if (__this_00 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
label_05d13ad1:
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
        local_58 = local_38;
        local_68 = (undefined1  [8])local_48._0_8_;
        pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
        local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
        do {
          do {
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                              );
            pIVar2 = local_58;
            if (!bVar3) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose)
              ;
              pUVar1 = (__this->fields)._emojiButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar3) {
                pUVar1 = (__this->fields)._emojiButton;
                if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto label_05d13ad1;
                obj = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                pUVar4 = UI_ChatPanel__GetCachedRectTransform(__this,obj,method_00);
                if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                }
                bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                                  (pUVar4,mousePosition,(MethodInfo *)0x0);
                if (bVar3) {
                  return true;
                }
              }
              return false;
            }
            if (local_58 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if (local_58[0xc].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)local_58[0xc].klass,(MethodInfo *)0x0);
          } while (!bVar3);
          rect = pIVar2[2].klass;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            ((UnityEngine_RectTransform_o *)rect,mousePosition,(MethodInfo *)0x0);
        } while (!bVar3);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
      }
    }
  }
  return true;
}


// UI.ChatPanel$$UpdateChatInteractionState
// il2cpp: void UI_ChatPanel__UpdateChatInteractionState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d14b60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d14b82: jmp 0x5d14bbc

void UI_ChatPanel__UpdateChatInteractionState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547d5f = '\x01';
    if (Il2CppMethodInitialized_07547d53 != '\0') goto label_05d14b79;
label_05d14ba0:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
    cVar1 = (__this->fields)._isDestroyed;
  }
  else {
    if (Il2CppMethodInitialized_07547d53 == '\0') goto label_05d14ba0;
label_05d14b79:
    cVar1 = (__this->fields)._isDestroyed;
  }
  if (cVar1 == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = true;
      if ((pTVar2->fields).m_AllowInput != false) goto label_05d14c30;
    }
  }
  bVar3 = true;
  if ((__this->fields)._emojiPanelActive == false) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    if (TypeInfo_UI_CursorManager->static_fields->State == 0) {
      return;
    }
    bVar3 = false;
  }
label_05d14c30:
  (__this->fields)._isInteractingWithChatUI = bVar3;
  return;
}


// UI.ChatPanel$$CreateLine
// il2cpp: UI_ChatPanel_ChatLineView_o* UI_ChatPanel__CreateLine (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d14c50

UI_ChatPanel_ChatLineView_o *
UI_ChatPanel__CreateLine(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TMP_InputField_o *chatInput;
  GameManagers_ChatManager_ChatDisplayLine_o line;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *parent;
  UI_ChatPanel_ChatLineView_o *__this_02;
  MethodInfo *in_R9;
  GameManagers_ChatManager_ChatDisplayLine_o local_70;
  
  if (Il2CppMethodInitialized_07547d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ChatLineView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547d60 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ChatFontSize, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    fontSize = (pSVar2->fields)._value;
    themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._panel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      chatInput = (__this->fields)._inputField;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ChatLineView);
      UI_ChatPanel_ChatLineView___ctor(__this_02,parent,__this_01,chatInput,__this,in_R9);
      GameManagers_ChatManager_ChatDisplayLine__Plain(&local_70,text,0,(MethodInfo *)0x0);
      if (__this_02 != (UI_ChatPanel_ChatLineView_o *)0x0) {
        line.fields.UsePlayerStyle = local_70.fields.UsePlayerStyle;
        line.fields._9_7_ = local_70.fields._9_7_;
        line.fields.PlainText = local_70.fields.PlainText;
        line.fields.TimeText = local_70.fields.TimeText;
        line.fields.IdText = local_70.fields.IdText;
        line.fields.SenderName = local_70.fields.SenderName;
        line.fields.BodyText = local_70.fields.BodyText;
        line.fields.SenderID = local_70.fields.SenderID;
        line.fields._52_4_ = local_70.fields._52_4_;
        line.fields.LineID = local_70.fields.LineID;
        UI_ChatPanel_ChatLineView__SetLine(__this_02,line,(MethodInfo *)text);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$InGameManager_PlayerInfoUpdated
// il2cpp: void UI_ChatPanel__InGameManager_PlayerInfoUpdated (UI_ChatPanel_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x5d15840
// eh: try 0x5d158e3..0x5d15934 -> pad 0x5d1593b (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d15953..0x5d15958 -> pad 0x5d15977 cleanup
// eh: try 0x5d1597a..0x5d15984 -> pad 0x5d1598c catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d158df: nop 
// asm:   0x5d15939: jmp 0x5d1593b
// asm:   0x5d1593b: mov rbx, rax
// asm:   0x5d1593e: cmp edx, 1
// asm:   0x5d15941: jne 0x5d1597a
// asm:   0x5d15943: mov rdi, rbx
// asm:   0x5d15946: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1594b: mov rbx, qword ptr [rax]
// asm:   0x5d1594e: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d15953: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d15958: lea rax, [rip + 0x1579751]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d1595f: mov rsi, qword ptr [rax]
// asm:   0x5d15962: mov rdi, rsp
// asm:   0x5d15965: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1596a: test rbx, rbx
// asm:   0x5d1596d: je 0x5d1591c
// asm:   0x5d1596f: mov rdi, rbx
// asm:   0x5d15972: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d15977: mov rbx, rax
// asm:   0x5d1597a: lea rdi, [rsp + 0x18]
// asm:   0x5d1597f: call 0x2fdbda0  ; il2cpp_runtime_helper_02fdbda0()
// asm:   0x5d15984: mov rdi, rbx
// asm:   0x5d15987: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1598c: mov rdi, rax
// asm:   0x5d1598f: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__InGameManager_PlayerInfoUpdated
               (UI_ChatPanel_o *__this,int32_t actorNumber,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  bool bVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07547d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    Il2CppMethodInitialized_07547d61 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._isDestroyed == false) {
    __this_00 = (__this->fields)._linesPool;
    if (__this_00 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    uStack_30 = 0;
    puStack_28 = (undefined1 *)&SStack_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                        );
      if (!bVar1) break;
      if (SStack_48.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(int *)((long)&SStack_48.fields._current[9].klass + 4) == actorNumber) {
        *(undefined1 *)((long)&SStack_48.fields._current[9].klass + 3) = 1;
      }
    }
    method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
  }
  return;
}


// UI.ChatPanel$$OnDestroy
// il2cpp: void UI_ChatPanel__OnDestroy (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d159b0
// eh: try 0x5d15bde..0x5d15d27 -> pad 0x5d15d27 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5d15d3a..0x5d15d91 -> pad 0x5d15d91 (+1 call sites) cleanup
// eh: try 0x5d15d94..0x5d15d99 -> pad 0x5d15da1 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d15c1c: jmp 0x5d15cc3
// asm:   0x5d15ccf: lea rax, [rip + 0x1573a8a]  ; MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_Clear
// asm:   0x5d15cd6: mov rsi, qword ptr [rax]
// asm:   0x5d15cd9: pop rbx
// asm:   0x5d15cda: pop r12
// asm:   0x5d15cdc: pop r14
// asm:   0x5d15cde: pop r15
// asm:   0x5d15ce0: pop rbp
// asm:   0x5d15ce1: jmp 0x4bad690  ; System_Collections_Generic_Dictionary_object__object___Clear()
// asm:   0x5d15d27: mov rbx, rax
// asm:   0x5d15d2a: cmp edx, 1
// asm:   0x5d15d2d: jne 0x5d15d99
// asm:   0x5d15d2f: mov rdi, rbx
// asm:   0x5d15d32: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d15d37: mov r14, rax
// asm:   0x5d15d3a: lea rdi, [rip + 0x156237f]  ; TypeInfo_System_Exception
// asm:   0x5d15d41: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d15d46: mov rcx, qword ptr [r14]
// asm:   0x5d15d49: mov rsi, qword ptr [rcx]
// asm:   0x5d15d4c: mov rdi, rax
// asm:   0x5d15d4f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d15d54: test al, al
// asm:   0x5d15d56: je 0x5d15d70
// asm:   0x5d15d58: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d15d5d: cmp byte ptr [r15 + 0xd8], 0
// asm:   0x5d15d65: jne 0x5d15bf1
// asm:   0x5d15d6b: jmp 0x5d15bf9
// asm:   0x5d15d70: mov edi, 8
// asm:   0x5d15d75: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d15d7a: mov rcx, qword ptr [r14]
// asm:   0x5d15d7d: mov qword ptr [rax], rcx
// asm:   0x5d15d80: lea rsi, [rip + 0x1117779]
// asm:   0x5d15d87: mov rdi, rax
// asm:   0x5d15d8a: xor edx, edx
// asm:   0x5d15d8c: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d15d91: mov rbx, rax
// asm:   0x5d15d94: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d15d99: mov rdi, rbx
// asm:   0x5d15d9c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d15da1: mov rdi, rax
// asm:   0x5d15da4: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__OnDestroy(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint32_t uVar3;
  System_Int32_array *array;
  TMPro_TMP_InputField_o *pTVar4;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *pTVar5;
  System_String_o *text;
  Photon_Realtime_Player_o *pPVar6;
  System_Collections_Generic_Dictionary_GameObject__RectTransform__o *pSVar7;
  bool bVar8;
  int32_t iVar9;
  System_Action_int__o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *pUVar10;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnEndEdit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnSubmit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    Il2CppMethodInitialized_07547d62 = '\x01';
  }
  (__this->fields)._isDestroyed = true;
  __this_01 = (System_Action_int__o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
  System_Action_int____ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated,(MethodInfo_4A80B60 *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__remove_PlayerInfoUpdated(__this_01,(MethodInfo *)0x0);
  pTVar4 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pTVar4 = (__this->fields)._inputField;
    if (pTVar4 == (TMPro_TMP_InputField_o *)0x0) goto label_05d15d1d;
    __this_00 = (pTVar4->fields).m_OnValueChanged;
    pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar10,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnValueChanged,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_05d15d1d;
    UnityEngine_Events_UnityEvent_object___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar10,
               (MethodInfo_4319030 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar4 = (__this->fields)._inputField;
    if (pTVar4 == (TMPro_TMP_InputField_o *)0x0) goto label_05d15d1d;
    pTVar5 = (pTVar4->fields).m_OnEndEdit;
    pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar10,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnEndEdit,
               (MethodInfo_4311A10 *)0x0);
    if (pTVar5 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto label_05d15d1d;
    UnityEngine_Events_UnityEvent_object___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)pTVar5,pUVar10,
               (MethodInfo_4319030 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar4 = (__this->fields)._inputField;
    if (pTVar4 == (TMPro_TMP_InputField_o *)0x0) goto label_05d15d1d;
    pTVar5 = (pTVar4->fields).m_OnSubmit;
    pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar10,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnSubmit,
               (MethodInfo_4311A10 *)0x0);
    if (pTVar5 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto label_05d15d1d;
    UnityEngine_Events_UnityEvent_object___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)pTVar5,pUVar10,
               (MethodInfo_4319030 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar4 = (__this->fields)._inputField;
    if (pTVar4 == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    TMPro_TMP_InputField__DeactivateInputField(pTVar4,false,(MethodInfo *)0x0);
    if ((__this->fields)._inPMMode != false) {
      UI_ChatPanel__SaveCurrentConversation(__this,method_00);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      cVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart;
    }
    else {
      cVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart;
    }
    if (cVar2 == '\0') goto label_05d15cc3;
    pTVar4 = (__this->fields)._inputField;
    if (pTVar4 == (TMPro_TMP_InputField_o *)0x0) goto label_05d15d1d;
    text = (pTVar4->fields).m_Text;
    iVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar4,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__PreserveInputText(text,iVar9,(MethodInfo *)0x0);
    iVar9 = -1;
    if (((__this->fields)._inPMMode != false) &&
       (pPVar6 = (__this->fields)._currentPMTarget, pPVar6 != (Photon_Realtime_Player_o *)0x0)) {
      iVar9 = (pPVar6->fields).actorNumber;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      if (g_data_07547d9f != '\0') goto label_05d15caa;
label_05d15cf4:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
      g_data_07547d9f = '\x01';
      uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_07547d9f == '\0') goto label_05d15cf4;
label_05d15caa:
      uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    TypeInfo_GameManagers_ChatManager->static_fields->_preservedPMTargetActorNumber = iVar9;
  }
label_05d15cc3:
  pSVar7 = (__this->fields)._cachedRectTransforms;
  if (pSVar7 != (System_Collections_Generic_Dictionary_GameObject__RectTransform__o *)0x0) {
    iVar9 = (pSVar7->fields)._count;
    if (0 < iVar9) {
      array = (pSVar7->fields)._buckets;
      if (array == (System_Int32_array *)0x0) {
        ThrowNullReferenceException();
      }
      System_Array__Clear((System_Array_o *)array,0,(int32_t)array->max_length,(MethodInfo *)0x0);
      (pSVar7->fields)._count = 0;
      (pSVar7->fields)._freeList = -1;
      (pSVar7->fields)._freeCount = 0;
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._entries,0,iVar9,(MethodInfo *)0x0);
    }
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
label_05d15d1d:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$OnValueChanged
// il2cpp: void UI_ChatPanel__OnValueChanged (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d15f30

void UI_ChatPanel__OnValueChanged(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  bool isChatActive;
  
  if (Il2CppMethodInitialized_07547d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d63 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar2 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (text == (System_String_o *)0x0) {
        text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__HandleTyping(text,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (Il2CppMethodInitialized_07547d53 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07547d53 = '\x01';
        method_00 = extraout_RDX_00;
      }
      if ((__this->fields)._isDestroyed == false) {
        pTVar2 = (__this->fields)._inputField;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        isChatActive = false;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        method_00 = extraout_RDX_01;
        if (bVar3) {
          pTVar2 = (__this->fields)._inputField;
          if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
            ThrowNullReferenceException();
          }
          isChatActive = (pTVar2->fields).m_AllowInput != false;
        }
      }
      else {
        isChatActive = false;
      }
      UI_ChatPanel__UpdatePlaceholderVisibility(__this,isChatActive,method_00);
      return;
    }
  }
  return;
}


// UI.ChatPanel$$GetInputText
// il2cpp: System_String_o* UI_ChatPanel__GetInputText (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d16080

System_String_o * UI_ChatPanel__GetInputText(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d64 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
        ThrowNullReferenceException();
      }
      ppSVar3 = &(pTVar1->fields).m_Text;
      goto label_05d160ed;
    }
  }
  ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
label_05d160ed:
  return *ppSVar3;
}


// UI.ChatPanel$$SetInputText
// il2cpp: void UI_ChatPanel__SetInputText (UI_ChatPanel_o* __this, System_String_o* newText, const MethodInfo* method);
// 0x5d16110

void UI_ChatPanel__SetInputText(UI_ChatPanel_o *__this,System_String_o *newText,MethodInfo *method)

{
  UI_ChatPanel__SetTextAndPositionCaret(__this,newText,method);
  return;
}


// UI.ChatPanel$$EnterPMMode
// il2cpp: void UI_ChatPanel__EnterPMMode (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5d0c520

void UI_ChatPanel__EnterPMMode(UI_ChatPanel_o *__this,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *__this_00;
  int32_t iVar2;
  UI_ChatPanel___c__DisplayClass113_0_o *__this_01;
  Photon_Realtime_Player_o *pPVar3;
  UI_ChatPanel__ResetPMToggleActive_d__118_o *__this_02;
  UnityEngine_Coroutine_o *pUVar4;
  System_Predicate_T__o *match;
  Il2CppObject *arg0;
  System_String_o *key;
  MethodInfo *pMVar5;
  System_String_o **method_00;
  MethodInfo *method_01;
  UI_ChatPanel___c__DisplayClass113_0_Fields *targetAddress;
  System_ValueTuple_string__int__o SVar6;
  undefined1 local_34 [4];
  
  if (Il2CppMethodInitialized_07547d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass113_0_EnterPMMode_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass113_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    Il2CppMethodInitialized_07547d65 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass113_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass113_0_o *)0x0) {
    targetAddress = &__this_01->fields;
    (__this_01->fields).target = target;
    Il2CppCodeGenWriteBarrier(&targetAddress->target);
    pPVar3 = (__this_01->fields).target;
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    iVar1 = (pPVar3->fields).actorNumber;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if (iVar1 == (pPVar3->fields).actorNumber) {
        return;
      }
      if (((__this->fields)._inPMMode != false) &&
         (pPVar3 = (__this->fields)._currentPMTarget, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
        if (targetAddress->target == (Photon_Realtime_Player_o *)0x0) goto label_05d0c815;
        if ((pPVar3->fields).actorNumber == (targetAddress->target->fields).actorNumber) {
          return;
        }
      }
      UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)target);
      (__this->fields)._currentPMTarget = targetAddress->target;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget);
      (__this->fields)._inPMMode = true;
      (__this->fields)._pmToggleActive = true;
      pUVar4 = (__this->fields)._pmToggleCoroutine;
      if (pUVar4 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar4,(MethodInfo *)0x0);
      }
      if (Il2CppMethodInitialized_07547d69 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__118);
        Il2CppMethodInitialized_07547d69 = '\x01';
      }
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__118);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields).__1__state = 0;
      (__this_02->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_02,
                          (MethodInfo *)0x0);
      (__this->fields)._pmToggleCoroutine = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pmToggleCoroutine);
      UI_ChatPanel__AddPMPartner(__this,(__this_01->fields).target,method_01);
      __this_00 = (__this->fields)._pmPartners;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass113_0_EnterPMMode_b__0,
                 (MethodInfo_3DC95B0 *)0x0);
      if (__this_00 != (System_Collections_Generic_List_Player__o *)0x0) {
        iVar2 = System_Collections_Generic_List_object___FindIndex
                          ((System_Collections_Generic_List_object__o *)__this_00,match,
                           (MethodInfo_395DCC0 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
        (__this->fields)._currentPMIndex = iVar2;
        if (targetAddress->target != (Photon_Realtime_Player_o *)0x0) {
          iVar2 = (targetAddress->target->fields).actorNumber;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pMVar5 = (MethodInfo *)0x0;
          GameManagers_ChatManager__ClearPMNotification(iVar2,(MethodInfo *)0x0);
          UI_ChatPanel__UpdateChatModeLabel(__this,pMVar5);
          UI_ChatPanel__UpdateChatModeElements(__this,pMVar5);
          if (targetAddress->target != (Photon_Realtime_Player_o *)0x0) {
            arg0 = il2cpp_vm_Object_Box(g_data_07556710,local_34);
            method_00 = &"PM_{0}";
            key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
            SVar6 = GameManagers_ChatManager__GetConversation(key,(MethodInfo *)0x0);
            pMVar5 = (MethodInfo *)SVar6.fields.Item1;
            UI_ChatPanel__SetTextAndCaretPosition
                      (__this,(System_String_o *)pMVar5,SVar6.fields.Item2,(MethodInfo *)method_00);
            UI_ChatPanel__RefreshPoolSize(__this,pMVar5);
            UI_ChatPanel__ValidatePMState(__this,pMVar5);
            UI_ChatPanel__RestorePMPartners(__this,pMVar5);
            UI_ChatPanel__RefreshDisplayedMessages(__this,pMVar5);
            return;
          }
        }
      }
    }
  }
label_05d0c815:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ExitPMMode
// il2cpp: void UI_ChatPanel__ExitPMMode (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d167c0

void UI_ChatPanel__ExitPMMode(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  UI_ChatPanel__ResetPMToggleActive_d__118_o *__this_00;
  MethodInfo *pMVar1;
  MethodInfo *in_RCX;
  System_ValueTuple_string__int__o SVar2;
  
  if (Il2CppMethodInitialized_07547d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    Il2CppMethodInitialized_07547d66 = '\x01';
  }
  UI_ChatPanel__SaveCurrentConversation(__this,method);
  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget);
  (__this->fields)._inPMMode = false;
  (__this->fields)._currentPMIndex = -1;
  (__this->fields)._pmToggleActive = true;
  routine = (__this->fields)._pmToggleCoroutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_07547d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__118);
    Il2CppMethodInitialized_07547d69 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__118);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pMVar1 = (MethodInfo *)
           UnityEngine_MonoBehaviour__StartCoroutine_691c390
                     ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                      (MethodInfo *)0x0);
  (__this->fields)._pmToggleCoroutine = (UnityEngine_Coroutine_o *)pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pmToggleCoroutine);
  UI_ChatPanel__UpdateChatModeLabel(__this,pMVar1);
  UI_ChatPanel__UpdateChatModeElements(__this,pMVar1);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  SVar2 = GameManagers_ChatManager__GetConversation("PUBLIC",(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)SVar2.fields.Item1;
  UI_ChatPanel__SetTextAndCaretPosition(__this,(System_String_o *)pMVar1,SVar2.fields.Item2,in_RCX);
  UI_ChatPanel__RefreshPoolSize(__this,pMVar1);
  UI_ChatPanel__ValidatePMState(__this,pMVar1);
  UI_ChatPanel__RestorePMPartners(__this,pMVar1);
  UI_ChatPanel__RefreshDisplayedMessages(__this,pMVar1);
  return;
}


// UI.ChatPanel$$RemovePMPartner
// il2cpp: void UI_ChatPanel__RemovePMPartner (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d16920

void UI_ChatPanel__RemovePMPartner(UI_ChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  uint index;
  int32_t iVar5;
  UI_ChatPanel___c__DisplayClass115_0_o *__this_00;
  System_Predicate_T__o *match;
  Photon_Realtime_Player_o *pPVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass115_0_RemovePMPartner_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass115_0);
    Il2CppMethodInitialized_07547d67 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass115_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel___c__DisplayClass115_0_o *)0x0) {
    (__this_00->fields).player = player;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
    if ((__this_00->fields).player == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    pSVar3 = (__this->fields)._pmPartners;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass115_0_RemovePMPartner_b__0,
               (MethodInfo_3DC95B0 *)0x0);
    if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
      index = System_Collections_Generic_List_object___FindIndex
                        ((System_Collections_Generic_List_object__o *)pSVar3,match,
                         (MethodInfo_395DCC0 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
      if (index == 0xffffffff) {
        return;
      }
      pSVar3 = (__this->fields)._pmPartners;
      if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
        method_01 = (MethodInfo *)(ulong)index;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                   (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
        UI_ChatPanel__UpdateChatModeElements(__this,method_01);
        pSVar3 = (__this->fields)._pmPartners;
        if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 == 0) {
label_05d16acd:
            UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)(ulong)uVar1);
            return;
          }
          pPVar6 = (__this->fields)._currentPMTarget;
          if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
            pPVar4 = (__this_00->fields).player;
            if (pPVar4 == (Photon_Realtime_Player_o *)0x0) goto label_05d16b1d;
            if ((pPVar6->fields).actorNumber == (pPVar4->fields).actorNumber) {
              if (0 < (int)uVar1) {
                (__this->fields)._currentPMIndex = uVar1 - 1;
                pPVar6 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,uVar1 - 1,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_Player_get_Item);
                UI_ChatPanel__EnterPMMode(__this,pPVar6,method_00);
                return;
              }
              goto label_05d16acd;
            }
          }
          iVar2 = (__this->fields)._currentPMIndex;
          if (iVar2 < (int)index) {
            return;
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          iVar5 = System_Math__Max_54bad40(0,iVar2 + -1,(MethodInfo *)0x0);
          (__this->fields)._currentPMIndex = iVar5;
          return;
        }
      }
    }
  }
label_05d16b1d:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ValidatePMState
// il2cpp: void UI_ChatPanel__ValidatePMState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d10ed0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d10f76: test r14, r14
// asm:   0x5d10f7f: jmp 0x5d110f2

void UI_ChatPanel__ValidatePMState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o **targetAddress;
  int iVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar3;
  int32_t iVar4;
  UI_ChatPanel___c_StaticFields *pUVar5;
  System_Predicate_T__o *match;
  Photon_Realtime_Room_o *pPVar6;
  uint val2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c_ValidatePMState_b__116_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    Il2CppMethodInitialized_07547d68 = '\x01';
  }
  pSVar2 = (__this->fields)._pmPartners;
  if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
    pUVar5 = TypeInfo_UI_ChatPanel_c->static_fields;
    match = (System_Predicate_T__o *)pUVar5->__9__116_0;
  }
  else {
    pUVar5 = TypeInfo_UI_ChatPanel_c->static_fields;
    match = (System_Predicate_T__o *)pUVar5->__9__116_0;
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_ChatPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
      pUVar5 = TypeInfo_UI_ChatPanel_c->static_fields;
    }
    object = (Il2CppObject *)pUVar5->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_UI_ChatPanel_c_ValidatePMState_b__116_0,(MethodInfo_3DC95B0 *)0x0);
    pUVar5 = TypeInfo_UI_ChatPanel_c->static_fields;
    pUVar5->__9__116_0 = (System_Predicate_Player__o *)match;
    Il2CppCodeGenWriteBarrier(&pUVar5->__9__116_0);
  }
  if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
    System_Collections_Generic_List_object___RemoveAll
              ((System_Collections_Generic_List_object__o *)pSVar2,match,
               (MethodInfo_395EF50 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAll);
    targetAddress = &(__this->fields)._currentPMTarget;
    if ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if ((pPVar6 == (Photon_Realtime_Room_o *)0x0) ||
         (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(pPVar6->fields).players,
         __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05d110f2;
      match = (System_Predicate_T__o *)*targetAddress;
      bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsValue
                        (__this_00,(Il2CppObject *)match,
                         (MethodInfo_4A0F970 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
      if (!bVar3) {
        *targetAddress = (Photon_Realtime_Player_o *)0x0;
        match = (System_Predicate_T__o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
    }
    if (((__this->fields)._inPMMode != false) && (*targetAddress == (Photon_Realtime_Player_o *)0x0)) {
      UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)match);
    }
    pSVar2 = (__this->fields)._pmPartners;
    if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
      iVar4 = (__this->fields)._currentPMIndex;
      iVar1 = (pSVar2->fields)._size;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      val2 = iVar1 - 1;
      method_00 = (MethodInfo *)(ulong)val2;
      iVar4 = System_Math__Min_54baeb0(iVar4,val2,(MethodInfo *)0x0);
      (__this->fields)._currentPMIndex = iVar4;
      UI_ChatPanel__UpdateChatModeElements(__this,method_00);
      return;
    }
  }
label_05d110f2:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsTogglingPM
// il2cpp: bool UI_ChatPanel__IsTogglingPM (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d16b40

bool UI_ChatPanel__IsTogglingPM(UI_ChatPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._pmToggleActive;
}


// UI.ChatPanel$$ResetPMToggleActive
// il2cpp: System_Collections_IEnumerator_o* UI_ChatPanel__ResetPMToggleActive (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d16250

System_Collections_IEnumerator_o *
UI_ChatPanel__ResetPMToggleActive(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UI_ChatPanel__ResetPMToggleActive_d__118_o *__this_00;
  
  if (Il2CppMethodInitialized_07547d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__118);
    Il2CppMethodInitialized_07547d69 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__118);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.ChatPanel$$IsInPMMode
// il2cpp: bool UI_ChatPanel__IsInPMMode (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d16b70

bool UI_ChatPanel__IsInPMMode(UI_ChatPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._inPMMode;
}


// UI.ChatPanel$$CycleToPMPartner
// il2cpp: void UI_ChatPanel__CycleToPMPartner (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d141f0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d143ea: jmp 0x5d1446a
// asm:   0x5d143ff: mov qword ptr [rsp + 0x10], rbp
// asm:   0x5d14404: mov qword ptr [rsp + 8], r15
// asm:   0x5d14409: test r13d, r13d
// asm:   0x5d1441e: nop 
// asm:   0x5d1445e: jmp 0x5d1446a
// asm:   0x5d144eb: jmp 0x5d1446a

void UI_ChatPanel__CycleToPMPartner(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *__this_00;
  bool bVar2;
  int32_t iVar3;
  UI_ChatPanel___c__DisplayClass120_0_o *__this_01;
  System_Collections_Generic_List_Player__o *pSVar4;
  UI_ChatPanel_o *match;
  Photon_Realtime_Player_o *pPVar5;
  int index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass120_0);
    Il2CppMethodInitialized_07547d6a = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass120_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass120_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    match = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    pSVar4 = (__this->fields)._pmPartners;
    if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
      if ((pSVar4->fields)._size == 0) {
        return;
      }
      pSVar4 = UI_ChatPanel__GetPmPartnersByRecency(__this,(MethodInfo *)match);
      if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
        iVar1 = (pSVar4->fields)._size;
        if ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0) {
          (__this_01->fields).currentIndexInRecency = iVar1;
        }
        else {
          match = (UI_ChatPanel_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player)
          ;
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,(Il2CppObject *)__this_01,
                     (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__0,
                     (MethodInfo_3DC95B0 *)0x0);
          iVar3 = System_Collections_Generic_List_object___FindIndex
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (System_Predicate_T__o *)match,
                             (MethodInfo_395DCC0 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex
                            );
          (__this_01->fields).currentIndexInRecency = iVar3;
          if (iVar3 == -1) {
            __this_00 = (__this->fields)._pmPartners;
            match = (UI_ChatPanel_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
            System_Predicate_object____ctor
                      ((System_Predicate_object__o *)match,(Il2CppObject *)__this_01,
                       (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__1,
                       (MethodInfo_3DC95B0 *)0x0);
            if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) goto label_05d144f0;
            iVar3 = System_Collections_Generic_List_object___FindIndex
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (System_Predicate_T__o *)match,
                               (MethodInfo_395DCC0 *)
                               MethodInfo_System_Collections_Generic_List_Player_FindIndex);
            (__this_01->fields).currentIndexInRecency = iVar3;
            if (iVar3 == -1) {
              (__this_01->fields).currentIndexInRecency = iVar1;
            }
            else {
              match = (UI_ChatPanel_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
              System_Predicate_object____ctor
                        ((System_Predicate_object__o *)match,(Il2CppObject *)__this_01,
                         (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__2,
                         (MethodInfo_3DC95B0 *)0x0);
              iVar3 = System_Collections_Generic_List_object___FindIndex
                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                 (System_Predicate_T__o *)match,
                                 (MethodInfo_395DCC0 *)
                                 MethodInfo_System_Collections_Generic_List_Player_FindIndex);
              if (iVar3 != -1) {
                (__this_01->fields).currentIndexInRecency = iVar3;
              }
            }
          }
        }
        if (0 < iVar1) {
          index = 0;
          do {
            pPVar5 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_Player_get_Item);
            if (pPVar5 == (Photon_Realtime_Player_o *)0x0) goto label_05d144f0;
            iVar3 = (pPVar5->fields).actorNumber;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            match = (UI_ChatPanel_o *)0x0;
            bVar2 = GameManagers_ChatManager__HasActivePMNotification(iVar3,(MethodInfo *)0x0);
            if (bVar2) {
              if ((__this_01->fields).currentIndexInRecency != index) goto label_05d1447d;
              break;
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        index = ((__this_01->fields).currentIndexInRecency + 1) % (iVar1 + 1);
label_05d1447d:
        if (index == iVar1) {
          UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)match);
          UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)match);
          return;
        }
        pPVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Player_get_Item);
        UI_ChatPanel__EnterPMMode(__this,pPVar5,method_00);
        return;
      }
    }
  }
label_05d144f0:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$GetPmPartnersByRecency
// il2cpp: System_Collections_Generic_List_Player__o* UI_ChatPanel__GetPmPartnersByRecency (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d16b90
// eh: try 0x5d16dd3..0x5d171d5 -> pad 0x5d171e3 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d171fb..0x5d17200 -> pad 0x5d1721d cleanup
// eh: try 0x5d17220..0x5d1722a -> pad 0x5d17289 catch (...) [compiler noexcept guard]
// eh: try 0x5d1724c..0x5d17251 -> pad 0x5d17274 cleanup
// eh: try 0x5d17277..0x5d17281 -> pad 0x5d17289 catch (...) [compiler noexcept guard]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d16dba: lea r15, [rip + 0x1577967]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext
// asm:   0x5d16dc1: mov rbp, rsp
// asm:   0x5d16dc4: lea r13, [rip + 0x15732ed]  ; MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsKey
// asm:   0x5d16dcb: nop dword ptr [rax + rax]
// asm:   0x5d16e16: lea rbp, [rip + 0x157790b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext
// asm:   0x5d16e1d: mov rbx, rsp
// asm:   0x5d171d5: jmp 0x5d171e3
// asm:   0x5d171d7: jmp 0x5d17234
// asm:   0x5d171d9: jmp 0x5d171e3
// asm:   0x5d171db: jmp 0x5d171e3
// asm:   0x5d171dd: jmp 0x5d171e3
// asm:   0x5d171df: jmp 0x5d17234
// asm:   0x5d171e1: jmp 0x5d17234
// asm:   0x5d171e3: mov rbp, rax
// asm:   0x5d171e6: cmp edx, 1
// asm:   0x5d171e9: jne 0x5d17220
// asm:   0x5d171eb: mov rdi, rbp
// asm:   0x5d171ee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d171f3: mov rbx, qword ptr [rax]
// asm:   0x5d171f6: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d171fb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d17200: lea rax, [rip + 0x1577519]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x5d17207: mov rsi, qword ptr [rax]
// asm:   0x5d1720a: mov rdi, rsp
// asm:   0x5d1720d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d17212: test rbx, rbx
// asm:   0x5d17215: je 0x5d16e4f
// asm:   0x5d1721b: jmp 0x5d1726c
// asm:   0x5d1721d: mov rbp, rax
// asm:   0x5d17220: lea rdi, [rsp + 0x20]
// asm:   0x5d17225: call 0x2fdbdd0  ; il2cpp_runtime_helper_02fdbdd0()
// asm:   0x5d1722a: jmp 0x5d17281
// asm:   0x5d1722c: jmp 0x5d17234
// asm:   0x5d1722e: jmp 0x5d17234
// asm:   0x5d17230: jmp 0x5d17234
// asm:   0x5d17232: jmp 0x5d17234
// asm:   0x5d17234: mov rbp, rax
// asm:   0x5d17237: cmp edx, 1
// asm:   0x5d1723a: jne 0x5d17277
// asm:   0x5d1723c: mov rdi, rbp
// asm:   0x5d1723f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d17244: mov rbx, qword ptr [rax]
// asm:   0x5d17247: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d1724c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d17251: lea rax, [rip + 0x15774c8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x5d17258: mov rsi, qword ptr [rax]
// asm:   0x5d1725b: mov rdi, rsp
// asm:   0x5d1725e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d17263: test rbx, rbx
// asm:   0x5d17266: je 0x5d171b4
// asm:   0x5d1726c: mov rdi, rbx
// asm:   0x5d1726f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d17274: mov rbp, rax
// asm:   0x5d17277: lea rdi, [rsp + 0x20]
// asm:   0x5d1727c: call 0x2fdbe00  ; il2cpp_runtime_helper_02fdbe00()
// asm:   0x5d17281: mov rdi, rbp
// asm:   0x5d17284: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d17289: mov rdi, rax
// asm:   0x5d1728c: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_Player__o *
UI_ChatPanel__GetPmPartnersByRecency(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  Photon_Realtime_Player_array *pPVar5;
  Photon_Realtime_Player_o *pPVar6;
  MethodInfo *pMVar7;
  undefined1 *puVar8;
  bool bVar9;
  int32_t item;
  System_Collections_Generic_List_Player__o *__this_00;
  System_Collections_Generic_Dictionary_int__Player__o *__this_01;
  System_Collections_Generic_HashSet_int__o *__this_02;
  System_Collections_Generic_List_bool__o *__this_03;
  UI_ChatPanel___c__DisplayClass121_0_o *__this_04;
  System_Func_Player__bool__o *__this_05;
  int32_t index;
  UI_ChatPanel___c__DisplayClass121_0_Fields *targetAddress;
  undefined1 local_78 [8];
  undefined1 *puStack_70;
  Photon_Realtime_Player_o *local_68;
  undefined1 local_58 [16];
  Photon_Realtime_Player_o *local_48;
  Photon_Realtime_Player_o *local_40;
  UI_ChatPanel_o *local_38;
  
  if (Il2CppMethodInitialized_07547d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass121_0_GetPmPartnersByRecency_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass121_0);
    Il2CppMethodInitialized_07547d6b = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = (Photon_Realtime_Player_o *)0x0;
  local_40 = (Photon_Realtime_Player_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
  pSVar3 = (__this->fields)._pmPartners;
  if ((pSVar3 == (System_Collections_Generic_List_Player__o *)0x0) || ((pSVar3->fields)._size == 0)) {
    return __this_00;
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_Player);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_01,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_Player_ctor);
  pSVar3 = (__this->fields)._pmPartners;
  if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
    local_38 = __this;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
    local_68 = local_48;
    local_78 = (undefined1  [8])local_58._0_8_;
    puStack_70 = (undefined1 *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = local_78;
    puVar8 = local_78;
    if (__this_01 == (System_Collections_Generic_Dictionary_int__Player__o *)0x0) {
      while (local_58._8_8_ = puVar8,
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext), bVar9)
      {
        puVar8 = (undefined1 *)local_58._8_8_;
        if (local_68 != (Photon_Realtime_Player_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
    }
    else {
      while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext),
            pPVar6 = local_68, bVar9) {
        if ((local_68 != (Photon_Realtime_Player_o *)0x0) &&
           (bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              ((System_Collections_Generic_Dictionary_int__object__o *)__this_01,
                               (local_68->fields).actorNumber,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsKey),
           !bVar9)) {
          System_Collections_Generic_Dictionary_int__object___set_Item
                    ((System_Collections_Generic_Dictionary_int__object__o *)__this_01,
                     (pPVar6->fields).actorNumber,(Il2CppObject *)pPVar6,
                     (MethodInfo_4A0F720 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_Player_set_Item);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (__this_02,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
    if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
      index = (pSVar4->fields)._size;
      while( true ) {
        index = index + -1;
        if (index < 0) break;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this_03 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
        if (__this_03 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05d171c6;
        if (index < (__this_03->fields)._size) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            __this_03 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
            if (__this_03 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05d171c6;
          }
          bVar9 = System_Collections_Generic_List_bool___get_Item
                            (__this_03,index,
                             (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
          if (bVar9) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
            if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto label_05d171c6;
            item = System_Collections_Generic_List_int___get_Item
                             (pSVar4,index,
                              (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            if (0 < item) {
              if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d171c6;
              bVar9 = System_Collections_Generic_HashSet_int___Contains
                                (__this_02,item,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              if (!bVar9) {
                System_Collections_Generic_HashSet_int___Add
                          (__this_02,item,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                if (__this_01 == (System_Collections_Generic_Dictionary_int__Player__o *)0x0)
                goto label_05d171c6;
                bVar9 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                                  ((System_Collections_Generic_Dictionary_int__object__o *)__this_01,item,
                                   (Il2CppObject **)&local_40,
                                   (MethodInfo_4A114B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_Player_TryGetValue);
                pMVar7 = MethodInfo_System_Collections_Generic_List_Player_Add;
                if (bVar9) {
                  if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) goto label_05d171c6;
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pPVar5 = (__this_00->fields)._items;
                  if (pPVar5 == (Photon_Realtime_Player_array *)0x0) goto label_05d171c6;
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pPVar5->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pPVar5->m_Items[(int)uVar2] = local_40;
                    Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)local_40
                               ,(MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                  }
                }
              }
            }
          }
        }
      }
      pSVar3 = (local_38->fields)._pmPartners;
      if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                   (System_Collections_Generic_List_object__o *)pSVar3,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
        local_68 = local_48;
        local_78 = (undefined1  [8])local_58._0_8_;
        puStack_70 = (undefined1 *)local_58._8_8_;
        local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_58._8_8_ = local_78;
        while( true ) {
          do {
            do {
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
              if (!bVar9) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
                return __this_00;
              }
              __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass121_0)
              ;
              System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
              if (__this_04 == (UI_ChatPanel___c__DisplayClass121_0_o *)0x0) {
                ThrowNullReferenceException();
              }
              targetAddress = &__this_04->fields;
              (__this_04->fields).p = local_68;
              Il2CppCodeGenWriteBarrier(&targetAddress->p);
            } while (targetAddress->p == (Photon_Realtime_Player_o *)0x0);
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
            System_Func_object__bool____ctor
                      ((System_Func_object__bool__o *)__this_05,(Il2CppObject *)__this_04,
                       (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass121_0_GetPmPartnersByRecency_b__0,
                       (MethodInfo_4F19300 *)0x0);
            bVar9 = System_Linq_Enumerable__Any_object__34dfce0
                              ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                               (System_Func_TSource__bool__o *)__this_05,
                               (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_Player);
            pMVar7 = MethodInfo_System_Collections_Generic_List_Player_Add;
          } while (bVar9);
          if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) break;
          pPVar6 = targetAddress->p;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar5 = (__this_00->fields)._items;
          if (pPVar5 == (Photon_Realtime_Player_array *)0x0) break;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pPVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pPVar5->m_Items[(int)uVar2] = pPVar6;
            Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pPVar6,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_05d171c6:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$AddPMPartner
// il2cpp: void UI_ChatPanel__AddPMPartner (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d162c0

void UI_ChatPanel__AddPMPartner(UI_ChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_Player__o *pSVar4;
  Photon_Realtime_Player_array *pPVar5;
  Photon_Realtime_Player_o *pPVar6;
  MethodInfo *pMVar7;
  int32_t iVar8;
  UI_ChatPanel___c__DisplayClass122_0_o *__this_00;
  Photon_Realtime_Player_o *pPVar9;
  System_Predicate_T__o *match;
  Il2CppObject *arg0;
  System_String_o *key;
  MethodInfo *method_00;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07547d6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass122_0_AddPMPartner_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass122_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    Il2CppMethodInitialized_07547d6c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass122_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel___c__DisplayClass122_0_o *)0x0) {
    (__this_00->fields).player = player;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
    pPVar9 = (__this_00->fields).player;
    if (pPVar9 == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    iVar2 = (pPVar9->fields).actorNumber;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar9 != (Photon_Realtime_Player_o *)0x0) {
      if (iVar2 == (pPVar9->fields).actorNumber) {
        return;
      }
      pSVar4 = (__this->fields)._pmPartners;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass122_0_AddPMPartner_b__0,
                 (MethodInfo_3DC95B0 *)0x0);
      if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
        iVar8 = System_Collections_Generic_List_object___FindIndex
                          ((System_Collections_Generic_List_object__o *)pSVar4,match,
                           (MethodInfo_395DCC0 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
        pSVar4 = (__this->fields)._pmPartners;
        if (iVar8 == -1) {
          if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
            if (9 < (pSVar4->fields)._size) {
              pPVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar4,0,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_Player_get_Item);
              if (pPVar9 != (Photon_Realtime_Player_o *)0x0) {
                local_2c = (pPVar9->fields).actorNumber;
                arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
                key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                GameManagers_ChatManager__ClearConversation(key,(MethodInfo *)0x0);
                GameManagers_ChatManager__ClearPMNotification((pPVar9->fields).actorNumber,(MethodInfo *)0x0);
                GameManagers_ChatManager__ResetNotifiedForPM((pPVar9->fields).actorNumber,(MethodInfo *)0x0);
              }
              pSVar4 = (__this->fields)._pmPartners;
              if (pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) goto label_05d1666f;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar4,0,
                         (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
              pPVar6 = (__this->fields)._currentPMTarget;
              if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
                if (pPVar9 == (Photon_Realtime_Player_o *)0x0) {
                  iVar8 = -1;
                }
                else {
                  iVar8 = (pPVar9->fields).actorNumber;
                }
                if ((pPVar6->fields).actorNumber == iVar8) {
                  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget);
                  (__this->fields)._inPMMode = false;
                }
              }
            }
            pMVar7 = MethodInfo_System_Collections_Generic_List_Player_Add;
            pSVar4 = (__this->fields)._pmPartners;
            if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
              method_00 = (MethodInfo *)(__this_00->fields).player;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pPVar5 = (pSVar4->fields)._items;
              if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
                uVar3 = (pSVar4->fields)._size;
                if (uVar3 < (uint)pPVar5->max_length) {
                  (pSVar4->fields)._size = uVar3 + 1;
                  pPVar5->m_Items[(int)uVar3] = (Photon_Realtime_Player_o *)method_00;
                  Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)method_00,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                UI_ChatPanel__UpdateChatModeElements(__this,method_00);
                return;
              }
            }
          }
        }
        else if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
          pPVar9 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,iVar8,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Player_get_Item
                             );
          pSVar4 = (__this->fields)._pmPartners;
          if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar4,iVar8,
                       (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
            pMVar7 = MethodInfo_System_Collections_Generic_List_Player_Add;
            pSVar4 = (__this->fields)._pmPartners;
            if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pPVar5 = (pSVar4->fields)._items;
              if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
                uVar3 = (pSVar4->fields)._size;
                if (uVar3 < (uint)pPVar5->max_length) {
                  (pSVar4->fields)._size = uVar3 + 1;
                  pPVar5->m_Items[(int)uVar3] = pPVar9;
                  Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar3);
                  return;
                }
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pPVar9,
                           (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05d1666f:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$GetCurrentPMTarget
// il2cpp: Photon_Realtime_Player_o* UI_ChatPanel__GetCurrentPMTarget (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d172c0

Photon_Realtime_Player_o * UI_ChatPanel__GetCurrentPMTarget(UI_ChatPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentPMTarget;
}


// UI.ChatPanel$$ResetPMState
// il2cpp: void UI_ChatPanel__ResetPMState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d172d0

void UI_ChatPanel__ResetPMState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Player__o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Clear);
    Il2CppMethodInitialized_07547d6d = '\x01';
  }
  (__this->fields)._inPMMode = false;
  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget);
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  (__this->fields)._currentPMIndex = -1;
  (__this->fields)._pmToggleActive = false;
  method_00 = (MethodInfo *)(__this->fields)._pmToggleCoroutine;
  if (method_00 != (MethodInfo *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,(UnityEngine_Coroutine_o *)method_00,(MethodInfo *)0x0);
  }
  UI_ChatPanel__UpdateChatModeElements(__this,method_00);
  return;
}


// UI.ChatPanel$$CloseEmojiPanel
// il2cpp: void UI_ChatPanel__CloseEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d14740

void UI_ChatPanel__CloseEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d6e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields)._emojiPanelActive = false;
    __this_00 = (__this->fields)._emojiPanel;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatPanel$$HandleCursorStateChange
// il2cpp: void UI_ChatPanel__HandleCursorStateChange (UI_ChatPanel_o* __this, int32_t newState, const MethodInfo* method);
// 0x5d17370

void UI_ChatPanel__HandleCursorStateChange(UI_ChatPanel_o *__this,int32_t newState,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if ((newState != 0) && ((__this->fields)._emojiPanelActive != false)) {
    if (Il2CppMethodInitialized_07547d6e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d6e = '\x01';
    }
    x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._emojiPanelActive = false;
      __this_00 = (__this->fields)._emojiPanel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPanel$$MoveCaretToEnd
// il2cpp: void UI_ChatPanel__MoveCaretToEnd (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d17400

void UI_ChatPanel__MoveCaretToEnd(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07547d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d6f = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._inputField;
    if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
       (pSVar2 = (pTVar1->fields).m_Text, pSVar2 != (System_String_o *)0x0)) {
      value = (pSVar2->fields)._stringLength;
      TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
             (pTVar3 = (pTVar1->fields).m_TextComponent, pTVar3 != (TMPro_TMP_Text_o *)0x0)) {
            (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                      (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
                UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.ChatPanel$$ShouldBlockGameInput
// il2cpp: bool UI_ChatPanel__ShouldBlockGameInput (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d17510

bool UI_ChatPanel__ShouldBlockGameInput(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pTVar1->fields).m_AllowInput != false) {
        return true;
      }
    }
  }
  if ((__this->fields)._emojiPanelActive == false) {
    return (__this->fields)._isInteractingWithChatUI != false;
  }
  return true;
}


// UI.ChatPanel$$ShouldBlockKeybind
// il2cpp: bool UI_ChatPanel__ShouldBlockKeybind (UI_ChatPanel_o* __this, int32_t keyCode, const MethodInfo* method);
// 0x5d175b0

bool UI_ChatPanel__ShouldBlockKeybind(UI_ChatPanel_o *__this,int32_t keyCode,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d53 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pTVar1->fields).m_AllowInput != false) goto label_05d1762e;
    }
  }
  if (((__this->fields)._emojiPanelActive == false) && ((__this->fields)._isInteractingWithChatUI == false)) {
    return false;
  }
label_05d1762e:
  if ((((uint)keyCode < 0x1c) && ((0x8002200U >> (keyCode & 0x1fU) & 1) != 0)) || (keyCode == 0x10f)) {
    return false;
  }
  return true;
}


// UI.ChatPanel$$RefreshPoolSize
// il2cpp: void UI_ChatPanel__RefreshPoolSize (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d10a60
// eh: try 0x5d10c13..0x5d10c39 -> pad 0x5d10e6b (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d10e83..0x5d10e88 -> pad 0x5d10ead cleanup
// eh: try 0x5d10eb0..0x5d10eba -> pad 0x5d10ec2 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d10c0e: nop 
// asm:   0x5d10d57: jmp 0x5d10e55
// asm:   0x5d10e69: jmp 0x5d10e6b
// asm:   0x5d10e6b: mov r15, rax
// asm:   0x5d10e6e: cmp edx, 1
// asm:   0x5d10e71: jne 0x5d10eb0
// asm:   0x5d10e73: mov rdi, r15
// asm:   0x5d10e76: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d10e7b: mov rbp, qword ptr [rax]
// asm:   0x5d10e7e: mov qword ptr [rsp + 8], rbp
// asm:   0x5d10e83: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d10e88: lea rax, [rip + 0x157e221]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d10e8f: mov rsi, qword ptr [rax]
// asm:   0x5d10e92: lea rdi, [rsp + 0x20]
// asm:   0x5d10e97: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d10e9c: test rbp, rbp
// asm:   0x5d10e9f: je 0x5d10c4f
// asm:   0x5d10ea5: mov rdi, rbp
// asm:   0x5d10ea8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d10ead: mov r15, rax
// asm:   0x5d10eb0: lea rdi, [rsp + 8]
// asm:   0x5d10eb5: call 0x2fdbe30  ; il2cpp_runtime_helper_02fdbe30()
// asm:   0x5d10eba: mov rdi, r15
// asm:   0x5d10ebd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d10ec2: mov rdi, rax
// asm:   0x5d10ec5: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__RefreshPoolSize(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar3;
  Settings_UISettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Il2CppClass *pIVar7;
  UnityEngine_GameObject_o *__this_00;
  UI_ChatPanel_ChatLineView_array *pUVar8;
  bool bVar9;
  int32_t iVar10;
  Il2CppObject *pIVar11;
  TMPro_TMP_FontAsset_o *fontAsset;
  UI_ChatPanel_ChatLineView_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  int32_t index;
  TMPro_TMP_FontAsset_o *method_01;
  int iVar13;
  float fontSize;
  float width;
  undefined1 local_60 [16];
  UI_ChatPanel_ChatLineView_o *local_50;
  undefined1 local_48 [16];
  UI_ChatPanel_ChatLineView_o *local_38;
  
  if (Il2CppMethodInitialized_07547d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07547d70 = '\x01';
  }
  pSVar3 = (__this->fields)._linesPool;
  if (pSVar3 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    iVar13 = (pSVar3->fields)._size;
    if (Il2CppMethodInitialized_07547d35 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
      Il2CppMethodInitialized_07547d35 = '\x01';
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    iVar10 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((((pSVar4 != (Settings_UISettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).ChatFontSize, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
        (pSVar6 = (pSVar4->fields).ChatWidth, pSVar6 != (Settings_IntSetting_o *)0x0)) &&
       (pSVar3 = (__this->fields)._linesPool,
       pSVar3 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0)) {
      fontSize = (float)(pSVar5->fields)._value;
      width = (float)(pSVar6->fields)._value;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
      local_38 = local_50;
      local_48._0_8_ = local_60._0_8_;
      local_48._8_8_ = local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
      while (pMVar12 = MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext,
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                              ), bVar9) {
        if (local_38 != (UI_ChatPanel_ChatLineView_o *)0x0) {
          UI_ChatPanel_ChatLineView__ApplyChatMetrics(local_38,fontSize,width,pMVar12);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
      if (iVar10 < iVar13) {
        index = iVar13 + -1;
        do {
          pSVar3 = (__this->fields)._linesPool;
          if (pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) goto label_05d10e64;
          pIVar11 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
          if (pIVar11 != (Il2CppObject *)0x0) {
            pSVar3 = (__this->fields)._linesPool;
            if ((pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) ||
               (pIVar11 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item
                                    ), pIVar11 == (Il2CppObject *)0x0)) goto label_05d10e64;
            pIVar7 = pIVar11[0xc].klass;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar9) {
              pSVar3 = (__this->fields)._linesPool;
              if ((pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) ||
                 (pIVar11 = System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                       (MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item
                                      ), pIVar11 == (Il2CppObject *)0x0)) goto label_05d10e64;
              pIVar7 = pIVar11[0xc].klass;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pIVar7,(MethodInfo *)0x0);
            }
          }
          pSVar3 = (__this->fields)._linesPool;
          if (pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) goto label_05d10e64;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                     (MethodInfo_395F100 *)
                     MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_RemoveAt);
          index = index + -1;
        } while (iVar10 <= index);
      }
      else if (iVar13 < iVar10) {
        fontAsset = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                              ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
        iVar13 = iVar10 - iVar13;
        pMVar12 = extraout_RDX;
        do {
          while( true ) {
            __this_01 = UI_ChatPanel__CreateLine
                                  (__this,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),pMVar12);
            if (__this_01 == (UI_ChatPanel_ChatLineView_o *)0x0) goto label_05d10e64;
            method_01 = fontAsset;
            UI_ChatPanel_ChatLineView__SetFont(__this_01,fontAsset,method_00);
            UI_ChatPanel_ChatLineView__ApplyChatMetrics(__this_01,fontSize,width,(MethodInfo *)method_01);
            __this_00 = (__this_01->fields)._gameObject_k__BackingField;
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05d10e64;
            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
            pMVar12 = MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add;
            pSVar3 = (__this->fields)._linesPool;
            if (pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) goto label_05d10e64;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar8 = (pSVar3->fields)._items;
            if (pUVar8 == (UI_ChatPanel_ChatLineView_array *)0x0) goto label_05d10e64;
            uVar2 = (pSVar3->fields)._size;
            if ((uint)pUVar8->max_length <= uVar2) break;
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar8->m_Items[(int)uVar2] = __this_01;
            Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar2);
            iVar13 = iVar13 + -1;
            pMVar12 = extraout_RDX_01;
            if (iVar13 == 0) {
              return;
            }
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_01,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
          iVar13 = iVar13 + -1;
          pMVar12 = extraout_RDX_00;
        } while (iVar13 != 0);
      }
      return;
    }
  }
label_05d10e64:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ApplyLanguageFont
// il2cpp: void UI_ChatPanel__ApplyLanguageFont (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d17870
// eh: try 0x5d17a93..0x5d17b00 -> pad 0x5d17b09 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d17b21..0x5d17b26 -> pad 0x5d17b45 cleanup
// eh: try 0x5d17b48..0x5d17b52 -> pad 0x5d17b5a catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d17a8d: nop dword ptr [rax]
// asm:   0x5d17b05: jmp 0x5d17b09
// asm:   0x5d17b07: jmp 0x5d17b09
// asm:   0x5d17b09: mov rbx, rax
// asm:   0x5d17b0c: cmp edx, 1
// asm:   0x5d17b0f: jne 0x5d17b48
// asm:   0x5d17b11: mov rdi, rbx
// asm:   0x5d17b14: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d17b19: mov rbx, qword ptr [rax]
// asm:   0x5d17b1c: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d17b21: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d17b26: lea rax, [rip + 0x1577583]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x5d17b2d: mov rsi, qword ptr [rax]
// asm:   0x5d17b30: mov rdi, rsp
// asm:   0x5d17b33: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d17b38: test rbx, rbx
// asm:   0x5d17b3b: je 0x5d17ac5
// asm:   0x5d17b3d: mov rdi, rbx
// asm:   0x5d17b40: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d17b45: mov rbx, rax
// asm:   0x5d17b48: lea rdi, [rsp + 0x18]
// asm:   0x5d17b4d: call 0x2fdbe60  ; il2cpp_runtime_helper_02fdbe60()
// asm:   0x5d17b52: mov rdi, rbx
// asm:   0x5d17b55: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d17b5a: mov rdi, rax
// asm:   0x5d17b5d: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__ApplyLanguageFont(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_01;
  bool bVar3;
  TMPro_TMP_FontAsset_o *value;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  TMPro_TMP_FontAsset_o *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07547d71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d71 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                        ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (__this_00 = (pTVar1->fields).m_TextComponent, __this_00 != (TMPro_TMP_Text_o *)0x0)) {
        TMPro_TMP_Text__set_font(__this_00,value,(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._placeholderText;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
          pTVar2 = (__this->fields)._placeholderText;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar4 = UI_UIManager__GetLocale
                             ("InGame","Chat","Placeholder",
                              "","",(MethodInfo *)0x0);
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                      (pTVar2,pSVar4,(pTVar2->klass->vtable)._66_set_text.method);
            pTVar2 = (__this->fields)._chatModeLabel;
            if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
              method_01 = value;
              TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
              UI_ChatPanel__UpdateChatModeLabel(__this,(MethodInfo *)method_01);
              local_28 = (undefined1 *)&local_48;
              __this_01 = (__this->fields)._linesPool;
              if (__this_01 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                           (MethodInfo_395E050 *)
                           MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
                local_30 = 0;
                while( true ) {
                  bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                                     (MethodInfo_4C45C50 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                                    );
                  if (!bVar3) {
                    method_02 = 
                    MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                               (MethodInfo_4C45C40 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
                              );
                    if ((__this->fields)._chatHidden == false) {
                      UI_ChatPanel__RefreshPoolSize(__this,method_02);
                      UI_ChatPanel__ValidatePMState(__this,method_02);
                      UI_ChatPanel__RestorePMPartners(__this,method_02);
                      UI_ChatPanel__RefreshDisplayedMessages(__this,method_02);
                      return;
                    }
                    return;
                  }
                  if ((UI_ChatPanel_ChatLineView_o *)local_48.fields._current ==
                      (UI_ChatPanel_ChatLineView_o *)0x0) break;
                  UI_ChatPanel_ChatLineView__SetFont
                            ((UI_ChatPanel_ChatLineView_o *)local_48.fields._current,value,method_00);
                }
                ThrowNullReferenceException();
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatPanel$$IsInteractingWithChatUI
// il2cpp: bool UI_ChatPanel__IsInteractingWithChatUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d17b70

bool UI_ChatPanel__IsInteractingWithChatUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((__this->fields)._isInteractingWithChatUI == false) {
    if (Il2CppMethodInitialized_07547d53 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547d53 = '\x01';
    }
    if ((__this->fields)._isDestroyed == false) {
      pTVar1 = (__this->fields)._inputField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pTVar1->fields).m_AllowInput != false) {
          return true;
        }
      }
    }
    bVar2 = (__this->fields)._emojiPanelActive != false;
  }
  return bVar2;
}


// UI.ChatPanel$$SetTextAndPositionCaret
// il2cpp: void UI_ChatPanel__SetTextAndPositionCaret (UI_ChatPanel_o* __this, System_String_o* newText, const MethodInfo* method);
// 0x5d16120

void UI_ChatPanel__SetTextAndPositionCaret(UI_ChatPanel_o *__this,System_String_o *newText,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d72 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (pTVar2 = (pTVar1->fields).m_TextComponent, pTVar2 != (TMPro_TMP_Text_o *)0x0)) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
        if ((newText != (System_String_o *)0x0) &&
           (pTVar1 = (__this->fields)._inputField, pTVar1 != (TMPro_TMP_InputField_o *)0x0)) {
          value = (newText->fields)._stringLength;
          TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
                  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.ChatPanel$$SetTextAndCaretPosition
// il2cpp: void UI_ChatPanel__SetTextAndCaretPosition (UI_ChatPanel_o* __this, System_String_o* newText, int32_t caretPosition, const MethodInfo* method);
// 0x5d16680

void UI_ChatPanel__SetTextAndCaretPosition
               (UI_ChatPanel_o *__this,System_String_o *newText,int32_t caretPosition,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  int value;
  
  if (Il2CppMethodInitialized_07547d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d73 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (pTVar2 = (pTVar1->fields).m_TextComponent, pTVar2 != (TMPro_TMP_Text_o *)0x0)) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
        if (newText != (System_String_o *)0x0) {
          value = (newText->fields)._stringLength;
          if (caretPosition < value) {
            value = caretPosition;
          }
          if (caretPosition < 0) {
            value = 0;
          }
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._inputField;
                  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                    TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
                    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.ChatPanel$$GetCachedRectTransform
// il2cpp: UnityEngine_RectTransform_o* UI_ChatPanel__GetCachedRectTransform (UI_ChatPanel_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x5d13b40

UnityEngine_RectTransform_o *
UI_ChatPanel__GetCachedRectTransform(UI_ChatPanel_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *local_30;
  
  if (Il2CppMethodInitialized_07547d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d74 = '\x01';
  }
  local_30 = (UnityEngine_RectTransform_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_RectTransform_o *)0x0;
  if (!bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedRectTransforms
    ;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d13c70:
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)obj,(Il2CppObject **)&local_30,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_TryGetValue);
    if (!bVar2) {
      if (obj == (UnityEngine_GameObject_o *)0x0) goto label_05d13c70;
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (obj,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      local_30 = pUVar3;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._cachedRectTransforms;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d13c70;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)local_30,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_set_Item);
      }
    }
    pUVar3 = local_30;
  }
  return pUVar3;
}


// UI.ChatPanel$$SaveCurrentConversation
// il2cpp: void UI_ChatPanel__SaveCurrentConversation (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d15db0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d15e80: jmp 0x5d15e90
// asm:   0x5d15e82: lea rcx, [rip + 0x15cee3f]  ; "PUBLIC"
// asm:   0x5d15e89: mov r14, qword ptr [rcx]
// asm:   0x5d15e8c: test al, al

void UI_ChatPanel__SaveCurrentConversation(UI_ChatPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_InputField_o *pTVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *text;
  bool bVar4;
  int32_t caretPos;
  Il2CppObject *arg0;
  System_String_o *key;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07547d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    Il2CppMethodInitialized_07547d75 = '\x01';
  }
  pTVar2 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    cVar1 = (__this->fields)._inPMMode;
    key = "PUBLIC";
    if (((bool)cVar1 != false) &&
       (pPVar3 = (__this->fields)._currentPMTarget, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
      local_1c = (pPVar3->fields).actorNumber;
      arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_1c);
      key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
      cVar1 = (__this->fields)._inPMMode;
    }
    if (cVar1 == '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d15f23;
      bVar4 = System_String__IsNullOrEmpty((pTVar2->fields).m_Text,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ClearConversation("PUBLIC",(MethodInfo *)0x0);
        return;
      }
    }
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
label_05d15f23:
      ThrowNullReferenceException();
    }
    text = (pTVar2->fields).m_Text;
    caretPos = TMPro_TMP_InputField__get_caretPosition(pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__SaveConversation(key,text,caretPos,(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatPanel$$RestorePMPartners
// il2cpp: void UI_ChatPanel__RestorePMPartners (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d11100
// eh: try 0x5d11422..0x5d115cc -> pad 0x5d115cc (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d11602..0x5d11607 -> pad 0x5d1162c cleanup
// eh: try 0x5d1162f..0x5d11639 -> pad 0x5d11641 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d115cc: jmp 0x5d115ea
// asm:   0x5d115ce: jmp 0x5d115ea
// asm:   0x5d115d0: jmp 0x5d115e0
// asm:   0x5d115d2: jmp 0x5d115e0
// asm:   0x5d115d4: jmp 0x5d115e0
// asm:   0x5d115d6: jmp 0x5d115ea
// asm:   0x5d115d8: jmp 0x5d115e0
// asm:   0x5d115da: jmp 0x5d115e0
// asm:   0x5d115dc: jmp 0x5d115ea
// asm:   0x5d115de: jmp 0x5d115ea
// asm:   0x5d115e0: mov rbx, rax
// asm:   0x5d115e3: mov r13, qword ptr [rsp + 8]
// asm:   0x5d115e8: jmp 0x5d115ed
// asm:   0x5d115ea: mov rbx, rax
// asm:   0x5d115ed: cmp edx, 1
// asm:   0x5d115f0: jne 0x5d1162f
// asm:   0x5d115f2: mov rdi, rbx
// asm:   0x5d115f5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d115fa: mov rbx, qword ptr [rax]
// asm:   0x5d115fd: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d11602: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d11607: lea rax, [rip + 0x157cbd2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d1160e: mov rsi, qword ptr [rax]
// asm:   0x5d11611: lea rdi, [rsp + 0x10]
// asm:   0x5d11616: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d1161b: test rbx, rbx
// asm:   0x5d1161e: je 0x5d11581
// asm:   0x5d11624: mov rdi, rbx
// asm:   0x5d11627: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1162c: mov rbx, rax
// asm:   0x5d1162f: lea rdi, [rsp + 0x30]
// asm:   0x5d11634: call 0x2fdbe90  ; il2cpp_runtime_helper_02fdbe90()
// asm:   0x5d11639: mov rdi, rbx
// asm:   0x5d1163c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d11641: mov rdi, rax
// asm:   0x5d11644: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ChatPanel__RestorePMPartners(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_Player__o *pSVar5;
  Photon_Realtime_Player_array *pPVar6;
  bool bVar7;
  int32_t item;
  int32_t item_00;
  System_Collections_Generic_HashSet_int__o *__this_00;
  GameManagers_ChatManager_StaticFields *pGVar8;
  Photon_Realtime_Player_o *pPVar9;
  UI_ChatPanel___c__DisplayClass137_0_o *__this_01;
  Photon_Realtime_Room_o *pPVar10;
  System_Predicate_T__o *match;
  MethodInfo *pMVar11;
  int32_t index;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Exists);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass137_0_RestorePMPartners_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass137_0);
    Il2CppMethodInitialized_07547d76 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  index = 0;
  while( true ) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pGVar8 = TypeInfo_GameManagers_ChatManager->static_fields;
    if (pGVar8->RawMessages == (System_Collections_Generic_List_string__o *)0x0) goto label_05d113bd;
    if ((pGVar8->RawMessages->fields)._size <= index) break;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pGVar8 = TypeInfo_GameManagers_ChatManager->static_fields;
    }
    if (pGVar8->PrivateFlags == (System_Collections_Generic_List_bool__o *)0x0) goto label_05d113bd;
    bVar7 = System_Collections_Generic_List_bool___get_Item
                      (pGVar8->PrivateFlags,index,
                       (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    if (bVar7) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
      if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto label_05d113bd;
      item = System_Collections_Generic_List_int___get_Item
                       (pSVar4,index,
                        (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
      if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto label_05d113bd;
      item_00 = System_Collections_Generic_List_int___get_Item
                          (pSVar4,index,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar9 == (Photon_Realtime_Player_o *)0x0) goto label_05d113bd;
      if (item != (pPVar9->fields).actorNumber) {
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d113bd;
        System_Collections_Generic_HashSet_int___Add
                  (__this_00,item,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add)
        ;
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar9 == (Photon_Realtime_Player_o *)0x0) goto label_05d113bd;
      if (item_00 != (pPVar9->fields).actorNumber) {
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d113bd;
        System_Collections_Generic_HashSet_int___Add
                  (__this_00,item_00,
                   (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      }
    }
    index = index + 1;
  }
  if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_00,
               (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
    goto label_05d11430;
  }
  goto label_05d113bd;
label_05d11430:
  bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                     (MethodInfo_4C3AEE0 *)
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
  if (bVar7) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass137_0);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (UI_ChatPanel___c__DisplayClass137_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_01->fields).partnerID = (int32_t)local_58;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
      ThrowNullReferenceException();
    }
    pPVar9 = (*(pPVar10->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar10,(__this_01->fields).partnerID,false,
                        (pPVar10->klass->vtable)._10_GetPlayer.method);
    if (pPVar9 != (Photon_Realtime_Player_o *)0x0) {
      pSVar5 = (__this->fields)._pmPartners;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass137_0_RestorePMPartners_b__0,
                 (MethodInfo_3DC95B0 *)0x0);
      if (pSVar5 == (System_Collections_Generic_List_Player__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_Collections_Generic_List_object___Exists
                        ((System_Collections_Generic_List_object__o *)pSVar5,match,
                         (MethodInfo_395DA00 *)MethodInfo_System_Collections_Generic_List_Player_Exists);
      pMVar11 = MethodInfo_System_Collections_Generic_List_Player_Add;
      if (!bVar7) {
        pSVar5 = (__this->fields)._pmPartners;
        if (pSVar5 != (System_Collections_Generic_List_Player__o *)0x0) {
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar6 = (pSVar5->fields)._items;
          if (pPVar6 != (Photon_Realtime_Player_array *)0x0) {
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pPVar6->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pPVar6->m_Items[(int)uVar2] = pPVar9;
              Il2CppCodeGenWriteBarrier(pPVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pPVar9,
                         (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
            }
            goto label_05d11430;
          }
        }
        ThrowNullReferenceException();
      }
    }
    goto label_05d11430;
  }
  pMVar11 = MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
             (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
  pSVar5 = (__this->fields)._pmPartners;
  if (pSVar5 != (System_Collections_Generic_List_Player__o *)0x0) {
    iVar3 = (pSVar5->fields)._size;
    if (0 < iVar3) {
      (__this->fields)._currentPMIndex = iVar3 + -1;
    }
    UI_ChatPanel__UpdateChatModeElements(__this,pMVar11);
    return;
  }
label_05d113bd:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$.ctor
// il2cpp: void UI_ChatPanel___ctor (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x5d17c10

void UI_ChatPanel___ctor(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar1;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *pSVar2;
  System_Collections_Generic_List_Player__o *__this_00;
  System_Collections_Generic_Dictionary_GameObject__RectTransform__o *__this_01;
  
  if (Il2CppMethodInitialized_07547d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChatPanel_ChatLineView);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
    Il2CppMethodInitialized_07547d77 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatPanel_ChatLineView);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_ctor);
  (__this->fields)._linesPool = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._linesPool);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
  System_Collections_Generic_List_ChatManager_ChatDisplayLine____ctor
            (pSVar2,(MethodInfo_3A6C700 *)
                    MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor);
  (__this->fields)._visibleMessages = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleMessages);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
  System_Collections_Generic_List_ChatManager_ChatDisplayLine____ctor
            (pSVar2,(MethodInfo_3A6C700 *)
                    MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor);
  (__this->fields)._suggestionLines = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._suggestionLines);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatPanel_ChatLineView);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_ctor);
  (__this->fields)._poolRotationBuffer = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._poolRotationBuffer);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
  (__this->fields)._pmPartners = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pmPartners);
  (__this->fields)._currentPMIndex = -1;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_ctor);
  (__this->fields)._cachedRectTransforms = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedRectTransforms);
  (__this->fields)._stickerTag = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerTag);
  (__this->fields)._lastStickerSentTime = -INFINITY;
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


