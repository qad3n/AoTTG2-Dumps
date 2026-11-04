// Type: Gisketch.Aottg2UI.Building.GisketchSkeletonPulse
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSkeletonPulse.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_Color_o baseColor, UnityEngine_Color_o pulseColor, const MethodInfo* method);
// 0x181908100

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,UnityEngine_UI_Image_o *image,
               UnityEngine_Color_o *baseColor,UnityEngine_Color_o *pulseColor,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  UnityEngine_RectTransform_o *value;
  
  if (Il2CppMethodInitialized_1843421b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421b9 = '\x01';
  }
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image,image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (image == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)image,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  }
  else {
    value = (UnityEngine_RectTransform_o *)0x0;
  }
  (__this->fields)._root = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root,value);
  fVar1 = (baseColor->fields).g;
  fVar2 = (baseColor->fields).b;
  fVar3 = (baseColor->fields).a;
  fVar4 = (pulseColor->fields).r;
  fVar5 = (pulseColor->fields).g;
  fVar6 = (pulseColor->fields).b;
  fVar7 = (pulseColor->fields).a;
  (__this->fields)._baseColor.fields.r = (baseColor->fields).r;
  (__this->fields)._baseColor.fields.g = fVar1;
  (__this->fields)._baseColor.fields.b = fVar2;
  (__this->fields)._baseColor.fields.a = fVar3;
  (__this->fields)._pulseColor.fields.r = fVar4;
  (__this->fields)._pulseColor.fields.g = fVar5;
  (__this->fields)._pulseColor.fields.b = fVar6;
  (__this->fields)._pulseColor.fields.a = fVar7;
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x1819080f0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x1819080b0

