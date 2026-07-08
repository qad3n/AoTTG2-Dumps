// Type: Gisketch.Aottg2UI.Actions.GisketchFocusRing
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusRing.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_Color_o color, float thickness, float gap, float cornerLength, bool visible, const MethodInfo* method);
// 0x3b29dc0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,UnityEngine_Color_o color,
               float thickness,float gap,float cornerLength,bool_conflict visible,MethodInfo *method
               )

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  UnityEngine_Vector2_o size_01;
  UnityEngine_Vector2_o size_02;
  UnityEngine_Vector2_o size_03;
  UnityEngine_Vector2_o size_04;
  UnityEngine_Vector2_o size_05;
  UnityEngine_Vector2_o size_06;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Delegate_o *b;
  System_Delegate_o *pSVar9;
  undefined8 uVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  System_Delegate_o *a;
  bool bVar11;
  UnityEngine_Vector2_o value;
  
  if (DAT_057015c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_Refresh);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Focus Ring");
    il2cpp_init_method_metadata(&"Top Left");
    il2cpp_init_method_metadata(&"Bottom Left");
    il2cpp_init_method_metadata(&"Top Right");
    il2cpp_init_method_metadata(&"Bottom Right");
    DAT_057015c1 = '\x01';
  }
  if ((char)visible != '\0') {
    x = (UnityEngine_Object_o *)(__this->fields)._ring;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
      handle.fields.value = TypeRef_RectTransform.fields.value;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((pSVar4 != (System_Type_o *)0x0) &&
           (lVar5 = il2cpp_runtime_glue(pSVar4,(((components->obj).klass)->_1).element_class),
           lVar5 == 0)) {
          uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar10,0);
        }
        if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        ppUVar1 = &(__this->fields)._ring;
        components->m_Items[0] = pSVar4;
        il2cpp_runtime_glue(components->m_Items,pSVar4);
        pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar6,"AoTTG Focus Ring",components,(MethodInfo *)0x0);
        *ppUVar1 = pUVar6;
        il2cpp_runtime_glue(ppUVar1);
        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (DAT_056fe093 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_056fe093 = '\x01';
              }
              if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                ;
                if (DAT_0570136e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_0570136e = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                           (MethodInfo *)0x0);
                UnityEngine_RectTransform__set_offsetMin
                          (__this_01,(UnityEngine_Vector2_o)(CONCAT44(gap,gap) ^ 0x8000000080000000)
                           ,(MethodInfo *)0x0);
                value.fields.y = gap;
                value.fields.x = gap;
                UnityEngine_RectTransform__set_offsetMax(__this_01,value,(MethodInfo *)0x0);
                pSVar8 = "Top Left";
                if (DAT_057015c5 == '\0') {
                  il2cpp_init_method_metadata(&" Horizontal");
                  il2cpp_init_method_metadata(&" Vertical");
                  DAT_057015c5 = '\x01';
                }
                pSVar7 = System_String__Concat(pSVar8," Horizontal",(MethodInfo *)0x0);
                size.fields.y = thickness;
                size.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar7,color,(UnityEngine_Vector2_o)0x3f80000000000000,
                           (UnityEngine_Vector2_o)0x3f80000000000000,size,method_00);
                pSVar8 = System_String__Concat(pSVar8," Vertical",(MethodInfo *)0x0);
                size_00.fields.y = cornerLength;
                size_00.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar8,color,(UnityEngine_Vector2_o)0x3f80000000000000,
                           (UnityEngine_Vector2_o)0x3f80000000000000,size_00,method_01);
                if (DAT_0570136e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_0570136e = '\x01';
                }
                pSVar8 = "Top Right";
                UVar2 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
                if (DAT_057015c5 == '\0') {
                  il2cpp_init_method_metadata(&" Horizontal");
                  il2cpp_init_method_metadata(&" Vertical");
                  DAT_057015c5 = '\x01';
                }
                pSVar7 = System_String__Concat(pSVar8," Horizontal",(MethodInfo *)0x0);
                size_01.fields.y = thickness;
                size_01.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar7,color,(UnityEngine_Vector2_o)UVar2,
                           (UnityEngine_Vector2_o)UVar2,size_01,method_02);
                pSVar8 = System_String__Concat(pSVar8," Vertical",(MethodInfo *)0x0);
                size_04.fields.y = cornerLength;
                size_04.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar8,color,(UnityEngine_Vector2_o)UVar2,
                           (UnityEngine_Vector2_o)UVar2,size_04,method_03);
                if (DAT_056fe093 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_056fe093 = '\x01';
                }
                pSVar8 = "Bottom Left";
                UVar2 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
                if (DAT_057015c5 == '\0') {
                  il2cpp_init_method_metadata(&" Horizontal");
                  il2cpp_init_method_metadata(&" Vertical");
                  DAT_057015c5 = '\x01';
                }
                pSVar7 = System_String__Concat(pSVar8," Horizontal",(MethodInfo *)0x0);
                size_02.fields.y = thickness;
                size_02.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar7,color,(UnityEngine_Vector2_o)UVar2,
                           (UnityEngine_Vector2_o)UVar2,size_02,method_04);
                pSVar8 = System_String__Concat(pSVar8," Vertical",(MethodInfo *)0x0);
                size_05.fields.y = cornerLength;
                size_05.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar8,color,(UnityEngine_Vector2_o)UVar2,
                           (UnityEngine_Vector2_o)UVar2,size_05,method_05);
                pSVar8 = "Bottom Right";
                if (DAT_057015c5 == '\0') {
                  il2cpp_init_method_metadata(&" Horizontal");
                  il2cpp_init_method_metadata(&" Vertical");
                  DAT_057015c5 = '\x01';
                }
                pSVar7 = System_String__Concat(pSVar8," Horizontal",(MethodInfo *)0x0);
                size_03.fields.y = thickness;
                size_03.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar7,color,(UnityEngine_Vector2_o)0x3f800000,
                           (UnityEngine_Vector2_o)0x3f800000,size_03,method_06);
                pSVar8 = System_String__Concat(pSVar8," Vertical",(MethodInfo *)0x0);
                size_06.fields.y = cornerLength;
                size_06.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar8,color,(UnityEngine_Vector2_o)0x3f800000,
                           (UnityEngine_Vector2_o)0x3f800000,size_06,method_07);
                pUVar6 = (__this->fields)._ring;
                if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
                  b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action);
                  System_Action___ctor();
                  if (DAT_057015b5 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Action);
                    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
                    DAT_057015b5 = '\x01';
                  }
                  a = *(System_Delegate_o **)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10);
                  while ((pSVar9 = System_Delegate__Combine(a,b,(MethodInfo *)0x0),
                         pSVar9 == (System_Delegate_o *)0x0 || (pSVar9->klass == TypeInfo_Action))) {
                    pSVar9 = (System_Delegate_o *)
                             il2cpp_glue_022c2530(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10,pSVar9,a);
                    bVar11 = a == pSVar9;
                    a = pSVar9;
                    if (bVar11) {
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pSVar9);
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnSelect (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2a610

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._selected = 1;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2a700

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._selected = 0;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2a710

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
    method = extraout_RDX;
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
      method = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,
                 *(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Pulse
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Pulse (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x3b2a7c0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Pulse
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_Tween_o *pDVar6;
  Il2CppObject *t;
  DG_Tweening_TweenCallback_o *action;
  
  if (DAT_057015c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Void_Refresh);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_057015c2 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pDVar6 = (__this->fields)._pulse;
  if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar6,0,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._ring;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ring;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._ring;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar3,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                       (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar1 = (__this->fields)._ring;
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
              pDVar5 = DG_Tweening_ShortcutExtensions__DOScale(pUVar3,1.16,0.12,(MethodInfo *)0x0);
              pDVar6 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                 ((Il2CppObject *)pDVar5,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
              pDVar4 = DG_Tweening_TweenSettingsExtensions__Append(pDVar4,pDVar6,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._ring;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                pDVar5 = DG_Tweening_ShortcutExtensions__DOScale(pUVar3,1.0,0.16,(MethodInfo *)0x0);
                pDVar6 = (DG_Tweening_Tween_o *)
                         DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                   ((Il2CppObject *)pDVar5,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
                pDVar4 = DG_Tweening_TweenSettingsExtensions__Append
                                   (pDVar4,pDVar6,(MethodInfo *)0x0);
                t = DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                              ((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
                DG_Tweening_TweenCallback___ctor();
                pDVar6 = (DG_Tweening_Tween_o *)
                         DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                   (t,action,MethodInfo_Sequence_OnComplete_Sequence);
                (__this->fields)._pulse = pDVar6;
                il2cpp_runtime_glue(&(__this->fields)._pulse);
                pDVar6 = (__this->fields)._pulse;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar6,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDisable (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x3b2aaa0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._selected = 0;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x3b2aab0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  System_Delegate_o *value;
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_057015c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Refresh);
    DAT_057015c3 = '\x01';
  }
  t = (__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  value = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (DAT_057015b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b6 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10);
  while( true ) {
    pSVar1 = System_Delegate__Remove(source,value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x3b2a620

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  byte bVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  
  if (DAT_057015c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015c4 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if ((char)(__this->fields)._selected != '\0') {
    if (DAT_0570136d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_0570136d = '\x01';
    }
    if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1) {
      pUVar3 = (__this->fields)._ring;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_03b2a6d3;
        UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
        bVar1 = 1;
        pUVar3 = (__this->fields)._ring;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03b2a6d3;
        goto LAB_03b2a6eb;
      }
      goto LAB_03b2a6d3;
    }
  }
  bVar1 = 0;
  pUVar3 = (__this->fields)._ring;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
LAB_03b2a6eb:
    UnityEngine_GameObject__SetActive(pUVar3,(uint)bVar1,(MethodInfo *)0x0);
    return;
  }
LAB_03b2a6d3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Corner
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_o anchor, UnityEngine_Vector2_o pivot, float thickness, float length, const MethodInfo* method);
// 0x3b2a530

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,System_String_o *name,
               UnityEngine_Color_o color,UnityEngine_Vector2_o anchor,UnityEngine_Vector2_o pivot,
               float thickness,float length,MethodInfo *method)

{
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057015c5 == '\0') {
    il2cpp_init_method_metadata(&" Horizontal");
    il2cpp_init_method_metadata(&" Vertical");
    DAT_057015c5 = '\x01';
  }
  pSVar1 = System_String__Concat(name," Horizontal",(MethodInfo *)0x0);
  size.fields.y = thickness;
  size.fields.x = length;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
            (__this,pSVar1,color,anchor,pivot,size,method_00);
  pSVar1 = System_String__Concat(name," Vertical",(MethodInfo *)0x0);
  size_00.fields.y = length;
  size_00.fields.x = thickness;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
            (__this,pSVar1,color,anchor,pivot,size_00,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Segment
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_o anchor, UnityEngine_Vector2_o pivot, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x3b2abd0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,System_String_o *name,
               UnityEngine_Color_o color,UnityEngine_Vector2_o anchor,UnityEngine_Vector2_o pivot,
               UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_MaskableGraphic_o *__this_04;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  float local_48;
  float local_38;
  
  if (DAT_057015c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_057015c6 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle = TypeRef_RectTransform;
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
    __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_01,name,components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._ring;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_02,parent,0,(MethodInfo *)0x0);
          __this_03 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(__this_03,anchor,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax(__this_03,anchor,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot(__this_03,pivot,(MethodInfo *)0x0);
            if (DAT_056fe093 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector2);
              DAT_056fe093 = '\x01';
            }
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_03,
                       (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                       ,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta(__this_03,size,(MethodInfo *)0x0);
            __this_04 = (UnityEngine_UI_MaskableGraphic_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_Image_AddComponent_Image);
            if (__this_04 != (UnityEngine_UI_MaskableGraphic_o *)0x0) {
              local_48 = color.fields.r;
              local_38 = color.fields.b;
              (*(__this_04->klass->vtable)._23_set_color.methodPtr)(local_48,local_38,__this_04);
              (*(__this_04->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_04,0,(__this_04->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_UI_MaskableGraphic__set_maskable(__this_04,0,(MethodInfo *)0x0);
              (*(__this_04->klass->vtable)._63_RecalculateClipping.methodPtr)
                        (__this_04,(__this_04->klass->vtable)._63_RecalculateClipping.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Stretch (UnityEngine_RectTransform_o* rect, float gap, const MethodInfo* method);
// 0x3b2a460

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Stretch
               (UnityEngine_RectTransform_o *rect,float gap,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  
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
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)(CONCAT44(gap,gap) ^ 0x8000000080000000),
               (MethodInfo *)0x0);
    value.fields.y = gap;
    value.fields.x = gap;
    UnityEngine_RectTransform__set_offsetMax(rect,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$MarkPreview
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__MarkPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b2a450

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__MarkPreview
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing___ctor (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x3b2ae70

void Gisketch_Aottg2UI_Actions_GisketchFocusRing___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


