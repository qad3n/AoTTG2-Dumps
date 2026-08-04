// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x3b929c0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, float value, const MethodInfo* method);
// 0x3b92a20

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               float value,MethodInfo *method)

{
  bool_conflict *pbVar1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_Fields *pGVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Material_o *__this_00;
  UnityEngine_UI_Image_o *pUVar6;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Behaviour_o *pUVar9;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_Fields UVar10;
  bool_conflict bVar11;
  Il2CppObject *pIVar12;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar13;
  UnityEngine_RectTransform_o *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Sprite_o *in_RCX;
  undefined8 extraout_RDX;
  void *extraout_RDX_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o **ppGVar14;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *pGVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Rect_o UVar19;
  
  ppGVar14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o **)__this;
  if (g_data_057a9ecc == '\0') {
    ppGVar14 = &TypeInfo_GisketchSurfaceMaterial;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ecc = '\x01';
  }
  pGVar13 = (__this->fields).__4__this;
  if (pGVar13 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
    __this_00 = (pGVar13->fields)._brushMaterial;
    ppGVar14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o **)TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[7].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat_4dcd3b0
                (__this_00,*(int32_t *)(*(long *)&TypeInfo_GisketchSurfaceMaterial[5].fields.active + 0x48),value,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)ppGVar14)->
            fields).active != '\0') {
    return;
  }
  pGVar13 = (((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)ppGVar14)->
            fields).__4__this;
  if ((pGVar13 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
     (pUVar6 = (pGVar13->fields)._brush,
     ppGVar14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o **)0x0,
     pUVar6 != (UnityEngine_UI_Image_o *)0x0)) {
    uVar3 = (pGVar13->fields)._hiddenBrush.fields.r;
    uVar4._0_4_ = (pGVar13->fields)._hiddenBrush.fields.b;
    uVar4._4_4_ = (pGVar13->fields)._hiddenBrush.fields.a;
    vtableDispatch = (pUVar6->klass->vtable)._23_set_color.methodPtr;
    (*vtableDispatch)
              (uVar3,uVar4,pUVar6,(pUVar6->klass->vtable)._23_set_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ecd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Mask_GetComponent_Mask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ecd = '\x01';
  }
  ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)((long)ppGVar14 + 0x20))->
  klass = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method;
  il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)
                     ((long)ppGVar14 + 0x20),method);
  ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)((long)ppGVar14 + 0x20))->
  monitor = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)
                      ((long)ppGVar14 + 0x20))->monitor);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = (Il2CppObject *)0x0;
  pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_03b92ba4:
    pbVar1 = &(((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)
               ((long)ppGVar14 + 0x20))->fields).active;
    *(Il2CppObject **)
     &(((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)
       ((long)ppGVar14 + 0x20))->fields).active = pIVar12;
    il2cpp_runtime_helper_022b4080(pbVar1);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0;
    pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method ==
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0)
      goto label_03b92d06;
      pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Mask_GetComponent_Mask);
    }
    pGVar2 = &((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)
              ((long)ppGVar14 + 0x20))->fields;
    (((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)((long)ppGVar14 + 0x20)
     )->fields).__4__this = pGVar13;
    il2cpp_runtime_helper_022b4080(pGVar2);
    pUVar7 = *(UnityEngine_Object_o **)
              &(((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)
                ((long)ppGVar14 + 0x20))->fields).active;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
label_03b92cb1:
      pGVar13 = pGVar2->__4__this;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pGVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
      if (pGVar2->__4__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2->__4__this,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
      if (*(UnityEngine_UI_Image_o **)pbVar1 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(*(UnityEngine_UI_Image_o **)pbVar1,in_RCX,(MethodInfo *)0x0);
        pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
        if (*(UnityEngine_UI_Image_o **)pbVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_type(*(UnityEngine_UI_Image_o **)pbVar1,1,(MethodInfo *)0x0);
          pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
          if (*(long **)pbVar1 != (long *)0x0) {
            (**(code **)(**(long **)pbVar1 + 0x2a8))(0x3f800000,0x3f8000003f800000);
            plVar16 = *(long **)pbVar1;
            pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x2c8))(plVar16,0,*(undefined8 *)(*plVar16 + 0x2d0));
              pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
              if (*(UnityEngine_Behaviour_o **)pbVar1 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(*(UnityEngine_Behaviour_o **)pbVar1,0,(MethodInfo *)0x0);
                goto label_03b92cb1;
              }
            }
          }
        }
      }
    }
  }
  else if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method !=
           (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0) {
    pIVar12 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Image_GetComponent_Image);
    goto label_03b92ba4;
  }
label_03b92d06:
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    g_data_057a9ece = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  plVar16 = (long *)__this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_03b93040;
  (__this_01->fields).m_CachedPtr = (intptr_t)pGVar15;
  il2cpp_runtime_helper_022b4080(&__this_01->fields);
  pUVar7 = (pGVar15->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar7 = *(UnityEngine_Object_o **)&(pGVar15->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pUVar7 = (pGVar15->_1).this_arg.data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pUVar8 = (pGVar15->_1).byval_arg.data;
        plVar16 = (long *)0x0;
        if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
          UVar10 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransform__get_sizeDelta(pUVar8,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&__this_01[1].monitor + 4) = UVar10;
          pUVar8 = *(UnityEngine_RectTransform_o **)&(pGVar15->_1).byval_arg.bits;
          plVar16 = (long *)0x0;
          if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
            UVar10 = (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransform__get_anchoredPosition(pUVar8,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&__this_01[1].klass + 4) = UVar10;
            pUVar8 = (pGVar15->_1).byval_arg.data;
            plVar16 = (long *)0x0;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              UVar19 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
              fVar18 = 64.0;
              if (64.0 <= UVar19.fields.m_Width) {
                fVar18 = UVar19.fields.m_Width;
              }
              *(float *)&__this_01[1].klass = fVar18;
              pUVar7 = *(UnityEngine_Object_o **)&(pGVar15->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar11 != '\0') {
                pUVar9 = *(UnityEngine_Behaviour_o **)&(pGVar15->_1).this_arg.bits;
                plVar16 = (long *)0x0;
                if (pUVar9 == (UnityEngine_Behaviour_o *)0x0) goto label_03b93040;
                UnityEngine_Behaviour__set_enabled(pUVar9,1,(MethodInfo *)0x0);
              }
              pUVar9 = (pGVar15->_1).this_arg.data;
              plVar16 = (long *)0x0;
              if (pUVar9 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(pUVar9,1,(MethodInfo *)0x0);
                plVar16 = (pGVar15->_1).byval_arg.data;
                if ((UnityEngine_RectTransform_o *)plVar16 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                            ((UnityEngine_RectTransform_o *)plVar16,0,0.0,(MethodInfo *)0x0);
                  pUVar8 = *(UnityEngine_RectTransform_o **)&(pGVar15->_1).byval_arg.bits;
                  uVar4 = *(undefined8 *)((long)&__this_01[1].klass + 4);
                  if (g_data_057a9c8a == '\0') {
                    plVar16 = &TypeInfo_Vector2;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9c8a = '\x01';
                  }
                  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    value_00.fields.y =
                         (float)((ulong)uVar4 >> 0x20) +
                         *(float *)&__this_01[1].klass * (float)((ulong)uVar5 >> 0x20);
                    value_00.fields.x = (float)uVar4 + *(float *)&__this_01[1].klass * (float)uVar5;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar8,value_00,(MethodInfo *)0x0);
                    fVar18 = 0.01;
                    if (0.01 <= fVar17) {
                      fVar18 = fVar17;
                    }
                    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor();
                    t = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar18,onVirtualUpdate,(MethodInfo *)0x0);
                    pIVar12 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                        ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar12,action,MethodInfo_Tweener_OnComplete_Tweener);
                    return;
                  }
                }
              }
            }
          }
        }
label_03b93040:
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)plVar16,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x3b92ab0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  bool_conflict *pbVar1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_Fields *pGVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_UI_Image_o *pUVar6;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Object_o *pUVar7;
  Il2CppClass *pIVar8;
  UnityEngine_RectTransform_o *pUVar9;
  Il2CppRGCTXData *pIVar10;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_Vector2_o UVar11;
  bool_conflict bVar12;
  Il2CppObject *pIVar13;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar14;
  Il2CppClass *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Sprite_o *in_RCX;
  undefined8 in_RDX;
  void *extraout_RDX;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *pGVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Rect_o UVar19;
  
  if ((char)(__this->fields).active != '\0') {
    return;
  }
  pGVar14 = (__this->fields).__4__this;
  if ((pGVar14 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
     (pUVar6 = (pGVar14->fields)._brush,
     __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)0x0,
     pUVar6 != (UnityEngine_UI_Image_o *)0x0)) {
    uVar3 = (pGVar14->fields)._hiddenBrush.fields.r;
    uVar4._0_4_ = (pGVar14->fields)._hiddenBrush.fields.b;
    uVar4._4_4_ = (pGVar14->fields)._hiddenBrush.fields.a;
    vtableDispatch = (pUVar6->klass->vtable)._23_set_color.methodPtr;
    (*vtableDispatch)
              (uVar3,uVar4,pUVar6,(pUVar6->klass->vtable)._23_set_color.method,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ecd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Mask_GetComponent_Mask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ecd = '\x01';
  }
  __this[1].klass = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method;
  il2cpp_runtime_helper_022b4080(__this + 1,method);
  __this[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&__this[1].monitor);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar13 = (Il2CppObject *)0x0;
  pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_03b92ba4:
    pbVar1 = &__this[1].fields.active;
    *(Il2CppObject **)&__this[1].fields.active = pIVar13;
    il2cpp_runtime_helper_022b4080(pbVar1);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0;
    pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method ==
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0)
      goto label_03b92d06;
      pGVar14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Mask_GetComponent_Mask);
    }
    pGVar2 = &__this[1].fields;
    __this[1].fields.__4__this = pGVar14;
    il2cpp_runtime_helper_022b4080(pGVar2);
    pUVar7 = *(UnityEngine_Object_o **)&__this[1].fields.active;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_03b92cb1:
      pGVar14 = pGVar2->__4__this;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pGVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return;
      }
      pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
      if (pGVar2->__4__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2->__4__this,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
      if (*(UnityEngine_UI_Image_o **)pbVar1 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(*(UnityEngine_UI_Image_o **)pbVar1,in_RCX,(MethodInfo *)0x0);
        pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
        if (*(UnityEngine_UI_Image_o **)pbVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_type(*(UnityEngine_UI_Image_o **)pbVar1,1,(MethodInfo *)0x0);
          pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
          if (*(long **)pbVar1 != (long *)0x0) {
            (**(code **)(**(long **)pbVar1 + 0x2a8))(0x3f800000,0x3f8000003f800000);
            plVar16 = *(long **)pbVar1;
            pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x2c8))(plVar16,0,*(undefined8 *)(*plVar16 + 0x2d0));
              pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0;
              if (*(UnityEngine_Behaviour_o **)pbVar1 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(*(UnityEngine_Behaviour_o **)pbVar1,0,(MethodInfo *)0x0);
                goto label_03b92cb1;
              }
            }
          }
        }
      }
    }
  }
  else if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)method !=
           (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_c *)0x0) {
    pIVar13 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Image_GetComponent_Image);
    goto label_03b92ba4;
  }
