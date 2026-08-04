// Type: Gisketch.Aottg2UI.Building.GisketchSkeletonPulse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSkeletonPulse.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_Color_o baseColor, UnityEngine_Color_o pulseColor, const MethodInfo* method);
// 0x3b87cc0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,UnityEngine_UI_Image_o *image,
               UnityEngine_Color_o baseColor,UnityEngine_Color_o pulseColor,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_Type_o *pSVar3;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Il2CppClass *pIVar6;
  Il2CppMethodPointer pIVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  bool_conflict bVar9;
  System_Type_array *components;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  long lVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_Sprite_o *value_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar13;
  System_Type_o *pSVar14;
  MethodInfo *extraout_RDX;
  System_RuntimeTypeHandle_Fields unaff_RBX;
  undefined1 *puVar15;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar16;
  UnityEngine_UI_Image_o *method_01;
  UnityEngine_MonoBehaviour_o *__this_00;
  UnityEngine_UI_Image_o *unaff_R14;
  System_Type_array *unaff_R15;
  System_Type_array *pSVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Rect_o UVar21;
  undefined1 auStack_90 [16];
  float local_58;
  float fStack_54;
  float local_38;
  float fStack_34;
  
  if (g_data_057a9e88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e88 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._image = image;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image,image,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  components = (System_Type_array *)0x0;
  pSVar17 = (System_Type_array *)0x0;
  pUVar16 = image;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) {
      auStack_90._0_8_ = il2cpp_runtime_helper_022b2c90();
      puVar15 = auStack_90;
      auStack_90._8_8_ = __this;
      if (g_data_057a9e8a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
        il2cpp_runtime_helper_023445d0(&"AoTTG Skeleton Shimmer");
        g_data_057a9e8a = '\x01';
      }
      handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar16->fields).m_Material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      pUVar4 = (UnityEngine_Component_o *)(pUVar16->fields).m_Material;
      if (pUVar4 == (UnityEngine_Component_o *)0x0) {
label_03b8817c:
        il2cpp_runtime_helper_022b2c90();
        unaff_RBX = handle.fields.value;
label_03b88181:
        il2cpp_runtime_helper_022b2ca0();
      }
      else {
        handle.fields.value =
             (System_RuntimeTypeHandle_Fields)UnityEngine_Component__GetComponent_object_(pUVar4,MethodInfo_RectMask2D_GetComponent_RectMask2D)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pUVar4 = (UnityEngine_Component_o *)(pUVar16->fields).m_Material;
          if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
             (pUVar10 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
             pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_03b8817c;
          UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_RectMask2D_AddComponent_RectMask2D);
        }
        pUVar4 = (UnityEngine_Component_o *)(pUVar16->fields).m_Material;
        components = pSVar17;
        if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_transform(pUVar4,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_03b8817c;
        handle.fields.value =
             (System_RuntimeTypeHandle_Fields)
             UnityEngine_Transform__Find(pUVar11,"AoTTG Skeleton Shimmer",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (handle.fields.value != 0) {
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)handle.fields.value,(MethodInfo *)0x0);
joined_r0x03b87f62:
            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
              pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Component_o *)(pUVar16->fields).m_Material;
              if (pUVar4 != (UnityEngine_Component_o *)0x0) {
                parent = UnityEngine_Component__get_transform(pUVar4,(MethodInfo *)0x0);
                handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(pUVar11,parent,0,(MethodInfo *)0x0);
                  pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
                  components = (System_Type_array *)&(pUVar16->fields).m_Color.fields.b;
                  *(Il2CppObject **)&(pUVar16->fields).m_Color.fields.b = pIVar13;
                  il2cpp_runtime_helper_022b4080(components,pIVar13);
                  handle.fields.value =
                       (System_RuntimeTypeHandle_Fields)
                       UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Image_GetComponent_Image);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar9 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar9 != '\0') {
                    handle.fields.value =
                         (System_RuntimeTypeHandle_Fields)
                         UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_Image_AddComponent_Image);
                  }
                  if (handle.fields.value != 0) {
                    uVar1 = (pUVar16->fields).m_RaycastPadding.fields.x;
                    uVar2 = (pUVar16->fields).m_RaycastPadding.fields.z;
                    method_01 = (UnityEngine_UI_Image_o *)handle.fields.value;
                    (*(((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable)._23_set_color.methodPtr
                    )(uVar1,uVar2,handle.fields.value,
                      (((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable)._23_set_color.method);
                    value_01 = Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite
                                         ((MethodInfo *)method_01);
                    UnityEngine_UI_Image__set_sprite
                              ((UnityEngine_UI_Image_o *)handle.fields.value,value_01,(MethodInfo *)0x0);
                    (*(((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable)._25_set_raycastTarget.
                      methodPtr)(handle.fields.value,0,
                                 (((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable).
                                 _25_set_raycastTarget.method);
                    pUVar5 = *(UnityEngine_RectTransform_o **)&(pUVar16->fields).m_Color.fields.b;
                    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar5,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      if (*(UnityEngine_RectTransform_o **)components != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMax
                                  (*(UnityEngine_RectTransform_o **)components,
                                   (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                        if (*(UnityEngine_RectTransform_o **)components != (UnityEngine_RectTransform_o *)0x0)
                        {
                          UnityEngine_RectTransform__set_pivot
                                    (*(UnityEngine_RectTransform_o **)components,
                                     (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                          if (g_data_057a9e8b == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                            g_data_057a9e8b = '\x01';
                          }
                          pUVar8 = *(UnityEngine_Object_o **)&(pUVar16->fields).m_Color.fields;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar9 = UnityEngine_Object__op_Equality
                                            (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar9 == '\0') {
                            pUVar8 = *(UnityEngine_Object_o **)&(pUVar16->fields).m_Color.fields.b;
                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            bVar9 = UnityEngine_Object__op_Equality
                                              (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                            if ((char)bVar9 == '\0') {
                              pUVar5 = *(UnityEngine_RectTransform_o **)&(pUVar16->fields).m_Color.fields;
                              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                UVar21 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                                fVar18 = UVar21.fields.m_Width;
                                fVar19 = UVar21.fields.m_Height;
                                pUVar5 = *(UnityEngine_RectTransform_o **)&(pUVar16->fields).m_Color.fields.b;
                                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                  if (fVar18 <= 1.0) {
                                    fVar18 = 1.0;
                                  }
                                  fVar20 = fVar18 * 0.42;
                                  if (fVar20 <= 24.0) {
                                    fVar20 = 24.0;
                                  }
                                  if (fVar19 <= 1.0) {
                                    fVar19 = 1.0;
                                  }
                                  auStack_90 = ZEXT416((uint)fVar20);
                                  value.fields.y = fVar19 * 1.35;
                                  value.fields.x = fVar20;
                                  UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
                                  pUVar5 = *(UnityEngine_RectTransform_o **)
                                            &(pUVar16->fields).m_Color.fields.b;
                                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                    fVar18 = fVar18 + (float)auStack_90._0_4_ + (float)auStack_90._0_4_;
                                    value_00.fields.y = 0.0;
                                    value_00.fields.x = fVar18 * 0.0 + fVar18 * -0.5;
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar5,value_00,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                              __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
                              il2cpp_runtime_helper_022b2c90();
                              UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
                              return;
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
          goto label_03b8817c;
        }
        components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
        handle = TypeRef_RectTransform;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX.value = (intptr_t)System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (components == (System_Type_array *)0x0) goto label_03b8817c;
        if (((System_Type_o *)unaff_RBX.value == (System_Type_o *)0x0) ||
           (lVar12 = il2cpp_runtime_helper_023051f0(unaff_RBX.value), lVar12 != 0)) {
          if ((int)components->max_length != 0) {
            components->m_Items[0] = (System_Type_o *)unaff_RBX.value;
            il2cpp_runtime_helper_022b4080(components->m_Items,unaff_RBX.value);
            pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440(pUVar10,"AoTTG Skeleton Shimmer",components,(MethodInfo *)0x0);
            handle.fields.value =
                 (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)unaff_RBX.value;
            goto joined_r0x03b87f62;
          }
          goto label_03b88181;
        }
      }
      __this = (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10();
      goto Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse;
    }
    components = (System_Type_array *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)image,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  (__this->fields)._root = (UnityEngine_RectTransform_o *)components;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._root);
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
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer(__this,(MethodInfo *)components);
  puVar15 = (undefined1 *)register0x00000020;
  pUVar16 = unaff_R14;
  components = unaff_R15;
Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse:
  while( true ) {
    pSVar17 = (System_Type_array *)__this;
    *(System_Type_array **)(puVar15 + -8) = components;
    *(UnityEngine_UI_Image_o **)(puVar15 + -0x10) = pUVar16;
    *(intptr_t *)(puVar15 + -0x18) = unaff_RBX.value;
    if (g_data_057a9e89 == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x3b881bd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateShimmer);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b881c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b881d5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b881e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b881ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b881f9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9e89 = '\x01';
    }
    unaff_RBX.value = (intptr_t)pSVar17->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0x20) = 0x3b8821c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x3b88228;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX.value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x3b88236;
    bVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)pSVar17,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    if (pSVar17->m_Items[7] != (System_Type_o *)0x0) break;
    __this = (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)pSVar17->m_Items[0];
    if ((System_Type_array *)__this != (System_Type_array *)0x0) {
      pSVar14 = pSVar17->m_Items[3];
      pSVar3 = pSVar17->m_Items[4];
      pIVar6 = (((System_Type_array *)__this)->obj).klass;
      method_00 = (((System_Type_VTable *)pIVar6->vtable)->_23_GetType).method;
      pIVar7 = (((System_Type_VTable *)pIVar6->vtable)->_23_GetType).methodPtr;
      *(undefined8 *)(puVar15 + -0x20) = 0x3b88274;
      (*pIVar7)((int)pSVar14,(int)pSVar3);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b8827c;
      Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
                ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)pSVar17,method_00);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b8828b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b882a5;
      DG_Tweening_TweenCallback_float____ctor();
      *(undefined8 *)(puVar15 + -0x20) = 0x3b882c2;
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b882d9;
      pIVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,4,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b882f2;
      pIVar13 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__25f44a0(pIVar13,-1,0,MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)(puVar15 + -0x20) = 0x3b88309;
      pSVar14 = (System_Type_o *)
                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar13,1,MethodInfo_Tweener_SetUpdate_Tweener);
      pSVar17->m_Items[7] = pSVar14;
      il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 7,pSVar14);
      return;
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x3b88322;
    il2cpp_runtime_helper_022b2c90();
    puVar15 = puVar15 + -0x18;
    components = pSVar17;
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b88330

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnEnable
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_Image_o *unaff_RBX;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *__this_00;
  undefined8 unaff_R14;
  UnityEngine_UI_Image_o *unaff_R15;
  
  while( true ) {
    __this_00 = (UnityEngine_UI_Image_o *)__this;
    *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057a9e89 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881bd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateShimmer);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881d5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881f9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9e89 = '\x01';
    }
    unaff_RBX = ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_Fields *)&__this_00->fields)->_image;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8821c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88228;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88236;
    bVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_Fields *)&__this_00->fields)->_pulse !=
        (DG_Tweening_Tween_o *)0x0) break;
    __this = (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)
             ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_Fields *)&__this_00->fields)->_image;
    if ((UnityEngine_UI_Image_o *)__this != (UnityEngine_UI_Image_o *)0x0) {
      uVar1._0_4_ = (__this_00->fields).m_SkipLayoutUpdate;
      uVar1._4_4_ = (__this_00->fields).m_SkipMaterialUpdate;
      uVar2._0_4_ = (__this_00->fields).m_RaycastTarget;
      uVar2._4_4_ = (__this_00->fields).m_RaycastTargetCache;
      method_00 = (((UnityEngine_UI_Image_o *)__this)->klass->vtable)._23_set_color.method;
      pIVar3 = (((UnityEngine_UI_Image_o *)__this)->klass->vtable)._23_set_color.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88274;
      (*pIVar3)(uVar1,uVar2);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8827c;
      Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
                ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)__this_00,method_00);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8828b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882a5;
      DG_Tweening_TweenCallback_float____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882c2;
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882d9;
      pIVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,4,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882f2;
      pIVar5 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__25f44a0(pIVar5,-1,0,MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88309;
      pUVar6 = (UnityEngine_RectTransform_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar5,1,MethodInfo_Tweener_SetUpdate_Tweener);
      (__this_00->fields).m_RectTransform = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_RectTransform,pUVar6);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88322;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R15 = __this_00;
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDisable (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b88340

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
  il2cpp_runtime_helper_022b4080(ppDVar1,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__OnDestroy (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b883a0

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
  il2cpp_runtime_helper_022b4080(ppDVar1,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StartPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b881a0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StartPulse
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_Image_o *unaff_RBX;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *__this_00;
  undefined8 unaff_R14;
  UnityEngine_UI_Image_o *unaff_R15;
  
  while( true ) {
    __this_00 = (UnityEngine_UI_Image_o *)__this;
    *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057a9e89 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881bd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateShimmer);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881d5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b881f9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9e89 = '\x01';
    }
    unaff_RBX = ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_Fields *)&__this_00->fields)->_image;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8821c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88228;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88236;
    bVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_Fields *)&__this_00->fields)->_pulse !=
        (DG_Tweening_Tween_o *)0x0) break;
    __this = (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)
             ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_Fields *)&__this_00->fields)->_image;
    if ((UnityEngine_UI_Image_o *)__this != (UnityEngine_UI_Image_o *)0x0) {
      uVar1._0_4_ = (__this_00->fields).m_SkipLayoutUpdate;
      uVar1._4_4_ = (__this_00->fields).m_SkipMaterialUpdate;
      uVar2._0_4_ = (__this_00->fields).m_RaycastTarget;
      uVar2._4_4_ = (__this_00->fields).m_RaycastTargetCache;
      method_00 = (((UnityEngine_UI_Image_o *)__this)->klass->vtable)._23_set_color.method;
      pIVar3 = (((UnityEngine_UI_Image_o *)__this)->klass->vtable)._23_set_color.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88274;
      (*pIVar3)(uVar1,uVar2);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8827c;
      Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
                ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)__this_00,method_00);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8828b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882a5;
      DG_Tweening_TweenCallback_float____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882c2;
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882d9;
      pIVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,4,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b882f2;
      pIVar5 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__25f44a0(pIVar5,-1,0,MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88309;
      pUVar6 = (UnityEngine_RectTransform_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar5,1,MethodInfo_Tweener_SetUpdate_Tweener);
      (__this_00->fields).m_RectTransform = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_RectTransform,pUVar6);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b88322;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R15 = __this_00;
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StopPulse
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__StopPulse (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b88370

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
  il2cpp_runtime_helper_022b4080(ppDVar1,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$EnsureShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b87db0

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  System_Type_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  bool_conflict bVar6;
  undefined8 in_RAX;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_RuntimeTypeHandle_Fields x;
  long lVar9;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Sprite_o *value_01;
  System_Type_array *pSVar11;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar12;
  System_Type_o *pSVar13;
  undefined8 unaff_RBX;
  undefined8 *puVar14;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar15;
  System_Type_array *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  System_Type_array *unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Rect_o UVar19;
  undefined8 uStack_38;
  
  stack0xffffffffffffffd0 = unaff_RBX;
  uStack_38 = in_RAX;
  if (g_data_057a9e8a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Skeleton Shimmer");
    g_data_057a9e8a = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar6 != '\0') {
    return;
  }
  pUVar15 = (__this->fields)._image;
  if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
label_03b8817c:
    il2cpp_runtime_helper_022b2c90();
    x = handle.fields.value;
  }
  else {
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)
         UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar15,MethodInfo_RectMask2D_GetComponent_RectMask2D);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar15 = (__this->fields)._image;
      if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0)
         , pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto label_03b8817c;
      UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    }
    pUVar15 = (__this->fields)._image;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_03b8817c;
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)UnityEngine_Transform__Find(pUVar8,"AoTTG Skeleton Shimmer",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (handle.fields.value != 0) {
        pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)handle.fields.value,(MethodInfo *)0x0);
