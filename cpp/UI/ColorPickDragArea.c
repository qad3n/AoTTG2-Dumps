// Type: UI.ColorPickDragArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ColorPickDragArea.cs
// Prior real C# source: none
// --------------------------------

// UI.ColorPickDragArea$$Setup
// il2cpp: void UI_ColorPickDragArea__Setup (UI_ColorPickDragArea_o* __this, int32_t mode, System_Action_float__float__o* onChanged, const MethodInfo* method);
// 0x4348870

void UI_ColorPickDragArea__Setup
               (UI_ColorPickDragArea_o *__this,int32_t mode,System_Action_float__float__o *onChanged,
               MethodInfo *method)

{
  (__this->fields)._mode = mode;
  (__this->fields)._onChanged = onChanged;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onChanged,onChanged);
  return;
}


// UI.ColorPickDragArea$$OnPointerDown
// il2cpp: void UI_ColorPickDragArea__OnPointerDown (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x434aca0

void UI_ColorPickDragArea__OnPointerDown
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  int iVar1;
  intptr_t iVar2;
  intptr_t iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UI_ColorPickDragArea_o *pUVar7;
  System_Action_float__float__o *pSVar8;
  UI_ColorPickDragArea_o *unaff_RBX;
  undefined1 *puVar9;
  UnityEngine_EventSystems_PointerEventData_o *pUVar10;
  UI_ColorPickDragArea_o *__this_00;
  UI_ColorPickDragArea_o *unaff_R14;
  UnityEngine_EventSystems_PointerEventData_o *unaff_R15;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar12;
  float fVar13;
  UnityEngine_Rect_o UVar14;
  
  puVar9 = (undefined1 *)register0x00000020;
  do {
    __this_00 = __this;
    *(UnityEngine_EventSystems_PointerEventData_o **)(puVar9 + -8) = unaff_R15;
    *(UI_ColorPickDragArea_o **)(puVar9 + -0x10) = unaff_R14;
    *(UI_ColorPickDragArea_o **)(puVar9 + -0x18) = unaff_RBX;
    if (g_data_057ae0fd == '\0') {
      *(undefined8 *)(puVar9 + -0x50) = 0x434acd4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar9 + -0x50) = 0x434ace0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      *(undefined8 *)(puVar9 + -0x50) = 0x434acec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057ae0fd = '\x01';
    }
    *(undefined8 *)(puVar9 + -0x40) = 0;
    *(undefined8 *)(puVar9 + -0x50) = 0x434ad08;
    pUVar7 = (UI_ColorPickDragArea_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    unaff_RBX = (UI_ColorPickDragArea_o *)0x0;
    if ((pUVar7 != (UI_ColorPickDragArea_o *)0x0) &&
       (unaff_RBX = (UI_ColorPickDragArea_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
      unaff_RBX = pUVar7;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar9 + -0x50) = 0x434ad38;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    *(undefined8 *)(puVar9 + -0x50) = 0x434ad44;
    __this = unaff_RBX;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if ((__this_00->fields)._onChanged == (System_Action_float__float__o *)0x0) {
      return;
    }
    unaff_R15 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      *(UnityEngine_Vector2_Fields *)(puVar9 + -0x38) = (eventData->fields)._position_k__BackingField.fields;
      *(undefined8 *)(puVar9 + -0x30) = 0;
      *(undefined8 *)(puVar9 + -0x50) = 0x434ad78;
      unaff_R15 = (UnityEngine_EventSystems_PointerEventData_o *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        *(undefined8 *)(puVar9 + -0x50) = 0x434ad93;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar9 + -0x50) = 0x434adaa;
      pUVar10 = unaff_R15;
      __this = unaff_RBX;
      bVar6 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)unaff_RBX,
                         (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar9 + -0x38),
                         (UnityEngine_Camera_o *)unaff_R15,(UnityEngine_Vector2_o *)(puVar9 + -0x40),
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (unaff_RBX != (UI_ColorPickDragArea_o *)0x0) {
        *(undefined8 *)(puVar9 + -0x50) = 0x434adc5;
        UVar14 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_8_ = UVar14.fields._0_8_;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar9 + -0x38) = auVar5;
        *(undefined8 *)(puVar9 + -0x50) = 0x434add4;
        UVar14 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar11 = *(float *)(puVar9 + -0x38);
        fVar12 = UVar14.fields.m_Width + UVar14.fields.m_XMin;
        if ((fVar11 != fVar12) || (fVar13 = 0.0, NAN(fVar11) || NAN(fVar12))) {
          fVar11 = (*(float *)(puVar9 + -0x40) - fVar11) / (fVar12 - fVar11);
          fVar13 = 0.0;
          if ((0.0 <= fVar11) && (fVar13 = 1.0, fVar11 <= 1.0)) {
            fVar13 = fVar11;
          }
        }
        *(float *)(puVar9 + -0x38) = fVar13;
        *(undefined8 *)(puVar9 + -0x50) = 0x434ae1d;
        UVar14 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        *(float *)(puVar9 + -0x28) = UVar14.fields.m_YMin;
        *(float *)(puVar9 + -0x24) = UVar14.fields.m_YMin;
        *(undefined4 *)(puVar9 + -0x20) = extraout_XMM0_Dc_00;
        *(undefined4 *)(puVar9 + -0x1c) = extraout_XMM0_Dd_00;
        pUVar10 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
        *(undefined8 *)(puVar9 + -0x50) = 0x434ae30;
        __this = unaff_RBX;
        UVar14 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar11 = *(float *)(puVar9 + -0x28);
        fVar12 = UVar14.fields.m_YMin + UVar14.fields.m_Height;
        if ((fVar11 != fVar12) || (fVar13 = 0.0, NAN(fVar11) || NAN(fVar12))) {
          fVar11 = (*(float *)(puVar9 + -0x3c) - fVar11) / (fVar12 - fVar11);
          fVar13 = 0.0;
          if ((0.0 <= fVar11) && (fVar13 = 1.0, fVar11 <= 1.0)) {
            fVar13 = fVar11;
          }
        }
        iVar1 = (__this_00->fields)._mode;
        fVar12 = 0.0;
        fVar11 = 0.0;
        if ((iVar1 == 1) || (fVar11 = fVar13, iVar1 != 2)) {
          pSVar8 = (__this_00->fields)._onChanged;
          fVar13 = *(float *)(puVar9 + -0x38);
          if (0.0 <= *(float *)(puVar9 + -0x38)) goto label_0434aea3;
        }
        else {
          pSVar8 = (__this_00->fields)._onChanged;
          fVar13 = 0.0;
label_0434aea3:
          fVar12 = fVar13;
        }
        if (pSVar8 != (System_Action_float__float__o *)0x0) {
          fVar13 = 0.0;
          if (0.0 <= fVar11) {
            fVar13 = fVar11;
          }
          iVar2 = (pSVar8->fields).method;
          iVar3 = (pSVar8->fields).method_code;
          pcVar4 = (code *)(pSVar8->fields).invoke_impl;
          *(undefined8 *)(puVar9 + -0x50) = 0x434aebd;
          (*pcVar4)(fVar12,fVar13,iVar3,iVar2);
          return;
        }
      }
    }
    *(undefined8 *)(puVar9 + -0x50) = 0x434aecc;
    il2cpp_runtime_helper_022b2c90();
    puVar9 = puVar9 + -0x48;
    eventData = pUVar10;
    unaff_R14 = __this_00;
  } while( true );
}


