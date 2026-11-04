// Type: UI.ChatPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ChatPanel.cs
// --------------------------------

// UI.ChatPanel.UIAnchors$$.cctor
// il2cpp: void UI_ChatPanel_UIAnchors___cctor (const MethodInfo* method);
// 0x182254d70

void UI_ChatPanel_UIAnchors___cctor(MethodInfo *method)

{
  float fVar1;
  UI_ChatPanel_UIAnchors_StaticFields *pUVar2;
  
  if (Il2CppMethodInitialized_184347207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    Il2CppMethodInitialized_184347207 = '\x01';
  }
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->TopStretch).fields.x = 0.0;
  (pUVar2->TopStretch).fields.y = 1.0;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->TopStretchEnd).fields.x = 1.0;
  (pUVar2->TopStretchEnd).fields.y = 1.0;
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->FullStretch).fields.x = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
  (pUVar2->FullStretch).fields.y = fVar1;
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->FullStretchStart).fields.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (pUVar2->FullStretchStart).fields.y = fVar1;
  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->RightStretch).fields =
       (UnityEngine_Vector2_Fields)0x3f800000;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->RightStretchEnd).fields.x = 1.0;
  (pUVar2->RightStretchEnd).fields.y = 1.0;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->CenterMiddle).fields.x = 0.5;
  (pUVar2->CenterMiddle).fields.y = 0.5;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->TopCenter).fields.x = 0.5;
  (pUVar2->TopCenter).fields.y = 1.0;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->RightCenter).fields.x = 1.0;
  (pUVar2->RightCenter).fields.y = 0.5;
  (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->LeftCenter).fields = (UnityEngine_Vector2_Fields)0x0;
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->BottomLeft).fields.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (pUVar2->BottomLeft).fields.y = fVar1;
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
  pUVar2 = TypeInfo_UI_ChatPanel_UIAnchors->static_fields;
  (pUVar2->TopRight).fields.x = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
  (pUVar2->TopRight).fields.y = fVar1;
  return;
}


// UI.ChatPanel.ChatLineView$$get_gameObject
// il2cpp: UnityEngine_GameObject_o* UI_ChatPanel_ChatLineView__get_gameObject (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x180c8ff80

UnityEngine_GameObject_o*
UI_ChatPanel_ChatLineView__get_gameObject(UI_ChatPanel_ChatLineView_o* __this, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._gameObject_k__BackingField.fields;
}


// UI.ChatPanel.ChatLineView$$set_gameObject
// il2cpp: void UI_ChatPanel_ChatLineView__set_gameObject (UI_ChatPanel_ChatLineView_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x180c8ffc0

void
UI_ChatPanel_ChatLineView__set_gameObject(UI_ChatPanel_ChatLineView_o* __this, UnityEngine_GameObject_o* value, MethodInfo* method)

{
  (__this->fields)._gameObject_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameObject_k__BackingField,value);
  return;
}


// UI.ChatPanel.ChatLineView$$get_transform
// il2cpp: UnityEngine_Transform_o* UI_ChatPanel_ChatLineView__get_transform (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x18223cfe0

UnityEngine_Transform_o *
UI_ChatPanel_ChatLineView__get_transform(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  
  __this_00 = (__this->fields)._gameObject_k__BackingField;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$get_RectTransform
// il2cpp: UnityEngine_RectTransform_o* UI_ChatPanel_ChatLineView__get_RectTransform (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x1805852b0

UnityEngine_RectTransform_o*
UI_ChatPanel_ChatLineView__get_RectTransform(UI_ChatPanel_ChatLineView_o* __this, MethodInfo* method)

{
  return (__this->fields)._rowRect;
}


// UI.ChatPanel.ChatLineView$$get_Height
// il2cpp: float UI_ChatPanel_ChatLineView__get_Height (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x181d981f0

float
UI_ChatPanel_ChatLineView__get_Height(UI_ChatPanel_ChatLineView_o* __this, MethodInfo* method)

{
  return (__this->fields)._rowHeight;
}


// UI.ChatPanel.ChatLineView$$.ctor
// il2cpp: void UI_ChatPanel_ChatLineView___ctor (UI_ChatPanel_ChatLineView_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, TMPro_TMP_InputField_o* chatInput, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x18223c350

void UI_ChatPanel_ChatLineView___ctor
               (UI_ChatPanel_ChatLineView_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               TMPro_TMP_InputField_o *chatInput,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  Il2CppType *handle;
  bool bVar8;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_Color_o *pUVar9;
  System_Type_array *pSVar10;
  System_Type_o *pSVar11;
  Il2CppObject *pIVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_GameObject_o *pUVar17;
  TMPro_TextMeshProUGUI_o *pTVar18;
  UnityEngine_RectTransform_o *__this_00;
  TMPro_TMP_InputField_o *pTVar19;
  UI_ChatPlayerNameOverlay_o *pUVar20;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  float fVar21;
  UnityEngine_Color_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184347208 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
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
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Text Area");
    Il2CppMethodInitialized_184347208 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._lastDisplayText = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastDisplayText,pSVar1);
  (__this->fields)._metricsDirty = true;
  (__this->fields)._playerStyleDirty = true;
  (__this->fields)._styledSenderID = -1;
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._styledSenderName = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._styledSenderName,pSVar1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._chatPanel = chatPanel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanel,chatPanel);
  if (style != (UI_ElementStyle_o *)0x0) {
    (__this->fields)._fontSize = (float)(style->fields).FontSize;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).ChatWidth, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      (__this->fields)._chatWidth = (float)(pSVar3->fields)._value;
      value = UnityEngine_Resources__Load_object_
                        ("UI/Fonts/Vegur-Regular-SDF",
                         (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
      (__this->fields)._defaultFont = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultFont,value);
      pSVar1 = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar9 = UI_UIManager__GetThemeColor
                         ((UnityEngine_Color_o *)local_48,pSVar1,"TextColor","Default",
                          "DefaultPanel",(MethodInfo *)0x0);
      fVar21 = (pUVar9->fields).g;
      fVar6 = (pUVar9->fields).b;
      fVar7 = (pUVar9->fields).a;
      (__this->fields)._defaultColor.fields.r = (pUVar9->fields).r;
      (__this->fields)._defaultColor.fields.g = fVar21;
      (__this->fields)._defaultColor.fields.b = fVar6;
      (__this->fields)._defaultColor.fields.a = fVar7;
      pSVar10 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar11 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (pSVar10 != (System_Type_array *)0x0) {
        if (pSVar11 != (System_Type_o *)0x0) {
          pIVar12 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)pSVar11,(((pSVar10->obj).klass)->_1).element_class);
          if (pIVar12 == (Il2CppObject *)0x0) {
            pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
          }
        }
        if ((int)pSVar10->max_length == 0) goto label_18223cfd2;
        pSVar10->m_Items[0] = pSVar11;
        Il2CppCodeGenWriteBarrier(pSVar10->m_Items,pSVar11);
        pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar13,"ChatLine",pSVar10,(MethodInfo *)0x0);
        (__this->fields)._gameObject_k__BackingField = pUVar13;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._gameObject_k__BackingField,pUVar13);
        pUVar13 = (__this->fields)._gameObject_k__BackingField;
        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
          pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar14,parent,false,(MethodInfo *)0x0);
            pUVar13 = (__this->fields)._gameObject_k__BackingField;
            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
              pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar13,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              (__this->fields)._rowRect = pUVar15;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._rowRect,pUVar15);
              pUVar15 = (__this->fields)._rowRect;
              if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
              }
              if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar15,(UnityEngine_Vector2_o)
                                   (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopStretch).fields,
                           (MethodInfo *)0x0);
                pUVar15 = (__this->fields)._rowRect;
                if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar15,(UnityEngine_Vector2_o)
                                     (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopStretchEnd).fields,
                             (MethodInfo *)0x0);
                  pUVar15 = (__this->fields)._rowRect;
                  if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_pivot
                              (pUVar15,(UnityEngine_Vector2_o)
                                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->TopCenter).fields,
                               (MethodInfo *)0x0);
                    pUVar15 = (__this->fields)._rowRect;
                    fVar21 = ((__this->fields)._fontSize / 18.0) * 30.0;
                    (__this->fields)._rowHeight = fVar21;
                    if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_sizeDelta
                                (pUVar15,(UnityEngine_Vector2_o)((ulonglong)(uint)fVar21 << 0x20),
                                 (MethodInfo *)0x0);
                      pSVar10 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                      pSVar11 = System_Type__GetTypeFromHandle
                                          ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                           (MethodInfo *)0x0);
                      if (pSVar10 != (System_Type_array *)0x0) {
                        if (pSVar11 != (System_Type_o *)0x0) {
                          pIVar12 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)pSVar11,
                                               (((pSVar10->obj).klass)->_1).element_class);
                          if (pIVar12 == (Il2CppObject *)0x0) {
                            pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                          }
                        }
                        if ((int)pSVar10->max_length != 0) {
                          pSVar10->m_Items[0] = pSVar11;
                          Il2CppCodeGenWriteBarrier(pSVar10->m_Items,pSVar11);
                          pSVar11 = System_Type__GetTypeFromHandle
                                              ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_RectMask2D,
                                               (MethodInfo *)0x0);
                          if (pSVar11 != (System_Type_o *)0x0) {
                            pIVar12 = il2cpp_vm_Object_IsInst
                                                ((Il2CppObject *)pSVar11,
                                                 (((pSVar10->obj).klass)->_1).element_class);
                            if (pIVar12 == (Il2CppObject *)0x0) {
                              pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                            }
                          }
                          if (1 < (uint)pSVar10->max_length) {
                            pSVar10->m_Items[1] = pSVar11;
                            Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1,pSVar11);
                            pUVar13 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                            UnityEngine_GameObject___ctor_2f1abe0
                                      (pUVar13,"Text Area",pSVar10,(MethodInfo *)0x0);
                            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                              pUVar17 = (__this->fields)._gameObject_k__BackingField;
                              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                                if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetParent_2f5a7e0
                                            (pUVar14,pUVar16,false,(MethodInfo *)0x0);
                                  pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                                      (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                      );
                                  if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar15,(UnityEngine_Vector2_o)
                                                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->
                                                       FullStretchStart).fields,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar15,(UnityEngine_Vector2_o)
                                                       (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->
                                                       FullStretch).fields,(MethodInfo *)0x0);
                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector2);
                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar15,(UnityEngine_Vector2_o)
                                                       (TypeInfo_UnityEngine_Vector2->static_fields->
                                                       zeroVector).fields,(MethodInfo *)0x0);
                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector2);
                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar15,(UnityEngine_Vector2_o)
                                                       (TypeInfo_UnityEngine_Vector2->static_fields->
                                                       zeroVector).fields,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_offsetMax
                                              (pUVar15,(UnityEngine_Vector2_o)0xc1000000,(MethodInfo *)0x0);
                                    pSVar10 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
                                    pSVar11 = System_Type__GetTypeFromHandle
                                                        ((System_RuntimeTypeHandle_o)
                                                         TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
                                    if (pSVar10 != (System_Type_array *)0x0) {
                                      if (pSVar11 != (System_Type_o *)0x0) {
                                        pIVar12 = il2cpp_vm_Object_IsInst
                                                            ((Il2CppObject *)pSVar11,
                                                             (((pSVar10->obj).klass)->_1).element_class);
                                        if (pIVar12 == (Il2CppObject *)0x0) {
                                          pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                        }
                                      }
                                      if ((int)pSVar10->max_length != 0) {
                                        pSVar10->m_Items[0] = pSVar11;
                                        Il2CppCodeGenWriteBarrier(pSVar10->m_Items,pSVar11);
                                        pSVar11 = System_Type__GetTypeFromHandle
                                                            ((System_RuntimeTypeHandle_o)
                                                             TypeRef_UnityEngine_CanvasRenderer,
                                                             (MethodInfo *)0x0);
                                        if (pSVar11 != (System_Type_o *)0x0) {
                                          pIVar12 = il2cpp_vm_Object_IsInst
                                                              ((Il2CppObject *)pSVar11,
                                                               (((pSVar10->obj).klass)->_1).element_class);
                                          if (pIVar12 == (Il2CppObject *)0x0) {
                                            pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                            il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                          }
                                        }
                                        if (1 < (uint)pSVar10->max_length) {
                                          pSVar10->m_Items[1] = pSVar11;
                                          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1,pSVar11);
                                          pSVar11 = System_Type__GetTypeFromHandle
                                                              ((System_RuntimeTypeHandle_o)
                                                               TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0
                                                              );
                                          if (pSVar11 != (System_Type_o *)0x0) {
                                            pIVar12 = il2cpp_vm_Object_IsInst
                                                                ((Il2CppObject *)pSVar11,
                                                                 (((pSVar10->obj).klass)->_1).element_class);
                                            if (pIVar12 == (Il2CppObject *)0x0) {
                                              pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                              il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                            }
                                          }
                                          if (2 < (uint)pSVar10->max_length) {
                                            pSVar10->m_Items[2] = pSVar11;
                                            Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 2,pSVar11);
                                            pUVar17 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_UnityEngine_GameObject);
                                            UnityEngine_GameObject___ctor_2f1abe0
                                                      (pUVar17,"Text",pSVar10,(MethodInfo *)0x0
                                                      );
                                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar14 = UnityEngine_GameObject__get_transform
                                                                  (pUVar17,(MethodInfo *)0x0);
                                              pUVar16 = UnityEngine_GameObject__get_transform
                                                                  (pUVar13,(MethodInfo *)0x0);
                                              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                                UnityEngine_Transform__SetParent_2f5a7e0
                                                          (pUVar14,pUVar16,false,(MethodInfo *)0x0);
                                                pTVar18 = UnityEngine_GameObject__GetComponent_object_
                                                                    (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                (__this->fields)._displayText = pTVar18;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this->fields)._displayText,pTVar18);
                                                pTVar18 = (__this->fields)._displayText;
                                                if (pTVar18 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                  uVar4._0_4_ = (__this->fields)._defaultColor.fields.r;
                                                  uVar4._4_4_ = (__this->fields)._defaultColor.fields.g;
                                                  uVar5._0_4_ = (__this->fields)._defaultColor.fields.b;
                                                  uVar5._4_4_ = (__this->fields)._defaultColor.fields.a;
                                                  TMPro_TMP_Text__set_fontSize
                                                            ((TMPro_TMP_Text_o *)pTVar18,
                                                             (float)(style->fields).FontSize,(MethodInfo *)0x0
                                                            );
                                                  local_48[0]._0_8_ = uVar4;
                                                  local_48[0]._8_8_ = uVar5;
                                                  (*(pTVar18->klass->vtable)._23_set_color.methodPtr)
                                                            (pTVar18,(UnityEngine_Color_o *)local_48,
                                                             (pTVar18->klass->vtable)._23_set_color.method);
                                                  TMPro_TMP_Text__set_alignment
                                                            ((TMPro_TMP_Text_o *)pTVar18,0x201,
                                                             (MethodInfo *)0x0);
                                                  TMPro_TMP_Text__set_enableWordWrapping
                                                            ((TMPro_TMP_Text_o *)pTVar18,true,
                                                             (MethodInfo *)0x0);
                                                  TMPro_TMP_Text__set_richText
                                                            ((TMPro_TMP_Text_o *)pTVar18,true,
                                                             (MethodInfo *)0x0);
                                                  TMPro_TMP_Text__set_enableKerning
                                                            ((TMPro_TMP_Text_o *)pTVar18,true,
                                                             (MethodInfo *)0x0);
                                                  TMPro_TMP_Text__set_isTextObjectScaleStatic
                                                            ((TMPro_TMP_Text_o *)pTVar18,false,
                                                             (MethodInfo *)0x0);
                                                  TMPro_TMP_Text__set_overflowMode
                                                            ((TMPro_TMP_Text_o *)pTVar18,0,(MethodInfo *)0x0);
                                                  __this_00 = UnityEngine_GameObject__GetComponent_object_
                                                                        (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                                                    UnityEngine_RectTransform__set_anchorMin
                                                              (__this_00,
                                                               (UnityEngine_Vector2_o)
                                                               (TypeInfo_UI_ChatPanel_UIAnchors->static_fields
                                                               ->FullStretchStart).fields,(MethodInfo *)0x0);
                                                    UnityEngine_RectTransform__set_anchorMax
                                                              (__this_00,
                                                               (UnityEngine_Vector2_o)
                                                               (TypeInfo_UI_ChatPanel_UIAnchors->static_fields
                                                               ->FullStretch).fields,(MethodInfo *)0x0);
                                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&TypeInfo_UnityEngine_Vector2);
                                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                    }
                                                    UnityEngine_RectTransform__set_sizeDelta
                                                              (__this_00,
                                                               (UnityEngine_Vector2_o)
                                                               (TypeInfo_UnityEngine_Vector2->static_fields->
                                                               zeroVector).fields,(MethodInfo *)0x0);
                                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&TypeInfo_UnityEngine_Vector2);
                                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                    }
                                                    UnityEngine_RectTransform__set_anchoredPosition
                                                              (__this_00,
                                                               (UnityEngine_Vector2_o)
                                                               (TypeInfo_UnityEngine_Vector2->static_fields->
                                                               zeroVector).fields,(MethodInfo *)0x0);
                                                    pUVar13 = (__this->fields)._gameObject_k__BackingField;
                                                    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                      pTVar19 = UnityEngine_GameObject__AddComponent_object_
                                                                          (pUVar13,(MethodInfo_6F4D60 *)
                                                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField
                                                       );
                                                      (__this->fields)._selectionInput = pTVar19;
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(__this->fields)._selectionInput,pTVar19);
                                                      pTVar19 = (__this->fields)._selectionInput;
                                                      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                        TMPro_TMP_InputField__set_textComponent
                                                                  (pTVar19,(TMPro_TMP_Text_o *)
                                                                           (__this->fields)._displayText,
                                                                   (MethodInfo *)0x0);
                                                        pTVar19 = (__this->fields)._selectionInput;
                                                        if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                          TMPro_TMP_InputField__set_textViewport
                                                                    (pTVar19,pUVar15,(MethodInfo *)0x0);
                                                          pTVar19 = (__this->fields)._selectionInput;
                                                          if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                            (pTVar19->fields).m_ReadOnly = true;
                                                            pTVar19 = (__this->fields)._selectionInput;
                                                            if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                              TMPro_TMP_InputField__set_richText
                                                                        (pTVar19,true,(MethodInfo *)0x0);
                                                              pTVar19 = (__this->fields)._selectionInput;
                                                              if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                                (pTVar19->fields).m_OnFocusSelectAll = false;
                                                                pTVar19 = (__this->fields)._selectionInput;
                                                                if (pTVar19 != (TMPro_TMP_InputField_o *)0x0)
                                                                {
                                                                  (pTVar19->fields).m_ResetOnDeActivation =
                                                                       false;
                                                                  pTVar19 = (__this->fields)._selectionInput;
                                                                  if (pTVar19 != (TMPro_TMP_InputField_o *)0x0
                                                                     ) {
                                                                    (pTVar19->fields).
                                                                    m_RestoreOriginalTextOnEscape = false;
                                                                    pTVar19 = (__this->fields)._selectionInput
                                                                    ;
                                                                    if (pTVar19 !=
                                                                        (TMPro_TMP_InputField_o *)0x0) {
                                                                                                                                            
                                                       TMPro_TMP_InputField__set_shouldHideMobileInput
                                                                 (pTVar19,true,(MethodInfo *)0x0);
                                                       pTVar19 = (__this->fields)._selectionInput;
                                                       if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                         TMPro_TMP_InputField__set_caretWidth
                                                                   (pTVar19,0,(MethodInfo *)0x0);
                                                         pTVar19 = (__this->fields)._selectionInput;
                                                         if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
                                                           TMPro_TMP_InputField__set_lineType
                                                                     (pTVar19,2,(MethodInfo *)0x0);
                                                           pUVar13 = (__this->fields).
                                                                     _gameObject_k__BackingField;
                                                           if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                             pUVar20 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar13,(MethodInfo_6F4D60 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_ChatPlayerNameOverlay
                                                       );
                                                       (__this->fields)._nameOverlay = pUVar20;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._nameOverlay,pUVar20);
                                                       pUVar20 = (__this->fields)._nameOverlay;
                                                       if (pUVar20 != (UI_ChatPlayerNameOverlay_o *)0x0) {
                                                         pTVar18 = (__this->fields)._displayText;
                                                         if (Il2CppMethodInitialized_184347218 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&TypeInfo_System_Action_TMP_TextInfo);
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&TypeInfo_UnityEngine_Object);
                                                       Il2CppMethodInitialized_184347218 = '\x01';
                                                       }
                                                       (pUVar20->fields)._source = pTVar18;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pUVar20->fields)._source,pTVar18);
                                                       pTVar18 = (pUVar20->fields)._source;
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar8 = UnityEngine_Object__op_Inequality
                                                                         ((UnityEngine_Object_o *)pTVar18,
                                                                          (UnityEngine_Object_o *)0x0,
                                                                          (MethodInfo *)0x0);
                                                       if (bVar8) {
                                                         pTVar18 = (pUVar20->fields)._source;
                                                         __this_01 = (
                                                       UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o
                                                       *)il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_System_Action_TMP_TextInfo);
                                                       System_Action_object____ctor
                                                                 (__this_01,(Il2CppObject *)pUVar20,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName,
                                                       (MethodInfo *)0x0);
                                                       if (pTVar18 == (TMPro_TextMeshProUGUI_o *)0x0)
                                                       goto label_18223cf6c;
                                                       (*(pTVar18->klass->vtable)._78_add_OnPreRenderText.
                                                         methodPtr)(pTVar18,(System_Action_TMP_TextInfo__o *)
                                                                            __this_01,
                                                                    (pTVar18->klass->vtable).
                                                                    _78_add_OnPreRenderText.method);
                                                       }
                                                       UI_ChatPlayerNameOverlay__BuildIfNeeded
                                                                 (pUVar20,(MethodInfo *)0x0);
                                                       pUVar13 = (__this->fields)._gameObject_k__BackingField;
                                                       if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                         pIVar12 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar13,(MethodInfo_6F4D60 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_ChatPanel_ChatLineClickHandler
                                                       );
                                                       if (pIVar12 != (Il2CppObject *)0x0) {
                                                         pIVar12[2].klass = (Il2CppClass *)__this;
                                                         Il2CppCodeGenWriteBarrier(&pIVar12[2].klass,__this);
                                                         pIVar12[2].monitor = chatInput;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&pIVar12[2].monitor,chatInput);
                                                         pIVar12[3].klass = (Il2CppClass *)chatPanel;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&pIVar12[3].klass,chatPanel);
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
                                            goto label_18223cf6c;
                                          }
                                        }
                                      }
                                      goto label_18223cfd2;
                                    }
                                  }
                                }
                              }
                            }
                            goto label_18223cf6c;
                          }
                        }
label_18223cfd2:
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
label_18223cf6c:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$ApplyChatMetrics
// il2cpp: void UI_ChatPanel_ChatLineView__ApplyChatMetrics (UI_ChatPanel_ChatLineView_o* __this, float fontSize, float width, const MethodInfo* method);
// 0x18223ada0

void UI_ChatPanel_ChatLineView__ApplyChatMetrics
               (UI_ChatPanel_ChatLineView_o *__this,float fontSize,float width,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *__this_00;
  char cVar1;
  char cVar2;
  
  cVar1 = il2cpp_runtime_helper_180562af0((__this->fields)._fontSize);
  cVar2 = il2cpp_runtime_helper_180562af0((__this->fields)._chatWidth,width);
  if ((cVar1 == '\0') || (cVar2 == '\0')) {
    (__this->fields)._fontSize = fontSize;
    (__this->fields)._chatWidth = width;
    (__this->fields)._metricsDirty = true;
    if (cVar1 == '\0') {
      (__this->fields)._playerStyleDirty = true;
    }
    UI_ChatPanel_ChatLineView__SetRowHeight(__this,(fontSize / 18.0) * 30.0,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._displayText;
    if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_00,fontSize,(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatPanel.ChatLineView$$SetFont
// il2cpp: void UI_ChatPanel_ChatLineView__SetFont (UI_ChatPanel_ChatLineView_o* __this, TMPro_TMP_FontAsset_o* fontAsset, const MethodInfo* method);
// 0x18223b750

void UI_ChatPanel_ChatLineView__SetFont
               (UI_ChatPanel_ChatLineView_o *__this,TMPro_TMP_FontAsset_o *fontAsset,MethodInfo *method)

{
  TMPro_TMP_FontAsset_o *x;
  TMPro_TextMeshProUGUI_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347209 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347209 = '\x01';
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
      Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultFont,fontAsset);
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
// 0x18223b5f0

void UI_ChatPanel_ChatLineView__InvalidatePlayerStyle
               (UI_ChatPanel_ChatLineView_o *__this,int32_t actorNumber,MethodInfo *method)

{
  if ((__this->fields)._styledSenderID == actorNumber) {
    (__this->fields)._playerStyleDirty = true;
  }
  return;
}


// UI.ChatPanel.ChatLineView$$SetLine
// il2cpp: bool UI_ChatPanel_ChatLineView__SetLine (UI_ChatPanel_ChatLineView_o* __this, GameManagers_ChatManager_ChatDisplayLine_o line, const MethodInfo* method);
// 0x18223b820
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223b937: mov ecx, r12d
// asm:   0x18223ba3f: mov rbx, r12
// asm:   0x18223bb54: jmp 0x18223bb59
// asm:   0x18223bc44: jmp 0x18223bc49
// asm:   0x18223bd89: mov rdx, r14
// asm:   0x18223bd8c: jmp 0x18223bd9f
// asm:   0x18223bf12: mov rbp, rsi
// asm:   0x18223bf15: jmp 0x18223bf25
// asm:   0x18223c065: movzx r14d, byte ptr [rsp + 0xe0]
// asm:   0x18223c0cc: mov rdx, rbp
// asm:   0x18223c0cf: jmp 0x18223c0e2

bool UI_ChatPanel_ChatLineView__SetLine
               (UI_ChatPanel_ChatLineView_o *__this,GameManagers_ChatManager_ChatDisplayLine_o *line,
               MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  int32_t iVar3;
  TMPro_TMP_FontAsset_o *x;
  TMPro_TextMeshProUGUI_o *pTVar4;
  TMPro_TMP_InputField_o *pTVar5;
  UI_ChatPlayerNameOverlay_o *pUVar6;
  PatreonEffects_NameEffectLabel_o *pPVar7;
  UnityEngine_RectTransform_o *pUVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  undefined7 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  Photon_Realtime_Player_o *pPVar17;
  Photon_Realtime_Room_o *pPVar18;
  Photon_Realtime_Player_o *player;
  TMPro_TMP_FontAsset_o *font;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  UnityEngine_Vector2_o UVar21;
  UnityEngine_Vector2_o UVar22;
  UnityEngine_GameObject_o *__this_00;
  System_String_o **ppSVar23;
  GameManagers_ChatManager_ChatDisplayLine_o *pGVar24;
  byte bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fStackX_c;
  UI_ChatDisplayNameRange_Fields local_res10;
  UI_ChatDisplayNameRange_Fields local_res20;
  GameManagers_ChatManager_ChatDisplayLine_o local_a8 [2];
  
  if (Il2CppMethodInitialized_18434720a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_18434720a = '\x01';
  }
  player = (Photon_Realtime_Player_o *)0x0;
  local_res10.SourceStartIndex = 0;
  local_res10.SourceEndIndex = 0;
  bVar26 = false;
  if ((__this->fields)._hasLastLine != false) {
    pSVar19 = (__this->fields)._lastLine.fields.TimeText;
    pSVar20 = (__this->fields)._lastLine.fields.IdText;
    pSVar9 = (__this->fields)._lastLine.fields.SenderName;
    pSVar10 = (__this->fields)._lastLine.fields.BodyText;
    uVar2 = *(undefined8 *)&(__this->fields)._lastLine.fields.SenderID;
    if ((((((bool)(char)*(undefined4 *)&(__this->fields)._lastLine.fields.UsePlayerStyle ==
            (line->fields).UsePlayerStyle) &&
          (bVar13 = System_String__op_Equality
                              ((__this->fields)._lastLine.fields.PlainText,(line->fields).PlainText,
                               (MethodInfo *)0x0), bVar13)) &&
         (bVar13 = System_String__op_Equality(pSVar19,(line->fields).TimeText,(MethodInfo *)0x0), bVar13)) &&
        ((bVar13 = System_String__op_Equality(pSVar20,(line->fields).IdText,(MethodInfo *)0x0), bVar13 &&
         (bVar13 = System_String__op_Equality(pSVar9,(line->fields).SenderName,(MethodInfo *)0x0), bVar13))))
       && (bVar13 = System_String__op_Equality(pSVar10,(line->fields).BodyText,(MethodInfo *)0x0), bVar13)) {
      bVar26 = (int)uVar2 == (line->fields).SenderID;
    }
  }
  pPVar17 = player;
  if ((line->fields).UsePlayerStyle != false) {
    pPVar17 = (Photon_Realtime_Player_o *)(ulonglong)(__this->fields)._playerStyleDirty;
  }
  if (((bVar26) && ((__this->fields)._metricsDirty == false)) && ((int)pPVar17 == 0)) {
    return (bool)(char)pPVar17;
  }
  bVar26 = (__this->fields)._metricsDirty;
  if ((line->fields).UsePlayerStyle == false) {
    pGVar24 = line;
    if ((line->fields).PlainText == (System_String_o *)0x0) {
      pGVar24 = *(GameManagers_ChatManager_ChatDisplayLine_o **)(g_data_184354e50 + 0xb8);
    }
    pSVar19 = (pGVar24->fields).PlainText;
    if ((__this->fields)._playerMode == false) {
      bVar13 = System_String__op_Inequality((__this->fields)._lastDisplayText,pSVar19,(MethodInfo *)0x0);
    }
    else {
      bVar13 = true;
    }
    if ((__this->fields)._playerMode != false) {
      pUVar6 = (__this->fields)._nameOverlay;
      if (pUVar6 == (UI_ChatPlayerNameOverlay_o *)0x0) goto label_18223c196;
      if (Il2CppMethodInitialized_18434721a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_18434721a = '\x01';
      }
      (pUVar6->fields)._hasRange = false;
      pSVar20 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      (pUVar6->fields)._nameText = pSVar20;
      Il2CppCodeGenWriteBarrier(&(pUVar6->fields)._nameText,pSVar20);
      pPVar7 = (pUVar6->fields)._label;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pPVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar14) {
        pPVar7 = (pUVar6->fields)._label;
        if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_18223c196;
        PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar7,(MethodInfo *)0x0);
        pPVar7 = (pUVar6->fields)._label;
        if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_18223c196;
        pSVar20 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        PatreonEffects_NameEffectLabel__SetText(pPVar7,pSVar20,pSVar20,pSVar20,(MethodInfo *)0x0);
      }
      pUVar8 = (pUVar6->fields)._labelRect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar14) {
        pUVar8 = (pUVar6->fields)._labelRect;
        if ((pUVar8 == (UnityEngine_RectTransform_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_18223c196;
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      }
    }
    pTVar5 = (__this->fields)._selectionInput;
    (__this->fields)._playerMode = false;
    (__this->fields)._playerStyleDirty = true;
    if (pTVar5 == (TMPro_TMP_InputField_o *)0x0) goto label_18223c196;
    bVar14 = System_String__op_Inequality((pTVar5->fields).m_Text,pSVar19,(MethodInfo *)0x0);
    if (bVar14) {
      pTVar5 = (__this->fields)._selectionInput;
      if (pTVar5 == (TMPro_TMP_InputField_o *)0x0) goto label_18223c196;
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar5,pSVar19,(MethodInfo *)0x0);
    }
    fVar27 = (__this->fields)._chatWidth - 8.0;
    pSVar20 = pSVar19;
    if (pSVar19 == (System_String_o *)0x0) {
      pSVar20 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pTVar4 = (__this->fields)._displayText;
    if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18223c196;
    fVar28 = 48.0;
    if (48.0 <= fVar27) {
      fVar28 = fVar27;
    }
    UVar21 = TMPro_TMP_Text__GetPreferredValues_2d12740
                       ((TMPro_TMP_Text_o *)pTVar4,pSVar20,fVar28,0.0,(MethodInfo *)0x0);
    pTVar4 = (__this->fields)._displayText;
    if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18223c196;
    fStackX_c = UVar21.fields.y;
    fVar27 = (pTVar4->fields).m_fontSize;
    if (fStackX_c <= fVar27) {
      fStackX_c = fVar27;
    }
    bVar16 = UI_ChatPanel_ChatLineView__SetRowHeight(__this,fStackX_c,(MethodInfo *)0x0);
    (__this->fields)._lastDisplayText = pSVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastDisplayText,pSVar19);
    bVar14 = (line->fields).UsePlayerStyle;
    uVar11 = *(undefined7 *)&(line->fields).field_0x9;
    pSVar19 = (line->fields).TimeText;
    pSVar20 = (line->fields).IdText;
    (__this->fields)._lastLine.fields.PlainText = (line->fields).PlainText;
    (__this->fields)._lastLine.fields.UsePlayerStyle = bVar14;
    *(undefined7 *)&(__this->fields)._lastLine.fields.field_0x9 = uVar11;
    pSVar9 = (line->fields).SenderName;
    pSVar10 = (line->fields).BodyText;
    (__this->fields)._lastLine.fields.TimeText = pSVar19;
    (__this->fields)._lastLine.fields.IdText = pSVar20;
    iVar3 = (line->fields).SenderID;
    uVar12 = *(undefined4 *)&(line->fields).field_0x34;
    (__this->fields)._lastLine.fields.SenderName = pSVar9;
    (__this->fields)._lastLine.fields.BodyText = pSVar10;
    (__this->fields)._lastLine.fields.SenderID = iVar3;
    *(undefined4 *)&(__this->fields)._lastLine.fields.field_0x34 = uVar12;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._lastLine,(void *)0x0);
    bVar25 = bVar16 | bVar26;
    (__this->fields)._hasLastLine = true;
    (__this->fields)._metricsDirty = false;
    goto label_18223bebd;
  }
  bVar13 = (__this->fields)._playerMode;
  (__this->fields)._playerMode = true;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar18 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar18 == (Photon_Realtime_Room_o *)0x0) {
label_18223ba42:
    font = (__this->fields)._defaultFont;
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar18 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar18 == (Photon_Realtime_Room_o *)0x0) goto label_18223c196;
    player = (*(pPVar18->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar18,(line->fields).SenderID,false,(pPVar18->klass->vtable)._10_GetPlayer.method);
    if (player == (Photon_Realtime_Player_o *)0x0) goto label_18223ba42;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    font = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    font = (__this->fields)._defaultFont;
  }
  local_a8[0].fields.PlainText = (line->fields).PlainText;
  local_a8[0].fields.UsePlayerStyle = (line->fields).UsePlayerStyle;
  local_a8[0].fields._9_7_ = *(undefined7 *)&(line->fields).field_0x9;
  local_a8[0].fields.TimeText = (line->fields).TimeText;
  local_a8[0].fields.IdText = (line->fields).IdText;
  local_a8[0].fields.SenderName = (line->fields).SenderName;
  local_a8[0].fields.BodyText = (line->fields).BodyText;
  local_a8[0].fields.SenderID = (line->fields).SenderID;
  local_a8[0].fields._52_4_ = *(undefined4 *)&(line->fields).field_0x34;
  pSVar19 = UI_ChatDisplayLineComposer__ComposePlayerLine
                      (local_a8,(UI_ChatDisplayNameRange_o *)&local_res10,0.0,(MethodInfo *)0x0);
  if (((__this->fields)._playerStyleDirty == false) &&
     ((__this->fields)._styledSenderID == (line->fields).SenderID)) {
    ppSVar23 = &(line->fields).SenderName;
    if ((line->fields).SenderName == (System_String_o *)0x0) {
      ppSVar23 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    bVar14 = System_String__op_Inequality((__this->fields)._styledSenderName,*ppSVar23,(MethodInfo *)0x0);
    if (bVar14) goto label_18223bb56;
    x = (__this->fields)._styledNameFont;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)font,(MethodInfo *)0x0);
    if (bVar14) goto label_18223bb56;
    bVar15 = il2cpp_runtime_helper_180562af0();
    bVar25 = bVar15 ^ 1;
    if (bVar15 == 0) goto label_18223bb59;
  }
  else {
label_18223bb56:
    bVar25 = 1;
label_18223bb59:
    fVar27 = UI_ChatPanel_ChatLineView__ApplyPlayerStyle
                       (__this,player,font,(line->fields).SenderName,(UI_ChatDisplayNameRange_o)local_res10,
                        (MethodInfo *)0x0);
    bVar14 = Il2CppMethodInitialized_18434720c == '\0';
    pSVar20 = (line->fields).SenderName;
    (__this->fields)._cachedStyledNameWidth = fVar27;
    if (bVar14) {
      il2cpp_codegen_initialize_runtime_metadata(&"|");
      Il2CppMethodInitialized_18434720c = '\x01';
    }
    if ((pSVar20 == (System_String_o *)0x0) &&
       (pSVar20 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar20 == (System_String_o *)0x0)
       ) goto label_18223c196;
    if ((pSVar20->fields)._stringLength == 0) {
      fVar27 = 0.0;
    }
    else {
      pTVar4 = (__this->fields)._displayText;
      pSVar20 = System_String__Concat_1969e50(pSVar20,"|",(MethodInfo *)0x0);
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18223c196;
      UVar21 = TMPro_TMP_Text__GetPreferredValues_2d12740
                         ((TMPro_TMP_Text_o *)pTVar4,pSVar20,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pTVar4 = (__this->fields)._displayText;
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18223c196;
      UVar22 = TMPro_TMP_Text__GetPreferredValues_2d12740
                         ((TMPro_TMP_Text_o *)pTVar4,"|",3.4028235e+38,3.4028235e+38,
                          (MethodInfo *)0x0);
      fVar27 = UVar21.fields.x - UVar22.fields.x;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
    }
    pSVar20 = (line->fields).SenderName;
    ppSVar23 = &(line->fields).SenderName;
    iVar3 = (line->fields).SenderID;
    (__this->fields)._cachedBaseNameWidth = fVar27;
    (__this->fields)._styledSenderID = iVar3;
    if (pSVar20 == (System_String_o *)0x0) {
      ppSVar23 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    pSVar20 = *ppSVar23;
    (__this->fields)._styledSenderName = pSVar20;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._styledSenderName,pSVar20);
    (__this->fields)._styledNameFont = font;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._styledNameFont,font);
    (__this->fields)._styledFontSize = (__this->fields)._fontSize;
    (__this->fields)._playerStyleDirty = false;
  }
  fVar27 = (__this->fields)._cachedStyledNameWidth;
  pfVar1 = &(__this->fields)._cachedBaseNameWidth;
  if ((*pfVar1 <= fVar27 && fVar27 != *pfVar1) &&
     (fVar27 = (fVar27 - (__this->fields)._cachedBaseNameWidth) + 2.0, 0.0 < fVar27)) {
    local_a8[0].fields.PlainText = (line->fields).PlainText;
    local_a8[0].fields.UsePlayerStyle = (line->fields).UsePlayerStyle;
    local_a8[0].fields._9_7_ = *(undefined7 *)&(line->fields).field_0x9;
    local_a8[0].fields.TimeText = (line->fields).TimeText;
    local_a8[0].fields.IdText = (line->fields).IdText;
    local_a8[0].fields.SenderName = (line->fields).SenderName;
    local_a8[0].fields.BodyText = (line->fields).BodyText;
    local_a8[0].fields.SenderID = (line->fields).SenderID;
    local_a8[0].fields._52_4_ = *(undefined4 *)&(line->fields).field_0x34;
    pSVar19 = UI_ChatDisplayLineComposer__ComposePlayerLine
                        (local_a8,(UI_ChatDisplayNameRange_o *)&local_res10,fVar27,(MethodInfo *)0x0);
  }
  if (bVar13 == false) {
    bVar13 = true;
  }
  else {
    bVar13 = System_String__op_Inequality((__this->fields)._lastDisplayText,pSVar19,(MethodInfo *)0x0);
  }
  pTVar5 = (__this->fields)._selectionInput;
  if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
    bVar14 = System_String__op_Inequality((pTVar5->fields).m_Text,pSVar19,(MethodInfo *)0x0);
    if (bVar14) {
      pTVar5 = (__this->fields)._selectionInput;
      if (pTVar5 == (TMPro_TMP_InputField_o *)0x0) goto label_18223c196;
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar5,pSVar19,(MethodInfo *)0x0);
    }
    fVar27 = (__this->fields)._chatWidth - 8.0;
    pSVar20 = pSVar19;
    if (pSVar19 == (System_String_o *)0x0) {
      pSVar20 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pTVar4 = (__this->fields)._displayText;
    if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
      fVar28 = 48.0;
      if (48.0 <= fVar27) {
        fVar28 = fVar27;
      }
      local_res20 = (UI_ChatDisplayNameRange_Fields)
                    TMPro_TMP_Text__GetPreferredValues_2d12740
                              ((TMPro_TMP_Text_o *)pTVar4,pSVar20,fVar28,0.0,(MethodInfo *)0x0);
      pTVar4 = (__this->fields)._displayText;
      if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
        fVar27 = (pTVar4->fields).m_fontSize;
        fVar28 = (float)local_res20.SourceEndIndex;
        if ((float)local_res20.SourceEndIndex <= fVar27) {
          fVar28 = fVar27;
        }
        bVar14 = UI_ChatPanel_ChatLineView__SetRowHeight(__this,fVar28,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._nameOverlay;
        if (pUVar6 != (UI_ChatPlayerNameOverlay_o *)0x0) {
          local_res20 = local_res10;
          (pUVar6->fields)._range.fields = local_res10;
          bVar16 = UI_ChatDisplayNameRange__get_IsValid
                             ((UI_ChatDisplayNameRange_o *)&local_res20,(MethodInfo *)0x0);
          if (bVar16) {
            pSVar20 = (pUVar6->fields)._nameText;
            if (pSVar20 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar16 = 0 < (pSVar20->fields)._stringLength;
          }
          else {
            bVar16 = false;
          }
          (pUVar6->fields)._hasRange = bVar16;
          pUVar6 = (__this->fields)._nameOverlay;
          if (pUVar6 != (UI_ChatPlayerNameOverlay_o *)0x0) {
            UI_ChatPlayerNameOverlay__SyncToSource(pUVar6,(MethodInfo *)0x0);
            (__this->fields)._lastDisplayText = pSVar19;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._lastDisplayText,pSVar19);
            bVar16 = (line->fields).UsePlayerStyle;
            uVar11 = *(undefined7 *)&(line->fields).field_0x9;
            pSVar19 = (line->fields).TimeText;
            pSVar20 = (line->fields).IdText;
            (__this->fields)._lastLine.fields.PlainText = (line->fields).PlainText;
            (__this->fields)._lastLine.fields.UsePlayerStyle = bVar16;
            *(undefined7 *)&(__this->fields)._lastLine.fields.field_0x9 = uVar11;
            pSVar9 = (line->fields).SenderName;
            pSVar10 = (line->fields).BodyText;
            (__this->fields)._lastLine.fields.TimeText = pSVar19;
            (__this->fields)._lastLine.fields.IdText = pSVar20;
            iVar3 = (line->fields).SenderID;
            uVar12 = *(undefined4 *)&(line->fields).field_0x34;
            (__this->fields)._lastLine.fields.SenderName = pSVar9;
            (__this->fields)._lastLine.fields.BodyText = pSVar10;
            (__this->fields)._lastLine.fields.SenderID = iVar3;
            *(undefined4 *)&(__this->fields)._lastLine.fields.field_0x34 = uVar12;
            Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._lastLine,(void *)0x0);
            bVar25 = bVar14 | bVar26 | bVar25;
            (__this->fields)._hasLastLine = true;
            (__this->fields)._metricsDirty = false;
label_18223bebd:
            return bVar25 != 0 || bVar13 != false;
          }
        }
      }
    }
  }
label_18223c196:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$RememberLine
// il2cpp: void UI_ChatPanel_ChatLineView__RememberLine (UI_ChatPanel_ChatLineView_o* __this, GameManagers_ChatManager_ChatDisplayLine_o line, const MethodInfo* method);
// 0x18223b700

void UI_ChatPanel_ChatLineView__RememberLine
               (UI_ChatPanel_ChatLineView_o *__this,GameManagers_ChatManager_ChatDisplayLine_o *line,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  undefined7 uVar6;
  int32_t iVar7;
  undefined4 uVar8;
  
  bVar5 = (line->fields).UsePlayerStyle;
  uVar6 = *(undefined7 *)&(line->fields).field_0x9;
  pSVar1 = (line->fields).TimeText;
  pSVar2 = (line->fields).IdText;
  (__this->fields)._lastLine.fields.PlainText = (line->fields).PlainText;
  (__this->fields)._lastLine.fields.UsePlayerStyle = bVar5;
  *(undefined7 *)&(__this->fields)._lastLine.fields.field_0x9 = uVar6;
  pSVar3 = (line->fields).SenderName;
  pSVar4 = (line->fields).BodyText;
  (__this->fields)._lastLine.fields.TimeText = pSVar1;
  (__this->fields)._lastLine.fields.IdText = pSVar2;
  iVar7 = (line->fields).SenderID;
  uVar8 = *(undefined4 *)&(line->fields).field_0x34;
  (__this->fields)._lastLine.fields.SenderName = pSVar3;
  (__this->fields)._lastLine.fields.BodyText = pSVar4;
  (__this->fields)._lastLine.fields.SenderID = iVar7;
  *(undefined4 *)&(__this->fields)._lastLine.fields.field_0x34 = uVar8;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._lastLine,(void *)0x0);
  (__this->fields)._hasLastLine = true;
  (__this->fields)._metricsDirty = false;
  return;
}


// UI.ChatPanel.ChatLineView$$DisplayLinesEqual
// il2cpp: bool UI_ChatPanel_ChatLineView__DisplayLinesEqual (GameManagers_ChatManager_ChatDisplayLine_o a, GameManagers_ChatManager_ChatDisplayLine_o b, const MethodInfo* method);
// 0x18223b270

bool UI_ChatPanel_ChatLineView__DisplayLinesEqual
               (GameManagers_ChatManager_ChatDisplayLine_o *a,GameManagers_ChatManager_ChatDisplayLine_o *b,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((a->fields).UsePlayerStyle == (b->fields).UsePlayerStyle) {
    bVar1 = System_String__op_Equality((a->fields).PlainText,(b->fields).PlainText,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__op_Equality((a->fields).TimeText,(b->fields).TimeText,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__op_Equality((a->fields).IdText,(b->fields).IdText,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = System_String__op_Equality((a->fields).SenderName,(b->fields).SenderName,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = System_String__op_Equality((a->fields).BodyText,(b->fields).BodyText,(MethodInfo *)0x0);
            if (bVar1) {
              return (a->fields).SenderID == (b->fields).SenderID;
            }
          }
        }
      }
    }
  }
  return false;
}


// UI.ChatPanel.ChatLineView$$HandlePointerClick
// il2cpp: void UI_ChatPanel_ChatLineView__HandlePointerClick (UI_ChatPanel_ChatLineView_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18223b310

void UI_ChatPanel_ChatLineView__HandlePointerClick
               (UI_ChatPanel_ChatLineView_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  TMPro_TMP_LinkInfo_o *pTVar1;
  float fVar2;
  float fVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  TMPro_TMP_LinkInfo_array *pTVar5;
  UI_ChatPanel_o *__this_00;
  TMPro_TMP_LinkInfo_Fields *pTVar6;
  int32_t iVar7;
  bool bVar8;
  uint uVar9;
  TMPro_TMP_TextInfo_o *pTVar10;
  System_String_o *pSVar11;
  Photon_Realtime_Player_o *pPVar12;
  Photon_Realtime_Room_o *pPVar13;
  int32_t local_res8 [2];
  int32_t local_res10 [2];
  UnityEngine_Vector3_o local_68;
  TMPro_TMP_LinkInfo_o local_58 [2];
  
  if (Il2CppMethodInitialized_18434720b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_TextUtilities);
    il2cpp_codegen_initialize_runtime_metadata(&"suggestion_");
    Il2CppMethodInitialized_18434720b = '\x01';
  }
  local_58[0].fields.linkID = (System_Char_array *)0x0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_58[0].fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_58[0].fields.hashCode = 0;
  local_58[0].fields.linkIdFirstCharacterIndex = 0;
  local_58[0].fields.linkIdLength = 0;
  local_58[0].fields.linkTextfirstCharacterIndex = 0;
  local_58[0].fields.linkTextLength = 0;
  local_58[0].fields._28_4_ = 0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    pTVar4 = (__this->fields)._displayText;
    fVar2 = (eventData->fields)._position_k__BackingField.fields.x;
    fVar3 = (eventData->fields)._position_k__BackingField.fields.y;
    if ((TypeInfo_TMPro_TMP_TextUtilities->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_TextUtilities);
    }
    local_68.fields.z = 0.0;
    local_68.fields.x = fVar2;
    local_68.fields.y = fVar3;
    uVar9 = TMPro_TMP_TextUtilities__FindIntersectingLink
                      ((TMPro_TMP_Text_o *)pTVar4,&local_68,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
    if (uVar9 == 0xffffffff) {
      return;
    }
    pTVar4 = (__this->fields)._displayText;
    if (((pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) &&
        (pTVar10 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar4,(MethodInfo *)0x0),
        pTVar10 != (TMPro_TMP_TextInfo_o *)0x0)) &&
       (pTVar5 = (pTVar10->fields).linkInfo, pTVar5 != (TMPro_TMP_LinkInfo_array *)0x0)) {
      if ((uint)pTVar5->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pTVar1 = pTVar5->m_Items + (int)uVar9;
      local_58[0].fields.textComponent = (pTVar1->fields).textComponent;
      local_58[0].fields.hashCode = (pTVar1->fields).hashCode;
      local_58[0].fields.linkIdFirstCharacterIndex = (pTVar1->fields).linkIdFirstCharacterIndex;
      pTVar6 = &pTVar5->m_Items[(int)uVar9].fields;
      local_58[0].fields.linkIdLength = pTVar6->linkIdLength;
      local_58[0].fields.linkTextfirstCharacterIndex = pTVar6->linkTextfirstCharacterIndex;
      local_58[0].fields.linkTextLength = pTVar6->linkTextLength;
      local_58[0].fields._28_4_ = *(undefined4 *)&pTVar6->field_0x1c;
      local_58[0].fields.linkID = pTVar5->m_Items[(int)uVar9].fields.linkID;
      pSVar11 = TMPro_TMP_LinkInfo__GetLinkID(local_58,(MethodInfo *)0x0);
      if (pSVar11 != (System_String_o *)0x0) {
        bVar8 = System_String__StartsWith(pSVar11,"suggestion_",(MethodInfo *)0x0);
        if (bVar8) {
          if ("suggestion_" == (System_String_o *)0x0) goto label_18223b5df;
          pSVar11 = System_String__Substring
                              (pSVar11,("suggestion_"->fields)._stringLength,(MethodInfo *)0x0);
          bVar8 = System_Int32__TryParse(pSVar11,local_res10,(MethodInfo *)0x0);
          iVar7 = local_res10[0];
          if (bVar8) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__HandleSuggestionClick(iVar7,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          bVar8 = System_Int32__TryParse(pSVar11,local_res8,(MethodInfo *)0x0);
          iVar7 = local_res8[0];
          if (bVar8) {
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar12 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar12 == (Photon_Realtime_Player_o *)0x0) goto label_18223b5df;
            if (iVar7 != (pPVar12->fields).actorNumber) {
              if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
              }
              pPVar13 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar13 != (Photon_Realtime_Room_o *)0x0) {
                if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                }
                pPVar13 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
                if (pPVar13 == (Photon_Realtime_Room_o *)0x0) goto label_18223b5df;
                pPVar12 = (*(pPVar13->klass->vtable)._10_GetPlayer.methodPtr)
                                    (pPVar13,local_res8[0],false,(pPVar13->klass->vtable)._10_GetPlayer.method
                                    );
                if (pPVar12 != (Photon_Realtime_Player_o *)0x0) {
                  __this_00 = (__this->fields)._chatPanel;
                  if (__this_00 == (UI_ChatPanel_o *)0x0) goto label_18223b5df;
                  UI_ChatPanel__EnterPMMode(__this_00,pPVar12,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
        return;
      }
    }
  }
label_18223b5df:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$ConfigureText
// il2cpp: void UI_ChatPanel_ChatLineView__ConfigureText (TMPro_TextMeshProUGUI_o* text, float fontSize, UnityEngine_Color_o color, bool richText, bool wordWrap, const MethodInfo* method);
// 0x18223b1b0

void UI_ChatPanel_ChatLineView__ConfigureText
               (TMPro_TextMeshProUGUI_o *text,float fontSize,UnityEngine_Color_o *color,bool richText,
               bool wordWrap,MethodInfo *method)

{
  UnityEngine_Color_Fields local_18;
  
  if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)text,fontSize,(MethodInfo *)0x0);
    local_18.r = (color->fields).r;
    local_18.g = (color->fields).g;
    local_18.b = (color->fields).b;
    local_18.a = (color->fields).a;
    (*(text->klass->vtable)._23_set_color.methodPtr)
              (text,(UnityEngine_Color_o *)&local_18,(text->klass->vtable)._23_set_color.method);
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,0x201,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,wordWrap,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)text,richText,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_enableKerning((TMPro_TMP_Text_o *)text,true,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_isTextObjectScaleStatic((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$BaseLineHeight
// il2cpp: float UI_ChatPanel_ChatLineView__BaseLineHeight (UI_ChatPanel_ChatLineView_o* __this, const MethodInfo* method);
// 0x18223b190

float UI_ChatPanel_ChatLineView__BaseLineHeight(UI_ChatPanel_ChatLineView_o *__this,MethodInfo *method)

{
  return ((__this->fields)._fontSize / 18.0) * 30.0;
}


// UI.ChatPanel.ChatLineView$$SetRowHeight
// il2cpp: bool UI_ChatPanel_ChatLineView__SetRowHeight (UI_ChatPanel_ChatLineView_o* __this, float height, const MethodInfo* method);
// 0x18223c1a0

bool UI_ChatPanel_ChatLineView__SetRowHeight
               (UI_ChatPanel_ChatLineView_o *__this,float height,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  float fVar3;
  undefined1 in_register_00001244 [12];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = ((__this->fields)._fontSize / 18.0) * 30.0;
  if (height <= fVar2) {
    height = fVar2;
  }
  auVar4._4_12_ = in_register_00001244;
  auVar4._0_4_ = height;
  fVar3 = (float)il2cpp_runtime_helper_1804f4070(__this,auVar4._0_8_);
  fVar2 = (__this->fields)._rowHeight;
  if (Il2CppMethodInitialized_18433dee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_18433dee4 = '\x01';
  }
  fVar5 = ABS(fVar2);
  if (fVar5 <= ABS(fVar3)) {
    fVar5 = ABS(fVar3);
  }
  fVar7 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  __this_00 = (__this->fields)._rowRect;
  (__this->fields)._rowHeight = fVar3;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    UVar1.fields.y = fVar3;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar1,(MethodInfo *)0x0);
    fVar6 = fVar5 * 1e-06;
    if (fVar5 * 1e-06 <= fVar7) {
      fVar6 = fVar7;
    }
    return fVar6 <= ABS(fVar3 - fVar2);
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$UpdateRowHeight
// il2cpp: bool UI_ChatPanel_ChatLineView__UpdateRowHeight (UI_ChatPanel_ChatLineView_o* __this, System_String_o* content, const MethodInfo* method);
// 0x18223c2c0

bool UI_ChatPanel_ChatLineView__UpdateRowHeight
               (UI_ChatPanel_ChatLineView_o *__this,System_String_o *content,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  float width;
  float fStackX_c;
  
  fVar4 = (__this->fields)._chatWidth - 8.0;
  pTVar1 = (__this->fields)._displayText;
  if (content == (System_String_o *)0x0) {
    content = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    width = 48.0;
    if (48.0 <= fVar4) {
      width = fVar4;
    }
    UVar3 = TMPro_TMP_Text__GetPreferredValues_2d12740
                      ((TMPro_TMP_Text_o *)pTVar1,content,width,0.0,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._displayText;
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      fStackX_c = UVar3.fields.y;
      fVar4 = (pTVar1->fields).m_fontSize;
      if (fStackX_c <= fVar4) {
        fStackX_c = fVar4;
      }
      bVar2 = UI_ChatPanel_ChatLineView__SetRowHeight(__this,fStackX_c,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$MeasureDisplayNameWidth
// il2cpp: float UI_ChatPanel_ChatLineView__MeasureDisplayNameWidth (UI_ChatPanel_ChatLineView_o* __this, System_String_o* senderName, const MethodInfo* method);
// 0x18223b600

float UI_ChatPanel_ChatLineView__MeasureDisplayNameWidth
                (UI_ChatPanel_ChatLineView_o *__this,System_String_o *senderName,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  System_String_o *text;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_18434720c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_18434720c = '\x01';
  }
  if ((senderName != (System_String_o *)0x0) ||
     (senderName = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
     senderName != (System_String_o *)0x0)) {
    if ((senderName->fields)._stringLength == 0) {
      return 0.0;
    }
    pTVar1 = (__this->fields)._displayText;
    text = System_String__Concat_1969e50(senderName,"|",(MethodInfo *)0x0);
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      UVar2 = TMPro_TMP_Text__GetPreferredValues_2d12740
                        ((TMPro_TMP_Text_o *)pTVar1,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._displayText;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        UVar3 = TMPro_TMP_Text__GetPreferredValues_2d12740
                          ((TMPro_TMP_Text_o *)pTVar1,"|",3.4028235e+38,3.4028235e+38,
                           (MethodInfo *)0x0);
        fVar4 = UVar2.fields.x - UVar3.fields.x;
        if (0.0 < fVar4) {
          return fVar4;
        }
        return 0.0;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineView$$ApplyPlayerStyle
// il2cpp: float UI_ChatPanel_ChatLineView__ApplyPlayerStyle (UI_ChatPanel_ChatLineView_o* __this, Photon_Realtime_Player_o* player, TMPro_TMP_FontAsset_o* font, System_String_o* senderName, UI_ChatDisplayNameRange_o nameRange, const MethodInfo* method);
// 0x18223ae60

float UI_ChatPanel_ChatLineView__ApplyPlayerStyle
                (UI_ChatPanel_ChatLineView_o *__this,Photon_Realtime_Player_o *player,
                TMPro_TMP_FontAsset_o *font,System_String_o *senderName,UI_ChatDisplayNameRange_o nameRange,
                MethodInfo *method)

{
  UI_ChatPlayerNameOverlay_o *pUVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  bool bVar4;
  System_String_o *text;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  float fVar7;
  UnityEngine_Color_Fields local_c8;
  PatreonEffects_ResolvedNameEffect_Fields local_b8;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_18434720d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434720d = '\x01';
  }
  pUVar1 = (__this->fields)._nameOverlay;
  local_b8.Enabled = false;
  local_b8._1_3_ = 0;
  local_b8.Type = 0;
  local_b8.ColorA.fields.r = 0.0;
  local_b8.ColorA.fields.g = 0.0;
  local_b8.ColorD.fields.b = 0.0;
  local_b8.ColorD.fields.a = 0.0;
  local_b8.ColorA.fields.b = 0.0;
  local_b8.ColorA.fields.a = 0.0;
  local_b8.ColorB.fields.r = 0.0;
  local_b8.ColorB.fields.g = 0.0;
  local_b8.ColorB.fields.b = 0.0;
  local_b8.ColorB.fields.a = 0.0;
  local_b8.ColorC.fields.r = 0.0;
  local_b8.ColorC.fields.g = 0.0;
  local_b8.ColorC.fields.b = 0.0;
  local_b8.ColorC.fields.a = 0.0;
  local_b8.ColorD.fields.r = 0.0;
  local_b8.ColorD.fields.g = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    font = (__this->fields)._defaultFont;
  }
  if (pUVar1 != (UI_ChatPlayerNameOverlay_o *)0x0) {
    local_c8.r = (__this->fields)._defaultColor.fields.r;
    local_c8.g = (__this->fields)._defaultColor.fields.g;
    local_c8.b = (__this->fields)._defaultColor.fields.b;
    local_c8.a = (__this->fields)._defaultColor.fields.a;
    UI_ChatPlayerNameOverlay__SetName
              (pUVar1,senderName,font,(__this->fields)._fontSize,(UnityEngine_Color_o *)&local_c8,nameRange,
               (MethodInfo *)0x0);
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (bVar4 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                          (player,(PatreonEffects_ResolvedNameEffect_o *)&local_b8,(MethodInfo *)0x0), !bVar4)
       ) {
      pUVar1 = (__this->fields)._nameOverlay;
      if ((pUVar1 == (UI_ChatPlayerNameOverlay_o *)0x0) ||
         (pPVar2 = (pUVar1->fields)._label, pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0))
      goto label_18223b180;
      PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar2,(MethodInfo *)0x0);
    }
    else {
      pUVar1 = (__this->fields)._nameOverlay;
      if ((pUVar1 == (UI_ChatPlayerNameOverlay_o *)0x0) ||
         (pPVar2 = (pUVar1->fields)._label, pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0))
      goto label_18223b180;
      local_c8.r = local_b8.ColorD.fields.r;
      local_c8.g = local_b8.ColorD.fields.g;
      local_c8.b = local_b8.ColorD.fields.b;
      local_c8.a = local_b8.ColorD.fields.a;
      local_68.r = local_b8.ColorC.fields.r;
      local_68.g = local_b8.ColorC.fields.g;
      local_68.b = local_b8.ColorC.fields.b;
      local_68.a = local_b8.ColorC.fields.a;
      local_58.r = local_b8.ColorB.fields.r;
      local_58.g = local_b8.ColorB.fields.g;
      local_58.b = local_b8.ColorB.fields.b;
      local_58.a = local_b8.ColorB.fields.a;
      local_48[0].r = local_b8.ColorA.fields.r;
      local_48[0].g = local_b8.ColorA.fields.g;
      local_48[0].b = local_b8.ColorA.fields.b;
      local_48[0].a = local_b8.ColorA.fields.a;
      PatreonEffects_NameEffectLabel__SetNameEffect
                (pPVar2,local_b8.Type,(UnityEngine_Color_o *)local_48,(UnityEngine_Color_o *)&local_58,
                 (UnityEngine_Color_o *)&local_68,(UnityEngine_Color_o *)&local_c8,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._nameOverlay;
    if (pUVar1 != (UI_ChatPlayerNameOverlay_o *)0x0) {
      if (Il2CppMethodInitialized_184347220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&"|");
        Il2CppMethodInitialized_184347220 = '\x01';
      }
      pPVar2 = (pUVar1->fields)._label;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        return 0.0;
      }
      pPVar2 = (pUVar1->fields)._label;
      if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        pTVar3 = (pPVar2->fields)._nameTmp;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          return 0.0;
        }
        bVar4 = System_String__IsNullOrEmpty((pUVar1->fields)._nameText,(MethodInfo *)0x0);
        if (bVar4) {
          return 0.0;
        }
        pPVar2 = (pUVar1->fields)._label;
        if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          pTVar3 = (pPVar2->fields)._nameTmp;
          text = System_String__Concat_1969e50
                           ((pUVar1->fields)._nameText,"|",(MethodInfo *)0x0);
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            UVar5 = TMPro_TMP_Text__GetPreferredValues_2d12740
                              ((TMPro_TMP_Text_o *)pTVar3,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
            UVar6 = TMPro_TMP_Text__GetPreferredValues_2d12740
                              ((TMPro_TMP_Text_o *)pTVar3,"|",3.4028235e+38,3.4028235e+38,
                               (MethodInfo *)0x0);
            fVar7 = UVar5.fields.x - UVar6.fields.x;
            if (fVar7 <= 0.0) {
              return 0.0;
            }
            return fVar7;
          }
        }
      }
    }
  }
label_18223b180:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineClickHandler$$Initialize
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__Initialize (UI_ChatPanel_ChatLineClickHandler_o* __this, UI_ChatPanel_ChatLineView_o* lineView, TMPro_TMP_InputField_o* chatInput, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x18223ac80

void
UI_ChatPanel_ChatLineClickHandler__Initialize(UI_ChatPanel_ChatLineClickHandler_o* __this, UI_ChatPanel_ChatLineView_o* lineView, TMPro_TMP_InputField_o* chatInput, UI_ChatPanel_o* chatPanel, MethodInfo* method)

{
  (__this->fields)._lineView = field;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineView,field);
  (__this->fields)._chatInput = next;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatInput,next);
  (__this->fields)._chatPanel = previous;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanel,previous);
  return;
}


// UI.ChatPanel.ChatLineClickHandler$$OnPointerClick
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__OnPointerClick (UI_ChatPanel_ChatLineClickHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18223ace0

void UI_ChatPanel_ChatLineClickHandler__OnPointerClick
               (UI_ChatPanel_ChatLineClickHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_ChatPanel_ChatLineView_o *__this_00;
  
  __this_00 = (__this->fields)._lineView;
  if (__this_00 != (UI_ChatPanel_ChatLineView_o *)0x0) {
    UI_ChatPanel_ChatLineView__HandlePointerClick(__this_00,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineClickHandler$$OnScroll
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__OnScroll (UI_ChatPanel_ChatLineClickHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18223ad00

void UI_ChatPanel_ChatLineClickHandler__OnScroll
               (UI_ChatPanel_ChatLineClickHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  UI_ChatScrollRect_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434720e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434720e = '\x01';
  }
  pUVar1 = (__this->fields)._chatPanel;
  if (pUVar1 != (UI_ChatPanel_o *)0x0) {
    pUVar2 = (pUVar1->fields)._scrollRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._chatPanel;
      if ((pUVar1 == (UI_ChatPanel_o *)0x0) ||
         (pUVar2 = (pUVar1->fields)._scrollRect, pUVar2 == (UI_ChatScrollRect_o *)0x0)) goto label_18223ad99;
      (*(pUVar2->klass->vtable)._42_OnScroll.methodPtr)
                (pUVar2,eventData,(pUVar2->klass->vtable)._42_OnScroll.method);
    }
    return;
  }
label_18223ad99:
  ThrowNullReferenceException();
}


// UI.ChatPanel.ChatLineClickHandler$$.ctor
// il2cpp: void UI_ChatPanel_ChatLineClickHandler___ctor (UI_ChatPanel_ChatLineClickHandler_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_ChatPanel_ChatLineClickHandler___ctor(UI_ChatPanel_ChatLineClickHandler_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c$$.cctor
// il2cpp: void UI_ChatPanel___c___cctor (const MethodInfo* method);
// 0x182254d00

void UI_ChatPanel___c___cctor(MethodInfo *method)

{
  UI_ChatPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_18434720f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    Il2CppMethodInitialized_18434720f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_ChatPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel_c->static_fields->__9,__this);
  return;
}


// UI.ChatPanel.<>c$$.ctor
// il2cpp: void UI_ChatPanel___c___ctor (UI_ChatPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c___ctor(UI_ChatPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c$$<Setup>b__66_2
// il2cpp: uint16_t UI_ChatPanel___c___Setup_b__66_2 (UI_ChatPanel___c_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x182254590

uint16_t UI_ChatPanel___c___Setup_b__66_2
                   (UI_ChatPanel___c_o *__this,System_String_o *text,int32_t charIndex,uint16_t addedChar,
                   MethodInfo *method)

{
  uint16_t uVar1;
  
  if ((addedChar != 10) && (addedChar != 0xd)) {
    uVar1 = 0;
    if (addedChar != 0x1b) {
      uVar1 = addedChar;
    }
    return uVar1;
  }
  return 0;
}


// UI.ChatPanel.<>c$$<OnNotificationBadgeClicked>b__71_0
// il2cpp: bool UI_ChatPanel___c___OnNotificationBadgeClicked_b__71_0 (UI_ChatPanel___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x182254530

bool UI_ChatPanel___c___OnNotificationBadgeClicked_b__71_0
               (UI_ChatPanel___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  int32_t playerID;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184347210 = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    playerID = (p->fields).actorNumber;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar1 = GameManagers_ChatManager__HasActivePMNotification(playerID,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c$$<ValidatePMState>b__121_0
// il2cpp: bool UI_ChatPanel___c___ValidatePMState_b__121_0 (UI_ChatPanel___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x1822545b0

bool UI_ChatPanel___c___ValidatePMState_b__121_0
               (UI_ChatPanel___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__Player__o *__this_00;
  bool bVar1;
  Photon_Realtime_Room_o *pPVar2;
  
  if (Il2CppMethodInitialized_184347211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184347211 = '\x01';
  }
  if (p == (Photon_Realtime_Player_o *)0x0) {
    return true;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if ((pPVar2 != (Photon_Realtime_Room_o *)0x0) &&
     (__this_00 = (pPVar2->fields).players,
     __this_00 != (System_Collections_Generic_Dictionary_int__Player__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___ContainsValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)p,
                       (MethodInfo_13BF340 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
    return !bVar1;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass118_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass118_0___ctor (UI_ChatPanel___c__DisplayClass118_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass118_0___ctor(UI_ChatPanel___c__DisplayClass118_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass118_0$$<EnterPMMode>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass118_0___EnterPMMode_b__0 (UI_ChatPanel___c__DisplayClass118_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x182254640

bool
UI_ChatPanel___c__DisplayClass118_0___EnterPMMode_b__0(UI_ChatPanel___c__DisplayClass118_0_o* __this, Photon_Realtime_Player_o* p, MethodInfo* method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).target, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass120_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass120_0___ctor (UI_ChatPanel___c__DisplayClass120_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass120_0___ctor(UI_ChatPanel___c__DisplayClass120_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass120_0$$<RemovePMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass120_0___RemovePMPartner_b__0 (UI_ChatPanel___c__DisplayClass120_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x182254640

bool
UI_ChatPanel___c__DisplayClass120_0___RemovePMPartner_b__0(UI_ChatPanel___c__DisplayClass120_0_o* __this, Photon_Realtime_Player_o* p, MethodInfo* method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass125_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass125_0___ctor (UI_ChatPanel___c__DisplayClass125_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass125_0___ctor(UI_ChatPanel___c__DisplayClass125_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass125_0$$<CycleToPMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass125_0___CycleToPMPartner_b__0 (UI_ChatPanel___c__DisplayClass125_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x1822546a0

bool
UI_ChatPanel___c__DisplayClass125_0___CycleToPMPartner_b__0(UI_ChatPanel___c__DisplayClass125_0_o* __this, Photon_Realtime_Player_o* p, MethodInfo* method)

{
  UI_ChatPanel_o *pUVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (((p != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_ChatPanel_o *)0x0)) &&
     (pPVar2 = (pUVar1->fields)._currentPMTarget, pPVar2 != (Photon_Realtime_Player_o *)0x0)) {
    return (p->fields).actorNumber == (pPVar2->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass125_0$$<CycleToPMPartner>b__1
// il2cpp: bool UI_ChatPanel___c__DisplayClass125_0___CycleToPMPartner_b__1 (UI_ChatPanel___c__DisplayClass125_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x1822546a0

bool UI_ChatPanel___c__DisplayClass125_0___CycleToPMPartner_b__1
               (UI_ChatPanel___c__DisplayClass125_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (((p != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_ChatPanel_o *)0x0)) &&
     (pPVar2 = (pUVar1->fields)._currentPMTarget, pPVar2 != (Photon_Realtime_Player_o *)0x0)) {
    return (p->fields).actorNumber == (pPVar2->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass125_0$$<CycleToPMPartner>b__2
// il2cpp: bool UI_ChatPanel___c__DisplayClass125_0___CycleToPMPartner_b__2 (UI_ChatPanel___c__DisplayClass125_0_o* __this, Photon_Realtime_Player_o* p2, const MethodInfo* method);
// 0x1822546e0

bool UI_ChatPanel___c__DisplayClass125_0___CycleToPMPartner_b__2
               (UI_ChatPanel___c__DisplayClass125_0_o *__this,Photon_Realtime_Player_o *p2,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  System_Collections_Generic_List_Player__o *__this_00;
  Photon_Realtime_Player_o *pPVar3;
  
  if (Il2CppMethodInitialized_184347212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    Il2CppMethodInitialized_184347212 = '\x01';
  }
  if (((p2 != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar2 = (__this->fields).__4__this, pUVar2 != (UI_ChatPanel_o *)0x0)) &&
     (__this_00 = (pUVar2->fields)._pmPartners, __this_00 != (System_Collections_Generic_List_Player__o *)0x0)
     ) {
    iVar1 = (p2->fields).actorNumber;
    pPVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).currentIndexInRecency,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Player_get_Item);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      return iVar1 == (pPVar3->fields).actorNumber;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass126_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass126_0___ctor (UI_ChatPanel___c__DisplayClass126_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass126_0___ctor(UI_ChatPanel___c__DisplayClass126_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass126_0$$<GetPmPartnersByRecency>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass126_0___GetPmPartnersByRecency_b__0 (UI_ChatPanel___c__DisplayClass126_0_o* __this, Photon_Realtime_Player_o* r, const MethodInfo* method);
// 0x182254640

bool
UI_ChatPanel___c__DisplayClass126_0___GetPmPartnersByRecency_b__0(UI_ChatPanel___c__DisplayClass126_0_o* __this, Photon_Realtime_Player_o* r, MethodInfo* method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).p, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass127_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass127_0___ctor (UI_ChatPanel___c__DisplayClass127_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass127_0___ctor(UI_ChatPanel___c__DisplayClass127_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass127_0$$<AddPMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass127_0___AddPMPartner_b__0 (UI_ChatPanel___c__DisplayClass127_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x182254640

bool UI_ChatPanel___c__DisplayClass127_0___AddPMPartner_b__0
               (UI_ChatPanel___c__DisplayClass127_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (p->fields).actorNumber == (pPVar1->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass141_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass141_0___ctor (UI_ChatPanel___c__DisplayClass141_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass141_0___ctor(UI_ChatPanel___c__DisplayClass141_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass141_0$$<RestorePMPartners>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass141_0___RestorePMPartners_b__0 (UI_ChatPanel___c__DisplayClass141_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x182254760

bool UI_ChatPanel___c__DisplayClass141_0___RestorePMPartners_b__0
               (UI_ChatPanel___c__DisplayClass141_0_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  if (p != (Photon_Realtime_Player_o *)0x0) {
    return (p->fields).actorNumber == (__this->fields).partnerID;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass64_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass64_0___ctor (UI_ChatPanel___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass64_0___ctor(UI_ChatPanel___c__DisplayClass64_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass64_0$$<ProcessEmojiCodes>b__0
// il2cpp: System_String_o* UI_ChatPanel___c__DisplayClass64_0___ProcessEmojiCodes_b__0 (UI_ChatPanel___c__DisplayClass64_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x182254780

System_String_o *
UI_ChatPanel___c__DisplayClass64_0___ProcessEmojiCodes_b__0
          (UI_ChatPanel___c__DisplayClass64_0_o *__this,System_Text_RegularExpressions_Match_o *match,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  bool bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_01;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *__this_03;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  UnityEngine_UIElements_TextureId_o local_res10 [4];
  uint local_res20 [2];
  UnityEngine_UIElements_TextureId_Fields local_28 [4];
  
  if (Il2CppMethodInitialized_184347213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}>");
    il2cpp_codegen_initialize_runtime_metadata(&"s\xe2\x80\x8b\xe2\x80\x8b");
    il2cpp_codegen_initialize_runtime_metadata(&"\n<size=60><sprite={0}></size>");
    Il2CppMethodInitialized_184347213 = '\x01';
  }
  local_res10[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_res20[0] = 0;
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    __this_01 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                          (match,(match->klass->vtable)._5_get_Groups.method);
    if (__this_01 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
      __this_02 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                            (__this_01,1,(MethodInfo *)0x0);
      if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
        __this_03 = System_Text_RegularExpressions_Capture__ToString(__this_02,(MethodInfo *)0x0);
        pSVar2 = "s\xe2\x80\x8b\xe2\x80\x8b";
        if (__this_03 != (System_String_o *)0x0) {
          bVar1 = System_String__StartsWith(__this_03,"s\xe2\x80\x8b\xe2\x80\x8b",(MethodInfo *)0x0);
          if (bVar1) {
            if ((__this->fields).stickerFound != false) {
              return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            if (pSVar2 == (System_String_o *)0x0) goto label_182254994;
            pSVar2 = System_String__Substring(__this_03,(pSVar2->fields)._stringLength,(MethodInfo *)0x0);
            bVar1 = System_Int32__TryParse(pSVar2,(int32_t *)local_res20,(MethodInfo *)0x0);
            if ((!bVar1) || (0x8c < local_res20[0])) goto label_182254957;
            (__this->fields).stickerFound = true;
            local_28[0].m_Index = local_res20[0];
            arg0 = il2cpp_value_box(g_data_184354e08,local_28);
            pSVar2 = "\n<size=60><sprite={0}></size>";
          }
          else {
            pSVar2 = System_String__ToLower(__this_03,(MethodInfo *)0x0);
            if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
            }
            __this_00 = TypeInfo_UI_ChatPanel->static_fields->EmojiNameToIndex;
            if (__this_00 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) goto label_182254994;
            bVar1 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (Il2CppObject *)pSVar2,local_res10,
                               (MethodInfo_1461BD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
            if (!bVar1) {
label_182254957:
              pSVar2 = System_Text_RegularExpressions_Capture__ToString
                                 ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
              return pSVar2;
            }
            local_28[0] = local_res10[0].fields.m_Index;
            arg0 = il2cpp_value_box(g_data_184354e08,local_28);
            pSVar2 = "<sprite={0}>";
          }
          pSVar2 = System_String__Format(pSVar2,arg0,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
  }
label_182254994:
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass66_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass66_0___ctor (UI_ChatPanel___c__DisplayClass66_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass66_0___ctor(UI_ChatPanel___c__DisplayClass66_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass66_0$$<Setup>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass66_0___Setup_b__0 (UI_ChatPanel___c__DisplayClass66_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x1822549a0

void UI_ChatPanel___c__DisplayClass66_0___Setup_b__0
               (UI_ChatPanel___c__DisplayClass66_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  UI_ChatScrollRect_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  char cVar3;
  bool bVar4;
  
  pUVar1 = (__this->fields).scrollRect;
  if (pUVar1 != (UI_ChatScrollRect_o *)0x0) {
    bVar4 = g_data_184347226 == '\0';
    (pUVar1->fields).isMouseOver = true;
    if (bVar4) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      g_data_184347226 = '\x01';
    }
    pUVar2 = (pUVar1->fields).handleImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    cVar3 = '\x01';
    pUVar2 = (pUVar1->fields).handleImage;
    if ((pUVar1->fields).isMouseOver == false) {
      cVar3 = (pUVar1->fields).isDragging;
    }
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,cVar3 != '\0',(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass66_0$$<Setup>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass66_0___Setup_b__1 (UI_ChatPanel___c__DisplayClass66_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x182254a50

void UI_ChatPanel___c__DisplayClass66_0___Setup_b__1
               (UI_ChatPanel___c__DisplayClass66_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  UI_ChatScrollRect_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields).scrollRect;
  if (pUVar1 != (UI_ChatScrollRect_o *)0x0) {
    if (Il2CppMethodInitialized_184347225 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184347225 = '\x01';
    }
    pUVar2 = (pUVar1->fields).handleImage;
    (pUVar1->fields).isMouseOver = false;
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


// UI.ChatPanel.<>c__DisplayClass75_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___ctor (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass75_0___ctor(UI_ChatPanel___c__DisplayClass75_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__0 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x182254af0

void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__0
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__SetPanelMode(__this_00,0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__1 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x182254b20

void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__1
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__SetPanelMode(__this_00,1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__2 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x182254b50

void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__2
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__ChangeEmojiPage(__this_00,-1,(__this->fields).tooltipText,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__3
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__3 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x182254b80

void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__3
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__ChangeEmojiPage(__this_00,1,(__this->fields).tooltipText,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___ctor (UI_ChatPanel___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ChatPanel___c__DisplayClass77_0___ctor(UI_ChatPanel___c__DisplayClass77_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__0 (UI_ChatPanel___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x182254bb0

void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__0
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__InsertSticker(__this_00,(__this->fields).spriteIndex,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__1 (UI_ChatPanel___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x182254be0

void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__1
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__InsertEmoji(__this_00,(__this->fields).spriteIndex,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__2 (UI_ChatPanel___c__DisplayClass77_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x182254c10

void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__2
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":{0}:");
    Il2CppMethodInitialized_184347214 = '\x01';
  }
  local_res8[0] = (__this->fields).spriteIndex;
  pTVar1 = (__this->fields).tooltipText;
  arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
  pSVar2 = System_String__Format(":{0}:",arg0,(MethodInfo *)0x0);
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable)._66_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__3
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__3 (UI_ChatPanel___c__DisplayClass77_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x182254ca0

void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__3
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,UnityEngine_EventSystems_BaseEventData_o *data,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  
  if (Il2CppMethodInitialized_184347215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347215 = '\x01';
  }
  pTVar1 = (__this->fields).tooltipText;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,"",(pTVar1->klass->vtable)._66_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel.<ResetPMToggleActive>d__123$$.ctor
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__123___ctor (UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_ChatPanel__ResetPMToggleActive_d__123___ctor(UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__123$$System.IDisposable.Dispose
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__123__System_IDisposable_Dispose (UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_ChatPanel__ResetPMToggleActive_d__123__System_IDisposable_Dispose(UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, MethodInfo* method)

{
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__123$$MoveNext
// il2cpp: bool UI_ChatPanel__ResetPMToggleActive_d__123__MoveNext (UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, const MethodInfo* method);
// 0x182254230

bool UI_ChatPanel__ResetPMToggleActive_d__123__MoveNext
               (UI_ChatPanel__ResetPMToggleActive_d__123_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_184347216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184347216 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.2,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pUVar2 == (UI_ChatPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pUVar2->fields)._pmToggleActive = false;
  }
  return false;
}


// UI.ChatPanel.<ResetPMToggleActive>d__123$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ResetPMToggleActive_d__123__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_ChatPanel__ResetPMToggleActive_d__123__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ResetPMToggleActive>d__123$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__123__System_Collections_IEnumerator_Reset (UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, const MethodInfo* method);
// 0x1822542e0

void UI_ChatPanel__ResetPMToggleActive_d__123__System_Collections_IEnumerator_Reset
               (UI_ChatPanel__ResetPMToggleActive_d__123_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_ChatPanel_ResetPMToggleActive_d__123_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.ChatPanel.<ResetPMToggleActive>d__123$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ResetPMToggleActive_d__123__System_Collections_IEnumerator_get_Current (UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_ChatPanel__ResetPMToggleActive_d__123__System_Collections_IEnumerator_get_Current(UI_ChatPanel__ResetPMToggleActive_d__123_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$.ctor
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__78___ctor (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_ChatPanel__ShowTemporaryTooltip_d__78___ctor(UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.IDisposable.Dispose
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__78__System_IDisposable_Dispose (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_ChatPanel__ShowTemporaryTooltip_d__78__System_IDisposable_Dispose(UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, MethodInfo* method)

{
  return;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$MoveNext
// il2cpp: bool UI_ChatPanel__ShowTemporaryTooltip_d__78__MoveNext (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x182254320

bool UI_ChatPanel__ShowTemporaryTooltip_d__78__MoveNext
               (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  bool bVar4;
  System_String_o *value;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_184347217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_184347217 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pTVar2 = (__this->fields).tooltip;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pTVar2 = (__this->fields).tooltip;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        value = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                          (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
        (__this->fields)._prev_5__2 = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._prev_5__2,value);
        pTVar2 = (__this->fields).tooltip;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTVar3 = (__this->fields).tooltip;
          (__this->fields)._prevSize_5__3 = (pTVar2->fields).m_fontSize;
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            (*(pTVar3->klass->vtable)._66_set_text.methodPtr)
                      (pTVar3,(__this->fields).message,(pTVar3->klass->vtable)._66_set_text.method);
            pTVar2 = (__this->fields).tooltip;
            if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
              fVar5 = (__this->fields)._prevSize_5__3;
              if (10.0 <= fVar5) {
                fVar5 = 10.0;
              }
              TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar2,fVar5,(MethodInfo *)0x0);
              fVar5 = (__this->fields).duration;
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
              UnityEngine_WaitForSecondsRealtime___ctor(__this_00,fVar5,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
              (__this->fields).__1__state = 1;
              return true;
            }
          }
        }
      }
label_1822544e1:
      ThrowNullReferenceException();
    }
  }
  else if (iVar1 == 1) {
    pTVar2 = (__this->fields).tooltip;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
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
      goto label_1822544e1;
    }
  }
  return false;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_IEnumerator_Reset (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x1822544f0

void UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_IEnumerator_Reset
               (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_ChatPanel_ShowTemporaryTooltip_d__78_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_IEnumerator_get_Current (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_IEnumerator_get_Current(UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel$$get_POOL_SIZE
// il2cpp: int32_t UI_ChatPanel__get_POOL_SIZE (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182236780

int32_t UI_ChatPanel__get_POOL_SIZE(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843471c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_1843471c5 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  iVar1 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
  return iVar1;
}


// UI.ChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ChatPanel__get_ThemePanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x1822367c0

System_String_o * UI_ChatPanel__get_ThemePanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843471c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ChatPanel");
    Il2CppMethodInitialized_1843471c6 = '\x01';
  }
  return "ChatPanel";
}


// UI.ChatPanel$$.cctor
// il2cpp: void UI_ChatPanel___cctor (const MethodInfo* method);
// 0x1822363c0

void UI_ChatPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  System_String_o *key;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843471c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&":([^:\\s]+):");
    il2cpp_codegen_initialize_runtime_metadata(&"<[^>]+>|</[^>]+>");
    Il2CppMethodInitialized_1843471c7 = '\x01';
  }
  local_res10[0] = 0;
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"<[^>]+>|</[^>]+>",8,(MethodInfo *)0x0);
  TypeInfo_UI_ChatPanel->static_fields->_richTextPattern = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel->static_fields->_richTextPattern,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,":([^:\\s]+):",8,(MethodInfo *)0x0);
  TypeInfo_UI_ChatPanel->static_fields->_emojiPattern = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel->static_fields->_emojiPattern,pSVar1);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  TypeInfo_UI_ChatPanel->static_fields->EmojiNameToIndex = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel->static_fields->EmojiNameToIndex,__this_00);
  local_res10[0] = 0;
  do {
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             TypeInfo_UI_ChatPanel->static_fields->EmojiNameToIndex;
    key = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__int___set_Item
              (__this,(Il2CppObject *)key,local_res10[0],
               (MethodInfo_147A820 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    local_res10[0] = local_res10[0] + 1;
  } while (local_res10[0] < 0x8d);
  return;
}


// UI.ChatPanel$$ProcessEmojiCodes
// il2cpp: System_String_o* UI_ChatPanel__ProcessEmojiCodes (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x18222f050

System_String_o *
UI_ChatPanel__ProcessEmojiCodes(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  UI_ChatPanel___c__DisplayClass64_0_o *object;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843471c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass64_0_ProcessEmojiCodes_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass64_0);
    Il2CppMethodInitialized_1843471c8 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass64_0);
  UI_ChatPanel___c__DisplayClass64_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (UI_ChatPanel___c__DisplayClass64_0_o *)0x0) {
    (object->fields).stickerFound = false;
    if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
    }
    __this_00 = TypeInfo_UI_ChatPanel->static_fields->_emojiPattern;
    evaluator = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass64_0_ProcessEmojiCodes_b__0,
               (MethodInfo_16E67D0 *)0x0);
    if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar1 = System_Text_RegularExpressions_Regex__Replace_285dcc0
                         (__this_00,text,evaluator,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$Setup
// il2cpp: void UI_ChatPanel__Setup (UI_ChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182231ee0
// eh: try 0x1822339a0..0x182233a1a -> pad 0x183336e20 catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182233656: mov rax, r12
// asm:   0x18223399c: nop dword ptr [rax]
// asm:   0x182233a2b: mov rdx, qword ptr [rip + 0x1e6d716]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x182233a32: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182233a37: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182233a3c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182233a41: test rcx, rcx
// asm:   0x182233a44: jne 0x182234767
// asm:   0x182233a4a: xor r12d, r12d
// asm:   0x182233a4d: mov rdi, qword ptr [rsp + 0x1f0]
// asm:   0x182233a55: mov r15, qword ptr [rsp + 0x60]
// asm:   0x182233a5a: mov r13, qword ptr [rsp + 0x208]
// asm:   0x182233a62: xorps xmm8, xmm8
// asm:   0x182234767: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183336e20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183336e25: push rbp
// asm:   0x183336e26: sub rsp, 0x30
// asm:   0x183336e2a: mov rbp, rdx
// asm:   0x183336e2d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183336e34: mov rcx, qword ptr [rax]
// asm:   0x183336e37: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183336e3b: movabs rax, 0
// asm:   0x183336e45: add rsp, 0x30
// asm:   0x183336e49: pop rbp
// asm:   0x183336e4a: ret 

void UI_ChatPanel__Setup(UI_ChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar6;
  Settings_UISettings_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  undefined4 uVar16;
  System_String_o *value;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar9;
  Il2CppClass *pIVar10;
  Settings_IntSetting_o *pSVar11;
  UI_ChatPanel_ChatLineView_array *pUVar12;
  Settings_ColorSetting_o *pSVar13;
  Utility_Color255_o *__this_00;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar14;
  Settings_BoolSetting_o *pSVar15;
  MethodInfo *pMVar17;
  Il2CppType *pIVar18;
  bool bVar19;
  int32_t iVar20;
  UnityEngine_RectTransform_o *object;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_UI_InputField_o *__this_01;
  System_Type_array *pSVar22;
  System_Type_o *pSVar23;
  Il2CppObject *pIVar24;
  System_String_o *pSVar25;
  UnityEngine_Transform_o *pUVar26;
  UnityEngine_RectTransform_o *pUVar27;
  UnityEngine_RectTransform_o *pUVar28;
  UnityEngine_Vector2_o UVar29;
  TMPro_TMP_InputField_o *pTVar30;
  UnityEngine_GameObject_o *pUVar31;
  UnityEngine_GameObject_o *pUVar32;
  TMPro_TextMeshProUGUI_o *__this_02;
  TMPro_TextMeshProUGUI_o *pTVar33;
  UnityEngine_CanvasGroup_o *pUVar34;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar35;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar36;
  DG_Tweening_Core_DOSetter_T__o *pDVar37;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_03;
  UnityEngine_UI_RectMask2D_o *x;
  UI_ElementStyle_o *__this_04;
  UnityEngine_UI_ColorBlock_o *pUVar38;
  UnityEngine_Color_o *pUVar39;
  UnityEngine_UI_Image_o *pUVar40;
  UnityEngine_Object_o *obj;
  UnityEngine_UI_VerticalLayoutGroup_o *x_00;
  UnityEngine_UI_ContentSizeFitter_o *x_01;
  UnityEngine_UI_LayoutElement_o *pUVar41;
  System_ValueTuple_string__int__int__o *pSVar42;
  System_ValueTuple_string__int__o *pSVar43;
  Photon_Realtime_Room_o *pPVar44;
  Photon_Realtime_Player_o *target;
  Photon_Realtime_Player_o *pPVar45;
  TMPro_TMP_FontAsset_o *fontAsset;
  UI_ChatPanel_ChatLineView_o *__this_05;
  UI_ChatScrollRect_o *pUVar46;
  UnityEngine_UI_Scrollbar_o *__this_06;
  UnityEngine_Transform_o *pUVar47;
  UnityEngine_EventSystems_EventTrigger_o *__this_07;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar48;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar49;
  int iVar50;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar51;
  undefined1 local_1b8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_1b0;
  Il2CppObject *local_1a8;
  TMPro_TMP_InputField_OnValidateInput_o *local_198;
  undefined8 uStack_190;
  UnityEngine_RectTransform_o *local_188;
  System_String_o *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_160;
  Il2CppObject *local_158;
  UnityEngine_UI_Navigation_o local_148;
  UnityEngine_UI_ColorBlock_o local_118;
  UnityEngine_UI_ColorBlock_o local_b8;
  
  if (Il2CppMethodInitialized_1843471c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnEndEdit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_ChatScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
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
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c_Setup_b__66_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass66_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass66_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass66_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Handle");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"InputTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Press Tab to cycle channels");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    il2cpp_codegen_initialize_runtime_metadata(&"TMPInputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Text Area");
    il2cpp_codegen_initialize_runtime_metadata(&"InputSelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Sliding Area");
    Il2CppMethodInitialized_1843471c9 = '\x01';
  }
  local_168 = (undefined1  [8])0x0;
  pUStack_160 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_158 = (Il2CppObject *)0x0;
  object = (UnityEngine_RectTransform_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass66_0);
  local_188 = object;
  UI_ChatPanel___c__DisplayClass66_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar21 = UnityEngine_Transform__Find(pUVar21,"InputField",(MethodInfo *)0x0),
     pUVar21 != (UnityEngine_Transform_o *)0x0)) {
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar21,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
    local_1b8 = (undefined1  [8])__this_01;
    pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
    pIVar18 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar23 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar18,(MethodInfo *)0x0);
    if (pSVar22 != (System_Type_array *)0x0) {
      if ((pSVar23 != (System_Type_o *)0x0) &&
         (pIVar24 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
         pIVar24 == (Il2CppObject *)0x0)) {
        pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
      }
      if ((int)pSVar22->max_length != 0) {
        pSVar22->m_Items[0] = pSVar23;
        Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
        pSVar23 = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TMP_InputField,(MethodInfo *)0x0);
        if ((pSVar23 != (System_Type_o *)0x0) &&
           (pIVar24 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar23,(((pSVar22->obj).klass)->_1).element_class),
           pIVar24 == (Il2CppObject *)0x0)) {
          pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar22->max_length) {
          pSVar22->m_Items[1] = pSVar23;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1,pSVar23);
          pSVar25 = (System_String_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          local_178 = pSVar25;
          UnityEngine_GameObject___ctor_2f1abe0
                    ((UnityEngine_GameObject_o *)pSVar25,"TMPInputField",pSVar22,(MethodInfo *)0x0);
          if (pSVar25 != (System_String_o *)0x0) {
            pUVar21 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0);
            pUVar26 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
               (UnityEngine_Transform__SetParent_2f5a7e0(pUVar21,pUVar26,false,(MethodInfo *)0x0),
               __this_01 != (UnityEngine_UI_InputField_o *)0x0)) {
              pUVar27 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_01,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              pUVar28 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pSVar25,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if ((pUVar27 != (UnityEngine_RectTransform_o *)0x0) &&
                 (UVar29 = UnityEngine_RectTransform__get_anchorMin(pUVar27,(MethodInfo *)0x0),
                 pUVar28 != (UnityEngine_RectTransform_o *)0x0)) {
                UnityEngine_RectTransform__set_anchorMin(pUVar28,UVar29,(MethodInfo *)0x0);
                UVar29 = UnityEngine_RectTransform__get_anchorMax(pUVar27,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchorMax(pUVar28,UVar29,(MethodInfo *)0x0);
                UVar29 = UnityEngine_RectTransform__get_pivot(pUVar27,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_pivot(pUVar28,UVar29,(MethodInfo *)0x0);
                UVar29 = UnityEngine_RectTransform__get_sizeDelta(pUVar27,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_sizeDelta(pUVar28,UVar29,(MethodInfo *)0x0);
                UVar29 = UnityEngine_RectTransform__get_anchoredPosition(pUVar27,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchoredPosition(pUVar28,UVar29,(MethodInfo *)0x0);
                pTVar30 = UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar25,
                                     (MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
                (__this->fields)._inputField = pTVar30;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._inputField,pTVar30);
                pTVar30 = (__this->fields)._inputField;
                if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__set_characterLimit(pTVar30,500,(MethodInfo *)0x0);
                  pSVar22 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
                  pSVar23 = System_Type__GetTypeFromHandle
                                      ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                       (MethodInfo *)0x0);
                  if (pSVar22 != (System_Type_array *)0x0) {
                    if ((pSVar23 != (System_Type_o *)0x0) &&
                       (pIVar24 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)pSVar23,
                                             (((pSVar22->obj).klass)->_1).element_class),
                       pIVar24 == (Il2CppObject *)0x0)) {
                      pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                    }
                    if ((int)pSVar22->max_length == 0) goto label_1822347c5;
                    pSVar22->m_Items[0] = pSVar23;
                    Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                    pUVar31 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                    UnityEngine_GameObject___ctor_2f1abe0
                              (pUVar31,"Text Area",pSVar22,(MethodInfo *)0x0);
                    if (pUVar31 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar21 = UnityEngine_GameObject__get_transform(pUVar31,(MethodInfo *)0x0);
                      pUVar26 = UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0);
                      if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                        UnityEngine_Transform__SetParent_2f5a7e0(pUVar21,pUVar26,false,(MethodInfo *)0x0);
                        pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar31,(MethodInfo_6F5650 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                            );
                        if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
                        }
                        if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchorMin
                                    (pUVar27,(UnityEngine_Vector2_o)
                                             (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretchStart
                                             ).fields,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMax
                                    (pUVar27,(UnityEngine_Vector2_o)
                                             (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->FullStretch).
                                             fields,(MethodInfo *)0x0);
                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                          }
                          UnityEngine_RectTransform__set_sizeDelta
                                    (pUVar27,(UnityEngine_Vector2_o)
                                             (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                     (MethodInfo *)0x0);
                          UnityEngine_GameObject__AddComponent_object_
                                    (pUVar31,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
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
                              pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                            }
                            if ((int)pSVar22->max_length != 0) {
                              pSVar22->m_Items[0] = pSVar23;
                              Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                              pSVar23 = System_Type__GetTypeFromHandle
                                                  ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,
                                                   (MethodInfo *)0x0);
                              if ((pSVar23 != (System_Type_o *)0x0) &&
                                 (pIVar24 = il2cpp_vm_Object_IsInst
                                                      ((Il2CppObject *)pSVar23,
                                                       (((pSVar22->obj).klass)->_1).element_class),
                                 pIVar24 == (Il2CppObject *)0x0)) {
                                pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                              }
                              if (1 < (uint)pSVar22->max_length) {
                                pSVar22->m_Items[1] = pSVar23;
                                Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1,pSVar23);
                                pUVar32 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                UnityEngine_GameObject___ctor_2f1abe0
                                          (pUVar32,"Text",pSVar22,(MethodInfo *)0x0);
                                if (pUVar32 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar21 = UnityEngine_GameObject__get_transform(pUVar32,(MethodInfo *)0x0);
                                  pUVar26 = UnityEngine_GameObject__get_transform(pUVar31,(MethodInfo *)0x0);
                                  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_2f5a7e0
                                              (pUVar21,pUVar26,false,(MethodInfo *)0x0);
                                    pUVar28 = UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar32,(MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                    if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (pUVar28,(UnityEngine_Vector2_o)
                                                         (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->
                                                         FullStretchStart).fields,(MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_anchorMax
                                                (pUVar28,(UnityEngine_Vector2_o)
                                                         (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->
                                                         FullStretch).fields,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_18433e3c9 = '\x01';
                                      }
                                      UnityEngine_RectTransform__set_sizeDelta
                                                (pUVar28,(UnityEngine_Vector2_o)
                                                         (TypeInfo_UnityEngine_Vector2->static_fields->
                                                         zeroVector).fields,(MethodInfo *)0x0);
                                      __this_02 = UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar32,(MethodInfo_6F5650 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                      if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                        TMPro_TMP_Text__set_enableWordWrapping
                                                  ((TMPro_TMP_Text_o *)__this_02,false,(MethodInfo *)0x0);
                                        TMPro_TMP_Text__set_richText
                                                  ((TMPro_TMP_Text_o *)__this_02,false,(MethodInfo *)0x0);
                                        TMPro_TMP_Text__set_overflowMode
                                                  ((TMPro_TMP_Text_o *)__this_02,4,(MethodInfo *)0x0);
                                        TMPro_TMP_Text__set_horizontalAlignment
                                                  ((TMPro_TMP_Text_o *)__this_02,1,(MethodInfo *)0x0);
                                        TMPro_TMP_Text__set_verticalAlignment
                                                  ((TMPro_TMP_Text_o *)__this_02,0x200,(MethodInfo *)0x0);
                                        TMPro_TMP_Text__set_fontSize
                                                  ((TMPro_TMP_Text_o *)__this_02,20.0,(MethodInfo *)0x0);
                                        pTVar30 = (__this->fields)._inputField;
                                        if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                          TMPro_TMP_InputField__set_textViewport
                                                    (pTVar30,pUVar27,(MethodInfo *)0x0);
                                          pTVar30 = (__this->fields)._inputField;
                                          if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                            TMPro_TMP_InputField__set_textComponent
                                                      (pTVar30,(TMPro_TMP_Text_o *)__this_02,(MethodInfo *)0x0
                                                      );
                                            pSVar22 = (System_Type_array *)
                                                      SZArrayNew(TypeInfo_System_Type_array,3);
                                            pSVar23 = System_Type__GetTypeFromHandle
                                                                ((System_RuntimeTypeHandle_o)
                                                                 TypeRef_UnityEngine_RectTransform,
                                                                 (MethodInfo *)0x0);
                                            if (pSVar22 != (System_Type_array *)0x0) {
                                              if ((pSVar23 != (System_Type_o *)0x0) &&
                                                 (pIVar24 = il2cpp_vm_Object_IsInst
                                                                      ((Il2CppObject *)pSVar23,
                                                                       (((pSVar22->obj).klass)->_1).
                                                                       element_class),
                                                 pIVar24 == (Il2CppObject *)0x0)) {
                                                pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                                              }
                                              if ((int)pSVar22->max_length != 0) {
                                                pSVar22->m_Items[0] = pSVar23;
                                                Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                                                pSVar23 = System_Type__GetTypeFromHandle
                                                                    ((System_RuntimeTypeHandle_o)
                                                                     TypeRef_TMPro_TextMeshProUGUI,
                                                                     (MethodInfo *)0x0);
                                                if ((pSVar23 != (System_Type_o *)0x0) &&
                                                   (pIVar24 = il2cpp_vm_Object_IsInst
                                                                        ((Il2CppObject *)pSVar23,
                                                                         (((pSVar22->obj).klass)->_1).
                                                                         element_class),
                                                   pIVar24 == (Il2CppObject *)0x0)) {
                                                  pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception()
                                                  ;
                                                  il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                                                }
                                                if (1 < (uint)pSVar22->max_length) {
                                                  pSVar22->m_Items[1] = pSVar23;
                                                  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1,pSVar23);
                                                  pSVar23 = System_Type__GetTypeFromHandle
                                                                      ((System_RuntimeTypeHandle_o)
                                                                       TypeRef_UnityEngine_CanvasGroup,
                                                                       (MethodInfo *)0x0);
                                                  if ((pSVar23 != (System_Type_o *)0x0) &&
                                                     (pIVar24 = il2cpp_vm_Object_IsInst
                                                                          ((Il2CppObject *)pSVar23,
                                                                           (((pSVar22->obj).klass)->_1).
                                                                           element_class),
                                                     pIVar24 == (Il2CppObject *)0x0)) {
                                                    pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception
                                                                        ();
                                                    il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
                                                  }
                                                  if (2 < (uint)pSVar22->max_length) {
                                                    pSVar22->m_Items[2] = pSVar23;
                                                    Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 2,pSVar23);
                                                    pUVar32 = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)
                                                                         TypeInfo_UnityEngine_GameObject);
                                                    UnityEngine_GameObject___ctor_2f1abe0
                                                              (pUVar32,"Placeholder",pSVar22,
                                                               (MethodInfo *)0x0);
                                                    if (pUVar32 != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar21 = UnityEngine_GameObject__get_transform
                                                                          (pUVar32,(MethodInfo *)0x0);
                                                      pUVar26 = UnityEngine_GameObject__get_transform
                                                                          (pUVar31,(MethodInfo *)0x0);
                                                      if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                                        UnityEngine_Transform__SetParent_2f5a7e0
                                                                  (pUVar21,pUVar26,false,(MethodInfo *)0x0);
                                                        pUVar28 = UnityEngine_GameObject__GetComponent_object_
                                                                            (pUVar32,(MethodInfo_6F5650 *)
                                                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar28,(UnityEngine_Vector2_o)
                                                                            (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                             static_fields->FullStretchStart).
                                                                            fields,(MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar28,(UnityEngine_Vector2_o)
                                                                            (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                             static_fields->FullStretch).
                                                                            fields,(MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_offsetMin
                                                                   (pUVar28,(UnityEngine_Vector2_o)
                                                                            0xc000000000000000,
                                                                    (MethodInfo *)0x0);
                                                         if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&TypeInfo_UnityEngine_Vector2);
                                                           Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                         }
                                                         UnityEngine_RectTransform__set_offsetMax
                                                                   (pUVar28,(UnityEngine_Vector2_o)
                                                                            (TypeInfo_UnityEngine_Vector2->
                                                                             static_fields->zeroVector).fields
                                                                    ,(MethodInfo *)0x0);
                                                         pTVar33 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar32,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                       (__this->fields)._placeholderText = pTVar33;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._placeholderText,pTVar33);
                                                       pTVar33 = (__this->fields)._placeholderText;
                                                       if (pTVar33 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                         (*(pTVar33->klass->vtable)._66_set_text.methodPtr)
                                                                   (pTVar33,"Press Tab to cycle channels",
                                                                    (pTVar33->klass->vtable)._66_set_text.
                                                                    method);
                                                         pTVar33 = (__this->fields)._placeholderText;
                                                         if (pTVar33 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                           TMPro_TMP_Text__set_fontSize
                                                                     ((TMPro_TMP_Text_o *)pTVar33,18.0,
                                                                      (MethodInfo *)0x0);
                                                           pTVar33 = (__this->fields)._placeholderText;
                                                           if (pTVar33 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                             TMPro_TMP_Text__set_enableWordWrapping
                                                                       ((TMPro_TMP_Text_o *)pTVar33,false,
                                                                        (MethodInfo *)0x0);
                                                             pTVar33 = (__this->fields)._placeholderText;
                                                             if (pTVar33 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                               TMPro_TMP_Text__set_horizontalAlignment
                                                                         ((TMPro_TMP_Text_o *)pTVar33,1,
                                                                          (MethodInfo *)0x0);
                                                               pTVar33 = (__this->fields)._placeholderText;
                                                               if (pTVar33 != (TMPro_TextMeshProUGUI_o *)0x0)
                                                               {
                                                                 TMPro_TMP_Text__set_verticalAlignment
                                                                           ((TMPro_TMP_Text_o *)pTVar33,0x200,
                                                                            (MethodInfo *)0x0);
                                                                 pTVar33 = (__this->fields)._placeholderText;
                                                                 if (pTVar33 != (TMPro_TextMeshProUGUI_o *)0x0
                                                                    ) {
                                                                   local_198 = (
                                                       TMPro_TMP_InputField_OnValidateInput_o *)
                                                       0x3f8000003f800000;
                                                       uStack_190._0_4_ = 1.0;
                                                       uStack_190._4_4_ = 0.3;
                                                       (*(pTVar33->klass->vtable)._23_set_color.methodPtr)
                                                                 (pTVar33,(UnityEngine_Color_o *)&local_198,
                                                                  (pTVar33->klass->vtable)._23_set_color.
                                                                  method);
                                                       pUVar34 = UnityEngine_GameObject__GetComponent_object_
                                                                           (pUVar32,(MethodInfo_6F5650 *)
                                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup
                                                       );
                                                       (__this->fields)._placeholderCanvasGroup = pUVar34;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._placeholderCanvasGroup,
                                                                  pUVar34);
                                                       pUVar34 = (__this->fields)._placeholderCanvasGroup;
                                                       if (pUVar34 != (UnityEngine_CanvasGroup_o *)0x0) {
                                                         UnityEngine_CanvasGroup__set_alpha
                                                                   (pUVar34,0.0,(MethodInfo *)0x0);
                                                         pUVar34 = (__this->fields)._placeholderCanvasGroup;
                                                         if (pUVar34 != (UnityEngine_CanvasGroup_o *)0x0) {
                                                           UnityEngine_CanvasGroup__set_blocksRaycasts
                                                                     (pUVar34,false,(MethodInfo *)0x0);
                                                           pTVar30 = (__this->fields)._inputField;
                                                           if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                             TMPro_TMP_InputField__set_lineType
                                                                       (pTVar30,0,(MethodInfo *)0x0);
                                                             pTVar30 = (__this->fields)._inputField;
                                                             if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                               TMPro_TMP_InputField__set_richText
                                                                         (pTVar30,false,(MethodInfo *)0x0);
                                                               pTVar30 = (__this->fields)._inputField;
                                                               if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                                 TMPro_TMP_InputField__set_inputType
                                                                           (pTVar30,0,(MethodInfo *)0x0);
                                                                 pTVar30 = (__this->fields)._inputField;
                                                                 if (pTVar30 != (TMPro_TMP_InputField_o *)0x0)
                                                                 {
                                                                   TMPro_TMP_InputField__set_scrollSensitivity
                                                                             (pTVar30,60.0,(MethodInfo *)0x0);
                                                                   pTVar30 = (__this->fields)._inputField;
                                                                   if (pTVar30 !=
                                                                       (TMPro_TMP_InputField_o *)0x0) {
                                                                     local_198 = (pTVar30->fields).
                                                                                 m_OnValidateInput;
                                                                     if ((TypeInfo_UI_ChatPanel_c->_2).
                                                                         cctor_finished_or_no_cctor == 0) {
                                                                       il2cpp_codegen_runtime_class_init
                                                                                 ((Il2CppClass *)
                                                                                  TypeInfo_UI_ChatPanel_c);
                                                                     }
                                                                     pTVar35 = TypeInfo_UI_ChatPanel_c->
                                                                               static_fields->__9__66_2;
                                                                     if (pTVar35 ==
                                                                         (
                                                       TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
                                                         if ((TypeInfo_UI_ChatPanel_c->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
                                                         }
                                                         pIVar24 = (Il2CppObject *)
                                                                   TypeInfo_UI_ChatPanel_c->static_fields->__9
                                                         ;
                                                         pTVar35 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_TMPro_TMP_InputField_OnValidateInput);
                                                       UnityEngine_UI_InputField_OnValidateInput___ctor
                                                                 ((UnityEngine_UI_InputField_OnValidateInput_o
                                                                   *)pTVar35,pIVar24,
                                                                  (intptr_t)
                                                                  MethodInfo_UI_ChatPanel_c_Setup_b__66_2,
                                                                  (MethodInfo *)0x0);
                                                       TypeInfo_UI_ChatPanel_c->static_fields->__9__66_2 =
                                                            pTVar35;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&TypeInfo_UI_ChatPanel_c->static_fields->
                                                                   __9__66_2,pTVar35);
                                                       }
                                                       pTVar36 = (TMPro_TMP_InputField_OnValidateInput_o *)
                                                                 System_Delegate__Combine
                                                                           ((System_Delegate_o *)local_198,
                                                                            (System_Delegate_o *)pTVar35,
                                                                            (MethodInfo *)0x0);
                                                       pTVar51 = (TMPro_TMP_InputField_OnValidateInput_o *)0x0
                                                       ;
                                                       pTVar35 = pTVar51;
                                                       if (pTVar36 !=
                                                           (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
                                                         if (pTVar36->klass ==
                                                             TypeInfo_TMPro_TMP_InputField_OnValidateInput) {
                                                           pTVar35 = pTVar36;
                                                         }
                                                         if (pTVar35 ==
                                                             (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
                                                           il2cpp_codegen_raise_invalid_cast_exception
                                                                     (pTVar36,
                                                       TypeInfo_TMPro_TMP_InputField_OnValidateInput);
                                                       }
                                                       }
                                                       TMPro_TMP_InputField__set_onValidateInput
                                                                 (pTVar30,pTVar35,(MethodInfo *)0x0);
                                                       pTVar30 = (__this->fields)._inputField;
                                                       if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                         (pTVar30->fields).m_OnFocusSelectAll = false;
                                                         pTVar30 = (__this->fields)._inputField;
                                                         if ((pTVar30 != (TMPro_TMP_InputField_o *)0x0) &&
                                                            (pTVar30 != (TMPro_TMP_InputField_o *)0x0)) {
                                                           local_148.fields.m_Mode = 0;
                                                           local_148.fields._4_8_ =
                                                                *(undefined8 *)
                                                                 &(pTVar30->fields).m_Navigation.fields.
                                                                  m_WrapAround;
                                                           local_148.fields._12_8_ =
                                                                *(undefined8 *)
                                                                 ((longlong)
                                                                  &(pTVar30->fields).m_Navigation.fields.
                                                                   m_SelectOnUp + 4);
                                                           local_148.fields._20_8_ =
                                                                *(undefined8 *)
                                                                 ((longlong)
                                                                  &(pTVar30->fields).m_Navigation.fields.
                                                                   m_SelectOnDown + 4);
                                                           local_148.fields._28_8_ =
                                                                *(undefined8 *)
                                                                 ((longlong)
                                                                  &(pTVar30->fields).m_Navigation.fields.
                                                                   m_SelectOnLeft + 4);
                                                           local_148.fields.m_SelectOnRight._4_4_ =
                                                                *(undefined4 *)
                                                                 ((longlong)
                                                                  &(pTVar30->fields).m_Navigation.fields.
                                                                   m_SelectOnRight + 4);
                                                           UnityEngine_UI_Selectable__set_navigation
                                                                     ((UnityEngine_UI_Selectable_o *)pTVar30,
                                                                      &local_148,(MethodInfo *)0x0);
                                                           pTVar30 = (__this->fields)._inputField;
                                                           if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                             pUVar6 = (
                                                       UnityEngine_Events_UnityEvent_Vector2__o *)
                                                       (pTVar30->fields).m_OnValueChanged;
                                                       pDVar37 = (DG_Tweening_Core_DOSetter_T__o *)
                                                                 il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction_string);
                                                       UnityEngine_Events_UnityAction_object____ctor
                                                                 (pDVar37,(Il2CppObject *)__this,
                                                                  (intptr_t)
                                                                  MethodInfo_UI_ChatPanel_OnValueChanged,
                                                                  (MethodInfo_EB6EC0 *)0x0);
                                                       if (pUVar6 != (UnityEngine_Events_UnityEvent_Vector2__o
                                                                      *)0x0) {
                                                         UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                                   (pUVar6,(
                                                       UnityEngine_Events_UnityAction_T0__o *)pDVar37,
                                                       (MethodInfo_EBBB50 *)
                                                       MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener
                                                       );
                                                       pTVar30 = (__this->fields)._inputField;
                                                       if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                         pUVar6 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                                                  (pTVar30->fields).m_OnEndEdit;
                                                         pDVar37 = (DG_Tweening_Core_DOSetter_T__o *)
                                                                   il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction_string);
                                                       UnityEngine_Events_UnityAction_object____ctor
                                                                 (pDVar37,(Il2CppObject *)__this,
                                                                  (intptr_t)MethodInfo_UI_ChatPanel_OnEndEdit,
                                                                  (MethodInfo_EB6EC0 *)0x0);
                                                       if (pUVar6 != (UnityEngine_Events_UnityEvent_Vector2__o
                                                                      *)0x0) {
                                                         UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                                   (pUVar6,(
                                                       UnityEngine_Events_UnityAction_T0__o *)pDVar37,
                                                       (MethodInfo_EBBB50 *)
                                                       MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener
                                                       );
                                                       __this_03 = (
                                                       UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                                                       il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)TypeInfo_System_Action_int);
                                                       System_Action_int____ctor
                                                                 (__this_03,(Il2CppObject *)__this,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated
                                                       ,(MethodInfo *)0x0);
                                                       if ((TypeInfo_GameManagers_InGameManager->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_GameManagers_InGameManager);
                                                       }
                                                       GameManagers_InGameManager__add_PlayerInfoUpdated
                                                                 ((System_Action_int__o *)__this_03,
                                                                  (MethodInfo *)0x0);
                                                       pTVar30 = (__this->fields)._inputField;
                                                       if ((pTVar30 != (TMPro_TMP_InputField_o *)0x0) &&
                                                          (pUVar28 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pTVar30,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       ), pUVar28 != (UnityEngine_RectTransform_o *)0x0)) {
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar28,(UnityEngine_Vector2_o)
                                                                            0x41f0000000000000,
                                                                    (MethodInfo *)0x0);
                                                         x = UnityEngine_GameObject__GetComponent_object_
                                                                       (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D
                                                       );
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar19 = UnityEngine_Object__op_Equality
                                                                          ((UnityEngine_Object_o *)x,
                                                                           (UnityEngine_Object_o *)0x0,
                                                                           (MethodInfo *)0x0);
                                                       if (bVar19) {
                                                         UnityEngine_GameObject__AddComponent_object_
                                                                   (pUVar31,(MethodInfo_6F4D60 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D
                                                       );
                                                       }
                                                       UnityEngine_RectTransform__set_offsetMin
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          0x4000000040a00000,(MethodInfo *)0x0
                                                                 );
                                                       UnityEngine_RectTransform__set_offsetMax
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          0xc0000000c2200000,(MethodInfo *)0x0
                                                                 );
                                                       pSVar25 = (*(__this->klass->vtable)._4_get_ThemePanel.
                                                                   methodPtr)(__this,(__this->klass->vtable).
                                                                                     _4_get_ThemePanel.method)
                                                       ;
                                                       __this_04 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UI_ElementStyle);
                                                       UI_ElementStyle___ctor
                                                                 (__this_04,0x14,120.0,20.0,pSVar25,
                                                                  (MethodInfo *)0x0);
                                                       if (__this_04 != (UI_ElementStyle_o *)0x0) {
                                                         pSVar25 = (__this_04->fields).ThemePanel;
                                                         if ((TypeInfo_UI_UIManager->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                         }
                                                         pUVar38 = UI_UIManager__GetThemeColorBlock
                                                                             (&local_b8,pSVar25,
                                                                              "InputField",
                                                                              "Input",
                                                                              "DefaultPanel",
                                                                              (MethodInfo *)0x0);
                                                         pTVar30 = (__this->fields)._inputField;
                                                         if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                           local_118.fields.m_NormalColor.fields.r =
                                                                (pUVar38->fields).m_NormalColor.fields.r;
                                                           local_118.fields.m_NormalColor.fields.g =
                                                                (pUVar38->fields).m_NormalColor.fields.g;
                                                           local_118.fields.m_NormalColor.fields.b =
                                                                (pUVar38->fields).m_NormalColor.fields.b;
                                                           local_118.fields.m_NormalColor.fields.a =
                                                                (pUVar38->fields).m_NormalColor.fields.a;
                                                           local_118.fields.m_HighlightedColor.fields.r =
                                                                (pUVar38->fields).m_HighlightedColor.fields.r;
                                                           local_118.fields.m_HighlightedColor.fields.g =
                                                                (pUVar38->fields).m_HighlightedColor.fields.g;
                                                           local_118.fields.m_HighlightedColor.fields.b =
                                                                (pUVar38->fields).m_HighlightedColor.fields.b;
                                                           local_118.fields.m_HighlightedColor.fields.a =
                                                                (pUVar38->fields).m_HighlightedColor.fields.a;
                                                           local_118.fields.m_PressedColor.fields.r =
                                                                (pUVar38->fields).m_PressedColor.fields.r;
                                                           local_118.fields.m_PressedColor.fields.g =
                                                                (pUVar38->fields).m_PressedColor.fields.g;
                                                           local_118.fields.m_PressedColor.fields.b =
                                                                (pUVar38->fields).m_PressedColor.fields.b;
                                                           local_118.fields.m_PressedColor.fields.a =
                                                                (pUVar38->fields).m_PressedColor.fields.a;
                                                           local_118.fields.m_SelectedColor.fields.r =
                                                                (pUVar38->fields).m_SelectedColor.fields.r;
                                                           local_118.fields.m_SelectedColor.fields.g =
                                                                (pUVar38->fields).m_SelectedColor.fields.g;
                                                           local_118.fields.m_SelectedColor.fields.b =
                                                                (pUVar38->fields).m_SelectedColor.fields.b;
                                                           local_118.fields.m_SelectedColor.fields.a =
                                                                (pUVar38->fields).m_SelectedColor.fields.a;
                                                           local_118.fields.m_DisabledColor.fields.r =
                                                                (pUVar38->fields).m_DisabledColor.fields.r;
                                                           local_118.fields.m_DisabledColor.fields.g =
                                                                (pUVar38->fields).m_DisabledColor.fields.g;
                                                           local_118.fields.m_DisabledColor.fields.b =
                                                                (pUVar38->fields).m_DisabledColor.fields.b;
                                                           local_118.fields.m_DisabledColor.fields.a =
                                                                (pUVar38->fields).m_DisabledColor.fields.a;
                                                           local_118.fields.m_ColorMultiplier =
                                                                (pUVar38->fields).m_ColorMultiplier;
                                                           local_118.fields.m_FadeDuration =
                                                                (pUVar38->fields).m_FadeDuration;
                                                           UnityEngine_UI_Selectable__set_colors
                                                                     ((UnityEngine_UI_Selectable_o *)pTVar30,
                                                                      &local_118,(MethodInfo *)0x0);
                                                           pUVar39 = UI_UIManager__GetThemeColor
                                                                               ((UnityEngine_Color_o *)
                                                                                &local_198,
                                                                                (__this_04->fields).ThemePanel
                                                                                ,"InputField",
                                                                                "InputTextColor",
                                                                                "DefaultPanel",
                                                                                (MethodInfo *)0x0);
                                                           local_198 = *(
                                                       TMPro_TMP_InputField_OnValidateInput_o **)
                                                       &pUVar39->fields;
                                                       uStack_190._0_4_ = (pUVar39->fields).b;
                                                       uStack_190._4_4_ = (pUVar39->fields).a;
                                                       (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                                                 (__this_02,(UnityEngine_Color_o *)&local_198,
                                                                  (__this_02->klass->vtable)._23_set_color.
                                                                  method);
                                                       pTVar30 = (__this->fields)._inputField;
                                                       pUVar39 = UI_UIManager__GetThemeColor
                                                                           ((UnityEngine_Color_o *)&local_198,
                                                                            (__this_04->fields).ThemePanel,
                                                                            "InputField",
                                                                            "InputSelectionColor",
                                                                            "DefaultPanel",
                                                                            (MethodInfo *)0x0);
                                                       if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                         local_198 = *(TMPro_TMP_InputField_OnValidateInput_o
                                                                       **)&pUVar39->fields;
                                                         uStack_190._0_4_ = (pUVar39->fields).b;
                                                         uStack_190._4_4_ = (pUVar39->fields).a;
                                                         TMPro_TMP_InputField__set_selectionColor
                                                                   (pTVar30,(UnityEngine_Color_o *)&local_198,
                                                                    (MethodInfo *)0x0);
                                                         pSVar22 = (System_Type_array *)
                                                                   SZArrayNew(TypeInfo_System_Type_array,2);
                                                         pIVar18 = TypeRef_UnityEngine_RectTransform;
                                                         if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor ==
                                                             0) {
                                                           il2cpp_codegen_runtime_class_init(g_data_184354ea0);
                                                         }
                                                         pSVar23 = System_Type__GetTypeFromHandle
                                                                             ((System_RuntimeTypeHandle_o)
                                                                              pIVar18,(MethodInfo *)0x0);
                                                         if (pSVar22 != (System_Type_array *)0x0) {
                                                           if ((pSVar23 != (System_Type_o *)0x0) &&
                                                              (pIVar24 = il2cpp_vm_Object_IsInst
                                                                                   ((Il2CppObject *)pSVar23,
                                                                                    (((pSVar22->obj).klass)->
                                                                                    _1).element_class),
                                                              pIVar24 == (Il2CppObject *)0x0)) {
                                                             pIVar24 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar24,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pSVar22->max_length != 0) {
                                                         pSVar22->m_Items[0] = pSVar23;
                                                         Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                                                         pSVar23 = System_Type__GetTypeFromHandle
                                                                             ((System_RuntimeTypeHandle_o)
                                                                              TypeRef_UnityEngine_UI_Image,
                                                                              (MethodInfo *)0x0);
                                                         if ((pSVar23 != (System_Type_o *)0x0) &&
                                                            (pIVar24 = il2cpp_vm_Object_IsInst
                                                                                 ((Il2CppObject *)pSVar23,
                                                                                  (((pSVar22->obj).klass)->_1)
                                                                                  .element_class),
                                                            pIVar24 == (Il2CppObject *)0x0)) {
                                                           pIVar24 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar24,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pSVar22->max_length) {
                                                         pSVar22->m_Items[1] = pSVar23;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pSVar22->m_Items + 1,pSVar23);
                                                         pUVar31 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar31,"Background",pSVar22,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar31 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar21 = UnityEngine_GameObject__get_transform
                                                                               (pUVar31,(MethodInfo *)0x0);
                                                           pUVar26 = UnityEngine_GameObject__get_transform
                                                                               ((UnityEngine_GameObject_o *)
                                                                                local_178,(MethodInfo *)0x0);
                                                           if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_2f5a7e0
                                                                       (pUVar21,pUVar26,false,
                                                                        (MethodInfo *)0x0);
                                                             pUVar21 = UnityEngine_GameObject__get_transform
                                                                                 (pUVar31,(MethodInfo *)0x0);
                                                             if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                                               UnityEngine_Transform__SetAsFirstSibling
                                                                         (pUVar21,(MethodInfo *)0x0);
                                                               pUVar27 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_UI_ChatPanel_UIAnchors);
                                                       }
                                                       if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar27,(UnityEngine_Vector2_o)
                                                                            (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                             static_fields->FullStretchStart).
                                                                            fields,(MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar27,(UnityEngine_Vector2_o)
                                                                            (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                             static_fields->FullStretch).
                                                                            fields,(MethodInfo *)0x0);
                                                         if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&TypeInfo_UnityEngine_Vector2);
                                                           Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                         }
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar27,(UnityEngine_Vector2_o)
                                                                            (TypeInfo_UnityEngine_Vector2->
                                                                             static_fields->zeroVector).fields
                                                                    ,(MethodInfo *)0x0);
                                                         pUVar40 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                                                       if (pUVar40 != (UnityEngine_UI_Image_o *)0x0) {
                                                         local_178 = (System_String_o *)0x3dcccccd3dcccccd;
                                                         uStack_170._0_4_ = 0.1;
                                                         uStack_170._4_4_ = 0.6;
                                                         (*(pUVar40->klass->vtable)._23_set_color.methodPtr)
                                                                   (pUVar40,(UnityEngine_Color_o *)&local_178,
                                                                    (pUVar40->klass->vtable)._23_set_color.
                                                                    method);
                                                         obj = (UnityEngine_Object_o *)
                                                               UnityEngine_Component__get_gameObject
                                                                         ((UnityEngine_Component_o *)local_1b8
                                                                          ,(MethodInfo *)0x0);
                                                         if ((TypeInfo_UnityEngine_Object->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Object);
                                                         }
                                                         UnityEngine_Object__Destroy_2f1ff70
                                                                   (obj,(MethodInfo *)0x0);
                                                         pUVar21 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
                                                            (pUVar21 = UnityEngine_Transform__Find
                                                                                 (pUVar21,
                                                       "Content/Panel",(MethodInfo *)0x0),
                                                       pUVar21 != (UnityEngine_Transform_o *)0x0)) {
                                                         pUVar31 = UnityEngine_Component__get_gameObject
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar21,(MethodInfo *)0x0);
                                                         (__this->fields)._panel = pUVar31;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(__this->fields)._panel,pUVar31);
                                                         pUVar31 = (__this->fields)._panel;
                                                         if (pUVar31 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar27 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       (__this->fields)._chatPanelRect = pUVar27;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._chatPanelRect,pUVar27);
                                                       if (Il2CppMethodInitialized_1843471dc == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter
                                                       );
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup
                                                       );
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&TypeInfo_UnityEngine_Object);
                                                       Il2CppMethodInitialized_1843471dc = '\x01';
                                                       }
                                                       pUVar31 = (__this->fields)._panel;
                                                       if (pUVar31 != (UnityEngine_GameObject_o *)0x0) {
                                                         x_00 = UnityEngine_GameObject__GetComponent_object_
                                                                          (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup
                                                       );
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar19 = UnityEngine_Object__op_Inequality
                                                                          ((UnityEngine_Object_o *)x_00,
                                                                           (UnityEngine_Object_o *)0x0,
                                                                           (MethodInfo *)0x0);
                                                       if (bVar19) {
                                                         if (x_00 == (UnityEngine_UI_VerticalLayoutGroup_o *)
                                                                     0x0) goto label_1822346c1;
                                                         UnityEngine_Behaviour__set_enabled
                                                                   ((UnityEngine_Behaviour_o *)x_00,false,
                                                                    (MethodInfo *)0x0);
                                                       }
                                                       pUVar31 = (__this->fields)._panel;
                                                       if (pUVar31 != (UnityEngine_GameObject_o *)0x0) {
                                                         x_01 = UnityEngine_GameObject__GetComponent_object_
                                                                          (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter
                                                       );
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar19 = UnityEngine_Object__op_Inequality
                                                                          ((UnityEngine_Object_o *)x_01,
                                                                           (UnityEngine_Object_o *)0x0,
                                                                           (MethodInfo *)0x0);
                                                       if (bVar19) {
                                                         if (x_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0
                                                            ) goto label_1822346c1;
                                                         UnityEngine_Behaviour__set_enabled
                                                                   ((UnityEngine_Behaviour_o *)x_01,false,
                                                                    (MethodInfo *)0x0);
                                                       }
                                                       pTVar30 = (__this->fields)._inputField;
                                                       if (pTVar30 != (TMPro_TMP_InputField_o *)0x0) {
                                                         pUVar27 = UnityEngine_Component__GetComponent_object_
                                                                             ((UnityEngine_Component_o *)
                                                                              pTVar30,(MethodInfo_6651A0 *)
                                                                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       (__this->fields)._inputFieldRect = pUVar27;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._inputFieldRect,pUVar27);
                                                       pUVar21 = UnityEngine_Component__get_transform
                                                                           ((UnityEngine_Component_o *)__this,
                                                                            (MethodInfo *)0x0);
                                                       if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
                                                          (pUVar21 = UnityEngine_Transform__Find
                                                                               (pUVar21,"Content",
                                                                                (MethodInfo *)0x0),
                                                          pUVar21 != (UnityEngine_Transform_o *)0x0)) {
                                                         pUVar27 = UnityEngine_Component__GetComponent_object_
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar21,(MethodInfo_6651A0 *)
                                                                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       (__this->fields)._contentRect = pUVar27;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._contentRect,pUVar27);
                                                       pUVar21 = UnityEngine_Component__get_transform
                                                                           ((UnityEngine_Component_o *)__this,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                                         pUVar21 = UnityEngine_Transform__Find
                                                                             (pUVar21,"Content/Scrollbar",
                                                                              (MethodInfo *)0x0);
                                                         pTVar35 = pTVar51;
                                                         if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                                           pTVar35 = (TMPro_TMP_InputField_OnValidateInput_o *
                                                                     )
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar21,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       }
                                                       (__this->fields)._scrollbarRect =
                                                            (UnityEngine_RectTransform_o *)pTVar35;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._scrollbarRect,pTVar35);
                                                       pUVar21 = UnityEngine_Component__get_transform
                                                                           ((UnityEngine_Component_o *)__this,
                                                                            (MethodInfo *)0x0);
                                                       if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
                                                          (pUVar21 = UnityEngine_Transform__Find
                                                                               (pUVar21,"Content",
                                                                                (MethodInfo *)0x0),
                                                          pUVar21 != (UnityEngine_Transform_o *)0x0)) {
                                                         pUVar41 = UnityEngine_Component__GetComponent_object_
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar21,(MethodInfo_6651A0 *)
                                                                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                       );
                                                       pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if ((pSVar7 != (Settings_UISettings_o *)0x0) &&
                                                          ((pSVar8 = (pSVar7->fields).ChatHeight,
                                                           pSVar8 != (Settings_IntSetting_o *)0x0 &&
                                                           (pUVar41 != (UnityEngine_UI_LayoutElement_o *)0x0))
                                                          )) {
                                                         (*(pUVar41->klass->vtable)._38_set_preferredHeight.
                                                           methodPtr)(pUVar41,(float)(pSVar8->fields)._value,
                                                                      (pUVar41->klass->vtable).
                                                                      _38_set_preferredHeight.method);
                                                         pUVar21 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar27 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar21,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if (((pSVar7 != (Settings_UISettings_o *)0x0) &&
                                                           (pSVar8 = (pSVar7->fields).ChatWidth,
                                                           pSVar8 != (Settings_IntSetting_o *)0x0)) &&
                                                          (pUVar27 != (UnityEngine_RectTransform_o *)0x0)) {
                                                         UVar29.fields.y = 0.0;
                                                         UVar29.fields.x = (float)(pSVar8->fields)._value;
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar27,UVar29,(MethodInfo *)0x0);
                                                         if ((TypeInfo_GameManagers_ChatManager->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_GameManagers_ChatManager);
                                                         }
                                                         pSVar42 = 
                                                       GameManagers_ChatManager__GetPreservedInputWithCaret
                                                                 ((System_ValueTuple_string__int__int__o *)
                                                                  local_1b8,(MethodInfo *)0x0);
                                                       pSVar25 = (pSVar42->fields).Item1;
                                                       uVar5 = (pSVar42->fields).Item2;
                                                       uVar16 = (pSVar42->fields).Item3;
                                                       pSVar43 = GameManagers_ChatManager__GetConversation
                                                                           ((System_ValueTuple_string__int__o
                                                                             *)&local_178,
                                                                            "PUBLIC",
                                                                            (MethodInfo *)0x0);
                                                       value = (pSVar43->fields).Item1;
                                                       iVar20 = (pSVar43->fields).Item2;
                                                       bVar19 = System_String__IsNullOrEmpty
                                                                          (value,(MethodInfo *)0x0);
                                                       if (bVar19) {
                                                         bVar19 = System_String__IsNullOrEmpty
                                                                            (pSVar25,(MethodInfo *)0x0);
                                                         if (!bVar19) {
                                                           pTVar30 = (__this->fields)._inputField;
                                                           if ((TypeInfo_MiscExtensions->_2).
                                                               cctor_finished_or_no_cctor == 0) {
                                                             il2cpp_codegen_runtime_class_init
                                                                       ((Il2CppClass *)TypeInfo_MiscExtensions
                                                                       );
                                                           }
                                                           pSVar25 = MiscExtensions__StripRichText
                                                                               (pSVar25,(MethodInfo *)0x0);
                                                           if (pTVar30 == (TMPro_TMP_InputField_o *)0x0)
                                                           goto label_1822346c1;
                                                           TMPro_TMP_InputField__set_text
                                                                     (pTVar30,pSVar25,(MethodInfo *)0x0);
                                                           (__this->fields)._desiredCaretPosition = uVar5;
                                                         }
                                                       }
                                                       else {
                                                         pTVar30 = (__this->fields)._inputField;
                                                         if ((TypeInfo_MiscExtensions->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)TypeInfo_MiscExtensions);
                                                         }
                                                         pSVar25 = MiscExtensions__StripRichText
                                                                             (value,(MethodInfo *)0x0);
                                                         if (pTVar30 == (TMPro_TMP_InputField_o *)0x0)
                                                         goto label_1822346c1;
                                                         TMPro_TMP_InputField__set_text
                                                                   (pTVar30,pSVar25,(MethodInfo *)0x0);
                                                         (__this->fields)._desiredCaretPosition = iVar20;
                                                       }
                                                       UI_ChatPanel__SetupChatModeLabel
                                                                 (__this,(MethodInfo *)0x0);
                                                       UI_ChatPanel__SetupNotificationBadge
                                                                 (__this,(MethodInfo *)0x0);
                                                       UI_ChatPanel__SetupEmojiButton
                                                                 (__this,(MethodInfo *)0x0);
                                                       if (0 < (int)uVar16) {
                                                         if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).
                                                             cctor_finished_or_no_cctor == 0) {
                                                           il2cpp_codegen_runtime_class_init
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Photon_Pun_PhotonNetwork);
                                                         }
                                                         pPVar44 = Photon_Pun_PhotonNetwork__get_CurrentRoom
                                                                             ((MethodInfo *)0x0);
                                                         if (pPVar44 != (Photon_Realtime_Room_o *)0x0) {
                                                           if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).
                                                               cctor_finished_or_no_cctor == 0) {
                                                             il2cpp_codegen_runtime_class_init
                                                                       ((Il2CppClass *)
                                                                        TypeInfo_Photon_Pun_PhotonNetwork);
                                                           }
                                                           pPVar44 = Photon_Pun_PhotonNetwork__get_CurrentRoom
                                                                               ((MethodInfo *)0x0);
                                                           if (pPVar44 == (Photon_Realtime_Room_o *)0x0)
                                                           goto label_1822346c1;
                                                           target = (*(pPVar44->klass->vtable)._10_GetPlayer.
                                                                      methodPtr)(pPVar44,uVar16,false,
                                                                                 (pPVar44->klass->vtable).
                                                                                 _10_GetPlayer.method);
                                                           if (target != (Photon_Realtime_Player_o *)0x0) {
                                                             iVar2 = (target->fields).actorNumber;
                                                             if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).
                                                                 cctor_finished_or_no_cctor == 0) {
                                                               il2cpp_codegen_runtime_class_init
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Photon_Pun_PhotonNetwork);
                                                             }
                                                             pPVar45 = 
                                                       Photon_Pun_PhotonNetwork__get_LocalPlayer
                                                                 ((MethodInfo *)0x0);
                                                       if (pPVar45 == (Photon_Realtime_Player_o *)0x0)
                                                       goto label_1822346c1;
                                                       if (iVar2 != (pPVar45->fields).actorNumber) {
                                                         UI_ChatPanel__EnterPMMode
                                                                   (__this,target,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       }
                                                       }
                                                       fontAsset = UnityEngine_Resources__Load_object_
                                                                             ("UI/Fonts/Vegur-Regular-SDF",
                                                                              (MethodInfo_7965D0 *)
                                                                                                                                                            
                                                       MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
                                                       pSVar9 = (__this->fields)._linesPool;
                                                       if (pSVar9 != (
                                                       System_Collections_Generic_List_ChatPanel_ChatLineView__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                                                 ((
                                                       System_Collections_Generic_List_Enumerator_T__o *)
                                                       local_1b8,
                                                       (System_Collections_Generic_List_T__o *)pSVar9,
                                                       (MethodInfo_91F180 *)
                                                       MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator
                                                       );
                                                       local_168 = local_1b8;
                                                       pUStack_160 = pUStack_1b0;
                                                       local_158 = local_1a8;
                                                       local_1b8 = (undefined1  [8])0x0;
                                                       pUStack_1b0 = (
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       *)local_168;
                                                       while (bVar19 = 
                                                       System_Collections_Generic_List_Enumerator_object___MoveNext
                                                                 ((
                                                       System_Collections_Generic_List_Enumerator_object__o *)
                                                       local_168,
                                                       (MethodInfo_153A2A0 *)
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                                                       ), pIVar24 = local_158, bVar19) {
                                                         if (local_158 != (Il2CppObject *)0x0) {
                                                           pIVar10 = local_158[0xc].klass;
                                                           if ((TypeInfo_UnityEngine_Object->_2).
                                                               cctor_finished_or_no_cctor == 0) {
                                                             il2cpp_codegen_runtime_class_init
                                                                       ((Il2CppClass *)
                                                                        TypeInfo_UnityEngine_Object);
                                                           }
                                                           bVar19 = UnityEngine_Object__op_Inequality
                                                                              ((UnityEngine_Object_o *)pIVar10
                                                                               ,(UnityEngine_Object_o *)0x0,
                                                                               (MethodInfo *)0x0);
                                                           if (bVar19) {
                                                             pIVar10 = pIVar24[0xc].klass;
                                                             if ((TypeInfo_UnityEngine_Object->_2).
                                                                 cctor_finished_or_no_cctor == 0) {
                                                               il2cpp_codegen_runtime_class_init
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_UnityEngine_Object);
                                                             }
                                                             UnityEngine_Object__Destroy_2f1ff70
                                                                       ((UnityEngine_Object_o *)pIVar10,
                                                                        (MethodInfo *)0x0);
                                                           }
                                                         }
                                                       }
                                                       System_Collections_Generic_List_Enumerator_object___Dispose
                                                                 ((
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       *)local_168,
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
                                                       );
                                                       pSVar9 = (__this->fields)._linesPool;
                                                       if (pSVar9 != (
                                                       System_Collections_Generic_List_ChatPanel_ChatLineView__o
                                                       *)0x0) {
                                                         piVar1 = &(pSVar9->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         iVar20 = (pSVar9->fields)._size;
                                                         (pSVar9->fields)._size = 0;
                                                         if (0 < iVar20) {
                                                           System_Array__Clear((System_Array_o *)
                                                                               (pSVar9->fields)._items,0,
                                                                               iVar20,(MethodInfo *)0x0);
                                                         }
                                                         pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                  static_fields->UISettings;
                                                         if (((pSVar7 != (Settings_UISettings_o *)0x0) &&
                                                             (pSVar8 = (pSVar7->fields).ChatFontSize,
                                                             pSVar8 != (Settings_IntSetting_o *)0x0)) &&
                                                            (pSVar11 = (pSVar7->fields).ChatWidth,
                                                            pSVar11 != (Settings_IntSetting_o *)0x0)) {
                                                           iVar2 = (pSVar8->fields)._value;
                                                           iVar3 = (pSVar11->fields)._value;
                                                           while( true ) {
                                                             if (Il2CppMethodInitialized_1843471c5 == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_GameManagers_ChatManager);
                                                               Il2CppMethodInitialized_1843471c5 = '\x01';
                                                             }
                                                             if ((TypeInfo_GameManagers_ChatManager->_2).
                                                                 cctor_finished_or_no_cctor == 0) {
                                                               il2cpp_codegen_runtime_class_init
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_GameManagers_ChatManager);
                                                             }
                                                             iVar20 = GameManagers_ChatManager__get_MaxLines
                                                                                ((MethodInfo *)0x0);
                                                             iVar50 = (int)pTVar51;
                                                             if (iVar20 <= iVar50) break;
                                                             __this_05 = UI_ChatPanel__CreateLine
                                                                                   (__this,(System_String_o *)
                                                                                           **(undefined8 **)
                                                                                             (g_data_184354e50 +
                                                                                             0xb8),
                                                                                    (MethodInfo *)0x0);
                                                             if (__this_05 ==
                                                                 (UI_ChatPanel_ChatLineView_o *)0x0)
                                                             goto label_1822347b3;
                                                             UI_ChatPanel_ChatLineView__SetFont
                                                                       (__this_05,fontAsset,(MethodInfo *)0x0)
                                                             ;
                                                             UI_ChatPanel_ChatLineView__ApplyChatMetrics
                                                                       (__this_05,(float)iVar2,(float)iVar3,
                                                                        (MethodInfo *)0x0);
                                                             pUVar31 = (__this_05->fields).
                                                                       _gameObject_k__BackingField;
                                                             if (pUVar31 == (UnityEngine_GameObject_o *)0x0)
                                                             goto label_1822347b3;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar31,false,(MethodInfo *)0x0);
                                                             pMVar17 = 
                                                       MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add
                                                       ;
                                                       pSVar9 = (__this->fields)._linesPool;
                                                       if (pSVar9 == (
                                                       System_Collections_Generic_List_ChatPanel_ChatLineView__o
                                                       *)0x0) goto label_1822347b3;
                                                       piVar1 = &(pSVar9->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar12 = (pSVar9->fields)._items;
                                                       if (pUVar12 == (UI_ChatPanel_ChatLineView_array *)0x0)
                                                       goto label_1822347b3;
                                                       uVar4 = (pSVar9->fields)._size;
                                                       if (uVar4 < (uint)pUVar12->max_length) {
                                                         (pSVar9->fields)._size = uVar4 + 1;
                                                         if ((uint)pUVar12->max_length <= uVar4)
                                                         goto label_1822347ad;
                                                         pUVar12->m_Items[(int)uVar4] = __this_05;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pUVar12->m_Items + (int)uVar4,__this_05);
                                                         pTVar51 = (TMPro_TMP_InputField_OnValidateInput_o *)
                                                                   (ulonglong)(iVar50 + 1);
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar9,(Il2CppObject *)__this_05,
                                                                  (MethodInfo_93DD50 *)
                                                                  pMVar17->klass->rgctx_data[0xe].method);
                                                       pTVar51 = (TMPro_TMP_InputField_OnValidateInput_o *)
                                                                 (ulonglong)(iVar50 + 1);
                                                       }
                                                       }
                                                       pSVar9 = (__this->fields)._linesPool;
                                                       if (pSVar9 == (
                                                       System_Collections_Generic_List_ChatPanel_ChatLineView__o
                                                       *)0x0) goto label_1822347b3;
                                                       (__this->fields)._actualPoolSize =
                                                            (pSVar9->fields)._size;
                                                       pUVar46 = 
                                                       UnityEngine_Component__GetComponentInChildren_object__664b50
                                                                 ((UnityEngine_Component_o *)__this,
                                                                  (MethodInfo_664B50 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponentInChildren_ChatScrollRect
                                                       );
                                                       (__this->fields)._scrollRect = pUVar46;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._scrollRect,pUVar46);
                                                       UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0)
                                                       ;
                                                       UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)0x0)
                                                       ;
                                                       UI_ChatPanel__RestorePMPartners
                                                                 (__this,(MethodInfo *)0x0);
                                                       UI_ChatPanel__RefreshDisplayedMessages
                                                                 (__this,(MethodInfo *)0x0);
                                                       pUVar21 = UnityEngine_Component__get_transform
                                                                           ((UnityEngine_Component_o *)__this,
                                                                            (MethodInfo *)0x0);
                                                       if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
                                                          (pUVar21 = UnityEngine_Transform__Find
                                                                               (pUVar21,"Content",
                                                                                (MethodInfo *)0x0),
                                                          pUVar21 == (UnityEngine_Transform_o *)0x0))
                                                       goto label_1822347b3;
                                                       local_188 = UnityEngine_Component__GetComponent_object_
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar21,(MethodInfo_6651A0 *)
                                                                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       pUVar41 = UnityEngine_Component__GetComponent_object_
                                                                           ((UnityEngine_Component_o *)pUVar21
                                                                            ,(MethodInfo_6651A0 *)
                                                                                                                                                          
                                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                       );
                                                       pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if ((pSVar7 == (Settings_UISettings_o *)0x0) ||
                                                          ((pSVar8 = (pSVar7->fields).ChatHeight,
                                                           pSVar8 == (Settings_IntSetting_o *)0x0 ||
                                                           (pUVar41 == (UnityEngine_UI_LayoutElement_o *)0x0))
                                                          )) goto label_1822347b3;
                                                       (*(pUVar41->klass->vtable)._38_set_preferredHeight.
                                                         methodPtr)(pUVar41,(float)(pSVar8->fields)._value,
                                                                    (pUVar41->klass->vtable).
                                                                    _38_set_preferredHeight.method);
                                                       pUVar31 = (__this->fields)._panel;
                                                       if (pUVar31 == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_1822347b3;
                                                       pUVar40 = UnityEngine_GameObject__GetComponent_object_
                                                                           (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar19 = UnityEngine_Object__op_Equality
                                                                          ((UnityEngine_Object_o *)pUVar40,
                                                                           (UnityEngine_Object_o *)0x0,
                                                                           (MethodInfo *)0x0);
                                                       if (bVar19) {
                                                         pUVar31 = (__this->fields)._panel;
                                                         if (pUVar31 == (UnityEngine_GameObject_o *)0x0)
                                                         goto label_1822347b3;
                                                         pUVar40 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar31,(MethodInfo_6F4D60 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                                                       }
                                                       pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if ((((pSVar7 == (Settings_UISettings_o *)0x0) ||
                                                            (pSVar13 = (pSVar7->fields).ChatBackgroundColor,
                                                            pSVar13 == (Settings_ColorSetting_o *)0x0)) ||
                                                           (__this_00 = (pSVar13->fields)._value,
                                                           __this_00 == (Utility_Color255_o *)0x0)) ||
                                                          (pUVar39 = Utility_Color255__ToColor
                                                                               ((UnityEngine_Color_o *)
                                                                                local_1b8,__this_00,
                                                                                (MethodInfo *)0x0),
                                                          pUVar40 == (UnityEngine_UI_Image_o *)0x0))
                                                       goto label_1822347b3;
                                                       local_1b8 = *(undefined1 (*) [8])&pUVar39->fields;
                                                       pUStack_1b0 = *(
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       **)&(pUVar39->fields).b;
                                                       (*(pUVar40->klass->vtable)._23_set_color.methodPtr)
                                                                 (pUVar40,(UnityEngine_Color_o *)local_1b8,
                                                                  (pUVar40->klass->vtable)._23_set_color.
                                                                  method);
                                                       pSVar22 = (System_Type_array *)
                                                                 SZArrayNew(TypeInfo_System_Type_array,1);
                                                       pIVar18 = TypeRef_UnityEngine_RectTransform;
                                                       if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0
                                                          ) {
                                                         il2cpp_codegen_runtime_class_init(g_data_184354ea0);
                                                       }
                                                       pSVar23 = System_Type__GetTypeFromHandle
                                                                           ((System_RuntimeTypeHandle_o)
                                                                            pIVar18,(MethodInfo *)0x0);
                                                       if (pSVar22 == (System_Type_array *)0x0)
                                                       goto label_1822347b3;
                                                       if ((pSVar23 != (System_Type_o *)0x0) &&
                                                          (pIVar24 = il2cpp_vm_Object_IsInst
                                                                               ((Il2CppObject *)pSVar23,
                                                                                (((pSVar22->obj).klass)->_1).
                                                                                element_class),
                                                          pIVar24 == (Il2CppObject *)0x0)) {
                                                         pIVar24 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar24,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pSVar22->max_length != 0) {
                                                         pSVar22->m_Items[0] = pSVar23;
                                                         Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                                                         pUVar31 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar31,"Scrollbar",pSVar22,
                                                                    (MethodInfo *)0x0);
                                                         if ((pUVar31 == (UnityEngine_GameObject_o *)0x0) ||
                                                            (pUVar26 = UnityEngine_GameObject__get_transform
                                                                                 (pUVar31,(MethodInfo *)0x0),
                                                            pUVar26 == (UnityEngine_Transform_o *)0x0))
                                                         goto label_1822347b3;
                                                         UnityEngine_Transform__SetParent_2f5a7e0
                                                                   (pUVar26,pUVar21,false,(MethodInfo *)0x0);
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar31,true,(MethodInfo *)0x0);
                                                         pUVar27 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_UI_ChatPanel_UIAnchors);
                                                       }
                                                       if (pUVar27 == (UnityEngine_RectTransform_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_RectTransform__set_anchorMin
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->RightStretch).fields
                                                                  ,(MethodInfo *)0x0);
                                                       UnityEngine_RectTransform__set_anchorMax
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->RightStretchEnd).
                                                                          fields,(MethodInfo *)0x0);
                                                       UnityEngine_RectTransform__set_pivot
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->RightCenter).fields,
                                                                  (MethodInfo *)0x0);
                                                       UnityEngine_RectTransform__set_sizeDelta
                                                                 (pUVar27,(UnityEngine_Vector2_o)0x41200000,
                                                                  (MethodInfo *)0x0);
                                                       __this_06 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar31,(MethodInfo_6F4D60 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar
                                                       );
                                                       pSVar22 = (System_Type_array *)
                                                                 SZArrayNew(TypeInfo_System_Type_array,1);
                                                       pSVar23 = System_Type__GetTypeFromHandle
                                                                           ((System_RuntimeTypeHandle_o)
                                                                            TypeRef_UnityEngine_RectTransform,
                                                                            (MethodInfo *)0x0);
                                                       if (pSVar22 == (System_Type_array *)0x0)
                                                       goto label_1822347b3;
                                                       if ((pSVar23 != (System_Type_o *)0x0) &&
                                                          (pIVar24 = il2cpp_vm_Object_IsInst
                                                                               ((Il2CppObject *)pSVar23,
                                                                                (((pSVar22->obj).klass)->_1).
                                                                                element_class),
                                                          pIVar24 == (Il2CppObject *)0x0)) {
                                                         pIVar24 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar24,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pSVar22->max_length != 0) {
                                                         pSVar22->m_Items[0] = pSVar23;
                                                         Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                                                         pUVar32 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar32,"Sliding Area",pSVar22,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar32 == (UnityEngine_GameObject_o *)0x0)
                                                         goto label_1822347b3;
                                                         pUVar26 = UnityEngine_GameObject__get_transform
                                                                             (pUVar32,(MethodInfo *)0x0);
                                                         pUVar47 = UnityEngine_GameObject__get_transform
                                                                             (pUVar31,(MethodInfo *)0x0);
                                                         if (pUVar26 == (UnityEngine_Transform_o *)0x0)
                                                         goto label_1822347b3;
                                                         UnityEngine_Transform__SetParent_2f5a7e0
                                                                   (pUVar26,pUVar47,false,(MethodInfo *)0x0);
                                                         pUVar27 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar32,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar27 == (UnityEngine_RectTransform_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_RectTransform__set_anchorMin
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->FullStretchStart).
                                                                          fields,(MethodInfo *)0x0);
                                                       UnityEngine_RectTransform__set_anchorMax
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->FullStretch).fields,
                                                                  (MethodInfo *)0x0);
                                                       if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&TypeInfo_UnityEngine_Vector2);
                                                         Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                       }
                                                       UnityEngine_RectTransform__set_sizeDelta
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UnityEngine_Vector2->
                                                                           static_fields->zeroVector).fields,
                                                                  (MethodInfo *)0x0);
                                                       pSVar22 = (System_Type_array *)
                                                                 SZArrayNew(TypeInfo_System_Type_array,2);
                                                       pSVar23 = System_Type__GetTypeFromHandle
                                                                           ((System_RuntimeTypeHandle_o)
                                                                            TypeRef_UnityEngine_RectTransform,
                                                                            (MethodInfo *)0x0);
                                                       if (pSVar22 == (System_Type_array *)0x0)
                                                       goto label_1822347b3;
                                                       if ((pSVar23 != (System_Type_o *)0x0) &&
                                                          (pIVar24 = il2cpp_vm_Object_IsInst
                                                                               ((Il2CppObject *)pSVar23,
                                                                                (((pSVar22->obj).klass)->_1).
                                                                                element_class),
                                                          pIVar24 == (Il2CppObject *)0x0)) {
                                                         pIVar24 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar24,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pSVar22->max_length != 0) {
                                                         pSVar22->m_Items[0] = pSVar23;
                                                         Il2CppCodeGenWriteBarrier(pSVar22->m_Items,pSVar23);
                                                         pSVar23 = System_Type__GetTypeFromHandle
                                                                             ((System_RuntimeTypeHandle_o)
                                                                              TypeRef_UnityEngine_UI_Image,
                                                                              (MethodInfo *)0x0);
                                                         if ((pSVar23 != (System_Type_o *)0x0) &&
                                                            (pIVar24 = il2cpp_vm_Object_IsInst
                                                                                 ((Il2CppObject *)pSVar23,
                                                                                  (((pSVar22->obj).klass)->_1)
                                                                                  .element_class),
                                                            pIVar24 == (Il2CppObject *)0x0)) {
                                                           pIVar24 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar24,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pSVar22->max_length) {
                                                         pSVar22->m_Items[1] = pSVar23;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pSVar22->m_Items + 1,pSVar23);
                                                         pUVar31 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar31,"Handle",pSVar22,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar31 == (UnityEngine_GameObject_o *)0x0)
                                                         goto label_1822347b3;
                                                         pUVar26 = UnityEngine_GameObject__get_transform
                                                                             (pUVar31,(MethodInfo *)0x0);
                                                         pUVar47 = UnityEngine_GameObject__get_transform
                                                                             (pUVar32,(MethodInfo *)0x0);
                                                         if (pUVar26 == (UnityEngine_Transform_o *)0x0)
                                                         goto label_1822347b3;
                                                         UnityEngine_Transform__SetParent_2f5a7e0
                                                                   (pUVar26,pUVar47,false,(MethodInfo *)0x0);
                                                         pUVar27 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar27 == (UnityEngine_RectTransform_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_RectTransform__set_anchorMin
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->FullStretchStart).
                                                                          fields,(MethodInfo *)0x0);
                                                       UnityEngine_RectTransform__set_anchorMax
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                           static_fields->FullStretch).fields,
                                                                  (MethodInfo *)0x0);
                                                       if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&TypeInfo_UnityEngine_Vector2);
                                                         Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                       }
                                                       UnityEngine_RectTransform__set_sizeDelta
                                                                 (pUVar27,(UnityEngine_Vector2_o)
                                                                          (TypeInfo_UnityEngine_Vector2->
                                                                           static_fields->zeroVector).fields,
                                                                  (MethodInfo *)0x0);
                                                       pUVar40 = UnityEngine_GameObject__GetComponent_object_
                                                                           (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                                                       if (pUVar40 == (UnityEngine_UI_Image_o *)0x0)
                                                       goto label_1822347b3;
                                                       local_1b8 = (undefined1  [8])0x3f4ccccd3f4ccccd;
                                                       pUStack_1b0 = (
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       *)0x3ecccccd3f4ccccd;
                                                       (*(pUVar40->klass->vtable)._23_set_color.methodPtr)
                                                                 (pUVar40,(UnityEngine_Color_o *)local_1b8,
                                                                  (pUVar40->klass->vtable)._23_set_color.
                                                                  method);
                                                       if (__this_06 == (UnityEngine_UI_Scrollbar_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_UI_Scrollbar__set_handleRect
                                                                 (__this_06,pUVar27,(MethodInfo *)0x0);
                                                       UnityEngine_UI_Selectable__set_targetGraphic
                                                                 ((UnityEngine_UI_Selectable_o *)__this_06,
                                                                  (UnityEngine_UI_Graphic_o *)pUVar40,
                                                                  (MethodInfo *)0x0);
                                                       UnityEngine_UI_Scrollbar__set_direction
                                                                 (__this_06,2,(MethodInfo *)0x0);
                                                       pUVar31 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pUVar21
                                                                            ,(MethodInfo *)0x0);
                                                       if ((pUVar31 == (UnityEngine_GameObject_o *)0x0) ||
                                                          (pUVar46 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar31,(MethodInfo_6F4D60 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_ChatScrollRect
                                                       ), object == (UnityEngine_RectTransform_o *)0x0))
                                                       goto label_1822347b3;
                                                       (object->fields).m_CachedPtr = (intptr_t)pUVar46;
                                                       Il2CppCodeGenWriteBarrier
                                                                 ((void **)&object->fields,pUVar46);
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       (__this->fields)._scrollRect = pUVar46;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._scrollRect,pUVar46);
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       if (pUVar46 == (UI_ChatScrollRect_o *)0x0)
                                                       goto label_1822347b3;
                                                       (pUVar46->fields).m_Vertical = true;
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       if (pUVar46 == (UI_ChatScrollRect_o *)0x0)
                                                       goto label_1822347b3;
                                                       (pUVar46->fields).m_Horizontal = false;
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       if (pUVar46 == (UI_ChatScrollRect_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_UI_ScrollRect__set_viewport
                                                                 ((UnityEngine_UI_ScrollRect_o *)pUVar46,
                                                                  local_188,(MethodInfo *)0x0);
                                                       pUVar31 = (__this->fields)._panel;
                                                       if (pUVar31 == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_1822347b3;
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       pUVar27 = UnityEngine_GameObject__GetComponent_object_
                                                                           (pUVar31,(MethodInfo_6F5650 *)
                                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar46 == (UI_ChatScrollRect_o *)0x0)
                                                       goto label_1822347b3;
                                                       (pUVar46->fields).m_Content = pUVar27;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pUVar46->fields).m_Content,pUVar27);
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       if (pUVar46 == (UI_ChatScrollRect_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                                 ((UnityEngine_UI_ScrollRect_o *)pUVar46,
                                                                  __this_06,(MethodInfo *)0x0);
                                                       pUVar46 = (UI_ChatScrollRect_o *)
                                                                 (object->fields).m_CachedPtr;
                                                       if (pUVar46 == (UI_ChatScrollRect_o *)0x0)
                                                       goto label_1822347b3;
                                                       UnityEngine_UI_ScrollRect__set_verticalScrollbarSpacing
                                                                 ((UnityEngine_UI_ScrollRect_o *)pUVar46,-3.0,
                                                                  (MethodInfo *)0x0);
                                                       pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if (((pSVar7 == (Settings_UISettings_o *)0x0) ||
                                                           (pSVar8 = (pSVar7->fields).ChatScrollSensitivity,
                                                           pSVar8 == (Settings_IntSetting_o *)0x0)) ||
                                                          (pUVar46 = (UI_ChatScrollRect_o *)
                                                                     (object->fields).m_CachedPtr,
                                                          pUVar46 == (UI_ChatScrollRect_o *)0x0))
                                                       goto label_1822347b3;
                                                       (pUVar46->fields).m_ScrollSensitivity =
                                                            (float)(pSVar8->fields)._value;
                                                       pUVar31 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pUVar21
                                                                            ,(MethodInfo *)0x0);
                                                       if (pUVar31 == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_1822347b3;
                                                       __this_07 = 
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar31,(MethodInfo_6F4D60 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger
                                                       );
                                                       pUVar48 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                                       UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                                 (pUVar48,(MethodInfo *)0x0);
                                                       if (pUVar48 ==
                                                           (UnityEngine_EventSystems_EventTrigger_Entry_o *)
                                                           0x0) goto label_1822347b3;
                                                       (pUVar48->fields).eventID = 0;
                                                       pUVar6 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                                                (pUVar48->fields).callback;
                                                       pDVar37 = (DG_Tweening_Core_DOSetter_T__o *)
                                                                 il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
                                                       UnityEngine_Events_UnityAction_object____ctor
                                                                 (pDVar37,(Il2CppObject *)object,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass66_0_Setup_b__0,
                                                       (MethodInfo_EB6EC0 *)0x0);
                                                       if (((pUVar6 == (
                                                       UnityEngine_Events_UnityEvent_Vector2__o *)0x0) ||
                                                       (UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                                  (pUVar6,(
                                                       UnityEngine_Events_UnityAction_T0__o *)pDVar37,
                                                       (MethodInfo_EBBB50 *)
                                                       MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                       ), __this_07 ==
                                                          (UnityEngine_EventSystems_EventTrigger_o *)0x0)) ||
                                                       (pSVar49 = 
                                                       UnityEngine_EventSystems_EventTrigger__get_triggers
                                                                 (__this_07,(MethodInfo *)0x0),
                                                       pMVar17 = 
                                                       MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add
                                                       , pSVar49 ==
                                                         (
                                                       System_Collections_Generic_List_EventTrigger_Entry__o *
                                                       )0x0)) goto label_1822347b3;
                                                       piVar1 = &(pSVar49->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar14 = (pSVar49->fields)._items;
                                                       if (pUVar14 ==
                                                           (UnityEngine_EventSystems_EventTrigger_Entry_array
                                                            *)0x0) goto label_1822347b3;
                                                       uVar4 = (pSVar49->fields)._size;
                                                       if (uVar4 < (uint)pUVar14->max_length) {
                                                         (pSVar49->fields)._size = uVar4 + 1;
                                                         if ((uint)pUVar14->max_length <= uVar4)
                                                         goto label_1822347ad;
                                                         pUVar14->m_Items[(int)uVar4] = pUVar48;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pUVar14->m_Items + (int)uVar4,pUVar48);
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar49,(Il2CppObject *)pUVar48,
                                                                  (MethodInfo_93DD50 *)
                                                                  pMVar17->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar48 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                                       UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                                 (pUVar48,(MethodInfo *)0x0);
                                                       if (pUVar48 ==
                                                           (UnityEngine_EventSystems_EventTrigger_Entry_o *)
                                                           0x0) goto label_1822347b3;
                                                       (pUVar48->fields).eventID = 1;
                                                       pUVar6 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                                                (pUVar48->fields).callback;
                                                       pDVar37 = (DG_Tweening_Core_DOSetter_T__o *)
                                                                 il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
                                                       UnityEngine_Events_UnityAction_object____ctor
                                                                 (pDVar37,(Il2CppObject *)object,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass66_0_Setup_b__1,
                                                       (MethodInfo_EB6EC0 *)0x0);
                                                       if (pUVar6 == (UnityEngine_Events_UnityEvent_Vector2__o
                                                                      *)0x0) goto label_1822347b3;
                                                       UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                                 (pUVar6,(UnityEngine_Events_UnityAction_T0__o
                                                                          *)pDVar37,
                                                                  (MethodInfo_EBBB50 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                       );
                                                       pSVar49 = 
                                                       UnityEngine_EventSystems_EventTrigger__get_triggers
                                                                 (__this_07,(MethodInfo *)0x0);
                                                       pMVar17 = 
                                                       MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add
                                                       ;
                                                       if (pSVar49 ==
                                                           (
                                                       System_Collections_Generic_List_EventTrigger_Entry__o *
                                                       )0x0) goto label_1822347b3;
                                                       piVar1 = &(pSVar49->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar14 = (pSVar49->fields)._items;
                                                       if (pUVar14 ==
                                                           (UnityEngine_EventSystems_EventTrigger_Entry_array
                                                            *)0x0) goto label_1822347b3;
                                                       uVar4 = (pSVar49->fields)._size;
                                                       if (uVar4 < (uint)pUVar14->max_length) {
                                                         (pSVar49->fields)._size = uVar4 + 1;
                                                         if ((uint)pUVar14->max_length <= uVar4)
                                                         goto label_1822347ad;
                                                         pUVar14->m_Items[(int)uVar4] = pUVar48;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pUVar14->m_Items + (int)uVar4,pUVar48);
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar49,(Il2CppObject *)pUVar48,
                                                                  (MethodInfo_93DD50 *)
                                                                  pMVar17->klass->rgctx_data[0xe].method);
                                                       }
                                                       pSVar7 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if ((pSVar7 != (Settings_UISettings_o *)0x0) &&
                                                          (pSVar15 = (pSVar7->fields).ChatHidden,
                                                          pSVar15 != (Settings_BoolSetting_o *)0x0)) {
                                                         UI_ChatPanel__SetChatHiddenState
                                                                   (__this,(pSVar15->fields)._value,false,
                                                                    (MethodInfo *)0x0);
                                                         return;
                                                       }
                                                       goto label_1822347b3;
                                                       }
                                                       }
                                                       }
                                                       }
label_1822347ad:
                                                       ThrowIndexOutOfRangeException();
                                                       }
                                                       }
                                                       }
label_1822347b3:
                                                       ThrowNullReferenceException();
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
                                                       goto label_1822346c1;
                                                       }
                                                       }
                                                       goto label_1822347c5;
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
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                    goto label_1822346c1;
                                                  }
                                                }
                                              }
                                              goto label_1822347c5;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto label_1822346c1;
                              }
                            }
                            goto label_1822347c5;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_1822346c1;
        }
      }
label_1822347c5:
      ThrowIndexOutOfRangeException();
    }
  }
label_1822346c1:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SetupChatModeLabel
// il2cpp: void UI_ChatPanel__SetupChatModeLabel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182230c70

void UI_ChatPanel__SetupChatModeLabel(UI_ChatPanel_o *__this,MethodInfo *method)

{
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
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843471ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ChatModeLabel");
    Il2CppMethodInitialized_1843471ca = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_182231057:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(pUVar4,"ChatModeLabel",components,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar4,(MethodInfo_6F5650 *)
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
                                 (pUVar4,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
              (__this->fields)._chatModeLabel = pTVar6;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._chatModeLabel,pTVar6);
              pTVar6 = (__this->fields)._chatModeLabel;
              if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar6,18.0,(MethodInfo *)0x0);
                pTVar6 = (__this->fields)._chatModeLabel;
                if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar6,0x202,(MethodInfo *)0x0);
                  pTVar6 = (__this->fields)._chatModeLabel;
                  if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_verticalAlignment((TMPro_TMP_Text_o *)pTVar6,0x200,(MethodInfo *)0x0);
                    pTVar6 = (__this->fields)._chatModeLabel;
                    if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_horizontalAlignment((TMPro_TMP_Text_o *)pTVar6,2,(MethodInfo *)0x0);
                      pTVar6 = (__this->fields)._chatModeLabel;
                      if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        local_38[0].r = 1.0;
                        local_38[0].g = 1.0;
                        local_38[0].b = 1.0;
                        local_38[0].a = 0.5;
                        (*(pTVar6->klass->vtable)._23_set_color.methodPtr)
                                  (pTVar6,(UnityEngine_Color_o *)local_38,
                                   (pTVar6->klass->vtable)._23_set_color.method);
                        pTVar6 = (__this->fields)._chatModeLabel;
                        if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          (*(pTVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (pTVar6,false,(pTVar6->klass->vtable)._25_set_raycastTarget.method);
                          UI_ChatPanel__UpdateChatModeLabel(__this,(MethodInfo *)0x0);
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
                                                     (pUVar4,(MethodInfo_6F5650 *)
                                                                                                                          
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
      goto label_182231057;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$UpdateChatModeElements
// il2cpp: void UI_ChatPanel__UpdateChatModeElements (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182235020
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223521e: movaps xmm7, xmm0
// asm:   0x182235221: jmp 0x18223522e

void UI_ChatPanel__UpdateChatModeElements(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Vector2_o UVar11;
  float fVar12;
  float fVar13;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_1843471cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471cb = '\x01';
  }
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto label_1822353cc;
  iVar1 = (pSVar2->fields)._size;
  if (iVar1 < 1) {
    bVar8 = false;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar8 = GameManagers_ChatManager__HasAnyActivePMNotification((MethodInfo *)0x0);
  }
  pTVar3 = (__this->fields)._chatModeLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pTVar3 = (__this->fields)._chatModeLabel;
    if ((pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar3,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_1822353cc;
    UnityEngine_GameObject__SetActive(pUVar9,0 < iVar1,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._notificationBadge;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar9 = (__this->fields)._notificationBadge;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822353cc;
    UnityEngine_GameObject__SetActive(pUVar9,bVar8,(MethodInfo *)0x0);
  }
  fVar13 = 40.0;
  fVar12 = -4.0;
  pTVar3 = (__this->fields)._chatModeLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar6 = false;
  if (0 < iVar1) {
    bVar6 = bVar7;
  }
  if (bVar6 != false) {
    pTVar3 = (__this->fields)._chatModeLabel;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1822353cc;
    (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
    pTVar3 = (__this->fields)._chatModeLabel;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1822353cc;
    fVar13 = (*(pTVar3->klass->vtable)._84_get_preferredWidth.methodPtr)
                       (pTVar3,(pTVar3->klass->vtable)._84_get_preferredWidth.method);
    fVar13 = fVar13 + 8.0;
    if ((__this->fields)._inPMMode == false) {
      if (40.0 <= fVar13) {
        fVar13 = 40.0;
      }
    }
    else if (62.0 <= fVar13) {
      fVar13 = 62.0;
    }
    pTVar3 = (__this->fields)._chatModeLabel;
    if ((pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pTVar3,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
       , pUVar10 == (UnityEngine_RectTransform_o *)0x0)) goto label_1822353cc;
    UVar11.fields.y = 26.0;
    UVar11.fields.x = fVar13;
    UnityEngine_RectTransform__set_sizeDelta(pUVar10,UVar11,(MethodInfo *)0x0);
    fVar12 = 0.0;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar10,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._notificationBadge;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar8 & bVar6) != 0) {
    pTVar3 = (__this->fields)._chatModeLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar9 = (__this->fields)._notificationBadge;
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822353cc;
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar9,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_1822353cc;
      value.fields.y = 10.0;
      value.fields.x = fVar12 - 10.0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar10,value,(MethodInfo *)0x0);
    }
  }
  pTVar5 = (__this->fields)._inputField;
  if (((pTVar5 != (TMPro_TMP_InputField_o *)0x0) &&
      (pUVar10 = (pTVar5->fields).m_TextViewport, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) &&
     (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (iVar1 < 1) {
      fVar12 = 5.0;
    }
    else {
      fVar12 = fVar12 + fVar13;
    }
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_offsetMin(pUVar10,(MethodInfo *)0x0);
      fStackX_c = UVar11.fields.y;
      value_00.fields.y = fStackX_c;
      value_00.fields.x = fVar12;
      UnityEngine_RectTransform__set_offsetMin(pUVar10,value_00,(MethodInfo *)0x0);
      return;
    }
  }
label_1822353cc:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateChatModeLabel
// il2cpp: void UI_ChatPanel__UpdateChatModeLabel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x1822353e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182235519: mov rdx, qword ptr [rip + 0x1ec1e90]  ; ":"
// asm:   0x182235520: jmp 0x18223553c

void UI_ChatPanel__UpdateChatModeLabel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Photon_Realtime_Player_o *player;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  
  if (Il2CppMethodInitialized_1843471cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"..");
    il2cpp_codegen_initialize_runtime_metadata(&"All:");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843471cc = '\x01';
  }
  pTVar1 = (__this->fields)._chatModeLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (((__this->fields)._inPMMode == false) ||
       ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0)) {
      pTVar1 = (__this->fields)._chatModeLabel;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                  (pTVar1,"All:",(pTVar1->klass->vtable)._66_set_text.method);
        return;
      }
    }
    else {
      player = (__this->fields)._currentPMTarget;
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar3 = PhotonExtensions__GetStringProperty
                         (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                          "",(MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar3 = MiscExtensions__StripRichText(pSVar3,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pTVar1 = (__this->fields)._chatModeLabel;
        str1 = ":";
        if (4 < (pSVar3->fields)._stringLength) {
          pSVar3 = System_String__Substring_1972740(pSVar3,0,4,(MethodInfo *)0x0);
          str1 = "..";
        }
        pSVar3 = System_String__Concat_1969e50(pSVar3,str1,(MethodInfo *)0x0);
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                    (pTVar1,pSVar3,(pTVar1->klass->vtable)._66_set_text.method);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.ChatPanel$$SetupNotificationBadge
// il2cpp: void UI_ChatPanel__SetupNotificationBadge (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x1822315a0

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
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_1843471cd == '\0') {
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
    Il2CppMethodInitialized_1843471cd = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_182231e5e;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pSVar2);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar4,"NotificationBadge",pSVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._inputField;
          if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
            pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(pUVar5,pUVar6,false,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar4,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_pivot
                          (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_sizeDelta
                          (pUVar7,(UnityEngine_Vector2_o)0x41c0000041900000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar4,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                  local_48[0].r = 0.0;
                  local_48[0].g = 0.0;
                  local_48[0].b = 0.0;
                  local_48[0].a = 0.0;
                  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                            (pUVar8,(UnityEngine_Color_o *)local_48,
                             (pUVar8->klass->vtable)._23_set_color.method);
                  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                  pSVar2 = System_Type__GetTypeFromHandle
                                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                      (MethodInfo *)0x0);
                  if (pSVar1 != (System_Type_array *)0x0) {
                    if (pSVar2 != (System_Type_o *)0x0) {
                      pIVar3 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                      if (pIVar3 == (Il2CppObject *)0x0) {
                        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                      }
                    }
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = pSVar2;
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
                      pSVar2 = System_Type__GetTypeFromHandle
                                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,
                                          (MethodInfo *)0x0);
                      if (pSVar2 != (System_Type_o *)0x0) {
                        pIVar3 = il2cpp_vm_Object_IsInst
                                           ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                        if (pIVar3 == (Il2CppObject *)0x0) {
                          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                        }
                      }
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = pSVar2;
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
                        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                        UnityEngine_GameObject___ctor_2f1abe0
                                  (pUVar9,"BadgeCircle",pSVar1,(MethodInfo *)0x0);
                        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                          pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__SetParent_2f5a7e0(pUVar5,pUVar6,false,(MethodInfo *)0x0);
                            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                               (pUVar9,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                               );
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_anchorMax
                                        (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_pivot
                                        (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_sizeDelta
                                        (pUVar7,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
                              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                Il2CppMethodInitialized_18433e3c9 = '\x01';
                              }
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (pUVar7,(UnityEngine_Vector2_o)
                                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).
                                                fields,(MethodInfo *)0x0);
                              pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                 (pUVar9,(MethodInfo_6F5650 *)
                                                         MethodInfo_UnityEngine_GameObject_GetComponent_Image)
                              ;
                              if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
                              }
                              value = UI_ChatPanel__GetCircleSprite((MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                UnityEngine_UI_Image__set_sprite(pUVar8,value,(MethodInfo *)0x0);
                                UnityEngine_UI_Image__set_type(pUVar8,0,(MethodInfo *)0x0);
                                local_48[0].r = 0.8;
                                local_48[0].g = 0.15;
                                local_48[0].b = 0.15;
                                local_48[0].a = 1.0;
                                (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar8,(UnityEngine_Color_o *)local_48,
                                           (pUVar8->klass->vtable)._23_set_color.method);
                                (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                                          (pUVar8,false,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
                                pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                                pSVar2 = System_Type__GetTypeFromHandle
                                                   ((System_RuntimeTypeHandle_o)
                                                    TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
                                if (pSVar1 != (System_Type_array *)0x0) {
                                  if (pSVar2 != (System_Type_o *)0x0) {
                                    pIVar3 = il2cpp_vm_Object_IsInst
                                                       ((Il2CppObject *)pSVar2,
                                                        (((pSVar1->obj).klass)->_1).element_class);
                                    if (pIVar3 == (Il2CppObject *)0x0) {
                                      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                    }
                                  }
                                  if ((int)pSVar1->max_length != 0) {
                                    pSVar1->m_Items[0] = pSVar2;
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
                                    pSVar2 = System_Type__GetTypeFromHandle
                                                       ((System_RuntimeTypeHandle_o)
                                                        TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
                                    if (pSVar2 != (System_Type_o *)0x0) {
                                      pIVar3 = il2cpp_vm_Object_IsInst
                                                         ((Il2CppObject *)pSVar2,
                                                          (((pSVar1->obj).klass)->_1).element_class);
                                      if (pIVar3 == (Il2CppObject *)0x0) {
                                        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                      }
                                    }
                                    if (1 < (uint)pSVar1->max_length) {
                                      pSVar1->m_Items[1] = pSVar2;
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
                                      pUVar9 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                      UnityEngine_GameObject___ctor_2f1abe0
                                                (pUVar9,"BadgeText",pSVar1,(MethodInfo *)0x0);
                                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar5 = UnityEngine_GameObject__get_transform
                                                           (pUVar9,(MethodInfo *)0x0);
                                        pUVar6 = UnityEngine_GameObject__get_transform
                                                           (pUVar4,(MethodInfo *)0x0);
                                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                          UnityEngine_Transform__SetParent_2f5a7e0
                                                    (pUVar5,pUVar6,false,(MethodInfo *)0x0);
                                          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                                             (pUVar9,(MethodInfo_6F5650 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector2);
                                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                                          }
                                          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_anchorMin
                                                      (pUVar7,(UnityEngine_Vector2_o)
                                                              (TypeInfo_UnityEngine_Vector2->static_fields->
                                                              zeroVector).fields,(MethodInfo *)0x0);
                                            if (Il2CppMethodInitialized_184341f36 == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_UnityEngine_Vector2);
                                              Il2CppMethodInitialized_184341f36 = '\x01';
                                            }
                                            UnityEngine_RectTransform__set_anchorMax
                                                      (pUVar7,(UnityEngine_Vector2_o)
                                                              (TypeInfo_UnityEngine_Vector2->static_fields->
                                                              oneVector).fields,(MethodInfo *)0x0);
                                            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_UnityEngine_Vector2);
                                              Il2CppMethodInitialized_18433e3c9 = '\x01';
                                            }
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (pUVar7,(UnityEngine_Vector2_o)
                                                              (TypeInfo_UnityEngine_Vector2->static_fields->
                                                              zeroVector).fields,(MethodInfo *)0x0);
                                            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                                                  (pUVar9,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                            if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                              (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                                                        (__this_02,"!",
                                                         (__this_02->klass->vtable)._66_set_text.method);
                                              TMPro_TMP_Text__set_fontSize
                                                        ((TMPro_TMP_Text_o *)__this_02,16.0,(MethodInfo *)0x0)
                                              ;
                                              TMPro_TMP_Text__set_alignment
                                                        ((TMPro_TMP_Text_o *)__this_02,0x202,(MethodInfo *)0x0
                                                        );
                                              local_48[0].r = 1.0;
                                              local_48[0].g = 0.8;
                                              local_48[0].b = 0.2;
                                              local_48[0].a = 1.0;
                                              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                                        (__this_02,(UnityEngine_Color_o *)local_48,
                                                         (__this_02->klass->vtable)._23_set_color.method);
                                              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                                                        (__this_02,false,
                                                         (__this_02->klass->vtable)._25_set_raycastTarget.
                                                         method);
                                              __this_03 = UnityEngine_GameObject__GetComponent_object_
                                                                    (pUVar4,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                              if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
                                                UnityEngine_UI_Selectable__set_transition
                                                          ((UnityEngine_UI_Selectable_o *)__this_03,0,
                                                           (MethodInfo *)0x0);
                                                __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                                            (__this_03->fields).m_OnClick;
                                                __this_04 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_UnityEngine_Events_UnityAction
                                                                      );
                                                UnityEngine_Events_UnityAction___ctor
                                                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                           __this_04,(Il2CppObject *)__this,
                                                           (intptr_t)
                                                           MethodInfo_UI_ChatPanel_OnNotificationBadgeClicked,
                                                           (MethodInfo *)0x0);
                                                if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (__this_01,__this_04,(MethodInfo *)0x0);
                                                  (__this->fields)._notificationBadge = pUVar4;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(__this->fields)._notificationBadge,pUVar4);
                                                  pUVar4 = (__this->fields)._notificationBadge;
                                                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar4,false,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto label_182231e5e;
                                    }
                                  }
                                  goto label_182231ed4;
                                }
                              }
                            }
                          }
                        }
                        goto label_182231e5e;
                      }
                    }
                    goto label_182231ed4;
                  }
                }
              }
            }
          }
        }
label_182231e5e:
        ThrowNullReferenceException();
      }
    }
  }
label_182231ed4:
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$OnNotificationBadgeClicked
// il2cpp: void UI_ChatPanel__OnNotificationBadgeClicked (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ee00

void UI_ChatPanel__OnNotificationBadgeClicked(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *__this_00;
  Il2CppObject *object;
  bool bVar1;
  System_Predicate_T__o *match;
  UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields target;
  
  if (Il2CppMethodInitialized_1843471ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Find);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c_OnNotificationBadgeClicked_b__71_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    Il2CppMethodInitialized_1843471ce = '\x01';
  }
  __this_00 = (__this->fields)._pmPartners;
  if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
  }
  match = (System_Predicate_T__o *)TypeInfo_UI_ChatPanel_c->static_fields->__9__71_0;
  if (match == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
    }
    object = (Il2CppObject *)TypeInfo_UI_ChatPanel_c->static_fields->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_UI_ChatPanel_c_OnNotificationBadgeClicked_b__71_0,(MethodInfo_B61EB0 *)0x0
              );
    TypeInfo_UI_ChatPanel_c->static_fields->__9__71_0 = (System_Predicate_Player__o *)match;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel_c->static_fields->__9__71_0,match);
  }
  if (__this_00 != (System_Collections_Generic_List_Player__o *)0x0) {
    target = (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)
             System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___Find
                       ((System_Collections_Generic_List_T__o *)__this_00,match,
                        (MethodInfo_91E910 *)MethodInfo_System_Collections_Generic_List_Player_Find);
    if (target != (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)0x0) {
      UI_ChatPanel__EnterPMMode(__this,(Photon_Realtime_Player_o *)target,(MethodInfo *)0x0);
      bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
      if (!bVar1) {
        UI_ChatPanel__Activate(__this,(MethodInfo *)0x0);
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$GetCircleSprite
// il2cpp: UnityEngine_Sprite_o* UI_ChatPanel__GetCircleSprite (const MethodInfo* method);
// 0x18222c790

UnityEngine_Sprite_o * UI_ChatPanel__GetCircleSprite(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  _union_53103 _Var2;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  UnityEngine_Sprite_o *value;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843471cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_1843471cf = '\x01';
  }
  if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
  }
  x = (UnityEngine_Object_o *)TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
    }
    return TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this,0x40,0x40,4,false,(MethodInfo *)0x0);
  colors = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x1000);
  iVar5 = 0;
  do {
    iVar3 = 0;
    iVar4 = iVar5 * 0x40;
    do {
      fVar7 = ((float)iVar5 - 32.0) + 0.5;
      fVar6 = ((float)iVar3 - 32.0) + 0.5;
      if (fVar6 * fVar6 + fVar7 * fVar7 <= 1024.0) {
        if (colors == (UnityEngine_Color32_array *)0x0) goto label_18222ca20;
        if ((uint)colors->max_length <= (uint)(iVar4 + iVar3)) goto label_18222ca1a;
        _Var2 = (_union_53103)0xffffffff;
      }
      else {
        if (colors == (UnityEngine_Color32_array *)0x0) goto label_18222ca20;
        if ((uint)colors->max_length <= (uint)(iVar4 + iVar3)) {
label_18222ca1a:
          ThrowIndexOutOfRangeException();
        }
        _Var2 = (_union_53103)0x0;
      }
      colors->m_Items[iVar4 + iVar3].fields._overlap_0 = _Var2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40);
  if (__this != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__SetPixels32_2efb6e0(__this,colors,(MethodInfo *)0x0);
    UnityEngine_Texture2D__Apply_2ef9fd0(__this,(MethodInfo *)0x0);
    local_28[0].m_XMin = 0.0;
    local_28[0].m_YMin = 0.0;
    local_28[0].m_Width = 64.0;
    local_28[0].m_Height = 64.0;
    value = UnityEngine_Sprite__Create_2ed4530
                      (__this,(UnityEngine_Rect_o *)local_28,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       (MethodInfo *)0x0);
    if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
    }
    TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite = value;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite,value);
    return TypeInfo_UI_ChatPanel->static_fields->_cachedCircleSprite;
  }
label_18222ca20:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SetupEmojiButton
// il2cpp: void UI_ChatPanel__SetupEmojiButton (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182231090

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
  UnityEngine_UI_Button_o *pUVar6;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843471d0 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x98\xba");
    Il2CppMethodInitialized_1843471d0 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_182231556:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar2);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar4,"EmojiButton",components,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0)
            ;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar4,(MethodInfo_6F5650 *)
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
                                      (pUVar4,(MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                            (__this_02,"\xe2\x98\xba",(__this_02->klass->vtable)._66_set_text.method);
                  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_02,24.0,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_02,0x202,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_verticalAlignment((TMPro_TMP_Text_o *)__this_02,0x200,(MethodInfo *)0x0)
                  ;
                  TMPro_TMP_Text__set_horizontalAlignment((TMPro_TMP_Text_o *)__this_02,2,(MethodInfo *)0x0);
                  local_28[0].r = 0.0;
                  local_28[0].g = 0.0;
                  local_28[0].b = 0.0;
                  local_28[0].a = 0.0;
                  (*(__this_02->klass->vtable)._74_set_margin.methodPtr)
                            (__this_02,(UnityEngine_Vector4_o *)local_28,
                             (__this_02->klass->vtable)._74_set_margin.method);
                  local_28[0].r = 1.0;
                  local_28[0].g = 1.0;
                  local_28[0].b = 1.0;
                  local_28[0].a = 0.5;
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (__this_02,(UnityEngine_Color_o *)local_28,
                             (__this_02->klass->vtable)._23_set_color.method);
                  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar4,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                  (__this->fields)._emojiButton = pUVar6;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiButton,pUVar6);
                  pUVar6 = (__this->fields)._emojiButton;
                  if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar6->fields).m_OnClick;
                    __this_03 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,
                               (Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_ToggleEmojiPanel,
                               (MethodInfo *)0x0);
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
                                             (pUVar4,(MethodInfo_6F5650 *)
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
        goto label_182231556;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$ToggleEmojiPanel
// il2cpp: void UI_ChatPanel__ToggleEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182234cd0

void UI_ChatPanel__ToggleEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  TMPro_TMP_InputField_o *__this_00;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843471d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_1843471d1 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    UI_ChatPanel__CreateEmojiPanel(__this,(MethodInfo *)0x0);
  }
  bVar2 = (__this->fields)._emojiPanelActive == false;
  pUVar1 = (__this->fields)._emojiPanel;
  (__this->fields)._emojiPanelActive = bVar2;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,bVar2,(MethodInfo *)0x0);
    if ((__this->fields)._emojiPanelActive == false) {
      return;
    }
    __this_00 = (__this->fields)._inputField;
    if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
      ;
      fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__GetWorldCorners(__this_01,fourCornersArray,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._emojiPanel;
        if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
           fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
          if ((uint)fourCornersArray->max_length < 3) {
            ThrowIndexOutOfRangeException();
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            local_18.fields.x = fourCornersArray->m_Items[2].fields.x;
            local_18.fields.y = fourCornersArray->m_Items[0].fields.y;
            local_18.fields.z = fourCornersArray->m_Items[2].fields.z;
            UnityEngine_Transform__set_position(pUVar3,&local_18,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._emojiPanel;
            if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
              return;
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
// 0x182229870

void UI_ChatPanel__CreateEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar1;
  Il2CppType *handle;
  UI_ChatPanel___c__DisplayClass75_0_o *object;
  System_Type_array *pSVar2;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  TMPro_TextMeshProUGUI_o *pTVar10;
  UnityEngine_UI_Button_o *pUVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  UnityEngine_UI_GridLayoutGroup_o *__this_01;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Color_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_1843471d2 == '\0') {
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
              (&MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass75_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_UIAnchors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiModeButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Sticker");
    il2cpp_codegen_initialize_runtime_metadata(&"NavPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"PageText");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    il2cpp_codegen_initialize_runtime_metadata(&"BackButton");
    il2cpp_codegen_initialize_runtime_metadata(&"NextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"StickerModeButton");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipArea");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843471d2 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass75_0);
  UI_ChatPanel___c__DisplayClass75_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (UI_ChatPanel___c__DisplayClass75_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_array *)0x0) {
      if (pSVar3 != (System_Type_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = pSVar3;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
        pSVar3 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
        if (pSVar3 != (System_Type_o *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[1] = pSVar3;
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3);
          pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(pUVar5,"EmojiPanel",pSVar2,(MethodInfo *)0x0);
          (__this->fields)._emojiPanel = pUVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiPanel,pUVar5);
          pUVar5 = (__this->fields)._emojiPanel;
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (__this_00 != (UI_BaseMenu_o *)0x0) {
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,pUVar7,false,(MethodInfo *)0x0);
                pUVar5 = (__this->fields)._emojiPanel;
                if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar5,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  if ((TypeInfo_UI_ChatPanel_UIAnchors->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_UIAnchors);
                  }
                  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (pUVar8,(UnityEngine_Vector2_o)
                                      (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->BottomLeft).fields,
                               (MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchorMax
                              (pUVar8,(UnityEngine_Vector2_o)
                                      (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->BottomLeft).fields,
                               (MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_pivot
                              (pUVar8,(UnityEngine_Vector2_o)
                                      (TypeInfo_UI_ChatPanel_UIAnchors->static_fields->BottomLeft).fields,
                               (MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_sizeDelta
                              (pUVar8,(UnityEngine_Vector2_o)0x43630000434d0000,(MethodInfo *)0x0);
                    pUVar5 = (__this->fields)._emojiPanel;
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar5,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                        local_88[0].r = 0.118;
                        local_88[0].g = 0.118;
                        local_88[0].b = 0.118;
                        local_88[0].a = 0.95;
                        (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar9,(UnityEngine_Color_o *)local_88,
                                   (pUVar9->klass->vtable)._23_set_color.method);
                        pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                        pSVar3 = System_Type__GetTypeFromHandle
                                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                            (MethodInfo *)0x0);
                        if (pSVar2 != (System_Type_array *)0x0) {
                          if (pSVar3 != (System_Type_o *)0x0) {
                            pIVar4 = il2cpp_vm_Object_IsInst
                                               ((Il2CppObject *)pSVar3,
                                                (((pSVar2->obj).klass)->_1).element_class);
                            if (pIVar4 == (Il2CppObject *)0x0) {
                              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                            }
                          }
                          if ((int)pSVar2->max_length != 0) {
                            pSVar2->m_Items[0] = pSVar3;
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                            pSVar3 = System_Type__GetTypeFromHandle
                                               ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,
                                                (MethodInfo *)0x0);
                            if (pSVar3 != (System_Type_o *)0x0) {
                              pIVar4 = il2cpp_vm_Object_IsInst
                                                 ((Il2CppObject *)pSVar3,
                                                  (((pSVar2->obj).klass)->_1).element_class);
                              if (pIVar4 == (Il2CppObject *)0x0) {
                                pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                              }
                            }
                            if (1 < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[1] = pSVar3;
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3);
                              pUVar5 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                              UnityEngine_GameObject___ctor_2f1abe0
                                        (pUVar5,"TooltipArea",pSVar2,(MethodInfo *)0x0);
                              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                                pUVar13 = (__this->fields)._emojiPanel;
                                if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar7 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_2f5a7e0
                                              (pUVar6,pUVar7,false,(MethodInfo *)0x0);
                                    pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                       (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (pUVar8,(UnityEngine_Vector2_o)0x3f80000000000000,
                                                 (MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_anchorMax
                                                (pUVar8,(UnityEngine_Vector2_o)0x3f8000003f800000,
                                                 (MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_pivot
                                                (pUVar8,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_sizeDelta
                                                (pUVar8,(UnityEngine_Vector2_o)0x40e0000000000000,
                                                 (MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_anchoredPosition
                                                (pUVar8,(UnityEngine_Vector2_o)0xc0e0000000000000,
                                                 (MethodInfo *)0x0);
                                      pTVar10 = UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                      (object->fields).tooltipText = pTVar10;
                                      Il2CppCodeGenWriteBarrier(&(object->fields).tooltipText,pTVar10);
                                      pTVar10 = (object->fields).tooltipText;
                                      if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                        TMPro_TMP_Text__set_fontSize
                                                  ((TMPro_TMP_Text_o *)pTVar10,14.0,(MethodInfo *)0x0);
                                        pTVar10 = (object->fields).tooltipText;
                                        if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                          local_88[0].r = 1.0;
                                          local_88[0].g = 1.0;
                                          local_88[0].b = 1.0;
                                          local_88[0].a = 0.8;
                                          (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
                                                    (pTVar10,(UnityEngine_Color_o *)local_88,
                                                     (pTVar10->klass->vtable)._23_set_color.method);
                                          pTVar10 = (object->fields).tooltipText;
                                          if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                            TMPro_TMP_Text__set_alignment
                                                      ((TMPro_TMP_Text_o *)pTVar10,0x202,(MethodInfo *)0x0);
                                            pTVar10 = (object->fields).tooltipText;
                                            if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                              (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
                                                        (pTVar10,"",
                                                         (pTVar10->klass->vtable)._66_set_text.method);
                                              pSVar2 = (System_Type_array *)
                                                       SZArrayNew(TypeInfo_System_Type_array,3);
                                              pSVar3 = System_Type__GetTypeFromHandle
                                                                 ((System_RuntimeTypeHandle_o)
                                                                  TypeRef_UnityEngine_RectTransform,
                                                                  (MethodInfo *)0x0);
                                              if (pSVar2 != (System_Type_array *)0x0) {
                                                if (pSVar3 != (System_Type_o *)0x0) {
                                                  pIVar4 = il2cpp_vm_Object_IsInst
                                                                     ((Il2CppObject *)pSVar3,
                                                                      (((pSVar2->obj).klass)->_1).
                                                                      element_class);
                                                  if (pIVar4 == (Il2CppObject *)0x0) {
                                                    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception
                                                                       ();
                                                    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                                                  }
                                                }
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = pSVar3;
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                  pSVar3 = System_Type__GetTypeFromHandle
                                                                     ((System_RuntimeTypeHandle_o)
                                                                      TypeRef_UnityEngine_UI_Button,
                                                                      (MethodInfo *)0x0);
                                                  if (pSVar3 != (System_Type_o *)0x0) {
                                                    pIVar4 = il2cpp_vm_Object_IsInst
                                                                       ((Il2CppObject *)pSVar3,
                                                                        (((pSVar2->obj).klass)->_1).
                                                                        element_class);
                                                    if (pIVar4 == (Il2CppObject *)0x0) {
                                                      pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0)
                                                      ;
                                                    }
                                                  }
                                                  if (1 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[1] = pSVar3;
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3);
                                                    pSVar3 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        TypeRef_TMPro_TextMeshProUGUI,
                                                                        (MethodInfo *)0x0);
                                                    if (pSVar3 != (System_Type_o *)0x0) {
                                                      pIVar4 = il2cpp_vm_Object_IsInst
                                                                         ((Il2CppObject *)pSVar3,
                                                                          (((pSVar2->obj).klass)->_1).
                                                                          element_class);
                                                      if (pIVar4 == (Il2CppObject *)0x0) {
                                                        pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                      }
                                                    }
                                                    if (2 < (uint)pSVar2->max_length) {
                                                      pSVar2->m_Items[2] = pSVar3;
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar3);
                                                      pUVar5 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_UnityEngine_GameObject);
                                                      UnityEngine_GameObject___ctor_2f1abe0
                                                                (pUVar5,"EmojiModeButton",pSVar2,
                                                                 (MethodInfo *)0x0);
                                                      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar6 = UnityEngine_GameObject__get_transform
                                                                           (pUVar5,(MethodInfo *)0x0);
                                                        pUVar13 = (__this->fields)._emojiPanel;
                                                        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                          pUVar7 = UnityEngine_GameObject__get_transform
                                                                             (pUVar13,(MethodInfo *)0x0);
                                                          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                            UnityEngine_Transform__SetParent_2f5a7e0
                                                                      (pUVar6,pUVar7,false,(MethodInfo *)0x0);
                                                            pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_pivot
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f800000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x4170000042a00000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0xc0e00000c1f00000,
                                                                    (MethodInfo *)0x0);
                                                         pTVar10 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                       if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                         (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
                                                                   (pTVar10,"Emoji",
                                                                    (pTVar10->klass->vtable)._66_set_text.
                                                                    method);
                                                         TMPro_TMP_Text__set_fontSize
                                                                   ((TMPro_TMP_Text_o *)pTVar10,14.0,
                                                                    (MethodInfo *)0x0);
                                                         TMPro_TMP_Text__set_alignment
                                                                   ((TMPro_TMP_Text_o *)pTVar10,0x202,
                                                                    (MethodInfo *)0x0);
                                                         local_88[0].r = 1.0;
                                                         local_88[0].g = 1.0;
                                                         local_88[0].b = 1.0;
                                                         local_88[0].a = 1.0;
                                                         (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
                                                                   (pTVar10,(UnityEngine_Color_o *)local_88,
                                                                    (pTVar10->klass->vtable)._23_set_color.
                                                                    method);
                                                         pUVar11 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       (__this->fields)._emojiModeButton = pUVar11;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._emojiModeButton,pUVar11);
                                                       pUVar11 = (__this->fields)._emojiModeButton;
                                                       if (pUVar11 != (UnityEngine_UI_Button_o *)0x0) {
                                                         pUVar1 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (pUVar11->fields).m_OnClick;
                                                         pUVar12 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__0
                                                       ,(MethodInfo *)0x0);
                                                       if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (pUVar1,pUVar12,(MethodInfo *)0x0);
                                                         pSVar2 = (System_Type_array *)
                                                                  SZArrayNew(TypeInfo_System_Type_array,3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_RectTransform
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_array *)0x0) {
                                                           if (pSVar3 != (System_Type_o *)0x0) {
                                                             pIVar4 = il2cpp_vm_Object_IsInst
                                                                                ((Il2CppObject *)pSVar3,
                                                                                 (((pSVar2->obj).klass)->_1).
                                                                                 element_class);
                                                             if (pIVar4 == (Il2CppObject *)0x0) {
                                                               pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_UI_Button,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (1 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[1] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3)
                                                         ;
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_TMPro_TextMeshProUGUI,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (2 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[2] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar3)
                                                         ;
                                                         pUVar5 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                             TypeInfo_UnityEngine_GameObject);
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar5,"StickerModeButton",pSVar2,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar6 = UnityEngine_GameObject__get_transform
                                                                              (pUVar5,(MethodInfo *)0x0);
                                                           pUVar13 = (__this->fields)._emojiPanel;
                                                           if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                             pUVar7 = UnityEngine_GameObject__get_transform
                                                                                (pUVar13,(MethodInfo *)0x0);
                                                             if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                               UnityEngine_Transform__SetParent_2f5a7e0
                                                                         (pUVar6,pUVar7,false,
                                                                          (MethodInfo *)0x0);
                                                               pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_pivot
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f80000000000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x4170000042a00000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0xc0e0000041f00000,
                                                                    (MethodInfo *)0x0);
                                                         pTVar10 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                       if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                         (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
                                                                   (pTVar10,"Sticker",
                                                                    (pTVar10->klass->vtable)._66_set_text.
                                                                    method);
                                                         TMPro_TMP_Text__set_fontSize
                                                                   ((TMPro_TMP_Text_o *)pTVar10,14.0,
                                                                    (MethodInfo *)0x0);
                                                         TMPro_TMP_Text__set_alignment
                                                                   ((TMPro_TMP_Text_o *)pTVar10,0x202,
                                                                    (MethodInfo *)0x0);
                                                         local_88[0].r = 1.0;
                                                         local_88[0].g = 1.0;
                                                         local_88[0].b = 1.0;
                                                         local_88[0].a = 0.6;
                                                         (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
                                                                   (pTVar10,(UnityEngine_Color_o *)local_88,
                                                                    (pTVar10->klass->vtable)._23_set_color.
                                                                    method);
                                                         pUVar11 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       (__this->fields)._stickerModeButton = pUVar11;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._stickerModeButton,pUVar11
                                                                 );
                                                       pUVar11 = (__this->fields)._stickerModeButton;
                                                       if (pUVar11 != (UnityEngine_UI_Button_o *)0x0) {
                                                         pUVar1 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (pUVar11->fields).m_OnClick;
                                                         pUVar12 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__1
                                                       ,(MethodInfo *)0x0);
                                                       if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (pUVar1,pUVar12,(MethodInfo *)0x0);
                                                         pSVar2 = (System_Type_array *)
                                                                  SZArrayNew(TypeInfo_System_Type_array,2);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_RectTransform
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_array *)0x0) {
                                                           if (pSVar3 != (System_Type_o *)0x0) {
                                                             pIVar4 = il2cpp_vm_Object_IsInst
                                                                                ((Il2CppObject *)pSVar3,
                                                                                 (((pSVar2->obj).klass)->_1).
                                                                                 element_class);
                                                             if (pIVar4 == (Il2CppObject *)0x0) {
                                                               pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_UI_GridLayoutGroup,
                                                       (MethodInfo *)0x0);
                                                       if (pSVar3 != (System_Type_o *)0x0) {
                                                         pIVar4 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar3,
                                                                             (((pSVar2->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar4 == (Il2CppObject *)0x0) {
                                                           pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (1 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[1] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3)
                                                         ;
                                                         pUVar5 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                             TypeInfo_UnityEngine_GameObject);
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar5,"EmojiGrid",pSVar2,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar6 = UnityEngine_GameObject__get_transform
                                                                              (pUVar5,(MethodInfo *)0x0);
                                                           pUVar13 = (__this->fields)._emojiPanel;
                                                           if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                             pUVar7 = UnityEngine_GameObject__get_transform
                                                                                (pUVar13,(MethodInfo *)0x0);
                                                             if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                               UnityEngine_Transform__SetParent_2f5a7e0
                                                                         (pUVar6,pUVar7,false,
                                                                          (MethodInfo *)0x0);
                                                               pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                            static_fields->FullStretchStart).
                                                                           fields,(MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           (TypeInfo_UI_ChatPanel_UIAnchors->
                                                                            static_fields->FullStretch).fields
                                                                    ,(MethodInfo *)0x0);
                                                         if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&TypeInfo_UnityEngine_Vector2);
                                                           Il2CppMethodInitialized_18433e3c9 = '\x01';
                                                         }
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           (TypeInfo_UnityEngine_Vector2->
                                                                            static_fields->zeroVector).fields,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_offsetMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x41f0000041700000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_offsetMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0xc1b00000c1700000,
                                                                    (MethodInfo *)0x0);
                                                         __this_01 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_GridLayoutGroup
                                                       );
                                                       if (__this_01 !=
                                                           (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
                                                         UnityEngine_UI_GridLayoutGroup__set_cellSize
                                                                   (__this_01,
                                                                    (UnityEngine_Vector2_o)0x4220000042200000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_UI_GridLayoutGroup__set_spacing
                                                                   (__this_01,
                                                                    (UnityEngine_Vector2_o)0x40a0000040a00000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_UI_GridLayoutGroup__set_constraint
                                                                   (__this_01,1,(MethodInfo *)0x0);
                                                         UnityEngine_UI_GridLayoutGroup__set_constraintCount
                                                                   (__this_01,4,(MethodInfo *)0x0);
                                                         pSVar2 = (System_Type_array *)
                                                                  SZArrayNew(TypeInfo_System_Type_array,1);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_RectTransform
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_array *)0x0) {
                                                           if (pSVar3 != (System_Type_o *)0x0) {
                                                             pIVar4 = il2cpp_vm_Object_IsInst
                                                                                ((Il2CppObject *)pSVar3,
                                                                                 (((pSVar2->obj).klass)->_1).
                                                                                 element_class);
                                                             if (pIVar4 == (Il2CppObject *)0x0) {
                                                               pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if ((int)pSVar2->max_length == 0) goto label_18222b31c;
                                                       pSVar2->m_Items[0] = pSVar3;
                                                       Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                       pUVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_UnityEngine_GameObject);
                                                       UnityEngine_GameObject___ctor_2f1abe0
                                                                 (pUVar5,"NavPanel",pSVar2,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar6 = UnityEngine_GameObject__get_transform
                                                                            (pUVar5,(MethodInfo *)0x0);
                                                         pUVar13 = (__this->fields)._emojiPanel;
                                                         if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar7 = UnityEngine_GameObject__get_transform
                                                                              (pUVar13,(MethodInfo *)0x0);
                                                           if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_2f5a7e0
                                                                       (pUVar6,pUVar7,false,(MethodInfo *)0x0)
                                                             ;
                                                             pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x0,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x3f800000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_pivot
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x3f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x4170000000000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x40f0000000000000,
                                                                    (MethodInfo *)0x0);
                                                         pSVar2 = (System_Type_array *)
                                                                  SZArrayNew(TypeInfo_System_Type_array,3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_RectTransform
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_array *)0x0) {
                                                           if (pSVar3 != (System_Type_o *)0x0) {
                                                             pIVar4 = il2cpp_vm_Object_IsInst
                                                                                ((Il2CppObject *)pSVar3,
                                                                                 (((pSVar2->obj).klass)->_1).
                                                                                 element_class);
                                                             if (pIVar4 == (Il2CppObject *)0x0) {
                                                               pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_UI_Button,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (1 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[1] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3)
                                                         ;
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_TMPro_TextMeshProUGUI,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (2 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[2] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar3)
                                                         ;
                                                         pUVar13 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar13,"BackButton",pSVar2,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar6 = UnityEngine_GameObject__get_transform
                                                                              (pUVar13,(MethodInfo *)0x0);
                                                           pUVar7 = UnityEngine_GameObject__get_transform
                                                                              (pUVar5,(MethodInfo *)0x0);
                                                           if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_2f5a7e0
                                                                       (pUVar6,pUVar7,false,(MethodInfo *)0x0)
                                                             ;
                                                             pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x0,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f80000000000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_pivot
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f00000000000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x4170000042700000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x41200000,
                                                                    (MethodInfo *)0x0);
                                                         pTVar10 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                       if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                         (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
                                                                   (pTVar10,"<",
                                                                    (pTVar10->klass->vtable)._66_set_text.
                                                                    method);
                                                         TMPro_TMP_Text__set_fontSize
                                                                   ((TMPro_TMP_Text_o *)pTVar10,14.0,
                                                                    (MethodInfo *)0x0);
                                                         TMPro_TMP_Text__set_alignment
                                                                   ((TMPro_TMP_Text_o *)pTVar10,0x202,
                                                                    (MethodInfo *)0x0);
                                                         local_88[0].r = 1.0;
                                                         local_88[0].g = 1.0;
                                                         local_88[0].b = 1.0;
                                                         local_88[0].a = 1.0;
                                                         (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
                                                                   (pTVar10,(UnityEngine_Color_o *)local_88,
                                                                    (pTVar10->klass->vtable)._23_set_color.
                                                                    method);
                                                         pUVar11 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       (__this->fields)._emojiBackButton = pUVar11;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._emojiBackButton,pUVar11);
                                                       pUVar11 = (__this->fields)._emojiBackButton;
                                                       if (pUVar11 != (UnityEngine_UI_Button_o *)0x0) {
                                                         pUVar1 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (pUVar11->fields).m_OnClick;
                                                         pUVar12 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__2
                                                       ,(MethodInfo *)0x0);
                                                       if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (pUVar1,pUVar12,(MethodInfo *)0x0);
                                                         pSVar2 = (System_Type_array *)
                                                                  SZArrayNew(TypeInfo_System_Type_array,2);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_RectTransform
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_array *)0x0) {
                                                           if (pSVar3 != (System_Type_o *)0x0) {
                                                             pIVar4 = il2cpp_vm_Object_IsInst
                                                                                ((Il2CppObject *)pSVar3,
                                                                                 (((pSVar2->obj).klass)->_1).
                                                                                 element_class);
                                                             if (pIVar4 == (Il2CppObject *)0x0) {
                                                               pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_TMPro_TextMeshProUGUI,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (1 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[1] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3)
                                                         ;
                                                         pUVar13 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar13,"PageText",pSVar2,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar6 = UnityEngine_GameObject__get_transform
                                                                              (pUVar13,(MethodInfo *)0x0);
                                                           pUVar7 = UnityEngine_GameObject__get_transform
                                                                              (pUVar5,(MethodInfo *)0x0);
                                                           if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_2f5a7e0
                                                                       (pUVar6,pUVar7,false,(MethodInfo *)0x0)
                                                             ;
                                                             pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x3f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_pivot
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f0000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x4170000042700000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x0,
                                                                    (MethodInfo *)0x0);
                                                         pTVar10 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                       (__this->fields)._emojiPageText = pTVar10;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._emojiPageText,pTVar10);
                                                       pTVar10 = (__this->fields)._emojiPageText;
                                                       if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                         TMPro_TMP_Text__set_fontSize
                                                                   ((TMPro_TMP_Text_o *)pTVar10,14.0,
                                                                    (MethodInfo *)0x0);
                                                         pTVar10 = (__this->fields)._emojiPageText;
                                                         if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                           TMPro_TMP_Text__set_alignment
                                                                     ((TMPro_TMP_Text_o *)pTVar10,0x202,
                                                                      (MethodInfo *)0x0);
                                                           pTVar10 = (__this->fields)._emojiPageText;
                                                           if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                             local_88[0].r = 1.0;
                                                             local_88[0].g = 1.0;
                                                             local_88[0].b = 1.0;
                                                             local_88[0].a = 1.0;
                                                             (*(pTVar10->klass->vtable)._23_set_color.
                                                               methodPtr)(pTVar10,(UnityEngine_Color_o *)
                                                                                  local_88,
                                                                          (pTVar10->klass->vtable).
                                                                          _23_set_color.method);
                                                             pSVar2 = (System_Type_array *)
                                                                      SZArrayNew(TypeInfo_System_Type_array,3)
                                                             ;
                                                             pSVar3 = System_Type__GetTypeFromHandle
                                                                                ((System_RuntimeTypeHandle_o)
                                                                                                                                                                  
                                                       TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_array *)0x0) {
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_UI_Button,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (1 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[1] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3)
                                                         ;
                                                         pSVar3 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_TMPro_TextMeshProUGUI,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar3 != (System_Type_o *)0x0) {
                                                           pIVar4 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar3,
                                                                               (((pSVar2->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar4 == (Il2CppObject *)0x0) {
                                                             pIVar4 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar4,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (2 < (uint)pSVar2->max_length) {
                                                         pSVar2->m_Items[2] = pSVar3;
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar3)
                                                         ;
                                                         pUVar13 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_UnityEngine_GameObject)
                                                         ;
                                                         UnityEngine_GameObject___ctor_2f1abe0
                                                                   (pUVar13,"NextButton",pSVar2,
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar6 = UnityEngine_GameObject__get_transform
                                                                              (pUVar13,(MethodInfo *)0x0);
                                                           pUVar7 = UnityEngine_GameObject__get_transform
                                                                              (pUVar5,(MethodInfo *)0x0);
                                                           if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_2f5a7e0
                                                                       (pUVar6,pUVar7,false,(MethodInfo *)0x0)
                                                             ;
                                                             pUVar8 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar8,(UnityEngine_Vector2_o)0x3f800000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f8000003f800000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_pivot
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x3f0000003f800000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar8,(UnityEngine_Vector2_o)
                                                                           0x4170000042700000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar8,(UnityEngine_Vector2_o)0xc1200000,
                                                                    (MethodInfo *)0x0);
                                                         pTVar10 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                                       if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                         (*(pTVar10->klass->vtable)._66_set_text.methodPtr)
                                                                   (pTVar10,">",
                                                                    (pTVar10->klass->vtable)._66_set_text.
                                                                    method);
                                                         TMPro_TMP_Text__set_fontSize
                                                                   ((TMPro_TMP_Text_o *)pTVar10,14.0,
                                                                    (MethodInfo *)0x0);
                                                         TMPro_TMP_Text__set_alignment
                                                                   ((TMPro_TMP_Text_o *)pTVar10,0x202,
                                                                    (MethodInfo *)0x0);
                                                         local_88[0].r = 1.0;
                                                         local_88[0].g = 1.0;
                                                         local_88[0].b = 1.0;
                                                         local_88[0].a = 1.0;
                                                         (*(pTVar10->klass->vtable)._23_set_color.methodPtr)
                                                                   (pTVar10,(UnityEngine_Color_o *)local_88,
                                                                    (pTVar10->klass->vtable)._23_set_color.
                                                                    method);
                                                         pUVar11 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar13,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       (__this->fields)._emojiNextButton = pUVar11;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._emojiNextButton,pUVar11);
                                                       pUVar11 = (__this->fields)._emojiNextButton;
                                                       if (pUVar11 != (UnityEngine_UI_Button_o *)0x0) {
                                                         pUVar1 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (pUVar11->fields).m_OnClick;
                                                         pUVar12 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_ChatPanel_c__DisplayClass75_0_CreateEmojiPanel_b__3
                                                       ,(MethodInfo *)0x0);
                                                       if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (pUVar1,pUVar12,(MethodInfo *)0x0);
                                                         UI_ChatPanel__AddEmojiButtons
                                                                   (__this,(object->fields).tooltipText,
                                                                    (MethodInfo *)0x0);
                                                         UI_ChatPanel__SetPanelMode
                                                                   (__this,0,(MethodInfo *)0x0);
                                                         pUVar5 = (__this->fields)._emojiPanel;
                                                         if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                           UnityEngine_GameObject__SetActive
                                                                     (pUVar5,false,(MethodInfo *)0x0);
                                                           return;
                                                         }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b1c6;
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b31c;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b1c6;
                                                       }
                                                       }
                                                       goto label_18222b31c;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b1c6;
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b31c;
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
                                                       goto label_18222b1c6;
                                                       }
                                                       }
                                                       goto label_18222b31c;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b1c6;
                                                       }
                                                       }
                                                       }
                                                       goto label_18222b31c;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                      goto label_18222b1c6;
                                                    }
                                                  }
                                                }
                                                goto label_18222b31c;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto label_18222b1c6;
                            }
                          }
                          goto label_18222b31c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_18222b1c6;
        }
      }
label_18222b31c:
      ThrowIndexOutOfRangeException();
    }
  }
label_18222b1c6:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$AddEmojiButtons
// il2cpp: void UI_ChatPanel__AddEmojiButtons (UI_ChatPanel_o* __this, TMPro_TextMeshProUGUI_o* tooltipText, const MethodInfo* method);
// 0x182228e40
// eh: try 0x182228f70..0x18222900a -> pad 0x183315f50 catch Il2CppExceptionWrapper
// eh: try 0x18222900a..0x182229062 -> pad 0x180026a30 cleanup
// eh: try 0x182229062..0x182229256 -> pad 0x183315f50 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182228f69: nop dword ptr [rax]
// asm:   0x18222902a: mov rdx, qword ptr [rip + 0x1e5b80f]  ; TypeInfo_UnityEngine_Transform
// asm:   0x182229031: mov r9, qword ptr [rax]
// asm:   0x182229034: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x18222903b: cmp byte ptr [r9 + 0x130], al
// asm:   0x182229042: jb 0x182229243
// asm:   0x1822290b9: lea rcx, [rsp + 0x50]
// asm:   0x1822290be: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1822290c3: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822290c8: test rcx, rcx
// asm:   0x1822290cb: jne 0x182229256
// asm:   0x1822290d1: xor r14d, r14d
// asm:   0x1822290d4: mov r12, qword ptr [rsp + 0xa8]
// asm:   0x1822290dc: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x1822290e4: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x182229102: cmp ebx, edi
// asm:   0x182229106: nop word ptr [rax + rax]
// asm:   0x182229256: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315f50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315f55: push rbp
// asm:   0x183315f56: sub rsp, 0x30
// asm:   0x183315f5a: mov rbp, rdx
// asm:   0x183315f5d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183315f61: mov rcx, qword ptr [rax]
// asm:   0x183315f64: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183315f68: movabs rax, 0
// asm:   0x183315f72: add rsp, 0x30
// asm:   0x183315f76: pop rbp
// asm:   0x183315f77: ret 

void UI_ChatPanel__AddEmojiButtons
               (UI_ChatPanel_o *__this,TMPro_TextMeshProUGUI_o *tooltipText,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UI_Button_o *pUVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  bool bVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_GridLayoutGroup_o *emojiGrid;
  void *pvVar9;
  VirtualInvokeData *pVVar10;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar11;
  Il2CppObject *arg1;
  System_String_o *pSVar12;
  ushort uVar13;
  int spriteIndex;
  int iVar14;
  UI_ChatPanel_o *local_res8;
  TMPro_TextMeshProUGUI_o *local_res10;
  UnityEngine_UI_GridLayoutGroup_o *local_res20;
  Il2CppObject *local_68;
  Il2CppObject *local_60 [2];
  undefined8 local_50;
  Il2CppObject **local_48;
  Il2CppObject **local_40;
  
  local_res8 = __this;
  local_res10 = tooltipText;
  if (Il2CppMethodInitialized_1843471d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_GridLayoutGroup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"{0}/{1}");
    Il2CppMethodInitialized_1843471d3 = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  local_60[0] = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._emojiPanel;
  if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar8 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar8 = UnityEngine_Transform__Find(pUVar8,"EmojiGrid",(MethodInfo *)0x0),
      pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
     ((emojiGrid = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar8,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_GridLayoutGroup),
      local_res20 = emojiGrid, emojiGrid != (UnityEngine_UI_GridLayoutGroup_o *)0x0 &&
      (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)emojiGrid,(MethodInfo *)0x0),
      pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
    local_68 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
    local_50 = 0;
    local_48 = &local_68;
    local_40 = local_60;
    while( true ) {
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar9 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_68);
      pIVar11 = local_68;
      if ((char)pvVar9 == '\0') break;
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_68->klass;
      uVar2 = (pIVar3->_2).interface_offsets_count;
      uVar13 = 0;
      if (uVar2 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        do {
          if (pIVar4[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar3->vtable + (pIVar4[uVar13].offset + 1);
            goto label_182228ff5;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar2);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_182228ff5:
      __this_01 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pIVar11,pVVar10->method);
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    local_60[0] = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
    if (local_60[0] != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_60[0]);
    }
    spriteIndex = (__this->fields)._emojiPage * 0x10;
    iVar14 = 0x8d;
    if (spriteIndex + 0x10 < 0x8d) {
      iVar14 = spriteIndex + 0x10;
    }
    for (; spriteIndex < iVar14; spriteIndex = spriteIndex + 1) {
      UI_ChatPanel__CreateSpriteButton
                (__this,emojiGrid,tooltipText,spriteIndex,(__this->fields)._panelMode == 1,(MethodInfo *)0x0);
    }
    pUVar5 = (__this->fields)._emojiBackButton;
    if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar5,0 < (__this->fields)._emojiPage,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._emojiNextButton;
      if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pUVar5,iVar14 < 0x8d,(MethodInfo *)0x0);
        pTVar6 = (__this->fields)._emojiPageText;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pTVar6 = (__this->fields)._emojiPageText;
          local_res8 = (UI_ChatPanel_o *)CONCAT44(local_res8._4_4_,(__this->fields)._emojiPage + 1);
          pIVar11 = il2cpp_value_box(g_data_184354e08,&local_res8);
          local_res20 = (UnityEngine_UI_GridLayoutGroup_o *)CONCAT44(local_res20._4_4_,9);
          arg1 = il2cpp_value_box(g_data_184354e08,&local_res20);
          pSVar12 = System_String__Format_196d440("{0}/{1}",pIVar11,arg1,(MethodInfo *)0x0);
          if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pTVar6->klass->vtable)._66_set_text.methodPtr)
                    (pTVar6,pSVar12,(pTVar6->klass->vtable)._66_set_text.method);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$CreateSpriteButton
// il2cpp: void UI_ChatPanel__CreateSpriteButton (UI_ChatPanel_o* __this, UnityEngine_UI_GridLayoutGroup_o* emojiGrid, TMPro_TextMeshProUGUI_o* tooltipText, int32_t spriteIndex, bool isSticker, const MethodInfo* method);
// 0x18222b4f0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222bd57: xor r8d, r8d
// asm:   0x18222bd5a: mov rdx, rdi
// asm:   0x18222bd5d: mov rcx, rbx
// asm:   0x18222bd60: call 0x182f5e5a0  ; UnityEngine_Events_UnityEvent__AddListener()
// asm:   0x18222bd65: mov rdx, qword ptr [rip + 0x1e80ebc]  ; MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger
// asm:   0x18222bd6c: mov rcx, rbp
// asm:   0x18222bd6f: call 0x1806f4d60  ; UnityEngine_GameObject__AddComponent_object_()
// asm:   0x18222bd74: jmp 0x18222bd2b

void UI_ChatPanel__CreateSpriteButton
               (UI_ChatPanel_o *__this,UnityEngine_UI_GridLayoutGroup_o *emojiGrid,
               TMPro_TextMeshProUGUI_o *tooltipText,int32_t spriteIndex,bool isSticker,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar1;
  Il2CppType *pIVar2;
  UI_ChatPanel___c__DisplayClass77_0_o *object;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_Type_array *pSVar5;
  System_Type_o *pSVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *__this_04;
  UnityEngine_UI_Button_o *pUVar10;
  UnityEngine_Events_UnityAction_o *__this_05;
  UnityEngine_EventSystems_EventTrigger_o *__this_06;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar11;
  DG_Tweening_Core_DOSetter_T__o *pDVar12;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar13;
  System_String_o *arg0;
  int32_t local_48 [4];
  UnityEngine_Color_Fields local_38;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_1843471d4 == '\0') {
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
              (&MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass77_0);
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
    Il2CppMethodInitialized_1843471d4 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass77_0);
  UI_ChatPanel___c__DisplayClass77_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (UI_ChatPanel___c__DisplayClass77_0_o *)0x0) {
label_18222bd76:
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  (object->fields).spriteIndex = spriteIndex;
  (object->fields).tooltipText = tooltipText;
  Il2CppCodeGenWriteBarrier(&(object->fields).tooltipText,tooltipText);
  pSVar4 = "{0}{1}";
  arg0 = "StickerButton_";
  if (!isSticker) {
    arg0 = "EmojiButton_";
  }
  local_48[0] = (object->fields).spriteIndex;
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_48);
  pSVar4 = System_String__Format_196d440(pSVar4,(Il2CppObject *)arg0,pIVar3,(MethodInfo *)0x0);
  pSVar5 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pIVar2 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
  if (pSVar5 == (System_Type_array *)0x0) goto label_18222bdde;
  if ((pSVar6 != (System_Type_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)pSVar5->max_length != 0) {
    pSVar5->m_Items[0] = pSVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar6);
    pSVar6 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
    if ((pSVar6 != (System_Type_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if (1 < (uint)pSVar5->max_length) {
      pSVar5->m_Items[1] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar6);
      pSVar6 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if ((pSVar6 != (System_Type_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if (2 < (uint)pSVar5->max_length) {
        pSVar5->m_Items[2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2,pSVar6);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this_01,pSVar4,pSVar5,(MethodInfo *)0x0);
        if (((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar7 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
            emojiGrid != (UnityEngine_UI_GridLayoutGroup_o *)0x0)) &&
           (pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)emojiGrid,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar7,pUVar8,false,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
          if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
            local_38.r = 0.3;
            local_38.g = 0.3;
            local_38.b = 0.3;
            local_38.a = 0.8;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)&local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pSVar4 = "EmojiText";
            if (isSticker) {
              pSVar4 = "StickerText";
            }
            pSVar5 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
            pIVar2 = TypeRef_UnityEngine_RectTransform;
            if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354ea0);
            }
            pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            if (pSVar5 == (System_Type_array *)0x0) {
label_18222bdd2:
              ThrowNullReferenceException();
            }
            if ((pSVar6 != (System_Type_o *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
            if ((int)pSVar5->max_length != 0) {
              pSVar5->m_Items[0] = pSVar6;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar6);
              pSVar6 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0)
              ;
              if ((pSVar6 != (System_Type_o *)0x0) &&
                 (pIVar3 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
                 pIVar3 == (Il2CppObject *)0x0)) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
              if (1 < (uint)pSVar5->max_length) {
                pSVar5->m_Items[1] = pSVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar6);
                __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                UnityEngine_GameObject___ctor_2f1abe0(__this_02,pSVar4,pSVar5,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar8 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent_2f5a7e0(pUVar7,pUVar8,false,(MethodInfo *)0x0);
                    __this_03 = UnityEngine_GameObject__GetComponent_object_
                                          (__this_02,
                                           (MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
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
                                             (MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                      local_38.r = (float)(object->fields).spriteIndex;
                      pIVar3 = il2cpp_value_box(g_data_184354e08,&local_38);
                      pSVar4 = System_String__Format("<sprite={0}>",pIVar3,(MethodInfo *)0x0);
                      if (__this_04 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        (*(__this_04->klass->vtable)._66_set_text.methodPtr)
                                  (__this_04,pSVar4,(__this_04->klass->vtable)._66_set_text.method);
                        TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_04,30.0,(MethodInfo *)0x0);
                        TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_04,0x202,(MethodInfo *)0x0);
                        TMPro_TMP_Text__set_verticalAlignment
                                  ((TMPro_TMP_Text_o *)__this_04,0x200,(MethodInfo *)0x0);
                        TMPro_TMP_Text__set_enableAutoSizing
                                  ((TMPro_TMP_Text_o *)__this_04,false,(MethodInfo *)0x0);
                        local_28.r = 1.0;
                        local_28.g = 1.0;
                        local_28.b = 1.0;
                        local_28.a = 1.0;
                        (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                                  (__this_04,(UnityEngine_Color_o *)&local_28,
                                   (__this_04->klass->vtable)._23_set_color.method);
                        pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                            (__this_01,
                                             (MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                        if (pUVar10 != (UnityEngine_UI_Button_o *)0x0) {
                          __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar10->fields).m_OnClick;
                          __this_05 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          if (isSticker) {
                            UnityEngine_Events_UnityAction___ctor
                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,
                                       (Il2CppObject *)object,
                                       (intptr_t)
                                       MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__0,
                                       (MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (__this_00,__this_05,(MethodInfo *)0x0);
                              UnityEngine_GameObject__AddComponent_object_
                                        (__this_01,
                                         (MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
                              return;
                            }
                          }
                          else {
                            UnityEngine_Events_UnityAction___ctor
                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,
                                       (Il2CppObject *)object,
                                       (intptr_t)
                                       MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__1,
                                       (MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (__this_00,__this_05,(MethodInfo *)0x0);
                              __this_06 = UnityEngine_GameObject__AddComponent_object_
                                                    (__this_01,
                                                     (MethodInfo_6F4D60 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger
                                                    );
                              pUVar11 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)
                                                   TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                              UnityEngine_EventSystems_EventTrigger_Entry___ctor(pUVar11,(MethodInfo *)0x0);
                              if (pUVar11 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                                (pUVar11->fields).eventID = 0;
                                pUVar1 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                         (pUVar11->fields).callback;
                                pDVar12 = (DG_Tweening_Core_DOSetter_T__o *)
                                          il2cpp_codegen_object_new
                                                    ((Il2CppClass *)
                                                     TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
                                UnityEngine_Events_UnityAction_object____ctor
                                          (pDVar12,(Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__2
                                           ,(MethodInfo_EB6EC0 *)0x0);
                                if (((pUVar1 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) &&
                                    (UnityEngine_Events_UnityEvent_Vector2___AddListener
                                               (pUVar1,(UnityEngine_Events_UnityAction_T0__o *)pDVar12,
                                                (MethodInfo_EBBB50 *)
                                                MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                               ), __this_06 != (UnityEngine_EventSystems_EventTrigger_o *)0x0)
                                    ) && (pSVar13 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                                              (__this_06,(MethodInfo *)0x0),
                                         pSVar13 !=
                                         (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
                                  il2cpp_runtime_helper_180012890(pSVar13,pUVar11,
                                                MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add
                                               );
                                  pUVar11 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
                                  UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                            (pUVar11,(MethodInfo *)0x0);
                                  if (pUVar11 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                                    (pUVar11->fields).eventID = 1;
                                    pUVar1 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                             (pUVar11->fields).callback;
                                    pDVar12 = (DG_Tweening_Core_DOSetter_T__o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction_BaseEventData
                                                        );
                                    UnityEngine_Events_UnityAction_object____ctor
                                              (pDVar12,(Il2CppObject *)object,
                                               (intptr_t)
                                               MethodInfo_UI_ChatPanel_c__DisplayClass77_0_CreateSpriteButton_b__3
                                               ,(MethodInfo_EB6EC0 *)0x0);
                                    if (pUVar1 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                                      UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                (pUVar1,(UnityEngine_Events_UnityAction_T0__o *)pDVar12,
                                                 (MethodInfo_EBBB50 *)
                                                 MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener
                                                );
                                      pSVar13 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                                          (__this_06,(MethodInfo *)0x0);
                                      if (pSVar13 !=
                                          (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0) {
                                        il2cpp_runtime_helper_180012890(pSVar13,pUVar11,
                                                      MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add
                                                     );
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto label_18222bd76;
                      }
                    }
                  }
                }
                goto label_18222bdd2;
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
label_18222bdde:
        ThrowNullReferenceException();
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPanel$$ShowTemporaryTooltip
// il2cpp: System_Collections_IEnumerator_o* UI_ChatPanel__ShowTemporaryTooltip (UI_ChatPanel_o* __this, TMPro_TextMeshProUGUI_o* tooltip, System_String_o* message, float duration, const MethodInfo* method);
// 0x182234870

System_Collections_IEnumerator_o *
UI_ChatPanel__ShowTemporaryTooltip
          (UI_ChatPanel_o *__this,TMPro_TextMeshProUGUI_o *tooltip,System_String_o *message,float duration,
          MethodInfo *method)

{
  UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this_00;
  
  if (Il2CppMethodInitialized_1843471d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__78);
    Il2CppMethodInitialized_1843471d5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__78);
  UI_ChatPanel__ShowTemporaryTooltip_d__78___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *)0x0) {
    (__this_00->fields).tooltip = tooltip;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,tooltip);
    (__this_00->fields).message = message;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).message,message);
    (__this_00->fields).duration = duration;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ChangeEmojiPage
// il2cpp: void UI_ChatPanel__ChangeEmojiPage (UI_ChatPanel_o* __this, int32_t delta, TMPro_TextMeshProUGUI_o* tooltipText, const MethodInfo* method);
// 0x1822296a0

void UI_ChatPanel__ChangeEmojiPage
               (UI_ChatPanel_o *__this,int32_t delta,TMPro_TextMeshProUGUI_o *tooltipText,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = (__this->fields)._emojiPage + delta;
  if (iVar1 < 9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 8;
  }
  (__this->fields)._emojiPage = iVar1;
  UI_ChatPanel__AddEmojiButtons(__this,tooltipText,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel$$SetPanelMode
// il2cpp: void UI_ChatPanel__SetPanelMode (UI_ChatPanel_o* __this, int32_t mode, const MethodInfo* method);
// 0x182230920

void UI_ChatPanel__SetPanelMode(UI_ChatPanel_o *__this,int32_t mode,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843471d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipArea");
    Il2CppMethodInitialized_1843471d6 = '\x01';
  }
  pUVar1 = (__this->fields)._emojiModeButton;
  (__this->fields)._panelMode = mode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar6 = 1.0;
  if (bVar2) {
    pUVar1 = (__this->fields)._emojiModeButton;
    if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto label_182230b38;
    pTVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
    if (mode == 0) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = 0.6;
    }
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182230b38;
    local_28[0].fields.r = 1.0;
    local_28[0].fields.g = 1.0;
    local_28[0].fields.b = 1.0;
    local_28[0].fields.a = fVar5;
    (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
              (pTVar3,local_28,(pTVar3->klass->vtable)._23_set_color.method);
  }
  pUVar1 = (__this->fields)._stickerModeButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._stickerModeButton;
    if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto label_182230b38;
    pTVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
    if (mode != 1) {
      fVar6 = 0.6;
    }
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182230b38;
    local_28[0].fields.r = 1.0;
    local_28[0].fields.g = 1.0;
    local_28[0].fields.b = 1.0;
    local_28[0].fields.a = fVar6;
    (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
              (pTVar3,local_28,(pTVar3->klass->vtable)._23_set_color.method);
  }
  if (mode == 0) {
    (__this->fields)._stickerInserted = false;
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields)._stickerTag = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerTag,value);
  }
  __this_00 = (__this->fields)._emojiPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"TooltipArea",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pTVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI
                           );
        UI_ChatPanel__AddEmojiButtons(__this,pTVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182230b38:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$InsertSticker
// il2cpp: void UI_ChatPanel__InsertSticker (UI_ChatPanel_o* __this, int32_t spriteIndex, const MethodInfo* method);
// 0x18222d5a0

void UI_ChatPanel__InsertSticker(UI_ChatPanel_o *__this,int32_t spriteIndex,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TextMeshProUGUI_o *x;
  UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this_00;
  UnityEngine_Coroutine_o *value_00;
  float fVar8;
  float fVar9;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843471d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&":s{0}{1}:");
    il2cpp_codegen_initialize_runtime_metadata(&"Sticker cooldown: {0}s");
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipArea");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x8b\xe2\x80\x8b");
    Il2CppMethodInitialized_1843471d7 = '\x01';
  }
  fVar8 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if (fVar8 - (__this->fields)._lastStickerSentTime < 15.0) {
    fVar9 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._emojiPanel;
    fVar8 = (__this->fields)._lastStickerSentTime;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18222d952;
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"TooltipArea",(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar7,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
        goto label_18222d822;
      }
    }
    x = (TMPro_TextMeshProUGUI_o *)0x0;
label_18222d822:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((__this->fields)._tooltipCoroutine != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                  ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._tooltipCoroutine,(MethodInfo *)0x0)
        ;
      }
      local_res8[0] = il2cpp_runtime_helper_1804f4070(15.0 - (fVar9 - fVar8));
      pIVar5 = il2cpp_value_box(g_data_184354e38,local_res8);
      pSVar6 = System_String__Format("Sticker cooldown: {0}s",pIVar5,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_1843471d5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__78);
        Il2CppMethodInitialized_1843471d5 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ShowTemporaryTooltip_d__78);
      UI_ChatPanel__ShowTemporaryTooltip_d__78___ctor
                ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
      if (__this_00 == (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).tooltip = x;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,x);
      (__this_00->fields).message = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).message,pSVar6);
      (__this_00->fields).duration = 1.5;
      value_00 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                           ((UnityEngine_MonoBehaviour_o *)__this,
                            (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._tooltipCoroutine = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipCoroutine,value_00);
    }
    return;
  }
  local_res8[0] = spriteIndex;
  pIVar5 = il2cpp_value_box(g_data_184354e08,local_res8);
  pSVar6 = System_String__Format_196d440
                     (":s{0}{1}:",(Il2CppObject *)"\xe2\x80\x8b\xe2\x80\x8b",pIVar5,(MethodInfo *)0x0);
  (__this->fields)._stickerInserted = true;
  (__this->fields)._stickerTag = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerTag,pSVar6);
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._inputField;
    if (((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
        (TMPro_TMP_InputField__set_text(pTVar1,pSVar6,(MethodInfo *)0x0), pSVar6 == (System_String_o *)0x0))
       || (pTVar1 = (__this->fields)._inputField, pTVar1 == (TMPro_TMP_InputField_o *)0x0))
    goto label_18222d952;
    value = (pSVar6->fields)._stringLength;
    TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18222d952;
    TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18222d952;
    TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if ((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
       (pTVar2 = (pTVar1->fields).m_TextComponent, pTVar2 == (TMPro_TMP_Text_o *)0x0)) goto label_18222d952;
    (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18222d952;
    TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  }
  UI_ChatPanel__SubmitProcessedInput(__this,(MethodInfo *)0x0);
  fVar8 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  (__this->fields)._lastStickerSentTime = fVar8;
  if ((__this->fields)._emojiPanelActive != false) {
    pUVar3 = (__this->fields)._emojiPanel;
    (__this->fields)._emojiPanelActive = false;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_18222d952;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__DeactivateInputField(pTVar1,false,(MethodInfo *)0x0);
    return;
  }
label_18222d952:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$InsertEmoji
// il2cpp: void UI_ChatPanel__InsertEmoji (UI_ChatPanel_o* __this, int32_t spriteIndex, const MethodInfo* method);
// 0x18222d420

void UI_ChatPanel__InsertEmoji(UI_ChatPanel_o *__this,int32_t spriteIndex,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  int32_t startIndex;
  Il2CppObject *arg0;
  System_String_o *value;
  System_String_o *pSVar2;
  int32_t iVar3;
  int value_00;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843471d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":{0}:");
    Il2CppMethodInitialized_1843471d8 = '\x01';
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
        local_res8[0] = spriteIndex;
        arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
        value = System_String__Format(":{0}:",arg0,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
           (startIndex = TMPro_TMP_InputField__get_selectionFocusPosition(pTVar1,(MethodInfo *)0x0),
           pSVar2 != (System_String_o *)0x0)) {
          pSVar2 = System_String__Insert(pSVar2,startIndex,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            if ((pTVar1->fields).m_CharacterLimit < 1) {
              iVar3 = 0x7fffffff;
            }
            else {
              iVar3 = (pTVar1->fields).m_CharacterLimit;
            }
            if (pSVar2 != (System_String_o *)0x0) {
              if (iVar3 < (pSVar2->fields)._stringLength) {
                return;
              }
              TMPro_TMP_InputField__set_text(pTVar1,pSVar2,(MethodInfo *)0x0);
              if ((value != (System_String_o *)0x0) &&
                 (pTVar1 = (__this->fields)._inputField, pTVar1 != (TMPro_TMP_InputField_o *)0x0)) {
                value_00 = (value->fields)._stringLength + startIndex;
                TMPro_TMP_InputField__set_caretPosition(pTVar1,value_00,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value_00,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._inputField;
                  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                    TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value_00,(MethodInfo *)0x0);
                    pTVar1 = (__this->fields)._inputField;
                    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                      TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$Sync
// il2cpp: void UI_ChatPanel__Sync (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182234c70

void UI_ChatPanel__Sync(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0);
  UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)0x0);
  UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)0x0);
  UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel$$RefreshDisplayedMessages
// il2cpp: void UI_ChatPanel__RefreshDisplayedMessages (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222f150
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222f4ed: mov rcx, rdi
// asm:   0x18222f4f0: jmp 0x18222f68b
// asm:   0x18222f688: mov rcx, r14

void UI_ChatPanel__RefreshDisplayedMessages(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar4;
  Photon_Realtime_Player_o *pPVar5;
  int8_t iVar6;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar7;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this_00;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *str1;
  System_DateTime_o timestamp;
  GameManagers_ChatManager_ChatDisplayLine_o *pGVar10;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *pSVar11;
  int index;
  bool bVar12;
  System_String_o *local_a8;
  undefined8 uStack_a0;
  System_String_o *local_98;
  System_String_o *pSStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  GameManagers_ChatManager_ChatDisplayLine_o local_68;
  
  if (Il2CppMethodInitialized_1843471d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
    il2cpp_codegen_initialize_runtime_metadata(&"Private chat with ");
    Il2CppMethodInitialized_1843471d9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
  System_Collections_Generic_List_ChatManager_ChatDisplayLine____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor)
  ;
  pSVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
  System_Collections_Generic_List_ChatManager_ChatDisplayLine____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor)
  ;
  if (((__this->fields)._inPMMode != false) &&
     ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0)) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar9 = GameManagers_ChatManager__GetColorString("Private chat with ",3,false,(MethodInfo *)0x0);
    str1 = GameManagers_ChatManager__GetPlayerIdentifier((__this->fields)._currentPMTarget,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_1969e50(pSVar9,str1,(MethodInfo *)0x0);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    timestamp = System_DateTime__get_Now((MethodInfo *)0x0);
    pSVar9 = GameManagers_ChatManager__GetFormattedMessage(pSVar9,timestamp,true,(MethodInfo *)0x0);
    pGVar10 = GameManagers_ChatManager_ChatDisplayLine__Plain(&local_68,pSVar9,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
    goto label_18222f744;
    local_a8 = (pGVar10->fields).PlainText;
    uStack_a0 = *(undefined8 *)&(pGVar10->fields).UsePlayerStyle;
    local_98 = (pGVar10->fields).TimeText;
    pSStack_90 = (pGVar10->fields).IdText;
    local_88 = *(undefined4 *)&(pGVar10->fields).SenderName;
    uStack_84 = *(undefined4 *)((longlong)&(pGVar10->fields).SenderName + 4);
    uStack_80 = *(undefined4 *)&(pGVar10->fields).BodyText;
    uStack_7c = *(undefined4 *)((longlong)&(pGVar10->fields).BodyText + 4);
    local_78 = *(undefined8 *)&(pGVar10->fields).SenderID;
    il2cpp_runtime_helper_18003e9d0(__this_00,&local_a8,
                  MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add);
  }
  index = 0;
  while( true ) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_18222f744;
    if ((pSVar2->fields)._size <= index) break;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar3 = (System_Collections_Generic_List_T__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
    if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222f744;
    iVar6 = System_Collections_Generic_List_sbyte___get_Item
                      (pSVar3,index,
                       (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    if (iVar6 == '\0') {
      if (((__this->fields)._inPMMode == false) ||
         ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0)) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
        if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222f744;
        iVar6 = System_Collections_Generic_List_sbyte___get_Item
                          (pSVar3,index,
                           (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        if (iVar6 != '\0') goto label_18222f4c1;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
        if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222f744;
        iVar6 = System_Collections_Generic_List_sbyte___get_Item
                          (pSVar3,index,
                           (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        if (iVar6 != '\0') {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar3 = (System_Collections_Generic_List_T__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
          if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222f744;
          iVar6 = System_Collections_Generic_List_sbyte___get_Item
                            (pSVar3,index,
                             (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
          if (iVar6 == '\0') goto label_18222f6bc;
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
        if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222f744;
        iVar6 = System_Collections_Generic_List_sbyte___get_Item
                          (pSVar3,index,
                           (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        if (iVar6 == '\0') {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar3 = (System_Collections_Generic_List_T__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
          if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
            iVar6 = System_Collections_Generic_List_sbyte___get_Item
                              (pSVar3,index,
                               (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
            bVar12 = iVar6 == '\0';
            goto label_18222f4bb;
          }
          goto label_18222f744;
        }
      }
      else {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
        if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222f744;
        iVar6 = System_Collections_Generic_List_sbyte___get_Item
                          (pSVar3,index,
                           (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        if (iVar6 != '\0') {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar4 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
          if (pSVar4 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
            SVar7 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                    System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              (pSVar4,index,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            pPVar5 = (__this->fields)._currentPMTarget;
            if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
              if (SVar7 != (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                           (pPVar5->fields).actorNumber) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar4 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                         TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
                if (pSVar4 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
                goto label_18222f744;
                SVar7 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                        System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                                  (pSVar4,index,
                                   (MethodInfo_92B8E0 *)
                                   MethodInfo_System_Collections_Generic_List_int_get_Item);
                pPVar5 = (__this->fields)._currentPMTarget;
                if (pPVar5 == (Photon_Realtime_Player_o *)0x0) goto label_18222f744;
                bVar12 = SVar7 == (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                                  (pPVar5->fields).actorNumber;
label_18222f4bb:
                if (!bVar12) goto label_18222f6bc;
              }
label_18222f4c1:
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pGVar10 = GameManagers_ChatManager__GetDisplayLine(&local_68,index,(MethodInfo *)0x0);
              pSVar11 = __this_00;
              if (__this_00 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
              goto label_18222f68b;
            }
          }
          goto label_18222f744;
        }
      }
    }
    else {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pGVar10 = GameManagers_ChatManager__GetDisplayLine(&local_68,index,(MethodInfo *)0x0);
      pSVar11 = pSVar8;
      if (pSVar8 == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) goto label_18222f744;
label_18222f68b:
      local_a8 = (pGVar10->fields).PlainText;
      uStack_a0 = *(undefined8 *)&(pGVar10->fields).UsePlayerStyle;
      local_98 = (pGVar10->fields).TimeText;
      pSStack_90 = (pGVar10->fields).IdText;
      local_88 = *(undefined4 *)&(pGVar10->fields).SenderName;
      uStack_84 = *(undefined4 *)((longlong)&(pGVar10->fields).SenderName + 4);
      uStack_80 = *(undefined4 *)&(pGVar10->fields).BodyText;
      uStack_7c = *(undefined4 *)((longlong)&(pGVar10->fields).BodyText + 4);
      local_78 = *(undefined8 *)&(pGVar10->fields).SenderID;
      il2cpp_runtime_helper_18003e9d0(pSVar11,&local_a8,
                    MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add);
    }
label_18222f6bc:
    index = index + 1;
  }
  if (__this_00 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
    System_Collections_Generic_List_ChatManager_ChatDisplayLine___AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,
               (MethodInfo_9AD100 *)
               MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_AddRange);
    pSVar8 = (__this->fields)._visibleMessages;
    if (pSVar8 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
      length = (pSVar8->fields)._size;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar8->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pSVar8 = (__this->fields)._visibleMessages;
      if (pSVar8 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
        System_Collections_Generic_List_ChatManager_ChatDisplayLine___AddRange
                  (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)__this_00,
                   (MethodInfo_9AD100 *)
                   MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_AddRange);
        UI_ChatPanel__UpdateVisibleMessages_22356c0(__this,__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18222f744:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateVisibleMessages
// il2cpp: void UI_ChatPanel__UpdateVisibleMessages (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ef60

void
UI_ChatPanel__UpdateVisibleMessages(UI_ChatPanel_o* __this, MethodInfo* method)

{
  UI_ChatPanel__UpdateVisibleMessages_22356c0(__this,(__this->fields)._visibleMessages,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel$$GetEffectivePoolSize
// il2cpp: int32_t UI_ChatPanel__GetEffectivePoolSize (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ca30

int32_t UI_ChatPanel__GetEffectivePoolSize(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843471da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Count);
    Il2CppMethodInitialized_1843471da = '\x01';
  }
  pSVar1 = (__this->fields)._linesPool;
  if (pSVar1 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateVisibleMessages
// il2cpp: void UI_ChatPanel__UpdateVisibleMessages (UI_ChatPanel_o* __this, System_Collections_Generic_List_ChatManager_ChatDisplayLine__o* lines, const MethodInfo* method);
// 0x1822356c0
// eh: try 0x182235ab9..0x182235ac3 -> pad 0x180358500 cleanup
// eh: try 0x182235b62..0x182235c7f -> pad 0x1833265c0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182235913: mov rbx, qword ptr [rsp + 0x148]
// asm:   0x18223591b: nop dword ptr [rax + rax]
// asm:   0x182235a9d: mov rbx, qword ptr [rsp + 0x148]
// asm:   0x182235ab9: jmp 0x182235920
// asm:   0x182235bb2: mov rdx, qword ptr [rip + 0x1e6b58f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x182235bb9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182235bbe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182235bc3: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182235bc8: test rcx, rcx
// asm:   0x182235bcb: jne 0x182235c7f
// asm:   0x182235bd1: mov r14, qword ptr [rsp + 0x140]
// asm:   0x182235c52: xor edx, edx
// asm:   0x182235c54: mov rcx, r14
// asm:   0x182235c57: call 0x18222e140  ; UI_ChatPanel__LayoutVisibleRows()
// asm:   0x182235c5c: xor r8d, r8d
// asm:   0x182235c5f: xor edx, edx
// asm:   0x182235c61: mov rcx, r14
// asm:   0x182235c64: call 0x182234e60  ; UI_ChatPanel__UpdateBackgroundVisibility()
// asm:   0x182235c69: jmp 0x182235aed
// asm:   0x182235c7f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833265c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833265c5: push rbp
// asm:   0x1833265c6: sub rsp, 0x20
// asm:   0x1833265ca: mov rbp, rdx
// asm:   0x1833265cd: mov rax, qword ptr [rbp + 0x50]
// asm:   0x1833265d1: mov rcx, qword ptr [rax]
// asm:   0x1833265d4: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833265d8: movabs rax, 0
// asm:   0x1833265e2: add rsp, 0x20
// asm:   0x1833265e6: pop rbp
// asm:   0x1833265e7: ret 

void UI_ChatPanel__UpdateVisibleMessages_22356c0
               (UI_ChatPanel_o *__this,System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *lines,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar2;
  UI_ChatScrollRect_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int32_t iVar10;
  UI_ChatPanel_ChatLineView_o *__this_00;
  UnityEngine_Transform_o *pUVar11;
  MethodInfo *method_00;
  int index;
  int iVar12;
  float fVar13;
  double dVar14;
  float value;
  undefined1 local_118 [16];
  Il2CppObject *local_108;
  undefined1 local_100 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_f8;
  Il2CppObject *local_f0;
  undefined1 local_e0 [24];
  UnityEngine_Vector2Int_Fields UStack_c8;
  System_String_o *local_c0;
  System_String_o *pSStack_b8;
  int32_t local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  System_String_o *local_98;
  UnityEngine_Vector2Int_Fields UStack_90;
  System_String_o *local_88;
  System_String_o *pSStack_80;
  int32_t local_78;
  undefined4 uStack_74;
  
  if (Il2CppMethodInitialized_1843471db == '\0') {
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
    Il2CppMethodInitialized_1843471db = '\x01';
  }
  local_100 = (undefined1  [8])0x0;
  pUStack_f8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_f0 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_1843471da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Count);
    Il2CppMethodInitialized_1843471da = '\x01';
  }
  pSVar2 = (__this->fields)._linesPool;
  if ((pSVar2 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) &&
     (lines != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)) {
    if ((lines->fields)._size == 0) {
      if (pSVar2 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                   (System_Collections_Generic_List_T__o *)pSVar2,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
        local_100 = (undefined1  [8])local_118._0_8_;
        pUStack_f8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_118._8_8_;
        local_f0 = local_108;
        local_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_118._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_100;
        while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_100,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                                 ), bVar6) {
          if (local_f0 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_f0[0xc].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)local_f0[0xc].klass,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_100,
                   MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
        pUVar3 = (__this->fields)._scrollRect;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar3 = (__this->fields)._scrollRect;
          if (pUVar3 == (UI_ChatScrollRect_o *)0x0) goto label_182235c6e;
          pUVar4 = (pUVar3->fields).m_VerticalScrollbar;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
          if (bVar6) {
            pUVar3 = (__this->fields)._scrollRect;
            if ((pUVar3 == (UI_ChatScrollRect_o *)0x0) ||
               (pUVar4 = (pUVar3->fields).m_VerticalScrollbar, pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0))
            goto label_182235c6e;
            UnityEngine_UI_Scrollbar__set_size(pUVar4,1.0,(MethodInfo *)0x0);
          }
        }
        UI_ChatPanel__LayoutVisibleRows(__this,(MethodInfo *)0x0);
        UI_ChatPanel__UpdateBackgroundVisibility(__this,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      iVar9 = (pSVar2->fields)._size;
      pUVar3 = (__this->fields)._scrollRect;
      if (pUVar3 == (UI_ChatScrollRect_o *)0x0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                           ((UnityEngine_UI_ScrollRect_o *)pUVar3,(MethodInfo *)0x0);
      }
      iVar1 = (lines->fields)._size;
      value = (float)iVar9 / (float)iVar1;
      if (1.0 < value) {
        value = 1.0;
      }
      pUVar3 = (__this->fields)._scrollRect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
      if (bVar6) {
        pUVar3 = (__this->fields)._scrollRect;
        if (pUVar3 == (UI_ChatScrollRect_o *)0x0) goto label_182235c6e;
        pUVar4 = (pUVar3->fields).m_VerticalScrollbar;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_00 = (MethodInfo *)0x0;
        bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar3 = (__this->fields)._scrollRect;
          if ((pUVar3 == (UI_ChatScrollRect_o *)0x0) ||
             (pUVar4 = (pUVar3->fields).m_VerticalScrollbar, pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0))
          goto label_182235c6e;
          UnityEngine_UI_Scrollbar__set_size(pUVar4,value,(MethodInfo *)0x0);
        }
      }
      index = 0;
      iVar12 = 0;
      if ((iVar9 < iVar1) && (iVar12 = iVar1 - iVar9, 0.0 < fVar13)) {
        if (Il2CppMethodInitialized_18433df26 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433df26 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar14 = il2cpp_runtime_helper_1804f4690((double)((1.0 - fVar13) * (float)iVar12),method_00);
        iVar9 = (int)dVar14;
        if (((iVar9 < 0) || (iVar9 <= iVar12)) && (iVar12 = iVar9, iVar9 < 0)) {
          iVar12 = 0;
        }
      }
      bVar8 = false;
      bVar6 = false;
      pSVar2 = (__this->fields)._linesPool;
      while (pSVar2 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
        if ((pSVar2->fields)._size <= index) {
          bVar8 = UI_ChatPanel__LayoutVisibleRows(__this,(MethodInfo *)0x0);
          if (bVar8) {
            UI_ChatPanel__UpdateBackgroundVisibility(__this,true,(MethodInfo *)0x0);
          }
          else {
            UI_ChatPanel__UpdateBackgroundVisibility(__this,true,(MethodInfo *)0x0);
            if (!bVar6) {
              return;
            }
          }
          (__this->fields)._requestCanvasUpdate = true;
          return;
        }
        pSVar2 = (__this->fields)._linesPool;
        if (pSVar2 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) break;
        __this_00 = (UI_ChatPanel_ChatLineView_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
        if (index + iVar12 < (lines->fields)._size) {
          if ((__this_00 == (UI_ChatPanel_ChatLineView_o *)0x0) ||
             (pUVar5 = (__this_00->fields)._gameObject_k__BackingField,
             pUVar5 == (UnityEngine_GameObject_o *)0x0)) break;
          bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
          System_Collections_Generic_List_TextureBlitter_BlitInfo___get_Item
                    ((UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_o *)local_e0,
                     (System_Collections_Generic_List_TextureBlitter_BlitInfo__o *)lines,index + iVar12,
                     (MethodInfo_9BBFD0 *)
                     MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Item);
          if (!bVar6) {
            pUVar5 = (__this_00->fields)._gameObject_k__BackingField;
            if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
            UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
            bVar8 = true;
          }
          local_a8._0_8_ = local_e0._0_8_;
          local_a8._8_8_ = local_e0._8_8_;
          local_98 = (System_String_o *)local_e0._16_8_;
          UStack_90 = UStack_c8;
          local_88 = local_c0;
          pSStack_80 = pSStack_b8;
          local_78 = local_b0;
          uStack_74 = uStack_ac;
          bVar7 = UI_ChatPanel_ChatLineView__SetLine
                            (__this_00,(GameManagers_ChatManager_ChatDisplayLine_o *)local_a8,
                             (MethodInfo *)0x0);
          bVar6 = bVar8;
          if (bVar7) {
            bVar6 = true;
          }
          pUVar11 = UI_ChatPanel_ChatLineView__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
          iVar10 = UnityEngine_Transform__GetSiblingIndex(pUVar11,(MethodInfo *)0x0);
          bVar8 = bVar6;
          if (iVar10 != index) {
            pUVar11 = UI_ChatPanel_ChatLineView__get_transform(__this_00,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
            UnityEngine_Transform__SetSiblingIndex(pUVar11,index,(MethodInfo *)0x0);
            bVar6 = true;
            bVar8 = bVar6;
          }
        }
        else {
          if ((__this_00 == (UI_ChatPanel_ChatLineView_o *)0x0) ||
             (pUVar5 = (__this_00->fields)._gameObject_k__BackingField,
             pUVar5 == (UnityEngine_GameObject_o *)0x0)) break;
          bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
          if (bVar7) {
            pUVar5 = (__this_00->fields)._gameObject_k__BackingField;
            if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
            bVar6 = true;
            bVar8 = true;
          }
        }
        index = index + 1;
        pSVar2 = (__this->fields)._linesPool;
      }
    }
  }
label_182235c6e:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$ConfigureManualLineLayout
// il2cpp: void UI_ChatPanel__ConfigureManualLineLayout (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182229770

void UI_ChatPanel__ConfigureManualLineLayout(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *x_00;
  
  if (Il2CppMethodInitialized_1843471dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471dc = '\x01';
  }
  pUVar1 = (__this->fields)._panel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar1,(MethodInfo_6F5650 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_182229861;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._panel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      x_00 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (x_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_182229861;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x_00,false,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_182229861:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$LayoutVisibleRows
// il2cpp: bool UI_ChatPanel__LayoutVisibleRows (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222e140
// eh: try 0x18222e215..0x18222e54a -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222e21d: nop dword ptr [rax]
// asm:   0x18222e289: mov rdx, qword ptr [rip + 0x1e72eb8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x18222e290: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18222e295: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222e29a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18222e29f: test rcx, rcx
// asm:   0x18222e2a2: jne 0x18222e52f
// asm:   0x18222e2a8: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x18222e2b0: movss xmm6, dword ptr [rsp + 0xe0]
// asm:   0x18222e4c9: mov rdx, qword ptr [rip + 0x1e72c78]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x18222e4d0: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18222e4d5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222e4da: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18222e4df: test rcx, rcx
// asm:   0x18222e4e2: jne 0x18222e54a
// asm:   0x18222e4e4: movzx esi, byte ptr [rsp + 0xd0]
// asm:   0x18222e52f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18222e54a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

bool UI_ChatPanel__LayoutVisibleRows(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  bool bVar5;
  UnityEngine_Rect_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStackX_1c;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  undefined1 local_80 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_78;
  Il2CppObject *local_70;
  
  if (Il2CppMethodInitialized_1843471dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843471dd = '\x01';
  }
  local_80 = (undefined1  [8])0x0;
  pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_70 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._linesPool;
  if (pSVar1 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
               (System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    local_80 = (undefined1  [8])local_98._0_8_;
    pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
    local_70 = local_88;
    local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    fVar10 = 10.0;
    local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                        );
      pIVar3 = local_70;
      if (!bVar4) break;
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_70[0xc].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = UnityEngine_GameObject__get_activeSelf
                        ((UnityEngine_GameObject_o *)local_70[0xc].klass,(MethodInfo *)0x0);
      if (bVar4) {
        fVar10 = fVar10 + *(float *)((longlong)&pIVar3[0xb].monitor + 4);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    pUVar2 = (__this->fields)._chatPanelRect;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar6 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_98,pUVar2,(MethodInfo *)0x0);
      fVar9 = (pUVar6->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (Il2CppMethodInitialized_18433dee4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_18433dee4 = '\x01';
      }
      fVar11 = ABS(fVar9);
      if (fVar11 <= ABS(fVar10)) {
        fVar11 = ABS(fVar10);
      }
      fVar8 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar12 = fVar11 * 1e-06;
      if (fVar11 * 1e-06 <= fVar8) {
        fVar12 = fVar8;
      }
      bVar4 = fVar12 <= ABS(fVar10 - fVar9);
      if (bVar4) {
        pUVar2 = (__this->fields)._chatPanelRect;
        if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_18222e51d;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,1,fVar10,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields)._linesPool;
      if (pSVar1 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
        fVar10 = 0.0;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                   (System_Collections_Generic_List_T__o *)pSVar1,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
        local_80 = (undefined1  [8])local_98._0_8_;
        pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
        local_70 = local_88;
        local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                            );
          pIVar3 = local_70;
          if (!bVar5) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                       MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
            return bVar4;
          }
          if (local_70 == (Il2CppObject *)0x0) break;
          if (local_70[0xc].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = UnityEngine_GameObject__get_activeSelf
                            ((UnityEngine_GameObject_o *)local_70[0xc].klass,(MethodInfo *)0x0);
          if (bVar5) {
            if (pIVar3[2].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition
                              ((UnityEngine_RectTransform_o *)pIVar3[2].klass,(MethodInfo *)0x0);
            fStackX_1c = UVar7.fields.y;
            fVar9 = UVar7.fields.x - 0.0;
            fStackX_1c = fStackX_1c - -fVar10;
            if (9.9999994e-11 <= fStackX_1c * fStackX_1c + fVar9 * fVar9) {
              if (pIVar3[2].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_RectTransform__set_anchoredPosition
                        ((UnityEngine_RectTransform_o *)pIVar3[2].klass,
                         (UnityEngine_Vector2_o)((ulonglong)(uint)-fVar10 << 0x20),(MethodInfo *)0x0);
              bVar4 = true;
            }
            fVar10 = fVar10 + *(float *)((longlong)&pIVar3[0xb].monitor + 4);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_18222e51d:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$UpdateBackgroundVisibility
// il2cpp: void UI_ChatPanel__UpdateBackgroundVisibility (UI_ChatPanel_o* __this, bool hasMessages, const MethodInfo* method);
// 0x182234e60

void UI_ChatPanel__UpdateBackgroundVisibility(UI_ChatPanel_o *__this,bool hasMessages,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Settings_UISettings_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Utility_Color255_o *__this_01;
  bool bVar3;
  UnityEngine_UI_Image_o *x;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843471de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_1843471de = '\x01';
  }
  __this_00 = (__this->fields)._panel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    if (hasMessages) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((((pSVar1 != (Settings_UISettings_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).ChatBackgroundColor, pSVar2 != (Settings_ColorSetting_o *)0x0)) &&
          (__this_01 = (pSVar2->fields)._value, __this_01 != (Utility_Color255_o *)0x0)) &&
         (pUVar4 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_01,(MethodInfo *)0x0),
         x != (UnityEngine_UI_Image_o *)0x0)) {
        local_18.r = (pUVar4->fields).r;
        local_18.g = (pUVar4->fields).g;
        local_18.b = (pUVar4->fields).b;
        local_18.a = (pUVar4->fields).a;
        (*(x->klass->vtable)._23_set_color.methodPtr)
                  (x,(UnityEngine_Color_o *)&local_18,(x->klass->vtable)._23_set_color.method);
        return;
      }
    }
    else if (x != (UnityEngine_UI_Image_o *)0x0) {
      local_18.r = 0.0;
      local_18.g = 0.0;
      local_18.b = 0.0;
      local_18.a = 0.0;
      (*(x->klass->vtable)._23_set_color.methodPtr)
                (x,(UnityEngine_Color_o *)&local_18,(x->klass->vtable)._23_set_color.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$Activate
// il2cpp: void UI_ChatPanel__Activate (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182228c70

void UI_ChatPanel__Activate(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *pSVar3;
  bool bVar4;
  int value;
  
  if (Il2CppMethodInitialized_1843471df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471df = '\x01';
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
        UI_ChatPanel__SetChatHiddenState(__this,false,true,(MethodInfo *)0x0);
      }
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        (*(pTVar2->klass->vtable)._38_Select.methodPtr)(pTVar2,(pTVar2->klass->vtable)._38_Select.method);
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__ActivateInputField(pTVar2,(MethodInfo *)0x0);
          UI_ChatPanel__UpdatePlaceholderVisibility(__this,true,(MethodInfo *)0x0);
          if (0 < (__this->fields)._desiredCaretPosition) {
            pTVar2 = (__this->fields)._inputField;
            if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_182228e35;
            bVar4 = System_String__IsNullOrEmpty((pTVar2->fields).m_Text,(MethodInfo *)0x0);
            if (!bVar4) {
              pTVar2 = (__this->fields)._inputField;
              if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
                 (pSVar3 = (pTVar2->fields).m_Text, pSVar3 == (System_String_o *)0x0)) goto label_182228e35;
              iVar1 = (__this->fields)._desiredCaretPosition;
              if (((iVar1 < 0) || (value = (pSVar3->fields)._stringLength, iVar1 <= value)) &&
                 (value = iVar1, iVar1 < 0)) {
                value = 0;
              }
              TMPro_TMP_InputField__set_caretPosition((__this->fields)._inputField,value,(MethodInfo *)0x0);
              pTVar2 = (__this->fields)._inputField;
              if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_182228e35;
              TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (__this->fields)._inputField;
              if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_182228e35;
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
label_182228e35:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatPanel$$IsInputActive
// il2cpp: bool UI_ChatPanel__IsInputActive (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222d970

bool UI_ChatPanel__IsInputActive(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843471e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471e0 = '\x01';
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
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        return (pTVar1->fields).m_AllowInput;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// UI.ChatPanel$$OnEndEdit
// il2cpp: void UI_ChatPanel__OnEndEdit (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x18222e9a0

void UI_ChatPanel__OnEndEdit(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_GameObject_o *__this_00;
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_01;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar3;
  UnityEngine_Vector2_Fields *pUVar4;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_1843471e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843471e1 = '\x01';
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
  UI_ChatPanel__UpdatePlaceholderVisibility(__this,false,(MethodInfo *)0x0);
  bVar3 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0);
  if ((bVar3) || (bVar3 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0), bVar3)) {
    UI_ChatPanel__SubmitProcessedInput(__this,(MethodInfo *)0x0);
    return;
  }
  pUVar4 = (UnityEngine_Vector2_Fields *)UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
  screenPoint = *pUVar4;
  bVar3 = UI_ChatPanel__IsMouseOverAnyChatElement(__this,(UnityEngine_Vector2_o)*pUVar4,(MethodInfo *)0x0);
  if (!bVar3) {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (__this->fields)._emojiPanel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18222eba2;
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        rect = UI_ChatPanel__GetCachedRectTransform(__this,(__this->fields)._emojiPanel,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                          (rect,(UnityEngine_Vector2_o)screenPoint,(MethodInfo *)0x0);
        if (bVar3) goto label_18222eb40;
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
  }
label_18222eb40:
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_01 = (pSVar2->fields).Chat, __this_01 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__ContainsEnter(__this_01,(MethodInfo *)0x0);
    (__this->fields).IgnoreNextActivation = bVar3;
    return;
  }
label_18222eba2:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SubmitProcessedInput
// il2cpp: void UI_ChatPanel__SubmitProcessedInput (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182234910
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182234c4e: xor r8d, r8d
// asm:   0x182234c51: xor edx, edx
// asm:   0x182234c53: call 0x182cfa200  ; TMPro_TMP_InputField__DeactivateInputField()
// asm:   0x182234c58: jmp 0x182234bf7

void UI_ChatPanel__SubmitProcessedInput(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Text_RegularExpressions_Regex_o *__this_00;
  Photon_Realtime_Player_o *pPVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_GeneralInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *__this_01;
  bool bVar5;
  UI_ChatPanel___c__DisplayClass64_0_o *object;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar6;
  Il2CppObject *arg0;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843471e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843471e2 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    pSVar6 = (pTVar1->fields).m_Text;
    if (Il2CppMethodInitialized_1843471c8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UI_ChatPanel_c__DisplayClass64_0_ProcessEmojiCodes_b__0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass64_0);
      Il2CppMethodInitialized_1843471c8 = '\x01';
    }
    object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass64_0);
    UI_ChatPanel___c__DisplayClass64_0___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
    if (object != (UI_ChatPanel___c__DisplayClass64_0_o *)0x0) {
      (object->fields).stickerFound = false;
      if ((TypeInfo_UI_ChatPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel);
      }
      __this_00 = TypeInfo_UI_ChatPanel->static_fields->_emojiPattern;
      evaluator = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
      System_Text_RegularExpressions_MatchEvaluator___ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass64_0_ProcessEmojiCodes_b__0,
                 (MethodInfo_16E67D0 *)0x0);
      if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar6 = System_Text_RegularExpressions_Regex__Replace_285dcc0
                           (__this_00,pSVar6,evaluator,(MethodInfo *)0x0);
        bVar5 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
        if (bVar5) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          (__this->fields).IgnoreNextActivation = true;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            TMPro_TMP_InputField__set_text(pTVar1,"",(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__DeactivateInputField(pTVar1,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
          if (pSVar6 != (System_String_o *)0x0) {
            bVar5 = System_String__StartsWith(pSVar6,"/",(MethodInfo *)0x0);
            if (((bVar5) || ((__this->fields)._inPMMode == false)) ||
               ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0)) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__HandleInput(pSVar6,(MethodInfo *)0x0);
              pSVar6 = "PUBLIC";
            }
            else {
              pPVar2 = (__this->fields)._currentPMTarget;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__SendPrivateMessage(pPVar2,pSVar6,(MethodInfo *)0x0);
              pPVar2 = (__this->fields)._currentPMTarget;
              if (pPVar2 == (Photon_Realtime_Player_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_res8[0] = (pPVar2->fields).actorNumber;
              arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
              pSVar6 = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
            }
            GameManagers_ChatManager__ClearConversation(pSVar6,(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__set_text(pTVar1,"",(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__DeactivateInputField(pTVar1,false,(MethodInfo *)0x0);
                UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0);
                UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)0x0);
                UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)0x0);
                UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
                pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
                    (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_GeneralInputSettings_o *)0x0)) &&
                   (__this_01 = (pSVar4->fields).Chat, __this_01 != (Settings_KeybindSetting_o *)0x0)) {
                  bVar5 = Settings_KeybindSetting__ContainsEnter(__this_01,(MethodInfo *)0x0);
                  (__this->fields).IgnoreNextActivation = bVar5;
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


// UI.ChatPanel$$AddLine
// il2cpp: void UI_ChatPanel__AddLine (UI_ChatPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x182229270

void UI_ChatPanel__AddLine(UI_ChatPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel$$ReplaceLastLine
// il2cpp: void UI_ChatPanel__ReplaceLastLine (UI_ChatPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x18222fe50

void UI_ChatPanel__ReplaceLastLine(UI_ChatPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  return;
}


// UI.ChatPanel$$AddLines
// il2cpp: void UI_ChatPanel__AddLines (UI_ChatPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x182229280
// eh: try 0x182229330..0x182229351 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182229362: mov rdx, qword ptr [rip + 0x1e6e5af]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182229369: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18222936e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182229373: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182229378: test rcx, rcx
// asm:   0x18222937b: jne 0x182229388
// asm:   0x182229388: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_ChatPanel__AddLines
               (UI_ChatPanel_o *__this,System_Collections_Generic_List_string__o *lines,MethodInfo *method)

{
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843471e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_1843471e3 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (lines != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)lines,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (!bVar1) break;
      UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$InitializeCaret
// il2cpp: void UI_ChatPanel__InitializeCaret (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222d280

void UI_ChatPanel__InitializeCaret(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_1843471e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Graphic);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" Input Caret");
    Il2CppMethodInitialized_1843471e4 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  local_res8 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar2) || ((__this->fields)._caretInitialized != false)) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50(pSVar4," Input Caret",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,pSVar4,(MethodInfo *)0x0);
        (__this->fields)._caret = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._caret,pUVar3);
        pUVar3 = (__this->fields)._caret;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pUVar3 = (__this->fields)._caret;
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          bVar2 = UnityEngine_Component__TryGetComponent_object_
                            ((UnityEngine_Component_o *)pUVar3,&local_res8,
                             (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_Graphic);
          if (!bVar2) {
            pUVar3 = (__this->fields)._caret;
            if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
               (__this_01 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
               __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_18222d412;
            UnityEngine_GameObject__AddComponent_object_
                      (__this_01,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          }
          (__this->fields)._caretInitialized = true;
          return;
        }
      }
    }
  }
label_18222d412:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$OnGUI
// il2cpp: void UI_ChatPanel__OnGUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ebb0

void UI_ChatPanel__OnGUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *__this_00;
  System_Collections_Generic_List_Player__o *pSVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Event_o *__this_01;
  char cVar6;
  
  if (Il2CppMethodInitialized_1843471e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843471e5 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
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
    if (__this_01 == (UnityEngine_Event_o *)0x0) {
label_18222edeb:
      ThrowNullReferenceException();
    }
    iVar5 = UnityEngine_Event__get_type(__this_01,(MethodInfo *)0x0);
    if (iVar5 != 4) {
      return;
    }
    bVar3 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    cVar6 = '\x01';
    if (!bVar3) {
      cVar6 = (__this->fields)._isInteractingWithChatUI;
    }
    iVar5 = UnityEngine_Event__get_keyCode(__this_01,(MethodInfo *)0x0);
    if (cVar6 == '\0' || iVar5 != 9) {
      iVar5 = UnityEngine_Event__get_keyCode(__this_01,(MethodInfo *)0x0);
      if (cVar6 == '\0' || iVar5 != 0x1b) {
        return;
      }
      UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
      bVar3 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      return;
    }
    bVar3 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar1 = (__this->fields)._inputField;
      if ((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
         (__this_00 = (pTVar1->fields).m_Text, __this_00 == (System_String_o *)0x0)) goto label_18222edeb;
      bVar3 = System_String__StartsWith(__this_00,"/",(MethodInfo *)0x0);
    }
    else {
      bVar3 = false;
    }
    bVar4 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar4 = GameManagers_ChatManager__HasActiveSuggestions((MethodInfo *)0x0);
      if (bVar4) goto label_18222edb6;
    }
    if (bVar3 == false) {
      pSVar2 = (__this->fields)._pmPartners;
      if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222edeb;
      if (0 < (pSVar2->fields)._size) {
        UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
        UI_ChatPanel__CycleToPMPartner(__this,(MethodInfo *)0x0);
        return;
      }
    }
    bVar3 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    if (bVar3) {
label_18222edb6:
      UnityEngine_Event__Use(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__HandleTabComplete((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPanel$$Update
// il2cpp: void UI_ChatPanel__Update (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182235c90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182235fc6: mov rsi, qword ptr [rsp + 0x40]

void UI_ChatPanel__Update(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *__this_00;
  UnityEngine_Object_o *y;
  bool bVar4;
  UnityEngine_EventSystems_EventSystem_o *__this_01;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *__this_02;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Object_o *x;
  float fVar7;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_1843471e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843471e6 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    pTVar1 = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
          (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_GeneralInputSettings_o *)0x0)) ||
         (__this_00 = (pSVar3->fields).HideChat, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
label_182236179:
        ThrowNullReferenceException();
      }
      bVar4 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
      if ((bVar4) && ((__this->fields)._isDestroyed == false)) {
        UI_ChatPanel__SetChatHiddenState(__this,(__this->fields)._chatHidden == false,true,(MethodInfo *)0x0);
      }
      if ((__this->fields)._caretInitialized == false) {
        if (Il2CppMethodInitialized_1843471e4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_Component_TryGetComponent_Graphic);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          il2cpp_codegen_initialize_runtime_metadata(&" Input Caret");
          Il2CppMethodInitialized_1843471e4 = '\x01';
        }
        local_res8 = (Il2CppObject *)0x0;
        pTVar1 = (__this->fields)._inputField;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar4) && ((__this->fields)._caretInitialized == false)) {
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0)
            ;
            pTVar1 = (__this->fields)._inputField;
            if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
               (__this_02 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
               __this_02 != (UnityEngine_Transform_o *)0x0)) {
              pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat_1969e50(pSVar6," Input Caret",(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Transform__Find(pUVar5,pSVar6,(MethodInfo *)0x0);
                (__this->fields)._caret = pUVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._caret,pUVar5);
                pUVar5 = (__this->fields)._caret;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
                if (!bVar4) {
                  return;
                }
                pUVar5 = (__this->fields)._caret;
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  bVar4 = UnityEngine_Component__TryGetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar5,&local_res8,
                                     (MethodInfo_6657C0 *)
                                     MethodInfo_UnityEngine_Component_TryGetComponent_Graphic);
                  if (!bVar4) {
                    pUVar5 = (__this->fields)._caret;
                    if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
                       (__this_03 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
                       __this_03 == (UnityEngine_GameObject_o *)0x0)) goto label_18223617f;
                    UnityEngine_GameObject__AddComponent_object_
                              (__this_03,
                               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                  }
                  (__this->fields)._caretInitialized = true;
                  return;
                }
              }
            }
          }
label_18223617f:
          ThrowNullReferenceException();
        }
      }
      else {
        UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (__this_01 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_182236179;
          x = (UnityEngine_Object_o *)(__this_01->fields).m_CurrentSelected;
        }
        else {
          x = (UnityEngine_Object_o *)0x0;
        }
        if ((__this->fields)._emojiPanelActive != false) {
          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
          }
          if (TypeInfo_UI_CursorManager->static_fields->State != 0) {
            UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
          }
        }
        y = (UnityEngine_Object_o *)(__this->fields)._currentSelectedObject;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
        if (bVar4) {
          (__this->fields)._currentSelectedObject = (UnityEngine_GameObject_o *)x;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSelectedObject,x);
        }
        fVar7 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
        if (0.2 <= fVar7 - (__this->fields)._lastTypeTime) {
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_182236179;
          pSVar6 = (pTVar1->fields).m_Text;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__HandleTyping(pSVar6,(MethodInfo *)0x0);
        }
        if ((__this->fields)._requestCanvasUpdate != false) {
          (__this->fields)._requestCanvasUpdate = false;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        }
        bVar4 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
        if ((bVar4) && ((__this->fields)._wasChatUIClicked == false)) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if (__this_01 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_182236179;
            bVar4 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(__this_01,(MethodInfo *)0x0)
            ;
            if (bVar4) {
              (__this->fields)._isInteractingWithChatUI = false;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
            }
          }
        }
        if (Il2CppMethodInitialized_1843471ec == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
          Il2CppMethodInitialized_1843471ec = '\x01';
        }
        bVar4 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
        if ((bVar4) || ((__this->fields)._emojiPanelActive != false)) {
          (__this->fields)._isInteractingWithChatUI = true;
          return;
        }
        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        if (TypeInfo_UI_CursorManager->static_fields->State != 0) {
          (__this->fields)._isInteractingWithChatUI = false;
        }
      }
    }
  }
  return;
}


// UI.ChatPanel$$ToggleChatVisibility
// il2cpp: void UI_ChatPanel__ToggleChatVisibility (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182234cb0

void UI_ChatPanel__ToggleChatVisibility(UI_ChatPanel_o *__this,MethodInfo *method)

{
  if ((__this->fields)._isDestroyed == false) {
    UI_ChatPanel__SetChatHiddenState(__this,(__this->fields)._chatHidden == false,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatPanel$$SetChatHiddenState
// il2cpp: void UI_ChatPanel__SetChatHiddenState (UI_ChatPanel_o* __this, bool hidden, bool saveSetting, const MethodInfo* method);
// 0x1822305a0
// eh: try 0x1822306c4..0x1822307e7 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822306e4: nop 
// asm:   0x1822306e7: movzx esi, byte ptr [rsp + 0x50]
// asm:   0x1822306ec: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void UI_ChatPanel__SetChatHiddenState(UI_ChatPanel_o *__this,bool hidden,bool saveSetting,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_UI_Button_o *__this_01;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843471e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_1843471e7 = '\x01';
  }
  (__this->fields)._chatHidden = hidden;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (__this_00 = (pSVar1->fields).ChatHidden, __this_00 == (Settings_BoolSetting_o *)0x0))
  goto label_1822307da;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this_00,hidden,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  if ((__this->fields)._chatHidden != false) {
    UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._panel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,(__this->fields)._chatHidden == false,(MethodInfo *)0x0);
  }
  pTVar2 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_1822307da;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_1822307da;
    UnityEngine_GameObject__SetActive(pUVar4,(__this->fields)._chatHidden == false,(MethodInfo *)0x0);
    if ((__this->fields)._chatHidden != false) {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
        ThrowNullReferenceException();
      }
      TMPro_TMP_InputField__DeactivateInputField(pTVar2,false,(MethodInfo *)0x0);
    }
    if ((__this->fields)._chatHidden != false) {
      (__this->fields).IgnoreNextActivation = false;
    }
  }
  __this_01 = (__this->fields)._emojiButton;
  if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_1822307da;
    UnityEngine_GameObject__SetActive(pUVar4,(__this->fields)._chatHidden == false,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._notificationBadge;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    if ((__this->fields)._chatHidden == false) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    }
    else {
      bVar3 = false;
    }
    UnityEngine_GameObject__SetActive(pUVar4,bVar3,(MethodInfo *)0x0);
  }
  if ((__this->fields)._chatHidden == false) {
    UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0);
    UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)0x0);
    UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)0x0);
    UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
    UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
  }
  if (saveSetting) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (pSVar1 == (Settings_UISettings_o *)0x0) {
label_1822307da:
      ThrowNullReferenceException();
    }
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
  }
  return;
}


// UI.ChatPanel$$LateUpdate
// il2cpp: void UI_ChatPanel__LateUpdate (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222e030

void UI_ChatPanel__LateUpdate(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  System_Collections_Generic_List_Player__o *pSVar1;
  bool bVar2;
  char cVar3;
  
  if (Il2CppMethodInitialized_1843471e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471e8 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    x = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
      cVar3 = '\x01';
      if (!bVar2) {
        cVar3 = (__this->fields)._isInteractingWithChatUI;
      }
      UI_ChatPanel__UpdatePlaceholderVisibility(__this,cVar3 != '\0',(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._pmPartners;
      if (pSVar1 == (System_Collections_Generic_List_Player__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar1->fields)._size < 1) {
        bVar2 = false;
      }
      else {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        bVar2 = GameManagers_ChatManager__HasAnyActivePMNotification((MethodInfo *)0x0);
      }
      if (bVar2 != (__this->fields)._lastNotificationBadgeState) {
        (__this->fields)._lastNotificationBadgeState = bVar2;
        UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// UI.ChatPanel$$UpdatePlaceholderVisibility
// il2cpp: void UI_ChatPanel__UpdatePlaceholderVisibility (UI_ChatPanel_o* __this, bool isChatActive, const MethodInfo* method);
// 0x1822355a0

void UI_ChatPanel__UpdatePlaceholderVisibility(UI_ChatPanel_o *__this,bool isChatActive,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  bool bVar3;
  UnityEngine_CanvasGroup_o *pUVar4;
  float value;
  
  if (Il2CppMethodInitialized_1843471e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471e9 = '\x01';
  }
  pUVar4 = (__this->fields)._placeholderCanvasGroup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
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
  if (isChatActive) {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1822356ae;
    bVar3 = System_String__IsNullOrEmpty((pTVar1->fields).m_Text,(MethodInfo *)0x0);
    if (!bVar3) goto label_182235687;
    pSVar2 = (__this->fields)._pmPartners;
    if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto label_1822356ae;
    pUVar4 = (__this->fields)._placeholderCanvasGroup;
    if ((pSVar2->fields)._size < 1) goto label_18223568e;
    value = 1.0;
  }
  else {
label_182235687:
    pUVar4 = (__this->fields)._placeholderCanvasGroup;
label_18223568e:
    value = 0.0;
  }
  if (pUVar4 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(pUVar4,value,(MethodInfo *)0x0);
    return;
  }
label_1822356ae:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsPointerOverChatUI
// il2cpp: bool UI_ChatPanel__IsPointerOverChatUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222dda0

bool UI_ChatPanel__IsPointerOverChatUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector2_Fields mousePosition;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar2;
  bool bVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  UnityEngine_Vector2_Fields *pUVar5;
  UnityEngine_RectTransform_o *rect;
  byte bVar6;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_1843471ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_1843471ea = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  pUVar5 = (UnityEngine_Vector2_Fields *)UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
  screenPoint = *pUVar5;
  mousePosition = *pUVar5;
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
label_18222e014:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(pUVar4,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = UI_ChatPanel__IsMouseOverAnyChatElement
                      (__this,(UnityEngine_Vector2_o)mousePosition,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = true;
      goto label_18222df47;
    }
    x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (__this->fields)._emojiPanel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18222e014;
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        rect = UI_ChatPanel__GetCachedRectTransform(__this,(__this->fields)._emojiPanel,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                          (rect,(UnityEngine_Vector2_o)screenPoint,(MethodInfo *)0x0);
        goto label_18222df47;
      }
    }
  }
  bVar2 = false;
label_18222df47:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  iVar1 = TypeInfo_UI_CursorManager->static_fields->State;
  bVar3 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (bVar3) {
    bVar3 = false;
    if (iVar1 == 0) {
      bVar3 = bVar2;
    }
    (__this->fields)._wasChatUIClicked = bVar3;
    bVar6 = 0;
    if (iVar1 == 0) {
      bVar6 = bVar2 ^ 1;
    }
    if (bVar6 != 0) {
      (__this->fields)._isInteractingWithChatUI = false;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      (__this->fields).IgnoreNextActivation = false;
    }
  }
  bVar3 = false;
  if (iVar1 == 0) {
    bVar3 = bVar2;
  }
  if (bVar3 != false) {
    (__this->fields)._isInteractingWithChatUI = true;
  }
  return (__this->fields)._isInteractingWithChatUI;
}


// UI.ChatPanel$$IsMouseOverAnyChatElement
// il2cpp: bool UI_ChatPanel__IsMouseOverAnyChatElement (UI_ChatPanel_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x18222da40
// eh: try 0x18222dc10..0x18222dd85 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222dc0f: nop 
// asm:   0x18222dcb1: mov rdx, qword ptr [rip + 0x1e73490]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x18222dcb8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18222dcbd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222dcc2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18222dcc7: test rcx, rcx
// asm:   0x18222dcca: jne 0x18222dd85
// asm:   0x18222dcd0: movsd xmm6, qword ptr [rsp + 0xa8]
// asm:   0x18222dcd9: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x18222dd85: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool UI_ChatPanel__IsMouseOverAnyChatElement
               (UI_ChatPanel_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  UnityEngine_UI_Button_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *obj;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_1843471eb == '\0') {
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
    Il2CppMethodInitialized_1843471eb = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
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
label_18222dd8b:
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
        local_48 = (undefined1  [8])local_60._0_8_;
        pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
        local_38 = local_50;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
        do {
          do {
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                              );
            pIVar2 = local_38;
            if (!bVar3) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
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
                if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto label_18222dd8b;
                obj = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                pUVar4 = UI_ChatPanel__GetCachedRectTransform(__this,obj,(MethodInfo *)0x0);
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
            if (local_38 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if (local_38[0xc].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)local_38[0xc].klass,(MethodInfo *)0x0);
          } while (!bVar3);
          pUVar4 = UI_ChatPanel__GetCachedRectTransform
                             (__this,(UnityEngine_GameObject_o *)pIVar2[0xc].klass,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (pUVar4,mousePosition,(MethodInfo *)0x0);
        } while (!bVar3);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
      }
    }
  }
  return true;
}


// UI.ChatPanel$$UpdateChatInteractionState
// il2cpp: void UI_ChatPanel__UpdateChatInteractionState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182234fa0

void UI_ChatPanel__UpdateChatInteractionState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843471ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843471ec = '\x01';
  }
  bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
  if ((bVar1) || ((__this->fields)._emojiPanelActive != false)) {
    (__this->fields)._isInteractingWithChatUI = true;
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    if (TypeInfo_UI_CursorManager->static_fields->State != 0) {
      (__this->fields)._isInteractingWithChatUI = false;
      return;
    }
  }
  return;
}


// UI.ChatPanel$$CreateLine
// il2cpp: UI_ChatPanel_ChatLineView_o* UI_ChatPanel__CreateLine (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x18222b330

UI_ChatPanel_ChatLineView_o *
UI_ChatPanel__CreateLine(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TMP_InputField_o *chatInput;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *parent;
  UI_ChatPanel_ChatLineView_o *__this_02;
  GameManagers_ChatManager_ChatDisplayLine_o *pGVar3;
  GameManagers_ChatManager_ChatDisplayLine_o local_98;
  GameManagers_ChatManager_ChatDisplayLine_o local_58;
  
  if (Il2CppMethodInitialized_1843471ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ChatLineView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843471ed = '\x01';
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
      UI_ChatPanel_ChatLineView___ctor(__this_02,parent,__this_01,chatInput,__this,(MethodInfo *)0x0);
      pGVar3 = GameManagers_ChatManager_ChatDisplayLine__Plain(&local_58,text,(MethodInfo *)0x0);
      if (__this_02 != (UI_ChatPanel_ChatLineView_o *)0x0) {
        local_98.fields.PlainText = (pGVar3->fields).PlainText;
        local_98.fields.UsePlayerStyle = (pGVar3->fields).UsePlayerStyle;
        local_98.fields._9_7_ = *(undefined7 *)&(pGVar3->fields).field_0x9;
        local_98.fields.TimeText = (pGVar3->fields).TimeText;
        local_98.fields.IdText = (pGVar3->fields).IdText;
        local_98.fields.SenderName = (pGVar3->fields).SenderName;
        local_98.fields.BodyText = (pGVar3->fields).BodyText;
        local_98.fields.SenderID = (pGVar3->fields).SenderID;
        local_98.fields._52_4_ = *(undefined4 *)&(pGVar3->fields).field_0x34;
        UI_ChatPanel_ChatLineView__SetLine(__this_02,&local_98,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$OnScroll
// il2cpp: void UI_ChatPanel__OnScroll (UI_ChatPanel_o* __this, UnityEngine_Vector2_o scrollPosition, const MethodInfo* method);
// 0x18222ef60

void UI_ChatPanel__OnScroll(UI_ChatPanel_o *__this,UnityEngine_Vector2_o scrollPosition,MethodInfo *method)

{
  UI_ChatPanel__UpdateVisibleMessages_22356c0(__this,(__this->fields)._visibleMessages,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel$$InGameManager_PlayerInfoUpdated
// il2cpp: void UI_ChatPanel__InGameManager_PlayerInfoUpdated (UI_ChatPanel_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x18222d120
// eh: try 0x18222d1e0..0x18222d26c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222d1de: nop 
// asm:   0x18222d21c: mov rdx, qword ptr [rip + 0x1e73f25]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x18222d223: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18222d228: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222d22d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18222d232: test rcx, rcx
// asm:   0x18222d235: jne 0x18222d26c
// asm:   0x18222d237: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x18222d26c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_ChatPanel__InGameManager_PlayerInfoUpdated
               (UI_ChatPanel_o *__this,int32_t actorNumber,MethodInfo *method)

{
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  UI_ChatPanel_ChatLineView_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843471ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    Il2CppMethodInitialized_1843471ee = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._isDestroyed == false) {
    __this_00 = (__this->fields)._linesPool;
    if (__this_00 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                        );
      if (!bVar1) break;
      if ((UI_ChatPanel_ChatLineView_o *)local_28.fields._current == (UI_ChatPanel_ChatLineView_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_ChatPanel_ChatLineView__InvalidatePlayerStyle
                ((UI_ChatPanel_ChatLineView_o *)local_28.fields._current,actorNumber,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
    UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
    (__this->fields)._requestCanvasUpdate = true;
  }
  return;
}


// UI.ChatPanel$$GetCachedInputField
// il2cpp: TMPro_TMP_InputField_o* UI_ChatPanel__GetCachedInputField (UI_ChatPanel_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x18222c510

TMPro_TMP_InputField_o *
UI_ChatPanel__GetCachedInputField(UI_ChatPanel_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_InputField_o *local_res10;
  
  if (Il2CppMethodInitialized_1843471ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471ef = '\x01';
  }
  local_res10 = (TMPro_TMP_InputField_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (TMPro_TMP_InputField_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedInputFields;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)obj,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_TryGetValue)
    ;
    if (!bVar2) {
      if (obj == (UnityEngine_GameObject_o *)0x0) goto label_18222c648;
      x = UnityEngine_GameObject__GetComponent_object_
                    (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      local_res10 = x;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._cachedInputFields;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18222c648;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)local_res10,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_set_Item);
      }
    }
    return local_res10;
  }
label_18222c648:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$OnDestroy
// il2cpp: void UI_ChatPanel__OnDestroy (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222e660
// eh: try 0x18222e82e..0x18222e99f -> pad 0x183331bd0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222e848: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

void UI_ChatPanel__OnDestroy(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  System_String_o *text;
  System_Collections_Generic_Dictionary_GameObject__TMP_InputField__o *__this_02;
  System_Collections_Generic_Dictionary_GameObject__RectTransform__o *__this_03;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_04;
  DG_Tweening_Core_DOSetter_T__o *pDVar4;
  
  if (Il2CppMethodInitialized_1843471f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnEndEdit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    Il2CppMethodInitialized_1843471f0 = '\x01';
  }
  (__this->fields)._isDestroyed = true;
  __this_04 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
  System_Action_int____ctor
            (__this_04,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__remove_PlayerInfoUpdated((System_Action_int__o *)__this_04,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18222e992;
    __this_00 = (pTVar1->fields).m_OnValueChanged;
    pDVar4 = (DG_Tweening_Core_DOSetter_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnValueChanged,
               (MethodInfo_EB6EC0 *)0x0);
    if (__this_00 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_18222e992;
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
               (UnityEngine_Events_UnityAction_T0__T1__T2__o *)pDVar4,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18222e992;
    __this_01 = (pTVar1->fields).m_OnEndEdit;
    pDVar4 = (DG_Tweening_Core_DOSetter_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPanel_OnEndEdit,
               (MethodInfo_EB6EC0 *)0x0);
    if (__this_01 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto label_18222e992;
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_01,
               (UnityEngine_Events_UnityAction_T0__T1__T2__o *)pDVar4,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_InputField__DeactivateInputField(pTVar1,false,(MethodInfo *)0x0);
    if ((__this->fields)._inPMMode != false) {
      UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    if (TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart != false) {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18222e992;
      text = (pTVar1->fields).m_Text;
      iVar3 = TMPro_TMP_InputField__get_selectionFocusPosition(pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__PreserveInputText(text,iVar3,(MethodInfo *)0x0);
      if (((__this->fields)._inPMMode == false) ||
         ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0)) {
        iVar3 = -1;
      }
      else {
        iVar3 = (((__this->fields)._currentPMTarget)->fields).actorNumber;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      if (Il2CppMethodInitialized_184347206 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
        Il2CppMethodInitialized_184347206 = '\x01';
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      TypeInfo_GameManagers_ChatManager->static_fields->_preservedPMTargetActorNumber = iVar3;
    }
  }
  __this_02 = (__this->fields)._cachedInputFields;
  if (__this_02 != (System_Collections_Generic_Dictionary_GameObject__TMP_InputField__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_Clear);
    __this_03 = (__this->fields)._cachedRectTransforms;
    if (__this_03 != (System_Collections_Generic_Dictionary_GameObject__RectTransform__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_Clear);
      return;
    }
  }
label_18222e992:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$OnValueChanged
// il2cpp: void UI_ChatPanel__OnValueChanged (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x18222ef70

void UI_ChatPanel__OnValueChanged(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  bool bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843471f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471f1 = '\x01';
  }
  if ((__this->fields)._isDestroyed == false) {
    x = (__this->fields)._inputField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      fVar2 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      (__this->fields)._lastTypeTime = fVar2;
      if (text == (System_String_o *)0x0) {
        text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__HandleTyping(text,(MethodInfo *)0x0);
      bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
      UI_ChatPanel__UpdatePlaceholderVisibility(__this,bVar1,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.ChatPanel$$GetInputText
// il2cpp: System_String_o* UI_ChatPanel__GetInputText (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ca70

System_String_o * UI_ChatPanel__GetInputText(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843471f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471f2 = '\x01';
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
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        return (pTVar1->fields).m_Text;
      }
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.ChatPanel$$SetInputText
// il2cpp: void UI_ChatPanel__SetInputText (UI_ChatPanel_o* __this, System_String_o* newText, const MethodInfo* method);
// 0x1822307f0

void
UI_ChatPanel__SetInputText(UI_ChatPanel_o* __this, System_String_o* newText, MethodInfo* method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843471ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471ff = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if ((((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (pTVar2 = (pTVar1->fields).m_TextComponent, pTVar2 != (TMPro_TMP_Text_o *)0x0)) &&
        ((*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                   (pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0), newText != (System_String_o *)0x0)) &&
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
  ThrowNullReferenceException();
}


// UI.ChatPanel$$EnterPMMode
// il2cpp: void UI_ChatPanel__EnterPMMode (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x18222c0a0

void UI_ChatPanel__EnterPMMode(UI_ChatPanel_o *__this,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *__this_00;
  int32_t iVar2;
  UI_ChatPanel___c__DisplayClass118_0_o *object;
  Photon_Realtime_Player_o *pPVar3;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  System_Predicate_T__o *match;
  Il2CppObject *arg0;
  System_String_o *key;
  System_ValueTuple_string__int__o *pSVar4;
  int32_t local_res10 [2];
  System_ValueTuple_string__int__o local_18;
  
  if (Il2CppMethodInitialized_1843471f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass118_0_EnterPMMode_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass118_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    Il2CppMethodInitialized_1843471f3 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass118_0);
  UI_ChatPanel___c__DisplayClass118_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (UI_ChatPanel___c__DisplayClass118_0_o *)0x0) {
label_18222c36f:
    ThrowNullReferenceException();
  }
  (object->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(object->fields).target,target);
  if ((object->fields).target != (Photon_Realtime_Player_o *)0x0) {
    iVar1 = (((object->fields).target)->fields).actorNumber;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_18222c36f;
    if (iVar1 != (pPVar3->fields).actorNumber) {
      if (((__this->fields)._inPMMode != false) &&
         ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0)) {
        pPVar3 = (object->fields).target;
        if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_18222c36f;
        if ((((__this->fields)._currentPMTarget)->fields).actorNumber == (pPVar3->fields).actorNumber) {
          return;
        }
      }
      UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)0x0);
      pPVar3 = (object->fields).target;
      (__this->fields)._currentPMTarget = pPVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget,pPVar3);
      (__this->fields)._inPMMode = true;
      (__this->fields)._pmToggleActive = true;
      if ((__this->fields)._pmToggleCoroutine != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                  ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pmToggleCoroutine,(MethodInfo *)0x0
                  );
      }
      routine = UI_ChatPanel__ResetPMToggleActive(__this,(MethodInfo *)0x0);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      (__this->fields)._pmToggleCoroutine = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pmToggleCoroutine,value);
      UI_ChatPanel__AddPMPartner(__this,(object->fields).target,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._pmPartners;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass118_0_EnterPMMode_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      if (__this_00 != (System_Collections_Generic_List_Player__o *)0x0) {
        iVar2 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                          ((System_Collections_Generic_List_T__o *)__this_00,match,
                           (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
        (__this->fields)._currentPMIndex = iVar2;
        pPVar3 = (object->fields).target;
        if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
          iVar2 = (pPVar3->fields).actorNumber;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__ClearPMNotification(iVar2,(MethodInfo *)0x0);
          UI_ChatPanel__UpdateChatModeLabel(__this,(MethodInfo *)0x0);
          UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
          pPVar3 = (object->fields).target;
          if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
            local_res10[0] = (pPVar3->fields).actorNumber;
            arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
            key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
            pSVar4 = GameManagers_ChatManager__GetConversation(&local_18,key,(MethodInfo *)0x0);
            UI_ChatPanel__SetTextAndCaretPosition
                      (__this,(pSVar4->fields).Item1,(pSVar4->fields).Item2,(MethodInfo *)0x0);
            UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0);
            UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)0x0);
            UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)0x0);
            UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatPanel$$ExitPMMode
// il2cpp: void UI_ChatPanel__ExitPMMode (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222c380

void UI_ChatPanel__ExitPMMode(UI_ChatPanel_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  UnityEngine_Coroutine_o *value;
  System_ValueTuple_string__int__o *pSVar1;
  System_ValueTuple_string__int__o local_18;
  
  if (Il2CppMethodInitialized_1843471f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    Il2CppMethodInitialized_1843471f4 = '\x01';
  }
  UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)0x0);
  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget,(void *)0x0);
  (__this->fields)._inPMMode = false;
  (__this->fields)._currentPMIndex = -1;
  (__this->fields)._pmToggleActive = true;
  if ((__this->fields)._pmToggleCoroutine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pmToggleCoroutine,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_1843471f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__123);
    Il2CppMethodInitialized_1843471f7 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__123);
  UI_ChatPanel__ResetPMToggleActive_d__123___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                       (MethodInfo *)0x0);
    (__this->fields)._pmToggleCoroutine = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pmToggleCoroutine,value);
    UI_ChatPanel__UpdateChatModeLabel(__this,(MethodInfo *)0x0);
    UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = GameManagers_ChatManager__GetConversation(&local_18,"PUBLIC",(MethodInfo *)0x0);
    UI_ChatPanel__SetTextAndCaretPosition
              (__this,(pSVar1->fields).Item1,(pSVar1->fields).Item2,(MethodInfo *)0x0);
    UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0);
    UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)0x0);
    UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)0x0);
    UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$RemovePMPartner
// il2cpp: void UI_ChatPanel__RemovePMPartner (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18222fc10

void UI_ChatPanel__RemovePMPartner(UI_ChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *pSVar1;
  int32_t iVar2;
  UI_ChatPanel___c__DisplayClass120_0_o *object;
  System_Predicate_T__o *match;
  Photon_Realtime_Player_o *pPVar3;
  int iVar4;
  
  if (Il2CppMethodInitialized_1843471f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass120_0_RemovePMPartner_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass120_0);
    Il2CppMethodInitialized_1843471f5 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass120_0);
  UI_ChatPanel___c__DisplayClass120_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (UI_ChatPanel___c__DisplayClass120_0_o *)0x0) {
label_18222fe3d:
    ThrowNullReferenceException();
  }
  (object->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(object->fields).player,player);
  if ((object->fields).player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar1 = (__this->fields)._pmPartners;
  match = (System_Predicate_T__o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_RemovePMPartner_b__0,
             (MethodInfo_B61EB0 *)0x0);
  if (pSVar1 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222fe3d;
  iVar2 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                    ((System_Collections_Generic_List_T__o *)pSVar1,match,
                     (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
  if (iVar2 == -1) {
    return;
  }
  pSVar1 = (__this->fields)._pmPartners;
  if (pSVar1 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222fe3d;
  System_Collections_Generic_List_object___RemoveAt
            ((System_Collections_Generic_List_object__o *)pSVar1,iVar2,
             (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
  UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._pmPartners;
  if (pSVar1 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222fe3d;
  if ((pSVar1->fields)._size == 0) {
label_18222fe31:
    UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)0x0);
  }
  else {
    if ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0) {
      pPVar3 = (object->fields).player;
      if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_18222fe3d;
      if ((((__this->fields)._currentPMTarget)->fields).actorNumber == (pPVar3->fields).actorNumber) {
        pSVar1 = (__this->fields)._pmPartners;
        if (pSVar1 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222fe3d;
        if (0 < (pSVar1->fields)._size) {
          if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
            iVar4 = (pSVar1->fields)._size + -1;
            (__this->fields)._currentPMIndex = iVar4;
            if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
              pPVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_Player_get_Item);
              UI_ChatPanel__EnterPMMode(__this,pPVar3,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_18222fe3d;
        }
        goto label_18222fe31;
      }
    }
    if (iVar2 <= (__this->fields)._currentPMIndex) {
      iVar4 = (__this->fields)._currentPMIndex;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar2 = System_Math__Max_1b2c0d0(0,iVar4 + -1,(MethodInfo *)0x0);
      (__this->fields)._currentPMIndex = iVar2;
    }
  }
  return;
}


// UI.ChatPanel$$ValidatePMState
// il2cpp: void UI_ChatPanel__ValidatePMState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182236190

void UI_ChatPanel__ValidatePMState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_int__Player__o *__this_00;
  bool bVar3;
  int32_t iVar4;
  System_Predicate_T__o *match;
  Photon_Realtime_Room_o *pPVar5;
  
  if (Il2CppMethodInitialized_1843471f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c_ValidatePMState_b__121_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c);
    Il2CppMethodInitialized_1843471f6 = '\x01';
  }
  pSVar2 = (__this->fields)._pmPartners;
  if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
  }
  match = (System_Predicate_T__o *)TypeInfo_UI_ChatPanel_c->static_fields->__9__121_0;
  if (match == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_UI_ChatPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ChatPanel_c);
    }
    object = (Il2CppObject *)TypeInfo_UI_ChatPanel_c->static_fields->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_UI_ChatPanel_c_ValidatePMState_b__121_0,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_ChatPanel_c->static_fields->__9__121_0 = (System_Predicate_Player__o *)match;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ChatPanel_c->static_fields->__9__121_0,match);
  }
  if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
    System_Collections_Generic_List_object___RemoveAll
              ((System_Collections_Generic_List_object__o *)pSVar2,match,
               (MethodInfo_946210 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAll);
    if ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if ((pPVar5 == (Photon_Realtime_Room_o *)0x0) ||
         (__this_00 = (pPVar5->fields).players,
         __this_00 == (System_Collections_Generic_Dictionary_int__Player__o *)0x0)) goto label_1822363b7;
      bVar3 = System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___ContainsValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)(__this->fields)._currentPMTarget,
                         (MethodInfo_13BF340 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsValue);
      if (!bVar3) {
        (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget,(void *)0x0);
      }
    }
    if (((__this->fields)._inPMMode != false) &&
       ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0)) {
      UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._pmPartners;
    if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
      iVar4 = (__this->fields)._currentPMIndex;
      iVar1 = (pSVar2->fields)._size;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar4 = System_Math__Min_1b2c2d0(iVar4,iVar1 + -1,(MethodInfo *)0x0);
      (__this->fields)._currentPMIndex = iVar4;
      UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_1822363b7:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsTogglingPM
// il2cpp: bool UI_ChatPanel__IsTogglingPM (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222e020

bool
UI_ChatPanel__IsTogglingPM(UI_ChatPanel_o* __this, MethodInfo* method)

{
  return (__this->fields)._pmToggleActive;
}


// UI.ChatPanel$$ResetPMToggleActive
// il2cpp: System_Collections_IEnumerator_o* UI_ChatPanel__ResetPMToggleActive (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ff30

System_Collections_IEnumerator_o *
UI_ChatPanel__ResetPMToggleActive(UI_ChatPanel_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_1843471f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__123);
    Il2CppMethodInitialized_1843471f7 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_ResetPMToggleActive_d__123);
  UI_ChatPanel__ResetPMToggleActive_d__123___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsInPMMode
// il2cpp: bool UI_ChatPanel__IsInPMMode (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222d960

bool
UI_ChatPanel__IsInPMMode(UI_ChatPanel_o* __this, MethodInfo* method)

{
  return (__this->fields)._inPMMode;
}


// UI.ChatPanel$$CycleToPMPartner
// il2cpp: void UI_ChatPanel__CycleToPMPartner (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222bdf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222bfd6: nop word ptr [rax + rax]
// asm:   0x18222c027: jmp 0x18222c02e

void UI_ChatPanel__CycleToPMPartner(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *__this_00;
  bool bVar2;
  int32_t iVar3;
  UI_ChatPanel___c__DisplayClass125_0_o *object;
  System_Collections_Generic_List_Player__o *pSVar4;
  System_Predicate_T__o *pSVar5;
  Photon_Realtime_Player_o *pPVar6;
  int index;
  
  if (Il2CppMethodInitialized_1843471f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass125_0_CycleToPMPartner_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass125_0_CycleToPMPartner_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass125_0_CycleToPMPartner_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass125_0);
    Il2CppMethodInitialized_1843471f8 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass125_0);
  UI_ChatPanel___c__DisplayClass125_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (UI_ChatPanel___c__DisplayClass125_0_o *)0x0) {
label_18222c08f:
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  pSVar4 = (__this->fields)._pmPartners;
  if (pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222c08f;
  if ((pSVar4->fields)._size == 0) {
    return;
  }
  pSVar4 = UI_ChatPanel__GetPmPartnersByRecency(__this,(MethodInfo *)0x0);
  if (pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222c08f;
  iVar1 = (pSVar4->fields)._size;
  if ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0) {
    pSVar5 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass125_0_CycleToPMPartner_b__0,
               (MethodInfo_B61EB0 *)0x0);
    iVar3 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                      ((System_Collections_Generic_List_T__o *)pSVar4,pSVar5,
                       (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    (object->fields).currentIndexInRecency = iVar3;
    if (iVar3 != -1) goto label_18222bfd0;
    __this_00 = (__this->fields)._pmPartners;
    pSVar5 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass125_0_CycleToPMPartner_b__1,
               (MethodInfo_B61EB0 *)0x0);
    if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222c08f;
    iVar3 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                      ((System_Collections_Generic_List_T__o *)__this_00,pSVar5,
                       (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    (object->fields).currentIndexInRecency = iVar3;
    if (iVar3 != -1) {
      pSVar5 = (System_Predicate_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass125_0_CycleToPMPartner_b__2,
                 (MethodInfo_B61EB0 *)0x0);
      iVar3 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                        ((System_Collections_Generic_List_T__o *)pSVar4,pSVar5,
                         (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
      if (iVar3 != -1) {
        (object->fields).currentIndexInRecency = iVar3;
      }
      goto label_18222bfd0;
    }
  }
  (object->fields).currentIndexInRecency = iVar1;
label_18222bfd0:
  index = 0;
  if (0 < iVar1) {
    do {
      pPVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Player_get_Item);
      if (pPVar6 == (Photon_Realtime_Player_o *)0x0) goto label_18222c08f;
      iVar3 = (pPVar6->fields).actorNumber;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar2 = GameManagers_ChatManager__HasActivePMNotification(iVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (index != (object->fields).currentIndexInRecency) goto label_18222c03b;
        break;
      }
      index = index + 1;
    } while (index < iVar1);
  }
  index = ((object->fields).currentIndexInRecency + 1) % (iVar1 + 1);
label_18222c03b:
  if (index == iVar1) {
    UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)0x0);
    UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)0x0);
  }
  else {
    pPVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Player_get_Item);
    UI_ChatPanel__EnterPMMode(__this,pPVar6,(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatPanel$$GetPmPartnersByRecency
// il2cpp: System_Collections_Generic_List_Player__o* UI_ChatPanel__GetPmPartnersByRecency (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222cb10
// eh: try 0x18222cd40..0x18222d0f8 -> pad 0x183324cb0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222cd3e: nop 
// asm:   0x18222cda6: mov rdx, qword ptr [rip + 0x1e63da3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x18222cdad: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18222cdb2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222cdb7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18222cdbc: test rcx, rcx
// asm:   0x18222cdbf: jne 0x18222d0e7
// asm:   0x18222cdc5: mov r13, qword ptr [rsp + 0xa0]
// asm:   0x18222cdcd: mov r14, qword ptr [rsp + 0xb8]
// asm:   0x18222cdd5: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x18222cf7e: mov rdx, qword ptr [rip + 0x1eb184b]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x18222cf85: sub ebx, 1
// asm:   0x18222cf88: jns 0x18222ce42
// asm:   0x18222d0a0: mov rdx, qword ptr [rip + 0x1e63aa9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x18222d0a7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18222d0ac: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222d0b1: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18222d0b6: test rcx, rcx
// asm:   0x18222d0b9: jne 0x18222d0f8
// asm:   0x18222d0bb: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x18222d0e7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18222d0f8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 

System_Collections_Generic_List_Player__o *
UI_ChatPanel__GetPmPartnersByRecency(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Player__o *pSVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  longlong lVar3;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  Photon_Realtime_Player_o *value;
  bool bVar4;
  int8_t iVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o item;
  System_Collections_Generic_List_Player__o *__this_02;
  System_Collections_Generic_Dictionary_int__Player__o *__this_03;
  System_Collections_Generic_HashSet_int__o *__this_04;
  UI_ChatPanel___c__DisplayClass126_0_o *object;
  System_Func_Player__bool__o *__this_05;
  Il2CppClass *klass;
  Il2CppObject *local_res18;
  System_Collections_Generic_Dictionary_int__Player__o *local_res20;
  undefined1 local_60 [16];
  Photon_Realtime_Player_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Photon_Realtime_Player_o *local_38;
  
  if (Il2CppMethodInitialized_1843471f9 == '\0') {
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
              (&MethodInfo_UI_ChatPanel_c__DisplayClass126_0_GetPmPartnersByRecency_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass126_0);
    Il2CppMethodInitialized_1843471f9 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Photon_Realtime_Player_o *)0x0;
  local_res18 = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
  if (((__this->fields)._pmPartners == (System_Collections_Generic_List_Player__o *)0x0) ||
     ((((__this->fields)._pmPartners)->fields)._size == 0)) {
    return __this_02;
  }
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_Player);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_Player_ctor);
  pSVar1 = (__this->fields)._pmPartners;
  if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
    local_res20 = __this_03;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext),
          value = local_38, bVar4) {
      if (local_38 != (Photon_Realtime_Player_o *)0x0) {
        if (__this_03 == (System_Collections_Generic_Dictionary_int__Player__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__ulong__o *)__this_03,
                           (local_38->fields).actorNumber,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_Player_ContainsKey);
        if (!bVar4) {
          System_Collections_Generic_Dictionary_int__object___set_Item
                    ((System_Collections_Generic_Dictionary_int__object__o *)__this_03,
                     (value->fields).actorNumber,(Il2CppObject *)value,
                     (MethodInfo_1423510 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_Player_set_Item);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (__this_04,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
    if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
      index = (pSVar2->fields)._size;
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      while (index = index + -1, -1 < index) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        lVar3 = *(longlong *)((longlong)klass->static_fields + 0xb8);
        if (lVar3 == 0) goto label_18222d0db;
        if (index < *(int *)(lVar3 + 0x18)) {
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(klass);
            klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
          }
          __this_00 = (System_Collections_Generic_List_T__o *)klass->static_fields->PrivateFlags;
          if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_18222d0db;
          iVar5 = System_Collections_Generic_List_sbyte___get_Item
                            (__this_00,index,
                             (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
          klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
          if (iVar5 != '\0') {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                        TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
            if (__this_01 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
            goto label_18222d0db;
            item = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                             (__this_01,index,
                              (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
            if (0 < (int)item.fields) {
              if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_18222d0db;
              bVar4 = System_Collections_Generic_HashSet_int___Contains
                                ((System_Collections_Generic_HashSet_T__o *)__this_04,(int32_t)item.fields,
                                 (MethodInfo_1759C90 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
              if (!bVar4) {
                System_Collections_Generic_HashSet_int___Add
                          (__this_04,(int32_t)item.fields,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                if (__this_03 == (System_Collections_Generic_Dictionary_int__Player__o *)0x0)
                goto label_18222d0db;
                bVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                                  ((System_Collections_Generic_Dictionary_int__object__o *)__this_03,
                                   (int32_t)item.fields,&local_res18,
                                   (MethodInfo_141F4E0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_Player_TryGetValue);
                klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
                if (bVar4) {
                  if (__this_02 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222d0db;
                  il2cpp_runtime_helper_180012890(__this_02,local_res18,MethodInfo_System_Collections_Generic_List_Player_Add);
                  klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
                }
              }
            }
          }
        }
      }
      pSVar1 = (__this->fields)._pmPartners;
      if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                   (System_Collections_Generic_List_T__o *)pSVar1,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
        local_48 = (undefined1  [8])local_60._0_8_;
        pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
        local_38 = local_50;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                       MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
            return __this_02;
          }
          object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass126_0);
          UI_ChatPanel___c__DisplayClass126_0___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
          if (object == (UI_ChatPanel___c__DisplayClass126_0_o *)0x0) break;
          (object->fields).p = local_38;
          Il2CppCodeGenWriteBarrier(&(object->fields).p,local_38);
          if ((object->fields).p != (Photon_Realtime_Player_o *)0x0) {
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
            System_Func_object__bool____ctor
                      ((System_Predicate_object__o *)__this_05,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass126_0_GetPmPartnersByRecency_b__0,
                       (MethodInfo_B61EB0 *)0x0);
            bVar4 = System_Linq_Enumerable__Any_object__6b6920
                              ((System_Collections_Generic_IEnumerable_TSource__o *)__this_02,
                               (System_Func_TSource__bool__o *)__this_05,
                               (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_Player);
            if (!bVar4) {
              if (__this_02 == (System_Collections_Generic_List_Player__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(__this_02,(object->fields).p,MethodInfo_System_Collections_Generic_List_Player_Add
                           );
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_18222d0db:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$AddPMPartner
// il2cpp: void UI_ChatPanel__AddPMPartner (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1822293a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222967a: mov r8, qword ptr [rip + 0x1ea041f]  ; MethodInfo_System_Collections_Generic_List_Player_Add
// asm:   0x182229681: mov rdx, rdi
// asm:   0x182229684: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x182229689: jmp 0x18222962e

void UI_ChatPanel__AddPMPartner(UI_ChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *pSVar1;
  int32_t index;
  int iVar2;
  UI_ChatPanel___c__DisplayClass127_0_o *object;
  Photon_Realtime_Player_o *pPVar3;
  System_Predicate_T__o *match;
  Il2CppObject *arg0;
  System_String_o *key;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_1843471fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ChatPanel_c__DisplayClass127_0_AddPMPartner_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass127_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    Il2CppMethodInitialized_1843471fa = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass127_0);
  UI_ChatPanel___c__DisplayClass127_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (UI_ChatPanel___c__DisplayClass127_0_o *)0x0) {
    (object->fields).player = player;
    Il2CppCodeGenWriteBarrier(&(object->fields).player,player);
    if ((object->fields).player == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    iVar2 = (((object->fields).player)->fields).actorNumber;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if (iVar2 == (pPVar3->fields).actorNumber) {
        return;
      }
      pSVar1 = (__this->fields)._pmPartners;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass127_0_AddPMPartner_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
        index = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                          ((System_Collections_Generic_List_T__o *)pSVar1,match,
                           (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_Player_FindIndex);
        pSVar1 = (__this->fields)._pmPartners;
        if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
          if (index == -1) {
            if (9 < (pSVar1->fields)._size) {
              pPVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,0,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_Player_get_Item);
              if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
                local_res10[0] = (pPVar3->fields).actorNumber;
                arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
                key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                GameManagers_ChatManager__ClearConversation(key,(MethodInfo *)0x0);
                GameManagers_ChatManager__ClearPMNotification((pPVar3->fields).actorNumber,(MethodInfo *)0x0);
                GameManagers_ChatManager__ResetNotifiedForPM((pPVar3->fields).actorNumber,(MethodInfo *)0x0);
              }
              pSVar1 = (__this->fields)._pmPartners;
              if (pSVar1 == (System_Collections_Generic_List_Player__o *)0x0) goto label_18222968b;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar1,0,
                         (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
              if ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0) {
                if (pPVar3 == (Photon_Realtime_Player_o *)0x0) {
                  iVar2 = -1;
                }
                else {
                  iVar2 = (pPVar3->fields).actorNumber;
                }
                if ((((__this->fields)._currentPMTarget)->fields).actorNumber == iVar2) {
                  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget,(void *)0x0);
                  (__this->fields)._inPMMode = false;
                }
              }
            }
            pSVar1 = (__this->fields)._pmPartners;
            if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
              il2cpp_runtime_helper_180012890(pSVar1,(object->fields).player,
                            MethodInfo_System_Collections_Generic_List_Player_Add);
              UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pPVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Player_get_Item);
            pSVar1 = (__this->fields)._pmPartners;
            if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar1,index,
                         (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Player_RemoveAt);
              pSVar1 = (__this->fields)._pmPartners;
              if (pSVar1 != (System_Collections_Generic_List_Player__o *)0x0) {
                il2cpp_runtime_helper_180012890(pSVar1,pPVar3,MethodInfo_System_Collections_Generic_List_Player_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
label_18222968b:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$GetCurrentPMTarget
// il2cpp: Photon_Realtime_Player_o* UI_ChatPanel__GetCurrentPMTarget (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18187bc60

Photon_Realtime_Player_o*
UI_ChatPanel__GetCurrentPMTarget(UI_ChatPanel_o* __this, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._currentPMTarget.fields;
}


// UI.ChatPanel$$ResetPMState
// il2cpp: void UI_ChatPanel__ResetPMState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222fe70

void UI_ChatPanel__ResetPMState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Player__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843471fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Clear);
    Il2CppMethodInitialized_1843471fb = '\x01';
  }
  (__this->fields)._inPMMode = false;
  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPMTarget,(void *)0x0);
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    (__this->fields)._currentPMIndex = -1;
    (__this->fields)._pmToggleActive = false;
    if ((__this->fields)._pmToggleCoroutine != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pmToggleCoroutine,(MethodInfo *)0x0);
    }
    UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPanel$$CloseEmojiPanel
// il2cpp: void UI_ChatPanel__CloseEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x1822296e0

void UI_ChatPanel__CloseEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843471fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471fc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._emojiPanel;
    (__this->fields)._emojiPanelActive = false;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatPanel$$HandleCursorStateChange
// il2cpp: void UI_ChatPanel__HandleCursorStateChange (UI_ChatPanel_o* __this, int32_t newState, const MethodInfo* method);
// 0x18222d100

void UI_ChatPanel__HandleCursorStateChange(UI_ChatPanel_o *__this,int32_t newState,MethodInfo *method)

{
  if ((newState != 0) && ((__this->fields)._emojiPanelActive != false)) {
    UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatPanel$$MoveCaretToEnd
// il2cpp: void UI_ChatPanel__MoveCaretToEnd (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222e550

void UI_ChatPanel__MoveCaretToEnd(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843471fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471fd = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
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
                    (pTVar3,(System_Type_o *)0x0,(MethodInfo *)0x0);
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


// UI.ChatPanel$$ShouldBlockGameInput
// il2cpp: bool UI_ChatPanel__ShouldBlockGameInput (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x1822347d0

bool UI_ChatPanel__ShouldBlockGameInput(UI_ChatPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields)._emojiPanelActive == false)) {
    return (__this->fields)._isInteractingWithChatUI;
  }
  return true;
}


// UI.ChatPanel$$ShouldBlockKeybind
// il2cpp: bool UI_ChatPanel__ShouldBlockKeybind (UI_ChatPanel_o* __this, int32_t keyCode, const MethodInfo* method);
// 0x182234810

bool UI_ChatPanel__ShouldBlockKeybind(UI_ChatPanel_o *__this,int32_t keyCode,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
  if ((((bVar1) || ((__this->fields)._emojiPanelActive != false)) ||
      ((__this->fields)._isInteractingWithChatUI != false)) &&
     (((keyCode != 0xd && (keyCode != 0x10f)) && ((keyCode != 0x1b && (keyCode != 9)))))) {
    return true;
  }
  return false;
}


// UI.ChatPanel$$RefreshPoolSize
// il2cpp: void UI_ChatPanel__RefreshPoolSize (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222f750
// eh: try 0x18222f930..0x18222f95f -> pad 0x183317fd0 catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222f92c: nop dword ptr [rax]
// asm:   0x18222f970: mov rdx, qword ptr [rip + 0x1e717d1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose
// asm:   0x18222f977: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18222f97c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18222f981: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18222f986: test rcx, rcx
// asm:   0x18222f989: jne 0x18222fbf8
// asm:   0x18222f98f: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x18222f997: movss xmm6, dword ptr [rsp + 0xc0]
// asm:   0x18222f9a0: movss xmm7, dword ptr [rsp + 0xc8]
// asm:   0x18222f9a9: mov r14d, dword ptr [rsp + 0x20]
// asm:   0x18222f9ae: mov esi, dword ptr [rsp + 0x24]
// asm:   0x18222f9dd: nop dword ptr [rax]
// asm:   0x18222fabc: jmp 0x18222fbbd
// asm:   0x18222fbf8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_ChatPanel__RefreshPoolSize(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *pSVar3;
  Settings_UISettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  UI_ChatPanel_ChatLineView_array *pUVar7;
  Il2CppClass *pIVar8;
  MethodInfo *pMVar9;
  bool bVar10;
  int32_t iVar11;
  TMPro_TMP_FontAsset_o *fontAsset;
  UI_ChatPanel_ChatLineView_o *__this_01;
  Il2CppObject *pIVar12;
  int iVar13;
  float fontSize;
  float width;
  undefined1 local_78 [16];
  UI_ChatPanel_ChatLineView_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  UI_ChatPanel_ChatLineView_o *local_50;
  
  if (Il2CppMethodInitialized_1843471fe == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    Il2CppMethodInitialized_1843471fe = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (UI_ChatPanel_ChatLineView_o *)0x0;
  pSVar3 = (__this->fields)._linesPool;
  if (pSVar3 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
    iVar13 = (pSVar3->fields)._size;
    if (Il2CppMethodInitialized_1843471c5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
      Il2CppMethodInitialized_1843471c5 = '\x01';
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    iVar11 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((((pSVar4 != (Settings_UISettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).ChatFontSize, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
        (pSVar6 = (pSVar4->fields).ChatWidth, pSVar6 != (Settings_IntSetting_o *)0x0)) &&
       (pSVar3 = (__this->fields)._linesPool,
       pSVar3 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0)) {
      fontSize = (float)(pSVar5->fields)._value;
      width = (float)(pSVar6->fields)._value;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                 (System_Collections_Generic_List_T__o *)pSVar3,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_GetEnumerator);
      local_60 = (undefined1  [8])local_78._0_8_;
      pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
      local_50 = local_68;
      local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
      while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_60,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext
                                ), bVar10) {
        if (local_50 != (UI_ChatPanel_ChatLineView_o *)0x0) {
          UI_ChatPanel_ChatLineView__ApplyChatMetrics(local_50,fontSize,width,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                 MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_Dispose);
      if (iVar13 != iVar11) {
        if (iVar13 < iVar11) {
          if (iVar13 < iVar11) {
            fontAsset = UnityEngine_Resources__Load_object_
                                  ("UI/Fonts/Vegur-Regular-SDF",
                                   (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
            do {
              __this_01 = UI_ChatPanel__CreateLine
                                    (__this,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                     (MethodInfo *)0x0);
              if (__this_01 == (UI_ChatPanel_ChatLineView_o *)0x0) goto label_18222fbf2;
              UI_ChatPanel_ChatLineView__SetFont(__this_01,fontAsset,(MethodInfo *)0x0);
              UI_ChatPanel_ChatLineView__ApplyChatMetrics(__this_01,fontSize,width,(MethodInfo *)0x0);
              __this_00 = (__this_01->fields)._gameObject_k__BackingField;
              if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18222fbf2;
              UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
              pMVar9 = MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add;
              pSVar3 = (__this->fields)._linesPool;
              if (pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0)
              goto label_18222fbf2;
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar7 = (pSVar3->fields)._items;
              if (pUVar7 == (UI_ChatPanel_ChatLineView_array *)0x0) goto label_18222fbf2;
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar7->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                if ((uint)pUVar7->max_length <= uVar2) {
                  ThrowIndexOutOfRangeException();
                }
                pUVar7->m_Items[(int)uVar2] = __this_01;
                Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar2,__this_01);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_01,
                           (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar11);
          }
        }
        else {
          iVar13 = iVar13 + -1;
          do {
            pSVar3 = (__this->fields)._linesPool;
            if (pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0)
            goto label_18222fbf2;
            pIVar12 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,iVar13,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item);
            if (pIVar12 != (Il2CppObject *)0x0) {
              pSVar3 = (__this->fields)._linesPool;
              if ((pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) ||
                 (pIVar12 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar13,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item
                                      ), pIVar12 == (Il2CppObject *)0x0)) goto label_18222fbf2;
              pIVar8 = pIVar12[0xc].klass;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pIVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if (bVar10) {
                pSVar3 = (__this->fields)._linesPool;
                if ((pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) ||
                   (pIVar12 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar3,iVar13,
                                         (MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_get_Item
                                        ), pIVar12 == (Il2CppObject *)0x0)) goto label_18222fbf2;
                pIVar8 = pIVar12[0xc].klass;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pIVar8,(MethodInfo *)0x0);
              }
            }
            pSVar3 = (__this->fields)._linesPool;
            if (pSVar3 == (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0)
            goto label_18222fbf2;
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar13,
                       (MethodInfo_947010 *)
                       MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_RemoveAt);
            iVar13 = iVar13 + -1;
          } while (iVar11 <= iVar13);
        }
      }
      pSVar3 = (__this->fields)._linesPool;
      if (pSVar3 != (System_Collections_Generic_List_ChatPanel_ChatLineView__o *)0x0) {
        (__this->fields)._actualPoolSize = (pSVar3->fields)._size;
        (__this->fields)._requestCanvasUpdate = true;
        return;
      }
    }
  }
label_18222fbf2:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$IsInteractingWithChatUI
// il2cpp: bool UI_ChatPanel__IsInteractingWithChatUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222da00

bool UI_ChatPanel__IsInteractingWithChatUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._isInteractingWithChatUI == false) {
    bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    if (!bVar1) {
      return (__this->fields)._emojiPanelActive;
    }
  }
  return true;
}


// UI.ChatPanel$$SetTextAndPositionCaret
// il2cpp: void UI_ChatPanel__SetTextAndPositionCaret (UI_ChatPanel_o* __this, System_String_o* newText, const MethodInfo* method);
// 0x1822307f0

void UI_ChatPanel__SetTextAndPositionCaret(UI_ChatPanel_o *__this,System_String_o *newText,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843471ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471ff = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if ((((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (pTVar2 = (pTVar1->fields).m_TextComponent, pTVar2 != (TMPro_TMP_Text_o *)0x0)) &&
        ((*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                   (pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0), newText != (System_String_o *)0x0)) &&
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
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SetTextAndCaretPosition
// il2cpp: void UI_ChatPanel__SetTextAndCaretPosition (UI_ChatPanel_o* __this, System_String_o* newText, int32_t caretPosition, const MethodInfo* method);
// 0x182230b40

void UI_ChatPanel__SetTextAndCaretPosition
               (UI_ChatPanel_o *__this,System_String_o *newText,int32_t caretPosition,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  int value;
  
  if (Il2CppMethodInitialized_184347200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347200 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if (((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
        (pTVar2 = (pTVar1->fields).m_TextComponent, pTVar2 != (TMPro_TMP_Text_o *)0x0)) &&
       ((*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0), newText != (System_String_o *)0x0)) {
      if (((caretPosition < 0) || (value = (newText->fields)._stringLength, caretPosition <= value)) &&
         (value = caretPosition, caretPosition < 0)) {
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
  ThrowNullReferenceException();
}


// UI.ChatPanel$$GetCachedRectTransform
// il2cpp: UnityEngine_RectTransform_o* UI_ChatPanel__GetCachedRectTransform (UI_ChatPanel_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x18222c650

UnityEngine_RectTransform_o *
UI_ChatPanel__GetCachedRectTransform(UI_ChatPanel_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *x;
  UnityEngine_RectTransform_o *local_res10;
  
  if (Il2CppMethodInitialized_184347201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347201 = '\x01';
  }
  local_res10 = (UnityEngine_RectTransform_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedRectTransforms;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)obj,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_TryGetValue);
    if (!bVar2) {
      if (obj == (UnityEngine_GameObject_o *)0x0) goto label_18222c788;
      x = UnityEngine_GameObject__GetComponent_object_
                    (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      local_res10 = x;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._cachedRectTransforms;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18222c788;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)local_res10,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_set_Item);
      }
    }
    return local_res10;
  }
label_18222c788:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$SaveCurrentConversation
// il2cpp: void UI_ChatPanel__SaveCurrentConversation (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182230420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822304e3: mov rdi, qword ptr [rip + 0x1e8fe86]  ; "PUBLIC"

void UI_ChatPanel__SaveCurrentConversation(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *text;
  bool bVar2;
  int32_t caretPos;
  Il2CppObject *arg0;
  System_String_o *key;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"PUBLIC");
    il2cpp_codegen_initialize_runtime_metadata(&"PM_{0}");
    Il2CppMethodInitialized_184347202 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  key = "PUBLIC";
  if (((__this->fields)._inPMMode != false) &&
     ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0)) {
    local_res8[0] = (((__this->fields)._currentPMTarget)->fields).actorNumber;
    arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
    key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
  }
  if ((__this->fields)._inPMMode == false) {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_182230597;
    bVar2 = System_String__IsNullOrEmpty((pTVar1->fields).m_Text,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearConversation("PUBLIC",(MethodInfo *)0x0);
      return;
    }
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    text = (pTVar1->fields).m_Text;
    caretPos = TMPro_TMP_InputField__get_selectionFocusPosition(pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__SaveConversation(key,text,caretPos,(MethodInfo *)0x0);
    return;
  }
label_182230597:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$RestorePMPartners
// il2cpp: void UI_ChatPanel__RestorePMPartners (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x18222ffa0
// eh: try 0x182230294..0x182230419 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822303a4: mov rdx, qword ptr [rip + 0x1e57c9d]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822303ab: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822303b0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822303b5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822303ba: test rcx, rcx
// asm:   0x1822303bd: jne 0x182230419
// asm:   0x1822303bf: mov r13, qword ptr [rsp + 0xa0]
// asm:   0x182230419: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_ChatPanel__RestorePMPartners(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  int8_t iVar4;
  bool bVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields item;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields item_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Photon_Realtime_Player_o *pPVar6;
  UI_ChatPanel___c__DisplayClass141_0_o *object;
  Photon_Realtime_Room_o *pPVar7;
  System_Predicate_T__o *match;
  int index;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_184347203 == '\0') {
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
              (&MethodInfo_UI_ChatPanel_c__DisplayClass141_0_RestorePMPartners_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ChatPanel_c__DisplayClass141_0);
    Il2CppMethodInitialized_184347203 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  index = 0;
  while( true ) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822303fd;
    if ((pSVar1->fields)._size <= index) break;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this_00 = (System_Collections_Generic_List_T__o *)
                TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_1822303fd;
    iVar4 = System_Collections_Generic_List_sbyte___get_Item
                      (__this_00,index,
                       (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    if (iVar4 != '\0') {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar2 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
      if (pSVar2 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) goto label_1822303fd;
      item = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
             System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                       (pSVar2,index,
                        (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pSVar2 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
      if (pSVar2 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) goto label_1822303fd;
      item_00 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (pSVar2,index,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar6 == (Photon_Realtime_Player_o *)0x0) goto label_1822303fd;
      if (item != (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                  (pPVar6->fields).actorNumber) {
        if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822303fd;
        System_Collections_Generic_HashSet_int___Add
                  (__this_01,(int32_t)item,
                   (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar6 == (Photon_Realtime_Player_o *)0x0) goto label_1822303fd;
      if (item_00 !=
          (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)(pPVar6->fields).actorNumber) {
        if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822303fd;
        System_Collections_Generic_HashSet_int___Add
                  (__this_01,(int32_t)item_00,
                   (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      }
    }
    index = index + 1;
  }
  if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_uint___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,
               (System_Collections_Generic_HashSet_uint__o *)__this_01,
               (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    local_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
    while( true ) {
      bVar5 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                         (MethodInfo_1537E90 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
      if (!bVar5) break;
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ChatPanel_c__DisplayClass141_0);
      UI_ChatPanel___c__DisplayClass141_0___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
      if (object == (UI_ChatPanel___c__DisplayClass141_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (object->fields).partnerID = (int32_t)local_48;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar7 == (Photon_Realtime_Room_o *)0x0) {
        ThrowNullReferenceException();
      }
      pPVar6 = (*(pPVar7->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar7,(object->fields).partnerID,false,(pPVar7->klass->vtable)._10_GetPlayer.method
                         );
      if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
        pSVar3 = (__this->fields)._pmPartners;
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Player);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass141_0_RestorePMPartners_b__0,
                   (MethodInfo_B61EB0 *)0x0);
        if (pSVar3 == (System_Collections_Generic_List_Player__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___Exists
                          ((System_Collections_Generic_List_T__o *)pSVar3,match,
                           (MethodInfo_91C4D0 *)MethodInfo_System_Collections_Generic_List_Player_Exists);
        if (!bVar5) {
          pSVar3 = (__this->fields)._pmPartners;
          if (pSVar3 == (System_Collections_Generic_List_Player__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar3,pPVar6);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    pSVar3 = (__this->fields)._pmPartners;
    if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
      if (0 < (pSVar3->fields)._size) {
        (__this->fields)._currentPMIndex = (pSVar3->fields)._size + -1;
      }
      UI_ChatPanel__UpdateChatModeElements(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_1822303fd:
  ThrowNullReferenceException();
}


// UI.ChatPanel$$.ctor
// il2cpp: void UI_ChatPanel___ctor (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x182236590

void UI_ChatPanel___ctor(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_ChatPanel_ChatLineView__o *__this_00;
  System_Collections_Generic_Dictionary_GameObject__TMP_InputField__o *__this_01;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this_02;
  System_Collections_Generic_List_Player__o *__this_03;
  System_Collections_Generic_Dictionary_GameObject__RectTransform__o *__this_04;
  
  if (Il2CppMethodInitialized_184347204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField);
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
    Il2CppMethodInitialized_184347204 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatPanel_ChatLineView);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_ctor);
  (__this->fields)._linesPool = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._linesPool,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_GameObject_TMP_InputField_ctor);
  (__this->fields)._cachedInputFields = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedInputFields,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
  System_Collections_Generic_List_ChatManager_ChatDisplayLine____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor)
  ;
  (__this->fields)._visibleMessages = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleMessages,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
  (__this->fields)._pmPartners = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pmPartners,__this_03);
  (__this->fields)._currentPMIndex = -1;
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_GameObject_RectTransform_ctor);
  (__this->fields)._cachedRectTransforms = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedRectTransforms,__this_04);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._stickerTag = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stickerTag,value);
  (__this->fields)._lastStickerSentTime = -INFINITY;
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


