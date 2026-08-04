// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonIntroReveal.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x3b93050

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x3b93070

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               float value,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_Mask_o *__this_00;
  UnityEngine_UI_Image_o *pUVar5;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this_01;
  float fVar7;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_Fields UVar8;
  float fVar9;
  float fVar10;
  
  __this_01 = __this;
  fVar7 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this,1.0 - value,3.0,method);
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
     (__this_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *)
                  (pGVar3->fields)._mask,
     __this_01 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *)0x0)) {
    fVar7 = 1.0 - fVar7;
    fVar9 = 1.0;
    if (fVar7 <= 1.0) {
      fVar9 = fVar7;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
              ((UnityEngine_RectTransform_o *)__this_01,0,
               (float)(-(uint)(0.0 <= fVar7) & (uint)fVar9) * (__this->fields).width + 0.0,(MethodInfo *)0x0);
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pUVar4 = (pGVar3->fields)._content;
      UVar8 = (__this->fields).contentStart.fields;
      fVar9 = UVar8.x;
      fVar10 = UVar8.y;
      if (g_data_057a9c8a == '\0') {
        __this_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *)
                    &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9c8a = '\x01';
        UVar8 = (__this->fields).contentStart.fields;
      }
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
        fVar1 = (__this->fields).width;
        fVar9 = fVar9 + fVar1 * (float)uVar2;
        fVar10 = fVar10 + fVar1 * (float)((ulong)uVar2 >> 0x20);
        value_00.fields.x = fVar7 * (UVar8.x - fVar9) + fVar9;
        value_00.fields.y = fVar7 * (UVar8.y - fVar10) + fVar10;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ecf == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ecf = '\x01';
  }
  pGVar3 = (__this_01->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
     (pUVar4 = (pGVar3->fields)._mask, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar4,(UnityEngine_Vector2_o)(__this_01->fields).maskSize.fields,(MethodInfo *)0x0);
    pGVar3 = (__this_01->fields).__4__this;
    if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
       (pUVar4 = (pGVar3->fields)._content, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar4,(UnityEngine_Vector2_o)(__this_01->fields).contentStart.fields,(MethodInfo *)0x0);
      pGVar3 = (__this_01->fields).__4__this;
      if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
         (__this_00 = (pGVar3->fields)._maskComponent, __this_00 != (UnityEngine_UI_Mask_o *)0x0)) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
        pGVar3 = (__this_01->fields).__4__this;
        if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
          pUVar5 = (pGVar3->fields)._maskImage;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return;
          }
          pGVar3 = (__this_01->fields).__4__this;
          if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
             (pUVar5 = (pGVar3->fields)._maskImage, pUVar5 != (UnityEngine_UI_Image_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x3b93180

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Mask_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  bool_conflict bVar4;
  
  if (g_data_057a9ecf == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ecf = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
     (pUVar2 = (pGVar1->fields)._mask, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar2,(UnityEngine_Vector2_o)(__this->fields).maskSize.fields,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).__4__this;
    if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
       (pUVar2 = (pGVar1->fields)._content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)(__this->fields).contentStart.fields,(MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
         (__this_00 = (pGVar1->fields)._maskComponent, __this_00 != (UnityEngine_UI_Mask_o *)0x0)) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
          pUVar3 = (pGVar1->fields)._maskImage;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          pGVar1 = (__this->fields).__4__this;
          if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
             (pUVar3 = (pGVar1->fields)._maskImage, pUVar3 != (UnityEngine_UI_Image_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, UnityEngine_RectTransform_o* mask, UnityEngine_RectTransform_o* content, UnityEngine_Sprite_o* brushSprite, const MethodInfo* method);
// 0x3b92af0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,
               UnityEngine_RectTransform_o *mask,UnityEngine_RectTransform_o *content,
               UnityEngine_Sprite_o *brushSprite,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_UI_Mask_o **ppUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_RectTransform_c *x;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_Fields UVar6;
  bool_conflict bVar7;
  UnityEngine_UI_Image_o *pUVar8;
  UnityEngine_UI_Mask_o *pUVar9;
  UnityEngine_RectTransform_o *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_RectTransform_o *pUVar10;
  long *__this_02;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  
  if (g_data_057a9ecd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Mask_GetComponent_Mask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ecd = '\x01';
  }
  (__this->fields)._mask = mask;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._mask,mask);
  (__this->fields)._content = content;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._content);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = (UnityEngine_UI_Image_o *)0x0;
  pUVar10 = mask;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_03b92ba4:
    ppUVar1 = &(__this->fields)._maskImage;
    (__this->fields)._maskImage = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = (UnityEngine_UI_Mask_o *)0x0;
    pUVar10 = mask;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (mask == (UnityEngine_RectTransform_o *)0x0) goto label_03b92d06;
      pUVar9 = (UnityEngine_UI_Mask_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)mask,MethodInfo_Mask_GetComponent_Mask);
    }
    ppUVar2 = &(__this->fields)._maskComponent;
    (__this->fields)._maskComponent = pUVar9;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    pUVar8 = (__this->fields)._maskImage;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_03b92cb1:
      pUVar9 = *ppUVar2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pUVar10 = (UnityEngine_RectTransform_o *)0x0;
      if (*ppUVar2 != (UnityEngine_UI_Mask_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pUVar10 = (UnityEngine_RectTransform_o *)0x0;
      if (*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(*ppUVar1,brushSprite,(MethodInfo *)0x0);
        pUVar10 = (UnityEngine_RectTransform_o *)0x0;
        if (*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_type(*ppUVar1,1,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_RectTransform_o *)0x0;
          if (*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) {
            (*((*ppUVar1)->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f8000003f800000);
            pUVar8 = *ppUVar1;
            pUVar10 = (UnityEngine_RectTransform_o *)0x0;
            if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pUVar8,0,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
              pUVar10 = (UnityEngine_RectTransform_o *)0x0;
              if (*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
                goto label_03b92cb1;
              }
            }
          }
        }
      }
    }
  }
  else if (mask != (UnityEngine_RectTransform_o *)0x0) {
    pUVar8 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)mask,MethodInfo_Image_GetComponent_Image);
    goto label_03b92ba4;
  }
