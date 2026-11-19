// Type: Gisketch.Aottg2UI.Actions.GisketchFocusRing
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusRing.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_Color_o color, float thickness, float gap, float cornerLength, bool visible, const MethodInfo* method);
// 0x53a1fc0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,UnityEngine_Color_o color,
               float thickness,float gap,float cornerLength,bool visible,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o size_01;
  UnityEngine_Vector2_o size_02;
  UnityEngine_Vector2_o size_03;
  UnityEngine_Vector2_o size_04;
  UnityEngine_Vector2_o size_05;
  UnityEngine_Vector2_o size_06;
  Il2CppType *handle;
  bool bVar2;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_o *__this_02;
  System_Action_o *pSVar7;
  System_Delegate_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  System_Action_o *a;
  
  if (Il2CppMethodInitialized_07542bb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Focus Ring");
    il2cpp_codegen_initialize_runtime_metadata(&"Top Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Top Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom Right");
    Il2CppMethodInitialized_07542bb4 = '\x01';
  }
  if (visible) {
    x = (UnityEngine_Object_o *)(__this->fields)._ring;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
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
        targetAddress = &(__this->fields)._ring;
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(pUVar4,"AoTTG Focus Ring",components,(MethodInfo *)0x0);
        *targetAddress = pUVar4;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (*targetAddress,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                if (Il2CppMethodInitialized_07542885 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_07542885 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_offsetMin
                          (__this_01,(UnityEngine_Vector2_o)(CONCAT44(gap,gap) ^ 0x8000000080000000),
                           (MethodInfo *)0x0);
                value.fields.y = gap;
                value.fields.x = gap;
                UnityEngine_RectTransform__set_offsetMax(__this_01,value,(MethodInfo *)0x0);
                pSVar6 = "Top Left";
                if (Il2CppMethodInitialized_07542bb8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&" Horizontal");
                  il2cpp_codegen_initialize_runtime_metadata(&" Vertical");
                  Il2CppMethodInitialized_07542bb8 = '\x01';
                }
                pSVar5 = System_String__Concat_52f0320(pSVar6," Horizontal",(MethodInfo *)0x0);
                size.fields.y = thickness;
                size.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar5,color,(UnityEngine_Vector2_o)0x3f80000000000000,
                           (UnityEngine_Vector2_o)0x3f80000000000000,size,method_00);
                pSVar6 = System_String__Concat_52f0320(pSVar6," Vertical",(MethodInfo *)0x0);
                size_00.fields.y = cornerLength;
                size_00.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar6,color,(UnityEngine_Vector2_o)0x3f80000000000000,
                           (UnityEngine_Vector2_o)0x3f80000000000000,size_00,method_01);
                if (Il2CppMethodInitialized_07542885 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_07542885 = '\x01';
                }
                pSVar6 = "Top Right";
                UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
                if (Il2CppMethodInitialized_07542bb8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&" Horizontal");
                  il2cpp_codegen_initialize_runtime_metadata(&" Vertical");
                  Il2CppMethodInitialized_07542bb8 = '\x01';
                }
                pSVar5 = System_String__Concat_52f0320(pSVar6," Horizontal",(MethodInfo *)0x0);
                size_01.fields.y = thickness;
                size_01.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar5,color,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,
                           size_01,method_02);
                pSVar6 = System_String__Concat_52f0320(pSVar6," Vertical",(MethodInfo *)0x0);
                size_04.fields.y = cornerLength;
                size_04.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar6,color,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,
                           size_04,method_03);
                if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_0753ecc8 = '\x01';
                }
                pSVar6 = "Bottom Left";
                UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
                if (Il2CppMethodInitialized_07542bb8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&" Horizontal");
                  il2cpp_codegen_initialize_runtime_metadata(&" Vertical");
                  Il2CppMethodInitialized_07542bb8 = '\x01';
                }
                pSVar5 = System_String__Concat_52f0320(pSVar6," Horizontal",(MethodInfo *)0x0);
                size_02.fields.y = thickness;
                size_02.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar5,color,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,
                           size_02,method_04);
                pSVar6 = System_String__Concat_52f0320(pSVar6," Vertical",(MethodInfo *)0x0);
                size_05.fields.y = cornerLength;
                size_05.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar6,color,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,
                           size_05,method_05);
                pSVar6 = "Bottom Right";
                if (Il2CppMethodInitialized_07542bb8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&" Horizontal");
                  il2cpp_codegen_initialize_runtime_metadata(&" Vertical");
                  Il2CppMethodInitialized_07542bb8 = '\x01';
                }
                pSVar5 = System_String__Concat_52f0320(pSVar6," Horizontal",(MethodInfo *)0x0);
                size_03.fields.y = thickness;
                size_03.fields.x = cornerLength;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar5,color,(UnityEngine_Vector2_o)0x3f800000,
                           (UnityEngine_Vector2_o)0x3f800000,size_03,method_06);
                pSVar6 = System_String__Concat_52f0320(pSVar6," Vertical",(MethodInfo *)0x0);
                size_06.fields.y = cornerLength;
                size_06.fields.x = thickness;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                          (__this,pSVar6,color,(UnityEngine_Vector2_o)0x3f800000,
                           (UnityEngine_Vector2_o)0x3f800000,size_06,method_07);
                pUVar4 = (__this->fields)._ring;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                  System_Action___ctor
                            (__this_02,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh,
                             (MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_07542ba8 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
                    Il2CppMethodInitialized_07542ba8 = '\x01';
                  }
                  a = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
                  while ((value_00 = System_Delegate__Combine
                                               ((System_Delegate_o *)a,(System_Delegate_o *)__this_02,
                                                (MethodInfo *)0x0), value_00 == (System_Delegate_o *)0x0 ||
                         ((System_Action_c *)value_00->klass == TypeInfo_System_Action))) {
                    pSVar7 = il2cpp_codegen_interlocked_compare_exchange_ref
                                       (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->
                                         static_fields->Changed,value_00,a);
                    bVar2 = pSVar7 == a;
                    a = pSVar7;
                    if (bVar2) {
                      return;
                    }
                  }
                  il2cpp_codegen_raise_invalid_cast_exception(value_00);
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnSelect (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a2800

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a28f0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a2900

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Pulse
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Pulse (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x53a29b0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Pulse
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_Tween_o *pDVar6;
  DG_Tweening_TweenCallback_o *__this_00;
  
  if (Il2CppMethodInitialized_07542bb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_07542bb5 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pDVar6 = (__this->fields)._pulse;
  if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar6,false,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._ring;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ring;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._ring;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar3,(UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar1 = (__this->fields)._ring;
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
              pDVar5 = DG_Tweening_ShortcutExtensions__DOScale_31764d0(pUVar3,1.16,0.12,(MethodInfo *)0x0);
              pDVar6 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                 ((Il2CppObject *)pDVar5,9,
                                  (MethodInfo_36B0160 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                 );
              pDVar4 = DG_Tweening_TweenSettingsExtensions__Append(pDVar4,pDVar6,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._ring;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                pDVar5 = DG_Tweening_ShortcutExtensions__DOScale_31764d0(pUVar3,1.0,0.16,(MethodInfo *)0x0);
                pDVar6 = (DG_Tweening_Tween_o *)
                         DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                   ((Il2CppObject *)pDVar5,9,
                                    (MethodInfo_36B0160 *)
                                    MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                   );
                pDVar4 = DG_Tweening_TweenSettingsExtensions__Append(pDVar4,pDVar6,(MethodInfo *)0x0);
                pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                   ((Il2CppObject *)pDVar4,true,
                                    (MethodInfo_36B08F0 *)
                                    MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
                __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                DG_Tweening_TweenCallback___ctor
                          (__this_00,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh,
                           (MethodInfo *)0x0);
                pDVar4 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                   ((Il2CppObject *)pDVar4,__this_00,
                                    (MethodInfo_36AF8A0 *)
                                    MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
                (__this->fields)._pulse = (DG_Tweening_Tween_o *)pDVar4;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse);
                pDVar6 = (__this->fields)._pulse;
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar6,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDisable (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x53a2c90

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x53a2ca0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  System_Action_o *__this_00;
  System_Action_o *pSVar1;
  System_Delegate_o *value;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
    Il2CppMethodInitialized_07542bb6 = '\x01';
  }
  t = (__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542ba9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542ba9 = '\x01';
  }
  source = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
  while( true ) {
    value = System_Delegate__Remove
                      ((System_Delegate_o *)source,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
    if ((value != (System_Delegate_o *)0x0) && ((System_Action_c *)value->klass != TypeInfo_System_Action))
    break;
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed,
                        value,source);
    bVar2 = pSVar1 == source;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value);
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x53a2810

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542bb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bb7 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((__this->fields)._selected != false) {
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
    }
    if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1)
    {
      pUVar2 = (__this->fields)._ring;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_053a28c3;
        UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
        bVar1 = true;
        pUVar2 = (__this->fields)._ring;
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_053a28c3;
        goto label_053a28db;
      }
      goto label_053a28c3;
    }
  }
  bVar1 = false;
  pUVar2 = (__this->fields)._ring;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
label_053a28db:
    UnityEngine_GameObject__SetActive(pUVar2,bVar1,(MethodInfo *)0x0);
    return;
  }
label_053a28c3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Corner
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_o anchor, UnityEngine_Vector2_o pivot, float thickness, float length, const MethodInfo* method);
// 0x53a2720

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
  
  if (Il2CppMethodInitialized_07542bb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" Horizontal");
    il2cpp_codegen_initialize_runtime_metadata(&" Vertical");
    Il2CppMethodInitialized_07542bb8 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(name," Horizontal",(MethodInfo *)0x0);
  size.fields.y = thickness;
  size.fields.x = length;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment(__this,pSVar1,color,anchor,pivot,size,method_00);
  pSVar1 = System_String__Concat_52f0320(name," Vertical",(MethodInfo *)0x0);
  size_00.fields.y = length;
  size_00.fields.x = thickness;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment(__this,pSVar1,color,anchor,pivot,size_00,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Segment
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_o anchor, UnityEngine_Vector2_o pivot, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x53a2da0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,System_String_o *name,
               UnityEngine_Color_o color,UnityEngine_Vector2_o anchor,UnityEngine_Vector2_o pivot,
               UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Image_o *__this_04;
  
  if (Il2CppMethodInitialized_07542bb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07542bb9 = '\x01';
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
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_01,name,components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._ring;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_02,parent,false,(MethodInfo *)0x0);
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(__this_03,anchor,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax(__this_03,anchor,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot(__this_03,pivot,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_03,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta(__this_03,size,(MethodInfo *)0x0);
            __this_04 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_01,
                                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image)
            ;
            if (__this_04 != (UnityEngine_UI_Image_o *)0x0) {
              (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                        (__this_04,color,(__this_04->klass->vtable)._23_set_color.method);
              (*(__this_04->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_04,false,(__this_04->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_UI_MaskableGraphic__set_maskable
                        ((UnityEngine_UI_MaskableGraphic_o *)__this_04,false,(MethodInfo *)0x0);
              (*(__this_04->klass->vtable)._63_RecalculateClipping.methodPtr)
                        (__this_04,(__this_04->klass->vtable)._63_RecalculateClipping.method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Stretch (UnityEngine_RectTransform_o* rect, float gap, const MethodInfo* method);
// 0x53a2650

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Stretch
               (UnityEngine_RectTransform_o *rect,float gap,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  
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
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(CONCAT44(gap,gap) ^ 0x8000000080000000),(MethodInfo *)0x0);
  value.fields.y = gap;
  value.fields.x = gap;
  UnityEngine_RectTransform__set_offsetMax(rect,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$MarkPreview
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__MarkPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x53a2640

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__MarkPreview(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing___ctor (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x53a3040

void Gisketch_Aottg2UI_Actions_GisketchFocusRing___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


