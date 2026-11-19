// Type: UI.PanelResizeHandle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/PanelResizeHandle.cs
// Prior real C# source: none
// --------------------------------

// UI.PanelResizeHandle$$Awake
// il2cpp: void UI_PanelResizeHandle__Awake (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x5daa9c0

void UI_PanelResizeHandle__Awake(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  
  if (Il2CppMethodInitialized_075480dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_075480dd = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    }
    if (__this != (UI_PanelResizeHandle_o *)0x0) {
      (__this->fields)._panelRT = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panelRT);
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      targetAddress = &(__this->fields)._image;
      (__this->fields)._image = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar4 = (__this->fields)._image;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar4 = *targetAddress;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,(UnityEngine_Color_o)
                          (TypeInfo_UI_PanelResizeHandle->static_fields->IdleColor).fields,
                   (pUVar4->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$OnPointerEnter
// il2cpp: void UI_PanelResizeHandle__OnPointerEnter (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5daab10

void UI_PanelResizeHandle__OnPointerEnter
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075480de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_075480de = '\x01';
  }
  if ((__this->fields)._isDragging == false) {
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o)(TypeInfo_UI_PanelResizeHandle->static_fields->HoverColor).fields
                 ,(pUVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
  return;
}


// UI.PanelResizeHandle$$OnPointerExit
// il2cpp: void UI_PanelResizeHandle__OnPointerExit (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5daabd0

void UI_PanelResizeHandle__OnPointerExit
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075480df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_075480df = '\x01';
  }
  if ((__this->fields)._isDragging == false) {
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o)(TypeInfo_UI_PanelResizeHandle->static_fields->IdleColor).fields,
                 (pUVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
  return;
}


// UI.PanelResizeHandle$$OnPointerDown
// il2cpp: void UI_PanelResizeHandle__OnPointerDown (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5daac90

void UI_PanelResizeHandle__OnPointerDown
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  
  if (Il2CppMethodInitialized_075480e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_075480e0 = '\x01';
  }
  (__this->fields)._isDragging = true;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_05daadbe:
    ThrowNullReferenceException();
  }
  (__this->fields)._dragStartScreenX = (eventData->fields)._position_k__BackingField.fields.x;
  pUVar1 = (__this->fields)._panelRT;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  if (bVar3) {
    pUVar1 = (__this->fields)._panelRT;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_05daadbe;
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.x;
  }
  (__this->fields)._panelStartWidth = fVar4;
  pUVar2 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._image;
    if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
    }
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05daadbe;
    method_00 = (pUVar2->klass->vtable)._23_set_color.method;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,(UnityEngine_Color_o)(TypeInfo_UI_PanelResizeHandle->static_fields->DragColor).fields,
               method_00);
  }
  UI_PanelResizeHandle__BuildDragVisuals(__this,method_00);
  UI_PanelResizeHandle__UpdateDragVisuals
            (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,method_00);
  return;
}


// UI.PanelResizeHandle$$OnDrag
// il2cpp: void UI_PanelResizeHandle__OnDrag (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5dab720

void UI_PanelResizeHandle__OnDrag
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if ((__this->fields)._isDragging == false) {
    return;
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_PanelResizeHandle__UpdateDragVisuals
            (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
             (MethodInfo *)eventData);
  return;
}


// UI.PanelResizeHandle$$OnPointerUp
// il2cpp: void UI_PanelResizeHandle__OnPointerUp (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5dab750

void UI_PanelResizeHandle__OnPointerUp
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  System_Action_float__o *pSVar2;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_075480e1 = '\x01';
  }
  if ((__this->fields)._isDragging != false) {
    (__this->fields)._isDragging = false;
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05dab85a;
      method_00 = (pUVar1->klass->vtable)._23_set_color.method;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o)(TypeInfo_UI_PanelResizeHandle->static_fields->IdleColor).fields,
                 method_00);
    }
    UI_PanelResizeHandle__DestroyDragVisuals(__this,method_00);
    pSVar2 = (__this->fields).OnResize;
    if (pSVar2 != (System_Action_float__o *)0x0) {
      if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        UI_PanelResizeHandle__ComputeNewWidth
                  (__this,(eventData->fields)._position_k__BackingField.fields.x,method_00);
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
        return;
      }
label_05dab85a:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.PanelResizeHandle$$ComputeNewWidth
// il2cpp: float UI_PanelResizeHandle__ComputeNewWidth (UI_PanelResizeHandle_o* __this, float screenX, const MethodInfo* method);
// 0x5dab960

