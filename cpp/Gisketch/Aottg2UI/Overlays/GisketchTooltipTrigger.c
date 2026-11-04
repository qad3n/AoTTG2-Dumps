// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchTooltipTrigger.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* text, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* mode, const MethodInfo* method);
// 0x1818d4220

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *text,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *mode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_184342015 = '\x01';
  }
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text,text);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  (__this->fields)._theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._theme,theme);
  (__this->fields)._mode = mode;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mode,mode);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818d31d0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown
            ((Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0,eventData,method);
  bVar1 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip(__this,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434201c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
      Il2CppMethodInitialized_18434201c = '\x01';
    }
    bVar1 = System_String__Equals_196c550((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
    if (!bVar1) {
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip(__this,eventData,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818d31b0

void
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818d3270

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown
            ((Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0,eventData,method);
  if (Il2CppMethodInitialized_18434201c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_18434201c = '\x01';
  }
  bVar1 = System_String__Equals_196c550((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (!bVar1) {
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip(__this,eventData,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818d32f0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip(__this,(MethodInfo *)0x0);
    if (bVar1) {
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818d31b0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ShowTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d42c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d4cc3: mov r8, qword ptr [rip + 0x279f336]  ; "ink"
// asm:   0x1818d4d45: mov r8, r13

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_array *pGVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  System_String_o *requiredText;
  UnityEngine_Vector2_o value;
  MethodInfo *pMVar5;
  Il2CppType *handle;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar6;
  bool bVar7;
  int32_t value_00;
  uint32_t weight;
  TMPro_TMP_Text_o *x_00;
  System_String_o *pSVar8;
  UnityEngine_Canvas_o *pUVar9;
  UnityEngine_Canvas_o *pUVar10;
  System_Type_array *pSVar11;
  System_Type_o *pSVar12;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_RectTransform_o *pUVar17;
  UnityEngine_CanvasGroup_o *pUVar18;
  UnityEngine_UI_Image_o *pUVar19;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  UnityEngine_Color_o *pUVar20;
  TMPro_TextMeshProUGUI_o *__this_02;
  UnityEngine_Vector2_o UVar21;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o **ppGVar22;
  TMPro_TMP_FontAsset_o *value_01;
  System_String_o *pSVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_res8;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_res18;
  UnityEngine_Vector2_Fields local_res20;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_o local_78 [4];
  
  if (Il2CppMethodInitialized_184342016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"tooltipText");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Tooltip Label");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ink");
    Il2CppMethodInitialized_184342016 = '\x01';
  }
  pSVar23 = (System_String_o *)0x0;
  local_res18 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  local_res8 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  if (Il2CppMethodInitialized_18434201c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_18434201c = '\x01';
  }
  bVar7 = System_String__Equals_196c550((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (bVar7) {
    x_00 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      if (x_00 == (TMPro_TMP_Text_o *)0x0) goto label_1818d4e75;
      pSVar8 = (*(x_00->klass->vtable)._65_get_text.methodPtr)(x_00,(x_00->klass->vtable)._65_get_text.method)
      ;
      (__this->fields)._text = pSVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._text,pSVar8);
    }
  }
  bVar7 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
  if (!bVar7) {
    x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pUVar9 = UnityEngine_Component__GetComponentInParent_object__664f20
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        if (pUVar9 != (UnityEngine_Canvas_o *)0x0) {
          pUVar10 = UnityEngine_Canvas__get_rootCanvas(pUVar9,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            pUVar9 = UnityEngine_Canvas__get_rootCanvas(pUVar9,(MethodInfo *)0x0);
          }
          (__this->fields)._placementCanvas = pUVar9;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._placementCanvas,pUVar9);
          pSVar11 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
          handle = TypeRef_UnityEngine_RectTransform;
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
          if (pSVar11 != (System_Type_array *)0x0) {
            if ((pSVar12 != (System_Type_o *)0x0) &&
               (pIVar13 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
               pIVar13 == (Il2CppObject *)0x0)) {
              pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
            }
            if ((int)pSVar11->max_length == 0) {
label_1818d4e9b:
              ThrowIndexOutOfRangeException();
            }
            pSVar11->m_Items[0] = pSVar12;
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
            pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(pUVar14,"AoTTG Tooltip",pSVar11,(MethodInfo *)0x0);
            (__this->fields)._tooltip = pUVar14;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,pUVar14);
            if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
            }
            pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Add;
            __this_00 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
            if (__this_00 != (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) {
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pGVar3 = (__this_00->fields)._items;
              if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_array *)0x0) {
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pGVar3->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  if ((uint)pGVar3->max_length <= uVar2) goto label_1818d4e9b;
                  pGVar3->m_Items[(int)uVar2] = __this;
                  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2,__this);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                             (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                pUVar14 = (__this->fields)._tooltip;
                if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar15 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                  pUVar9 = (__this->fields)._placementCanvas;
                  if ((pUVar9 != (UnityEngine_Canvas_o *)0x0) &&
                     (pUVar16 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                     pUVar15 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent_2f5a7e0(pUVar15,pUVar16,false,(MethodInfo *)0x0);
                    pUVar14 = (__this->fields)._tooltip;
                    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar17 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar14,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                          );
                      (__this->fields)._tooltipRect = pUVar17;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipRect,pUVar17);
                      pUVar17 = (__this->fields)._tooltipRect;
                      if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_pivot
                                  (pUVar17,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                        pUVar14 = (__this->fields)._tooltip;
                        pUVar9 = (__this->fields)._placementCanvas;
                        if (Il2CppMethodInitialized_184342018 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
                          Il2CppMethodInitialized_184342018 = '\x01';
                        }
                        if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
                           (pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                                (pUVar14,(MethodInfo_6F4D60 *)
                                                         MethodInfo_UnityEngine_GameObject_AddComponent_Canvas
                                                ), pUVar10 != (UnityEngine_Canvas_o *)0x0)) {
                          UnityEngine_Canvas__set_overrideSorting(pUVar10,true,(MethodInfo *)0x0);
                          value_00 = Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent
                                               (pUVar9,0x3b6,(MethodInfo *)0x0);
                          UnityEngine_Canvas__set_sortingOrder(pUVar10,value_00,(MethodInfo *)0x0);
                          pUVar14 = (__this->fields)._tooltip;
                          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar18 = UnityEngine_GameObject__AddComponent_object_
                                                (pUVar14,(MethodInfo_6F4D60 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup
                                                );
                            (__this->fields)._group = pUVar18;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._group,pUVar18);
                            pUVar18 = (__this->fields)._group;
                            if (pUVar18 != (UnityEngine_CanvasGroup_o *)0x0) {
                              UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar18,false,(MethodInfo *)0x0);
                              pUVar18 = (__this->fields)._group;
                              if (pUVar18 != (UnityEngine_CanvasGroup_o *)0x0) {
                                UnityEngine_CanvasGroup__set_interactable(pUVar18,false,(MethodInfo *)0x0);
                                pUVar14 = (__this->fields)._tooltip;
                                if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
                                   (pUVar19 = UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar14,(MethodInfo_6F4D60 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image),
                                   pUVar19 != (UnityEngine_UI_Image_o *)0x0)) {
                                  (*(pUVar19->klass->vtable)._25_set_raycastTarget.methodPtr)
                                            (pUVar19,false,
                                             (pUVar19->klass->vtable)._25_set_raycastTarget.method);
                                  pSVar8 = "tooltip";
                                  if (Il2CppMethodInitialized_184342017 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                    Il2CppMethodInitialized_184342017 = '\x01';
                                  }
                                  ppGVar22 = &(__this->fields)._theme;
                                  if ((__this->fields)._theme ==
                                      (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).
                                        cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)
                                                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                    }
                                    ppGVar22 = &TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->
                                                static_fields->Default;
                                  }
                                  if (*ppGVar22 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                    Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                              (*ppGVar22,pSVar8,&local_res18,(MethodInfo *)0x0);
                                    pGVar6 = local_res18;
                                    pUVar14 = (__this->fields)._tooltip;
                                    if (Il2CppMethodInitialized_184342019 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow
                                                );
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&MethodInfo_System_Nullable_bool_GetValueOrDefault);
                                      il2cpp_codegen_initialize_runtime_metadata(&"shadow");
                                      Il2CppMethodInitialized_184342019 = '\x01';
                                    }
                                    if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                       ((pGVar6->fields).shadow.fields.value != false)) {
                                      if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_1818d4e75;
                                      __this_01 = UnityEngine_GameObject__AddComponent_object_
                                                            (pUVar14,(MethodInfo_6F4D60 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow
                                                       );
                                      pGVar4 = (__this->fields)._theme;
                                      if (pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                      goto label_1818d4e75;
                                      local_88.r = 0.0;
                                      local_88.g = 0.0;
                                      local_88.b = 0.0;
                                      local_88.a = 0.32;
                                      pUVar20 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                          (local_78,pGVar4,"shadow",
                                                           (UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0)
                                      ;
                                      if (__this_01 == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0)
                                      goto label_1818d4e75;
                                      local_88.r = (pUVar20->fields).r;
                                      local_88.g = (pUVar20->fields).g;
                                      local_88.b = (pUVar20->fields).b;
                                      local_88.a = (pUVar20->fields).a;
                                      Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
                                                (__this_01,(UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0)
                                      ;
                                    }
                                    pSVar11 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
                                    pSVar12 = System_Type__GetTypeFromHandle
                                                        ((System_RuntimeTypeHandle_o)
                                                         TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
                                    if (pSVar11 != (System_Type_array *)0x0) {
                                      if ((pSVar12 != (System_Type_o *)0x0) &&
                                         (pIVar13 = il2cpp_vm_Object_IsInst
                                                              ((Il2CppObject *)pSVar12,
                                                               (((pSVar11->obj).klass)->_1).element_class),
                                         pIVar13 == (Il2CppObject *)0x0)) {
                                        pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
                                      }
                                      if ((int)pSVar11->max_length == 0) goto label_1818d4e9b;
                                      pSVar11->m_Items[0] = pSVar12;
                                      Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
                                      pUVar14 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                      UnityEngine_GameObject___ctor_2f1abe0
                                                (pUVar14,"AoTTG Tooltip Label",pSVar11,(MethodInfo *)0x0);
                                      if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
                                         (__this_02 = UnityEngine_GameObject__AddComponent_object_
                                                                (pUVar14,(MethodInfo_6F4D60 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI
                                                       ), __this_02 != (TMPro_TextMeshProUGUI_o *)0x0)) {
                                        pUVar15 = TMPro_TMP_Text__get_transform
                                                            ((TMPro_TMP_Text_o *)__this_02,(MethodInfo *)0x0);
                                        pUVar14 = (__this->fields)._tooltip;
                                        if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
                                           (pUVar16 = UnityEngine_GameObject__get_transform
                                                                (pUVar14,(MethodInfo *)0x0),
                                           pUVar15 != (UnityEngine_Transform_o *)0x0)) {
                                          UnityEngine_Transform__SetParent_2f5a7e0
                                                    (pUVar15,pUVar16,false,(MethodInfo *)0x0);
                                          pUVar17 = UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)__this_02,
                                                               (MethodInfo_6651A0 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector2);
                                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                                          }
                                          if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_anchorMin
                                                      (pUVar17,(UnityEngine_Vector2_o)
                                                               (TypeInfo_UnityEngine_Vector2->static_fields->
                                                               zeroVector).fields,(MethodInfo *)0x0);
                                            UVar21.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_181882d90(0);
                                            UnityEngine_RectTransform__set_anchorMax
                                                      (pUVar17,UVar21,(MethodInfo *)0x0);
                                            if ((local_res18 ==
                                                 (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
                                               ((local_res18->fields).padding.fields.hasValue == false)) {
                                              fVar24 = 12.0;
                                            }
                                            else {
                                              fVar24 = System_Nullable_float___get_Value
                                                                 (&(local_res18->fields).padding,
                                                                  (MethodInfo_AE2E30 *)
                                                                  MethodInfo_System_Nullable_float_get_Value);
                                            }
                                            UVar21.fields.y = fVar24;
                                            UVar21.fields.x = fVar24;
                                            UnityEngine_RectTransform__set_offsetMin
                                                      (pUVar17,UVar21,(MethodInfo *)0x0);
                                            UnityEngine_RectTransform__set_offsetMax
                                                      (pUVar17,(UnityEngine_Vector2_o)
                                                               (CONCAT44(fVar24,fVar24) ^ 0x8000000080000000),
                                                       (MethodInfo *)0x0);
                                            pSVar8 = "tooltipText";
                                            if (Il2CppMethodInitialized_184342017 == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                              Il2CppMethodInitialized_184342017 = '\x01';
                                            }
                                            ppGVar22 = &(__this->fields)._theme;
                                            if ((__this->fields)._theme ==
                                                (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)
                                                           TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                              }
                                              ppGVar22 = &TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->
                                                          static_fields->Default;
                                            }
                                            if (*ppGVar22 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                            {
                                              Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                                        (*ppGVar22,pSVar8,&local_res8,(MethodInfo *)0x0);
                                              if ((local_res8 ==
                                                   (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
                                                 ((local_res8->fields).fontSize.fields.value <= 0.0)) {
                                                fVar25 = 18.0;
                                              }
                                              else {
                                                fVar25 = System_Nullable_float___get_Value
                                                                   (&(local_res8->fields).fontSize,
                                                                    (MethodInfo_AE2E30 *)
                                                                    MethodInfo_System_Nullable_float_get_Value
                                                                   );
                                              }
                                              TMPro_TMP_Text__set_fontSize
                                                        ((TMPro_TMP_Text_o *)__this_02,fVar25,
                                                         (MethodInfo *)0x0);
                                              if (local_res8 ==
                                                  (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                                weight = 400;
                                                pSVar8 = "text";
                                              }
                                              else {
                                                pSVar8 = (local_res8->fields).fontFamily;
                                                weight = System_Nullable_uint___GetValueOrDefault_adc220
                                                                   ((System_Nullable_uint__o *)
                                                                    &(local_res8->fields).fontWeight,400,
                                                                    (MethodInfo_ADC220 *)
                                                                                                                                        
                                                       MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658
                                                       );
                                              }
                                              requiredText = (__this->fields)._text;
                                              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)
                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
                                              }
                                              value_01 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                                                   (pSVar8,weight,requiredText,false,
                                                                    (MethodInfo *)0x0);
                                              TMPro_TMP_Text__set_font
                                                        ((TMPro_TMP_Text_o *)__this_02,value_01,
                                                         (MethodInfo *)0x0);
                                              (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                                                        (__this_02,(__this->fields)._text,
                                                         (__this_02->klass->vtable)._66_set_text.method);
                                              pSVar8 = "ink";
                                              if (local_res8 !=
                                                  (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                                pSVar8 = (local_res8->fields).textColor;
                                              }
                                              pGVar4 = (__this->fields)._theme;
                                              if (pGVar4 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                              {
                                                local_88.r = 1.0;
                                                local_88.g = 1.0;
                                                local_88.b = 1.0;
                                                local_88.a = 1.0;
                                                pUVar20 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                                    (local_78,pGVar4,pSVar8,
                                                                     (UnityEngine_Color_o *)&local_88,
                                                                     (MethodInfo *)0x0);
                                                local_88.r = (pUVar20->fields).r;
                                                local_88.g = (pUVar20->fields).g;
                                                local_88.b = (pUVar20->fields).b;
                                                local_88.a = (pUVar20->fields).a;
                                                (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                                          (__this_02,(UnityEngine_Color_o *)&local_88,
                                                           (__this_02->klass->vtable)._23_set_color.method);
                                                (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                                                          (__this_02,false,
                                                           (__this_02->klass->vtable)._25_set_raycastTarget.
                                                           method);
                                                TMPro_TMP_Text__set_enableWordWrapping
                                                          ((TMPro_TMP_Text_o *)__this_02,true,
                                                           (MethodInfo *)0x0);
                                                if (local_res18 !=
                                                    (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                                  pSVar23 = (local_res18->fields).background;
                                                }
                                                pGVar4 = (__this->fields)._theme;
                                                if (pGVar4 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
                                                   ) {
                                                  local_88.r = 0.05;
                                                  local_88.g = 0.05;
                                                  local_88.b = 0.07;
                                                  local_88.a = 0.96;
                                                  pUVar20 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                                      (local_78,pGVar4,pSVar23,
                                                                       (UnityEngine_Color_o *)&local_88,
                                                                       (MethodInfo *)0x0);
                                                  local_88.r = (pUVar20->fields).r;
                                                  local_88.g = (pUVar20->fields).g;
                                                  local_88.b = (pUVar20->fields).b;
                                                  local_88.a = (pUVar20->fields).a;
                                                  (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                                                            (pUVar19,(UnityEngine_Color_o *)&local_88,
                                                             (pUVar19->klass->vtable)._23_set_color.method);
                                                  if ((
                                                      TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger
                                                      ->_2).cctor_finished_or_no_cctor == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)
                                                                                                                              
                                                       TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger
                                                       );
                                                  }
                                                  pSVar23 = (*(__this_02->klass->vtable)._65_get_text.
                                                              methodPtr)(__this_02,
                                                                         (__this_02->klass->vtable).
                                                                         _65_get_text.method);
                                                  local_res20 = (UnityEngine_Vector2_Fields)
                                                                TMPro_TMP_Text__GetPreferredValues_2d12740
                                                                          ((TMPro_TMP_Text_o *)__this_02,
                                                                           pSVar23,420.0 - (fVar24 + fVar24),
                                                                           0.0,(MethodInfo *)0x0);
                                                  fVar26 = fVar24 + fVar24 + local_res20.x;
                                                  fVar25 = 420.0;
                                                  if (fVar26 <= 420.0) {
                                                    fVar25 = fVar26;
                                                  }
                                                  pUVar17 = (__this->fields)._tooltipRect;
                                                  (__this->fields)._tooltipSize.fields.x = fVar25;
                                                  fVar24 = fVar24 + fVar24 + local_res20.y;
                                                  (__this->fields)._tooltipSize.fields.y = fVar24;
                                                  if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
                                                    value.fields.y = fVar24;
                                                    value.fields.x = fVar25;
                                                    UnityEngine_RectTransform__set_sizeDelta
                                                              (pUVar17,value,(MethodInfo *)0x0);
                                                    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
                                                              (__this,(MethodInfo *)0x0);
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
          }
        }
label_1818d4e75:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Style
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x1818d4eb0

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *name,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o **ppGVar2;
  
  if (Il2CppMethodInitialized_184342017 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_184342017 = '\x01';
  }
  ppGVar2 = &(__this->fields)._theme;
  if ((__this->fields)._theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    ppGVar2 = &TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  if (*ppGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle(*ppGVar2,name,style,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PromoteTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip (UnityEngine_GameObject_o* tooltip, UnityEngine_Canvas_o* parentCanvas, const MethodInfo* method);
// 0x1818d4190

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip
               (UnityEngine_GameObject_o *tooltip,UnityEngine_Canvas_o *parentCanvas,MethodInfo *method)

{
  int32_t value;
  UnityEngine_Canvas_o *__this;
  
  if (Il2CppMethodInitialized_184342018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    Il2CppMethodInitialized_184342018 = '\x01';
  }
  if (tooltip != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (tooltip,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    if (__this != (UnityEngine_Canvas_o *)0x0) {
      UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent
                        (parentCanvas,0x3b6,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ApplyShadow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818d23a0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184342019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_184342019 = '\x01';
  }
  if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
     ((style->fields).shadow.fields.value != false)) {
    if (go != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
      __this_00 = (__this->fields)._theme;
      if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        local_28.r = 0.0;
        local_28.g = 0.0;
        local_28.b = 0.0;
        local_28.a = 0.32;
        pUVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           (&local_18,__this_00,"shadow",(UnityEngine_Color_o *)&local_28,
                            (MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
          local_28.r = (pUVar1->fields).r;
          local_28.g = (pUVar1->fields).g;
          local_28.b = (pUVar1->fields).b;
          local_28.a = (pUVar1->fields).a;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
                    (__this_01,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818d3050

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Canvas_o *pUVar3;
  UnityEngine_Vector2_o screenPosition;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434201a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434201a = '\x01';
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    pUVar3 = (__this->fields)._placementCanvas;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields)._placementCanvas;
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        fVar5 = UVar1.x;
        fVar6 = UVar1.y;
      }
      else {
        fVar6 = (eventData->fields)._position_k__BackingField.fields.y;
        fVar5 = (eventData->fields)._position_k__BackingField.fields.x;
      }
      UVar1 = (__this->fields)._tooltipSize.fields;
      pUVar2 = (__this->fields)._tooltipRect;
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      screenPosition.fields.y = fVar6;
      screenPosition.fields.x = fVar5;
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                (pUVar3,screenPosition,(UnityEngine_Vector2_o)UVar1,pUVar2,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltipToTarget
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d2d60

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  UnityEngine_Canvas_o *pUVar6;
  UnityEngine_Vector2_Fields size;
  bool bVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Rect_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Camera_o *cam;
  UnityEngine_Vector2_o screenPosition;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_18434201b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434201b = '\x01';
  }
  pUVar11 = (__this->fields)._tooltipRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    pUVar8 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar8 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar8->klass == TypeInfo_UnityEngine_RectTransform)) {
      pUVar11 = pUVar8;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pUVar6 = (__this->fields)._placementCanvas;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        if (Il2CppMethodInitialized_18434201c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
          Il2CppMethodInitialized_18434201c = '\x01';
        }
        bVar7 = System_String__Equals_196c550
                          ((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
        if (!bVar7) {
          if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar9 = UnityEngine_RectTransform__get_rect(local_58,pUVar11,(MethodInfo *)0x0);
            fVar1 = (pUVar9->fields).m_XMin;
            fVar2 = (pUVar9->fields).m_YMin;
            fVar3 = (pUVar9->fields).m_Width;
            fVar4 = (pUVar9->fields).m_Height;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            local_68.z = 0.0;
            local_68.y = fVar4 * 0.5 + fVar2;
            local_68.x = fVar3 * 0.5 + fVar1;
            pUVar10 = UnityEngine_Transform__TransformPoint
                                ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Transform_o *)pUVar11,
                                 (UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
            pUVar6 = (__this->fields)._placementCanvas;
            if (pUVar6 != (UnityEngine_Canvas_o *)0x0) {
              uVar5._0_4_ = (pUVar10->fields).x;
              uVar5._4_4_ = (pUVar10->fields).y;
              fVar1 = (pUVar10->fields).z;
              cam = UnityEngine_Canvas__get_worldCamera(pUVar6,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
              }
              local_68._0_8_ = uVar5;
              local_68.z = fVar1;
              screenPosition =
                   UnityEngine_RectTransformUtility__WorldToScreenPoint
                             (cam,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
              pUVar6 = (__this->fields)._placementCanvas;
              size = (__this->fields)._tooltipSize.fields;
              pUVar11 = (__this->fields)._tooltipRect;
              if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
              }
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                        (pUVar6,screenPosition,(UnityEngine_Vector2_o)size,pUVar11,(MethodInfo *)0x0);
              return;
            }
          }
          ThrowNullReferenceException();
        }
        Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceAnchoredTooltip
                  (__this,(__this->fields)._placementCanvas,pUVar11,
                   (UnityEngine_Vector2_o)(__this->fields)._tooltipSize.fields,(__this->fields)._tooltipRect,
                   (MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$TooltipSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize (TMPro_TextMeshProUGUI_o* label, float padding, const MethodInfo* method);
// 0x1818d4f40

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize
          (TMPro_TextMeshProUGUI_o *label,float padding,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  System_String_o *text;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float fVar4;
  float fStackX_c;
  
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    text = (*(label->klass->vtable)._65_get_text.methodPtr)(label,(label->klass->vtable)._65_get_text.method);
    UVar2 = TMPro_TMP_Text__GetPreferredValues_2d12740
                      ((TMPro_TMP_Text_o *)label,text,420.0 - (padding + padding),0.0,(MethodInfo *)0x0);
    fVar3 = padding + padding + UVar2.fields.x;
    fStackX_c = UVar2.fields.y;
    fVar4 = 420.0;
    if (fVar3 <= 420.0) {
      fVar4 = fVar3;
    }
    UVar1.y = padding + padding + fStackX_c;
    UVar1.x = fVar4;
    return (UnityEngine_Vector2_o)UVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$get_IsOverflowLabel
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__get_IsOverflowLabel (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d50b0

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__get_IsOverflowLabel
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434201c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_18434201c = '\x01';
  }
  bVar1 = System_String__Equals_196c550((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$CanShowTooltip
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d2480

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  System_String_o *text;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_18434201d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    Il2CppMethodInitialized_18434201d = '\x01';
  }
  if (Il2CppMethodInitialized_18434201c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_18434201c = '\x01';
  }
  bVar2 = System_String__Equals_196c550((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (!bVar2) {
    return true;
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
  if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
  }
  if (Il2CppMethodInitialized_18434201e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434201e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    pUVar3 = TMPro_TMP_Text__get_rectTransform(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    (*(__this_00->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (__this_00,(System_Type_o *)0x0,(MethodInfo *)0x0);
    text = (*(__this_00->klass->vtable)._65_get_text.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._65_get_text.method);
    UVar4 = TMPro_TMP_Text__GetPreferredValues_2d12570(__this_00,text,(MethodInfo *)0x0);
    pUVar3 = TMPro_TMP_Text__get_rectTransform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = UnityEngine_RectTransform__get_rect(local_38,pUVar3,(MethodInfo *)0x0);
      fVar1 = (pUVar5->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      if (0.0 < fVar1) {
        return fVar1 + 0.5 < UVar4.fields.x;
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$IsOverflowing
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing (TMPro_TMP_Text_o* text, const MethodInfo* method);
// 0x1818d29d0

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing
               (TMPro_TMP_Text_o *text,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  System_String_o *text_00;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_18434201e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434201e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  if (text != (TMPro_TMP_Text_o *)0x0) {
    pUVar3 = TMPro_TMP_Text__get_rectTransform(text,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    (*(text->klass->vtable)._106_ForceMeshUpdate.methodPtr)(text,(System_Type_o *)0x0,(MethodInfo *)0x0);
    text_00 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method);
    UVar4 = TMPro_TMP_Text__GetPreferredValues_2d12570(text,text_00,(MethodInfo *)0x0);
    pUVar3 = TMPro_TMP_Text__get_rectTransform(text,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = UnityEngine_RectTransform__get_rect(local_38,pUVar3,(MethodInfo *)0x0);
      fVar1 = (pUVar5->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      if (0.0 < fVar1) {
        return fVar1 + 0.5 < UVar4.fields.x;
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$IsOverflowing
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing (float preferredWidth, float availableWidth, const MethodInfo* method);
// 0x1818d29b0

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing_18d29b0
               (float preferredWidth,float availableWidth,MethodInfo *method)

{
  if (availableWidth <= 0.0) {
    return false;
  }
  return availableWidth + 0.5 < preferredWidth;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d3bc0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_CanvasGroup_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar8;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *t_00;
  undefined8 uVar9;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434201f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayEnter_b__34_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_18434201f = '\x01';
  }
  pUVar3 = (__this->fields)._tooltipRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar4 = (__this->fields)._group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (bVar6) {
        pDVar8 = (__this->fields)._tween;
        if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar8,false,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields)._tooltipRect;
        if (Il2CppMethodInitialized_18433dbeb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbeb = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1 = (pUVar5->oneVector).fields.x;
        uVar2 = (pUVar5->oneVector).fields.y;
        uVar9._0_4_ = (float)uVar1 * 0.84;
        uVar9._4_4_ = (float)uVar2 * 0.84;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          local_18.z = (pUVar5->oneVector).fields.z * 0.84;
          local_18._0_8_ = uVar9;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)pUVar3,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._group;
          if (pUVar4 != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_alpha(pUVar4,0.0,(MethodInfo *)0x0);
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar3 = (__this->fields)._tooltipRect;
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_18.x = (pUVar5->oneVector).fields.x;
            local_18.y = (pUVar5->oneVector).fields.y;
            local_18.z = (pUVar5->oneVector).fields.z;
            t = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar3,(UnityEngine_Vector3_o *)&local_18,0.14,
                           (MethodInfo *)0x0);
            pDVar8 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetEase_object__7c9b50
                               ((Il2CppObject *)t,0x1b,1.04,
                                (MethodInfo_7C9B50 *)
                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
                               );
            pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar8,(MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor
                      ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)__this,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayEnter_b__34_0,
                       (MethodInfo_E5A750 *)0x0);
            t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,__this_00,(MethodInfo *)0x0);
            pDVar7 = DG_Tweening_TweenSettingsExtensions__Join
                               (pDVar7,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
            pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                               ((Il2CppObject *)pDVar7,true,
                                (MethodInfo_7CA3D0 *)
                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
            (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar7;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar7);
            return;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d3e90

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_CanvasGroup_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar8;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  float from;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184342020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_DestroyTooltip);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayExit_b__35_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184342020 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pDVar8 = (__this->fields)._tween;
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar8,false,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._tooltipRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar4 = (__this->fields)._group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (bVar6) {
        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar3 = (__this->fields)._tooltipRect;
        if (Il2CppMethodInitialized_18433dbeb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbeb = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1 = (pUVar5->oneVector).fields.x;
        uVar2 = (pUVar5->oneVector).fields.y;
        local_28[0].x = (float)uVar1 * 0.9;
        local_28[0].y = (float)uVar2 * 0.9;
        local_28[0].z = (pUVar5->oneVector).fields.z * 0.9;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar3,(UnityEngine_Vector3_o *)local_28,0.1,
                       (MethodInfo *)0x0);
        pDVar8 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase_object_
                           ((Il2CppObject *)t,8,
                            (MethodInfo_7C9BC0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                           );
        pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar8,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._group;
        if (pUVar4 != (UnityEngine_CanvasGroup_o *)0x0) {
          from = UnityEngine_CanvasGroup__get_alpha(pUVar4,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor
                    ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayExit_b__35_0,
                     (MethodInfo_E5A750 *)0x0);
          t_00 = DG_Tweening_DOVirtual__Float(from,0.0,0.08,__this_00,(MethodInfo *)0x0);
          pDVar7 = DG_Tweening_TweenSettingsExtensions__Join
                             (pDVar7,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
          action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
          DG_Tweening_TweenCallback___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_DestroyTooltip,
                     (MethodInfo *)0x0);
          pDVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                             ((Il2CppObject *)pDVar7,action,
                              (MethodInfo_7C92E0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
          pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar7,true,
                              (MethodInfo_7CA3D0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
          (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar7);
          return;
        }
        ThrowNullReferenceException();
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$HideWithin
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__HideWithin (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x1818d2860
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d28dd: nop dword ptr [rax]
// asm:   0x1818d298d: sub ebx, 1
// asm:   0x1818d2990: js 0x1818d299e
// asm:   0x1818d2992: mov rcx, qword ptr [rip + 0x27b3f97]  ; TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger
// asm:   0x1818d2999: jmp 0x1818d28e0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__HideWithin
               (UnityEngine_Transform_o *root,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar3;
  UnityEngine_Transform_o *__this;
  
  if (Il2CppMethodInitialized_184342021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item);
    Il2CppMethodInitialized_184342021 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
  if (pSVar1 != (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      do {
        index = index + -1;
        if (index < 0) {
          return;
        }
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
        if (((pSVar1 == (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) ||
            (pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item),
            pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0)) ||
           (__this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar3,(MethodInfo *)0x0)
           , __this == (UnityEngine_Transform_o *)0x0)) goto label_1818d29a9;
        bVar2 = UnityEngine_Transform__IsChildOf(__this,root,(MethodInfo *)0x0);
      } while (!bVar2);
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
      if ((pSVar1 == (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) ||
         (pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item),
         pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0)) break;
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(pGVar3,(MethodInfo *)0x0);
    }
  }
label_1818d29a9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$DestroyTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d26b0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchTooltipTrigger__o *__this_00;
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342022 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
  if (__this_00 != (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Remove);
    t = (__this->fields)._tween;
    (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,(void *)0x0);
    if (t != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    }
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = (__this->fields)._tooltip;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_1818d2851;
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
      if (bVar2) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar1,(MethodInfo *)0x0);
      }
    }
    (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,(void *)0x0);
    (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipRect,(void *)0x0);
    (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._group,(void *)0x0);
    (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._placementCanvas,(void *)0x0);
    return;
  }
label_1818d2851:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip (UnityEngine_Canvas_o* canvas, UnityEngine_Vector2_o screenPosition, UnityEngine_Vector2_o size, UnityEngine_RectTransform_o* tooltip, const MethodInfo* method);
// 0x1818d3900
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d3aec: movaps xmm6, xmm8
// asm:   0x1818d3b4b: movaps xmm0, xmm3

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
               (UnityEngine_Canvas_o *canvas,UnityEngine_Vector2_o screenPosition,UnityEngine_Vector2_o size,
               UnityEngine_RectTransform_o *tooltip,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  float fVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_RectTransform_o *rect;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_Fields local_res8;
  float fStack_94;
  UnityEngine_Rect_o local_90 [8];
  
  if (Il2CppMethodInitialized_184342023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342023 = '\x01';
  }
  local_res8.x = 0.0;
  local_res8.y = 0.0;
  if (canvas != (UnityEngine_Canvas_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
      rect = pUVar3;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    cam = UnityEngine_Canvas__get_worldCamera(canvas,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,screenPosition,cam,(UnityEngine_Vector2_o *)&local_res8,(MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      pUVar4 = UnityEngine_RectTransform__get_rect(local_90,rect,(MethodInfo *)0x0);
      fVar1 = local_res8.x;
      fVar8 = (pUVar4->fields).m_XMin;
      fVar6 = (pUVar4->fields).m_YMin;
      fVar7 = (pUVar4->fields).m_Width;
      fVar5 = (pUVar4->fields).m_Height;
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      fVar9 = (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->PointerOffset).
              fields.x;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar9 = fVar9 + fVar1;
      fVar7 = (fVar7 + fVar8) - size.fields.x;
      if ((fVar8 <= fVar9) && (fVar8 = fVar7, fVar9 <= fVar7)) {
        fVar8 = fVar9;
      }
      fStack_94 = size.fields.y;
      fVar5 = fVar6 + fVar5;
      fVar6 = fStack_94 + fVar6;
      fVar7 = local_res8.y +
              (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->PointerOffset).
              fields.y;
      if ((fVar6 <= fVar7) && (fVar6 = fVar5, fVar7 <= fVar5)) {
        fVar6 = fVar7;
      }
      if (tooltip != (UnityEngine_RectTransform_o *)0x0) {
        value.fields.y = (local_res8.y - (fVar6 - fStack_94)) / fStack_94;
        value.fields.x = (local_res8.x - fVar8) / size.fields.x;
        UnityEngine_RectTransform__set_pivot(tooltip,value,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchoredPosition
                  (tooltip,(UnityEngine_Vector2_o)local_res8,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceAnchoredTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceAnchoredTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_Canvas_o* canvas, UnityEngine_RectTransform_o* target, UnityEngine_Vector2_o size, UnityEngine_RectTransform_o* tooltip, const MethodInfo* method);
// 0x1818d3340
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d344d: jmp 0x1818d3451
// asm:   0x1818d3548: mov rsi, rbx

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceAnchoredTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,UnityEngine_Canvas_o *canvas,
               UnityEngine_RectTransform_o *target,UnityEngine_Vector2_o size,
               UnityEngine_RectTransform_o *tooltip,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UnityEngine_RectTransform_o *x;
  UnityEngine_Vector2_Fields targetTop;
  UnityEngine_Vector2_Fields targetBottom;
  bool bVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_UI_ScrollRect_o *x_00;
  UnityEngine_Vector3_array *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector2_Fields *pUVar13;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *__this_00;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool local_res10 [8];
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Rect_o local_c8 [11];
  
  if (Il2CppMethodInitialized_184342024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184342024 = '\x01';
  }
  local_res10[0] = false;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (canvas == (UnityEngine_Canvas_o *)0x0) goto label_1818d38e5;
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar10->klass == TypeInfo_UnityEngine_RectTransform)) {
      __this_00 = pUVar10;
    }
  }
  else {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tooltip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  x_00 = UnityEngine_Component__GetComponentInParent_object__664f20
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar10 = __this_00;
  if (bVar9) {
    if (x_00 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818d38e5;
    x = (x_00->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar10 = (x_00->fields).m_Viewport;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
  }
  if (Il2CppMethodInitialized_184342025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184342025 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
label_1818d36be:
    fVar15 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
  }
  else {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) goto label_1818d36be;
    pUVar11 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
    if ((pUVar10 == (UnityEngine_RectTransform_o *)0x0) ||
       (UnityEngine_RectTransform__GetWorldCorners(pUVar10,pUVar11,(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_Vector3_array *)0x0)) goto label_1818d38e5;
    if ((int)pUVar11->max_length == 0) goto label_1818d38eb;
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_1818d38e5;
    local_d8.x = pUVar11->m_Items[0].fields.x;
    local_d8.y = pUVar11->m_Items[0].fields.y;
    local_d8.z = pUVar11->m_Items[0].fields.z;
    pUVar12 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Vector3_o *)local_c8,(UnityEngine_Transform_o *)__this_00,
                         (UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
    fVar15 = (pUVar12->fields).x;
    fVar18 = (pUVar12->fields).y;
    if ((uint)pUVar11->max_length < 3) goto label_1818d38eb;
    local_d8.x = pUVar11->m_Items[2].fields.x;
    local_d8.y = pUVar11->m_Items[2].fields.y;
    local_d8.z = pUVar11->m_Items[2].fields.z;
    pUVar12 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Vector3_o *)local_c8,(UnityEngine_Transform_o *)__this_00,
                         (UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
    fVar16 = (pUVar12->fields).x;
    fVar17 = (pUVar12->fields).y;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar16 = fVar16 - fVar15;
    fVar17 = fVar17 - fVar18;
  }
  pUVar11 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
  if ((target != (UnityEngine_RectTransform_o *)0x0) &&
     (UnityEngine_RectTransform__GetWorldCorners(target,pUVar11,(MethodInfo *)0x0),
     pUVar11 != (UnityEngine_Vector3_array *)0x0)) {
    if (((uint)pUVar11->max_length < 2) || ((uint)pUVar11->max_length < 3)) {
label_1818d38eb:
      ThrowIndexOutOfRangeException();
    }
    uVar1 = pUVar11->m_Items[1].fields.x;
    uVar5 = pUVar11->m_Items[1].fields.y;
    uVar2 = pUVar11->m_Items[2].fields.x;
    uVar6 = pUVar11->m_Items[2].fields.y;
    uVar14._0_4_ = ((float)uVar2 + (float)uVar1) * 0.5;
    uVar14._4_4_ = ((float)uVar6 + (float)uVar5) * 0.5;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      local_d8.z = (pUVar11->m_Items[2].fields.z + pUVar11->m_Items[1].fields.z) * 0.5;
      local_d8._0_8_ = uVar14;
      pUVar13 = (UnityEngine_Vector2_Fields *)
                UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Vector3_o *)local_c8,(UnityEngine_Transform_o *)__this_00,
                           (UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
      if (((int)pUVar11->max_length == 0) || ((uint)pUVar11->max_length < 4)) goto label_1818d38eb;
      uVar3 = pUVar11->m_Items[0].fields.x;
      uVar7 = pUVar11->m_Items[0].fields.y;
      uVar4 = pUVar11->m_Items[3].fields.x;
      uVar8 = pUVar11->m_Items[3].fields.y;
      targetTop = *pUVar13;
      local_d8.x = ((float)uVar4 + (float)uVar3) * 0.5;
      local_d8.y = ((float)uVar8 + (float)uVar7) * 0.5;
      local_d8.z = (pUVar11->m_Items[3].fields.z + pUVar11->m_Items[0].fields.z) * 0.5;
      pUVar13 = (UnityEngine_Vector2_Fields *)
                UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Vector3_o *)local_c8,(UnityEngine_Transform_o *)__this_00,
                           (UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
      if (tooltip != (UnityEngine_RectTransform_o *)0x0) {
        targetBottom = *pUVar13;
        UnityEngine_RectTransform__set_pivot
                  (tooltip,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        local_c8[0].fields.m_XMin = fVar15;
        local_c8[0].fields.m_YMin = fVar18;
        local_c8[0].fields.m_Width = fVar16;
        local_c8[0].fields.m_Height = fVar17;
        value = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__AnchoredPosition
                          (local_c8,targetTop,targetBottom,size,local_res10,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchoredPosition(tooltip,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1818d38e5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$LocalRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__LocalRect (UnityEngine_RectTransform_o* canvas, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x1818d2b70

UnityEngine_Rect_o *
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__LocalRect
          (UnityEngine_Rect_o *__return_storage_ptr__,UnityEngine_RectTransform_o *canvas,
          UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184342025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184342025 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
      if (target != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__GetWorldCorners(target,fourCornersArray,(MethodInfo *)0x0);
        if (fourCornersArray != (UnityEngine_Vector3_array *)0x0) {
          if ((int)fourCornersArray->max_length != 0) {
            if (canvas == (UnityEngine_RectTransform_o *)0x0) goto label_1818d2d4d;
            local_58.x = fourCornersArray->m_Items[0].fields.x;
            local_58.y = fourCornersArray->m_Items[0].fields.y;
            local_58.z = fourCornersArray->m_Items[0].fields.z;
            pUVar6 = UnityEngine_Transform__InverseTransformPoint
                               (local_48,(UnityEngine_Transform_o *)canvas,(UnityEngine_Vector3_o *)&local_58,
                                (MethodInfo *)0x0);
            uVar1 = (pUVar6->fields).x;
            uVar3 = (pUVar6->fields).y;
            if (2 < (uint)fourCornersArray->max_length) {
              local_58.x = fourCornersArray->m_Items[2].fields.x;
              local_58.y = fourCornersArray->m_Items[2].fields.y;
              local_58.z = fourCornersArray->m_Items[2].fields.z;
              pUVar6 = UnityEngine_Transform__InverseTransformPoint
                                 (local_48,(UnityEngine_Transform_o *)canvas,
                                  (UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
              uVar2 = (pUVar6->fields).x;
              uVar4 = (pUVar6->fields).y;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              (__return_storage_ptr__->fields).m_XMin = (float)uVar1;
              (__return_storage_ptr__->fields).m_YMin = (float)uVar3;
              (__return_storage_ptr__->fields).m_Width = (float)uVar2 - (float)uVar1;
              (__return_storage_ptr__->fields).m_Height = (float)uVar4 - (float)uVar3;
              return __return_storage_ptr__;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
label_1818d2d4d:
      ThrowNullReferenceException();
    }
  }
  (__return_storage_ptr__->fields).m_XMin = 0.0;
  (__return_storage_ptr__->fields).m_YMin = 0.0;
  (__return_storage_ptr__->fields).m_Width = 0.0;
  (__return_storage_ptr__->fields).m_Height = 0.0;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$AnchoredPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__AnchoredPosition (UnityEngine_Rect_o bounds, UnityEngine_Vector2_o targetTop, UnityEngine_Vector2_o targetBottom, UnityEngine_Vector2_o size, bool* placedBelow, const MethodInfo* method);
// 0x1818d2180
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818d228d: movaps xmm7, xmm6
// asm:   0x1818d2290: jmp 0x1818d2296
// asm:   0x1818d2292: movaps xmm7, xmm9
// asm:   0x1818d235a: movaps xmm6, xmm8

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__AnchoredPosition
          (UnityEngine_Rect_o *bounds,UnityEngine_Vector2_o targetTop,UnityEngine_Vector2_o targetBottom,
          UnityEngine_Vector2_o size,bool *placedBelow,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStackX_c;
  float fStack_94;
  float fStack_8c;
  
  if (Il2CppMethodInitialized_184342026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342026 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar5 = size.fields.x * 0.5;
  fVar4 = (bounds->fields).m_Width * 0.5;
  fStackX_c = size.fields.y;
  fVar7 = (bounds->fields).m_Height * 0.5;
  fVar3 = targetTop.fields.x;
  fVar6 = fVar3;
  if (0.0 < (bounds->fields).m_Width) {
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar4 = ((bounds->fields).m_Width + (bounds->fields).m_XMin) - fVar5;
    fVar6 = fVar5 + (bounds->fields).m_XMin;
    if ((fVar6 <= fVar3) && (fVar6 = fVar4, fVar3 <= fVar4)) {
      fVar6 = fVar3;
    }
  }
  fStack_94 = targetTop.fields.y;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  bVar2 = (bounds->fields).m_Height + (bounds->fields).m_YMin < fStack_94 + 8.0 + fStackX_c;
  *placedBelow = bVar2;
  if (bVar2) {
    fStack_8c = targetBottom.fields.y;
    fVar5 = (fStack_8c - 8.0) - fStackX_c * 0.5;
  }
  else {
    fVar5 = fStack_94 + 8.0 + fStackX_c * 0.5;
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar4 = fVar5;
  if (0.0 < (bounds->fields).m_Height) {
    fVar4 = fStackX_c * 0.5;
    if (fVar7 <= fStackX_c * 0.5) {
      fVar4 = fVar7;
    }
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar3 = ((bounds->fields).m_Height + (bounds->fields).m_YMin) - fVar4;
    fVar4 = fVar4 + (bounds->fields).m_YMin;
    if ((fVar4 <= fVar5) && (fVar4 = fVar5, fVar3 < fVar5)) {
      fVar4 = fVar3;
    }
  }
  UVar1.y = fVar4;
  UVar1.x = fVar6;
  return (UnityEngine_Vector2_o)UVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d31c0

void
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x1818d31c0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor (const MethodInfo* method);
// 0x1818d5000

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_StaticFields *pGVar1;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *__this;
  
  if (Il2CppMethodInitialized_184342027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchTooltipTrigger);
    Il2CppMethodInitialized_184342027 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields;
  (pGVar1->PointerOffset).fields.x = 24.0;
  (pGVar1->PointerOffset).fields.y = 24.0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchTooltipTrigger);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_ctor);
  TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing,__this);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayEnter>b__34_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__34_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x1818d4fe0

void
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__34_0(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayExit>b__35_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__35_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x1818d4fe0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__35_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