label_03b92d06:
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
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
  __this_02 = (long *)__this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_03b93040;
  (__this_01->fields).m_CachedPtr = (intptr_t)pUVar10;
  il2cpp_runtime_helper_022b4080(&__this_01->fields);
  pUVar5 = pUVar10[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar5 = (UnityEngine_Object_o *)pUVar10[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      x = pUVar10[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        __this_02 = (long *)0x0;
        if (pUVar10[1].monitor != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_sizeDelta(pUVar10[1].monitor,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&__this_01[1].monitor + 4) = UVar6;
          __this_00 = (UnityEngine_RectTransform_o *)pUVar10[1].fields.m_CachedPtr;
          __this_02 = (long *)0x0;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            UVar6 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&__this_01[1].klass + 4) = UVar6;
            __this_02 = (long *)0x0;
            if (pUVar10[1].monitor != (UnityEngine_RectTransform_o *)0x0) {
              UVar13 = UnityEngine_RectTransform__get_rect(pUVar10[1].monitor,(MethodInfo *)0x0);
              fVar12 = 64.0;
              if (64.0 <= UVar13.fields.m_Width) {
                fVar12 = UVar13.fields.m_Width;
              }
              *(float *)&__this_01[1].klass = fVar12;
              pUVar5 = pUVar10[2].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                __this_02 = (long *)0x0;
                if (pUVar10[2].monitor == (UnityEngine_Behaviour_o *)0x0) goto label_03b93040;
                UnityEngine_Behaviour__set_enabled(pUVar10[2].monitor,1,(MethodInfo *)0x0);
              }
              __this_02 = (long *)0x0;
              if (pUVar10[2].klass != (UnityEngine_RectTransform_c *)0x0) {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pUVar10[2].klass,1,(MethodInfo *)0x0);
                __this_02 = pUVar10[1].monitor;
                if ((UnityEngine_RectTransform_o *)__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                            ((UnityEngine_RectTransform_o *)__this_02,0,0.0,(MethodInfo *)0x0);
                  pUVar10 = (UnityEngine_RectTransform_o *)pUVar10[1].fields.m_CachedPtr;
                  uVar3 = *(undefined8 *)((long)&__this_01[1].klass + 4);
                  if (g_data_057a9c8a == '\0') {
                    __this_02 = &TypeInfo_Vector2;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9c8a = '\x01';
                  }
                  if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    value.fields.y =
                         (float)((ulong)uVar3 >> 0x20) +
                         *(float *)&__this_01[1].klass * (float)((ulong)uVar4 >> 0x20);
                    value.fields.x = (float)uVar3 + *(float *)&__this_01[1].klass * (float)uVar4;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar10,value,(MethodInfo *)0x0);
                    fVar12 = 0.01;
                    if (0.01 <= fVar11) {
                      fVar12 = fVar11;
                    }
                    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor();
                    t = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar12,onVirtualUpdate,(MethodInfo *)0x0);
                    t_00 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                     ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object_(t_00,action,MethodInfo_Tweener_OnComplete_Tweener);
                    return;
                  }
                }
              }
            }
          }
        }
