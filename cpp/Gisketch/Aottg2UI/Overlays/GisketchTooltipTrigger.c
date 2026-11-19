// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchTooltipTrigger.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* text, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* mode, const MethodInfo* method);
// 0x535d720

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *text,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *mode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_07542992 = '\x01';
  }
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  (__this->fields)._theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._theme);
  (__this->fields)._mode = mode;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mode);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x535d7c0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *method_01;
  MethodInfo *method_02;
  
  method_01 = eventData;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip(__this,(MethodInfo *)method_01);
  if (!bVar1) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)method_01);
  if (Il2CppMethodInitialized_07542999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_07542999 = '\x01';
  }
  method_02 = (MethodInfo *)"OverflowLabel";
  bVar1 = System_String__Equals_52ffe30((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget(__this,method_02);
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip(__this,eventData,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x535e710

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x535ea30

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_07542999 = '\x01';
  }
  method_01 = (MethodInfo *)"OverflowLabel";
  bVar1 = System_String__Equals_52ffe30((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget(__this,method_01);
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip(__this,eventData,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x535eaa0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip(__this,(MethodInfo *)eventData);
    if (bVar1) {
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)eventData);
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget(__this,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x535ead0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ShowTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535d900

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_Canvas_o **targetAddress;
  UnityEngine_GameObject_o **targetAddress_00;
  int32_t *piVar1;
  UnityEngine_CanvasGroup_o **targetAddress_01;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_array *pGVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_Fields UVar5;
  Il2CppType *handle;
  bool bVar6;
  int32_t weight;
  TMPro_TMP_Text_o *x_00;
  System_String_o *pSVar7;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Canvas_o *x_01;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  Il2CppObject *pIVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_CanvasGroup_o *pUVar15;
  UnityEngine_UI_Image_o *pUVar16;
  TMPro_TextMeshProUGUI_o *__this_02;
  TMPro_TMP_FontAsset_o *value_00;
  System_String_o **ppSVar17;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar21;
  UnityEngine_Color_o UVar22;
  UnityEngine_Color_o fallback;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_68;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_07542993 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
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
    Il2CppMethodInitialized_07542993 = '\x01';
  }
  local_60 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  local_68 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  if (Il2CppMethodInitialized_07542999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_07542999 = '\x01';
  }
  bVar6 = System_String__Equals_52ffe30((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (bVar6) {
    x_00 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (x_00 == (TMPro_TMP_Text_o *)0x0) goto label_0535e31b;
      pSVar7 = (*(x_00->klass->vtable)._65_get_text.methodPtr)(x_00,(x_00->klass->vtable)._65_get_text.method)
      ;
      (__this->fields)._text = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
    }
  }
  bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  __this_01 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
    x_01 = UnityEngine_Canvas__get_rootCanvas(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      __this_01 = UnityEngine_Canvas__get_rootCanvas(__this_01,(MethodInfo *)0x0);
    }
    targetAddress = &(__this->fields)._placementCanvas;
    (__this->fields)._placementCanvas = __this_01;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar8 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar9 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (pSVar8 != (System_Type_array *)0x0) {
      if ((pSVar9 != (System_Type_o *)0x0) &&
         (pIVar10 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar9,(((pSVar8->obj).klass)->_1).element_class),
         pIVar10 == (Il2CppObject *)0x0)) {
label_0535e325:
        pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
      }
      if ((int)pSVar8->max_length == 0) {
label_0535e320:
        ThrowIndexOutOfRangeException();
      }
      targetAddress_00 = &(__this->fields)._tooltip;
      pSVar8->m_Items[0] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar11,"AoTTG Tooltip",pSVar8,(MethodInfo *)0x0);
      *targetAddress_00 = pUVar11;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      pMVar18 = MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Add;
      __this_00 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
      if (__this_00 != (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar3 = (__this_00->fields)._items;
        if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pGVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pGVar3->m_Items[(int)uVar2] = __this;
            Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                       (MethodInfo_395D230 *)pMVar18->klass->rgctx_data[0xe].method);
          }
          if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(*targetAddress_00,(MethodInfo *)0x0);
            if ((*targetAddress != (UnityEngine_Canvas_o *)0x0) &&
               (pUVar13 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0),
               pUVar12 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent_692d510(pUVar12,pUVar13,false,(MethodInfo *)0x0);
              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                pUVar14 = UnityEngine_GameObject__GetComponent_object_
                                    (*targetAddress_00,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                (__this->fields)._tooltipRect = pUVar14;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipRect);
                pUVar14 = (__this->fields)._tooltipRect;
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_pivot
                            (pUVar14,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip
                            (*targetAddress_00,*targetAddress,method_00);
                  if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar15 = UnityEngine_GameObject__AddComponent_object_
                                        (*targetAddress_00,
                                         (MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
                    targetAddress_01 = &(__this->fields)._group;
                    (__this->fields)._group = pUVar15;
                    Il2CppCodeGenWriteBarrier(targetAddress_01);
                    pUVar15 = (__this->fields)._group;
                    if (pUVar15 != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar15,false,(MethodInfo *)0x0);
                      pUVar15 = *targetAddress_01;
                      if (pUVar15 != (UnityEngine_CanvasGroup_o *)0x0) {
                        UnityEngine_CanvasGroup__set_interactable(pUVar15,false,(MethodInfo *)0x0);
                        if ((*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) &&
                           (pUVar16 = UnityEngine_GameObject__AddComponent_object_
                                                (*targetAddress_00,
                                                 (MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_Image),
                           pUVar16 != (UnityEngine_UI_Image_o *)0x0)) {
                          (*(pUVar16->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (pUVar16,false,(pUVar16->klass->vtable)._25_set_raycastTarget.method);
                          pSVar7 = "tooltip";
                          if (Il2CppMethodInitialized_07542994 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                            Il2CppMethodInitialized_07542994 = '\x01';
                          }
                          pGVar19 = (__this->fields)._theme;
                          if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                            }
                            pGVar19 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default
                            ;
                            if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                            goto label_0535e31b;
                          }
                          pMVar18 = (MethodInfo *)0x0;
                          Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                    (pGVar19,pSVar7,&local_60,(MethodInfo *)0x0);
                          Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
                                    (__this,(__this->fields)._tooltip,local_60,pMVar18);
                          pSVar8 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
                          pSVar9 = System_Type__GetTypeFromHandle
                                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                              (MethodInfo *)0x0);
                          if (pSVar8 != (System_Type_array *)0x0) {
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (pIVar10 = il2cpp_vm_Object_IsInst
                                                    ((Il2CppObject *)pSVar9,
                                                     (((pSVar8->obj).klass)->_1).element_class),
                               pIVar10 == (Il2CppObject *)0x0)) goto label_0535e325;
                            if ((int)pSVar8->max_length == 0) goto label_0535e320;
                            pSVar8->m_Items[0] = pSVar9;
                            Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
                            pUVar11 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                            UnityEngine_GameObject___ctor_691aa60
                                      (pUVar11,"AoTTG Tooltip Label",pSVar8,(MethodInfo *)0x0);
                            if ((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
                               (__this_02 = UnityEngine_GameObject__AddComponent_object_
                                                      (pUVar11,(MethodInfo_353B6A0 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI
                                                      ), __this_02 != (TMPro_TextMeshProUGUI_o *)0x0)) {
                              pUVar12 = TMPro_TMP_Text__get_transform
                                                  ((TMPro_TMP_Text_o *)__this_02,(MethodInfo *)0x0);
                              if ((*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) &&
                                 (pUVar13 = UnityEngine_GameObject__get_transform
                                                      (*targetAddress_00,(MethodInfo *)0x0),
                                 pUVar12 != (UnityEngine_Transform_o *)0x0)) {
                                UnityEngine_Transform__SetParent_692d510
                                          (pUVar12,pUVar13,false,(MethodInfo *)0x0);
                                pUVar14 = UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)__this_02,
                                                     (MethodInfo_34B0830 *)
                                                     MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                    );
                                if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                  Il2CppMethodInitialized_0753ecc8 = '\x01';
                                }
                                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar14,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_07542885 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_07542885 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar14,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).
                                                     fields,(MethodInfo *)0x0);
                                  local_58 = 12.0;
                                  uStack_44 = 0;
                                  uStack_40 = 0;
                                  uStack_3c = 0;
                                  if ((local_60 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                     ((local_60->fields).padding.fields.hasValue != false)) {
                                    local_58 = System_Nullable_float___get_Value
                                                         (&(local_60->fields).padding,
                                                          (MethodInfo_3CDA2D0 *)
                                                          MethodInfo_System_Nullable_float_get_Value);
                                    uStack_44 = extraout_XMM0_Db;
                                    uStack_40 = extraout_XMM0_Dc;
                                    uStack_3c = extraout_XMM0_Dd;
                                  }
                                  UVar4.fields.y = local_58;
                                  UVar4.fields.x = local_58;
                                  fStack_54 = local_58;
                                  fStack_50 = local_58;
                                  fStack_4c = local_58;
                                  local_48 = local_58;
                                  UnityEngine_RectTransform__set_offsetMin(pUVar14,UVar4,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_offsetMax
                                            (pUVar14,(UnityEngine_Vector2_o)
                                                     (CONCAT44(fStack_54,local_58) ^ 0x8000000080000000),
                                             (MethodInfo *)0x0);
                                  pSVar7 = "tooltipText";
                                  if (Il2CppMethodInitialized_07542994 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                    Il2CppMethodInitialized_07542994 = '\x01';
                                  }
                                  pGVar19 = (__this->fields)._theme;
                                  if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).
                                        cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)
                                                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                    }
                                    pGVar19 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields
                                              ->Default;
                                    if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                    goto label_0535e31b;
                                  }
                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                            (pGVar19,pSVar7,&local_68,(MethodInfo *)0x0);
                                  fVar20 = 18.0;
                                  if ((local_68 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                     (0.0 < (local_68->fields).fontSize.fields.value)) {
                                    fVar20 = System_Nullable_float___get_Value
                                                       (&(local_68->fields).fontSize,
                                                        (MethodInfo_3CDA2D0 *)
                                                        MethodInfo_System_Nullable_float_get_Value);
                                  }
                                  TMPro_TMP_Text__set_fontSize
                                            ((TMPro_TMP_Text_o *)__this_02,fVar20,(MethodInfo *)0x0);
                                  if (local_68 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                    weight = 400;
                                    pSVar7 = "text";
                                  }
                                  else {
                                    pSVar7 = (local_68->fields).fontFamily;
                                    weight = System_Nullable_int___GetValueOrDefault_3cd4bf0
                                                       (&(local_68->fields).fontWeight,400,
                                                        (MethodInfo_3CD4BF0 *)
                                                                                                                
                                                       MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28
                                                       );
                                  }
                                  value_00 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                                       (pSVar7,weight,(__this->fields)._text,(MethodInfo *)0x0
                                                       );
                                  TMPro_TMP_Text__set_font
                                            ((TMPro_TMP_Text_o *)__this_02,value_00,(MethodInfo *)0x0);
                                  (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                                            (__this_02,(__this->fields)._text,
                                             (__this_02->klass->vtable)._66_set_text.method);
                                  pGVar19 = (__this->fields)._theme;
                                  if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                    if (local_68 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                      ppSVar17 = &"ink";
                                    }
                                    else {
                                      ppSVar17 = &(local_68->fields).textColor;
                                    }
                                    pSVar7 = (System_String_o *)0x0;
                                    UVar22.fields.b = 1.0;
                                    UVar22.fields.a = 1.0;
                                    UVar22.fields.r = 1.0;
                                    UVar22.fields.g = 1.0;
                                    UVar22 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                       (pGVar19,*ppSVar17,UVar22,(MethodInfo *)0x0);
                                    (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                              (__this_02,UVar22,
                                               (__this_02->klass->vtable)._23_set_color.method);
                                    (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                                              (__this_02,false,
                                               (__this_02->klass->vtable)._25_set_raycastTarget.method);
                                    TMPro_TMP_Text__set_enableWordWrapping
                                              ((TMPro_TMP_Text_o *)__this_02,true,(MethodInfo *)0x0);
                                    pGVar19 = (__this->fields)._theme;
                                    if (local_60 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                      pSVar7 = (local_60->fields).background;
                                    }
                                    if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                      fallback.fields.b = 0.07;
                                      fallback.fields.a = 0.96;
                                      fallback.fields.r = 0.05;
                                      fallback.fields.g = 0.05;
                                      UVar22 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                         (pGVar19,pSVar7,fallback,(MethodInfo *)0x0);
                                      (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                                                (pUVar16,UVar22,(pUVar16->klass->vtable)._23_set_color.method)
                                      ;
                                      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).
                                          cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger)
                                        ;
                                      }
                                      local_48 = local_48 + local_48;
                                      local_58 = 420.0 - local_48;
                                      pSVar7 = (*(__this_02->klass->vtable)._65_get_text.methodPtr)
                                                         (__this_02,
                                                          (__this_02->klass->vtable)._65_get_text.method);
                                      UVar4 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                                                        ((TMPro_TMP_Text_o *)__this_02,pSVar7,local_58,0.0,
                                                         (MethodInfo *)0x0);
                                      fVar21 = local_48 + UVar4.fields.x;
                                      fVar20 = 420.0;
                                      if (fVar21 <= 420.0) {
                                        fVar20 = fVar21;
                                      }
                                      fVar21 = UVar4.fields.y + local_48;
                                      UVar5.y = fVar21;
                                      UVar5.x = fVar20;
                                      (__this->fields)._tooltipSize.fields = UVar5;
                                      pUVar14 = (__this->fields)._tooltipRect;
                                      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                        pMVar18 = (MethodInfo *)0x0;
                                        value.fields.y = fVar21;
                                        value.fields.x = fVar20;
                                        UnityEngine_RectTransform__set_sizeDelta
                                                  (pUVar14,value,(MethodInfo *)0x0);
                                        Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
                                                  (__this,pMVar18);
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
label_0535e31b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Style
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x535eb60

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *name,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  
  if (Il2CppMethodInitialized_07542994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_07542994 = '\x01';
  }
  __this_00 = (__this->fields)._theme;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
    if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle(__this_00,name,style,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PromoteTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip (UnityEngine_GameObject_o* tooltip, UnityEngine_Canvas_o* parentCanvas, const MethodInfo* method);
// 0x535eae0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip
               (UnityEngine_GameObject_o *tooltip,UnityEngine_Canvas_o *parentCanvas,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Canvas_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    Il2CppMethodInitialized_07542995 = '\x01';
  }
  if (tooltip != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (tooltip,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    if (__this != (UnityEngine_Canvas_o *)0x0) {
      method_00 = (MethodInfo *)0x1;
      UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
      iVar1 = Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__EffectiveSortingOrder(parentCanvas,method_00)
      ;
      UnityEngine_Canvas__set_sortingOrder(__this,iVar1 + 0x3b6,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ApplyShadow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x535ebe0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07542996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_07542996 = '\x01';
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     ((style->fields).shadow.fields.value == false)) {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    __this_00 = (__this->fields)._theme;
    if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (__this_00,"shadow",
                         (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
        Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup(__this_01,color,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x535e5e0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPosition;
  UnityEngine_Vector2_Fields size;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Canvas_o *pUVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar4;
  UnityEngine_Vector2_StaticFields *pUVar5;
  
  if (Il2CppMethodInitialized_07542997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542997 = '\x01';
  }
  pUVar1 = (__this->fields)._tooltipRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._placementCanvas;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._placementCanvas;
      pMVar4 = extraout_RDX;
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
          pMVar4 = extraout_RDX_00;
        }
        pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
      }
      else {
        pUVar5 = (UnityEngine_Vector2_StaticFields *)&(eventData->fields)._position_k__BackingField;
      }
      screenPosition = (pUVar5->zeroVector).fields;
      size = (__this->fields)._tooltipSize.fields;
      pUVar1 = (__this->fields)._tooltipRect;
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
        pMVar4 = extraout_RDX_01;
      }
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                (pUVar2,(UnityEngine_Vector2_o)screenPosition,(UnityEngine_Vector2_o)size,pUVar1,pMVar4);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltipToTarget
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535e380

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields size;
  UnityEngine_Canvas_o *pUVar1;
  UnityEngine_Vector2_o screenPosition;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *in_R8;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  if (Il2CppMethodInitialized_07542998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542998 = '\x01';
  }
  pUVar4 = (__this->fields)._tooltipRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
      pUVar4 = pUVar3;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._placementCanvas;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (Il2CppMethodInitialized_07542999 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
          Il2CppMethodInitialized_07542999 = '\x01';
        }
        bVar2 = System_String__Equals_52ffe30
                          ((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
        if (bVar2) {
          Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceAnchoredTooltip
                    (__this,(__this->fields)._placementCanvas,pUVar4,
                     (UnityEngine_Vector2_o)(__this->fields)._tooltipSize.fields,(__this->fields)._tooltipRect
                     ,in_R8);
          return;
        }
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          UVar6.fields.x = UVar5.fields.m_XMin + UVar5.fields.m_Width * 0.5;
          UVar6.fields.y = UVar5.fields.m_YMin + UVar5.fields.m_Height * 0.5;
          UVar6.fields.z = 0.0;
          UVar6 = UnityEngine_Transform__TransformPoint
                            ((UnityEngine_Transform_o *)pUVar4,UVar6,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._placementCanvas;
          if (pUVar1 != (UnityEngine_Canvas_o *)0x0) {
            cam = UnityEngine_Canvas__get_worldCamera(pUVar1,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
            }
            screenPosition = UnityEngine_RectTransformUtility__WorldToScreenPoint(cam,UVar6,(MethodInfo *)0x0)
            ;
            pUVar1 = (__this->fields)._placementCanvas;
            size = (__this->fields)._tooltipSize.fields;
            pUVar4 = (__this->fields)._tooltipRect;
            method_00 = extraout_RDX;
            if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
              method_00 = extraout_RDX_00;
            }
            Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                      (pUVar1,screenPosition,(UnityEngine_Vector2_o)size,pUVar4,method_00);
            return;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$TooltipSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize (TMPro_TextMeshProUGUI_o* label, float padding, const MethodInfo* method);
// 0x535ec90

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize
          (TMPro_TextMeshProUGUI_o *label,float padding,MethodInfo *method)

{
  System_String_o *text;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float fVar4;
  
  if (label == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = padding + padding;
  text = (*(label->klass->vtable)._65_get_text.methodPtr)(label,(label->klass->vtable)._65_get_text.method);
  UVar2 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                    ((TMPro_TMP_Text_o *)label,text,420.0 - fVar1,0.0,(MethodInfo *)0x0);
  fVar3 = fVar1 + UVar2.fields.x;
  fVar4 = 420.0;
  if (fVar3 <= 420.0) {
    fVar4 = fVar3;
  }
  UVar2.fields.y = UVar2.fields.y + fVar1;
  UVar2.fields.x = fVar4;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$get_IsOverflowLabel
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__get_IsOverflowLabel (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535e340

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__get_IsOverflowLabel
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_07542999 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$CanShowTooltip
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535d850

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__CanShowTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *text;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754299a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    Il2CppMethodInitialized_0754299a = '\x01';
  }
  if (Il2CppMethodInitialized_07542999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    Il2CppMethodInitialized_07542999 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30((__this->fields)._mode,"OverflowLabel",4,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = MethodInfo_UnityEngine_Component_GetComponent_TMP_Text;
    text = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      bVar1 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing(text,method_00);
      return bVar1;
    }
    bVar1 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing(text,method_00);
    return bVar1;
  }
  return true;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$IsOverflowing
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing (TMPro_TMP_Text_o* text, const MethodInfo* method);
// 0x535f540

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing
               (TMPro_TMP_Text_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_String_o *text_00;
  byte bVar5;
  UnityEngine_Rect_o UVar6;
  float fStack_38;
  
  if (Il2CppMethodInitialized_0754299b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754299b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = 0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (text == (TMPro_TMP_Text_o *)0x0) {
label_0535f6cd:
      ThrowNullReferenceException();
    }
    pUVar4 = TMPro_TMP_Text__get_rectTransform(text,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = 0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      (*(text->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                (text,false,false,(text->klass->vtable)._106_ForceMeshUpdate.method);
      text_00 = (*(text->klass->vtable)._65_get_text.methodPtr)
                          (text,(text->klass->vtable)._65_get_text.method);
      UVar2 = TMPro_TMP_Text__GetPreferredValues_670eff0(text,text_00,(MethodInfo *)0x0);
      pUVar4 = TMPro_TMP_Text__get_rectTransform(text,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_0535f6cd;
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      fStack_38 = UVar2.fields.x;
      bVar5 = -(UVar6.fields.m_Width + 0.5 < fStack_38) & -(0.0 < UVar6.fields.m_Width);
    }
  }
  return (bool)(bVar5 & 1);
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$IsOverflowing
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing (float preferredWidth, float availableWidth, const MethodInfo* method);
// 0x535f6e0

bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__IsOverflowing_525f6e0
               (float preferredWidth,float availableWidth,MethodInfo *method)

{
  return (bool)(-(availableWidth + 0.5 < preferredWidth) & -(0.0 < availableWidth) & 1);
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535ed20

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
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754299c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayEnter_b__34_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_0754299c = '\x01';
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
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      else {
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      if (bVar6) {
        pDVar8 = (__this->fields)._tween;
        if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar8,false,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields)._tooltipRect;
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          value.fields.z = (pUVar5->oneVector).fields.z * 0.84;
          uVar1 = (pUVar5->oneVector).fields.x;
          uVar2 = (pUVar5->oneVector).fields.y;
          value.fields.x = (float)uVar1 * (float)0x3f570a3d;
          value.fields.y = (float)uVar2 * (float)0x3f570a3d;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar3,value,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._group;
          if (pUVar4 != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_alpha(pUVar4,0.0,(MethodInfo *)0x0);
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar3 = (__this->fields)._tooltipRect;
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
            }
            t = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar3,
                           (UnityEngine_Vector3_o)
                           (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,0.14,
                           (MethodInfo *)0x0);
            pDVar8 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetEase_object__36b0200
                               ((Il2CppObject *)t,0x1b,1.04,
                                (MethodInfo_36B0200 *)
                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
                               );
            pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar8,(MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor
                      (__this_00,(Il2CppObject *)__this,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayEnter_b__34_0,
                       (MethodInfo_4293C90 *)0x0);
            t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,__this_00,(MethodInfo *)0x0);
            pDVar7 = DG_Tweening_TweenSettingsExtensions__Join
                               (pDVar7,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
            pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                               ((Il2CppObject *)pDVar7,true,
                                (MethodInfo_36B08F0 *)
                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
            (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar7;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._tween);
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
// 0x535e720

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
  DG_Tweening_TweenCallback_o *__this_01;
  MethodInfo *method_00;
  float from;
  UnityEngine_Vector3_o endValue;
  
  if (Il2CppMethodInitialized_0754299d == '\0') {
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
    Il2CppMethodInitialized_0754299d = '\x01';
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
  method_00 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar4 = (__this->fields)._group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      else {
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      if (bVar6) {
        if ((((Il2CppClass *)TypeInfo_DG_Tweening_DOTween)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar3 = (__this->fields)._tooltipRect;
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1 = (pUVar5->oneVector).fields.x;
        uVar2 = (pUVar5->oneVector).fields.y;
        endValue.fields.x = (float)uVar1 * (float)0x3f666666;
        endValue.fields.y = (float)uVar2 * (float)0x3f666666;
        endValue.fields.z = (pUVar5->oneVector).fields.z * 0.9;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar3,endValue,0.1,(MethodInfo *)0x0);
        pDVar8 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase_object_
                           ((Il2CppObject *)t,8,
                            (MethodInfo_36B0160 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                           );
        pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar8,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._group;
        if (pUVar4 == (UnityEngine_CanvasGroup_o *)0x0) {
          ThrowNullReferenceException();
        }
        from = UnityEngine_CanvasGroup__get_alpha(pUVar4,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayExit_b__35_0,
                   (MethodInfo_4293C90 *)0x0);
        t_00 = DG_Tweening_DOVirtual__Float(from,0.0,0.08,__this_00,(MethodInfo *)0x0);
        pDVar7 = DG_Tweening_TweenSettingsExtensions__Join
                           (pDVar7,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_DestroyTooltip,
                   (MethodInfo *)0x0);
        pDVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar7,__this_01,
                            (MethodInfo_36AF8A0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
        pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar7,true,
                            (MethodInfo_36B08F0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
        (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._tween);
        return;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$HideWithin
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__HideWithin (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x535f8f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535f926: jmp 0x535fa46
// asm:   0x535f990: lea r15, [rip + 0x1f34f81]  ; MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item
// asm:   0x535f997: jmp 0x535f9a8
// asm:   0x535f9a0: dec ebp
// asm:   0x535f9a2: js 0x535fa3b

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__HideWithin
               (UnityEngine_Transform_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  uint index;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar4;
  UnityEngine_Transform_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754299e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item);
    Il2CppMethodInitialized_0754299e = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_GisketchTooltipTrigger__o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger)->
                     static_fields + 8);
  }
  if (pSVar2 != (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) {
    index = (pSVar2->fields)._size;
    while( true ) {
      do {
        index = index - 1;
        if ((int)index < 0) {
          return;
        }
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
        if (((pSVar2 == (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) ||
            (pGVar4 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item),
            pGVar4 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0)) ||
           (__this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar4,(MethodInfo *)0x0)
           , __this == (UnityEngine_Transform_o *)0x0)) goto label_0535fa46;
        bVar3 = UnityEngine_Transform__IsChildOf(__this,root,(MethodInfo *)0x0);
      } while (!bVar3);
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
      if (pSVar2 == (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) break;
      method_00 = (MethodInfo *)(ulong)index;
      pGVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_get_Item);
      if (pGVar4 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) break;
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(pGVar4,method_00);
    }
  }
label_0535fa46:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$DestroyTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535f710
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535f747: jmp 0x535f8e3

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  uint32_t uVar1;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *__this_00;
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754299f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754299f = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0)
    goto label_0535f796;
label_0535f737:
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor != 0)
    goto label_0535f737;
label_0535f796:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->Showing;
  }
  if (__this_00 == (System_Collections_Generic_List_GisketchTooltipTrigger__o *)0x0) {
label_0535f8e3:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_Remove);
  t = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tween);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._tooltip;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_0535f8e3;
    UnityEngine_GameObject__SetActive(*targetAddress,false,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Object_o *)*targetAddress;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    if (bVar3) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_6921750(pUVar2,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipRect);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._group);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._placementCanvas);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip (UnityEngine_Canvas_o* canvas, UnityEngine_Vector2_o screenPosition, UnityEngine_Vector2_o size, UnityEngine_RectTransform_o* tooltip, const MethodInfo* method);
// 0x535efe0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
               (UnityEngine_Canvas_o *canvas,UnityEngine_Vector2_o screenPosition,UnityEngine_Vector2_o size,
               UnityEngine_RectTransform_o *tooltip,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Camera_o *cam;
  UnityEngine_RectTransform_o *rect;
  uint uVar3;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined8 in_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_Rect_o UVar19;
  UnityEngine_Vector2_Fields UStack_68;
  float fStack_5c;
  UnityEngine_Vector2_o UStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  auStack_28._8_4_ = in_XMM1_Dc;
  auStack_28._0_8_ = size.fields;
  auStack_28._12_4_ = in_XMM1_Dd;
  UStack_58.fields = screenPosition.fields;
  uStack_50 = in_XMM0_Qb;
  if (Il2CppMethodInitialized_075429a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075429a0 = '\x01';
  }
  UStack_68.x = 0.0;
  UStack_68.y = 0.0;
  if (canvas != (UnityEngine_Canvas_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (rect = (UnityEngine_RectTransform_o *)0x0, pUVar2->klass == TypeInfo_UnityEngine_RectTransform)) {
      rect = pUVar2;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    cam = UnityEngine_Canvas__get_worldCamera(canvas,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,UStack_58,cam,(UnityEngine_Vector2_o *)&UStack_68,(MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar19 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar4 = UVar19.fields.m_Width;
      fVar7 = UVar19.fields.m_Height;
      fVar14 = UVar19.fields.m_XMin;
      fVar16 = UVar19.fields.m_YMin;
      uVar17 = extraout_XMM0_Dc;
      uVar18 = extraout_XMM0_Dd;
      fVar10 = UStack_68.x;
      fVar11 = 0.0;
      uVar12 = 0;
      uVar13 = 0;
      if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
        UStack_58.fields.x = UStack_68.x;
        UStack_58.fields.y = 0.0;
        uStack_50 = 0;
        uStack_30 = in_XMM1_Dc;
        auStack_38 = (undefined1  [8])UVar19.fields._8_8_;
        uStack_2c = in_XMM1_Dd;
        uStack_40 = extraout_XMM0_Dc;
        auStack_48 = (undefined1  [8])UVar19.fields._0_8_;
        uStack_3c = extraout_XMM0_Dd;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
        fVar4 = (float)auStack_38._0_4_;
        fVar7 = (float)auStack_38._4_4_;
        in_XMM1_Dc = uStack_30;
        in_XMM1_Dd = uStack_2c;
        fVar14 = (float)auStack_48._0_4_;
        fVar16 = (float)auStack_48._4_4_;
        uVar17 = uStack_40;
        uVar18 = uStack_3c;
        fVar10 = UStack_58.fields.x;
        fVar11 = UStack_58.fields.y;
        uVar12 = (undefined4)uStack_50;
        uVar13 = uStack_50._4_4_;
      }
      fVar6 = (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->PointerOffset).
              fields.x;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        UStack_58.fields.y = fVar11;
        UStack_58.fields.x = fVar10;
        uStack_50 = CONCAT44(uVar13,uVar12);
        auStack_38._4_4_ = fVar7;
        auStack_38._0_4_ = fVar4;
        uStack_30 = in_XMM1_Dc;
        uStack_2c = in_XMM1_Dd;
        auStack_48._4_4_ = fVar16;
        auStack_48._0_4_ = fVar14;
        uStack_40 = uVar17;
        uStack_3c = uVar18;
        fStack_5c = fVar6;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar4 = (float)auStack_38._0_4_;
        fVar7 = (float)auStack_38._4_4_;
        fVar14 = (float)auStack_48._0_4_;
        fVar16 = (float)auStack_48._4_4_;
        fVar6 = fStack_5c;
        fVar10 = UStack_58.fields.x;
        fVar11 = UStack_58.fields.y;
      }
      if (tooltip != (UnityEngine_RectTransform_o *)0x0) {
        fVar10 = fVar10 + fVar6;
        fVar7 = fVar7 + fVar16;
        fVar4 = (fVar4 + fVar14) - auStack_28._0_4_;
        if (fVar10 <= fVar4) {
          fVar4 = fVar10;
        }
        fVar15 = fVar16 + auStack_28._4_4_;
        fVar9 = UStack_68.y;
        fVar8 = fVar9 + (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->
                        PointerOffset).fields.y;
        fVar6 = fVar7;
        if (fVar8 <= fVar7) {
          fVar6 = fVar8;
        }
        uVar3 = -(uint)(fVar15 <= fVar8);
        auVar5._0_4_ = UStack_68.x -
                       (float)(~-(uint)(fVar14 <= fVar10) & (uint)fVar14 |
                              (uint)fVar4 & -(uint)(fVar14 <= fVar10));
        auVar5._4_4_ = fVar9 - ((float)(~uVar3 & (uint)fVar15 | (uint)fVar6 & uVar3) - auStack_28._4_4_);
        auVar5._8_4_ = 0.0 - (float)(~(uint)fVar11 & (uint)fVar16 | (uint)fVar7 & (uint)fVar11);
        auVar5._12_4_ = 0.0 - (float)(~(uint)fVar9 & (uint)fVar16 | (uint)fVar7 & (uint)fVar9);
        auVar5 = divps(auVar5,auStack_28);
        UnityEngine_RectTransform__set_pivot(tooltip,(UnityEngine_Vector2_o)auVar5._0_8_,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchoredPosition
                  (tooltip,(UnityEngine_Vector2_o)UStack_68,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceAnchoredTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceAnchoredTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_Canvas_o* canvas, UnityEngine_RectTransform_o* target, UnityEngine_Vector2_o size, UnityEngine_RectTransform_o* tooltip, const MethodInfo* method);
// 0x535f230

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
  uint uVar9;
  UnityEngine_RectTransform_o *x;
  UnityEngine_Vector2_o value;
  bool bVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_ScrollRect_o *x_00;
  UnityEngine_Vector3_array *fourCornersArray;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX_01;
  UnityEngine_RectTransform_o *canvas_00;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o position;
  UnityEngine_Rect_o UVar14;
  bool bStack_89;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  auStack_48._8_4_ = in_XMM0_Dc;
  auStack_48._0_8_ = size.fields;
  auStack_48._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075429a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_075429a1 = '\x01';
  }
  bStack_89 = false;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  canvas_00 = (UnityEngine_RectTransform_o *)0x0;
  if (bVar10) {
    if (canvas == (UnityEngine_Canvas_o *)0x0) goto label_0535f532;
    pUVar11 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
    canvas_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar11 != (UnityEngine_RectTransform_o *)0x0) &&
       (canvas_00 = (UnityEngine_RectTransform_o *)0x0, pUVar11->klass == TypeInfo_UnityEngine_RectTransform))
    {
      canvas_00 = pUVar11;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)canvas_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)tooltip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  x_00 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar12 = extraout_RDX;
  pUVar11 = canvas_00;
  if (bVar10) {
    if (x_00 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_0535f532;
    x = (x_00->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar12 = extraout_RDX_00;
    if (bVar10) {
      pUVar11 = (x_00->fields).m_Viewport;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    pMVar12 = extraout_RDX_01;
  }
  UVar14 = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__LocalRect(canvas_00,pUVar11,pMVar12);
  auStack_58._8_4_ = extraout_XMM0_Dc;
  auStack_58._0_8_ = UVar14.fields._0_8_;
  auStack_58._12_4_ = extraout_XMM0_Dd;
  auStack_68._8_4_ = in_XMM1_Dc;
  auStack_68._0_8_ = UVar14.fields._8_8_;
  auStack_68._12_4_ = in_XMM1_Dd;
  fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
  if ((target != (UnityEngine_RectTransform_o *)0x0) &&
     (UnityEngine_RectTransform__GetWorldCorners(target,fourCornersArray,(MethodInfo *)0x0),
     fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
    uVar9 = (uint)fourCornersArray->max_length;
    if ((uVar9 < 2) || (uVar9 == 2)) {
label_0535f537:
      ThrowIndexOutOfRangeException();
    }
    if (canvas_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar13.fields.z = (fourCornersArray->m_Items[1].fields.z + fourCornersArray->m_Items[2].fields.z) * 0.5;
      uVar1 = fourCornersArray->m_Items[1].fields.x;
      uVar5 = fourCornersArray->m_Items[1].fields.y;
      uVar2 = fourCornersArray->m_Items[2].fields.x;
      uVar6 = fourCornersArray->m_Items[2].fields.y;
      UVar13.fields.x = ((float)uVar2 + (float)uVar1) * 0.5;
      UVar13.fields.y = ((float)uVar6 + (float)uVar5) * 0.5;
      UVar13 = UnityEngine_Transform__InverseTransformPoint
                         ((UnityEngine_Transform_o *)canvas_00,UVar13,(MethodInfo *)0x0);
      uVar9 = (uint)fourCornersArray->max_length;
      if ((uVar9 == 0) ||
         (auStack_78._8_4_ = extraout_XMM0_Dc_00, auStack_78._0_8_ = UVar13.fields._0_8_,
         auStack_78._12_4_ = extraout_XMM0_Dd_00, uVar9 < 4)) goto label_0535f537;
      uVar3 = fourCornersArray->m_Items[0].fields.x;
      uVar7 = fourCornersArray->m_Items[0].fields.y;
      uVar4 = fourCornersArray->m_Items[3].fields.x;
      uVar8 = fourCornersArray->m_Items[3].fields.y;
      position.fields.x = ((float)uVar4 + (float)uVar3) * 0.5;
      position.fields.y = ((float)uVar8 + (float)uVar7) * 0.5;
      position.fields.z =
           (fourCornersArray->m_Items[0].fields.z + fourCornersArray->m_Items[3].fields.z) * 0.5;
      UVar13 = UnityEngine_Transform__InverseTransformPoint
                         ((UnityEngine_Transform_o *)canvas_00,position,(MethodInfo *)0x0);
      auStack_88._8_4_ = extraout_XMM0_Dc_01;
      auStack_88._0_8_ = UVar13.fields._0_8_;
      auStack_88._12_4_ = extraout_XMM0_Dd_01;
      if (tooltip != (UnityEngine_RectTransform_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UnityEngine_RectTransform__set_pivot
                  (tooltip,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        UVar14.fields.m_Width = (float)auStack_68._0_4_;
        UVar14.fields.m_Height = (float)auStack_68._4_4_;
        UVar14.fields.m_XMin = (float)auStack_58._0_4_;
        UVar14.fields.m_YMin = (float)auStack_58._4_4_;
        value = Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__AnchoredPosition
                          (UVar14,(UnityEngine_Vector2_o)auStack_78._0_8_,
                           (UnityEngine_Vector2_o)auStack_88._0_8_,(UnityEngine_Vector2_o)auStack_48._0_8_,
                           &bStack_89,pMVar12);
        UnityEngine_RectTransform__set_anchoredPosition(tooltip,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0535f532:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$LocalRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__LocalRect (UnityEngine_RectTransform_o* canvas, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x535fa50

UnityEngine_Rect_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__LocalRect
          (UnityEngine_RectTransform_o *canvas,UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_array *fourCornersArray;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075429a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_075429a2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  local_28 = 0.0;
  fStack_24 = 0.0;
  if (bVar1) {
    fVar2 = 0.0;
    fVar3 = 0.0;
  }
  else {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar2 = 0.0;
    fVar3 = 0.0;
    local_28 = 0.0;
    fStack_24 = 0.0;
    if (!bVar1) {
      fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
      if (target != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__GetWorldCorners(target,fourCornersArray,(MethodInfo *)0x0);
        if (fourCornersArray != (UnityEngine_Vector3_array *)0x0) {
          if ((int)fourCornersArray->max_length != 0) {
            if (canvas == (UnityEngine_RectTransform_o *)0x0) goto label_0535fb96;
            UVar5 = UnityEngine_Transform__InverseTransformPoint
                              ((UnityEngine_Transform_o *)canvas,
                               (UnityEngine_Vector3_o)fourCornersArray->m_Items[0].fields,(MethodInfo *)0x0);
            if (2 < (uint)fourCornersArray->max_length) {
              UVar6 = UnityEngine_Transform__InverseTransformPoint
                                ((UnityEngine_Transform_o *)canvas,
                                 (UnityEngine_Vector3_o)fourCornersArray->m_Items[2].fields,(MethodInfo *)0x0)
              ;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              local_28 = UVar5.fields.x;
              fStack_24 = UVar5.fields.y;
              fVar2 = UVar6.fields.x - local_28;
              fVar3 = UVar6.fields.y - fStack_24;
              goto label_0535fb8c;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
label_0535fb96:
      ThrowNullReferenceException();
    }
  }
label_0535fb8c:
  UVar4.fields.m_YMin = fStack_24;
  UVar4.fields.m_XMin = local_28;
  UVar4.fields.m_Height = fVar3;
  UVar4.fields.m_Width = fVar2;
  return (UnityEngine_Rect_o)UVar4.fields;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$AnchoredPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__AnchoredPosition (UnityEngine_Rect_o bounds, UnityEngine_Vector2_o targetTop, UnityEngine_Vector2_o targetBottom, UnityEngine_Vector2_o size, bool* placedBelow, const MethodInfo* method);
// 0x535fba0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535fd46: jmp 0x535fdd9
// asm:   0x535fd71: xorps xmm1, xmm1
// asm:   0x535fd74: ucomiss xmm7, xmm1
// asm:   0x535fe0f: movaps xmm2, xmmword ptr [rsp + 0x30]

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__AnchoredPosition
          (UnityEngine_Rect_o bounds,UnityEngine_Vector2_o targetTop,UnityEngine_Vector2_o targetBottom,
          UnityEngine_Vector2_o size,bool *placedBelow,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  fVar7 = bounds.fields.m_Width;
  fVar5 = bounds.fields.m_Height;
  if (Il2CppMethodInitialized_075429a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075429a3 = '\x01';
  }
  local_88 = size.fields.x;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fStack_44 = bounds.fields.m_YMin;
  fVar6 = targetTop.fields.y;
  if (0.0 < fVar7) {
    fVar4 = local_88 * 0.5;
    if (fVar7 * 0.5 <= local_88 * 0.5) {
      fVar4 = fVar7 * 0.5;
    }
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    local_48 = bounds.fields.m_XMin;
    fVar7 = (local_48 + fVar7) - fVar4;
    fVar8 = targetTop.fields.x;
    if (fVar8 <= fVar7) {
      fVar7 = fVar8;
    }
    uVar2 = -(uint)(local_48 + fVar4 <= fVar8);
    targetTop.fields.y = 0.0;
    targetTop.fields.x = (float)(uVar2 & (uint)fVar7 | ~uVar2 & (uint)(local_48 + fVar4));
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar7 = size.fields.y * 0.5;
  fVar8 = fStack_44 + fVar5;
  fVar6 = fVar6 + 8.0;
  fVar4 = fVar6 + size.fields.y;
  *placedBelow = fVar8 < fVar4;
  if (fVar8 < fVar4) {
    fStack_54 = targetBottom.fields.y;
    fVar6 = (fStack_54 + -8.0) - fVar7;
    uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
  }
  else {
    fVar6 = fVar6 + fVar7;
    uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (0.0 < fVar5) {
    if (fVar5 * 0.5 <= fVar7) {
      fVar7 = fVar5 * 0.5;
    }
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar5 = fVar8 - fVar7;
    if (fVar6 <= fVar8 - fVar7) {
      fVar5 = fVar6;
    }
    uVar2 = -(uint)(fStack_44 + fVar7 <= fVar6);
    fVar6 = (float)(~uVar2 & (uint)(fStack_44 + fVar7) | (uint)fVar5 & uVar2);
  }
  UVar3.x = targetTop.fields.x;
  UVar3.y = fVar6;
  return (UnityEngine_Vector2_o)UVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535fe20

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535fe30

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x535fe40

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor (const MethodInfo* method);
// 0x535fe50

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_StaticFields *pGVar1;
  System_Collections_Generic_List_GisketchTooltipTrigger__o *__this;
  
  if (Il2CppMethodInitialized_075429a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchTooltipTrigger);
    Il2CppMethodInitialized_075429a4 = '\x01';
  }
  (TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields->PointerOffset).fields =
       (UnityEngine_Vector2_Fields)0x41c0000041c00000;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchTooltipTrigger);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchTooltipTrigger_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->static_fields;
  pGVar1->Showing = __this;
  Il2CppCodeGenWriteBarrier(&pGVar1->Showing);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayEnter>b__34_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__34_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x535fef0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__34_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayExit>b__35_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__35_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x535ff10

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__35_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