void
Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable(Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, MethodInfo* method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._pulse = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x1819080b0

void
Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy(Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, MethodInfo* method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._pulse = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StartPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x1819081d0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar3;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_1843421ba == '\0') {
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
    Il2CppMethodInitialized_1843421ba = '\x01';
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
      local_18.fields.r = (__this->fields)._baseColor.fields.r;
      local_18.fields.g = (__this->fields)._baseColor.fields.g;
      local_18.fields.b = (__this->fields)._baseColor.fields.b;
      local_18.fields.a = (__this->fields)._baseColor.fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,&local_18,(pUVar1->klass->vtable)._23_set_color.method);
      Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_UpdateShimmer,
                 (MethodInfo_E5A750 *)0x0);
      pDVar3 = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,__this_00,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar3,4,
                          (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener)
      ;
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__7ca0e0
                         ((Il2CppObject *)pDVar3,-1,0,
                          (MethodInfo_7CA0E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Tweener
                         );
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar3,true,
                          (MethodInfo_7CA3D0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      (__this->fields)._pulse = (DG_Tweening_Tween_o *)pDVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse,pDVar3);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StopPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x1819080b0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._pulse = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$EnsureShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x181907850

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
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
  UnityEngine_Sprite_o *value_01;
  UnityEngine_Rect_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_1843421bb == '\0') {
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
    Il2CppMethodInitialized_1843421bb = '\x01';
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
  if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar6,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar6 = (__this->fields)._image;
      if ((pUVar6 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_181907d8f;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar2,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    }
    pUVar6 = (__this->fields)._image;
    if ((pUVar6 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"AoTTG Skeleton Shimmer",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181907d8f;
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      }
      else {
        components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
        handle = TypeRef_UnityEngine_RectTransform;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (components == (System_Type_array *)0x0) goto label_181907d8f;
        if ((obj != (System_Type_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items,obj);
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar2,"AoTTG Skeleton Shimmer",components,(MethodInfo *)0x0);
      }
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._image;
        if ((pUVar6 != (UnityEngine_UI_Image_o *)0x0) &&
           (parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
           , pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar3,parent,false,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          (__this->fields)._shimmer = pUVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._shimmer,pUVar5);
          pUVar6 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image
                             );
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar6 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar2,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          }
          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
            local_58[0].m_XMin = (__this->fields)._pulseColor.fields.r;
            local_58[0].m_YMin = (__this->fields)._pulseColor.fields.g;
            local_58[0].m_Width = (__this->fields)._pulseColor.fields.b;
            local_58[0].m_Height = (__this->fields)._pulseColor.fields.a;
            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                      (pUVar6,(UnityEngine_Color_o *)local_58,(pUVar6->klass->vtable)._23_set_color.method);
            value_01 = Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite((MethodInfo *)0x0);
            UnityEngine_UI_Image__set_sprite(pUVar6,value_01,(MethodInfo *)0x0);
            (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar6,false,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
            pUVar5 = (__this->fields)._shimmer;
            if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar5,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              pUVar5 = (__this->fields)._shimmer;
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar5,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                pUVar5 = (__this->fields)._shimmer;
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_pivot
                            (pUVar5,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_1843421bc == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                    Il2CppMethodInitialized_1843421bc = '\x01';
                  }
                  pUVar5 = (__this->fields)._root;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar1 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (!bVar1) {
                    pUVar5 = (__this->fields)._shimmer;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar1 = UnityEngine_Object__op_Equality
                                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (!bVar1) {
                      pUVar5 = (__this->fields)._root;
                      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                        pUVar7 = UnityEngine_RectTransform__get_rect
                                           ((UnityEngine_Rect_o *)local_58,pUVar5,(MethodInfo *)0x0);
                        fVar10 = (pUVar7->fields).m_Width;
                        fVar9 = (pUVar7->fields).m_Height;
                        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                        }
                        if (fVar10 <= 1.0) {
                          fVar10 = 1.0;
                        }
                        fVar8 = fVar10 * 0.42;
                        if (fVar8 <= 24.0) {
                          fVar8 = 24.0;
                        }
                        pUVar5 = (__this->fields)._shimmer;
                        if (fVar9 <= 1.0) {
                          fVar9 = 1.0;
                        }
                        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                          fVar10 = fVar8 + fVar8 + fVar10;
                          value_00.fields.y = fVar9 * 1.35;
                          value_00.fields.x = fVar8;
                          UnityEngine_RectTransform__set_sizeDelta(pUVar5,value_00,(MethodInfo *)0x0);
                          pUVar5 = (__this->fields)._shimmer;
                          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                            value.fields.y = 0.0;
                            value.fields.x = -fVar10 * 0.5 + fVar10 * 0.0;
                            UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                      goto label_181907d8f;
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_181907d8f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$UpdateShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, float value, const MethodInfo* method);
// 0x181908360

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,float value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool bVar2;
  UnityEngine_Rect_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843421bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421bc = '\x01';
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
        pUVar3 = UnityEngine_RectTransform__get_rect(local_58,pUVar1,(MethodInfo *)0x0);
        fVar6 = (pUVar3->fields).m_Width;
        fVar5 = (pUVar3->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fVar6 <= 1.0) {
          fVar6 = 1.0;
        }
        fVar4 = fVar6 * 0.42;
        if (fVar4 <= 24.0) {
          fVar4 = 24.0;
        }
        pUVar1 = (__this->fields)._shimmer;
        if (fVar5 <= 1.0) {
          fVar5 = 1.0;
        }
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          fVar6 = fVar4 + fVar4 + fVar6;
          value_01.fields.y = fVar5 * 1.35;
          value_01.fields.x = fVar4;
          UnityEngine_RectTransform__set_sizeDelta(pUVar1,value_01,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._shimmer;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            value_00.fields.y = 0.0;
            value_00.fields.x = -fVar6 * 0.5 + fVar6 * value;
            UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value_00,(MethodInfo *)0x0);
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
// 0x181907db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181907f0c: nop dword ptr [rax]

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  UnityEngine_Texture_o *__this;
  UnityEngine_Sprite_o *value;
  int x;
  float fVar3;
  UnityEngine_Rect_Fields local_78 [7];
  
  if (Il2CppMethodInitialized_1843421bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Skeleton Shimmer Feather");
    Il2CppMethodInitialized_1843421bd = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)
           TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
  }
  __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  x = 0;
  UnityEngine_Texture2D___ctor_2efc630((UnityEngine_Texture2D_o *)__this,0x40,1,4,false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0);
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
    do {
      fVar3 = 1.0 - ABS(((float)x / 63.0 + (float)x / 63.0) - 1.0);
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      fVar3 = fVar3 * -2.0 * fVar3 * fVar3 + fVar3 * 3.0 * fVar3;
      local_78[0].m_XMin = 1.0;
      local_78[0].m_YMin = 1.0;
      local_78[0].m_Height = (1.0 - fVar3) * 0.0 + fVar3;
      local_78[0].m_Width = 1.0;
      UnityEngine_Texture2D__SetPixel
                ((UnityEngine_Texture2D_o *)__this,x,0,(UnityEngine_Color_o *)local_78,(MethodInfo *)0x0);
      x = x + 1;
    } while (x < 0x40);
    UnityEngine_Texture2D__Apply_2ef9fd0((UnityEngine_Texture2D_o *)__this,(MethodInfo *)0x0);
    local_78[0].m_XMin = 0.0;
    local_78[0].m_YMin = 0.0;
    local_78[0].m_Width = 64.0;
    local_78[0].m_Height = 1.0;
    value = UnityEngine_Sprite__Create_2ed4530
                      ((UnityEngine_Texture2D_o *)__this,(UnityEngine_Rect_o *)local_78,
                       (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite,value
              );
    pUVar1 = (UnityEngine_Object_o *)
             TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
    if (pUVar1 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar1,"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0);
      return TypeInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse->static_fields->_featherSprite;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor(Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