label_03b92d06:
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    g_data_057a9ece = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  plVar16 = (long *)__this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppClass *)0x0) goto label_03b93040;
  ((UnityEngine_RectTransform_Fields *)&(__this_01->_1).name)->m_CachedPtr = (intptr_t)pGVar15;
  il2cpp_runtime_helper_022b4080((UnityEngine_RectTransform_Fields *)&(__this_01->_1).name);
  pIVar8 = (pGVar15->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar7 = *(UnityEngine_Object_o **)&(pGVar15->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      pUVar7 = (pGVar15->_1).this_arg.data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        pIVar8 = (pGVar15->_1).byval_arg.data;
        plVar16 = (long *)0x0;
        if (pIVar8 != (Il2CppClass *)0x0) {
          UVar11 = UnityEngine_RectTransform__get_sizeDelta
                             ((UnityEngine_RectTransform_o *)pIVar8,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&(__this_01->_1).byval_arg.data + 4) = UVar11.fields;
          pUVar9 = *(UnityEngine_RectTransform_o **)&(pGVar15->_1).byval_arg.bits;
          plVar16 = (long *)0x0;
          if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
            UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar9,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&(__this_01->_1).namespaze + 4) = UVar11.fields;
            pIVar8 = (pGVar15->_1).byval_arg.data;
            plVar16 = (long *)0x0;
            if (pIVar8 != (Il2CppClass *)0x0) {
              UVar19 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_RectTransform_o *)pIVar8,(MethodInfo *)0x0);
              fVar18 = 64.0;
              if (64.0 <= UVar19.fields.m_Width) {
                fVar18 = UVar19.fields.m_Width;
              }
              *(float *)&(__this_01->_1).namespaze = fVar18;
              pIVar10 = ((_union_13 *)&(pGVar15->_1).this_arg.bits)->rgctx_data;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pIVar10,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                pIVar10 = ((_union_13 *)&(pGVar15->_1).this_arg.bits)->rgctx_data;
                plVar16 = (long *)0x0;
                if (pIVar10 == (Il2CppRGCTXData *)0x0) goto label_03b93040;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar10,1,(MethodInfo *)0x0);
              }
              __this_00 = (pGVar15->_1).this_arg.data;
              plVar16 = (long *)0x0;
              if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
                plVar16 = (pGVar15->_1).byval_arg.data;
                if ((Il2CppClass *)plVar16 != (Il2CppClass *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                            ((UnityEngine_RectTransform_o *)plVar16,0,0.0,(MethodInfo *)0x0);
                  pUVar9 = *(UnityEngine_RectTransform_o **)&(pGVar15->_1).byval_arg.bits;
                  uVar4 = *(undefined8 *)((long)&(__this_01->_1).namespaze + 4);
                  if (g_data_057a9c8a == '\0') {
                    plVar16 = &TypeInfo_Vector2;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9c8a = '\x01';
                  }
                  if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    fVar18 = *(float *)&(__this_01->_1).namespaze;
                    UVar11.fields.y = (float)((ulong)uVar4 >> 0x20) + fVar18 * (float)((ulong)uVar5 >> 0x20);
                    UVar11.fields.x = (float)uVar4 + fVar18 * (float)uVar5;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar9,UVar11,(MethodInfo *)0x0);
                    fVar18 = 0.01;
                    if (0.01 <= fVar17) {
                      fVar18 = fVar17;
                    }
                    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor();
                    t = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar18,onVirtualUpdate,(MethodInfo *)0x0);
                    pIVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                        ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar13,action,MethodInfo_Tweener_OnComplete_Tweener);
                    return;
                  }
                }
              }
            }
          }
        }
label_03b93040:
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)plVar16,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_UI_Image_o* brush, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* icon, UnityEngine_RectTransform_o* content, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b91510

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_UI_Image_o *brush,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_UI_Image_o *icon,
               UnityEngine_RectTransform_o *content,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_UI_Image_c *x;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o *value;
  code *pcVar6;
  UnityEngine_Behaviour_o *__this_01;
  UnityEngine_Object_c *pUVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_o UVar9;
  float fVar10;
  UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o **ppUVar11;
  bool_conflict bVar12;
  UnityEngine_Material_o *pUVar13;
  MethodInfo *pMVar14;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_Object_o *__this_02;
  System_String_o *value_00;
  TMPro_TextMeshProUGUI_o *pTVar16;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar17;
  undefined8 unaff_RBX;
  UnityEngine_UI_Image_c *unaff_RBP;
  MethodInfo_255A020 *pMVar18;
  long *unaff_R12;
  TMPro_TextMeshProUGUI_o *unaff_R14;
  UnityEngine_Object_o *unaff_R15;
  long *plVar19;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  undefined8 in_XMM1_Qa;
  UnityEngine_Color_o fallback;
  undefined8 uStack_98;
  TMPro_TextMeshProUGUI_o *pTStack_90;
  UnityEngine_Object_o *pUStack_88;
  undefined8 uStack_80;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGStack_78;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_70;
  UnityEngine_UI_Image_o *pUStack_68;
  UnityEngine_Object_o *pUStack_60;
  UnityEngine_UI_Image_o *local_50;
  UnityEngine_UI_Image_o **local_48;
  UnityEngine_Object_o *local_40;
  UnityEngine_UI_Image_o *local_38;
  UnityEngine_Color_Fields UVar23;
  
  local_50 = icon;
  if (g_data_057a9ec3 == '\0') {
    pUStack_60 = (UnityEngine_Object_o *)0x3b91547;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    pUStack_60 = (UnityEngine_Object_o *)0x3b91553;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_60 = (UnityEngine_Object_o *)0x3b9155f;
    il2cpp_runtime_helper_023445d0(&"buttonText");
    g_data_057a9ec3 = '\x01';
  }
  x = (UnityEngine_UI_Image_c *)&(__this->fields)._brush;
  (__this->fields)._brush = brush;
  pUStack_60 = (UnityEngine_Object_o *)0x3b91579;
  il2cpp_runtime_helper_022b4080(x,brush);
  local_40 = (UnityEngine_Object_o *)&(__this->fields)._label;
  (__this->fields)._label = label;
  pUStack_60 = (UnityEngine_Object_o *)0x3b9158e;
  il2cpp_runtime_helper_022b4080(local_40,label);
  local_38 = (UnityEngine_UI_Image_o *)&(__this->fields)._icon;
  (__this->fields)._icon = local_50;
  pUStack_60 = (UnityEngine_Object_o *)0x3b915a5;
  il2cpp_runtime_helper_022b4080();
  (__this->fields)._content = content;
  pUStack_60 = (UnityEngine_Object_o *)0x3b915b5;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._content);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_60 = (UnityEngine_Object_o *)0x3b915cd;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_60 = (UnityEngine_Object_o *)0x3b915d9;
  pTVar16 = (TMPro_TextMeshProUGUI_o *)content;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if (g_data_057a694c == '\0') {
      pUStack_60 = (UnityEngine_Object_o *)0x3b91607;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    fVar20 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    fVar22 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
label_03b91623:
    plVar19 = &TypeInfo_Object;
    UVar8.y = fVar22;
    UVar8.x = fVar20;
    (__this->fields)._contentOrigin.fields = UVar8;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b9163f;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Object_o *)0x3b9164b;
    pTVar16 = (TMPro_TextMeshProUGUI_o *)brush;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      in_XMM1_Qa = g_data_00d19fc0;
      uVar21 = in_XMM1_Qa;
    }
    else {
      if (brush == (UnityEngine_UI_Image_o *)0x0) goto label_03b919b9;
      pUStack_60 = (UnityEngine_Object_o *)0x3b9166b;
      uVar21 = (*(brush->klass->vtable)._22_get_color.methodPtr)(brush);
    }
    (__this->fields)._shownBrush.fields.r = (float)(int)uVar21;
    (__this->fields)._shownBrush.fields.g = (float)(int)((ulong)uVar21 >> 0x20);
    (__this->fields)._shownBrush.fields.b = (float)in_XMM1_Qa;
    (__this->fields)._shownBrush.fields.a = (float)((ulong)in_XMM1_Qa >> 0x20);
    fVar20 = (__this->fields)._shownBrush.fields.g;
    fVar22 = (__this->fields)._shownBrush.fields.b;
    fVar10 = (__this->fields)._shownBrush.fields.a;
    (__this->fields)._hiddenBrush.fields.r = (__this->fields)._shownBrush.fields.r;
    (__this->fields)._hiddenBrush.fields.g = fVar20;
    (__this->fields)._hiddenBrush.fields.b = fVar22;
    (__this->fields)._hiddenBrush.fields.a = fVar10;
    (__this->fields)._hiddenBrush.fields.a = 0.0;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b9169e;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Object_o *)0x3b916aa;
    pTVar16 = label;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
        pUStack_60 = (UnityEngine_Object_o *)0x3b916cb;
        pTVar16 = label;
        uVar21 = (*(label->klass->vtable)._22_get_color.methodPtr)();
        (__this->fields)._normalText.fields.r = (float)(int)uVar21;
        (__this->fields)._normalText.fields.g = (float)(int)((ulong)uVar21 >> 0x20);
        (__this->fields)._normalText.fields.b = (float)in_XMM1_Qa;
        (__this->fields)._normalText.fields.a = (float)((ulong)in_XMM1_Qa >> 0x20);
        if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b916f6;
      }
      goto label_03b919b9;
    }
    (__this->fields)._normalText.fields.r = 0.0;
    (__this->fields)._normalText.fields.g = 0.0;
    (__this->fields)._normalText.fields.b = 0.0;
    (__this->fields)._normalText.fields.a = 1.0;
    if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b919b9;
