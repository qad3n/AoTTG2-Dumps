// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualScrollRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime.Slot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a2510

void
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot___ctor(Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* __this, UnityEngine_GameObject_o* root, MethodInfo* method)

{
  (__this->fields).ItemIndex = -1;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Root = outer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Root,outer);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureHierarchy
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x18189eec0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_UI_Scrollbar_o *value;
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this_00;
  float fStackX_1c;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184341e9e == '\0') {
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
    Il2CppMethodInitialized_184341e9e = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
  parent = UnityEngine_GameObject__GetComponent_object_
                     (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  if (parent == (UnityEngine_RectTransform_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
    parent = UnityEngine_GameObject__AddComponent_object_
                       (pUVar2,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
  }
  pUVar3 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect)
    ;
    if (pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_ScrollRect);
    }
    (__this->fields)._scroll = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,pUVar3);
  }
  pUVar4 = (__this->fields)._viewport;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       ((UnityEngine_Transform_o *)parent,"Viewport",(MethodInfo *)0x0);
    (__this->fields)._viewport = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._viewport,pUVar4);
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch
              ((__this->fields)._viewport,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._viewport;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar4 = (__this->fields)._viewport;
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar2,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    }
    pUVar4 = (__this->fields)._viewport;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) {
      pUVar4 = (__this->fields)._viewport;
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18189f5c1;
      pUVar5 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_18189f5c1;
    }
    local_48[0].r = 1.0;
    local_48[0].g = 1.0;
    local_48[0].b = 1.0;
    local_48[0].a = 0.0;
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (pUVar5,(UnityEngine_Color_o *)local_48,(pUVar5->klass->vtable)._23_set_color.method);
    (*(pUVar5->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar5,true,(pUVar5->klass->vtable)._25_set_raycastTarget.method);
  }
  pUVar4 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       ((UnityEngine_Transform_o *)(__this->fields)._viewport,"Content",
                        (MethodInfo *)0x0);
    (__this->fields)._content = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._content,pUVar4);
    pUVar4 = (__this->fields)._content;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._content;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_anchorMax
              (pUVar4,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._content;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_pivot(pUVar4,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._content;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar4,(UnityEngine_Vector2_o)(UVar6.fields & 0xffffffff00000000),(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._content;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    fStackX_1c = UVar6.fields.y;
    if (fStackX_1c < 0.0) {
      fStackX_1c = 0.0;
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar4,(UnityEngine_Vector2_o)((ulonglong)(uint)fStackX_1c << 0x20),(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._realizedLayer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       ((UnityEngine_Transform_o *)(__this->fields)._content,"Realized",
                        (MethodInfo *)0x0);
    (__this->fields)._realizedLayer = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._realizedLayer,pUVar4);
    pUVar4 = (__this->fields)._realizedLayer;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._realizedLayer;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_anchorMax
              (pUVar4,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._realizedLayer;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_pivot(pUVar4,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._realizedLayer;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar4,(UnityEngine_Vector2_o)(UVar6.fields & 0xffffffff00000000),(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._realizedLayer;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18189f5c1;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar4,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._scroll;
  if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_viewport(pUVar3,(__this->fields)._viewport,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._scroll;
    if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar4 = (__this->fields)._content;
      (pUVar3->fields).m_Content = pUVar4;
      Il2CppCodeGenWriteBarrier(&(pUVar3->fields).m_Content,pUVar4);
      pUVar3 = (__this->fields)._scroll;
      if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        (pUVar3->fields).m_Horizontal = false;
        pUVar3 = (__this->fields)._scroll;
        if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          (pUVar3->fields).m_Vertical = true;
          pUVar3 = (__this->fields)._scroll;
          value = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbar
                            (__this,(UnityEngine_Transform_o *)parent,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_UI_ScrollRect__set_verticalScrollbar(pUVar3,value,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._scroll;
            if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
              UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility(pUVar3,0,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._scroll;
              if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                (pUVar3->fields).m_MovementType = 2;
                pUVar3 = (__this->fields)._scroll;
                if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                  (pUVar3->fields).m_Elasticity = 0.0;
                  pUVar3 = (__this->fields)._scroll;
                  if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    (pUVar3->fields).m_Inertia = true;
                    pUVar3 = (__this->fields)._scroll;
                    if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      (pUVar3->fields).m_ScrollSensitivity = (__this->fields)._scrollSensitivity;
                      pUVar2 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                        __this_00 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar2,(MethodInfo_6F5650 *)
                                                      MethodInfo_UnityEngine_GameObject_GetComponent_GisketchScrollbarVisibility
                                              );
                        if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0) {
label_18189f593:
                          Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
                                    (__this_00,(__this->fields)._scroll,(MethodInfo *)0x0);
                          return;
                        }
                        pUVar2 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                          __this_00 = UnityEngine_GameObject__AddComponent_object_
                                                (pUVar2,(MethodInfo_6F4D60 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility
                                                );
                          if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0)
                          goto label_18189f593;
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
label_18189f5c1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ApplyContentSize
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyContentSize (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x18189e5c0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyContentSize
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  float fStackX_c;
  float fStackX_14;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_48;
  
  local_48.ItemHeight = (metrics->fields).ItemHeight;
  local_48.Gap = (metrics->fields).Gap;
  local_48.ViewportHeight = (metrics->fields).ViewportHeight;
  local_48.VirtualizationThreshold = (metrics->fields).VirtualizationThreshold;
  local_48.PaddingBottom = (metrics->fields).PaddingBottom;
  local_48.OverscanRows = (metrics->fields).OverscanRows;
  local_48.PaddingLeft = (metrics->fields).PaddingLeft;
  local_48.PaddingRight = (metrics->fields).PaddingRight;
  local_48.PaddingTop = (metrics->fields).PaddingTop;
  fVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight
                    (__this,(Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_48,
                     (MethodInfo *)0x0);
  pUVar1 = (__this->fields)._content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar1,1,fVar4,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._realizedLayer;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar1,1,fVar4,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._realizedLayer;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = UnityEngine_RectTransform__get_offsetMin(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._realizedLayer;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar3 = UnityEngine_RectTransform__get_offsetMax(pUVar1,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._realizedLayer;
          fVar4 = (metrics->fields).PaddingRight;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            fStackX_c = UVar2.fields.y;
            UVar2.fields.y = fStackX_c;
            UVar2.fields.x = (metrics->fields).PaddingLeft;
            UnityEngine_RectTransform__set_offsetMin(pUVar1,UVar2,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._realizedLayer;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              fStackX_14 = UVar3.fields.y;
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar1,(UnityEngine_Vector2_o)(CONCAT44(fStackX_14,fVar4) ^ 0x80000000),
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
// 0x1818a0870

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               UnityEngine_RectTransform_o *rect,int32_t itemIndex,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_78 [2];
  
  if (Il2CppMethodInitialized_184341e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e9f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) &&
     ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0)) {
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_RectTransform__set_anchorMin(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
    ;
    UnityEngine_RectTransform__set_anchorMax(rect,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0)
    ;
    UnityEngine_RectTransform__set_pivot(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (rect,(UnityEngine_Vector2_o)((ulonglong)(uint)(metrics->fields).ItemHeight << 0x20),
               (MethodInfo *)0x0);
    local_78[0].ItemHeight = (metrics->fields).ItemHeight;
    local_78[0].Gap = (metrics->fields).Gap;
    local_78[0].ViewportHeight = (metrics->fields).ViewportHeight;
    local_78[0].VirtualizationThreshold = (metrics->fields).VirtualizationThreshold;
    local_78[0].PaddingBottom = (metrics->fields).PaddingBottom;
    local_78[0].OverscanRows = (metrics->fields).OverscanRows;
    local_78[0].PaddingLeft = (metrics->fields).PaddingLeft;
    local_78[0].PaddingRight = (metrics->fields).PaddingRight;
    local_78[0].PaddingTop = (metrics->fields).PaddingTop;
    fVar2 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset
                      (__this,itemIndex,
                       (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)local_78,
                       (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (rect,(UnityEngine_Vector2_o)((ulonglong)(uint)-fVar2 << 0x20),(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$PositionAll
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__PositionAll (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x1818a0700
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a077a: nop word ptr [rax + rax]
// asm:   0x1818a0836: jmp 0x1818a0780

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__PositionAll
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar1;
  Il2CppClass *x;
  bool bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_RectTransform_o *rect;
  int index;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_48;
  
  if (Il2CppMethodInitialized_184341ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ea0 = '\x01';
  }
  index = 0;
  pSVar1 = (__this->fields)._slots;
  while (pSVar1 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    pSVar1 = (__this->fields)._slots;
    if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
       (pIVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           ), pIVar3 == (Il2CppObject *)0x0)) break;
    if (-1 < *(int *)&pIVar3[1].monitor) {
      x = pIVar3[1].klass;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) break;
        rect = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)pIVar3[1].klass,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        local_48.ItemHeight = (metrics->fields).ItemHeight;
        local_48.Gap = (metrics->fields).Gap;
        local_48.ViewportHeight = (metrics->fields).ViewportHeight;
        local_48.VirtualizationThreshold = (metrics->fields).VirtualizationThreshold;
        local_48.PaddingBottom = (metrics->fields).PaddingBottom;
        local_48.OverscanRows = (metrics->fields).OverscanRows;
        local_48.PaddingLeft = (metrics->fields).PaddingLeft;
        local_48.PaddingRight = (metrics->fields).PaddingRight;
        local_48.PaddingTop = (metrics->fields).PaddingTop;
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
                  (__this,rect,*(int32_t *)&pIVar3[1].monitor,
                   (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_48,
                   (MethodInfo *)0x0);
      }
    }
    index = index + 1;
    pSVar1 = (__this->fields)._slots;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ScrollOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a17d0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fVar6;
  float fStackX_c;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_184341ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341ea1 = '\x01';
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
        pUVar3 = UnityEngine_RectTransform__get_rect(local_28,pUVar1,(MethodInfo *)0x0);
        fVar6 = (pUVar3->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (__this->fields)._viewport;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar3 = UnityEngine_RectTransform__get_rect(local_28,pUVar1,(MethodInfo *)0x0);
          fVar6 = fVar6 - (pUVar3->fields).m_Height;
          pUVar1 = (__this->fields)._content;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
            fStackX_c = UVar4.fields.y;
            fVar5 = 0.0;
            if (0.0 <= fStackX_c) {
              if (0.0 <= fVar6) {
                fVar5 = fVar6;
              }
              if (fStackX_c <= fVar5) {
                fVar5 = fStackX_c;
              }
            }
            return fVar5;
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
// 0x1818a2250

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ViewportHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_Rect_o *pUVar4;
  longlong lVar5;
  UnityEngine_Rect_o local_68;
  undefined1 local_58 [80];
  
  if (Il2CppMethodInitialized_184341ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341ea2 = '\x01';
  }
  pUVar2 = (__this->fields)._viewport;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
label_1818a235f:
    if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
      return 1.0;
    }
    lVar5 = il2cpp_runtime_helper_18022f8d0(local_58,1,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                          (__this->fields)._source);
    return *(float *)(lVar5 + 8);
  }
  pUVar2 = (__this->fields)._viewport;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4 = UnityEngine_RectTransform__get_rect(&local_68,pUVar2,(MethodInfo *)0x0);
    fVar1 = (pUVar4->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (fVar1 <= 1.0) goto label_1818a235f;
    pUVar2 = (__this->fields)._viewport;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar4 = UnityEngine_RectTransform__get_rect(&local_68,pUVar2,(MethodInfo *)0x0);
      fVar1 = (pUVar4->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor != 0) {
        return fVar1;
      }
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ContentHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x18189ead0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189eb74: movaps xmm6, xmm0
// asm:   0x18189eba9: xorps xmm7, xmm7
// asm:   0x18189ebac: nop dword ptr [rax]
// asm:   0x18189ec39: nop dword ptr [rax]
// asm:   0x18189ec86: jmp 0x18189ebb0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int iVar4;
  void *pvVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  ushort uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_184341ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    Il2CppMethodInitialized_184341ea3 = '\x01';
  }
  pIVar6 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar6 != (Il2CppObject *)0x0) {
    pvVar5 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pIVar6);
    iVar9 = (int)pvVar5;
    fVar11 = (metrics->fields).PaddingTop;
    if ((-1 < iVar9) && (iVar9 != 0)) {
      iVar4 = 0;
      if (-1 < iVar9 + -1) {
        iVar4 = iVar9 + -1;
      }
      fVar11 = (float)iVar9 * (metrics->fields).ItemHeight + fVar11 + (float)iVar4 * (metrics->fields).Gap;
    }
    fVar11 = fVar11 + (metrics->fields).PaddingBottom;
    pIVar6 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)(__this->fields)._source,
                        (Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    if (pIVar6 == (Il2CppObject *)0x0) {
      return fVar11;
    }
    iVar9 = 0;
    obj = (Il2CppObject *)(__this->fields)._source;
    while (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar8 = 0;
        do {
          if (pIVar3[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
            pVVar7 = pIVar2->vtable + pIVar3[uVar8].offset;
            goto label_18189ec06;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_18189ec06:
      iVar4 = (*pVVar7->methodPtr)(obj,pVVar7->method);
      if (iVar4 <= iVar9) {
        return fVar11;
      }
      pIVar2 = pIVar6->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar8 = 0;
        do {
          if (pIVar3[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource) {
            pVVar7 = pIVar2->vtable + pIVar3[uVar8].offset;
            goto label_18189ec62;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource
                          ,0);
label_18189ec62:
      fVar10 = (*pVVar7->methodPtr)(pIVar6,iVar9,pVVar7->method);
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + fVar10;
      iVar9 = iVar9 + 1;
      obj = (Il2CppObject *)(__this->fields)._source;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ItemOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x1818a02c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a034f: xorps xmm7, xmm7

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  Il2CppObject *obj_00;
  VirtualInvokeData *pVVar5;
  ushort uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184341ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    Il2CppMethodInitialized_184341ea4 = '\x01';
  }
  iVar7 = 0;
  if (-1 < itemIndex) {
    iVar7 = itemIndex;
  }
  fVar9 = ((metrics->fields).Gap + (metrics->fields).ItemHeight) * (float)iVar7 + (metrics->fields).PaddingTop
  ;
  obj_00 = il2cpp_vm_Object_IsInst
                     ((Il2CppObject *)(__this->fields)._source,
                      (Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
  if (obj_00 == (Il2CppObject *)0x0) {
    return fVar9;
  }
  iVar7 = 0;
  if (-1 < itemIndex) {
    do {
      obj = (Il2CppObject *)(__this->fields)._source;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar6 = 0;
        do {
          if (pIVar3[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar6].offset;
            goto label_1818a03b6;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,0);
label_1818a03b6:
      iVar4 = (*pVVar5->methodPtr)(obj,pVVar5->method);
      if (iVar4 <= iVar7) {
        return fVar9;
      }
      pIVar2 = obj_00->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar6 = 0;
        do {
          if (pIVar3[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar6].offset;
            goto label_1818a0412;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj_00,(Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource
                          ,0);
label_1818a0412:
      fVar8 = (*pVVar5->methodPtr)(obj_00,iVar7,pVVar5->method);
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      iVar7 = iVar7 + 1;
      fVar9 = fVar9 + fVar8;
    } while (iVar7 <= itemIndex);
  }
  return fVar9;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RangeFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RangeFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, float offset, float viewportHeight, const MethodInfo* method);
// 0x1818a09b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a0a77: movaps xmm0, xmm9
// asm:   0x1818a0b32: jmp 0x1818a0b37
// asm:   0x1818a0b34: mov r15d, edi
// asm:   0x1818a0b48: jmp 0x1818a0ab4

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RangeFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,float offset,
          float viewportHeight,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields local_res8;
  
  if (Il2CppMethodInitialized_184341ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
    Il2CppMethodInitialized_184341ea5 = '\x01';
  }
  pIVar2 = il2cpp_vm_Object_IsInst
                     ((Il2CppObject *)(__this->fields)._source,
                      (Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource);
  pIVar4 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar4 == (Il2CppObject *)0x0) {
label_1818a0c2c:
    ThrowNullReferenceException();
  }
  pvVar3 = InterfaceInvoker0_Invoke
                     (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                      pIVar4);
  if (pIVar2 == (Il2CppObject *)0x0) {
    local_res8 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
                 Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__RangeFor
                           (metrics,(int)pvVar3,offset,viewportHeight,(MethodInfo *)0x0);
  }
  else {
    if ((int)pvVar3 != 0) {
      fVar8 = offset;
      if (offset < 0.0) {
        fVar8 = 0.0;
      }
      fVar11 = 1.0;
      if (1.0 <= viewportHeight) {
        fVar11 = viewportHeight;
      }
      pIVar4 = (Il2CppObject *)(__this->fields)._source;
      if (pIVar4 != (Il2CppObject *)0x0) {
        iVar5 = -1;
        iVar7 = 0;
        iVar6 = -1;
        fVar10 = 0.0;
        do {
          pvVar3 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pIVar4)
          ;
          if ((int)pvVar3 <= iVar7) {
            if (iVar5 < 0) {
              pIVar4 = (Il2CppObject *)(__this->fields)._source;
              if (pIVar4 == (Il2CppObject *)0x0) break;
              pvVar3 = InterfaceInvoker0_Invoke
                                 (0,(Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                                  pIVar4);
              iVar5 = (int)pvVar3 + -1;
            }
label_1818a0b6f:
            if (iVar6 < iVar5) {
              iVar6 = iVar5;
            }
            iVar5 = iVar5 - (metrics->fields).OverscanRows;
            local_res8.Start = 0;
            if (-1 < iVar5) {
              local_res8.Start = iVar5;
            }
            pIVar4 = (Il2CppObject *)(__this->fields)._source;
            if (pIVar4 != (Il2CppObject *)0x0) {
              iVar6 = (metrics->fields).OverscanRows + iVar6;
              pvVar3 = InterfaceInvoker0_Invoke
                                 (0,(Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                                  pIVar4);
              local_res8.End = (int)pvVar3 + -1;
              if (iVar6 <= local_res8.End) {
                local_res8.End = iVar6;
              }
              return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)local_res8;
            }
            break;
          }
          fVar9 = (float)il2cpp_runtime_helper_1800be210(0,
                                       TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSpacingSource
                                       ,pIVar2,iVar7);
          if (fVar9 < 0.0) {
            fVar9 = 0.0;
          }
          fVar10 = fVar10 + fVar9;
          iVar1 = 0;
          if (-1 < iVar7) {
            iVar1 = iVar7;
          }
          fVar9 = ((metrics->fields).Gap + (metrics->fields).ItemHeight) * (float)iVar1 +
                  (metrics->fields).PaddingTop + fVar10;
          if ((iVar5 < 0) && (offset <= fVar9 + (metrics->fields).ItemHeight)) {
            iVar5 = iVar7;
          }
          iVar1 = iVar7;
          if ((fVar11 + fVar8 < fVar9) && (iVar1 = iVar6, -1 < iVar5)) goto label_1818a0b6f;
          iVar6 = iVar1;
          pIVar4 = (Il2CppObject *)(__this->fields)._source;
          iVar7 = iVar7 + 1;
        } while (pIVar4 != (Il2CppObject *)0x0);
      }
      goto label_1818a0c2c;
    }
    local_res8.Start = -1;
    local_res8.End = -1;
  }
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)local_res8;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EffectiveMetrics
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x18189ecf0

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_a8 [160];
  
  if (Il2CppMethodInitialized_184341ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_184341ea6 = '\x01';
  }
  if ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    pfVar8 = (float *)il2cpp_runtime_helper_18022f8d0(local_a8,1,
                                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    fVar12 = *pfVar8;
    fVar1 = pfVar8[1];
    fVar2 = pfVar8[2];
    fVar9 = pfVar8[3];
    fVar7 = pfVar8[4];
    fVar3 = pfVar8[5];
    fVar4 = pfVar8[6];
    fVar5 = pfVar8[7];
    fVar6 = pfVar8[8];
    fVar10 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale(__this,(MethodInfo *)0x0);
    fVar11 = 1.0;
    if (1.0 <= fVar12) {
      fVar11 = fVar12;
    }
    (__return_storage_ptr__->fields).ItemHeight = fVar11;
    fVar12 = 0.0;
    if (0.0 <= fVar1) {
      fVar12 = fVar1;
    }
    (__return_storage_ptr__->fields).Gap = fVar12;
    fVar12 = 1.0;
    if (1.0 <= fVar2) {
      fVar12 = fVar2;
    }
    if ((int)fVar9 < 1) {
      fVar9 = 1.4013e-45;
    }
    (__return_storage_ptr__->fields).ViewportHeight = fVar12;
    (__return_storage_ptr__->fields).VirtualizationThreshold = (int32_t)fVar9;
    fVar12 = 0.0;
    if (-1 < (int)fVar7) {
      fVar12 = fVar7;
    }
    (__return_storage_ptr__->fields).OverscanRows = (int32_t)fVar12;
    fVar12 = 0.0;
    if (0.0 <= fVar3 / fVar10) {
      fVar12 = fVar3 / fVar10;
    }
    (__return_storage_ptr__->fields).PaddingLeft = fVar12;
    fVar12 = 0.0;
    if (0.0 <= fVar4 / fVar10) {
      fVar12 = fVar4 / fVar10;
    }
    (__return_storage_ptr__->fields).PaddingRight = fVar12;
    fVar12 = 0.0;
    if (0.0 <= fVar5 / fVar10) {
      fVar12 = fVar5 / fVar10;
    }
    (__return_storage_ptr__->fields).PaddingTop = fVar12;
    fVar12 = 0.0;
    if (0.0 <= fVar6 / fVar10) {
      fVar12 = fVar6 / fVar10;
    }
    (__return_storage_ptr__->fields).PaddingBottom = fVar12;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$UiScale
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a1f80

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184341ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ea7 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      if (Il2CppMethodInitialized_184341e6d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
        Il2CppMethodInitialized_184341e6d = '\x01';
      }
      fVar3 = (x->fields)._scale;
      if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
      }
      fVar2 = Gisketch_Aottg2UI_AottgUiScale__AppliedValue(fVar3,(MethodInfo *)0x0);
      fVar3 = 0.001;
      if (0.001 <= fVar2) {
        fVar3 = fVar2;
      }
      return fVar3;
    }
    ThrowNullReferenceException();
  }
  return 1.0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$FindOrCreateChild
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x18189fcc0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  
  if (Il2CppMethodInitialized_184341ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184341ea8 = '\x01';
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
        pUVar5 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_18189fea1;
          pUVar5 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar4,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
        }
        return pUVar5;
      }
    }
    else {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((obj != (System_Type_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items,obj);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar4,name,components,(MethodInfo *)0x0);
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar2 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar4,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          return pUVar5;
        }
      }
    }
  }
label_18189fea1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureScrollbar
// il2cpp: UnityEngine_UI_Scrollbar_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbar (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x18189f6b0

UnityEngine_UI_Scrollbar_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbar
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
          UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar6;
  UnityEngine_GameObject_o *go;
  UnityEngine_UI_Scrollbar_o *pUVar7;
  UnityEngine_UI_Image_o *value_00;
  float fVar8;
  UnityEngine_Color_Fields local_88;
  UnityEngine_UI_Navigation_Fields local_78 [2];
  
  if (Il2CppMethodInitialized_184341ea9 == '\0') {
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
    Il2CppMethodInitialized_184341ea9 = '\x01';
  }
  pUVar7 = (__this->fields)._scrollbar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (__this->fields)._scrollbar;
  }
  if (parent == (UnityEngine_Transform_o *)0x0) goto label_18189fcab;
  pUVar3 = UnityEngine_Transform__Find(parent,"AoTTG Virtual Scrollbar",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_18189fcab;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
  }
  else {
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_18189fcab;
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Virtual Scrollbar",components,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18189fcab;
  if (bVar2) {
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_18189fcab;
    UnityEngine_Transform__SetParent_2f5a7e0(pUVar3,parent,false,(MethodInfo *)0x0);
  }
  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                     (__this_00,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (Il2CppMethodInitialized_184341eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184341eab = '\x01';
  }
  if ((__this->fields)._theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
label_18189f9a2:
    fVar8 = 12.0;
  }
  else {
    pGVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                       ((__this->fields)._theme,"scrollbar",(MethodInfo *)0x0);
    if ((pGVar6 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
       ((pGVar6->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0)) goto label_18189f9a2;
    bVar2 = System_String__Equals_196c550
                      ((((pGVar6->fields).width)->fields).unit,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_18189f9a2;
    pGVar1 = (pGVar6->fields).width;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_18189fcab;
    fVar8 = (pGVar1->fields).value;
    if (fVar8 < 1.0) {
      fVar8 = 1.0;
    }
  }
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin(pUVar5,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (pUVar5,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(pUVar5,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
    value.fields.y = 0.0;
    value.fields.x = -fVar8;
    UnityEngine_RectTransform__set_offsetMin(pUVar5,value,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (pUVar5,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    local_88.r = 0.04;
    local_88.g = 0.04;
    local_88.b = 0.05;
    local_88.a = 0.72;
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
              (__this,__this_00,"scrollbar",(UnityEngine_Color_o *)&local_88,false,(MethodInfo *)0x0
              );
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341eaa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"scrollbarThumb");
      il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar Sliding Area");
      il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar Thumb");
      Il2CppMethodInitialized_184341eaa = '\x01';
    }
    pUVar5 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       (pUVar3,"AoTTG Virtual Scrollbar Sliding Area",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                       ((UnityEngine_Transform_o *)pUVar5,"AoTTG Virtual Scrollbar Thumb",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(pUVar5,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      local_88.r = 0.86;
      local_88.g = 0.78;
      local_88.b = 0.58;
      local_88.a = 0.95;
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
                (__this,go,"scrollbarThumb",(UnityEngine_Color_o *)&local_88,true,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Scrollbar);
      if (pUVar7 == (UnityEngine_UI_Scrollbar_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
      }
      (__this->fields)._scrollbar = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollbar,pUVar7);
      pUVar7 = (__this->fields)._scrollbar;
      if (pUVar7 != (UnityEngine_UI_Scrollbar_o *)0x0) {
        UnityEngine_UI_Scrollbar__set_direction(pUVar7,2,(MethodInfo *)0x0);
        pUVar7 = (__this->fields)._scrollbar;
        if (pUVar7 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          UnityEngine_UI_Scrollbar__set_handleRect(pUVar7,pUVar5,(MethodInfo *)0x0);
          pUVar7 = (__this->fields)._scrollbar;
          value_00 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar5,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          if (pUVar7 != (UnityEngine_UI_Scrollbar_o *)0x0) {
            UnityEngine_UI_Selectable__set_targetGraphic
                      ((UnityEngine_UI_Selectable_o *)pUVar7,(UnityEngine_UI_Graphic_o *)value_00,
                       (MethodInfo *)0x0);
            pUVar7 = (__this->fields)._scrollbar;
            if (pUVar7 != (UnityEngine_UI_Scrollbar_o *)0x0) {
              UnityEngine_UI_Selectable__set_transition
                        ((UnityEngine_UI_Selectable_o *)pUVar7,0,(MethodInfo *)0x0);
              pUVar7 = (__this->fields)._scrollbar;
              if (pUVar7 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                local_78[0].m_Mode = 0;
                local_78[0].m_WrapAround = false;
                local_78[0]._5_3_ = 0;
                local_78[0].m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
                local_78[0].m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
                local_78[0].m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
                local_78[0].m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
                UnityEngine_UI_Selectable__set_navigation
                          ((UnityEngine_UI_Selectable_o *)pUVar7,(UnityEngine_UI_Navigation_o *)local_78,
                           (MethodInfo *)0x0);
                return (__this->fields)._scrollbar;
              }
            }
          }
        }
      }
    }
  }
label_18189fcab:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureScrollbarThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbarThumb (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_Transform_o* track, const MethodInfo* method);
// 0x18189f5d0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureScrollbarThumb
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
          UnityEngine_Transform_o *track,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_GameObject_o *go;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184341eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbarThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar Sliding Area");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Virtual Scrollbar Thumb");
    Il2CppMethodInitialized_184341eaa = '\x01';
  }
  pUVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                     (track,"AoTTG Virtual Scrollbar Sliding Area",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(pUVar1,(MethodInfo *)0x0);
  pUVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FindOrCreateChild
                     ((UnityEngine_Transform_o *)pUVar1,"AoTTG Virtual Scrollbar Thumb",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch(pUVar1,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    local_18.r = 0.86;
    local_18.g = 0.78;
    local_18.b = 0.58;
    local_18.a = 0.95;
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
              (__this,go,"scrollbarThumb",(UnityEngine_Color_o *)&local_18,true,(MethodInfo *)0x0);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ScrollbarWidth
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollbarWidth (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a1910

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollbarWidth
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184341eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184341eab = '\x01';
  }
  if ((__this->fields)._theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                       ((__this->fields)._theme,"scrollbar",(MethodInfo *)0x0);
    if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       ((pGVar4->fields).width != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0)) {
      bVar3 = System_String__Equals_196c550
                        ((((pGVar4->fields).width)->fields).unit,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        pGVar2 = (pGVar4->fields).width;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          fVar1 = (pGVar2->fields).value;
          fVar5 = 1.0;
          if (1.0 <= fVar1) {
            fVar5 = fVar1;
          }
          return fVar5;
        }
        ThrowNullReferenceException();
      }
    }
  }
  return 12.0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ApplyStyleImage
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, UnityEngine_GameObject_o* go, System_String_o* styleName, UnityEngine_Color_o fallback, bool reliefGradient, const MethodInfo* method);
// 0x18189e6d0
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189e90a: mov qword ptr [rsp + 0x30], 0
// asm:   0x18189e913: test ebp, ebp
// asm:   0x18189e915: mov byte ptr [rsp + 0x28], 0
// asm:   0x18189e91a: mov r9, rbx
// asm:   0x18189e91d: setne dl
// asm:   0x18189e920: mov byte ptr [rsp + 0x20], 0
// asm:   0x18189e925: movzx r8d, r14b
// asm:   0x18189e929: movaps xmm0, xmm6
// asm:   0x18189e92c: call 0x18188bda0  ; Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance()
// asm:   0x18189e931: mov r9, qword ptr [rdi]
// asm:   0x18189e934: mov rdx, rax
// asm:   0x18189e937: mov rcx, rdi
// asm:   0x18189e93a: mov r8, qword ptr [r9 + 0x350]
// asm:   0x18189e941: call qword ptr [r9 + 0x348]  ; vtable slot 33
// asm:   0x18189e948: jmp 0x18189e8b7
// asm:   0x18189e973: mov rax, qword ptr [rdi]
// asm:   0x18189e976: xor edx, edx
// asm:   0x18189e978: mov rcx, rdi
// asm:   0x18189e97b: mov r8, qword ptr [rax + 0x350]
// asm:   0x18189e982: call qword ptr [rax + 0x348]  ; vtable slot 33
// asm:   0x18189e988: jmp 0x18189e8bc

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ApplyStyleImage
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               UnityEngine_GameObject_o *go,System_String_o *styleName,UnityEngine_Color_o *fallback,
               bool reliefGradient,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  System_Nullable_float__Fields stainScaleOverride;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  UnityEngine_UI_Image_o *pUVar6;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar7;
  UnityEngine_Material_o *pUVar8;
  char cVar9;
  System_String_o *value;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184341eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    Il2CppMethodInitialized_184341eac = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_18189e98d;
  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  }
  if ((__this->fields)._theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_18189e98d;
    local_38[0].DefaultActionCategories = (int32_t)(fallback->fields).r;
    local_38[0].DefaultActionAtTargetCategories = (int32_t)(fallback->fields).g;
    local_38[0].HandleEventTrickleDownCategories = (int32_t)(fallback->fields).b;
    local_38[0].HandleEventBubbleUpCategories = (int32_t)(fallback->fields).a;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
              (pUVar6,(UnityEngine_Color_o *)local_38,(pUVar6->klass->vtable)._23_set_color.method);
    goto label_18189e973;
  }
  pGVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                     ((__this->fields)._theme,styleName,(MethodInfo *)0x0);
  pGVar2 = (__this->fields)._theme;
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = (pGVar7->fields).background;
  }
  if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_18189e98d;
  if (Il2CppMethodInitialized_184341f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_TryGetValue);
    Il2CppMethodInitialized_184341f2f = '\x01';
  }
  local_38[0].DefaultActionCategories = 0;
  local_38[0].DefaultActionAtTargetCategories = 0;
  local_38[0].HandleEventTrickleDownCategories = 0;
  local_38[0].HandleEventBubbleUpCategories = 0;
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar3) {
label_18189e818:
    fVar13 = (fallback->fields).r;
    fVar10 = (fallback->fields).g;
    fVar11 = (fallback->fields).b;
    fVar12 = (fallback->fields).a;
  }
  else {
    __this_00 = (pGVar2->fields)._colors;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)value,
                       (UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o *)local_38
                       ,(MethodInfo_1461A40 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Color_TryGetValue);
    if (!bVar3) goto label_18189e818;
    fVar13 = (float)local_38[0].DefaultActionCategories;
    fVar10 = (float)local_38[0].DefaultActionAtTargetCategories;
    fVar11 = (float)local_38[0].HandleEventTrickleDownCategories;
    fVar12 = (float)local_38[0].HandleEventBubbleUpCategories;
  }
  if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
    local_38[0].DefaultActionAtTargetCategories = (int32_t)fVar10;
    local_38[0].DefaultActionCategories = (int32_t)fVar13;
    local_38[0].HandleEventBubbleUpCategories = (int32_t)fVar12;
    local_38[0].HandleEventTrickleDownCategories = (int32_t)fVar11;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
              (pUVar6,(UnityEngine_Color_o *)local_38,(pUVar6->klass->vtable)._23_set_color.method);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_18189e973:
      (*(pUVar6->klass->vtable)._33_set_material.methodPtr)
                (pUVar6,(UnityEngine_Material_o *)0x0,(pUVar6->klass->vtable)._33_set_material.method);
      return;
    }
    pGVar2 = (__this->fields)._theme;
    if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      cVar9 = '\x01';
      SVar1 = (pGVar7->fields).worn.fields;
      fVar13 = (pGVar2->fields)._ReliefIntensity_k__BackingField * (pGVar7->fields).relief.fields.value;
      if (SVar1.hasValue == false) {
        uVar5 = 1;
      }
      else {
        uVar5 = (ushort)SVar1 >> 8;
      }
      cVar4 = il2cpp_runtime_helper_180562af0(fVar13,0,0);
      if ((cVar4 != '\0') && (uVar5 == 0)) {
        (*(pUVar6->klass->vtable)._33_set_material.methodPtr)
                  (pUVar6,(UnityEngine_Material_o *)0x0,(pUVar6->klass->vtable)._33_set_material.method);
        return;
      }
      if (!reliefGradient) {
        cVar9 = (pGVar7->fields).reliefGradient.fields.value;
      }
      stainScaleOverride = (pGVar7->fields).wornStainScale.fields;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      pUVar8 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                         (fVar13,cVar9 != '\0',uVar5 != 0,(System_Nullable_float__o)stainScaleOverride,false,
                          false,(MethodInfo *)0x0);
      (*(pUVar6->klass->vtable)._33_set_material.methodPtr)
                (pUVar6,pUVar8,(pUVar6->klass->vtable)._33_set_material.method);
      return;
    }
  }
label_18189e98d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1818a1c50

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ead = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMin
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_ScrollRect
// il2cpp: UnityEngine_UI_ScrollRect_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_ScrollRect (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1805853f0

UnityEngine_UI_ScrollRect_o*
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_ScrollRect(Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, MethodInfo* method)

{
  return (__this->fields)._scroll;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_CurrentScrollOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a2440

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset
                    (__this,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_CurrentRange
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentRange (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x18058a6f0

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentRange(Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields)._range.fields.Value;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_LiveItemCount
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_LiveItemCount (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a24d0

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_LiveItemCount
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar1;
  
  if (Il2CppMethodInitialized_184341eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    Il2CppMethodInitialized_184341eae = '\x01';
  }
  pSVar1 = (__this->fields)._slots;
  if (pSVar1 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_IsVirtualized
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_IsVirtualized (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a2450

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_IsVirtualized
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  longlong lVar2;
  void *pvVar3;
  undefined1 local_38 [48];
  
  if (Il2CppMethodInitialized_184341eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_184341eaf = '\x01';
  }
  if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    return false;
  }
  lVar2 = il2cpp_runtime_helper_18022f8d0(local_38,1,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                        (__this->fields)._source);
  obj = (Il2CppObject *)(__this->fields)._source;
  if (obj != (Il2CppObject *)0x0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    pvVar3 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,obj);
    return iVar1 <= (int)pvVar3;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Setup (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o* source, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, float scrollSensitivity, const MethodInfo* method);
// 0x1818a1b20

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Setup
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *source,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,float scrollSensitivity,MethodInfo *method)

{
  float fVar1;
  
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source,source);
  (__this->fields)._theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._theme,theme);
  fVar1 = 1.0;
  if (1.0 <= scrollSensitivity) {
    fVar1 = scrollSensitivity;
  }
  (__this->fields)._scrollSensitivity = fVar1;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(__this,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__LateUpdate (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a04a0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__LateUpdate
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  if ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(__this,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, bool force, const MethodInfo* method);
// 0x1818a0f10
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a12ce: nop 
// asm:   0x1818a1385: jmp 0x1818a12d0
// asm:   0x1818a13e9: nop dword ptr [rax]
// asm:   0x1818a1488: jmp 0x1818a17c1
// asm:   0x1818a1495: nop word ptr [rax + rax]
// asm:   0x1818a159a: nop word ptr [rax + rax]
// asm:   0x1818a165a: jmp 0x1818a17c1
// asm:   0x1818a16b9: nop dword ptr [rax]
// asm:   0x1818a171e: nop 
// asm:   0x1818a178e: jmp 0x1818a17c1
// asm:   0x1818a1795: mov qword ptr [rbp + 0x30], 0xffffffffffffffff
// asm:   0x1818a179d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x1818a17a1: mov qword ptr [rdi + 0x68], rax
// asm:   0x1818a17a5: jmp 0x1818a14f2
// asm:   0x1818a17aa: lea eax, [r15 - 1]
// asm:   0x1818a17ae: mov dword ptr [rbp + 0x30], esi
// asm:   0x1818a17b1: mov dword ptr [rbp + 0x34], eax
// asm:   0x1818a17b4: mov rax, qword ptr [rbp + 0x30]
// asm:   0x1818a17b8: mov qword ptr [rdi + 0x68], rax
// asm:   0x1818a17bc: jmp 0x1818a14f2

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,bool force,
               MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar2;
  Il2CppClass *x;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar3;
  int32_t iVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *pGVar15;
  UnityEngine_Vector2_o UVar16;
  UnityEngine_Vector2_o UVar17;
  longlong lVar18;
  void *pvVar19;
  UnityEngine_Rect_o *pUVar20;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar21;
  Il2CppObject *pIVar22;
  UnityEngine_RectTransform_o *pUVar23;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float viewportHeight;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields local_res8;
  float fStackX_24;
  UnityEngine_Rect_o local_f8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_e8;
  undefined1 local_b8 [16];
  int32_t local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy(__this,(MethodInfo *)0x0);
  pGVar15 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics
                      ((Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_e8,__this,
                       (MethodInfo *)0x0);
  iVar4 = (pGVar15->fields).OverscanRows;
  fVar5 = (pGVar15->fields).PaddingLeft;
  fVar6 = (pGVar15->fields).PaddingRight;
  fStack_9c = (pGVar15->fields).PaddingTop;
  fStack_98 = (pGVar15->fields).PaddingBottom;
  uVar12._0_4_ = (pGVar15->fields).PaddingTop;
  uVar12._4_4_ = (pGVar15->fields).PaddingBottom;
  uVar11._0_4_ = (pGVar15->fields).PaddingTop;
  uVar11._4_4_ = (pGVar15->fields).PaddingBottom;
  uVar10._0_4_ = (pGVar15->fields).PaddingTop;
  uVar10._4_4_ = (pGVar15->fields).PaddingBottom;
  uVar9._0_4_ = (pGVar15->fields).PaddingTop;
  uVar9._4_4_ = (pGVar15->fields).PaddingBottom;
  uVar7._0_4_ = (pGVar15->fields).ItemHeight;
  uVar7._4_4_ = (pGVar15->fields).Gap;
  uVar8._0_4_ = (pGVar15->fields).ViewportHeight;
  uVar8._4_4_ = (pGVar15->fields).VirtualizationThreshold;
  local_a8 = iVar4;
  fStack_a4 = fVar5;
  fStack_a0 = fVar6;
  fVar30 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UiScale(__this,(MethodInfo *)0x0);
  cVar13 = il2cpp_runtime_helper_180562af0(fVar30,(__this->fields)._lastUiScale);
  (__this->fields)._lastUiScale = fVar30;
  local_e8.PaddingBottom = fStack_98;
  local_e8.PaddingTop = fStack_9c;
  local_e8._0_8_ = uVar7;
  local_e8._8_8_ = uVar8;
  local_e8.OverscanRows = iVar4;
  local_e8.PaddingLeft = fVar5;
  local_e8.PaddingRight = fVar6;
  fVar30 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ContentHeight
                     (__this,(Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_e8,
                      (MethodInfo *)0x0);
  pUVar23 = (__this->fields)._content;
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar23,1,fVar30,(MethodInfo *)0x0);
  pUVar23 = (__this->fields)._realizedLayer;
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar23,1,fVar30,(MethodInfo *)0x0);
  pUVar23 = (__this->fields)._realizedLayer;
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
  UVar16 = UnityEngine_RectTransform__get_offsetMin(pUVar23,(MethodInfo *)0x0);
  pUVar23 = (__this->fields)._realizedLayer;
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
  UVar17 = UnityEngine_RectTransform__get_offsetMax(pUVar23,(MethodInfo *)0x0);
  pUVar23 = (__this->fields)._realizedLayer;
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
  local_res8.End = (int32_t)UVar16.fields.y;
  UVar16.fields.y = (float)local_res8.End;
  UVar16.fields.x = fVar5;
  UnityEngine_RectTransform__set_offsetMin(pUVar23,UVar16,(MethodInfo *)0x0);
  pUVar23 = (__this->fields)._realizedLayer;
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
  fStackX_24 = UVar17.fields.y;
  UnityEngine_RectTransform__set_offsetMax
            (pUVar23,(UnityEngine_Vector2_o)(CONCAT44(fStackX_24,fVar6) ^ 0x80000000),(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184341eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_184341eaf = '\x01';
  }
  if ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
    lVar18 = il2cpp_runtime_helper_18022f8d0(local_b8,1,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                           (__this->fields)._source);
    pIVar22 = (Il2CppObject *)(__this->fields)._source;
    if (pIVar22 == (Il2CppObject *)0x0) goto label_1818a17c1;
    iVar29 = *(int *)(lVar18 + 0xc);
    pvVar19 = InterfaceInvoker0_Invoke
                        (0,(Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pIVar22);
    if (iVar29 <= (int)pvVar19) {
      fVar30 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ScrollOffset
                         (__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341ea2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
        Il2CppMethodInitialized_184341ea2 = '\x01';
      }
      pUVar23 = (__this->fields)._viewport;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      viewportHeight = 1.0;
      if (bVar14) {
        pUVar23 = (__this->fields)._viewport;
        if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
        pUVar20 = UnityEngine_RectTransform__get_rect(&local_f8,pUVar23,(MethodInfo *)0x0);
        fVar1 = (pUVar20->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fVar1 <= 1.0) goto label_1818a11fb;
        pUVar23 = (__this->fields)._viewport;
        if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_1818a17c1;
        pUVar20 = UnityEngine_RectTransform__get_rect(&local_f8,pUVar23,(MethodInfo *)0x0);
        viewportHeight = (pUVar20->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
      }
      else {
label_1818a11fb:
        if ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0
           ) {
          lVar18 = il2cpp_runtime_helper_18022f8d0(local_b8,1,
                                 TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                                 (__this->fields)._source);
          viewportHeight = *(float *)(lVar18 + 8);
        }
      }
      iVar29 = 0;
      local_e8._0_8_ = uVar7;
      local_e8._8_8_ = uVar8;
      local_e8.OverscanRows = iVar4;
      local_e8.PaddingLeft = fVar5;
      local_e8.PaddingRight = fVar6;
      local_e8._28_8_ = uVar9;
      GVar21 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RangeFor
                         (__this,(Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_e8,
                          fVar30,viewportHeight,(MethodInfo *)0x0);
      uVar26 = GVar21.Start;
      iVar25 = GVar21.End;
      if ((iVar25 < (int)uVar26) || ((int)((iVar25 - uVar26) + 1) < 1)) {
        if (Il2CppMethodInitialized_184341eb8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
          Il2CppMethodInitialized_184341eb8 = '\x01';
        }
        pSVar2 = (__this->fields)._slots;
        while (pSVar2 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
          if ((pSVar2->fields)._size <= iVar29) goto label_1818a14ee;
          pSVar2 = (__this->fields)._slots;
          if ((pSVar2 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
             (pIVar22 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,iVar29,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                                  ), pIVar22 == (Il2CppObject *)0x0)) break;
          if (-1 < *(int *)&pIVar22[1].monitor) {
            pSVar2 = (__this->fields)._slots;
            if (pSVar2 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) break;
            pGVar3 = (__this->fields)._source;
            pIVar22 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar2,iVar29,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                                );
            if ((pIVar22 == (Il2CppObject *)0x0) ||
               (pGVar3 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0)) break;
            cVar13 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                                   pGVar3,pIVar22[1].klass);
            if (cVar13 != '\0') {
              pSVar2 = (__this->fields)._slots;
              if (pSVar2 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0)
              break;
              pGVar24 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,iVar29,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                                  );
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind
                        (__this,pGVar24,(MethodInfo *)0x0);
            }
          }
          iVar29 = iVar29 + 1;
          pSVar2 = (__this->fields)._slots;
        }
      }
      else if (cVar13 == '\0') {
        if (Il2CppMethodInitialized_184341ea0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184341ea0 = '\x01';
        }
        pSVar2 = (__this->fields)._slots;
        iVar28 = iVar29;
        while (pSVar2 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
          if ((pSVar2->fields)._size <= iVar28) goto label_1818a138a;
          pSVar2 = (__this->fields)._slots;
          if ((pSVar2 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
             (pIVar22 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,iVar28,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                                  ), pIVar22 == (Il2CppObject *)0x0)) break;
          if (-1 < *(int *)&pIVar22[1].monitor) {
            x = pIVar22[1].klass;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar14 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar14) {
              if (pIVar22[1].klass == (Il2CppClass *)0x0) break;
              pUVar23 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pIVar22[1].klass,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              local_e8._0_8_ = uVar7;
              local_e8._8_8_ = uVar8;
              local_e8.OverscanRows = iVar4;
              local_e8.PaddingLeft = fVar5;
              local_e8.PaddingRight = fVar6;
              local_e8._28_8_ = uVar10;
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
                        (__this,pUVar23,*(int32_t *)&pIVar22[1].monitor,
                         (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_e8,
                         (MethodInfo *)0x0);
            }
          }
          iVar28 = iVar28 + 1;
          pSVar2 = (__this->fields)._slots;
        }
      }
      else {
label_1818a138a:
        if (((!force) && (uVar26 == (__this->fields)._range.fields.Start)) &&
           (iVar25 == (__this->fields)._range.fields.End)) {
          return;
        }
        if (Il2CppMethodInitialized_184341eb4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
          Il2CppMethodInitialized_184341eb4 = '\x01';
        }
        pSVar2 = (__this->fields)._slots;
        while (pSVar2 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
          if ((pSVar2->fields)._size <= iVar29) {
            uVar27 = (ulonglong)GVar21 & 0xffffffff;
            while ((int)uVar26 <= iVar25) {
              iVar29 = (int)uVar27;
              pGVar24 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                                  (__this,iVar29,(MethodInfo *)0x0);
              if (pGVar24 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
                local_e8._0_8_ = uVar7;
                local_e8._8_8_ = uVar8;
                local_e8.OverscanRows = iVar4;
                local_e8.PaddingLeft = fVar5;
                local_e8.PaddingRight = fVar6;
                local_e8._28_8_ = uVar11;
                pGVar24 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot
                                    (__this,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
                          (__this,pGVar24,iVar29,
                           (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_e8,
                           (MethodInfo *)0x0);
              }
              uVar26 = iVar29 + 1;
              uVar27 = (ulonglong)uVar26;
            }
label_1818a14ee:
            (__this->fields)._range.fields = GVar21;
            return;
          }
          pSVar2 = (__this->fields)._slots;
          if ((pSVar2 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
             (pGVar24 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,iVar29,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                                  ),
             pGVar24 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0)) break;
          if ((-1 < (pGVar24->fields).ItemIndex) &&
             ((iVar28 = (pGVar24->fields).ItemIndex, iVar28 < (int)uVar26 || (iVar25 < iVar28)))) {
            pGVar3 = (__this->fields)._source;
            if (pGVar3 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) break;
            cVar13 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                                   pGVar3,(pGVar24->fields).Root);
            if ((cVar13 != '\0') &&
               (bVar14 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild
                                   ((pGVar24->fields).Root,(MethodInfo *)0x0), !bVar14)) {
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind
                        (__this,pGVar24,(MethodInfo *)0x0);
            }
          }
          iVar29 = iVar29 + 1;
          pSVar2 = (__this->fields)._slots;
        }
      }
      goto label_1818a17c1;
    }
  }
  if (Il2CppMethodInitialized_184341eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341eb3 = '\x01';
  }
  pIVar22 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar22 != (Il2CppObject *)0x0) {
    pvVar19 = InterfaceInvoker0_Invoke
                        (0,(Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pIVar22);
    iVar29 = 0;
    iVar28 = (int)pvVar19;
    iVar25 = iVar29;
    if (0 < iVar28) {
      do {
        pGVar24 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                            (__this,iVar25,(MethodInfo *)0x0);
        if (pGVar24 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
          local_e8._0_8_ = uVar7;
          local_e8._8_8_ = uVar8;
          local_e8.OverscanRows = iVar4;
          local_e8.PaddingLeft = fVar5;
          local_e8.PaddingRight = fVar6;
          local_e8._28_8_ = uVar12;
          pGVar24 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot
                              (__this,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
                    (__this,pGVar24,iVar25,
                     (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_e8,
                     (MethodInfo *)0x0);
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < iVar28);
    }
    pSVar2 = (__this->fields)._slots;
    while (pSVar2 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
      if ((pSVar2->fields)._size <= iVar29) {
        if (iVar28 == 0) {
          (__this->fields)._range.fields =
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)0xffffffffffffffff;
          return;
        }
        local_res8 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
                     ((ulonglong)(iVar28 - 1) << 0x20);
        (__this->fields)._range.fields = local_res8;
        return;
      }
      pSVar2 = (__this->fields)._slots;
      if ((pSVar2 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
         (pGVar24 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,iVar29,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                              ),
         pGVar24 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0)) break;
      if (iVar28 <= (pGVar24->fields).ItemIndex) {
        pGVar3 = (__this->fields)._source;
        if (pGVar3 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) break;
        cVar13 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar3
                               ,(pGVar24->fields).Root);
        if (cVar13 != '\0') {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind
                    (__this,pGVar24,(MethodInfo *)0x0);
        }
      }
      iVar29 = iVar29 + 1;
      pSVar2 = (__this->fields)._slots;
    }
  }
label_1818a17c1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$MaterializeItem
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__MaterializeItem (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x1818a04c0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__MaterializeItem
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  void *pvVar3;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *pGVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o local_98;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_88;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o local_58 [2];
  
  if (Il2CppMethodInitialized_184341eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    Il2CppMethodInitialized_184341eb0 = '\x01';
  }
  if (((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) &&
     (-1 < itemIndex)) {
    pvVar3 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,
                        (Il2CppObject *)(__this->fields)._source);
    if (itemIndex < (int)pvVar3) {
      pGVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EffectiveMetrics
                         (local_58,__this,(MethodInfo *)0x0);
      local_88.ItemHeight = (pGVar4->fields).ItemHeight;
      local_88.Gap = (pGVar4->fields).Gap;
      local_88.ViewportHeight = (pGVar4->fields).ViewportHeight;
      local_88.VirtualizationThreshold = (pGVar4->fields).VirtualizationThreshold;
      local_88.OverscanRows = (pGVar4->fields).OverscanRows;
      local_88.PaddingLeft = (pGVar4->fields).PaddingLeft;
      local_88.PaddingRight = (pGVar4->fields).PaddingRight;
      local_88.PaddingTop = (pGVar4->fields).PaddingTop;
      local_88.PaddingBottom = (pGVar4->fields).PaddingBottom;
      fVar8 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__ItemOffset
                        (__this,itemIndex,
                         (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_88,
                         (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341eb2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
        Il2CppMethodInitialized_184341eb2 = '\x01';
      }
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy(__this,(MethodInfo *)0x0)
      ;
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
            pUVar5 = UnityEngine_RectTransform__get_rect(&local_98,pUVar1,(MethodInfo *)0x0);
            fVar10 = (pUVar5->fields).m_Height;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            pUVar1 = (__this->fields)._viewport;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar5 = UnityEngine_RectTransform__get_rect(&local_98,pUVar1,(MethodInfo *)0x0);
              fVar10 = fVar10 - (pUVar5->fields).m_Height;
              pUVar1 = (__this->fields)._content;
              if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
                fVar9 = 0.0;
                if (0.0 <= fVar8) {
                  if (0.0 <= fVar10) {
                    fVar9 = fVar10;
                  }
                  if (fVar8 <= fVar9) {
                    fVar9 = fVar8;
                  }
                }
                pUVar1 = (__this->fields)._content;
                if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar6.fields.y = fVar9;
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar6,(MethodInfo *)0x0);
                  goto label_1818a0697;
                }
              }
            }
          }
          ThrowNullReferenceException();
        }
      }
label_1818a0697:
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(__this,true,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                         (__this,itemIndex,(MethodInfo *)0x0);
      return pGVar7 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$TryMaterializeSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__TryMaterializeSearchTarget (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, System_String_o* targetId, UnityEngine_GameObject_o** target, const MethodInfo* method);
// 0x1818a1db0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__TryMaterializeSearchTarget
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               System_String_o *targetId,UnityEngine_GameObject_o **target,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar4;
  UnityEngine_Object_o *x;
  bool bVar5;
  char cVar6;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar8;
  ushort uVar9;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184341eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341eb1 = '\x01';
  }
  local_res8[0] = 0;
  *target = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(target,(void *)0x0);
  if (((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) &&
     (bVar5 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0), !bVar5)) {
    obj = (Il2CppObject *)(__this->fields)._source;
    if (obj == (Il2CppObject *)0x0) {
label_1818a1f6c:
      ThrowNullReferenceException();
    }
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar9 = 0;
      do {
        if (pIVar3[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource) {
          pVVar7 = pIVar2->vtable + (pIVar3[uVar9].offset + 7);
          goto label_1818a1e89;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,7);
label_1818a1e89:
    bVar5 = (*pVVar7->methodPtr)(obj,targetId,local_res8,pVVar7->method);
    if (((bVar5) &&
        (bVar5 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__MaterializeItem
                           (__this,local_res8[0],(MethodInfo *)0x0), bVar5)) &&
       (pGVar8 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                           (__this,local_res8[0],(MethodInfo *)0x0),
       pGVar8 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0)) {
      pGVar4 = (__this->fields)._source;
      if (pGVar4 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0)
      goto label_1818a1f6c;
      cVar6 = il2cpp_runtime_helper_18022f990(8,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar4,
                            targetId,local_res8[0],(pGVar8->fields).Root,target);
      if (cVar6 != '\0') {
        x = (UnityEngine_Object_o *)*target;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar5;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$SetScrollOffset
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SetScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, float offset, const MethodInfo* method);
// 0x1818a19c0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SetScrollOffset
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,float offset,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184341eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341eb2 = '\x01';
  }
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__EnsureHierarchy(__this,(MethodInfo *)0x0);
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
        pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar1,(MethodInfo *)0x0);
        fVar6 = (pUVar3->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (__this->fields)._viewport;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar1,(MethodInfo *)0x0);
          fVar6 = fVar6 - (pUVar3->fields).m_Height;
          pUVar1 = (__this->fields)._content;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
            fVar5 = 0.0;
            if (0.0 <= offset) {
              if (0.0 <= fVar6) {
                fVar5 = fVar6;
              }
              if (offset <= fVar5) {
                fVar5 = offset;
              }
            }
            pUVar1 = (__this->fields)._content;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UVar4.fields.y = fVar5;
              UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar4,(MethodInfo *)0x0);
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
// 0x1818a0d50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a0dcd: nop dword ptr [rax]
// asm:   0x1818a0ea7: jmp 0x1818a0e35

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RefreshStatic
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar6;
  int index;
  int itemIndex;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields local_res8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_48;
  
  if (Il2CppMethodInitialized_184341eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341eb3 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._source;
  if (obj != (Il2CppObject *)0x0) {
    pvVar5 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,obj);
    index = 0;
    iVar4 = (int)pvVar5;
    itemIndex = index;
    if (0 < iVar4) {
      do {
        pGVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                           (__this,itemIndex,(MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
          local_48.ItemHeight = (metrics->fields).ItemHeight;
          local_48.Gap = (metrics->fields).Gap;
          local_48.ViewportHeight = (metrics->fields).ViewportHeight;
          local_48.VirtualizationThreshold = (metrics->fields).VirtualizationThreshold;
          local_48.PaddingBottom = (metrics->fields).PaddingBottom;
          local_48.OverscanRows = (metrics->fields).OverscanRows;
          local_48.PaddingLeft = (metrics->fields).PaddingLeft;
          local_48.PaddingRight = (metrics->fields).PaddingRight;
          local_48.PaddingTop = (metrics->fields).PaddingTop;
          pGVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot
                             (__this,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
                    (__this,pGVar6,itemIndex,
                     (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_48,
                     (MethodInfo *)0x0);
        }
        itemIndex = itemIndex + 1;
      } while (itemIndex < iVar4);
    }
    pSVar1 = (__this->fields)._slots;
    while (pSVar1 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
      if ((pSVar1->fields)._size <= index) {
        if (iVar4 == 0) {
          (__this->fields)._range.fields =
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)0xffffffffffffffff;
        }
        else {
          local_res8 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
                       ((ulonglong)(iVar4 - 1) << 0x20);
          (__this->fields)._range.fields = local_res8;
        }
        return;
      }
      pSVar1 = (__this->fields)._slots;
      if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
         (pGVar6 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                             ),
         pGVar6 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0)) break;
      if (iVar4 <= (pGVar6->fields).ItemIndex) {
        pGVar2 = (__this->fields)._source;
        if (pGVar2 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) break;
        cVar3 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar2,
                              (pGVar6->fields).Root);
        if (cVar3 != '\0') {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind
                    (__this,pGVar6,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
      pSVar1 = (__this->fields)._slots;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RecycleOutside
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RecycleOutside (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range, const MethodInfo* method);
// 0x1818a0c40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a0d30: jmp 0x1818a0ca6

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__RecycleOutside
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar2;
  char cVar3;
  bool bVar4;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar5;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot;
  int index;
  int iStackX_14;
  
  if (Il2CppMethodInitialized_184341eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341eb4 = '\x01';
  }
  pSVar5 = (__this->fields)._slots;
  index = 0;
  if (pSVar5 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    iStackX_14 = range.fields.End;
    do {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      pSVar5 = (__this->fields)._slots;
      if ((pSVar5 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
         (slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           ),
         slot == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0)) break;
      if ((-1 < (slot->fields).ItemIndex) &&
         ((iVar1 = (slot->fields).ItemIndex, iVar1 < range.fields.Start || (iStackX_14 < iVar1)))) {
        pGVar2 = (__this->fields)._source;
        if (pGVar2 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) break;
        cVar3 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar2,
                              (slot->fields).Root);
        if ((cVar3 != '\0') &&
           (bVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild
                              ((slot->fields).Root,(MethodInfo *)0x0), !bVar4)) {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind(__this,slot,(MethodInfo *)0x0)
          ;
        }
      }
      pSVar5 = (__this->fields)._slots;
      index = index + 1;
    } while (pSVar5 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$FreeSlot
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x18189fec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189ff93: jmp 0x18189ff53

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__FreeSlot
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar3;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_array *pGVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar9;
  UnityEngine_Object_o *x;
  UnityEngine_UI_LayoutElement_o *pUVar10;
  int index;
  
  if (Il2CppMethodInitialized_184341eb5 == '\0') {
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
    Il2CppMethodInitialized_184341eb5 = '\x01';
  }
  pSVar3 = (__this->fields)._slots;
  index = 0;
  do {
    if (pSVar3 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
label_1818a0136:
      ThrowNullReferenceException();
    }
    if ((pSVar3->fields)._size <= index) {
      pSVar3 = (__this->fields)._slots;
      if ((pSVar3 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) &&
         (pGVar4 = (__this->fields)._source,
         pGVar4 != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0)) {
        x = (UnityEngine_Object_o *)
            il2cpp_runtime_helper_18001b260(3,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar4,
                          (__this->fields)._realizedLayer,(pSVar3->fields)._size);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
        }
        if ((x != (UnityEngine_Object_o *)0x0) &&
           ((pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
            pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0 ||
            (pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
            pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0)))) {
          (*(pUVar10->klass->vtable)._28_set_ignoreLayout.methodPtr)
                    (pUVar10,true,(pUVar10->klass->vtable)._28_set_ignoreLayout.method);
          pGVar9 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot);
          (pGVar9->fields).ItemIndex = -1;
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar9,(MethodInfo *)0x0);
          (pGVar9->fields).Root = (UnityEngine_GameObject_o *)x;
          Il2CppCodeGenWriteBarrier(&(pGVar9->fields).Root,x);
          pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_Add;
          pSVar3 = (__this->fields)._slots;
          if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar5 = (pSVar3->fields)._items;
            if (pGVar5 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if ((uint)pGVar5->max_length <= uVar2) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pGVar9,
                           (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
                return pGVar9;
              }
              (pSVar3->fields)._size = uVar2 + 1;
              if (uVar2 < (uint)pGVar5->max_length) {
                pGVar5->m_Items[(int)uVar2] = pGVar9;
                Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2,pGVar9);
                return pGVar9;
              }
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
      goto label_1818a0136;
    }
    pSVar3 = (__this->fields)._slots;
    if ((pSVar3 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
       (pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           ), pIVar8 == (Il2CppObject *)0x0)) goto label_1818a0136;
    pSVar3 = (__this->fields)._slots;
    if (*(int *)&pIVar8[1].monitor < 0) {
      if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
        pGVar9 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           );
        return pGVar9;
      }
      goto label_1818a0136;
    }
    index = index + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Bind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* slot, int32_t itemIndex, Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o metrics, const MethodInfo* method);
// 0x18189e9a0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Bind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot,int32_t itemIndex,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *metrics,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *rect;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_Fields local_58;
  
  if (Il2CppMethodInitialized_184341eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341eb6 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar1 = (slot->fields).Root;
      (slot->fields).ItemIndex = itemIndex;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        local_58.ItemHeight = (metrics->fields).ItemHeight;
        local_58.Gap = (metrics->fields).Gap;
        local_58.ViewportHeight = (metrics->fields).ViewportHeight;
        local_58.VirtualizationThreshold = (metrics->fields).VirtualizationThreshold;
        local_58.PaddingBottom = (metrics->fields).PaddingBottom;
        local_58.OverscanRows = (metrics->fields).OverscanRows;
        local_58.PaddingLeft = (metrics->fields).PaddingLeft;
        local_58.PaddingRight = (metrics->fields).PaddingRight;
        local_58.PaddingTop = (metrics->fields).PaddingTop;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (pUVar1,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Position
                  (__this,rect,itemIndex,
                   (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *)&local_58,
                   (MethodInfo *)0x0);
        pUVar1 = (slot->fields).Root;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          pGVar2 = (__this->fields)._source;
          if (pGVar2 != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
            il2cpp_runtime_helper_18001b260(4,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar2,
                          (slot->fields).Root,itemIndex);
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
// 0x1818a2190

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341eb7 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (__this->fields)._source;
      if (pGVar1 != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0) {
        il2cpp_runtime_helper_180014780(5,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar1,
                      (slot->fields).Root);
        __this_00 = (slot->fields).Root;
        (slot->fields).ItemIndex = -1;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
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
// 0x1818a2070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a216d: jmp 0x1818a20c7

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__UnbindAll
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *pGVar2;
  char cVar3;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *slot;
  int index;
  
  if (Il2CppMethodInitialized_184341eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341eb8 = '\x01';
  }
  index = 0;
  pSVar1 = (__this->fields)._slots;
  while (pSVar1 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    pSVar1 = (__this->fields)._slots;
    if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           ), pIVar4 == (Il2CppObject *)0x0)) break;
    if (-1 < *(int *)&pIVar4[1].monitor) {
      pSVar1 = (__this->fields)._slots;
      if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) break;
      pGVar2 = (__this->fields)._source;
      pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                         );
      if ((pIVar4 == (Il2CppObject *)0x0) ||
         (pGVar2 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)0x0)) break;
      cVar3 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource,pGVar2,
                            pIVar4[1].klass);
      if (cVar3 != '\0') {
        pSVar1 = (__this->fields)._slots;
        if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) break;
        slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                         );
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Unbind(__this,slot,(MethodInfo *)0x0);
      }
    }
    index = index + 1;
    pSVar1 = (__this->fields)._slots;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$IsBound
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__IsBound (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x1818a02a0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__IsBound
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
                     (__this,itemIndex,(MethodInfo *)0x0);
  return pGVar1 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$SlotFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x1818a1b90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a1bd9: nop dword ptr [rax]
// asm:   0x1818a1c13: jmp 0x1818a1be0

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SlotFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,int32_t itemIndex,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *pSVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *pGVar3;
  int index;
  
  if (Il2CppMethodInitialized_184341eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341eb9 = '\x01';
  }
  pSVar1 = (__this->fields)._slots;
  index = 0;
  do {
    if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
label_1818a1c49:
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._size <= index) {
      return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)0x0;
    }
    pSVar1 = (__this->fields)._slots;
    if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) ||
       (pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           ), pIVar2 == (Il2CppObject *)0x0)) goto label_1818a1c49;
    pSVar1 = (__this->fields)._slots;
    if (*(int *)&pIVar2[1].monitor == itemIndex) {
      if (pSVar1 != (System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *)0x0) {
        pGVar3 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_Slot_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_get_Item
                           );
        return pGVar3;
      }
      goto label_1818a1c49;
    }
    index = index + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$HasFocusedChild
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a0150

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__HasFocusedChild
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341eba = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818a028e;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  else {
    x = (UnityEngine_Object_o *)0x0;
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
label_1818a028e:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* __this, const MethodInfo* method);
// 0x1818a23a0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot__o *__this_00;
  
  if (Il2CppMethodInitialized_184341ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot);
    Il2CppMethodInitialized_184341ebb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchVirtualScrollRuntime_Slot_ctor);
  (__this->fields)._slots = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slots,__this_00);
  (__this->fields)._range.fields =
       (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)0xffffffffffffffff;
  (__this->fields)._scrollSensitivity = 48.0;
  (__this->fields)._lastUiScale = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


