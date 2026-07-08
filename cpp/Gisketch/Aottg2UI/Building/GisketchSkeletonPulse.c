// Type: Gisketch.Aottg2UI.Building.GisketchSkeletonPulse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSkeletonPulse.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_Color_o baseColor, UnityEngine_Color_o pulseColor, const MethodInfo* method);
// 0x3b1ba80

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,
               UnityEngine_UI_Image_o *image,UnityEngine_Color_o baseColor,
               UnityEngine_Color_o pulseColor,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  float local_58;
  float fStack_54;
  float local_38;
  float fStack_34;
  
  if (DAT_05701559 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701559 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._image = image;
  il2cpp_runtime_glue(&(__this->fields)._image,image,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (MethodInfo *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)image,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  (__this->fields)._root = (UnityEngine_RectTransform_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._root);
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
// 0x3b1c0f0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b1c100

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  DG_Tweening_Tween_o **ppDVar1;
  
  t = (__this->fields)._pulse;
  ppDVar1 = &(__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_glue(ppDVar1,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b1c160

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  DG_Tweening_Tween_o **ppDVar1;
  
  t = (__this->fields)._pulse;
  ppDVar1 = &(__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_glue(ppDVar1,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StartPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b1bf60

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_UI_Image_c *pUVar4;
  bool_conflict bVar5;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar6;
  DG_Tweening_Tween_o *pDVar7;
  MethodInfo *method_00;
  
  if (DAT_0570155a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_UpdateShimmer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetLoops_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    DAT_0570155a = '\x01';
  }
  pUVar3 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
    if (((char)bVar5 != '\0') && ((__this->fields)._pulse == (DG_Tweening_Tween_o *)0x0)) {
      pUVar3 = (__this->fields)._image;
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        uVar1._0_4_ = (__this->fields)._baseColor.fields.r;
        uVar1._4_4_ = (__this->fields)._baseColor.fields.g;
        uVar2._0_4_ = (__this->fields)._baseColor.fields.b;
        uVar2._4_4_ = (__this->fields)._baseColor.fields.a;
        pUVar4 = pUVar3->klass;
        method_00 = (pUVar4->vtable)._23_set_color.method;
        (*(pUVar4->vtable)._23_set_color.methodPtr)(uVar1,uVar2);
        Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer(__this,method_00);
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,onVirtualUpdate,(MethodInfo *)0x0);
        pIVar6 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)t,4,MethodInfo_Tweener_SetEase_Tweener);
        pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>(pIVar6,-1,0,MethodInfo_Tweener_SetLoops_Tweener);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar6,1,MethodInfo_Tweener_SetUpdate_Tweener);
        (__this->fields)._pulse = pDVar7;
        il2cpp_runtime_glue(&(__this->fields)._pulse,pDVar7);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StopPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b1c130

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  DG_Tweening_Tween_o **ppDVar1;
  
  t = (__this->fields)._pulse;
  ppDVar1 = &(__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_glue(ppDVar1,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$EnsureShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b1bb70

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  undefined8 uVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  UnityEngine_Sprite_o *value;
  undefined8 uVar10;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *method_01;
  
  if (DAT_0570155b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Skeleton Shimmer");
    DAT_0570155b = '\x01';
  }
  pUVar9 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pUVar9 = (__this->fields)._image;
  if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar9,MethodInfo_RectMask2D_GetComponent_RectMask2D);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar9 = (__this->fields)._image;
      if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03b1bf3c;
      UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    }
    pUVar9 = (__this->fields)._image;
    if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"AoTTG Skeleton Shimmer",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
        handle = TypeRef_RectTransform;
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (components == (System_Type_array *)0x0) goto LAB_03b1bf3c;
        if ((pSVar6 != (System_Type_o *)0x0) &&
           (lVar7 = il2cpp_runtime_glue(pSVar6,(((components->obj).klass)->_1).element_class),
           lVar7 == 0)) {
          uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar10,0);
        }
        if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        components->m_Items[0] = pSVar6;
        il2cpp_runtime_glue(components->m_Items,pSVar6);
        pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar4,"AoTTG Skeleton Shimmer",components,(MethodInfo *)0x0);
      }
      else {
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1bf3c;
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      }
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        pUVar9 = (__this->fields)._image;
        if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
           (parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar5,parent,0,(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
          ppUVar1 = &(__this->fields)._shimmer;
          (__this->fields)._shimmer = pUVar8;
          il2cpp_runtime_glue(ppUVar1,pUVar8);
          pUVar9 = (UnityEngine_UI_Image_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar9 = (UnityEngine_UI_Image_o *)
                     UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_Image_AddComponent_Image);
          }
          if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
            uVar10._0_4_ = (__this->fields)._pulseColor.fields.r;
            uVar10._4_4_ = (__this->fields)._pulseColor.fields.g;
            uVar2._0_4_ = (__this->fields)._pulseColor.fields.b;
            uVar2._4_4_ = (__this->fields)._pulseColor.fields.a;
            method_01 = pUVar9;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (uVar10,uVar2,pUVar9,(pUVar9->klass->vtable)._23_set_color.method);
            value = Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite
                              ((MethodInfo *)method_01);
            UnityEngine_UI_Image__set_sprite(pUVar9,value,(MethodInfo *)0x0);
            (*(pUVar9->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar9,0,(pUVar9->klass->vtable)._25_set_raycastTarget.method);
            pUVar8 = (__this->fields)._shimmer;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMax
                          (*ppUVar1,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                  method_00 = (MethodInfo *)0x0;
                  UnityEngine_RectTransform__set_pivot
                            (*ppUVar1,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer
                            (__this,0.0,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03b1bf3c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$UpdateShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, float value, const MethodInfo* method);
// 0x3b1c3c0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool_conflict bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  if (DAT_0570155c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570155c = '\x01';
  }
  pUVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (__this->fields)._shimmer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields)._root;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._shimmer;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          fVar3 = UVar6.fields.m_Width;
          fVar4 = UVar6.fields.m_Height;
          if (fVar3 <= 1.0) {
            fVar3 = 1.0;
          }
          fVar5 = fVar3 * 0.42;
          if (fVar5 <= 24.0) {
            fVar5 = 24.0;
          }
          if (fVar4 <= 1.0) {
            fVar4 = 1.0;
          }
          value_00.fields.y = fVar4 * 1.35;
          value_00.fields.x = fVar5;
          UnityEngine_RectTransform__set_sizeDelta(pUVar1,value_00,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._shimmer;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            fVar3 = fVar3 + fVar5 + fVar5;
            value_01.fields.y = 0.0;
            value_01.fields.x = fVar3 * value + fVar3 * -0.5;
            UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$FeatherSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite (const MethodInfo* method);
// 0x3b1c190

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Texture_o *__this;
  UnityEngine_Sprite_o *pUVar2;
  int x_00;
  float fVar3;
  float fVar4;
  UnityEngine_Color_o color;
  
  if (DAT_0570155d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSkeletonPulse);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"AoTTG Skeleton Shimmer Feather");
    DAT_0570155d = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this = (UnityEngine_Texture_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    x_00 = 0;
    UnityEngine_Texture2D___ctor((UnityEngine_Texture2D_o *)__this,0x40,1,4,0,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0);
      UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
      UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
      do {
        fVar3 = 1.0 - ABS((float)x_00 / 63.0 + (float)x_00 / 63.0 + -1.0);
        fVar4 = 1.0;
        if (fVar3 <= 1.0) {
          fVar4 = fVar3;
        }
        fVar4 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
        fVar4 = fVar4 * -2.0 * fVar4 * fVar4 + fVar4 * 3.0 * fVar4;
        color.fields.a = (1.0 - fVar4) * 0.0 + fVar4;
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        UnityEngine_Texture2D__SetPixel
                  ((UnityEngine_Texture2D_o *)__this,x_00,0,color,(MethodInfo *)0x0);
        x_00 = x_00 + 1;
      } while (x_00 != 0x40);
      UnityEngine_Texture2D__Apply((UnityEngine_Texture2D_o *)__this,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Sprite__Create
                         ((UnityEngine_Texture2D_o *)__this,
                          (UnityEngine_Rect_o)(ZEXT816(0x3f80000042800000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8) = pUVar2;
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchSkeletonPulse + 0xb8),pUVar2);
      if ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8) !=
          (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name
                  ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8),"AoTTG Skeleton Shimmer Feather",
                   (MethodInfo *)0x0);
        goto LAB_03b1c398;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03b1c398:
  return (UnityEngine_Sprite_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8);
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b1c510

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