label_03b916f6:
    pUStack_60 = (UnityEngine_Object_o *)0x3b91719;
    fallback.fields.b = 1.0;
    fallback.fields.a = 1.0;
    fallback.fields.r = 1.0;
    fallback.fields.g = 1.0;
    local_48 = (UnityEngine_UI_Image_o **)x;
    UVar23 = (UnityEngine_Color_Fields)
             Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(theme,"buttonText",fallback,(MethodInfo *)0x0);
    (__this->fields)._activeText.fields = UVar23;
    fVar20 = (__this->fields)._activeText.fields.g;
    fVar22 = (__this->fields)._activeText.fields.b;
    fVar10 = (__this->fields)._activeText.fields.a;
    (__this->fields)._fadedText.fields.r = (__this->fields)._activeText.fields.r;
    (__this->fields)._fadedText.fields.g = fVar20;
    (__this->fields)._fadedText.fields.b = fVar22;
    (__this->fields)._fadedText.fields.a = fVar10;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b9173c;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = (UnityEngine_Material_o *)0x0;
    pUStack_60 = (UnityEngine_Object_o *)0x3b9174a;
    pTVar16 = (TMPro_TextMeshProUGUI_o *)brush;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      x = (UnityEngine_UI_Image_c *)0x0;
      if (brush == (UnityEngine_UI_Image_o *)0x0) goto label_03b919b9;
      pUStack_60 = (UnityEngine_Object_o *)0x3b9176a;
      pUVar13 = (UnityEngine_Material_o *)
                (*(brush->klass->vtable)._32_get_material.methodPtr)
                          (brush,(brush->klass->vtable)._32_get_material.method);
    }
    brush = (UnityEngine_UI_Image_o *)&(__this->fields)._brushMaterial;
    (__this->fields)._brushMaterial = pUVar13;
    pUStack_60 = (UnityEngine_Object_o *)0x3b91786;
    il2cpp_runtime_helper_022b4080(brush);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b91797;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar14 = (MethodInfo *)0x0;
    pUStack_60 = (UnityEngine_Object_o *)0x3b917a5;
    pTVar16 = label;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      x = (UnityEngine_UI_Image_c *)0x0;
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b919b9;
      pUStack_60 = (UnityEngine_Object_o *)0x3b917bc;
      pMVar14 = (MethodInfo *)TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    }
    (__this->fields)._labelNormalMaterial = (UnityEngine_Material_o *)pMVar14;
    pUStack_60 = (UnityEngine_Object_o *)0x3b917d5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._labelNormalMaterial);
    pUStack_60 = (UnityEngine_Object_o *)0x3b917dd;
    pMVar14 = (MethodInfo *)
              Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial(label,pMVar14);
    (__this->fields)._labelShadowMaterial = (UnityEngine_Material_o *)pMVar14;
    pUStack_60 = (UnityEngine_Object_o *)0x3b917f3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._labelShadowMaterial);
    pUStack_60 = (UnityEngine_Object_o *)0x3b917fd;
    pGVar17 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
                        ((UnityEngine_UI_Graphic_o *)local_50,pMVar14);
    (__this->fields)._iconShadow = pGVar17;
    pUStack_60 = (UnityEngine_Object_o *)0x3b91813;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._iconShadow);
    x = (UnityEngine_UI_Image_c *)(__this->fields)._brush;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b91828;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Object_o *)0x3b91834;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pTVar16 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (*local_48 == (UnityEngine_UI_Image_o *)0x0) goto label_03b919b9;
      uVar1 = (__this->fields)._hiddenBrush.fields.r;
      uVar21._0_4_ = (__this->fields)._hiddenBrush.fields.b;
      uVar21._4_4_ = (__this->fields)._hiddenBrush.fields.a;
      pUStack_60 = (UnityEngine_Object_o *)0x3b91863;
      (*((*local_48)->klass->vtable)._23_set_color.methodPtr)(uVar1,uVar21);
    }
    pUVar15 = *(UnityEngine_Object_o **)brush;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b91877;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Object_o *)0x3b91883;
    bVar12 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pUVar13 = *(UnityEngine_Material_o **)brush;
      pTVar16 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&(TypeInfo_GisketchSurfaceMaterial->fields).m_Corners + 4) == 0) {
        pUStack_60 = (UnityEngine_Object_o *)0x3b918a2;
        il2cpp_runtime_helper_02337ed0();
      }
      x = (UnityEngine_UI_Image_c *)0x0;
      plVar19 = (long *)&TypeInfo_GisketchSurfaceMaterial;
      if (pUVar13 == (UnityEngine_Material_o *)0x0) goto label_03b919b9;
      pUStack_60 = (UnityEngine_Object_o *)0x3b918c2;
      bVar12 = UnityEngine_Material__HasProperty
                         (pUVar13,*(int32_t *)&(((TypeInfo_GisketchSurfaceMaterial->fields).m_ParentMask)->fields).m_Clippers,
                          (MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        pUVar13 = *(UnityEngine_Material_o **)brush;
        pTVar16 = TypeInfo_GisketchSurfaceMaterial;
        if (*(int *)((long)&(TypeInfo_GisketchSurfaceMaterial->fields).m_Corners + 4) == 0) {
          pUStack_60 = (UnityEngine_Object_o *)0x3b918da;
          il2cpp_runtime_helper_02337ed0();
        }
        x = (UnityEngine_UI_Image_c *)0x0;
        if (pUVar13 == (UnityEngine_Material_o *)0x0) goto label_03b919b9;
        pUStack_60 = (UnityEngine_Object_o *)0x3b918fd;
        UnityEngine_Material__SetFloat_4dcd3b0
                  (pUVar13,*(int32_t *)&(((TypeInfo_GisketchSurfaceMaterial->fields).m_ParentMask)->fields).m_Clippers,0.0,
                   (MethodInfo *)0x0);
      }
    }
    plVar19 = (long *)local_40;
    x = (UnityEngine_UI_Image_c *)local_40->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b9191d;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Object_o *)0x3b91929;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    brush = local_38;
    if ((char)bVar12 != '\0') {
      pTVar16 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (((UnityEngine_Object_o *)plVar19)->klass == (UnityEngine_Object_c *)0x0) goto label_03b919b9;
      uVar2 = (__this->fields)._normalText.fields.r;
      uVar4._0_4_ = (__this->fields)._normalText.fields.b;
      uVar4._4_4_ = (__this->fields)._normalText.fields.a;
      pUStack_60 = (UnityEngine_Object_o *)0x3b91954;
      (**(code **)((long)(((UnityEngine_Object_o *)plVar19)->klass->_1).image + 0x2a8))(uVar2,uVar4);
    }
    x = brush->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b9196f;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Object_o *)0x3b9197b;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pTVar16 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (brush->klass == (UnityEngine_UI_Image_c *)0x0) goto label_03b919b9;
      uVar3 = (__this->fields)._normalText.fields.r;
      uVar5._0_4_ = (__this->fields)._normalText.fields.b;
      uVar5._4_4_ = (__this->fields)._normalText.fields.a;
      pUStack_60 = (UnityEngine_Object_o *)0x3b919a1;
      (**(code **)((long)(brush->klass->_1).image + 0x2a8))(uVar3,uVar5);
    }
    pMVar18 = (MethodInfo_255A020 *)0x0;
  }
  else {
    plVar19 = (long *)0x0;
    if (content != (UnityEngine_RectTransform_o *)0x0) {
      pUStack_60 = (UnityEngine_Object_o *)0x3b915f0;
      UVar9 = UnityEngine_RectTransform__get_anchoredPosition(content,(MethodInfo *)0x0);
      fVar20 = UVar9.fields.x;
      fVar22 = UVar9.fields.y;
      goto label_03b91623;
    }
label_03b919b9:
    unaff_RBP = x;
    pUStack_60 = (UnityEngine_Object_o *)0x3b919be;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    pGStack_78 = __this;
    pGStack_70 = theme;
    pUStack_68 = brush;
    pUStack_60 = (UnityEngine_Object_o *)plVar19;
    if (g_data_057a9ec7 == '\0') {
      pUStack_88 = (UnityEngine_Object_o *)0x3b919e0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      pUStack_88 = (UnityEngine_Object_o *)0x3b919ec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      pUStack_88 = (UnityEngine_Object_o *)0x3b919f8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
      pUStack_88 = (UnityEngine_Object_o *)0x3b91a04;
      il2cpp_runtime_helper_023445d0(&" Brush Hard Shadow");
      g_data_057a9ec7 = '\x01';
    }
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_88 = (UnityEngine_Object_o *)0x3b91a24;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = (UnityEngine_Object_o *)0x0;
    pUStack_88 = (UnityEngine_Object_o *)0x3b91a33;
    unaff_R14 = pTVar16;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    unaff_R15 = (UnityEngine_Object_o *)plVar19;
    if (pTVar16 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUStack_88 = (UnityEngine_Object_o *)0x3b91a4e;
      pUVar15 = (UnityEngine_Object_o *)
                TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)pTVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_88 = (UnityEngine_Object_o *)0x3b91a63;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_88 = (UnityEngine_Object_o *)0x3b91a72;
      bVar12 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      pUStack_88 = (UnityEngine_Object_o *)0x3b91a84;
      unaff_R15 = (UnityEngine_Object_o *)
                  TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)pTVar16,(MethodInfo *)0x0);
      pUStack_88 = (UnityEngine_Object_o *)0x3b91a96;
      pUVar15 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      pUStack_88 = (UnityEngine_Object_o *)0x3b91aa6;
      UnityEngine_Material___ctor_4dc9e70
                ((UnityEngine_Material_o *)pUVar15,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
      pUStack_88 = (UnityEngine_Object_o *)0x3b91ab0;
      unaff_R14 = pTVar16;
      __this_02 = (UnityEngine_Object_o *)
                  TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)pTVar16,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Object_o *)0x0) {
        pUStack_88 = (UnityEngine_Object_o *)0x3b91ac3;
        unaff_R14 = (TMPro_TextMeshProUGUI_o *)UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0);
        pUStack_88 = (UnityEngine_Object_o *)0x3b91ad7;
        value_00 = System_String__Concat_3ae5ba0((System_String_o *)unaff_R14," Brush Hard Shadow",(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_Object_o *)0x0) {
          pUStack_88 = (UnityEngine_Object_o *)0x3b91aed;
          UnityEngine_Object__set_name(pUVar15,value_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            pUStack_88 = (UnityEngine_Object_o *)0x3b91b05;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_88 = (UnityEngine_Object_o *)0x3b91b20;
          UnityEngine_Material__EnableKeyword
                    ((UnityEngine_Material_o *)pUVar15,
                     *(System_String_o **)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0xe8),(MethodInfo *)0x0);
          pUStack_88 = (UnityEngine_Object_o *)0x3b91b37;
          bVar12 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pUVar15,
                              *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x14),(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
              pUStack_88 = (UnityEngine_Object_o *)0x3b91b4c;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_88 = (UnityEngine_Object_o *)0x3b91b6d;
            UnityEngine_Material__SetColor_4dca510
                      ((UnityEngine_Material_o *)pUVar15,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x14),
                       (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            pUStack_88 = (UnityEngine_Object_o *)0x3b91b7e;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_88 = (UnityEngine_Object_o *)0x3b91b95;
          bVar12 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pUVar15,
                              *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x18),(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
              pUStack_88 = (UnityEngine_Object_o *)0x3b91baa;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_88 = (UnityEngine_Object_o *)0x3b91bc9;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar15,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x18),
                       -0.4,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            pUStack_88 = (UnityEngine_Object_o *)0x3b91bda;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_88 = (UnityEngine_Object_o *)0x3b91bf1;
          bVar12 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pUVar15,
                              *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x1c),(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
              pUStack_88 = (UnityEngine_Object_o *)0x3b91c06;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_88 = (UnityEngine_Object_o *)0x3b91c25;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar15,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x1c),
                       -0.4,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            pUStack_88 = (UnityEngine_Object_o *)0x3b91c36;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_88 = (UnityEngine_Object_o *)0x3b91c4d;
          bVar12 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pUVar15,
                              *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x20),(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
              pUStack_88 = (UnityEngine_Object_o *)0x3b91c62;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_88 = (UnityEngine_Object_o *)0x3b91c81;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar15,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x20),
                       0.12,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            pUStack_88 = (UnityEngine_Object_o *)0x3b91c92;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_88 = (UnityEngine_Object_o *)0x3b91ca9;
          bVar12 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pUVar15,
                              *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x24),(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
              pUStack_88 = (UnityEngine_Object_o *)0x3b91cbe;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_88 = (UnityEngine_Object_o *)0x3b91cd8;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar15,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x24),
                       0.0,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            pUStack_88 = (UnityEngine_Object_o *)0x3b91ce9;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_88 = (UnityEngine_Object_o *)0x3b91cf3;
          TMPro_ShaderUtilities__UpdateShaderRatios((UnityEngine_Material_o *)pUVar15,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pUStack_88 = (UnityEngine_Object_o *)0x3b91d07;
    uStack_98 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_98;
    pTStack_90 = pTVar16;
    pUStack_88 = pUVar15;
    if (g_data_057a9ec6 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ec6 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = 0;
    pMVar18 = (MethodInfo_255A020 *)0x0;
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)unaff_R14;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if (unaff_R14 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pMVar18 = (MethodInfo_255A020 *)0x0;
      __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)unaff_R14;
      pTVar16 = (TMPro_TextMeshProUGUI_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)unaff_R14,(MethodInfo *)0x0);
      if ((pTVar16 != (TMPro_TextMeshProUGUI_o *)0x0) &&
         (pMVar18 = MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow,
         pGVar17 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                   UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)pTVar16,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow),
         __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pTVar16,
         pGVar17 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0)) {
        Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                  (pGVar17,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                   (UnityEngine_Vector2_o)0xc0800000c0800000,1,0.0,1,(MethodInfo *)0x0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar17,0,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UI_Image_c **)((long)register0x00000020 + -8) = unaff_RBP;
  *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x20) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_RBX;
  if (g_data_057a9ec8 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec8 = '\x01';
  }
  pUVar15 = *(UnityEngine_Object_o **)&(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_Color.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e27;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e33;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    __this_00 = *(TMPro_TMP_Text_o **)&(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_Color.fields.b;
    if ((char)((ulong)pMVar18 & 0xffffffff) == '\0') {
label_03b91e7a:
      ppUVar11 = &(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_ColorTweenRunner;
    }
    else {
      unaff_R15 = *(UnityEngine_Object_o **)
                   &(((TMPro_TextMeshProUGUI_o *)__this)->fields)._useLegacyMeshGeneration_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e59;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e65;
      pUVar15 = unaff_R15;
      bVar12 = UnityEngine_Object__op_Inequality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto label_03b91e7a;
      ppUVar11 = (UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o **)
                 &(((TMPro_TextMeshProUGUI_o *)__this)->fields)._useLegacyMeshGeneration_k__BackingField;
    }
    if (__this_00 == (TMPro_TMP_Text_o *)0x0) goto label_03b91efd;
    value = *ppUVar11;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e93;
    TMPro_TMP_Text__set_fontMaterial(__this_00,(UnityEngine_Material_o *)value,(MethodInfo *)0x0);
    plVar19 = *(long **)&(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_Color.fields.b;
    pUVar15 = (UnityEngine_Object_o *)0x0;
    if (plVar19 == (long *)0x0) goto label_03b91efd;
    pcVar6 = *(code **)(*plVar19 + 0x308);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91eac;
    (*pcVar6)();
  }
  pUVar15 = (UnityEngine_Object_o *)(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_MaskMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91ec5;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91ed1;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  __this_01 = (UnityEngine_Behaviour_o *)(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_MaskMaterial;
  pUVar15 = (UnityEngine_Object_o *)0x0;
  if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_01,(uint)pMVar18 & 0xff,(MethodInfo *)0x0);
    return;
  }
label_03b91efd:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91f02;
  il2cpp_runtime_helper_022b2c90();
  *(UnityEngine_Object_o **)((long)register0x00000020 + -0x30) = unaff_R15;
  *(ulong *)((long)register0x00000020 + -0x38) = (ulong)pMVar18 & 0xffffffff;
  *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -0x40) = __this;
  if (g_data_057a9ec4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar7 = pUVar15[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f53;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f5f;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  pUVar7 = pUVar15[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f7b;
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b91f10

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057a9ec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._labelShadowMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._labelShadowMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetPanelFaded
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool faded, const MethodInfo* method);
// 0x3b91f90

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict faded,
               MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 3) = (char)faded;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,faded));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x3b92120

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict active,
               MethodInfo *method)

