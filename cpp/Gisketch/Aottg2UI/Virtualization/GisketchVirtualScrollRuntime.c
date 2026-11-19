// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualScrollRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime.Slot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5324870

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *__this,
               UnityEngine_GameObject_o *root,MethodInfo *method)

{
  (__this->fields).ItemIndex = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Root);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureHierarchy
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5320a70

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o **targetAddress;
  UnityEngine_RectTransform_o **targetAddress_00;
  UnityEngine_RectTransform_o **targetAddress_01;
  UnityEngine_RectTransform_o **targetAddress_02;
  float fVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_Scrollbar_o *value;
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Color_o UVar8;
  
  if (Il2CppMethodInitialized_075427df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchScrollbarVisibility);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Viewport");
    il2cpp_codegen_initialize_runtime_metadata(&"Realized");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    Il2CppMethodInitialized_075427df = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
  parent = UnityEngine_GameObject__GetComponent_object_
                     (pUVar3,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (parent == (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
    parent = UnityEngine_GameObject__AddComponent_object_
                       (pUVar3,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
  }
  pUVar4 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._scroll;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect
                       );
    if (pUVar4 == (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar3,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_ScrollRect);
    }
    *targetAddress = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar6 = (__this->fields)._viewport;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_00 = &(__this->fields)._viewport;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                          ((UnityEngine_Transform_o *)parent,"Viewport",method_01);
    *targetAddress_00 = (UnityEngine_RectTransform_o *)method_00;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(*targetAddress_00,method_00);
    if (*targetAddress_00 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (*targetAddress_00 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar3,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    }
    if (*targetAddress_00 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) {
      if (*targetAddress_00 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_053210b3;
      pUVar5 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar3,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_053210b3;
    }
    UVar8.fields.b = 1.0;
    UVar8.fields.a = 0.0;
    UVar8.fields.r = 1.0;
    UVar8.fields.g = 1.0;
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (pUVar5,UVar8,(pUVar5->klass->vtable)._23_set_color.method);
    (*(pUVar5->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar5,true,(pUVar5->klass->vtable)._25_set_raycastTarget.method);
  }
  pUVar6 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_01 = &(__this->fields)._content;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       ((UnityEngine_Transform_o *)*targetAddress_00,"Content",method_02);
    *targetAddress_01 = pUVar6;
    Il2CppCodeGenWriteBarrier(targetAddress_01);
    if (*targetAddress_01 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_anchorMin
              (*targetAddress_01,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    if (*targetAddress_01 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_anchorMax
              (*targetAddress_01,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
    if (*targetAddress_01 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_pivot
              (*targetAddress_01,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pUVar6 = *targetAddress_01;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar6,(UnityEngine_Vector2_o)((ulong)UVar7.fields & 0xffffffff00000000),(MethodInfo *)0x0);
    pUVar6 = *targetAddress_01;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
    fVar1 = 0.0;
    if (0.0 <= UVar7.fields.y) {
      fVar1 = UVar7.fields.y;
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar6,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
  }
  pUVar6 = (__this->fields)._realizedLayer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress_02 = &(__this->fields)._realizedLayer;
    pUVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       ((UnityEngine_Transform_o *)*targetAddress_01,"Realized",method_03);
    *targetAddress_02 = pUVar6;
    Il2CppCodeGenWriteBarrier(targetAddress_02);
    if (*targetAddress_02 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_anchorMin
              (*targetAddress_02,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    if (*targetAddress_02 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_anchorMax
              (*targetAddress_02,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
    if (*targetAddress_02 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_pivot
              (*targetAddress_02,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pUVar6 = *targetAddress_02;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar6,(UnityEngine_Vector2_o)((ulong)UVar7.fields & 0xffffffff00000000),(MethodInfo *)0x0);
    pUVar6 = *targetAddress_02;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_053210b3;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar6,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  if (*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_viewport(*targetAddress,*targetAddress_00,(MethodInfo *)0x0);
    pUVar4 = *targetAddress;
    if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      (pUVar4->fields).m_Content = *targetAddress_01;
      Il2CppCodeGenWriteBarrier(&(pUVar4->fields).m_Content);
      pUVar4 = *targetAddress;
      if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        (pUVar4->fields).m_Horizontal = false;
        (pUVar4->fields).m_Vertical = true;
        value = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbar
                          (__this,(UnityEngine_Transform_o *)parent,method_04);
        UnityEngine_UI_ScrollRect__set_verticalScrollbar(pUVar4,value,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._scroll;
        if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility(pUVar4,0,(MethodInfo *)0x0);
          pUVar4 = *targetAddress;
          if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            (pUVar4->fields).m_MovementType = 2;
            (pUVar4->fields).m_Elasticity = 0.0;
            (pUVar4->fields).m_Inertia = true;
            (pUVar4->fields).m_ScrollSensitivity = (__this->fields)._scrollSensitivity;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              __this_00 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar3,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_GisketchScrollbarVisibility
                                    );
              if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0) {
label_05321098:
                Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
                          (__this_00,*targetAddress,(MethodInfo *)0x0);
                return;
              }
              pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                __this_00 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar3,(MethodInfo_353B6A0 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility
                                      );
                if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0)
                goto label_05321098;
              }
            }
          }
        }
      }
    }
  }
label_053210b3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ApplyContentSize
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyContentSize (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x53218b0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyContentSize
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  float size;
  float fStack_34;
  float fStack_14;
  
  size = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight(__this,metrics,method);
  pUVar1 = (__this->fields)._content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar1,1,size,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._realizedLayer;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar1,1,size,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._realizedLayer;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = UnityEngine_RectTransform__get_offsetMin(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._realizedLayer;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar3 = UnityEngine_RectTransform__get_offsetMax(pUVar1,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._realizedLayer;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            fStack_34 = UVar2.fields.y;
            UVar2.fields.y = fStack_34;
            UVar2.fields.x = metrics.fields.PaddingLeft;
            UnityEngine_RectTransform__set_offsetMin(pUVar1,UVar2,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._realizedLayer;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              fStack_14 = UVar3.fields.y;
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar1,(UnityEngine_Vector2_o)
                                (CONCAT44(fStack_14,metrics.fields.PaddingRight) ^ 0x80000000),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Position
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_RectTransform_o* rect, int32_t itemIndex, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x5321c10

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               UnityEngine_RectTransform_o *rect,int32_t itemIndex,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075427e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427e0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) ||
     ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0)) {
    return;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax(rect,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (rect,(UnityEngine_Vector2_o)((ulong)(uint)metrics.fields.ItemHeight << 0x20),(MethodInfo *)0x0);
  fVar2 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset
                    (__this,itemIndex,metrics,method_00);
  UnityEngine_RectTransform__set_anchoredPosition
            (rect,(UnityEngine_Vector2_o)((ulong)((uint)fVar2 ^ (uint)g_data_01004fa0) << 0x20),(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$PositionAll
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__PositionAll (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x5321f00

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__PositionAll
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  Il2CppClass *x;
  bool bVar1;
  UnityEngine_RectTransform_o *rect;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *__this_00;
  int index;
  
  if (Il2CppMethodInitialized_075427e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427e1 = '\x01';
  }
  __this_00 = (__this->fields)._slots;
  if (__this_00 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                         );
      if (pIVar2 == (Il2CppObject *)0x0) break;
      if (-1 < *(int *)&pIVar2[1].monitor) {
        x = pIVar2[1].klass;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (pIVar2[1].klass == (Il2CppClass *)0x0) break;
          rect = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pIVar2[1].klass,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                           );
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
                    (__this,rect,*(int32_t *)&pIVar2[1].monitor,metrics,
                     (MethodInfo *)(ulong)(uint)metrics.fields.PaddingBottom);
        }
      }
      index = index + 1;
      __this_00 = (__this->fields)._slots;
    } while (__this_00 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ScrollOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5322030

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075427e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075427e2 = '\x01';
  }
  pUVar1 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields)._viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._content;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (__this->fields)._viewport;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._content;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            fStack_24 = UVar6.fields.m_Height;
            fStack_24 = fStack_24 - UVar7.fields.m_Height;
            fVar5 = 0.0;
            if (0.0 <= fStack_24) {
              fVar5 = fStack_24;
            }
            UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
            fVar4 = UVar3.fields.y;
            if (fVar4 <= fVar5) {
              fVar5 = fVar4;
            }
            return (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ViewportHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ViewportHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5322150
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53221e5: shufps xmm1, xmm1, 0x55
// asm:   0x53221e9: ucomiss xmm1, dword ptr [rip - 0x436098c]
// asm:   0x53221f0: jbe 0x5322248

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ViewportHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  UnityEngine_Rect_o UVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o local_38;
  
  if (Il2CppMethodInitialized_075427e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075427e3 = '\x01';
  }
  pUVar1 = (__this->fields)._viewport;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields)._viewport;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (UVar8.fields.m_Height <= 1.0) goto label_05322248;
      pUVar1 = (__this->fields)._viewport;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        return UVar8.fields.m_Height;
      }
    }
    ThrowNullReferenceException();
  }
label_05322248:
  obj = (Il2CppObject *)(__this->fields)._source;
  if (obj == (Il2CppObject *)0x0) {
    return 1.0;
  }
  pIVar2 = obj->klass;
  uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar6 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar7 = 0;
    do {
      if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
           ((long)&pIVar3->interfaceType + lVar7) ==
          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
        pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 1);
        goto label_053222c4;
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar6 * 0x10 != lVar7);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,1);
label_053222c4:
  (*pVVar5->methodPtr)(&local_38,obj,pVVar5->method);
  return local_38.fields.ViewportHeight;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ContentHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x53219b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5321a1f: nop 
// asm:   0x5321a95: addss xmm3, dword ptr [rbp + 0x20]
// asm:   0x5321a9a: movss dword ptr [rsp + 4], xmm3
// asm:   0x5321b3d: nop dword ptr [rax]
// asm:   0x5321bbf: jmp 0x5321ae0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  float fVar3;
  int32_t iVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  Il2CppObject *obj;
  long lVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_075427e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    Il2CppMethodInitialized_075427e4 = '\x01';
  }
  pIVar7 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar7->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05321a51;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05321a51:
    iVar4 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    if (0 < iVar4) {
      metrics.fields.PaddingTop =
           (float)(iVar4 + -1) * metrics.fields.Gap +
           metrics.fields.PaddingTop + (float)iVar4 * metrics.fields.ItemHeight;
    }
    fVar11 = metrics.fields.PaddingTop + metrics.fields.PaddingBottom;
    pIVar7 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)(__this->fields)._source,
                        (Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    if (pIVar7 == (Il2CppObject *)0x0) {
      return fVar11;
    }
    obj = (Il2CppObject *)(__this->fields)._source;
    if (obj != (Il2CppObject *)0x0) {
      iVar4 = 0;
      do {
        pIVar1 = obj->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                 ((long)&pIVar2->interfaceType + lVar9) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
              pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05321b73;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05321b73:
        iVar5 = (*pVVar6->methodPtr)(obj,pVVar6->method);
        if (iVar5 <= iVar4) {
          return fVar11;
        }
        pIVar1 = pIVar7->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource_c **)
                 ((long)&pIVar2->interfaceType + lVar9) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource) {
              pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05321aea;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource
                            ,0);
label_05321aea:
        fVar10 = (*pVVar6->methodPtr)(pIVar7,iVar4,pVVar6->method);
        fVar3 = 0.0;
        if (0.0 <= fVar10) {
          fVar3 = fVar10;
        }
        fVar11 = fVar11 + fVar3;
        iVar4 = iVar4 + 1;
        obj = (Il2CppObject *)(__this->fields)._source;
      } while (obj != (Il2CppObject *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ItemOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x5321d30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5321eaf: jmp 0x5321dc0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int iVar3;
  int32_t iVar4;
  Il2CppObject *obj_00;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  int32_t itemIndex_00;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_34;
  
  if (Il2CppMethodInitialized_075427e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    Il2CppMethodInitialized_075427e5 = '\x01';
  }
  iVar3 = 0;
  if (0 < itemIndex) {
    iVar3 = itemIndex;
  }
  local_34 = (float)iVar3 * (metrics.fields.ItemHeight + metrics.fields.Gap) + metrics.fields.PaddingTop;
  obj_00 = il2cpp_vm_Object_IsInst
                     ((Il2CppObject *)(__this->fields)._source,
                      (Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
  if ((obj_00 != (Il2CppObject *)0x0) && (-1 < itemIndex)) {
    itemIndex_00 = 0;
    do {
      obj = (Il2CppObject *)(__this->fields)._source;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = obj->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_05321e63;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar6 * 0x10 != lVar7);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05321e63:
      iVar4 = (*pVVar5->methodPtr)(obj,pVVar5->method);
      if (iVar4 <= itemIndex_00) {
        return local_34;
      }
      pIVar1 = obj_00->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource_c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_05321dca;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar6 * 0x10 != lVar7);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj_00,(Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource
                          ,0);
label_05321dca:
      fVar8 = (*pVVar5->methodPtr)(obj_00,itemIndex_00,pVVar5->method);
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      local_34 = local_34 + fVar9;
      itemIndex_00 = itemIndex_00 + 1;
    } while (itemIndex_00 <= itemIndex);
  }
  return local_34;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RangeFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RangeFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, float offset, float viewportHeight, const MethodInfo* method);
// 0x53222f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53223dd: nop dword ptr [rax]
// asm:   0x53225f9: mov r13d, eax
// asm:   0x53225fc: jmp 0x53226cf
// asm:   0x532263d: nop dword ptr [rax]
// asm:   0x532271d: nop dword ptr [rax]

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RangeFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,float offset,
          float viewportHeight,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  float fVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  int iVar7;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar9;
  MethodInfo *method_00;
  ulong uVar10;
  Il2CppObject *pIVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (Il2CppMethodInitialized_075427e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    Il2CppMethodInitialized_075427e6 = '\x01';
  }
  obj = il2cpp_vm_Object_IsInst
                  ((Il2CppObject *)(__this->fields)._source,
                   (Il2CppClass *)
                   TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
  pIVar11 = (Il2CppObject *)(__this->fields)._source;
  if (obj == (Il2CppObject *)0x0) {
    if (pIVar11 != (Il2CppObject *)0x0) {
      pIVar1 = pIVar11->klass;
      uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
               ((long)&pIVar2->interfaceType + lVar12) ==
              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
            pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
            goto label_05322680;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar10 * 0x10 != lVar12);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar11,(Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05322680:
      iVar5 = (*pVVar8->methodPtr)(pIVar11,pVVar8->method);
      GVar9 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__RangeFor
                        (&metrics,iVar5,offset,viewportHeight,method_00);
      uVar10 = (ulong)GVar9 >> 0x20;
      goto label_05322764;
    }
  }
  else if (pIVar11 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar11->klass;
    uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar2->interfaceType + lVar12) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
          goto label_05322418;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar10 * 0x10 != lVar12);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar11,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05322418:
    iVar5 = (*pVVar8->methodPtr)(pIVar11,pVVar8->method);
    fVar4 = metrics.fields.PaddingTop;
    fVar3 = metrics.fields.ItemHeight;
    if (iVar5 == 0) {
      uVar10 = 0xffffffff;
      GVar9.Start = -1;
      GVar9.End = 0;
      goto label_05322764;
    }
    pIVar11 = (Il2CppObject *)(__this->fields)._source;
    if (pIVar11 != (Il2CppObject *)0x0) {
      fVar20 = 0.0;
      fVar15 = 0.0;
      if (0.0 <= offset) {
        fVar15 = offset;
      }
      fVar18 = 1.0;
      if (1.0 <= viewportHeight) {
        fVar18 = viewportHeight;
      }
      fVar19 = metrics.fields.Gap + metrics.fields.ItemHeight;
      iVar5 = 0;
      iVar13 = -1;
      iVar14 = -1;
      do {
        pIVar1 = pIVar11->klass;
        uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                 ((long)&pIVar2->interfaceType + lVar12) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
              pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
              goto label_05322523;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar10 * 0x10 != lVar12);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar11,(Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05322523:
        iVar6 = (*pVVar8->methodPtr)(pIVar11,pVVar8->method);
        if (iVar6 <= iVar5) {
          if (-1 < iVar13) goto label_053226cf;
          pIVar11 = (Il2CppObject *)(__this->fields)._source;
          if (pIVar11 != (Il2CppObject *)0x0) {
            pIVar1 = pIVar11->klass;
            uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
            if (uVar10 == 0) goto label_0532264f;
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar12 = 0;
            goto label_05322640;
          }
          break;
        }
        pIVar1 = obj->klass;
        uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource_c **)
                 ((long)&pIVar2->interfaceType + lVar12) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource) {
              pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
              goto label_05322592;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar10 * 0x10 != lVar12);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource,
                            0);
label_05322592:
        fVar16 = (*pVVar8->methodPtr)(obj,iVar5,pVVar8->method);
        fVar17 = 0.0;
        if (0.0 <= fVar16) {
          fVar17 = fVar16;
        }
        fVar20 = fVar20 + fVar17;
        fVar17 = (float)iVar5 * fVar19 + fVar4 + fVar20;
        iVar7 = iVar5;
        if (fVar3 + fVar17 < offset) {
          iVar7 = iVar13;
        }
        if (-1 < iVar13) {
          iVar7 = iVar13;
        }
        iVar13 = iVar7;
        iVar6 = iVar5;
        if (fVar18 + fVar15 < fVar17) {
          if (-1 < iVar13) goto label_053226cf;
          iVar6 = iVar14;
        }
        iVar5 = iVar5 + 1;
        pIVar11 = (Il2CppObject *)(__this->fields)._source;
        iVar14 = iVar6;
      } while (pIVar11 != (Il2CppObject *)0x0);
    }
  }
  goto label_0532277c;
  while (lVar12 = lVar12 + 0x10, uVar10 * 0x10 != lVar12) {
label_05322640:
    if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
         ((long)&pIVar2->interfaceType + lVar12) ==
        TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
      pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
      goto label_053226c0;
    }
  }
