// Type: Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchSpotlight.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x53a6ea0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x53a6eb0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542beb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542beb = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).overlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).overlay;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, const MethodInfo* method);
// 0x53a6f30

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__1
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__2
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__2 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, const MethodInfo* method);
// 0x53a6f50

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__2
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x53a5bb0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play
               (UnityEngine_GameObject_o *target,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_Fields *targetAddress;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this;
  UnityEngine_RectTransform_o *target_00;
  UnityEngine_Canvas_o *canvas;
  UnityEngine_RectTransform_o *root;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_CanvasGroup_o *pUVar5;
  DG_Tweening_TweenCallback_o *__this_01;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_TweenCallback_float__o *pDVar7;
  DG_Tweening_Tweener_o *pDVar8;
  MethodInfo *method_00;
  UnityEngine_CanvasGroup_o **targetAddress_00;
  MethodInfo *pMVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o rect_00;
  UnityEngine_Rect_o rect_01;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  if (Il2CppMethodInitialized_07542be4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInParent_Canvas)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Search Spotlight");
    Il2CppMethodInitialized_07542be4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0);
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  target_00 = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (target == (UnityEngine_GameObject_o *)0x0) goto label_053a630d;
    target_00 = UnityEngine_GameObject__GetComponent_object_
                          (target,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  canvas = (UnityEngine_Canvas_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (target == (UnityEngine_GameObject_o *)0x0) goto label_053a630d;
    canvas = UnityEngine_GameObject__GetComponentInParent_object_
                       (target,(MethodInfo_353BB40 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_Canvas);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (canvas == (UnityEngine_Canvas_o *)0x0) goto label_053a630d;
    root = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)canvas,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if (obj != (System_Type_o *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items);
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(pUVar3,"AoTTG Search Spotlight",components,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *)0x0) {
          targetAddress = &__this->fields;
          (__this->fields).overlay = pUVar3;
          Il2CppCodeGenWriteBarrier(&targetAddress->overlay);
          pUVar3 = (__this->fields).overlay;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            if (canvas != (UnityEngine_Canvas_o *)0x0) {
              parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
                if (targetAddress->overlay != (UnityEngine_GameObject_o *)0x0) {
                  pMVar9 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
                  rect = UnityEngine_GameObject__GetComponent_object_
                                   (targetAddress->overlay,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,pMVar9);
                  if (targetAddress->overlay != (UnityEngine_GameObject_o *)0x0) {
                    __this_00 = UnityEngine_GameObject__AddComponent_object_
                                          (targetAddress->overlay,
                                           (MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
                    if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
                      UnityEngine_Canvas__set_overrideSorting(__this_00,true,(MethodInfo *)0x0);
                      value = Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent
                                        (canvas,900,(MethodInfo *)0x0);
                      UnityEngine_Canvas__set_sortingOrder(__this_00,value,(MethodInfo *)0x0);
                      if (targetAddress->overlay != (UnityEngine_GameObject_o *)0x0) {
                        pUVar5 = UnityEngine_GameObject__AddComponent_object_
                                           (targetAddress->overlay,
                                            (MethodInfo_353B6A0 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
                        targetAddress_00 = &(__this->fields).group;
                        (__this->fields).group = pUVar5;
                        Il2CppCodeGenWriteBarrier(targetAddress_00);
                        pUVar5 = (__this->fields).group;
                        if (pUVar5 != (UnityEngine_CanvasGroup_o *)0x0) {
                          UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar5,false,(MethodInfo *)0x0);
                          pUVar5 = *targetAddress_00;
                          if (pUVar5 != (UnityEngine_CanvasGroup_o *)0x0) {
                            UnityEngine_CanvasGroup__set_alpha(pUVar5,0.0,(MethodInfo *)0x0);
                            UVar11 = Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect
                                               (root,target_00,method_00);
                            if (targetAddress->overlay != (UnityEngine_GameObject_o *)0x0) {
                              pUVar4 = UnityEngine_GameObject__get_transform
                                                 (targetAddress->overlay,(MethodInfo *)0x0);
                              if (root != (UnityEngine_RectTransform_o *)0x0) {
                                pMVar9 = (MethodInfo *)0x0;
                                UVar12 = UnityEngine_RectTransform__get_rect(root,(MethodInfo *)0x0);
                                if (Il2CppMethodInitialized_07542be6 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                                  Il2CppMethodInitialized_07542be6 = '\x01';
                                }
                                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                                }
                                local_78 = UVar11.fields.m_XMin;
                                fStack_74 = UVar11.fields.m_YMin;
                                local_88 = UVar11.fields.m_Width;
                                fStack_84 = UVar11.fields.m_Height;
                                fStack_84 = fStack_84 + fStack_74;
                                local_98 = UVar12.fields.m_Width;
                                fStack_94 = UVar12.fields.m_Height;
                                local_a8 = UVar12.fields.m_XMin;
                                fStack_a4 = UVar12.fields.m_YMin;
                                fVar10 = (local_98 + local_a8) - local_a8;
                                rect_01.fields.m_Width = (local_98 + local_a8) - (local_88 + local_78);
                                UVar11.fields.m_Height = (fStack_94 + fStack_a4) - fStack_84;
                                UVar11.fields.m_YMin = fStack_84;
                                UVar11.fields.m_XMin = local_a8;
                                UVar11.fields.m_Width = fVar10;
                                Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                          (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),
                                           UVar11,pMVar9);
                                rect_00.fields.m_Height = fStack_74 - fStack_a4;
                                rect_00.fields.m_Width = fVar10;
                                rect_00.fields.m_XMin = UVar12.fields.m_XMin;
                                rect_00.fields.m_YMin = UVar12.fields.m_YMin;
                                Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                          (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),
                                           rect_00,pMVar9);
                                UVar12.fields.m_Width = local_78 - local_a8;
                                UVar12.fields.m_YMin = fStack_74;
                                UVar12.fields.m_XMin = local_a8;
                                UVar12.fields.m_Height = fStack_84 - fStack_74;
                                Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                          (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),
                                           UVar12,pMVar9);
                                rect_01.fields.m_YMin = fStack_74;
                                rect_01.fields.m_XMin = local_88 + local_78;
                                rect_01.fields.m_Height = fStack_84 - fStack_74;
                                Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                          (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),
                                           rect_01,pMVar9);
                                __this_01 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                                DG_Tweening_TweenCallback___ctor
                                          (__this_01,(Il2CppObject *)__this,
                                           (intptr_t)
                                           MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__0
                                           ,(MethodInfo *)0x0);
                                if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                                }
                                pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                                pDVar7 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                                DG_Tweening_TweenCallback_float____ctor
                                          (pDVar7,(Il2CppObject *)__this,
                                           (intptr_t)
                                           MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__1
                                           ,(MethodInfo_4293C90 *)0x0);
                                pDVar8 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,pDVar7,(MethodInfo *)0x0);
                                pDVar6 = DG_Tweening_TweenSettingsExtensions__Append
                                                   (pDVar6,(DG_Tweening_Tween_o *)pDVar8,(MethodInfo *)0x0);
                                pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                                   (pDVar6,0.18,(MethodInfo *)0x0);
                                pDVar7 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                                DG_Tweening_TweenCallback_float____ctor
                                          (pDVar7,(Il2CppObject *)__this,
                                           (intptr_t)
                                           MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__2
                                           ,(MethodInfo_4293C90 *)0x0);
                                pDVar8 = DG_Tweening_DOVirtual__Float(1.0,0.0,0.18,pDVar7,(MethodInfo *)0x0);
                                pDVar6 = DG_Tweening_TweenSettingsExtensions__Append
                                                   (pDVar6,(DG_Tweening_Tween_o *)pDVar8,(MethodInfo *)0x0);
                                pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                   ((Il2CppObject *)pDVar6,true,
                                                    (MethodInfo_36B08F0 *)
                                                    MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence
                                                   );
                                pDVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                                   ((Il2CppObject *)pDVar6,__this_01,
                                                    (MethodInfo_36AF8A0 *)
                                                    MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence
                                                   );
                                pDVar6 = DG_Tweening_TweenSettingsExtensions__OnKill_object_
                                                   ((Il2CppObject *)pDVar6,__this_01,
                                                    (MethodInfo_36AF8D0 *)
                                                    MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Sequence
                                                   );
                                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).
                                    cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
                                }
                                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                          ((DG_Tweening_Tween_o *)pDVar6,false,(MethodInfo *)0x0);
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
label_053a630d:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$TargetRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect (UnityEngine_RectTransform_o* root, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x53a6900

UnityEngine_Rect_o
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect
          (UnityEngine_RectTransform_o *root,UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  UnityEngine_Rect_o UVar1;
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_07542be5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542be5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (&local_28,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)target,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  UVar1.fields.m_XMin = (local_28.fields.m_Center.fields.x - local_28.fields.m_Extents.fields.x) + -10.0;
  UVar1.fields.m_YMin = (local_28.fields.m_Center.fields.y - local_28.fields.m_Extents.fields.y) + -10.0;
  UVar1.fields.m_Width =
       (local_28.fields.m_Center.fields.x + local_28.fields.m_Extents.fields.x + 10.0) - UVar1.fields.m_XMin;
  UVar1.fields.m_Height =
       (local_28.fields.m_Center.fields.y + local_28.fields.m_Extents.fields.y + 10.0) - UVar1.fields.m_YMin;
  return (UnityEngine_Rect_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddDimPanels
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels (UnityEngine_Transform_o* parent, UnityEngine_Rect_o root, UnityEngine_Rect_o cutout, const MethodInfo* method);
// 0x53a69c0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels
               (UnityEngine_Transform_o *parent,UnityEngine_Rect_o root,UnityEngine_Rect_o cutout,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Rect_o rect;
  UnityEngine_Rect_o rect_00;
  UnityEngine_Rect_o rect_01;
  UnityEngine_Rect_o rect_02;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07542be6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542be6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  local_48 = cutout.fields.m_XMin;
  fStack_44 = cutout.fields.m_YMin;
  local_68 = cutout.fields.m_Width;
  fStack_64 = cutout.fields.m_Height;
  fStack_64 = fStack_64 + fStack_44;
  local_58 = root.fields.m_Width;
  fStack_54 = root.fields.m_Height;
  local_78 = root.fields.m_XMin;
  fStack_74 = root.fields.m_YMin;
  fVar1 = (local_58 + local_78) - local_78;
  rect_02.fields.m_Width = (local_58 + local_78) - (local_68 + local_48);
  rect.fields.m_Height = (fStack_54 + fStack_74) - fStack_64;
  rect.fields.m_YMin = fStack_64;
  rect.fields.m_XMin = local_78;
  rect.fields.m_Width = fVar1;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect,method);
  rect_00.fields.m_Height = fStack_44 - fStack_74;
  rect_00.fields.m_Width = fVar1;
  rect_00.fields.m_XMin = root.fields.m_XMin;
  rect_00.fields.m_YMin = root.fields.m_YMin;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_00,method);
  rect_01.fields.m_Width = local_48 - local_78;
  rect_01.fields.m_YMin = fStack_44;
  rect_01.fields.m_XMin = local_78;
  rect_01.fields.m_Height = fStack_64 - fStack_44;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_01,method);
  rect_02.fields.m_YMin = fStack_44;
  rect_02.fields.m_XMin = local_68 + local_48;
  rect_02.fields.m_Height = fStack_64 - fStack_44;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_02,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddPanel
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel (UnityEngine_Transform_o* parent, UnityEngine_Color_o color, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x53a6b40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a6b79: xorps xmm0, xmm0
// asm:   0x53a6b7c: ucomiss xmm0, xmm3
// asm:   0x53a6b81: jmp 0x53a6c89

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
               (UnityEngine_Transform_o *parent,UnityEngine_Color_o color,UnityEngine_Rect_o rect,
               MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07542be7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07542be7 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    in_RDX = extraout_RDX_00;
  }
  if (0.0 < rect.fields.m_Width) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      in_RDX = extraout_RDX_01;
    }
    if (0.0 < rect.fields.m_Height) {
      __this = Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect
                         (parent,"Panel",rect,in_RDX);
      if (((__this == (UnityEngine_RectTransform_o *)0x0) ||
          (__this_00 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
          __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
         (pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
         pUVar2 == (UnityEngine_UI_Image_o *)0x0)) {
        ThrowNullReferenceException();
      }
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (pUVar2,color,(pUVar2->klass->vtable)._23_set_color.method);
      (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar2,false,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$NewRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x53a6ca0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect
          (UnityEngine_Transform_o *parent,System_String_o *name,UnityEngine_Rect_o rect,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542be8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07542be8 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          local_48 = rect.fields.m_Width;
          fStack_44 = rect.fields.m_Height;
          local_38 = rect.fields.m_XMin;
          fStack_34 = rect.fields.m_YMin;
          value.fields.y = fStack_44 * 0.5 + fStack_34;
          value.fields.x = local_48 * 0.5 + local_38;
          UnityEngine_RectTransform__set_anchoredPosition(__this_01,value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_01,(UnityEngine_Vector2_o)rect.fields._8_8_,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x53a6800

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
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