{
  char cVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_Material_o *value;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar3;
  UnityEngine_Object_o *pUVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Material_o **ppUVar7;
  UnityEngine_Color_o *pUVar8;
  bool_conflict bVar9;
  UnityEngine_Color_o *pUVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX_00;
  UnityEngine_UI_Image_o *unaff_RBX;
  long *unaff_RBP;
  ulong uVar12;
  TMPro_TextMeshProUGUI_o *x;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  byte bVar13;
  undefined7 uVar14;
  undefined8 unaff_R12;
  TMPro_TextMeshProUGUI_o *unaff_R14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_R15;
  bool bVar16;
  
  uVar12 = (ulong)(uint)active;
  do {
    __this_00 = __this;
    *(char *)((long)&(__this_00->fields)._hovered + 2) = (char)uVar12;
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -0x10) =
         unaff_R15;
    *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057a9ec5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b91fc4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ec5 = '\x01';
      method = extraout_RDX;
    }
    if (((char)(__this_00->fields)._hovered == '\0') &&
       (*(char *)((long)&(__this_00->fields)._hovered + 1) == '\0')) {
      cVar1 = *(char *)((long)&(__this_00->fields)._hovered + 2);
      bVar16 = *(char *)((long)&(__this_00->fields)._hovered + 3) != '\0';
      uVar14 = (undefined7)((ulong)unaff_R12 >> 8);
      unaff_R12 = CONCAT71(uVar14,bVar16 && cVar1 == '\0');
      if (cVar1 != '\0') goto label_03b91fe6;
      if (bVar16) {
        pUVar10 = &(__this_00->fields)._fadedText;
        pUVar8 = &(__this_00->fields)._fadedText;
        unaff_R12 = CONCAT71(uVar14,1);
      }
      else {
        pUVar10 = &(__this_00->fields)._normalText;
        pUVar8 = &(__this_00->fields)._normalText;
        unaff_R12 = 0;
      }
      pMVar11 = (MethodInfo *)0x0;
    }
    else {
      unaff_R12 = 0;
label_03b91fe6:
      pUVar10 = &(__this_00->fields)._activeText;
      pUVar8 = &(__this_00->fields)._activeText;
      pMVar11 = (MethodInfo *)CONCAT71((int7)((ulong)method >> 8),1);
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)&(pUVar8->fields).b;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x48) = *(undefined8 *)&pUVar10->fields;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9200f;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush(__this_00,(uint)pMVar11 & 0xff,pMVar11);
    unaff_R14 = (__this_00->fields)._label;
    unaff_RBP = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9202c;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar12 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92038;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_03b92062:
      unaff_RBX = (__this_00->fields)._icon;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92078;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92084;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows;
      pUVar6 = (__this_00->fields)._icon;
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) break;
    }
    else {
      pTVar15 = (__this_00->fields)._label;
      if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pIVar5 = (pTVar15->klass->vtable)._23_set_color.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92062;
        (*pIVar5)(*(undefined4 *)((long)register0x00000020 + -0x48),
                  *(undefined4 *)((long)register0x00000020 + -0x38));
        goto label_03b92062;
      }
    }
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92114;
    il2cpp_runtime_helper_022b2c90();
    method = extraout_RDX_00;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = __this_00;
  } while( true );
  pMVar11 = (pUVar6->klass->vtable)._23_set_color.method;
  pIVar5 = (pUVar6->klass->vtable)._23_set_color.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b920aa;
  (*pIVar5)(*(undefined4 *)((long)register0x00000020 + -0x48),
            *(undefined4 *)((long)register0x00000020 + -0x38),pUVar6,pMVar11);
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows:
  bVar13 = (byte)unaff_R12;
  pTVar15 = *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x10);
  *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
  *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x10) = pTVar15;
  *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x18);
  *(undefined8 *)((long)register0x00000020 + -0x20) = *(undefined8 *)((long)register0x00000020 + -0x20);
  *(undefined8 *)((long)register0x00000020 + -0x28) = *(undefined8 *)((long)register0x00000020 + -0x28);
  if (g_data_057a9ec8 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec8 = '\x01';
  }
  x = (__this_00->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e27;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e33;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pTVar2 = (__this_00->fields)._label;
    if (bVar13 == 0) {
label_03b91e7a:
      ppUVar7 = &(__this_00->fields)._labelNormalMaterial;
    }
    else {
      pTVar15 = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._labelShadowMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e59;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e65;
      x = pTVar15;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_03b91e7a;
      ppUVar7 = &(__this_00->fields)._labelShadowMaterial;
    }
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b91efd;
    value = *ppUVar7;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e93;
    TMPro_TMP_Text__set_fontMaterial((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
    pTVar2 = (__this_00->fields)._label;
    x = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b91efd;
    pIVar5 = (pTVar2->klass->vtable)._29_SetMaterialDirty.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91eac;
    (*pIVar5)();
  }
  pGVar3 = (__this_00->fields)._iconShadow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91ec5;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91ed1;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pGVar3 = (__this_00->fields)._iconShadow;
  x = (TMPro_TextMeshProUGUI_o *)0x0;
  if (pGVar3 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar3,(uint)bVar13,(MethodInfo *)0x0);
    return;
  }
label_03b91efd:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91f02;
  il2cpp_runtime_helper_022b2c90();
  *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x30) = pTVar15;
  *(ulong *)((long)register0x00000020 + -0x38) = (ulong)(uint)bVar13;
  *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -0x40) = __this_00;
  if (g_data_057a9ec4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(x->fields)._useLegacyMeshGeneration_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f53;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f5f;
  bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar4 = *(UnityEngine_Object_o **)&(x->fields)._useLegacyMeshGeneration_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f7b;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b92130

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b92140

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 0;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b92150

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b92160

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b92170

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b92360

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  undefined1 auVar1 [16];
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  DG_Tweening_TweenCallback_Vector2__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar4;
  DG_Tweening_Tween_o *pDVar5;
  undefined8 unaff_RBX;
  undefined1 *puVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar7;
  undefined8 unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_R15;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  uVar8 = 0;
  puVar6 = (undefined1 *)register0x00000020;
  while( true ) {
    pGVar7 = __this;
    *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)(puVar6 + -8) = unaff_R15;
    *(undefined8 *)(puVar6 + -0x10) = unaff_R14;
    *(undefined8 *)(puVar6 + -0x18) = unaff_RBX;
    *(undefined4 *)(puVar6 + -0x3c) = uVar8;
    if (g_data_057a9ecb == '\0') {
      *(undefined8 *)(puVar6 + -0x50) = 0x3b92397;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ReleaseText_b__37_0);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b923a3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b923af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b923bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b923c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b923d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b923df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9ecb = '\x01';
    }
    x = (pGVar7->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar6 + -0x50) = 0x3b92402;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar6 + -0x50) = 0x3b9240e;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') break;
    pDVar5 = (pGVar7->fields)._pressTween;
    if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar6 + -0x50) = 0x3b92431;
      DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
    }
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(pGVar7->fields)._content;
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
      *(undefined8 *)(puVar6 + -0x50) = 0x3b9244c;
      UVar2 = UnityEngine_RectTransform__get_anchoredPosition
                        ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
      auVar1._8_4_ = extraout_XMM0_Dc;
      auVar1._0_4_ = UVar2.fields.x;
      auVar1._4_4_ = UVar2.fields.y;
      auVar1._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])(puVar6 + -0x28) = auVar1;
      *(UnityEngine_Vector2_Fields *)(puVar6 + -0x38) = (pGVar7->fields)._contentOrigin.fields;
      *(undefined8 *)(puVar6 + -0x30) = 0;
      *(undefined8 *)(puVar6 + -0x50) = 0x3b9246b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b92485;
      DG_Tweening_TweenCallback_Vector2____ctor();
      *(undefined8 *)(puVar6 + -0x50) = 0x3b924a1;
      t = DG_Tweening_DOVirtual__Vector2
                    ((UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar6 + -0x28),
                     (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar6 + -0x38),0.12,
                     onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b924b9;
      pIVar4 = DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                         ((Il2CppObject *)t,*(float *)(puVar6 + -0x3c),MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b924d0;
      pIVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object_(pIVar4,0x1b,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)(puVar6 + -0x50) = 0x3b924e7;
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar4,1,MethodInfo_Tweener_SetUpdate_Tweener);
      (pGVar7->fields)._pressTween = pDVar5;
      *(undefined8 *)(puVar6 + -0x50) = 0x3b924f9;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields)._pressTween);
      pDVar5 = (pGVar7->fields)._pressTween;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        *(undefined8 *)(puVar6 + -0x50) = 0x3b92518;
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)(puVar6 + -0x50) = 0x3b92532;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_RectTransform_o **)(puVar6 + -0x50) = x;
    *(undefined8 *)(puVar6 + -0x58) = 0x3b92549;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,method_00);
    uVar8 = 0x3cf5c28f;
    unaff_RBX = *(undefined8 *)(puVar6 + -0x50);
    puVar6 = puVar6 + -0x48;
    unaff_R15 = pGVar7;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b92540

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  DG_Tweening_TweenCallback_Vector2__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar5;
  DG_Tweening_Tween_o *pDVar6;
  UnityEngine_RectTransform_o *unaff_RBX;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  undefined8 unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  while( true ) {
    __this_00 = __this;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x3b92549;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this_00,(MethodInfo *)eventData);
    uVar1 = *(undefined8 *)((long)register0x00000020 + -8);
    *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar1;
    *(undefined4 *)((long)register0x00000020 + -0x3c) = 0x3cf5c28f;
    if (g_data_057a9ecb == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92397;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ReleaseText_b__37_0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923a3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9ecb = '\x01';
    }
    unaff_RBX = (__this_00->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92402;
      il2cpp_runtime_helper_02337ed0();
    }
    eventData = (UnityEngine_EventSystems_BaseEventData_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9240e;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') break;
    pDVar6 = (__this_00->fields)._pressTween;
    if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
      eventData = (UnityEngine_EventSystems_BaseEventData_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92431;
      DG_Tweening_TweenExtensions__Kill(pDVar6,0,(MethodInfo *)0x0);
    }
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(__this_00->fields)._content;
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9244c;
      UVar3 = UnityEngine_RectTransform__get_anchoredPosition
                        ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
      auVar2._8_4_ = extraout_XMM0_Dc;
      auVar2._0_4_ = UVar3.fields.x;
      auVar2._4_4_ = UVar3.fields.y;
      auVar2._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar2;
      *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38) =
           (__this_00->fields)._contentOrigin.fields;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9246b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92485;
      DG_Tweening_TweenCallback_Vector2____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924a1;
      t = DG_Tweening_DOVirtual__Vector2
                    ((UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x28),
                     (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38),
                     0.12,onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924b9;
      pIVar5 = DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                         ((Il2CppObject *)t,*(float *)((long)register0x00000020 + -0x3c),MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924d0;
      pIVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object_(pIVar5,0x1b,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924e7;
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar5,1,MethodInfo_Tweener_SetUpdate_Tweener);
      (__this_00->fields)._pressTween = pDVar6;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924f9;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pressTween);
      pDVar6 = (__this_00->fields)._pressTween;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92518;
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar6,0,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92532;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = __this_00;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b91fa0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_Material_o *value;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar3;
  UnityEngine_Object_o *pUVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Material_o **ppUVar7;
  UnityEngine_Color_o *pUVar8;
  bool_conflict bVar9;
  UnityEngine_Color_o *pUVar10;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  MethodInfo *pMVar11;
  undefined8 extraout_RDX_00;
  UnityEngine_UI_Image_o *unaff_RBX;
  long *unaff_RBP;
  undefined1 uVar12;
  TMPro_TextMeshProUGUI_o *x;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  byte bVar13;
  undefined8 unaff_R12;
  undefined7 uVar14;
  TMPro_TextMeshProUGUI_o *unaff_R14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_R15;
  bool bVar16;
  
  do {
    __this_00 = __this;
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -0x10) =
         unaff_R15;
    *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057a9ec5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b91fc4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ec5 = '\x01';
      in_RDX = extraout_RDX;
    }
    if (((char)(__this_00->fields)._hovered == '\0') &&
       (*(char *)((long)&(__this_00->fields)._hovered + 1) == '\0')) {
      cVar1 = *(char *)((long)&(__this_00->fields)._hovered + 2);
      bVar16 = *(char *)((long)&(__this_00->fields)._hovered + 3) != '\0';
      uVar14 = (undefined7)((ulong)unaff_R12 >> 8);
      unaff_R12 = CONCAT71(uVar14,bVar16 && cVar1 == '\0');
      if (cVar1 != '\0') goto label_03b91fe6;
      if (bVar16) {
        pUVar10 = &(__this_00->fields)._fadedText;
        pUVar8 = &(__this_00->fields)._fadedText;
        unaff_R12 = CONCAT71(uVar14,1);
      }
      else {
        pUVar10 = &(__this_00->fields)._normalText;
        pUVar8 = &(__this_00->fields)._normalText;
        unaff_R12 = 0;
      }
      pMVar11 = (MethodInfo *)0x0;
    }
    else {
      unaff_R12 = 0;
label_03b91fe6:
      pUVar10 = &(__this_00->fields)._activeText;
      pUVar8 = &(__this_00->fields)._activeText;
      pMVar11 = (MethodInfo *)CONCAT71((int7)((ulong)in_RDX >> 8),1);
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)&(pUVar8->fields).b;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x48) = *(undefined8 *)&pUVar10->fields;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9200f;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush(__this_00,(uint)pMVar11 & 0xff,pMVar11);
    unaff_R14 = (__this_00->fields)._label;
    unaff_RBP = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9202c;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar12 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92038;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_03b92062:
      unaff_RBX = (__this_00->fields)._icon;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92078;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92084;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows;
      pUVar6 = (__this_00->fields)._icon;
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) break;
    }
    else {
      pTVar15 = (__this_00->fields)._label;
      if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pIVar5 = (pTVar15->klass->vtable)._23_set_color.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92062;
        (*pIVar5)(*(undefined4 *)((long)register0x00000020 + -0x48),
                  *(undefined4 *)((long)register0x00000020 + -0x38));
        goto label_03b92062;
      }
    }
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92114;
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)((long)&(__this->fields)._hovered + 2) = uVar12;
    in_RDX = extraout_RDX_00;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = __this_00;
  } while( true );
  pMVar11 = (pUVar6->klass->vtable)._23_set_color.method;
  pIVar5 = (pUVar6->klass->vtable)._23_set_color.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b920aa;
  (*pIVar5)(*(undefined4 *)((long)register0x00000020 + -0x48),
            *(undefined4 *)((long)register0x00000020 + -0x38),pUVar6,pMVar11);
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows:
  bVar13 = (byte)unaff_R12;
  pTVar15 = *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x10);
  *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
  *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x10) = pTVar15;
  *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x18);
  *(undefined8 *)((long)register0x00000020 + -0x20) = *(undefined8 *)((long)register0x00000020 + -0x20);
  *(undefined8 *)((long)register0x00000020 + -0x28) = *(undefined8 *)((long)register0x00000020 + -0x28);
  if (g_data_057a9ec8 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec8 = '\x01';
  }
  x = (__this_00->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e27;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e33;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pTVar2 = (__this_00->fields)._label;
    if (bVar13 == 0) {
label_03b91e7a:
      ppUVar7 = &(__this_00->fields)._labelNormalMaterial;
    }
    else {
      pTVar15 = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._labelShadowMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e59;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e65;
      x = pTVar15;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_03b91e7a;
      ppUVar7 = &(__this_00->fields)._labelShadowMaterial;
    }
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b91efd;
    value = *ppUVar7;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91e93;
    TMPro_TMP_Text__set_fontMaterial((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
    pTVar2 = (__this_00->fields)._label;
    x = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b91efd;
    pIVar5 = (pTVar2->klass->vtable)._29_SetMaterialDirty.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91eac;
    (*pIVar5)();
  }
  pGVar3 = (__this_00->fields)._iconShadow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91ec5;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91ed1;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pGVar3 = (__this_00->fields)._iconShadow;
  x = (TMPro_TextMeshProUGUI_o *)0x0;
  if (pGVar3 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar3,(uint)bVar13,(MethodInfo *)0x0);
    return;
  }
label_03b91efd:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b91f02;
  il2cpp_runtime_helper_022b2c90();
  *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -0x30) = pTVar15;
  *(ulong *)((long)register0x00000020 + -0x38) = (ulong)(uint)bVar13;
  *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -0x40) = __this_00;
  if (g_data_057a9ec4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(x->fields)._useLegacyMeshGeneration_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f53;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f5f;
  bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar4 = *(UnityEngine_Object_o **)&(x->fields)._useLegacyMeshGeneration_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b91f7b;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$AddHardShadow
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow (UnityEngine_UI_Graphic_o* graphic, const MethodInfo* method);
// 0x3b91d10

Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
          (UnityEngine_UI_Graphic_o *graphic,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this;
  long *plVar1;
  UnityEngine_UI_Graphic_c *x;
  UnityEngine_Object_c *pUVar2;
  UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o **ppUVar3;
  bool_conflict bVar4;
  UnityEngine_UI_Graphic_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  undefined4 extraout_var;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *extraout_RAX;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *extraout_RAX_00;
  uint uVar5;
  MethodInfo_255A020 *pMVar6;
  UnityEngine_UI_Graphic_o *pUVar7;
  UnityEngine_Object_o *x_00;
  
  if (g_data_057a9ec6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = 0;
  pUVar7 = graphic;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)graphic,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0;
  }
  if (graphic != (UnityEngine_UI_Graphic_o *)0x0) {
    uVar5 = 0;
    __this_00 = (UnityEngine_UI_Graphic_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)graphic,(MethodInfo *)0x0);
    pUVar7 = graphic;
    if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
      pMVar6 = MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow;
      __this_01 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
      uVar5 = (uint)pMVar6;
      pUVar7 = __this_00;
      if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
        Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                  (__this_01,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                   (UnityEngine_Vector2_o)0xc0800000c0800000,1,0.0,1,(MethodInfo *)0x0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        return __this_01;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec8 = '\x01';
  }
  x_00 = *(UnityEngine_Object_o **)&(pUVar7->fields).m_Color.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    __this = *(TMPro_TMP_Text_o **)&(pUVar7->fields).m_Color.fields.b;
    if ((char)uVar5 == '\0') {
label_03b91e7a:
      ppUVar3 = &(pUVar7->fields).m_ColorTweenRunner;
    }
    else {
      x_00 = *(UnityEngine_Object_o **)&(pUVar7->fields)._useLegacyMeshGeneration_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto label_03b91e7a;
      ppUVar3 = (UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o **)
                &(pUVar7->fields)._useLegacyMeshGeneration_k__BackingField;
    }
    if (__this == (TMPro_TMP_Text_o *)0x0) goto label_03b91efd;
    TMPro_TMP_Text__set_fontMaterial(__this,(UnityEngine_Material_o *)*ppUVar3,(MethodInfo *)0x0);
    plVar1 = *(long **)&(pUVar7->fields).m_Color.fields.b;
    x_00 = (UnityEngine_Object_o *)0x0;
    if (plVar1 == (long *)0x0) goto label_03b91efd;
    (**(code **)(*plVar1 + 0x308))();
  }
  x = pUVar7[1].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)CONCAT44(extraout_var,bVar4);
  }
  x_00 = (UnityEngine_Object_o *)0x0;
  if (pUVar7[1].klass != (UnityEngine_UI_Graphic_c *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pUVar7[1].klass,uVar5 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_03b91efd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar2 = x_00[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)CONCAT44(extraout_var_00,bVar4);
  }
  pUVar2 = x_00[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$CreateLabelShadowMaterial
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial (TMPro_TextMeshProUGUI_o* label, const MethodInfo* method);
// 0x3b919c0

UnityEngine_Material_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial
          (TMPro_TextMeshProUGUI_o *label,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this;
  long *plVar1;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_Object_c *pUVar2;
  UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o **ppUVar3;
  bool_conflict bVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Material_o *source;
  UnityEngine_Object_o *__this_01;
  TMPro_TextMeshProUGUI_o *str0;
  System_String_o *value;
  TMPro_TextMeshProUGUI_o *__this_02;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_03;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_00;
  uint uVar6;
  MethodInfo_255A020 *pMVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  
  if (g_data_057a9ec7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
    il2cpp_runtime_helper_023445d0(&" Brush Hard Shadow");
    g_data_057a9ec7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = label;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)
             TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (UnityEngine_Material_o *)0x0;
    }
    source = TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor_4dc9e70((UnityEngine_Material_o *)pUVar5,source,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Object_o *)
                TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    str0 = label;
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      str0 = (TMPro_TextMeshProUGUI_o *)UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      value = System_String__Concat_3ae5ba0((System_String_o *)str0," Brush Hard Shadow",(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(pUVar5,value,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Material__EnableKeyword
                  ((UnityEngine_Material_o *)pUVar5,
                   *(System_String_o **)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0xe8),(MethodInfo *)0x0);
        bVar4 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar5,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x14),(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Material__SetColor_4dca510
                    ((UnityEngine_Material_o *)pUVar5,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x14),
                     (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar5,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x18),(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar5,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x18),-0.4
                     ,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar5,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x1c),(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar5,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x1c),-0.4
                     ,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar5,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x20),(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar5,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x20),0.12
                     ,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar5,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x24),(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar5,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x24),0.0,
                     (MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        TMPro_ShaderUtilities__UpdateShaderRatios((UnityEngine_Material_o *)pUVar5,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)pUVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar6 = 0;
  pTVar8 = str0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)str0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  if (str0 != (TMPro_TextMeshProUGUI_o *)0x0) {
    uVar6 = 0;
    __this_02 = (TMPro_TextMeshProUGUI_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)str0,(MethodInfo *)0x0);
    pTVar8 = str0;
    if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pMVar7 = MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow;
      __this_03 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_02,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
      uVar6 = (uint)pMVar7;
      pTVar8 = __this_02;
      if (__this_03 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
        Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                  (__this_03,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                   (UnityEngine_Vector2_o)0xc0800000c0800000,1,0.0,1,(MethodInfo *)0x0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,0,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)__this_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec8 = '\x01';
  }
  pUVar5 = *(UnityEngine_Object_o **)&(pTVar8->fields).m_Color.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    __this = *(TMPro_TMP_Text_o **)&(pTVar8->fields).m_Color.fields.b;
    if ((char)uVar6 == '\0') {
label_03b91e7a:
      ppUVar3 = &(pTVar8->fields).m_ColorTweenRunner;
    }
    else {
      pUVar5 = *(UnityEngine_Object_o **)&(pTVar8->fields)._useLegacyMeshGeneration_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto label_03b91e7a;
      ppUVar3 = (UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__o **)
                &(pTVar8->fields)._useLegacyMeshGeneration_k__BackingField;
    }
    if (__this == (TMPro_TMP_Text_o *)0x0) goto label_03b91efd;
    TMPro_TMP_Text__set_fontMaterial(__this,(UnityEngine_Material_o *)*ppUVar3,(MethodInfo *)0x0);
    plVar1 = *(long **)&(pTVar8->fields).m_Color.fields.b;
    pUVar5 = (UnityEngine_Object_o *)0x0;
    if (plVar1 == (long *)0x0) goto label_03b91efd;
    (**(code **)(*plVar1 + 0x308))();
  }
  pUVar5 = (UnityEngine_Object_o *)(pTVar8->fields).m_MaskMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar4);
  }
  __this_00 = (UnityEngine_Behaviour_o *)(pTVar8->fields).m_MaskMaterial;
  pUVar5 = (UnityEngine_Object_o *)0x0;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_00,uVar6 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_03b91efd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar2 = pUVar5[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar4);
  }
  pUVar2 = pUVar5[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$EnableShadows
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool enabled, const MethodInfo* method);
// 0x3b91de0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict enabled,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Material_o **ppUVar4;
  bool_conflict bVar5;
  TMPro_TextMeshProUGUI_o *x;
  
  if (g_data_057a9ec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec8 = '\x01';
  }
  x = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pTVar1 = (__this->fields)._label;
    if ((char)enabled == '\0') {
label_03b91e7a:
      ppUVar4 = &(__this->fields)._labelNormalMaterial;
    }
    else {
      x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._labelShadowMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_03b91e7a;
      ppUVar4 = &(__this->fields)._labelShadowMaterial;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b91efd;
    TMPro_TMP_Text__set_fontMaterial((TMPro_TMP_Text_o *)pTVar1,*ppUVar4,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._label;
    x = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b91efd;
    (*(pTVar1->klass->vtable)._29_SetMaterialDirty.methodPtr)();
  }
  pGVar2 = (__this->fields)._iconShadow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pGVar2 = (__this->fields)._iconShadow;
  x = (TMPro_TextMeshProUGUI_o *)0x0;
  if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2,enabled & 0xff,(MethodInfo *)0x0);
    return;
  }