// UI.ColorPickDragArea$$OnDrag
// il2cpp: void UI_ColorPickDragArea__OnDrag (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x434aed0

void UI_ColorPickDragArea__OnDrag
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  int iVar1;
  intptr_t iVar2;
  intptr_t iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UI_ColorPickDragArea_o *pUVar7;
  System_Action_float__float__o *pSVar8;
  UI_ColorPickDragArea_o *unaff_RBX;
  UnityEngine_EventSystems_PointerEventData_o *pUVar9;
  UI_ColorPickDragArea_o *__this_00;
  UI_ColorPickDragArea_o *unaff_R14;
  UnityEngine_EventSystems_PointerEventData_o *unaff_R15;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  
  do {
    __this_00 = __this;
    *(UnityEngine_EventSystems_PointerEventData_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(UI_ColorPickDragArea_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(UI_ColorPickDragArea_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057ae0fd == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434acd4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ace0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434acec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057ae0fd = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad08;
    pUVar7 = (UI_ColorPickDragArea_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    unaff_RBX = (UI_ColorPickDragArea_o *)0x0;
    if ((pUVar7 != (UI_ColorPickDragArea_o *)0x0) &&
       (unaff_RBX = (UI_ColorPickDragArea_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
      unaff_RBX = pUVar7;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad38;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad44;
    __this = unaff_RBX;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if ((__this_00->fields)._onChanged == (System_Action_float__float__o *)0x0) {
      return;
    }
    unaff_R15 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38) =
           (eventData->fields)._position_k__BackingField.fields;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad78;
      unaff_R15 = (UnityEngine_EventSystems_PointerEventData_o *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad93;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434adaa;
      pUVar9 = unaff_R15;
      __this = unaff_RBX;
      bVar6 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)unaff_RBX,
                         (UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38),
                         (UnityEngine_Camera_o *)unaff_R15,
                         (UnityEngine_Vector2_o *)((long)register0x00000020 + -0x40),(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (unaff_RBX != (UI_ColorPickDragArea_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434adc5;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_8_ = UVar13.fields._0_8_;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434add4;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar10 = *(float *)((long)register0x00000020 + -0x38);
        fVar11 = UVar13.fields.m_Width + UVar13.fields.m_XMin;
        if ((fVar10 != fVar11) || (fVar12 = 0.0, NAN(fVar10) || NAN(fVar11))) {
          fVar10 = (*(float *)((long)register0x00000020 + -0x40) - fVar10) / (fVar11 - fVar10);
          fVar12 = 0.0;
          if ((0.0 <= fVar10) && (fVar12 = 1.0, fVar10 <= 1.0)) {
            fVar12 = fVar10;
          }
        }
        *(float *)((long)register0x00000020 + -0x38) = fVar12;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ae1d;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        *(float *)((long)register0x00000020 + -0x28) = UVar13.fields.m_YMin;
        *(float *)((long)register0x00000020 + -0x24) = UVar13.fields.m_YMin;
        *(undefined4 *)((long)register0x00000020 + -0x20) = extraout_XMM0_Dc_00;
        *(undefined4 *)((long)register0x00000020 + -0x1c) = extraout_XMM0_Dd_00;
        pUVar9 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ae30;
        __this = unaff_RBX;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar10 = *(float *)((long)register0x00000020 + -0x28);
        fVar11 = UVar13.fields.m_YMin + UVar13.fields.m_Height;
        if ((fVar10 != fVar11) || (fVar12 = 0.0, NAN(fVar10) || NAN(fVar11))) {
          fVar10 = (*(float *)((long)register0x00000020 + -0x3c) - fVar10) / (fVar11 - fVar10);
          fVar12 = 0.0;
          if ((0.0 <= fVar10) && (fVar12 = 1.0, fVar10 <= 1.0)) {
            fVar12 = fVar10;
          }
        }
        iVar1 = (__this_00->fields)._mode;
        fVar11 = 0.0;
        fVar10 = 0.0;
        if ((iVar1 == 1) || (fVar10 = fVar12, iVar1 != 2)) {
          pSVar8 = (__this_00->fields)._onChanged;
          fVar12 = *(float *)((long)register0x00000020 + -0x38);
          if (0.0 <= *(float *)((long)register0x00000020 + -0x38)) goto label_0434aea3;
        }
        else {
          pSVar8 = (__this_00->fields)._onChanged;
          fVar12 = 0.0;
label_0434aea3:
          fVar11 = fVar12;
        }
        if (pSVar8 != (System_Action_float__float__o *)0x0) {
          fVar12 = 0.0;
          if (0.0 <= fVar10) {
            fVar12 = fVar10;
          }
          iVar2 = (pSVar8->fields).method;
          iVar3 = (pSVar8->fields).method_code;
          pcVar4 = (code *)(pSVar8->fields).invoke_impl;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434aebd;
          (*pcVar4)(fVar11,fVar12,iVar3,iVar2);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434aecc;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    eventData = pUVar9;
    unaff_R14 = __this_00;
  } while( true );
}


// UI.ColorPickDragArea$$Notify
// il2cpp: void UI_ColorPickDragArea__Notify (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x434acb0

void UI_ColorPickDragArea__Notify
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  int iVar1;
  intptr_t iVar2;
  intptr_t iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UI_ColorPickDragArea_o *pUVar7;
  System_Action_float__float__o *pSVar8;
  UI_ColorPickDragArea_o *unaff_RBX;
  UnityEngine_EventSystems_PointerEventData_o *pUVar9;
  UI_ColorPickDragArea_o *__this_00;
  UI_ColorPickDragArea_o *unaff_R14;
  UnityEngine_EventSystems_PointerEventData_o *unaff_R15;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  
  do {
    __this_00 = __this;
    *(UnityEngine_EventSystems_PointerEventData_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(UI_ColorPickDragArea_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(UI_ColorPickDragArea_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057ae0fd == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434acd4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ace0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434acec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057ae0fd = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad08;
    pUVar7 = (UI_ColorPickDragArea_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    unaff_RBX = (UI_ColorPickDragArea_o *)0x0;
    if ((pUVar7 != (UI_ColorPickDragArea_o *)0x0) &&
       (unaff_RBX = (UI_ColorPickDragArea_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
      unaff_RBX = pUVar7;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad38;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad44;
    __this = unaff_RBX;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if ((__this_00->fields)._onChanged == (System_Action_float__float__o *)0x0) {
      return;
    }
    unaff_R15 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38) =
           (eventData->fields)._position_k__BackingField.fields;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad78;
      unaff_R15 = (UnityEngine_EventSystems_PointerEventData_o *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ad93;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434adaa;
      pUVar9 = unaff_R15;
      __this = unaff_RBX;
      bVar6 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)unaff_RBX,
                         (UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38),
                         (UnityEngine_Camera_o *)unaff_R15,
                         (UnityEngine_Vector2_o *)((long)register0x00000020 + -0x40),(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (unaff_RBX != (UI_ColorPickDragArea_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434adc5;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_8_ = UVar13.fields._0_8_;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434add4;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar10 = *(float *)((long)register0x00000020 + -0x38);
        fVar11 = UVar13.fields.m_Width + UVar13.fields.m_XMin;
        if ((fVar10 != fVar11) || (fVar12 = 0.0, NAN(fVar10) || NAN(fVar11))) {
          fVar10 = (*(float *)((long)register0x00000020 + -0x40) - fVar10) / (fVar11 - fVar10);
          fVar12 = 0.0;
          if ((0.0 <= fVar10) && (fVar12 = 1.0, fVar10 <= 1.0)) {
            fVar12 = fVar10;
          }
        }
        *(float *)((long)register0x00000020 + -0x38) = fVar12;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ae1d;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        *(float *)((long)register0x00000020 + -0x28) = UVar13.fields.m_YMin;
        *(float *)((long)register0x00000020 + -0x24) = UVar13.fields.m_YMin;
        *(undefined4 *)((long)register0x00000020 + -0x20) = extraout_XMM0_Dc_00;
        *(undefined4 *)((long)register0x00000020 + -0x1c) = extraout_XMM0_Dd_00;
        pUVar9 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434ae30;
        __this = unaff_RBX;
        UVar13 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar10 = *(float *)((long)register0x00000020 + -0x28);
        fVar11 = UVar13.fields.m_YMin + UVar13.fields.m_Height;
        if ((fVar10 != fVar11) || (fVar12 = 0.0, NAN(fVar10) || NAN(fVar11))) {
          fVar10 = (*(float *)((long)register0x00000020 + -0x3c) - fVar10) / (fVar11 - fVar10);
          fVar12 = 0.0;
          if ((0.0 <= fVar10) && (fVar12 = 1.0, fVar10 <= 1.0)) {
            fVar12 = fVar10;
          }
        }
        iVar1 = (__this_00->fields)._mode;
        fVar11 = 0.0;
        fVar10 = 0.0;
        if ((iVar1 == 1) || (fVar10 = fVar12, iVar1 != 2)) {
          pSVar8 = (__this_00->fields)._onChanged;
          fVar12 = *(float *)((long)register0x00000020 + -0x38);
          if (0.0 <= *(float *)((long)register0x00000020 + -0x38)) goto label_0434aea3;
        }
        else {
          pSVar8 = (__this_00->fields)._onChanged;
          fVar12 = 0.0;
label_0434aea3:
          fVar11 = fVar12;
        }
        if (pSVar8 != (System_Action_float__float__o *)0x0) {
          fVar12 = 0.0;
          if (0.0 <= fVar10) {
            fVar12 = fVar10;
          }
          iVar2 = (pSVar8->fields).method;
          iVar3 = (pSVar8->fields).method_code;
          pcVar4 = (code *)(pSVar8->fields).invoke_impl;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434aebd;
          (*pcVar4)(fVar11,fVar12,iVar3,iVar2);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x434aecc;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    eventData = pUVar9;
    unaff_R14 = __this_00;
  } while( true );
}


// UI.ColorPickDragArea$$.ctor
// il2cpp: void UI_ColorPickDragArea___ctor (UI_ColorPickDragArea_o* __this, const MethodInfo* method);
// 0x434aee0

void UI_ColorPickDragArea___ctor(UI_ColorPickDragArea_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