label_0532264f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar11,(Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_053226c0:
  iVar5 = (*pVVar8->methodPtr)(pIVar11,pVVar8->method);
  iVar13 = iVar5 + -1;
label_053226cf:
  iVar5 = metrics.fields.OverscanRows;
  if (iVar14 <= iVar13) {
    iVar14 = iVar13;
  }
  GVar9.Start = 0;
  GVar9.End = 0;
  if (0 < iVar13 - metrics.fields.OverscanRows) {
    GVar9.End = 0;
    GVar9.Start = iVar13 - metrics.fields.OverscanRows;
  }
  pIVar11 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar11 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar11->klass;
    uVar10 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar2->interfaceType + lVar12) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
          goto label_05322751;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar10 * 0x10 != lVar12);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar11,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05322751:
    iVar6 = (*pVVar8->methodPtr)(pIVar11,pVVar8->method);
    uVar10 = (ulong)(uint)(iVar5 + iVar14);
    if ((int)(iVar6 - 1U) < iVar5 + iVar14) {
      uVar10 = (ulong)(iVar6 - 1U);
    }
label_05322764:
    return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)
           ((ulong)(uint)GVar9.Start | uVar10 << 0x20);
  }
label_0532277c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EffectiveMetrics
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5322790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53227ee: nop 

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  MethodInfo *method_00;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o local_70;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_075427e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_075427e7 = '\x01';
  }
  method_00 = (MethodInfo *)(__this->fields)._source;
  if (method_00 == (MethodInfo *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = (Il2CppClass *)method_00->methodPointer;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
           ((long)&pIVar2->interfaceType + lVar5) ==
          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
        pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 1);
        goto label_05322824;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)method_00,
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,1)
  ;