label_03b91efd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec4 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(x->fields)._useLegacyMeshGeneration_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = *(UnityEngine_Object_o **)&(x->fields)._useLegacyMeshGeneration_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetBrush
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x3b92560

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict active,
               MethodInfo *method)

{
  float *pfVar1;
  float duration;
  undefined8 uVar2;
  undefined8 uVar3;
  int32_t nameID;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar5;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar7;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar8;
  UnityEngine_Color_o *pUVar9;
  DG_Tweening_Tween_o **ppDVar10;
  float *pfVar11;
  bool bVar12;
  float fVar13;
  float local_30;
  
  if (g_data_057a9ec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetBrush_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetBrush_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
    g_data_057a9ec9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
  pIVar7 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto label_03b929ae;
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(__this_00 + 1);
  *(char *)&__this_00[1].monitor = (char)active;
  pUVar4 = (__this->fields)._brush;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pDVar8 = (__this->fields)._revealTween;
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar8,0,(MethodInfo *)0x0);
  }
  if (*(char *)&__this_00[1].monitor != '\0') {
    pUVar4 = (__this->fields)._brush;
    pIVar7 = (Il2CppObject *)0x0;
    if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_03b929ae;
    uVar2._0_4_ = (__this->fields)._shownBrush.fields.r;
    uVar2._4_4_ = (__this->fields)._shownBrush.fields.g;
    (*(pUVar4->klass->vtable)._23_set_color.methodPtr)(uVar2);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._brushMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar5 = (__this->fields)._brushMaterial;
    pIVar7 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_03b929ae;
    bVar6 = UnityEngine_Material__HasProperty
                      (pUVar5,*(int32_t *)((long)TypeInfo_GisketchSurfaceMaterial[0xb].monitor + 0x48),(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar5 = (__this->fields)._brushMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        nameID = *(int32_t *)((long)TypeInfo_GisketchSurfaceMaterial[0xb].monitor + 0x48);
        pIVar7 = TypeInfo_GisketchSurfaceMaterial;
      }
      else {
        nameID = *(int32_t *)((long)TypeInfo_GisketchSurfaceMaterial[0xb].monitor + 0x48);
        pIVar7 = TypeInfo_GisketchSurfaceMaterial;
      }
      TypeInfo_GisketchSurfaceMaterial = pIVar7;
      if ((char)bVar6 != '\0') {
        if (pUVar5 != (UnityEngine_Material_o *)0x0) {
          fVar13 = UnityEngine_Material__GetFloat_4dcdb00(pUVar5,nameID,(MethodInfo *)0x0);
          local_30 = 0.0;
          if (*(char *)&__this_00[1].monitor != '\0') {
            local_30 = 1.0;
          }
          pUVar5 = (__this->fields)._brushMaterial;
          pIVar7 = TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[0xe].klass + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (pUVar5 != (UnityEngine_Material_o *)0x0) {
            ppDVar10 = &(__this->fields)._revealTween;
            UnityEngine_Material__SetFloat_4dcd3b0
                      (pUVar5,*(int32_t *)((long)TypeInfo_GisketchSurfaceMaterial[0xb].monitor + 0x48),fVar13,(MethodInfo *)0x0);
            duration = *(float *)(&g_data_00d1d610 + (ulong)(*(char *)&__this_00[1].monitor == '\0') * 4);
            onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor();
            t = DG_Tweening_DOVirtual__Float(fVar13,local_30,duration,onVirtualUpdate,(MethodInfo *)0x0);
            pIVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                               ((Il2CppObject *)t,(uint)*(byte *)&__this_00[1].monitor << 2 | 8,MethodInfo_Tweener_SetEase_Tweener);
            pIVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar7,1,MethodInfo_Tweener_SetUpdate_Tweener);
            action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
            DG_Tweening_TweenCallback___ctor();
            pDVar8 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar7,action,MethodInfo_Tweener_OnComplete_Tweener);
            *ppDVar10 = pDVar8;
            il2cpp_runtime_helper_022b4080(ppDVar10);
            pDVar8 = *ppDVar10;
            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar8,0,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_03b929ae;
      }
      if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_03b929ae;
      fVar13 = 0.0;
      if (*(char *)&__this_00[1].monitor != '\0') {
        fVar13 = 1.0;
      }
      UnityEngine_Material__SetFloat_4dcd3b0(pUVar5,nameID,fVar13,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields)._brush;
  pIVar7 = (Il2CppObject *)0x0;
  if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
    pfVar1 = &(__this->fields)._hiddenBrush.fields.b;
    bVar12 = *(char *)&__this_00[1].monitor == '\0';
    pUVar9 = &(__this->fields)._shownBrush;
    if (bVar12) {
      pUVar9 = &(__this->fields)._hiddenBrush;
    }
    uVar3._0_4_ = (pUVar9->fields).r;
    uVar3._4_4_ = (pUVar9->fields).g;
    pfVar11 = &(__this->fields)._shownBrush.fields.b;
    if (bVar12) {
      pfVar11 = pfVar1;
    }
    vtableDispatch = (pUVar4->klass->vtable)._23_set_color.methodPtr;
    (*vtableDispatch)
              (uVar3,*(undefined8 *)pfVar11,pUVar4,(pUVar4->klass->vtable)._23_set_color.method,pfVar1,
               vtableDispatch);
    return;
  }
label_03b929ae:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$PushText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b92180

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  DG_Tweening_TweenCallback_Vector2__o *pDVar5;
  DG_Tweening_Tweener_o *pDVar6;
  Il2CppObject *pIVar7;
  DG_Tweening_Tween_o *pDVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Vector2_Fields *pUVar10;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar11;
  undefined8 unaff_R14;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector2_Fields local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  if (g_data_057a9eca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PushText_b__36_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_Vector2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    g_data_057a9eca = '\x01';
  }
  pUVar9 = (__this->fields)._content;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pDVar8 = (__this->fields)._pressTween;
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar8,0,(MethodInfo *)0x0);
  }
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(__this->fields)._content;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_anchoredPosition
                      ((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
    local_28._8_4_ = extraout_XMM0_Dc;
    local_28._0_4_ = UVar3.fields.x;
    local_28._4_4_ = UVar3.fields.y;
    local_28._12_4_ = extraout_XMM0_Dd;
    local_38 = (__this->fields)._contentOrigin.fields;
    uStack_30._0_4_ = 0.0;
    uStack_30._4_4_ = 0.0;
    if (g_data_057a9c8a == '\0') {
      uStack_30 = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c8a = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
    local_38.y = local_38.y + (float)((ulong)uVar1 >> 0x20) * 8.0;
    local_38.x = local_38.x + (float)uVar1 * 8.0;
    uStack_30 = CONCAT44(uStack_30._4_4_ + 0.0,(float)uStack_30 + 0.0);
    pDVar5 = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_Vector2);
    DG_Tweening_TweenCallback_Vector2____ctor();
    pDVar6 = DG_Tweening_DOVirtual__Vector2
                       ((UnityEngine_Vector2_o)local_28._0_8_,(UnityEngine_Vector2_o)local_38,0.045,pDVar5,
                        (MethodInfo *)0x0);
    pIVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar6,9,MethodInfo_Tweener_SetEase_Tweener);
    pDVar8 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar7,1,MethodInfo_Tweener_SetUpdate_Tweener);
    (__this->fields)._pressTween = pDVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pressTween);
    pDVar8 = (__this->fields)._pressTween;
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar8,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar12 = 0;
  pUVar10 = &local_38;
  while( true ) {
    pGVar11 = __this_00;
    *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)pUVar10 + -8) = __this;
    *(undefined8 *)((long)pUVar10 + -0x10) = unaff_R14;
    *(UnityEngine_RectTransform_o **)((long)pUVar10 + -0x18) = pUVar9;
    *(undefined4 *)((long)pUVar10 + -0x3c) = uVar12;
    if (g_data_057a9ecb == '\0') {
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b92397;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ReleaseText_b__37_0);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b923a3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b923af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b923bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b923c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b923d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b923df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9ecb = '\x01';
    }
    pUVar9 = (pGVar11->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b92402;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b9240e;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') break;
    pDVar8 = (pGVar11->fields)._pressTween;
    if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b92431;
      DG_Tweening_TweenExtensions__Kill(pDVar8,0,(MethodInfo *)0x0);
    }
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(pGVar11->fields)._content;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b9244c;
      UVar3 = UnityEngine_RectTransform__get_anchoredPosition
                        ((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
      auVar2._8_4_ = extraout_XMM0_Dc_00;
      auVar2._0_4_ = UVar3.fields.x;
      auVar2._4_4_ = UVar3.fields.y;
      auVar2._12_4_ = extraout_XMM0_Dd_00;
      *(undefined1 (*) [16])((long)pUVar10 + -0x28) = auVar2;
      *(UnityEngine_Vector2_Fields *)((long)pUVar10 + -0x38) = (pGVar11->fields)._contentOrigin.fields;
      *(undefined8 *)((long)pUVar10 + -0x30) = 0;
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b9246b;
      pDVar5 = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b92485;
      DG_Tweening_TweenCallback_Vector2____ctor();
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b924a1;
      pDVar6 = DG_Tweening_DOVirtual__Vector2
                         ((UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)pUVar10 + -0x28),
                          (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)pUVar10 + -0x38),0.12,
                          pDVar5,(MethodInfo *)0x0);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b924b9;
      pIVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                         ((Il2CppObject *)pDVar6,*(float *)((long)pUVar10 + -0x3c),MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b924d0;
      pIVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object_(pIVar7,0x1b,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b924e7;
      pDVar8 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar7,1,MethodInfo_Tweener_SetUpdate_Tweener);
      (pGVar11->fields)._pressTween = pDVar8;
      *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b924f9;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields)._pressTween);
      pDVar8 = (pGVar11->fields)._pressTween;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b92518;
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar8,0,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)pUVar10 + -0x50) = 0x3b92532;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_RectTransform_o **)((long)pUVar10 + -0x50) = pUVar9;
    *(undefined8 *)((long)pUVar10 + -0x58) = 0x3b92549;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this_00,method_00);
    uVar12 = 0x3cf5c28f;
    pUVar9 = *(UnityEngine_RectTransform_o **)((long)pUVar10 + -0x50);
    pUVar10 = (UnityEngine_Vector2_Fields *)((long)pUVar10 + -0x48);
    __this = pGVar11;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$ReleaseText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, float delay, const MethodInfo* method);
