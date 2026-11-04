// Type: Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchSpotlight.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor(Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x1819105c0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434226c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434226c = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, const MethodInfo* method);
// 0x181910650

void
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__1(Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__2
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__2 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, const MethodInfo* method);
// 0x181910650

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__2
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x181906ae0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play
               (UnityEngine_GameObject_o *target,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Il2CppType *handle;
  bool bVar5;
  int32_t value;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *object;
  UnityEngine_RectTransform_o *child;
  UnityEngine_Canvas_o *canvas;
  UnityEngine_RectTransform_o *__this;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_CanvasGroup_o *pUVar9;
  UnityEngine_Bounds_o *pUVar10;
  UnityEngine_Rect_o *pUVar11;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Sequence_o *pDVar12;
  DG_Tweening_TweenCallback_float__o *pDVar13;
  DG_Tweening_Tweener_o *pDVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o local_88;
  UnityEngine_Bounds_o local_78 [4];
  
  if (Il2CppMethodInitialized_184342265 == '\0') {
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
    Il2CppMethodInitialized_184342265 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0);
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (target == (UnityEngine_GameObject_o *)0x0) goto label_1819072ee;
    child = UnityEngine_GameObject__GetComponent_object_
                      (target,(MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    child = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (target == (UnityEngine_GameObject_o *)0x0) goto label_1819072ee;
    canvas = UnityEngine_GameObject__GetComponentInParent_object_
                       (target,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_Canvas);
  }
  else {
    canvas = (UnityEngine_Canvas_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (canvas == (UnityEngine_Canvas_o *)0x0) goto label_1819072ee;
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)canvas,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  }
  else {
    __this = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((obj != (System_Type_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items,obj);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar7,"AoTTG Search Spotlight",components,(MethodInfo *)0x0);
        if (object != (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *)0x0) {
          (object->fields).overlay = pUVar7;
          Il2CppCodeGenWriteBarrier(&(object->fields).overlay,pUVar7);
          pUVar7 = (object->fields).overlay;
          if (((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
              (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
              canvas != (UnityEngine_Canvas_o *)0x0)) &&
             (parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar8,parent,false,(MethodInfo *)0x0);
            pUVar7 = (object->fields).overlay;
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              __this_00 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar7,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (__this_00,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                if (Il2CppMethodInitialized_184341f36 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_184341f36 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (__this_00,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMin
                          (__this_00,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMax
                          (__this_00,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                pUVar7 = (object->fields).overlay;
                if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                   (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                          (pUVar7,(MethodInfo_6F4D60 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_Canvas),
                   __this_01 != (UnityEngine_Canvas_o *)0x0)) {
                  UnityEngine_Canvas__set_overrideSorting(__this_01,true,(MethodInfo *)0x0);
                  value = Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent
                                    (canvas,900,(MethodInfo *)0x0);
                  UnityEngine_Canvas__set_sortingOrder(__this_01,value,(MethodInfo *)0x0);
                  pUVar7 = (object->fields).overlay;
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar9 = UnityEngine_GameObject__AddComponent_object_
                                       (pUVar7,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
                    (object->fields).group = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(object->fields).group,pUVar9);
                    pUVar9 = (object->fields).group;
                    if (pUVar9 != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar9,false,(MethodInfo *)0x0);
                      pUVar9 = (object->fields).group;
                      if (pUVar9 != (UnityEngine_CanvasGroup_o *)0x0) {
                        UnityEngine_CanvasGroup__set_alpha(pUVar9,0.0,(MethodInfo *)0x0);
                        if (Il2CppMethodInitialized_184342266 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_UnityEngine_RectTransformUtility);
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                          Il2CppMethodInitialized_184342266 = '\x01';
                        }
                        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                        }
                        pUVar10 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                                            (local_78,(UnityEngine_Transform_o *)__this,
                                             (UnityEngine_Transform_o *)child,(MethodInfo *)0x0);
                        fVar1 = (pUVar10->fields).m_Center.fields.x;
                        fVar2 = (pUVar10->fields).m_Center.fields.y;
                        fVar3 = (pUVar10->fields).m_Extents.fields.x;
                        fVar4 = (pUVar10->fields).m_Extents.fields.y;
                        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                        }
                        pUVar7 = (object->fields).overlay;
                        fVar15 = (fVar2 - fVar4) - 10.0;
                        fVar16 = (fVar1 - fVar3) - 10.0;
                        if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                           (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
                           __this != (UnityEngine_RectTransform_o *)0x0)) {
                          local_88.fields.m_Width = (fVar3 + fVar1 + 10.0) - fVar16;
                          local_88.fields.m_Height = (fVar2 + fVar4 + 10.0) - fVar15;
                          local_88.fields.m_XMin = fVar16;
                          local_88.fields.m_YMin = fVar15;
                          pUVar11 = UnityEngine_RectTransform__get_rect
                                              ((UnityEngine_Rect_o *)local_78,__this,(MethodInfo *)0x0);
                          local_78[0].fields.m_Center.fields.x = (pUVar11->fields).m_XMin;
                          local_78[0].fields.m_Center.fields.y = (pUVar11->fields).m_YMin;
                          local_78[0].fields.m_Center.fields.z = (pUVar11->fields).m_Width;
                          local_78[0].fields.m_Extents.fields.x = (pUVar11->fields).m_Height;
                          Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels
                                    (pUVar8,(UnityEngine_Rect_o *)local_78,&local_88,(MethodInfo *)0x0);
                          action = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                          DG_Tweening_TweenCallback___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,
                                     (Il2CppObject *)object,
                                     (intptr_t)
                                     MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__0
                                     ,(MethodInfo *)0x0);
                          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                          }
                          pDVar12 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                          pDVar13 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                          DG_Tweening_TweenCallback_float____ctor
                                    ((DG_Tweening_Core_DOSetter_float__o *)pDVar13,(Il2CppObject *)object,
                                     (intptr_t)
                                     MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__1
                                     ,(MethodInfo_E5A750 *)0x0);
                          pDVar14 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,pDVar13,(MethodInfo *)0x0);
                          pDVar12 = DG_Tweening_TweenSettingsExtensions__Append
                                              (pDVar12,(DG_Tweening_Tween_o *)pDVar14,(MethodInfo *)0x0);
                          pDVar12 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                              (pDVar12,0.18,(MethodInfo *)0x0);
                          pDVar13 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                          DG_Tweening_TweenCallback_float____ctor
                                    ((DG_Tweening_Core_DOSetter_float__o *)pDVar13,(Il2CppObject *)object,
                                     (intptr_t)
                                     MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__2
                                     ,(MethodInfo_E5A750 *)0x0);
                          pDVar14 = DG_Tweening_DOVirtual__Float(1.0,0.0,0.18,pDVar13,(MethodInfo *)0x0);
                          pDVar12 = DG_Tweening_TweenSettingsExtensions__Append
                                              (pDVar12,(DG_Tweening_Tween_o *)pDVar14,(MethodInfo *)0x0);
                          pDVar12 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                              ((Il2CppObject *)pDVar12,true,
                                               (MethodInfo_7CA3D0 *)
                                               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence
                                              );
                          pDVar12 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                              ((Il2CppObject *)pDVar12,action,
                                               (MethodInfo_7C92E0 *)
                                               MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence
                                              );
                          pDVar12 = DG_Tweening_TweenSettingsExtensions__OnKill_object_
                                              ((Il2CppObject *)pDVar12,action,
                                               (MethodInfo_7C9310 *)
                                               MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Sequence)
                          ;
                          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver
                                      );
                          }
                          Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                    ((DG_Tweening_Tween_o *)pDVar12,false,(MethodInfo *)0x0);
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
label_1819072ee:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$TargetRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect (UnityEngine_RectTransform_o* root, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x181907310

UnityEngine_Rect_o *
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect
          (UnityEngine_Rect_o *__return_storage_ptr__,UnityEngine_RectTransform_o *root,
          UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Bounds_o *pUVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Bounds_o local_68 [4];
  
  if (Il2CppMethodInitialized_184342266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342266 = '\x01';
  }
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  pUVar5 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                     (local_68,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)target,
                      (MethodInfo *)0x0);
  fVar1 = (pUVar5->fields).m_Center.fields.x;
  fVar2 = (pUVar5->fields).m_Center.fields.y;
  fVar3 = (pUVar5->fields).m_Extents.fields.x;
  fVar4 = (pUVar5->fields).m_Extents.fields.y;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar6 = (fVar2 - fVar4) - 10.0;
  fVar7 = (fVar1 - fVar3) - 10.0;
  (__return_storage_ptr__->fields).m_YMin = fVar6;
  (__return_storage_ptr__->fields).m_XMin = fVar7;
  (__return_storage_ptr__->fields).m_Width = (fVar3 + fVar1 + 10.0) - fVar7;
  (__return_storage_ptr__->fields).m_Height = (fVar2 + fVar4 + 10.0) - fVar6;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddDimPanels
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels (UnityEngine_Transform_o* parent, UnityEngine_Rect_o root, UnityEngine_Rect_o cutout, const MethodInfo* method);
// 0x1819065d0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels
               (UnityEngine_Transform_o *parent,UnityEngine_Rect_o *root,UnityEngine_Rect_o *cutout,
               MethodInfo *method)

{
  UnityEngine_Rect_o local_48;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184342267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342267 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  local_48.fields.m_XMin = (root->fields).m_XMin;
  local_48.fields.m_YMin = (cutout->fields).m_Height + (cutout->fields).m_YMin;
  local_48.fields.m_Width = ((root->fields).m_Width + local_48.fields.m_XMin) - local_48.fields.m_XMin;
  local_48.fields.m_Height = ((root->fields).m_Height + (root->fields).m_YMin) - local_48.fields.m_YMin;
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.58;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o *)&local_38,&local_48,(MethodInfo *)0x0);
  local_48.fields.m_XMin = (root->fields).m_XMin;
  local_48.fields.m_YMin = (root->fields).m_YMin;
  local_48.fields.m_Width = ((root->fields).m_Width + local_48.fields.m_XMin) - local_48.fields.m_XMin;
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.58;
  local_48.fields.m_Height = (cutout->fields).m_YMin - local_48.fields.m_YMin;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o *)&local_38,&local_48,(MethodInfo *)0x0);
  local_48.fields.m_XMin = (root->fields).m_XMin;
  local_48.fields.m_YMin = (cutout->fields).m_YMin;
  local_48.fields.m_Width = (cutout->fields).m_XMin - local_48.fields.m_XMin;
  local_48.fields.m_Height = ((cutout->fields).m_Height + local_48.fields.m_YMin) - local_48.fields.m_YMin;
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.58;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o *)&local_38,&local_48,(MethodInfo *)0x0);
  local_48.fields.m_YMin = (cutout->fields).m_YMin;
  local_48.fields.m_XMin = (cutout->fields).m_Width + (cutout->fields).m_XMin;
  local_48.fields.m_Width = ((root->fields).m_Width + (root->fields).m_XMin) - local_48.fields.m_XMin;
  local_48.fields.m_Height = ((cutout->fields).m_Height + local_48.fields.m_YMin) - local_48.fields.m_YMin;
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.58;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o *)&local_38,&local_48,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddPanel
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel (UnityEngine_Transform_o* parent, UnityEngine_Color_o color, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x181906780

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
               (UnityEngine_Transform_o *parent,UnityEngine_Color_o *color,UnityEngine_Rect_o *rect,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Rect_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184342268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184342268 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if (0.0 < (rect->fields).m_Width) {
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (0.0 < (rect->fields).m_Height) {
      local_28[0].m_XMin = (rect->fields).m_XMin;
      local_28[0].m_YMin = (rect->fields).m_YMin;
      local_28[0].m_Width = (rect->fields).m_Width;
      local_28[0].m_Height = (rect->fields).m_Height;
      __this = Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect
                         (parent,"Panel",(UnityEngine_Rect_o *)local_28,(MethodInfo *)0x0);
      if (((__this != (UnityEngine_RectTransform_o *)0x0) &&
          (__this_00 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
          __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
         (pUVar1 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
         pUVar1 != (UnityEngine_UI_Image_o *)0x0)) {
        local_28[0].m_XMin = (color->fields).r;
        local_28[0].m_YMin = (color->fields).g;
        local_28[0].m_Width = (color->fields).b;
        local_28[0].m_Height = (color->fields).a;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,(UnityEngine_Color_o *)local_28,(pUVar1->klass->vtable)._23_set_color.method);
        (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar1,false,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$NewRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x1819068b0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect
          (UnityEngine_Transform_o *parent,System_String_o *name,UnityEngine_Rect_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_184342269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184342269 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
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
          value.fields.y = (rect->fields).m_Height * 0.5 + (rect->fields).m_YMin;
          value.fields.x = (rect->fields).m_Width * 0.5 + (rect->fields).m_XMin;
          UnityEngine_RectTransform__set_anchoredPosition(__this_01,value,(MethodInfo *)0x0);
          value_00.fields.x = (rect->fields).m_Width;
          value_00.fields.y = (rect->fields).m_Height;
          UnityEngine_RectTransform__set_sizeDelta(__this_01,value_00,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x18189b1d0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
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