label_03b93040:
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Play
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, float duration, const MethodInfo* method);
// 0x3b92d10

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,float duration,
          MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_UI_Mask_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_Fields UVar6;
  bool_conflict bVar7;
  UnityEngine_RectTransform_o *__this_00;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar8;
  DG_Tweening_Tween_o *extraout_RAX;
  UnityEngine_RectTransform_o *pUVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  
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
  __this_00 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pUVar9 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_03b93040;
  (__this_00->fields).m_CachedPtr = (intptr_t)__this;
  il2cpp_runtime_helper_022b4080(&__this_00->fields);
  pUVar9 = (__this->fields)._mask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar9 = (__this->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pUVar3 = (__this->fields)._maskComponent;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pUVar4 = (__this->fields)._mask;
        pUVar9 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&__this_00[1].monitor + 4) = UVar6;
          pUVar4 = (__this->fields)._content;
          pUVar9 = (UnityEngine_RectTransform_o *)0x0;
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UVar6 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&__this_00[1].klass + 4) = UVar6;
            pUVar4 = (__this->fields)._mask;
            pUVar9 = (UnityEngine_RectTransform_o *)0x0;
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UVar11 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
              fVar10 = 64.0;
              if (64.0 <= UVar11.fields.m_Width) {
                fVar10 = UVar11.fields.m_Width;
              }
              *(float *)&__this_00[1].klass = fVar10;
              pUVar5 = (__this->fields)._maskImage;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar7 != '\0') {
                pUVar5 = (__this->fields)._maskImage;
                pUVar9 = (UnityEngine_RectTransform_o *)0x0;
                if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_03b93040;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,1,(MethodInfo *)0x0);
              }
              pUVar3 = (__this->fields)._maskComponent;
              pUVar9 = (UnityEngine_RectTransform_o *)0x0;
              if (pUVar3 != (UnityEngine_UI_Mask_o *)0x0) {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,1,(MethodInfo *)0x0);
                pUVar9 = (__this->fields)._mask;
                if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar9,0,0.0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._content;
                  uVar1 = *(undefined8 *)((long)&__this_00[1].klass + 4);
                  if (g_data_057a9c8a == '\0') {
                    pUVar9 = (UnityEngine_RectTransform_o *)&TypeInfo_Vector2;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9c8a = '\x01';
                  }
                  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    value.fields.y =
                         (float)((ulong)uVar1 >> 0x20) +
                         *(float *)&__this_00[1].klass * (float)((ulong)uVar2 >> 0x20);
                    value.fields.x = (float)uVar1 + *(float *)&__this_00[1].klass * (float)uVar2;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
                    fVar10 = 0.01;
                    if (0.01 <= duration) {
                      fVar10 = duration;
                    }
                    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor();
                    t = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar10,onVirtualUpdate,(MethodInfo *)0x0);
                    t_00 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                     ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    pDVar8 = (DG_Tweening_Tween_o *)
                             DG_Tweening_TweenSettingsExtensions__OnComplete_object_(t_00,action,MethodInfo_Tweener_OnComplete_Tweener)
                    ;
                    return pDVar8;
                  }
                }
              }
            }
          }
        }
label_03b93040:
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, const MethodInfo* method);
// 0x3b93060

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