// 0x3b92370

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,float delay,MethodInfo *method
               )

{
  UnityEngine_RectTransform_o *x;
  undefined1 auVar1 [16];
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  DG_Tweening_TweenCallback_Vector2__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar4;
  DG_Tweening_Tween_o *pDVar5;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar6;
  undefined8 unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  while( true ) {
    pGVar6 = __this;
    *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    *(float *)((long)register0x00000020 + -0x3c) = delay;
    if (g_data_057a9ecb == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92397;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ReleaseText_b__37_0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923a3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b923df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      g_data_057a9ecb = '\x01';
    }
    x = (pGVar6->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92402;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9240e;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') break;
    pDVar5 = (pGVar6->fields)._pressTween;
    if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92431;
      DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
    }
    __this = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(pGVar6->fields)._content;
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9244c;
      UVar2 = UnityEngine_RectTransform__get_anchoredPosition
                        ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
      auVar1._8_4_ = extraout_XMM0_Dc;
      auVar1._0_4_ = UVar2.fields.x;
      auVar1._4_4_ = UVar2.fields.y;
      auVar1._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar1;
      *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38) =
           (pGVar6->fields)._contentOrigin.fields;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9246b;
      onVirtualUpdate = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_Vector2);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92485;
      DG_Tweening_TweenCallback_Vector2____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924a1;
      t = DG_Tweening_DOVirtual__Vector2
                    ((UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x28),
                     (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x38),
                     0.12,onVirtualUpdate,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924b9;
      pIVar4 = DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                         ((Il2CppObject *)t,*(float *)((long)register0x00000020 + -0x3c),MethodInfo_Tweener_SetDelay_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924d0;
      pIVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object_(pIVar4,0x1b,MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924e7;
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar4,1,MethodInfo_Tweener_SetUpdate_Tweener);
      (pGVar6->fields)._pressTween = pDVar5;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b924f9;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields)._pressTween);
      pDVar5 = (pGVar6->fields)._pressTween;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92518;
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b92532;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x50) = x;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x3b92549;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,method_00);
    delay = 0.03;
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x50);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = pGVar6;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b929d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<PushText>b__36_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x3b929e0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  void **ppvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_Material_o *__this_00;
  long *plVar5;
  code *vtableDispatch;
  UnityEngine_Object_o *pUVar6;
  Il2CppRGCTXData *x;
  UnityEngine_Vector2_o UVar7;
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  UnityEngine_RectTransform_c *pUVar10;
  Il2CppClass *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Sprite_o *in_RCX;
  undefined8 extraout_RDX;
  intptr_t extraout_RDX_00;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_RectTransform_o *pUVar12;
  MethodInfo *pMVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  
  pUVar11 = (__this->fields)._content;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(pUVar11,value,(MethodInfo *)0x0);
    return;
  }
  UVar7.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(pUVar11,UVar7,(MethodInfo *)0x0);
    return;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar11;
  if (g_data_057a9ecc == '\0') {
    pUVar12 = (UnityEngine_RectTransform_o *)&TypeInfo_GisketchSurfaceMaterial;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ecc = '\x01';
  }
  lVar4 = (pUVar11->fields).m_CachedPtr;
  if (lVar4 != 0) {
    __this_00 = *(UnityEngine_Material_o **)(lVar4 + 0x98);
    pUVar12 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat_4dcd3b0
                (__this_00,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x48),fVar15,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&pUVar12[1].klass != '\0') {
    return;
  }
  lVar4 = (pUVar12->fields).m_CachedPtr;
  if ((lVar4 != 0) &&
     (plVar5 = *(long **)(lVar4 + 0x20), pUVar12 = (UnityEngine_RectTransform_o *)0x0, plVar5 != (long *)0x0))
  {
    vtableDispatch = *(code **)(*plVar5 + 0x2a8);
    (*vtableDispatch)
              ((int)*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),plVar5,
               *(undefined8 *)(*plVar5 + 0x2b0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ecd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Mask_GetComponent_Mask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ecd = '\x01';
  }
  pUVar12[1].monitor = method;
  il2cpp_runtime_helper_022b4080(&pUVar12[1].monitor,method);
  pUVar12[1].fields.m_CachedPtr = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&pUVar12[1].fields);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppObject *)0x0;
  pMVar13 = method;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_03b92ba4:
    ppvVar1 = &pUVar12[2].monitor;
    pUVar12[2].monitor = pIVar9;
    il2cpp_runtime_helper_022b4080(ppvVar1);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = (UnityEngine_RectTransform_c *)0x0;
    pMVar13 = method;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (method == (MethodInfo *)0x0) goto label_03b92d06;
      pUVar10 = (UnityEngine_RectTransform_c *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Mask_GetComponent_Mask);
    }
    pUVar11 = pUVar12 + 2;
    pUVar12[2].klass = pUVar10;
    il2cpp_runtime_helper_022b4080(pUVar11);
    pUVar6 = pUVar12[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_03b92cb1:
      pUVar10 = pUVar11->klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pMVar13 = (MethodInfo *)0x0;
      if (pUVar11->klass != (UnityEngine_RectTransform_c *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11->klass,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pMVar13 = (MethodInfo *)0x0;
      if (*ppvVar1 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(*ppvVar1,in_RCX,(MethodInfo *)0x0);
        pMVar13 = (MethodInfo *)0x0;
        if (*ppvVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_type(*ppvVar1,1,(MethodInfo *)0x0);
          pMVar13 = (MethodInfo *)0x0;
          if (*ppvVar1 != (long *)0x0) {
            (**(code **)(*(long *)*ppvVar1 + 0x2a8))(0x3f800000,0x3f8000003f800000);
            plVar5 = *ppvVar1;
            pMVar13 = (MethodInfo *)0x0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
              pMVar13 = (MethodInfo *)0x0;
              if (*ppvVar1 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(*ppvVar1,0,(MethodInfo *)0x0);
                goto label_03b92cb1;
              }
            }
          }
        }
      }
    }
  }
  else if (method != (MethodInfo *)0x0) {
    pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Image_GetComponent_Image);
    goto label_03b92ba4;
  }