label_05322824:
  (*pVVar3->methodPtr)(&local_70,(Il2CppObject *)method_00,pVVar3->method);
  auVar6 = ZEXT812(0x3f800000);
  if (auVar6._0_4_ <= local_70.fields.ViewportHeight) {
    auVar6._4_8_ = auVar6._4_8_;
    auVar6._0_4_ = local_70.fields.ViewportHeight;
  }
  auVar8._8_8_ = 0;
  auVar8._0_4_ = local_70.fields.ItemHeight;
  auVar8._4_4_ = local_70.fields.Gap;
  local_28 = maxps(ZEXT816(0x3f800000),auVar8);
  uStack_34 = local_70.fields.OverscanRows & -(uint)(0 < local_70.fields.OverscanRows);
  local_38 = ~-(uint)(1 < local_70.fields.VirtualizationThreshold) & 1 |
             local_70.fields.VirtualizationThreshold & -(uint)(1 < local_70.fields.VirtualizationThreshold);
  uStack_30 = 0;
  uStack_2c = 0;
  local_48 = local_70.fields.PaddingLeft;
  fStack_44 = local_70.fields.PaddingRight;
  fStack_40 = local_70.fields.PaddingTop;
  fStack_3c = local_70.fields.PaddingBottom;
  auVar7._0_4_ = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale(__this,method_00);
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_4_ = auVar7._0_4_;
  auVar7._12_4_ = auVar7._0_4_;
  auVar9._8_4_ = fStack_40;
  auVar9._12_4_ = fStack_3c;
  auVar9._0_4_ = local_48;
  auVar9._4_4_ = fStack_44;
  auVar9 = divps(auVar9,auVar7);
  (__return_storage_ptr__->fields).ItemHeight = (float)local_28._0_4_;
  (__return_storage_ptr__->fields).Gap = (float)local_28._4_4_;
  (__return_storage_ptr__->fields).ViewportHeight = auVar6._0_4_;
  (__return_storage_ptr__->fields).VirtualizationThreshold = local_38;
  (__return_storage_ptr__->fields).OverscanRows = uStack_34;
  auVar9 = maxps(ZEXT816(0),auVar9);
  (__return_storage_ptr__->fields).PaddingLeft = (float)auVar9._0_4_;
  (__return_storage_ptr__->fields).PaddingRight = (float)auVar9._4_4_;
  (__return_storage_ptr__->fields).PaddingTop = (float)auVar9._8_4_;
  (__return_storage_ptr__->fields).PaddingBottom = (float)auVar9._12_4_;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$UiScale
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x53228e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5322996: cmp byte ptr [rip + 0x221fe29], 0
// asm:   0x532299d: je 0x5322a34

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075427e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427e8 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return 1.0;
  }
  if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_075427ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427ad = '\x01';
  }
  fVar4 = (x->fields)._scale;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (Il2CppMethodInitialized_075427c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  fVar3 = 1.5;
  if (fVar4 <= 1.5) {
    fVar3 = fVar4;
  }
  fVar3 = (float)(-(uint)(0.5 <= fVar4) & (uint)(fVar3 + -0.5));
  fVar4 = 1.0;
  if (fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  fVar4 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
  fVar3 = 0.0;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar3 = fVar3 * 0.40000004 + 0.8;
  fVar4 = 0.001;
  if (0.001 <= fVar3) {
    fVar4 = fVar3;
  }
  return fVar4;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$FindOrCreateChild
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x53210c0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  
  if (Il2CppMethodInitialized_075427e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_075427e9 = '\x01';
  }
  if (parent != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(parent,name,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          return pUVar3;
        }
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar5,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
          return pUVar3;
        }
      }
    }
    else {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if (obj != (System_Type_o *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items);
        pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(pUVar5,name,components,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(pUVar2,parent,false,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar5,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            return pUVar3;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureScrollbar
// il2cpp: UnityEngine_UI_Scrollbar_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbar (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5321420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5321669: jmp 0x5321558

UnityEngine_UI_Scrollbar_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbar
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
          UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o **targetAddress;
  uint32_t uVar1;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_UI_Scrollbar_o *pUVar6;
  UnityEngine_UI_Image_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  float fVar7;
  UnityEngine_Color_o fallback;
  
  if (Il2CppMethodInitialized_075427ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar");
    Il2CppMethodInitialized_075427ea = '\x01';
  }
  pUVar6 = (__this->fields)._scrollbar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._scrollbar;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_0532187d:
    return *targetAddress;
  }
  if (parent != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(parent,"AoTTG Virtual Scrollbar",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05321890;
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    else {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components == (System_Type_array *)0x0) goto label_05321890;
      if ((obj != (System_Type_o *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Virtual Scrollbar",components,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_05321890;
      UnityEngine_Transform__SetParent_692d510(pUVar3,parent,false,(MethodInfo *)0x0);
    }
    else if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05321890;
    method_01 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    fVar7 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollbarWidth(__this,method_01);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin(pUVar5,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (pUVar5,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields
                 ,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot(pUVar5,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0)
      ;
      value.fields.y = 0.0;
      value.fields.x = -fVar7;
      UnityEngine_RectTransform__set_offsetMin(pUVar5,value,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                (pUVar5,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      fallback.fields.b = 0.05;
      fallback.fields.a = 0.72;
      fallback.fields.r = 0.04;
      fallback.fields.g = 0.04;
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
                (__this,__this_00,"scrollbar",fallback,false,in_R8);
      pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pUVar5 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbarThumb
                         (__this,pUVar3,method_00);
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Scrollbar);
      if (pUVar6 == (UnityEngine_UI_Scrollbar_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
      }
      *targetAddress = pUVar6;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if (*targetAddress != (UnityEngine_UI_Scrollbar_o *)0x0) {
        UnityEngine_UI_Scrollbar__set_direction(*targetAddress,2,(MethodInfo *)0x0);
        if ((*targetAddress != (UnityEngine_UI_Scrollbar_o *)0x0) &&
           (UnityEngine_UI_Scrollbar__set_handleRect(*targetAddress,pUVar5,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
          pUVar6 = *targetAddress;
          value_00 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar5,
                                (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          if (pUVar6 != (UnityEngine_UI_Scrollbar_o *)0x0) {
            UnityEngine_UI_Selectable__set_targetGraphic
                      ((UnityEngine_UI_Selectable_o *)pUVar6,(UnityEngine_UI_Graphic_o *)value_00,
                       (MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_UI_Scrollbar_o *)0x0) {
              UnityEngine_UI_Selectable__set_transition
                        ((UnityEngine_UI_Selectable_o *)*targetAddress,0,(MethodInfo *)0x0);
              if (*targetAddress != (UnityEngine_UI_Scrollbar_o *)0x0) {
                UnityEngine_UI_Selectable__set_navigation
                          ((UnityEngine_UI_Selectable_o *)*targetAddress,
                           (UnityEngine_UI_Navigation_o)ZEXT840(0),(MethodInfo *)0x0);
                goto label_0532187d;
              }
            }
          }
        }
      }
    }
  }
label_05321890:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureScrollbarThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbarThumb (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_Transform_o* track, const MethodInfo* method);
// 0x5322de0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbarThumb
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
          UnityEngine_Transform_o *track,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_GameObject_o *go;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *pMVar2;
  MethodInfo *in_R8;
  UnityEngine_Color_o fallback;
  
  if (Il2CppMethodInitialized_075427eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbarThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar Sliding Area");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar Thumb");
    Il2CppMethodInitialized_075427eb = '\x01';
    method = extraout_RDX;
  }
  pMVar2 = (MethodInfo *)"AoTTG Virtual Scrollbar Sliding Area";
  pUVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                     (track,"AoTTG Virtual Scrollbar Sliding Area",method);
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(pUVar1,pMVar2);
  pMVar2 = (MethodInfo *)"AoTTG Virtual Scrollbar Thumb";
  pUVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                     ((UnityEngine_Transform_o *)pUVar1,"AoTTG Virtual Scrollbar Thumb",method_00);
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(pUVar1,pMVar2);
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
  fallback.fields.b = 0.58;
  fallback.fields.a = 0.95;
  fallback.fields.r = 0.86;
  fallback.fields.g = 0.78;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
            (__this,go,"scrollbarThumb",fallback,true,in_R8);
  return pUVar1;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ScrollbarWidth
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollbarWidth (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5322a70

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollbarWidth
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_075427ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_075427ec = '\x01';
  }
  __this_00 = (__this->fields)._theme;
  fVar5 = 12.0;
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                       (__this_00,"scrollbar",(MethodInfo *)0x0);
    if ((pGVar4 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
       (pGVar2 = (pGVar4->fields).width, pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0)) {
      return 12.0;
    }
    bVar3 = System_String__Equals_52ffe30((pGVar2->fields).unit,"point",5,(MethodInfo *)0x0);
    fVar5 = 12.0;
    if (bVar3) {
      pGVar2 = (pGVar4->fields).width;
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar1 = (pGVar2->fields).value;
      fVar5 = 1.0;
      if (1.0 <= fVar1) {
        fVar5 = fVar1;
      }
    }
  }
  return fVar5;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ApplyStyleImage
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_GameObject_o* go, System_String_o* styleName, UnityEngine_Color_o fallback, bool reliefGradient, const MethodInfo* method);
// 0x5322b20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5322d86: test r14, r14
// asm:   0x5322d89: je 0x5322dd2

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               UnityEngine_GameObject_o *go,System_String_o *styleName,UnityEngine_Color_o fallback,
               bool reliefGradient,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  System_Nullable_float__Fields stainScaleOverride;
  UnityEngine_UI_Image_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  UnityEngine_Material_o *material;
  UnityEngine_UI_Image_c *pUVar4;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar6;
  UnityEngine_UI_Image_o *graphic;
  MethodInfo *in_R9;
  bool bVar7;
  bool reliefGradient_00;
  float relief;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_075427ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    Il2CppMethodInitialized_075427ed = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_05322dd2;
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    pGVar6 = (__this->fields)._theme;
    graphic = pUVar2;
    if (pGVar6 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05322bce;
label_05322d68:
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
label_05322dd2:
      ThrowNullReferenceException();
    }
    pUVar4 = pUVar2->klass;
    pMVar5 = (pUVar4->vtable)._23_set_color.method;
    local_48 = fallback.fields.r;
    fStack_44 = fallback.fields.g;
    local_68 = fallback.fields.b;
    fStack_64 = fallback.fields.a;
    graphic = pUVar2;
label_05322db2:
    UVar11.fields.g = fStack_44;
    UVar11.fields.r = local_48;
    UVar11.fields.a = fStack_64;
    UVar11.fields.b = local_68;
    (*(pUVar4->vtable)._23_set_color.methodPtr)(pUVar2,UVar11,pMVar5);
  }
  else {
    pGVar6 = (__this->fields)._theme;
    graphic = pUVar2;
    if (pGVar6 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05322d68;
label_05322bce:
    pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar6,styleName,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_UI_Image_o *)0x0;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pUVar2 = graphic;
    }
    pGVar6 = (__this->fields)._theme;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      if (pGVar6 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05322dd2;
      UVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (pGVar6,(System_String_o *)0x0,fallback,(MethodInfo *)0x0);
      local_68 = UVar11.fields.b;
      fStack_64 = UVar11.fields.a;
      local_48 = UVar11.fields.r;
      fStack_44 = UVar11.fields.g;
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05322dd2;
      pUVar4 = pUVar2->klass;
      pMVar5 = (pUVar4->vtable)._23_set_color.method;
      goto label_05322db2;
    }
    if ((pGVar6 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) ||
       (UVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           (pGVar6,(pGVar3->fields).background,fallback,(MethodInfo *)0x0),
       graphic == (UnityEngine_UI_Image_o *)0x0)) goto label_05322dd2;
    (*(graphic->klass->vtable)._23_set_color.methodPtr)
              (graphic,UVar11,(graphic->klass->vtable)._23_set_color.method);
    pGVar6 = (__this->fields)._theme;
    if (pGVar6 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05322dd2;
    relief = (pGVar3->fields).relief.fields.value * (pGVar6->fields)._ReliefIntensity_k__BackingField;
    SVar1 = (pGVar3->fields).worn.fields;
    bVar7 = SVar1.hasValue == false;
    if (Il2CppMethodInitialized_0753e7b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e7b4 = '\x01';
    }
    fVar8 = ABS(relief);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar10 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
    fVar9 = fVar8 * 1e-06;
    if (fVar8 * 1e-06 <= fVar10) {
      fVar9 = fVar10;
    }
    if (fVar9 <= ABS(0.0 - relief) || (0xff < (ushort)SVar1 || bVar7)) {
      reliefGradient_00 = true;
      if (!reliefGradient) {
        reliefGradient_00 = (pGVar3->fields).reliefGradient.fields.value != false;
      }
      stainScaleOverride = (pGVar3->fields).wornStainScale.fields;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      material = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                           (relief,reliefGradient_00,0xff < (ushort)SVar1 || bVar7,
                            (System_Nullable_float__o)stainScaleOverride,false,false,in_R9);
      goto label_05322dbd;
    }
  }
  material = (UnityEngine_Material_o *)0x0;
label_05322dbd:
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Assign
            ((UnityEngine_UI_Graphic_o *)graphic,material,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x53212e0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075427ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427ee = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_ScrollRect
// il2cpp: UnityEngine_UI_ScrollRect_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_ScrollRect (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5323360

UnityEngine_UI_ScrollRect_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_ScrollRect
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  return (__this->fields)._scroll;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_CurrentScrollOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5323370

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset(__this,method);
  return fVar1;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_CurrentRange
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentRange (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5323380

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentRange
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)(__this->fields)._range.fields;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_LiveItemCount
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_LiveItemCount (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5323390

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_LiveItemCount
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar1;
  
  if (Il2CppMethodInitialized_075427ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    Il2CppMethodInitialized_075427ef = '\x01';
  }
  pSVar1 = (__this->fields)._slots;
  if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._size;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_IsVirtualized
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_IsVirtualized (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x53233d0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_IsVirtualized
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o GStack_48;
  
  if (Il2CppMethodInitialized_075427f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_075427f0 = '\x01';
  }
  pIVar1 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar1 == (Il2CppObject *)0x0) {
    bVar4 = false;
  }
  else {
    pIVar2 = pIVar1->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar6 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
          goto label_0532346b;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,1);
label_0532346b:
    (*pVVar6->methodPtr)(&GStack_48,pIVar1,pVVar6->method);
    pIVar1 = (Il2CppObject *)(__this->fields)._source;
    if (pIVar1 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar1->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_053234e1;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_053234e1:
    iVar5 = (*pVVar6->methodPtr)(pIVar1,pVVar6->method);
    bVar4 = GStack_48.fields.VirtualizationThreshold <= iVar5;
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Setup (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o* source, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, float scrollSensitivity, const MethodInfo* method);
// 0x5323500

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Setup
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *source,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,float scrollSensitivity,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source);
  (__this->fields)._theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._theme);
  fVar1 = 1.0;
  if (1.0 <= scrollSensitivity) {
    fVar1 = scrollSensitivity;
  }
  (__this->fields)._scrollSensitivity = fVar1;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy(__this,(MethodInfo *)theme);
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(__this,true,method_00);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__LateUpdate (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x53237b0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__LateUpdate
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(__this,false,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, bool force, const MethodInfo* method);
// 0x5323560

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,bool force,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics_01;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics_02;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics_03;
  bool bVar1;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields range;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  int iVar4;
  MethodInfo *method_01;
  undefined7 in_register_00000031;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *method_02;
  int iVar5;
  float fVar6;
  float fVar7;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_78;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_38 [16];
  
  local_78.OverscanRows = 0;
  local_78.PaddingLeft = 0.0;
  local_78.PaddingRight = 0.0;
  local_78.PaddingTop = 0.0;
  local_78.ItemHeight = 0.0;
  local_78.Gap = 0.0;
  local_78.ViewportHeight = 0.0;
  local_78.VirtualizationThreshold = 0;
  local_78.PaddingBottom = 0.0;
  if ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy
              (__this,(MethodInfo *)CONCAT71(in_register_00000031,force));
    method_02 = __this;
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics
              ((Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_78,__this,method_00);
    local_48 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale
                         (__this,(MethodInfo *)method_02);
    local_38 = ZEXT416((uint)(__this->fields)._lastUiScale);
    if (Il2CppMethodInitialized_0753e7b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e7b4 = '\x01';
    }
    local_4c = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon;
    (__this->fields)._lastUiScale = local_48;
    metrics.fields.ViewportHeight = local_78.ViewportHeight;
    metrics.fields.VirtualizationThreshold = local_78.VirtualizationThreshold;
    metrics.fields.ItemHeight = local_78.ItemHeight;
    metrics.fields.Gap = local_78.Gap;
    metrics.fields.OverscanRows = local_78.OverscanRows;
    metrics.fields.PaddingLeft = local_78.PaddingLeft;
    metrics.fields.PaddingRight = local_78.PaddingRight;
    metrics.fields.PaddingTop = local_78.PaddingTop;
    metrics.fields.PaddingBottom = local_78.PaddingBottom;
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyContentSize
              (__this,metrics,(MethodInfo *)method_02);
    bVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_IsVirtualized
                      (__this,(MethodInfo *)method_02);
    if (bVar1) {
      local_50 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset
                           (__this,(MethodInfo *)method_02);
      fVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ViewportHeight
                        (__this,(MethodInfo *)method_02);
      metrics_00.fields.ViewportHeight = local_78.ViewportHeight;
      metrics_00.fields.VirtualizationThreshold = local_78.VirtualizationThreshold;
      metrics_00.fields.ItemHeight = local_78.ItemHeight;
      metrics_00.fields.Gap = local_78.Gap;
      metrics_00.fields.OverscanRows = local_78.OverscanRows;
      metrics_00.fields.PaddingLeft = local_78.PaddingLeft;
      metrics_00.fields.PaddingRight = local_78.PaddingRight;
      metrics_00.fields.PaddingTop = local_78.PaddingTop;
      metrics_00.fields.PaddingBottom = local_78.PaddingBottom;
      range = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RangeFor
                        (__this,metrics_00,local_50,fVar6,(MethodInfo *)method_02);
      iVar5 = range.End;
      iVar4 = range.Start;
      if ((iVar5 < iVar4) || ((iVar5 - iVar4) + 1 < 1)) {
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UnbindAll
                  (__this,(MethodInfo *)method_02);
      }
      else {
        method_01 = (MethodInfo *)(ulong)(uint)range.Start;
        fVar6 = ABS(local_48);
        if (ABS(local_48) <= ABS((float)local_38._0_4_)) {
          fVar6 = ABS((float)local_38._0_4_);
        }
        fVar7 = fVar6 * 1e-06;
        if (fVar6 * 1e-06 <= local_4c * 8.0) {
          fVar7 = local_4c * 8.0;
        }
        pMVar3 = extraout_RDX;
        if (fVar7 <= ABS((float)local_38._0_4_ - local_48)) {
          metrics_01.fields.ViewportHeight = local_78.ViewportHeight;
          metrics_01.fields.VirtualizationThreshold = local_78.VirtualizationThreshold;
          metrics_01.fields.ItemHeight = local_78.ItemHeight;
          metrics_01.fields.Gap = local_78.Gap;
          metrics_01.fields.OverscanRows = local_78.OverscanRows;
          metrics_01.fields.PaddingLeft = local_78.PaddingLeft;
          metrics_01.fields.PaddingRight = local_78.PaddingRight;
          metrics_01.fields.PaddingTop = local_78.PaddingTop;
          metrics_01.fields.PaddingBottom = local_78.PaddingBottom;
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__PositionAll
                    (__this,metrics_01,(MethodInfo *)method_02);
          pMVar3 = extraout_RDX_00;
        }
        if (((!force) && ((__this->fields)._range.fields.Start == iVar4)) &&
           ((__this->fields)._range.fields.End == iVar5)) {
          return;
        }
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RecycleOutside
                  (__this,(Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)range,pMVar3);
        pMVar3 = extraout_RDX_01;
        do {
          iVar4 = (int)method_01;
          pGVar2 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor(__this,iVar4,pMVar3)
          ;
          pMVar3 = extraout_RDX_02;
          if (pGVar2 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
            pGVar2 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot(__this,method_01)
            ;
            metrics_02.fields.ViewportHeight = local_78.ViewportHeight;
            metrics_02.fields.VirtualizationThreshold = local_78.VirtualizationThreshold;
            metrics_02.fields.ItemHeight = local_78.ItemHeight;
            metrics_02.fields.Gap = local_78.Gap;
            metrics_02.fields.OverscanRows = local_78.OverscanRows;
            metrics_02.fields.PaddingLeft = local_78.PaddingLeft;
            metrics_02.fields.PaddingRight = local_78.PaddingRight;
            metrics_02.fields.PaddingTop = local_78.PaddingTop;
            metrics_02.fields.PaddingBottom = local_78.PaddingBottom;
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
                      (__this,pGVar2,iVar4,metrics_02,(MethodInfo *)(ulong)(uint)local_78.PaddingBottom);
            pMVar3 = extraout_RDX_03;
          }
          method_01 = (MethodInfo *)(ulong)(iVar4 + 1U);
        } while ((int)(iVar4 + 1U) <= iVar5);
      }
      (__this->fields)._range.fields = range;
    }
    else {
      metrics_03.fields.ViewportHeight = local_78.ViewportHeight;
      metrics_03.fields.VirtualizationThreshold = local_78.VirtualizationThreshold;
      metrics_03.fields.ItemHeight = local_78.ItemHeight;
      metrics_03.fields.Gap = local_78.Gap;
      metrics_03.fields.OverscanRows = local_78.OverscanRows;
      metrics_03.fields.PaddingLeft = local_78.PaddingLeft;
      metrics_03.fields.PaddingRight = local_78.PaddingRight;
      metrics_03.fields.PaddingTop = local_78.PaddingTop;
      metrics_03.fields.PaddingBottom = local_78.PaddingBottom;
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RefreshStatic
                (__this,metrics_03,(MethodInfo *)method_02);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$MaterializeItem
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__MaterializeItem (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x5324150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53241ce: nop 

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__MaterializeItem
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar5;
  ulong uVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar7;
  bool bVar8;
  float offset;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_48;
  
  if (Il2CppMethodInitialized_075427f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_075427f1 = '\x01';
  }
  local_48.OverscanRows = 0;
  local_48.PaddingLeft = 0.0;
  local_48.PaddingRight = 0.0;
  local_48.PaddingTop = 0.0;
  local_48.ItemHeight = 0.0;
  local_48.Gap = 0.0;
  local_48.ViewportHeight = 0.0;
  local_48.VirtualizationThreshold = 0;
  local_48.PaddingBottom = 0.0;
  obj = (Il2CppObject *)(__this->fields)._source;
  bVar8 = false;
  if ((obj != (Il2CppObject *)0x0) && (-1 < itemIndex)) {
    pIVar1 = obj->klass;
    uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar2->interfaceType + lVar7) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
          goto label_05324201;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05324201:
    iVar3 = (*pVVar4->methodPtr)(obj,pVVar4->method);
    if (itemIndex < iVar3) {
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics
                ((Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_48,__this,method_00
                );
      method_04 = (MethodInfo *)(ulong)(uint)itemIndex;
      metrics.fields.ViewportHeight = local_48.ViewportHeight;
      metrics.fields.VirtualizationThreshold = local_48.VirtualizationThreshold;
      metrics.fields.ItemHeight = local_48.ItemHeight;
      metrics.fields.Gap = local_48.Gap;
      metrics.fields.OverscanRows = local_48.OverscanRows;
      metrics.fields.PaddingLeft = local_48.PaddingLeft;
      metrics.fields.PaddingRight = local_48.PaddingRight;
      metrics.fields.PaddingTop = local_48.PaddingTop;
      metrics.fields.PaddingBottom = local_48.PaddingBottom;
      offset = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset
                         (__this,itemIndex,metrics,method_01);
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SetScrollOffset(__this,offset,method_04);
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(__this,true,method_02);
      pGVar5 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                         (__this,itemIndex,method_03);
      bVar8 = pGVar5 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
    }
    else {
      bVar8 = false;
    }
  }
  return bVar8;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$TryMaterializeSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__TryMaterializeSearchTarget (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, System_String_o* targetId, UnityEngine_GameObject_o** target, const MethodInfo* method);
// 0x5324480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532452f: nop 

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__TryMaterializeSearchTarget
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               System_String_o *targetId,UnityEngine_GameObject_o **target,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  char cVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar7;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar9;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_075427f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427f2 = '\x01';
  }
  iStack_34 = 0;
  *target = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(target);
  if (((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) &&
     (bVar4 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0), !bVar4)) {
    obj = (Il2CppObject *)(__this->fields)._source;
    if (obj == (Il2CppObject *)0x0) {
label_0532460a:
      ThrowNullReferenceException();
    }
    pIVar1 = obj->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar6 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar9) + 7);
          goto label_0532456a;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,7);
label_0532456a:
    bVar4 = (*pVVar6->methodPtr)(obj,targetId,&iStack_34,pVVar6->method);
    if (((bVar4) &&
        (bVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__MaterializeItem
                           (__this,iStack_34,method_00), bVar4)) &&
       (pGVar7 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                           (__this,iStack_34,method_01),
       pGVar7 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0)) {
      pGVar3 = (__this->fields)._source;
      if (pGVar3 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) goto label_0532460a;
      cVar5 = il2cpp_runtime_helper_02d49f70(8,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar3,
                           targetId,iStack_34,(pGVar7->fields).Root,target);
      if (cVar5 != '\0') {
        x = (UnityEngine_Object_o *)*target;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar4;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$SetScrollOffset
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SetScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, float offset, const MethodInfo* method);
// 0x5324280

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SetScrollOffset
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,float offset,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  float fStack_44;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075427f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075427f3 = '\x01';
  }
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy(__this,method);
  pUVar1 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar1 = (__this->fields)._viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar1 = (__this->fields)._content;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (__this->fields)._viewport;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._content;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._content;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              fStack_34 = UVar5.fields.m_Height;
              fStack_44 = UVar6.fields.m_Height;
              fVar4 = 0.0;
              if (0.0 <= fStack_34 - fStack_44) {
                fVar4 = fStack_34 - fStack_44;
              }
              if (offset <= fVar4) {
                fVar4 = offset;
              }
              value.fields.y = (float)(-(uint)(0.0 <= offset) & (uint)fVar4);
              value.fields.x = UVar2.fields.x;
              UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RefreshStatic
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RefreshStatic (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x53237c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532396c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RefreshStatic
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_GameObject_o *item;
  bool bVar4;
  uint uVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar7;
  ulong uVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  int iVar10;
  MethodInfo *method_02;
  long lVar11;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *__this_00;
  
  if (Il2CppMethodInitialized_075427f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427f4 = '\x01';
  }
  pIVar1 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
             ((long)&pIVar3->interfaceType + lVar11) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto label_05323871;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_05323871:
    uVar5 = (*pVVar6->methodPtr)(pIVar1,pVVar6->method);
    if (0 < (int)uVar5) {
      method_02 = (MethodInfo *)0x0;
      method_00 = extraout_RDX;
      do {
        iVar10 = (int)method_02;
        pGVar7 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                           (__this,iVar10,method_00);
        method_00 = extraout_RDX_00;
        if (pGVar7 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
          pGVar7 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot(__this,method_02);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
                    (__this,pGVar7,iVar10,metrics,(MethodInfo *)(ulong)(uint)metrics.fields.PaddingBottom);
          method_00 = extraout_RDX_01;
        }
        method_02 = (MethodInfo *)(ulong)(iVar10 + 1U);
      } while (uVar5 != iVar10 + 1U);
    }
    __this_00 = (__this->fields)._slots;
    if (__this_00 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
      iVar10 = 0;
      do {
        if ((__this_00->fields)._size <= iVar10) {
          GVar9.Start = -1;
          GVar9.End = -1;
          if (uVar5 != 0) {
            GVar9 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)((ulong)(uVar5 - 1) << 0x20)
            ;
          }
          (__this->fields)._range.fields = GVar9;
          return;
        }
        pGVar7 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar10,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           );
        if (pGVar7 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) break;
        if ((int)uVar5 <= (pGVar7->fields).ItemIndex) {
          pIVar1 = (Il2CppObject *)(__this->fields)._source;
          if (pIVar1 == (Il2CppObject *)0x0) break;
          item = (pGVar7->fields).Root;
          pIVar2 = pIVar1->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                   ((long)&pIVar3->interfaceType + lVar11) ==
                  TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
                pVVar6 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar11) + 6);
                goto label_053239a9;
              }
              lVar11 = lVar11 + 0x10;
            } while (uVar8 * 0x10 != lVar11);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar1,(Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,6)
          ;
label_053239a9:
          bVar4 = (*pVVar6->methodPtr)(pIVar1,item,pVVar6->method);
          if (bVar4) {
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind(__this,pGVar7,method_01);
          }
        }
        iVar10 = iVar10 + 1;
        __this_00 = (__this->fields)._slots;
      } while (__this_00 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RecycleOutside
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RecycleOutside (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range, const MethodInfo* method);
// 0x5323b90

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RecycleOutside
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  MethodInfo *method_00;
  int index;
  MethodInfo *method_01;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *__this_00;
  long lVar7;
  int local_38;
  
  if (Il2CppMethodInitialized_075427f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427f5 = '\x01';
  }
  __this_00 = (__this->fields)._slots;
  if (__this_00 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item)
      ;
      if (slot == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) break;
      iVar1 = (slot->fields).ItemIndex;
      if ((-1 < iVar1) && ((iVar1 < range.fields.Start || (local_38 = range.fields.End, local_38 < iVar1)))) {
        obj = (Il2CppObject *)(__this->fields)._source;
        if (obj == (Il2CppObject *)0x0) break;
        method_01 = (MethodInfo *)(slot->fields).Root;
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                 ((long)&pIVar3->interfaceType + lVar7) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 6);
              goto label_05323cc9;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,6);
label_05323cc9:
        bVar4 = (*pVVar5->methodPtr)(obj,(UnityEngine_GameObject_o *)method_01,pVVar5->method);
        if (bVar4) {
          bVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild
                            ((slot->fields).Root,method_01);
          if (!bVar4) {
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind(__this,slot,method_00);
          }
        }
      }
      index = index + 1;
      __this_00 = (__this->fields)._slots;
    } while (__this_00 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$FreeSlot
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5323d30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5323dfc: jmp 0x5323fc9

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t slotIndex;
  uint uVar2;
  UnityEngine_RectTransform_o *parent;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_array *pGVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar10;
  UnityEngine_Object_o *x;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  ulong uVar12;
  int32_t index;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar13;
  long lVar14;
  
  if (Il2CppMethodInitialized_075427f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot);
    Il2CppMethodInitialized_075427f6 = '\x01';
  }
  pSVar13 = (__this->fields)._slots;
  if (pSVar13 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      slotIndex = (pSVar13->fields)._size;
      if (slotIndex <= index) {
        pIVar8 = (Il2CppObject *)(__this->fields)._source;
        if (pIVar8 != (Il2CppObject *)0x0) {
          parent = (__this->fields)._realizedLayer;
          pIVar3 = pIVar8->klass;
          uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar12 == 0) goto label_05323e4f;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar14 = 0;
          goto label_05323e40;
        }
        break;
      }
      pIVar8 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar13,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                         );
      if (pIVar8 == (Il2CppObject *)0x0) break;
      if (*(int *)&pIVar8[1].monitor < 0) {
        pSVar13 = (__this->fields)._slots;
        if (pSVar13 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
          pGVar10 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar13,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                              );
          return pGVar10;
        }
        break;
      }
      index = index + 1;
      pSVar13 = (__this->fields)._slots;
    } while (pSVar13 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
  }
  goto label_05323fc9;
  while (lVar14 = lVar14 + 0x10, uVar12 * 0x10 != lVar14) {
label_05323e40:
    if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
         ((long)&pIVar4->interfaceType + lVar14) ==
        TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
      pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 3);
      goto label_05323e9a;
    }
  }