float UI_PanelResizeHandle__ComputeNewWidth(UI_PanelResizeHandle_o *__this,float screenX,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_075480e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075480e2 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 1.0;
  if (bVar1) {
    if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    fVar4 = 1.0;
    if (0.0 < fVar3) {
      fVar4 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    }
  }
  fVar4 = (screenX - (__this->fields)._dragStartScreenX) / fVar4;
  if ((__this->fields).IsRightEdge == false) {
    fVar4 = -fVar4;
  }
  fVar4 = fVar4 + (__this->fields)._panelStartWidth;
  fVar3 = (__this->fields).MinWidth;
  fVar5 = (__this->fields).MaxWidth;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  uVar2 = -(uint)(fVar3 <= fVar4);
  return (float)(~uVar2 & (uint)fVar3 | (uint)fVar5 & uVar2);
}


// UI.PanelResizeHandle$$BuildDragVisuals
// il2cpp: void UI_PanelResizeHandle__BuildDragVisuals (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x5daadd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dab4e0: jmp 0x5dab46f

void UI_PanelResizeHandle__BuildDragVisuals(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_Vector2_Fields UVar3;
  uint32_t uVar4;
  UI_BaseMenu_o *__this_00;
  bool bVar5;
  UnityEngine_Canvas_o *x;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_UI_Image_o *pUVar10;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_Font_o *value;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075480e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x97\x84  \xe2\x96\xba");
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeDragGhost");
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeDragLine");
    Il2CppMethodInitialized_075480e3 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (x != (UnityEngine_Canvas_o *)0x0) {
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar7,"ResizeDragLine",(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._lineGO;
    (__this->fields)._lineGO = pUVar7;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    pUVar7 = (__this->fields)._lineGO;
    if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent_692d510(pUVar8,pUVar6,false,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__AddComponent_object_
                           (*ppUVar1,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
        ppUVar2 = &(__this->fields)._lineRT;
        (__this->fields)._lineRT = pUVar9;
        Il2CppCodeGenWriteBarrier(ppUVar2);
        pUVar9 = (__this->fields)._lineRT;
        if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(pUVar9,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (*ppUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pUVar9 = *ppUVar2;
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar9,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMax
                          (*ppUVar2,(UnityEngine_Vector2_o)0x40000000,(MethodInfo *)0x0);
                if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                      (*ppUVar1,(MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                  if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
                  }
                  if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                              (pUVar10,(UnityEngine_Color_o)
                                       (TypeInfo_UI_PanelResizeHandle->static_fields->LineColor).fields,
                               (pUVar10->klass->vtable)._23_set_color.method);
                    (*(pUVar10->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar10,false,(pUVar10->klass->vtable)._25_set_raycastTarget.method);
                    UI_PanelResizeHandle__BoostSortOrder((__this->fields)._lineGO,31999,method_00);
                    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                    UnityEngine_GameObject___ctor(pUVar7,"ResizeDragGhost",(MethodInfo *)0x0);
                    ppUVar1 = &(__this->fields)._ghostGO;
                    (__this->fields)._ghostGO = pUVar7;
                    Il2CppCodeGenWriteBarrier(ppUVar1);
                    pUVar7 = (__this->fields)._ghostGO;
                    if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
                       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__SetParent_692d510(pUVar8,pUVar6,false,(MethodInfo *)0x0);
                      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar9 = UnityEngine_GameObject__AddComponent_object_
                                           (*ppUVar1,(MethodInfo_353B6A0 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                           );
                        ppUVar2 = &(__this->fields)._ghostRT;
                        (__this->fields)._ghostRT = pUVar9;
                        Il2CppCodeGenWriteBarrier(ppUVar2);
                        pUVar9 = (__this->fields)._ghostRT;
                        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                          Il2CppMethodInitialized_0753ecc8 = '\x01';
                        }
                        if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                          UVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
                          UnityEngine_RectTransform__set_anchorMax
                                    (pUVar9,(UnityEngine_Vector2_o)UVar3,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMin
                                    (pUVar9,(UnityEngine_Vector2_o)UVar3,(MethodInfo *)0x0);
                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_pivot
                                      (*ppUVar2,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                            if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_sizeDelta
                                        (*ppUVar2,(UnityEngine_Vector2_o)0x41d0000042600000,(MethodInfo *)0x0)
                              ;
                              if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                 (pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                                      (*ppUVar1,(MethodInfo_353B6A0 *)
                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image),
                                 pUVar10 != (UnityEngine_UI_Image_o *)0x0)) {
                                (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar10,(UnityEngine_Color_o)
                                                   (TypeInfo_UI_PanelResizeHandle->static_fields->GhostBg).
                                                   fields,(pUVar10->klass->vtable)._23_set_color.method);
                                (*(pUVar10->klass->vtable)._25_set_raycastTarget.methodPtr)
                                          (pUVar10,false,(pUVar10->klass->vtable)._25_set_raycastTarget.method
                                          );
                                pUVar7 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                UnityEngine_GameObject___ctor(pUVar7,"Label",(MethodInfo *)0x0);
                                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                                  if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                     (pUVar8 = UnityEngine_GameObject__get_transform
                                                         (*ppUVar1,(MethodInfo *)0x0),
                                     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                                    UnityEngine_Transform__SetParent_692d510
                                              (pUVar6,pUVar8,false,(MethodInfo *)0x0);
                                    pUVar9 = UnityEngine_GameObject__AddComponent_object_
                                                       (pUVar7,(MethodInfo_353B6A0 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                                       );
                                    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector2);
                                      Il2CppMethodInitialized_0753ecc8 = '\x01';
                                    }
                                    if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (pUVar9,(UnityEngine_Vector2_o)
                                                        (TypeInfo_UnityEngine_Vector2->static_fields->
                                                        zeroVector).fields,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_07542885 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_07542885 = '\x01';
                                      }
                                      UnityEngine_RectTransform__set_anchorMax
                                                (pUVar9,(UnityEngine_Vector2_o)
                                                        (TypeInfo_UnityEngine_Vector2->static_fields->
                                                        oneVector).fields,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_0753ecc8 = '\x01';
                                      }
                                      UVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                                      ;
                                      UnityEngine_RectTransform__set_offsetMax
                                                (pUVar9,(UnityEngine_Vector2_o)UVar3,(MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_offsetMin
                                                (pUVar9,(UnityEngine_Vector2_o)UVar3,(MethodInfo *)0x0);
                                      __this_01 = UnityEngine_GameObject__AddComponent_object_
                                                            (pUVar7,(MethodInfo_353B6A0 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Text);
                                      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
                                        (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                                                  (__this_01,"\xe2\x97\x84  \xe2\x96\xba",
                                                   (__this_01->klass->vtable)._75_set_text.method);
                                        UnityEngine_UI_Text__set_fontSize(__this_01,0x10,(MethodInfo *)0x0);
                                        UnityEngine_UI_Text__set_fontStyle(__this_01,1,(MethodInfo *)0x0);
                                        UnityEngine_UI_Text__set_alignment(__this_01,4,(MethodInfo *)0x0);
                                        (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                                                  (__this_01,
                                                   (UnityEngine_Color_o)
                                                   (TypeInfo_UI_PanelResizeHandle->static_fields->GhostText).
                                                   fields,(__this_01->klass->vtable)._23_set_color.method);
                                        (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                                                  (__this_01,false,
                                                   (__this_01->klass->vtable)._25_set_raycastTarget.method);
                                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UI_UIManager);
                                        }
                                        __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                        if (__this_00 == (UI_BaseMenu_o *)0x0) {
                                          __this_02 = (UnityEngine_UI_Text_o *)0x0;
                                          uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor
                                          ;
                                        }
                                        else {
                                          __this_02 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                                                                ((UnityEngine_Component_o *)__this_00,
                                                                 (MethodInfo_34B09D0 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponentInChildren_Text
                                                       );
                                          uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor
                                          ;
                                        }
                                        if (uVar4 == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                        }
                                        bVar5 = UnityEngine_Object__op_Inequality
                                                          ((UnityEngine_Object_o *)__this_02,
                                                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                        method_01 = extraout_RDX;
                                        if (bVar5) {
                                          if (__this_02 == (UnityEngine_UI_Text_o *)0x0) goto label_05dab4e2;
                                          value = UnityEngine_UI_Text__get_font(__this_02,(MethodInfo *)0x0);
                                          UnityEngine_UI_Text__set_font(__this_01,value,(MethodInfo *)0x0);
                                          method_01 = extraout_RDX_00;
                                        }
                                        pUVar7 = *ppUVar1;
                                        if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor ==
                                            0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
                                          method_01 = extraout_RDX_01;
                                        }
                                        UI_PanelResizeHandle__BoostSortOrder(pUVar7,32000,method_01);
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
label_05dab4e2:
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$UpdateDragVisuals
// il2cpp: void UI_PanelResizeHandle__UpdateDragVisuals (UI_PanelResizeHandle_o* __this, UnityEngine_Vector2_o screenPos, const MethodInfo* method);
// 0x5dab4f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dab622: jmp 0x5dab642

void UI_PanelResizeHandle__UpdateDragVisuals
               (UI_PanelResizeHandle_o *__this,UnityEngine_Vector2_o screenPos,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool bVar2;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075480e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075480e4 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    fVar4 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    if (fVar4 <= 0.0) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    }
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fStack_28 = screenPos.fields.x;
      fVar5 = UI_PanelResizeHandle__ComputeNewWidth(__this,fStack_28,method_00);
      if ((__this->fields).IsRightEdge == false) {
        fStack_38 = UVar6.fields.m_Width;
        fVar5 = fStack_38 - fVar5;
        pUVar3 = (__this->fields)._lineRT;
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        pUVar3 = (__this->fields)._lineRT;
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar3 = (__this->fields)._lineRT;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05dab715;
        value.fields.y = 0.0;
        value.fields.x = fVar5 + -1.0;
        UnityEngine_RectTransform__set_offsetMin(pUVar3,value,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._lineRT;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05dab715;
        value_00.fields.y = 0.0;
        value_00.fields.x = fVar5 + 1.0;
        UnityEngine_RectTransform__set_offsetMax(pUVar3,value_00,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields)._ghostRT;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pUVar3 = (__this->fields)._ghostRT;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        fStack_24 = screenPos.fields.y;
        value_01.fields.y = fStack_24 / fVar4 + 18.0;
        value_01.fields.x = fStack_28 / fVar4;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05dab715:
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$DestroyDragVisuals
// il2cpp: void UI_PanelResizeHandle__DestroyDragVisuals (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x5dab860

void UI_PanelResizeHandle__DestroyDragVisuals(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o **ppUVar3;
  
  if (Il2CppMethodInitialized_075480e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075480e5 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._lineGO;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppUVar3 = &(__this->fields)._lineGO;
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(ppUVar3);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._ghostGO;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppUVar3 = &(__this->fields)._ghostGO;
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(ppUVar3);
    return;
  }
  return;
}


// UI.PanelResizeHandle$$BoostSortOrder
// il2cpp: void UI_PanelResizeHandle__BoostSortOrder (UnityEngine_GameObject_o* go, int32_t order, const MethodInfo* method);
// 0x5daba50

void UI_PanelResizeHandle__BoostSortOrder(UnityEngine_GameObject_o *go,int32_t order,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this;
  UnityEngine_UI_GraphicRaycaster_o *__this_00;
  
  if (Il2CppMethodInitialized_075480e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_075480e6 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    if (__this != (UnityEngine_Canvas_o *)0x0) {
      UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this,order,(MethodInfo *)0x0);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
      if (__this_00 != (UnityEngine_UI_GraphicRaycaster_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$.ctor
// il2cpp: void UI_PanelResizeHandle___ctor (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x5dabaf0

void UI_PanelResizeHandle___ctor(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  (__this->fields).MinWidth = 150.0;
  (__this->fields).MaxWidth = 700.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PanelResizeHandle$$.cctor
// il2cpp: void UI_PanelResizeHandle___cctor (const MethodInfo* method);
// 0x5dabb10

void UI_PanelResizeHandle___cctor(MethodInfo *method)

{
  UI_PanelResizeHandle_StaticFields *pUVar1;
  UI_PanelResizeHandle_c *pUVar2;
  
  if (Il2CppMethodInitialized_075480e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_075480e7 = '\x01';
  }
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->IdleColor).fields.r = 1.0;
  (pUVar1->IdleColor).fields.g = 1.0;
  (pUVar1->IdleColor).fields.b = 1.0;
  pUVar2 = TypeInfo_UI_PanelResizeHandle;
  (pUVar1->IdleColor).fields.a = 0.04;
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->HoverColor).fields.r = 1.0;
  (pUVar1->HoverColor).fields.g = 1.0;
  (pUVar1->HoverColor).fields.b = 1.0;
  (pUVar1->HoverColor).fields.a = 0.18;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->DragColor).fields.r = 1.0;
  (pUVar1->DragColor).fields.g = 1.0;
  (pUVar1->DragColor).fields.b = 1.0;
  (pUVar1->DragColor).fields.a = 0.28;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->LineColor).fields.r = 1.0;
  (pUVar1->LineColor).fields.g = 0.78;
  (pUVar1->LineColor).fields.b = 0.22;
  (pUVar1->LineColor).fields.a = 0.9;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->GhostBg).fields.r = 0.12;
  (pUVar1->GhostBg).fields.g = 0.12;
  (pUVar1->GhostBg).fields.b = 0.12;
  (pUVar1->GhostBg).fields.a = 0.8;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->GhostText).fields.r = 1.0;
  (pUVar1->GhostText).fields.g = 0.78;
  (pUVar1->GhostText).fields.b = 0.22;
  (pUVar1->GhostText).fields.a = 1.0;
  return;
}