label_03b92d06:
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    g_data_057a9ece = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pIVar14 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppClass *)0x0) goto label_03b93040;
  ((UnityEngine_RectTransform_Fields *)&(__this_01->_1).name)->m_CachedPtr = (intptr_t)pMVar13;
  il2cpp_runtime_helper_022b4080((UnityEngine_RectTransform_Fields *)&(__this_01->_1).name);
  pIVar14 = pMVar13->klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar6 = (UnityEngine_Object_o *)pMVar13->return_type;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pUVar6 = (UnityEngine_Object_o *)pMVar13->parameters;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pIVar14 = (Il2CppClass *)0x0;
        if (pMVar13->klass != (Il2CppClass *)0x0) {
          UVar7 = UnityEngine_RectTransform__get_sizeDelta
                            ((UnityEngine_RectTransform_o *)pMVar13->klass,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&(__this_01->_1).byval_arg.data + 4) = UVar7.fields;
          pIVar14 = (Il2CppClass *)0x0;
          if ((UnityEngine_RectTransform_o *)pMVar13->return_type != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition
                              ((UnityEngine_RectTransform_o *)pMVar13->return_type,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&(__this_01->_1).namespaze + 4) = UVar7.fields;
            pIVar14 = (Il2CppClass *)0x0;
            if (pMVar13->klass != (Il2CppClass *)0x0) {
              UVar17 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_RectTransform_o *)pMVar13->klass,(MethodInfo *)0x0);
              fVar16 = 64.0;
              if (64.0 <= UVar17.fields.m_Width) {
                fVar16 = UVar17.fields.m_Width;
              }
              *(float *)&(__this_01->_1).namespaze = fVar16;
              x = (pMVar13->field7_0x38).rgctx_data;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                pIVar14 = (Il2CppClass *)0x0;
                if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) goto label_03b93040;
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)(pMVar13->field7_0x38).rgctx_data,1,(MethodInfo *)0x0);
              }
              pIVar14 = (Il2CppClass *)0x0;
              if ((UnityEngine_Behaviour_o *)pMVar13->parameters != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pMVar13->parameters,1,(MethodInfo *)0x0);
                pIVar14 = pMVar13->klass;
                if (pIVar14 != (Il2CppClass *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                            ((UnityEngine_RectTransform_o *)pIVar14,0,0.0,(MethodInfo *)0x0);
                  pUVar11 = (UnityEngine_RectTransform_o *)pMVar13->return_type;
                  uVar2 = *(undefined8 *)((long)&(__this_01->_1).namespaze + 4);
                  if (g_data_057a9c8a == '\0') {
                    pIVar14 = (Il2CppClass *)&TypeInfo_Vector2;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9c8a = '\x01';
                  }
                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    fVar16 = *(float *)&(__this_01->_1).namespaze;
                    UVar7.fields.y = (float)((ulong)uVar2 >> 0x20) + fVar16 * (float)((ulong)uVar3 >> 0x20);
                    UVar7.fields.x = (float)uVar2 + fVar16 * (float)uVar3;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar11,UVar7,(MethodInfo *)0x0);
                    fVar16 = 0.01;
                    if (0.01 <= fVar15) {
                      fVar16 = fVar15;
                    }
                    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor();
                    t = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar16,onVirtualUpdate,(MethodInfo *)0x0);
                    pIVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                       ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar9,action,MethodInfo_Tweener_OnComplete_Tweener);
                    return;
                  }
                }
              }
            }
          }
        }
