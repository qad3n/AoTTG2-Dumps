// Type: Gisketch.Aottg2UI.Building.GisketchSkeletonPulse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSkeletonPulse.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_Color_o baseColor, UnityEngine_Color_o pulseColor, const MethodInfo* method);
// 0x5391f20

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,UnityEngine_UI_Image_o *image,
               UnityEngine_Color_o baseColor,UnityEngine_Color_o pulseColor,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  float local_58;
  float fStack_54;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b38 = '\x01';
  }
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)image,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  }
  (__this->fields)._root = (UnityEngine_RectTransform_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
  local_58 = baseColor.fields.r;
  fStack_54 = baseColor.fields.g;
  (__this->fields)._baseColor.fields.r = local_58;
  (__this->fields)._baseColor.fields.g = fStack_54;
  (__this->fields)._baseColor.fields.b = baseColor.fields.b;
  (__this->fields)._baseColor.fields.a = baseColor.fields.a;
  local_38 = pulseColor.fields.r;
  fStack_34 = pulseColor.fields.g;
  (__this->fields)._pulseColor.fields.r = local_38;
  (__this->fields)._pulseColor.fields.g = fStack_34;
  (__this->fields)._pulseColor.fields.b = pulseColor.fields.b;
  (__this->fields)._pulseColor.fields.a = pulseColor.fields.a;
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer(__this,method_00);
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x5392580

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x5392590

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  DG_Tweening_Tween_o **targetAddress;
  
  t = (__this->fields)._pulse;
  targetAddress = &(__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  *targetAddress = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x53925f0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  DG_Tweening_Tween_o **targetAddress;
  
  t = (__this->fields)._pulse;
  targetAddress = &(__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  *targetAddress = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StartPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x53923f0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_UpdateShimmer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    Il2CppMethodInitialized_07542b39 = '\x01';
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    if ((bVar2) && ((__this->fields)._pulse == (DG_Tweening_Tween_o *)0x0)) {
      pUVar1 = (__this->fields)._image;
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_00 = (pUVar1->klass->vtable)._23_set_color.method;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o)(__this->fields)._baseColor.fields,method_00);
      Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer(__this,method_00);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_UpdateShimmer,
                 (MethodInfo_4293C90 *)0x0);
      pDVar3 = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,__this_00,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar3,4,
                          (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener
                         );
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__36b05f0
                         ((Il2CppObject *)pDVar3,-1,0,
                          (MethodInfo_36B05F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Tweener);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar3,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      (__this->fields)._pulse = (DG_Tweening_Tween_o *)pDVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StopPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x53925c0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  DG_Tweening_Tween_o **targetAddress;
  
  t = (__this->fields)._pulse;
  targetAddress = &(__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  *targetAddress = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$EnsureShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x5392010

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Sprite_o *value;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *method_01;
  
  if (Il2CppMethodInitialized_07542b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Skeleton Shimmer");
    Il2CppMethodInitialized_07542b3a = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar6 = (__this->fields)._image;
  if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_053923d3;
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar6,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar6 = (__this->fields)._image;
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_053923d3;
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_053923d3;
    UnityEngine_GameObject__AddComponent_object_
              (pUVar2,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
  }
  pUVar6 = (__this->fields)._image;
  if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"AoTTG Skeleton Shimmer",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_053923d3;
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      }
      else {
        components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
        handle = TypeRef_UnityEngine_RectTransform;
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (components == (System_Type_array *)0x0) goto label_053923d3;
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
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(pUVar2,"AoTTG Skeleton Shimmer",components,(MethodInfo *)0x0);
      }
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._image;
        if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(pUVar3,parent,false,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar2,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            targetAddress = &(__this->fields)._shimmer;
            (__this->fields)._shimmer = pUVar5;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar2,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar2,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_Image);
            }
            if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
              method_01 = pUVar6;
              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                        (pUVar6,(UnityEngine_Color_o)(__this->fields)._pulseColor.fields,
                         (pUVar6->klass->vtable)._23_set_color.method);
              value = Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite((MethodInfo *)method_01)
              ;
              UnityEngine_UI_Image__set_sprite(pUVar6,value,(MethodInfo *)0x0);
              (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pUVar6,false,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
              pUVar5 = (__this->fields)._shimmer;
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar5,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMax
                            (*targetAddress,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UnityEngine_RectTransform__set_pivot
                              (*targetAddress,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer(__this,0.0,method_00);
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
label_053923d3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$UpdateShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, float value, const MethodInfo* method);
// 0x5392850

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,float value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  if (Il2CppMethodInitialized_07542b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b3b = '\x01';
  }
  pUVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields)._shimmer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._root;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        fVar3 = UVar6.fields.m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar4 = UVar6.fields.m_Width;
        pUVar1 = (__this->fields)._shimmer;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          if (fVar4 <= 1.0) {
            fVar4 = 1.0;
          }
          fVar5 = fVar4 * 0.42;
          if (fVar5 <= 24.0) {
            fVar5 = 24.0;
          }
          if (fVar3 <= 1.0) {
            fVar3 = 1.0;
          }
          value_00.fields.y = fVar3 * 1.35;
          value_00.fields.x = fVar5;
          UnityEngine_RectTransform__set_sizeDelta(pUVar1,value_00,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._shimmer;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            fVar4 = fVar4 + fVar5 + fVar5;
            value_01.fields.y = 0.0;
            value_01.fields.x = fVar4 * value + fVar4 * -0.5;
            UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$FeatherSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite (const MethodInfo* method);
// 0x5392620

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  UnityEngine_Texture_o *__this;
  UnityEngine_Sprite_o *pUVar3;
  int x;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07542b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Skeleton Shimmer Feather");
    Il2CppMethodInitialized_07542b3c = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)
           TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_05392823:
    return TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
  }
  __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  x = 0;
  UnityEngine_Texture2D___ctor_68efe30((UnityEngine_Texture2D_o *)__this,0x40,1,4,false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0);
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
    do {
      fVar4 = 1.0 - ABS((float)x / 63.0 + (float)x / 63.0 + -1.0);
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
      fVar5 = fVar5 * 3.0 * fVar5 - (fVar5 + fVar5) * fVar5 * fVar5;
      color.fields.a = (1.0 - fVar5) * 0.0 + fVar5;
      color.fields.b = 1.0;
      color.fields.r = 1.0;
      color.fields.g = 1.0;
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this,x,0,color,(MethodInfo *)0x0);
      x = x + 1;
    } while (x != 0x40);
    UnityEngine_Texture2D__Apply_68f05d0((UnityEngine_Texture2D_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Sprite__Create_68ba7d0
                       ((UnityEngine_Texture2D_o *)__this,
                        (UnityEngine_Rect_o)(ZEXT816(0x3f80000042800000) << 0x40),
                        (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite = pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite);
    pUVar1 = (UnityEngine_Object_o *)
             TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
    if (pUVar1 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar1,"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0);
      goto label_05392823;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x53929c0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