label_05323e4f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar8,(Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,3);
label_05323e9a:
  x = (UnityEngine_Object_o *)
      (*pVVar9->methodPtr)(pIVar8,(UnityEngine_Transform_o *)parent,slotIndex,pVVar9->method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
  }
  if ((x != (UnityEngine_Object_o *)0x0) &&
     ((pUVar11 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                           ), pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0 ||
      (pUVar11 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                           ), pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0)))) {
    (*(pUVar11->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar11,true,(pUVar11->klass->vtable)._28_set_ignoreLayout.method);
    pGVar10 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot);
    (pGVar10->fields).ItemIndex = -1;
    System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
    (pGVar10->fields).Root = (UnityEngine_GameObject_o *)x;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).Root);
    pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_Add;
    pSVar13 = (__this->fields)._slots;
    if (pSVar13 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
      piVar1 = &(pSVar13->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (pSVar13->fields)._items;
      if (pGVar5 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_array *)0x0) {
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pGVar5->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pGVar5->m_Items[(int)uVar2] = pGVar10;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2);
          return pGVar10;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pGVar10,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        return pGVar10;
      }
    }
  }
label_05323fc9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Bind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* slot, int32_t itemIndex, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x5323fd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53240ef: nop 

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot,int32_t itemIndex,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *rect;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_075427f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427f7 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      (slot->fields).ItemIndex = itemIndex;
      pUVar1 = (slot->fields).Root;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        rect = UnityEngine_GameObject__GetComponent_object_
                         (pUVar1,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
                  (__this,rect,itemIndex,metrics,(MethodInfo *)(ulong)(uint)metrics.fields.PaddingBottom);
        pUVar1 = (slot->fields).Root;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          obj = (Il2CppObject *)(__this->fields)._source;
          if (obj != (Il2CppObject *)0x0) {
            pUVar1 = (slot->fields).Root;
            pIVar2 = obj->klass;
            uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar6 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar7 = 0;
              do {
                if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                     ((long)&pIVar3->interfaceType + lVar7) ==
                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
                  pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 4);
                  goto label_05324125;
                }
                lVar7 = lVar7 + 0x10;
              } while (uVar6 * 0x10 != lVar7);
            }
            pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                               (obj,(Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,4);
label_05324125:
            (*pVVar5->methodPtr)(obj,pUVar1,itemIndex,pVVar5->method);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Unbind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* slot, const MethodInfo* method);