label_03b93040:
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pIVar14,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<ReleaseText>b__37_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x3b92a00

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  void **ppvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_Material_o *__this_00;
  long *plVar5;
  code *vtableDispatch;
  UnityEngine_Object_o *pUVar6;
  Il2CppRGCTXData *x;
  UnityEngine_Vector2_o UVar7;
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  UnityEngine_RectTransform_c *pUVar10;
  Il2CppClass *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Sprite_o *in_RCX;
  undefined8 extraout_RDX;
  intptr_t extraout_RDX_00;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_RectTransform_o *pUVar12;
  MethodInfo *pMVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  
  pUVar11 = (__this->fields)._content;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(pUVar11,value,(MethodInfo *)0x0);
    return;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar11;
  if (g_data_057a9ecc == '\0') {
    pUVar12 = (UnityEngine_RectTransform_o *)&TypeInfo_GisketchSurfaceMaterial;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ecc = '\x01';
  }
  lVar4 = (pUVar11->fields).m_CachedPtr;
  if (lVar4 != 0) {
    __this_00 = *(UnityEngine_Material_o **)(lVar4 + 0x98);
    pUVar12 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat_4dcd3b0
                (__this_00,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x48),fVar15,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&pUVar12[1].klass != '\0') {
    return;
  }
  lVar4 = (pUVar12->fields).m_CachedPtr;
  if ((lVar4 != 0) &&
     (plVar5 = *(long **)(lVar4 + 0x20), pUVar12 = (UnityEngine_RectTransform_o *)0x0, plVar5 != (long *)0x0))
  {
    vtableDispatch = *(code **)(*plVar5 + 0x2a8);
    (*vtableDispatch)
              ((int)*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),plVar5,
               *(undefined8 *)(*plVar5 + 0x2b0),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ecd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Mask_GetComponent_Mask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ecd = '\x01';
  }
  pUVar12[1].monitor = method;
  il2cpp_runtime_helper_022b4080(&pUVar12[1].monitor,method);
  pUVar12[1].fields.m_CachedPtr = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&pUVar12[1].fields);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppObject *)0x0;
  pMVar13 = method;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_03b92ba4:
    ppvVar1 = &pUVar12[2].monitor;
    pUVar12[2].monitor = pIVar9;
    il2cpp_runtime_helper_022b4080(ppvVar1);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = (UnityEngine_RectTransform_c *)0x0;
    pMVar13 = method;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (method == (MethodInfo *)0x0) goto label_03b92d06;
      pUVar10 = (UnityEngine_RectTransform_c *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Mask_GetComponent_Mask);
    }
    pUVar11 = pUVar12 + 2;
    pUVar12[2].klass = pUVar10;
    il2cpp_runtime_helper_022b4080(pUVar11);
    pUVar6 = pUVar12[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_03b92cb1:
      pUVar10 = pUVar11->klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pMVar13 = (MethodInfo *)0x0;
      if (pUVar11->klass != (UnityEngine_RectTransform_c *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11->klass,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pMVar13 = (MethodInfo *)0x0;
      if (*ppvVar1 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(*ppvVar1,in_RCX,(MethodInfo *)0x0);
        pMVar13 = (MethodInfo *)0x0;
        if (*ppvVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_type(*ppvVar1,1,(MethodInfo *)0x0);
          pMVar13 = (MethodInfo *)0x0;
          if (*ppvVar1 != (long *)0x0) {
            (**(code **)(*(long *)*ppvVar1 + 0x2a8))(0x3f800000,0x3f8000003f800000);
            plVar5 = *ppvVar1;
            pMVar13 = (MethodInfo *)0x0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
              pMVar13 = (MethodInfo *)0x0;
              if (*ppvVar1 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(*ppvVar1,0,(MethodInfo *)0x0);
                goto label_03b92cb1;
              }
            }
          }
        }
      }
    }
  }
  else if (method != (MethodInfo *)0x0) {
    pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)method,MethodInfo_Image_GetComponent_Image);
    goto label_03b92ba4;
  }
label_03b92d06:
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    g_data_057a9ece = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pIVar14 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppClass *)0x0) goto label_03b93040;
  ((UnityEngine_RectTransform_Fields *)&(__this_01->_1).name)->m_CachedPtr = (intptr_t)pMVar13;
  il2cpp_runtime_helper_022b4080((UnityEngine_RectTransform_Fields *)&(__this_01->_1).name);
  pIVar14 = pMVar13->klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar6 = (UnityEngine_Object_o *)pMVar13->return_type;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pUVar6 = (UnityEngine_Object_o *)pMVar13->parameters;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pIVar14 = (Il2CppClass *)0x0;
        if (pMVar13->klass != (Il2CppClass *)0x0) {
          UVar7 = UnityEngine_RectTransform__get_sizeDelta
                            ((UnityEngine_RectTransform_o *)pMVar13->klass,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&(__this_01->_1).byval_arg.data + 4) = UVar7.fields;
          pIVar14 = (Il2CppClass *)0x0;
          if ((UnityEngine_RectTransform_o *)pMVar13->return_type != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition
                              ((UnityEngine_RectTransform_o *)pMVar13->return_type,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&(__this_01->_1).namespaze + 4) = UVar7.fields;
            pIVar14 = (Il2CppClass *)0x0;
            if (pMVar13->klass != (Il2CppClass *)0x0) {
              UVar17 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_RectTransform_o *)pMVar13->klass,(MethodInfo *)0x0);
              fVar16 = 64.0;
              if (64.0 <= UVar17.fields.m_Width) {
                fVar16 = UVar17.fields.m_Width;
              }
              *(float *)&(__this_01->_1).namespaze = fVar16;
              x = (pMVar13->field7_0x38).rgctx_data;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                pIVar14 = (Il2CppClass *)0x0;
                if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) goto label_03b93040;
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)(pMVar13->field7_0x38).rgctx_data,1,(MethodInfo *)0x0);
              }
              pIVar14 = (Il2CppClass *)0x0;
              if ((UnityEngine_Behaviour_o *)pMVar13->parameters != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pMVar13->parameters,1,(MethodInfo *)0x0);
                pIVar14 = pMVar13->klass;
                if (pIVar14 != (Il2CppClass *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                            ((UnityEngine_RectTransform_o *)pIVar14,0,0.0,(MethodInfo *)0x0);
                  pUVar11 = (UnityEngine_RectTransform_o *)pMVar13->return_type;
                  uVar2 = *(undefined8 *)((long)&(__this_01->_1).namespaze + 4);
                  if (g_data_057a9c8a == '\0') {
                    pIVar14 = (Il2CppClass *)&TypeInfo_Vector2;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9c8a = '\x01';
                  }
                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    fVar16 = *(float *)&(__this_01->_1).namespaze;
                    UVar7.fields.y = (float)((ulong)uVar2 >> 0x20) + fVar16 * (float)((ulong)uVar3 >> 0x20);
                    UVar7.fields.x = (float)uVar2 + fVar16 * (float)uVar3;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar11,UVar7,(MethodInfo *)0x0);
                    fVar16 = 0.01;
                    if (0.01 <= fVar15) {
                      fVar16 = fVar15;
                    }
                    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor();
                    t = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar16,onVirtualUpdate,(MethodInfo *)0x0);
                    pIVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                       ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object_(pIVar9,action,MethodInfo_Tweener_OnComplete_Tweener);
                    return;
                  }
                }
              }
            }
          }
        }
label_03b93040:
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pIVar14,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