joined_r0x03b87f62:
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          pUVar15 = (__this->fields)._image;
          if (pUVar15 != (UnityEngine_UI_Image_o *)0x0) {
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar8,parent,0,(MethodInfo *)0x0);
              pUVar10 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
              unaff_R15 = (System_Type_array *)&(__this->fields)._shimmer;
              (__this->fields)._shimmer = pUVar10;
              il2cpp_runtime_helper_022b4080(unaff_R15,pUVar10);
              handle.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Image_GetComponent_Image);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar6 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                handle.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_Image_AddComponent_Image);
              }
              if (handle.fields.value != 0) {
                uVar1 = (__this->fields)._pulseColor.fields.r;
                uVar2._0_4_ = (__this->fields)._pulseColor.fields.b;
                uVar2._4_4_ = (__this->fields)._pulseColor.fields.a;
                pUVar15 = (UnityEngine_UI_Image_o *)handle.fields.value;
                (*(((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable)._23_set_color.methodPtr)
                          (uVar1,uVar2,handle.fields.value,
                           (((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable)._23_set_color.
                           method);
                value_01 = Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite
                                     ((MethodInfo *)pUVar15);
                UnityEngine_UI_Image__set_sprite
                          ((UnityEngine_UI_Image_o *)handle.fields.value,value_01,(MethodInfo *)0x0);
                (*(((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable)._25_set_raycastTarget.
                  methodPtr)(handle.fields.value,0,
                             (((UnityEngine_UI_Image_o *)handle.fields.value)->klass->vtable).
                             _25_set_raycastTarget.method);
                pUVar10 = (__this->fields)._shimmer;
                if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar10,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  if (*(UnityEngine_RectTransform_o **)unaff_R15 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (*(UnityEngine_RectTransform_o **)unaff_R15,
                               (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    if (*(UnityEngine_RectTransform_o **)unaff_R15 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (*(UnityEngine_RectTransform_o **)unaff_R15,
                                 (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      if (g_data_057a9e8b == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                        g_data_057a9e8b = '\x01';
                      }
                      pUVar10 = (__this->fields)._root;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar6 = UnityEngine_Object__op_Equality
                                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if ((char)bVar6 == '\0') {
                        pUVar10 = (__this->fields)._shimmer;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar6 = UnityEngine_Object__op_Equality
                                          ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if ((char)bVar6 == '\0') {
                          pUVar10 = (__this->fields)._root;
                          if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                            UVar19 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
                            pUVar10 = (__this->fields)._shimmer;
                            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                              fVar16 = UVar19.fields.m_Width;
                              fVar17 = UVar19.fields.m_Height;
                              if (fVar16 <= 1.0) {
                                fVar16 = 1.0;
                              }
                              fVar18 = fVar16 * 0.42;
                              if (fVar18 <= 24.0) {
                                fVar18 = 24.0;
                              }
                              if (fVar17 <= 1.0) {
                                fVar17 = 1.0;
                              }
                              _uStack_38 = ZEXT416((uint)fVar18);
                              value.fields.y = fVar17 * 1.35;
                              value.fields.x = fVar18;
                              UnityEngine_RectTransform__set_sizeDelta(pUVar10,value,(MethodInfo *)0x0);
                              pUVar10 = (__this->fields)._shimmer;
                              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                                fVar16 = fVar16 + (float)uStack_38 + (float)uStack_38;
                                value_00.fields.y = 0.0;
                                value_00.fields.x = fVar16 * 0.0 + fVar16 * -0.5;
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (pUVar10,value_00,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                          __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
                          il2cpp_runtime_helper_022b2c90();
                          UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
                          return;
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
      goto label_03b8817c;
    }
    unaff_R15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x.value = (intptr_t)System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (unaff_R15 == (System_Type_array *)0x0) goto label_03b8817c;
    if (((System_Type_o *)x.value != (System_Type_o *)0x0) &&
       (lVar9 = il2cpp_runtime_helper_023051f0(x.value), lVar9 == 0)) goto label_03b88186;
    if ((int)unaff_R15->max_length != 0) {
      unaff_R15->m_Items[0] = (System_Type_o *)x.value;
      il2cpp_runtime_helper_022b4080(unaff_R15->m_Items,x.value);
      pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar7,"AoTTG Skeleton Shimmer",unaff_R15,(MethodInfo *)0x0);
      handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)x.value;
      goto joined_r0x03b87f62;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b88186:
  pSVar11 = (System_Type_array *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  puVar14 = &uStack_38;
  while( true ) {
    __this_00 = pSVar11;
    *(System_Type_array **)((long)puVar14 + -8) = unaff_R15;
    *(Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o **)((long)puVar14 + -0x10) = __this;
    *(intptr_t *)((long)puVar14 + -0x18) = x.value;
    if (g_data_057a9e89 == '\0') {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b881bd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateShimmer);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b881c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b881d5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b881e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b881ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b881f9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9e89 = '\x01';
    }
    x.value = (intptr_t)__this_00->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8821c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar14 + -0x20) = 0x3b88228;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x.value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    *(undefined8 *)((long)puVar14 + -0x20) = 0x3b88236;
    bVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (__this_00->m_Items[7] != (System_Type_o *)0x0) break;
    pSVar11 = (System_Type_array *)__this_00->m_Items[0];
    if (pSVar11 != (System_Type_array *)0x0) {
      pSVar13 = __this_00->m_Items[3];
      pSVar3 = __this_00->m_Items[4];
      pIVar4 = (pSVar11->obj).klass;
      method_00 = (((System_Type_VTable *)pIVar4->vtable)->_23_GetType).method;
      pIVar5 = (((System_Type_VTable *)pIVar4->vtable)->_23_GetType).methodPtr;
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b88274;
      (*pIVar5)((int)pSVar13,pSVar3);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8827c;
      Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__EnsureShimmer
                ((Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)__this_00,method_00);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8828b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b882a5;
      DG_Tweening_TweenCallback_float____ctor();
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b882c2;
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,1.18,onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b882d9;
      pIVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,4,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b882f2;
      pIVar12 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__25f44a0(pIVar12,-1,0,MethodInfo_Tweener_SetLoops_Tweener);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b88309;
      pSVar13 = (System_Type_o *)
                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar12,1,MethodInfo_Tweener_SetUpdate_Tweener);
      __this_00->m_Items[7] = pSVar13;
      il2cpp_runtime_helper_022b4080(__this_00->m_Items + 7,pSVar13);
      return;
    }
    *(undefined8 *)((long)puVar14 + -0x20) = 0x3b88322;
    il2cpp_runtime_helper_022b2c90();
    puVar14 = (undefined8 *)((long)puVar14 + -0x18);
    unaff_R15 = __this_00;
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$UpdateShimmer
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, float value, const MethodInfo* method);
// 0x3b88600

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__UpdateShimmer
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,float value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool_conflict bVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  if (g_data_057a9e8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e8b = '\x01';
  }
  pUVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (__this->fields)._shimmer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
      __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$FeatherSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite (const MethodInfo* method);
// 0x3b883d0

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__FeatherSprite(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_Texture_c *x;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  undefined1 auVar2 [16];
  bool_conflict bVar3;
  UnityEngine_Texture_o *__this_00;
  UnityEngine_Sprite_o *pUVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  UnityEngine_Sprite_o *extraout_RAX;
  UnityEngine_Sprite_o *extraout_RAX_00;
  int32_t x_00;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o UVar10;
  
  if (g_data_057a9e8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSkeletonPulse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"AoTTG Skeleton Shimmer Feather");
    g_data_057a9e8c = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_03b885d8:
    return (UnityEngine_Sprite_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8);
  }
  __this_00 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  x_00 = 0;
  pUVar5 = __this_00;
  UnityEngine_Texture2D___ctor_4dd9130((UnityEngine_Texture2D_o *)__this_00,0x40,1,4,0,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0);
    UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
    UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
    do {
      fVar6 = 1.0 - ABS((float)x_00 / 63.0 + (float)x_00 / 63.0 + -1.0);
      fVar7 = 1.0;
      if (fVar6 <= 1.0) {
        fVar7 = fVar6;
      }
      fVar7 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
      fVar7 = fVar7 * -2.0 * fVar7 * fVar7 + fVar7 * 3.0 * fVar7;
      color.fields.a = (1.0 - fVar7) * 0.0 + fVar7;
      color.fields.b = 1.0;
      color.fields.r = 1.0;
      color.fields.g = 1.0;
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this_00,x_00,0,color,(MethodInfo *)0x0);
      x_00 = x_00 + 1;
    } while (x_00 != 0x40);
    UnityEngine_Texture2D__Apply_4dd97c0((UnityEngine_Texture2D_o *)__this_00,(MethodInfo *)0x0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)g_data_00d1aaf0;
    pUVar4 = UnityEngine_Sprite__Create_4e0d730
                       ((UnityEngine_Texture2D_o *)__this_00,(UnityEngine_Rect_o)(auVar2 << 0x40),
                        (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8) = pUVar4;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchSkeletonPulse + 0xb8));
    pUVar5 = (UnityEngine_Texture_o *)0x0;
    if ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8) != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchSkeletonPulse + 0xb8),"AoTTG Skeleton Shimmer Feather",(MethodInfo *)0x0
                );
      goto label_03b885d8;
    }
  }
  fVar7 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e8b = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)pUVar5[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Sprite_o *)CONCAT44(extraout_var,bVar3);
  if ((char)bVar3 == '\0') {
    x = pUVar5[2].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Sprite_o *)CONCAT44(extraout_var_00,bVar3);
    if ((char)bVar3 == '\0') {
      __this = (UnityEngine_RectTransform_o *)pUVar5[1].fields.m_CachedPtr;
      if (__this != (UnityEngine_RectTransform_o *)0x0) {
        UVar10 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
        if (pUVar5[2].klass != (UnityEngine_Texture_c *)0x0) {
          fVar6 = UVar10.fields.m_Width;
          fVar8 = UVar10.fields.m_Height;
          if (fVar6 <= 1.0) {
            fVar6 = 1.0;
          }
          fVar9 = fVar6 * 0.42;
          if (fVar9 <= 24.0) {
            fVar9 = 24.0;
          }
          if (fVar8 <= 1.0) {
            fVar8 = 1.0;
          }
          value.fields.y = fVar8 * 1.35;
          value.fields.x = fVar9;
          UnityEngine_RectTransform__set_sizeDelta
                    ((UnityEngine_RectTransform_o *)pUVar5[2].klass,value,(MethodInfo *)0x0);
          if (pUVar5[2].klass != (UnityEngine_Texture_c *)0x0) {
            fVar6 = fVar6 + fVar9 + fVar9;
            value_00.fields.y = 0.0;
            value_00.fields.x = fVar6 * fVar7 + fVar6 * -0.5;
            UnityEngine_RectTransform__set_anchoredPosition
                      ((UnityEngine_RectTransform_o *)pUVar5[2].klass,value_00,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
      __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  return pUVar4;
}


// Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o* __this, const MethodInfo* method);
// 0x3b88750

void Gisketch_Aottg2UI_Building_GisketchSkeletonPulse___ctor
               (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