// 0x5324610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53246bc: nop dword ptr [rax]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppObject *obj;
  UnityEngine_GameObject_o *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_075427f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427f8 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      obj = (Il2CppObject *)(__this->fields)._source;
      if (obj != (Il2CppObject *)0x0) {
        pUVar1 = (slot->fields).Root;
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                 ((long)&pIVar3->interfaceType + lVar7) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 5);
              goto label_053246f5;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,5);
label_053246f5:
        (*pVVar5->methodPtr)(obj,pUVar1,pVVar5->method);
        (slot->fields).ItemIndex = -1;
        pUVar1 = (slot->fields).Root;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$UnbindAll
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UnbindAll (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x5323a00

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UnbindAll
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  Il2CppClass *item;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot;
  ulong uVar7;
  MethodInfo *method_00;
  int32_t index;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_075427f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427f9 = '\x01';
  }
  pSVar8 = (__this->fields)._slots;
  if (pSVar8 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((pSVar8->fields)._size <= index) {
        return;
      }
      pIVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar8,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                         );
      if (pIVar4 == (Il2CppObject *)0x0) break;
      if (-1 < *(int *)&pIVar4[1].monitor) {
        pSVar8 = (__this->fields)._slots;
        if (pSVar8 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) break;
        pIVar4 = (Il2CppObject *)(__this->fields)._source;
        pIVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar8,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           );
        if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) break;
        item = pIVar5[1].klass;
        pIVar1 = pIVar4->klass;
        uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_c **)
                 ((long)&pIVar2->interfaceType + lVar9) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
              pVVar6 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar9) + 6);
              goto label_05323b39;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar7 * 0x10 != lVar9);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar4,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,6);
