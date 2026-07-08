// Type: Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchSpotlight.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x3b2cb80

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_<>c__DisplayClass1_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x3b2d120

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_<>c__DisplayClass1_0__<Play>b__0
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057015dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015dc = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).overlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).overlay;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, const MethodInfo* method);
// 0x3b2d1a0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_<>c__DisplayClass1_0__<Play>b__1
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__2
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0___Play_b__2 (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o* __this, float value, const MethodInfo* method);
// 0x3b2d1c0

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_<>c__DisplayClass1_0__<Play>b__2
               (Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight___c__DisplayClass1_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3b2bf20

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play
               (UnityEngine_GameObject_o *target,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_CanvasGroup_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *__this_00;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  Il2CppClass *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Canvas_o *__this_03;
  Il2CppObject *pIVar7;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_TweenCallback_float__o *pDVar9;
  DG_Tweening_Tweener_o *pDVar10;
  DG_Tweening_Tween_o *tween;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  UnityEngine_Rect_o rect_00;
  UnityEngine_Rect_o rect_01;
  UnityEngine_Rect_o rect_02;
  float local_d8;
  float fStack_d4;
  float local_b8;
  float fStack_b4;
  UnityEngine_Bounds_o local_48;
  
  if (DAT_057015d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponentInParent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnKill_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__Play_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Play_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Play_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass1_0);
    il2cpp_init_method_metadata(&"AoTTG Search Spotlight");
    DAT_057015d8 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass1_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (target == (UnityEngine_GameObject_o *)0x0) goto LAB_03b2c6d4;
    pUVar4 = (UnityEngine_Transform_o *)
             UnityEngine_GameObject__GetComponent<object>(target,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (target == (UnityEngine_GameObject_o *)0x0) goto LAB_03b2c6d4;
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponentInParent<object>(target,MethodInfo_Canvas_GetComponentInParent_Canvas);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_03b2c6d4;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)x,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
      handle.fields.value = TypeRef_RectTransform.fields.value;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((pSVar5 != (System_Type_o *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar11,0);
        }
        if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        components->m_Items[0] = pSVar5;
        il2cpp_runtime_glue(components->m_Items,pSVar5);
        __this_01 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor
                  ((UnityEngine_GameObject_o *)__this_01,"AoTTG Search Spotlight",components,(MethodInfo *)0x0);
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar1 = pIVar3 + 1;
          pIVar3[1].klass = __this_01;
          il2cpp_runtime_glue(pIVar1);
          if (((pIVar3[1].klass != (Il2CppClass *)0x0) &&
              (__this_02 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pIVar3[1].klass,(MethodInfo *)0x0)
              , x != (UnityEngine_Object_o *)0x0)) &&
             (parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent(__this_02,parent,0,(MethodInfo *)0x0);
            if (pIVar1->klass != (Il2CppClass *)0x0) {
              pMVar12 = MethodInfo_RectTransform_GetComponent_RectTransform;
              rect = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               ((UnityEngine_GameObject_o *)pIVar1->klass,
                                (MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
              Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,pMVar12);
              if ((pIVar1->klass != (Il2CppClass *)0x0) &&
                 (__this_03 = (UnityEngine_Canvas_o *)
                              UnityEngine_GameObject__AddComponent<object>
                                        ((UnityEngine_GameObject_o *)pIVar1->klass,MethodInfo_Canvas_AddComponent_Canvas),
                 __this_03 != (UnityEngine_Canvas_o *)0x0)) {
                UnityEngine_Canvas__set_overrideSorting(__this_03,1,(MethodInfo *)0x0);
                UnityEngine_Canvas__set_sortingOrder(__this_03,900,(MethodInfo *)0x0);
                if (pIVar1->klass != (Il2CppClass *)0x0) {
                  pIVar7 = UnityEngine_GameObject__AddComponent<object>
                                     ((UnityEngine_GameObject_o *)pIVar1->klass,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
                  pIVar3[1].monitor = pIVar7;
                  il2cpp_runtime_glue(&pIVar3[1].monitor);
                  if (pIVar3[1].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
                    UnityEngine_CanvasGroup__set_blocksRaycasts
                              (pIVar3[1].monitor,0,(MethodInfo *)0x0);
                    __this = pIVar3[1].monitor;
                    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
                      if (DAT_057015d9 == '\0') {
                        il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
                        DAT_057015d9 = '\x01';
                      }
                      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                                (&local_48,(UnityEngine_Transform_o *)__this_00,pUVar4,
                                 (MethodInfo *)0x0);
                      if ((pIVar1->klass != (Il2CppClass *)0x0) &&
                         (pUVar4 = UnityEngine_GameObject__get_transform
                                             ((UnityEngine_GameObject_o *)pIVar1->klass,
                                              (MethodInfo *)0x0),
                         __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                        local_b8 = local_48.fields.m_Center.fields.x;
                        fStack_b4 = local_48.fields.m_Center.fields.y;
                        local_d8 = local_48.fields.m_Extents.fields.x;
                        fStack_d4 = local_48.fields.m_Extents.fields.y;
                        fVar15 = (local_b8 - local_d8) + -10.0;
                        fVar16 = (fStack_b4 - fStack_d4) + -10.0;
                        pMVar12 = (MethodInfo *)0x0;
                        UVar18 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
                        fVar13 = UVar18.fields.m_XMin;
                        fVar17 = ((fStack_d4 + fStack_b4 + 10.0) - fVar16) + fVar16;
                        fVar14 = fVar13 + UVar18.fields.m_Width;
                        rect_00.fields.m_Width = fVar14 - fVar13;
                        rect_00.fields.m_YMin = fVar17;
                        rect_00.fields.m_XMin = fVar13;
                        rect_00.fields.m_Height =
                             (UVar18.fields.m_Height + UVar18.fields.m_YMin) - fVar17;
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40)
                                   ,rect_00,pMVar12);
                        rect_01.fields.m_Height = fVar16 - UVar18.fields.m_YMin;
                        rect_01.fields.m_Width = rect_00.fields.m_Width;
                        rect_01.fields.m_XMin = (float)(int)UVar18.fields._0_8_;
                        rect_01.fields.m_YMin = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40)
                                   ,rect_01,pMVar12);
                        UVar18.fields.m_Width = fVar15 - fVar13;
                        UVar18.fields.m_YMin = fVar16;
                        UVar18.fields.m_XMin = fVar13;
                        UVar18.fields.m_Height = fVar17 - fVar16;
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40)
                                   ,UVar18,pMVar12);
                        fVar15 = ((local_b8 + local_d8 + 10.0) - fVar15) + fVar15;
                        rect_02.fields.m_Width = fVar14 - fVar15;
                        rect_02.fields.m_YMin = fVar16;
                        rect_02.fields.m_XMin = fVar15;
                        rect_02.fields.m_Height = fVar17 - fVar16;
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40)
                                   ,rect_02,pMVar12);
                        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
                        DG_Tweening_TweenCallback___ctor();
                        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                        pDVar9 = (DG_Tweening_TweenCallback_float__o *)
                                 il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
                        DG_Tweening_TweenCallback<float>___ctor();
                        pDVar10 = DG_Tweening_DOVirtual__Float
                                            (0.0,1.0,0.14,pDVar9,(MethodInfo *)0x0);
                        pDVar8 = DG_Tweening_TweenSettingsExtensions__Append
                                           (pDVar8,(DG_Tweening_Tween_o *)pDVar10,(MethodInfo *)0x0)
                        ;
                        pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                           (pDVar8,0.18,(MethodInfo *)0x0);
                        pDVar9 = (DG_Tweening_TweenCallback_float__o *)
                                 il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
                        DG_Tweening_TweenCallback<float>___ctor();
                        pDVar10 = DG_Tweening_DOVirtual__Float
                                            (1.0,0.0,0.18,pDVar9,(MethodInfo *)0x0);
                        pDVar8 = DG_Tweening_TweenSettingsExtensions__Append
                                           (pDVar8,(DG_Tweening_Tween_o *)pDVar10,(MethodInfo *)0x0)
                        ;
                        pIVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                                           ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
                        pIVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                           (pIVar3,action,MethodInfo_Sequence_OnComplete_Sequence);
                        tween = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__OnKill<object>
                                          (pIVar3,action,MethodInfo_Sequence_OnKill_Sequence);
                        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                  (tween,0,(MethodInfo *)0x0);
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
LAB_03b2c6d4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$TargetRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect (UnityEngine_RectTransform_o* root, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x3b2cc90

UnityEngine_Rect_o
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__TargetRect
          (UnityEngine_RectTransform_o *root,UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  UnityEngine_Rect_o UVar1;
  UnityEngine_Bounds_o UStack_28;
  
  if (DAT_057015d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057015d9 = '\x01';
  }
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (&UStack_28,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)target,
             (MethodInfo *)0x0);
  UVar1.fields.m_XMin =
       (UStack_28.fields.m_Center.fields.x - UStack_28.fields.m_Extents.fields.x) + -10.0;
  UVar1.fields.m_YMin =
       (UStack_28.fields.m_Center.fields.y - UStack_28.fields.m_Extents.fields.y) + -10.0;
  UVar1.fields.m_Width =
       (UStack_28.fields.m_Center.fields.x + UStack_28.fields.m_Extents.fields.x + 10.0) -
       UVar1.fields.m_XMin;
  UVar1.fields.m_Height =
       (UStack_28.fields.m_Center.fields.y + UStack_28.fields.m_Extents.fields.y + 10.0) -
       UVar1.fields.m_YMin;
  return (UnityEngine_Rect_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddDimPanels
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels (UnityEngine_Transform_o* parent, UnityEngine_Rect_o root, UnityEngine_Rect_o cutout, const MethodInfo* method);
// 0x3b2cd10

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddDimPanels
               (UnityEngine_Transform_o *parent,UnityEngine_Rect_o root,UnityEngine_Rect_o cutout,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o rect;
  UnityEngine_Rect_o rect_00;
  UnityEngine_Rect_o rect_01;
  UnityEngine_Rect_o rect_02;
  undefined4 local_68;
  undefined4 local_18;
  
  rect_01.fields.m_YMin = cutout.fields.m_YMin;
  fVar1 = root.fields.m_XMin;
  fVar3 = cutout.fields.m_Height + rect_01.fields.m_YMin;
  fVar2 = fVar1 + root.fields.m_Width;
  rect.fields.m_Width = fVar2 - fVar1;
  rect.fields.m_YMin = fVar3;
  rect.fields.m_XMin = fVar1;
  rect.fields.m_Height = (root.fields.m_Height + root.fields.m_YMin) - fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect,method);
  rect_00.fields.m_Height = rect_01.fields.m_YMin - root.fields.m_YMin;
  rect_00.fields.m_Width = rect.fields.m_Width;
  rect_00.fields.m_XMin = (float)(int)root.fields._0_8_;
  rect_00.fields.m_YMin = (float)(int)((ulong)root.fields._0_8_ >> 0x20);
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_00,method);
  local_68 = cutout.fields.m_XMin;
  rect_01.fields.m_Width = local_68 - fVar1;
  rect_01.fields.m_XMin = fVar1;
  rect_01.fields.m_Height = fVar3 - rect_01.fields.m_YMin;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_01,method);
  local_18 = cutout.fields.m_Width;
  rect_02.fields.m_Width = fVar2 - (local_18 + local_68);
  rect_02.fields.m_XMin = local_68 + local_18;
  rect_02.fields.m_YMin = rect_01.fields.m_YMin;
  rect_02.fields.m_Height = fVar3 - rect_01.fields.m_YMin;
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
            (parent,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_02,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddPanel
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel (UnityEngine_Transform_o* parent, UnityEngine_Color_o color, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x3b2ce40

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
               (UnityEngine_Transform_o *parent,UnityEngine_Color_o color,UnityEngine_Rect_o rect,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  float local_28;
  float local_18;
  
  if (DAT_057015da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&"Panel");
    DAT_057015da = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((0.0 < rect.fields.m_Width) && (0.0 < rect.fields.m_Height)) {
    __this = Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect
                       (parent,"Panel",rect,in_RDX);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pIVar1 = UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_Image_AddComponent_Image);
        if (pIVar1 != (Il2CppObject *)0x0) {
          local_28 = color.fields.r;
          local_18 = color.fields.b;
          (*pIVar1->klass->vtable[0x17].methodPtr)
                    (local_28,local_18,pIVar1,pIVar1->klass->vtable[0x17].method);
          vtable_dispatch = pIVar1->klass->vtable[0x19].methodPtr;
          (*vtable_dispatch)
                    (pIVar1,0,pIVar1->klass->vtable[0x19].method,vtable_dispatch);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$NewRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x3b2cf40

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__NewRect
          (UnityEngine_Transform_o *parent,System_String_o *name,UnityEngine_Rect_o rect,
          MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (DAT_057015db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_057015db = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b2cb90

void Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)
                    *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