label_05323b39:
        bVar3 = (*pVVar6->methodPtr)(pIVar4,(UnityEngine_GameObject_o *)item,pVVar6->method);
        if (bVar3) {
          pSVar8 = (__this->fields)._slots;
          if (pSVar8 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) break;
          slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar8,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           );
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind(__this,slot,method_00);
        }
      }
      index = index + 1;
      pSVar8 = (__this->fields)._slots;
    } while (pSVar8 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$IsBound
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__IsBound (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x5323d20

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__IsBound
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor(__this,itemIndex,method);
  return pGVar1 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$SlotFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x53243d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5324445: jmp 0x5324471

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar2;
  int32_t index;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar3;
  
  if (Il2CppMethodInitialized_075427fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427fa = '\x01';
  }
  pSVar3 = (__this->fields)._slots;
  if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((pSVar3->fields)._size <= index) {
        return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
      }
      pIVar1 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                         );
      if (pIVar1 == (Il2CppObject *)0x0) break;
      if (*(int *)&pIVar1[1].monitor == itemIndex) {
        pSVar3 = (__this->fields)._slots;
        if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
          pGVar2 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                             );
          return pGVar2;
        }
        break;
      }
      index = index + 1;
      pSVar3 = (__this->fields)._slots;
    } while (pSVar3 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$HasFocusedChild
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5324730

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_075427fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427fb = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_05324865;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if (root != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if (__this != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
label_05324865:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x53248b0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *__this_00;
  
  if (Il2CppMethodInitialized_075427fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot);
    Il2CppMethodInitialized_075427fc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_ctor);
  (__this->fields)._slots = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slots);
  (__this->fields)._scrollSensitivity = 48.0;
  (__this->fields)._lastUiScale = -1.0;
  (__this->fields)._range.fields =
       (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)0xffffffffffffffff;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


