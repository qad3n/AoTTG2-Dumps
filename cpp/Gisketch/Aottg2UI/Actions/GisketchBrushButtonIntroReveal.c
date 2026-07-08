// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonIntroReveal.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x3b26f40

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_<>c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x3b26f60

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_<>c__DisplayClass5_0__<Play>b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o
                *__this,float value,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_o value_00;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this,1.0 - value,3.0,method);
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
     (pUVar4 = (pGVar3->fields)._mask, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    fVar5 = 1.0 - fVar5;
    fVar7 = 1.0;
    if (fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
              (pUVar4,0,(float)(-(uint)(0.0 <= fVar5) & (uint)fVar7) * (__this->fields).width + 0.0,
               (MethodInfo *)0x0);
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pUVar4 = (pGVar3->fields)._content;
      UVar6 = (__this->fields).contentStart.fields;
      fVar7 = UVar6.x;
      fVar8 = UVar6.y;
      if (DAT_05701371 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_05701371 = '\x01';
        UVar6 = (__this->fields).contentStart.fields;
      }
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
        fVar1 = (__this->fields).width;
        fVar7 = fVar7 + fVar1 * (float)uVar2;
        fVar8 = fVar8 + fVar1 * (float)((ulong)uVar2 >> 0x20);
        value_00.fields.y = fVar5 * (UVar6.y - fVar8) + fVar8;
        value_00.fields.x = fVar5 * (UVar6.x - fVar7) + fVar7;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x3b27070

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_<>c__DisplayClass5_0__<Play>b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o
                *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Mask_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  bool_conflict bVar4;
  
  if (DAT_057015a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015a0 = '\x01';
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
                (pUVar2,(UnityEngine_Vector2_o)(__this->fields).contentStart.fields,
                 (MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
         (__this_00 = (pGVar1->fields)._maskComponent, __this_00 != (UnityEngine_UI_Mask_o *)0x0)) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0)
        ;
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
          pUVar3 = (pGVar1->fields)._maskImage;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          pGVar1 = (__this->fields).__4__this;
          if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
             (pUVar3 = (pGVar1->fields)._maskImage, pUVar3 != (UnityEngine_UI_Image_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, UnityEngine_RectTransform_o* mask, UnityEngine_RectTransform_o* content, UnityEngine_Sprite_o* brushSprite, const MethodInfo* method);
// 0x3b269e0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,
               UnityEngine_RectTransform_o *mask,UnityEngine_RectTransform_o *content,
               UnityEngine_Sprite_o *brushSprite,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_UI_Mask_o **ppUVar2;
  bool_conflict bVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_UI_Mask_o *pUVar5;
  
  if (DAT_0570159e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Mask_GetComponent_Mask);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570159e = '\x01';
  }
  (__this->fields)._mask = mask;
  il2cpp_runtime_glue(&(__this->fields)._mask,mask);
  (__this->fields)._content = content;
  il2cpp_runtime_glue(&(__this->fields)._content);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_UI_Image_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (mask == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b26bf6;
    pUVar4 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)mask,MethodInfo_Image_GetComponent_Image);
  }
  ppUVar1 = &(__this->fields)._maskImage;
  (__this->fields)._maskImage = pUVar4;
  il2cpp_runtime_glue(ppUVar1);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar5 = (UnityEngine_UI_Mask_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (mask == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b26bf6;
    pUVar5 = (UnityEngine_UI_Mask_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)mask,MethodInfo_Mask_GetComponent_Mask);
  }
  ppUVar2 = &(__this->fields)._maskComponent;
  (__this->fields)._maskComponent = pUVar5;
  il2cpp_runtime_glue(ppUVar2);
  pUVar4 = (__this->fields)._maskImage;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b26bf6;
    UnityEngine_UI_Image__set_sprite(*ppUVar1,brushSprite,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b26bf6;
    UnityEngine_UI_Image__set_type(*ppUVar1,1,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b26bf6;
    (*((*ppUVar1)->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
    pUVar4 = *ppUVar1;
    if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b26bf6;
    (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar4,0,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b26bf6;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
  }
  pUVar5 = *ppUVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (*ppUVar2 != (UnityEngine_UI_Mask_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar2,0,(MethodInfo *)0x0);
    return;
  }
LAB_03b26bf6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Play
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, float duration, const MethodInfo* method);
// 0x3b26c00

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,float duration,
          MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_Mask_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_Fields UVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  
  if (DAT_0570159f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__Play_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Play_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass5_0);
    DAT_0570159f = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03b26f30;
  pIVar8[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar8 + 1);
  pUVar3 = (__this->fields)._mask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar3 = (__this->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      pUVar4 = (__this->fields)._maskComponent;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pUVar3 = (__this->fields)._mask;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          *(UnityEngine_Vector2_Fields *)((long)&pIVar8[2].klass + 4) = UVar6;
          pUVar3 = (__this->fields)._content;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UVar6 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
            *(UnityEngine_Vector2_Fields *)((long)&pIVar8[1].monitor + 4) = UVar6;
            pUVar3 = (__this->fields)._mask;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
              fVar10 = 64.0;
              if (64.0 <= UVar11.fields.m_Width) {
                fVar10 = UVar11.fields.m_Width;
              }
              *(float *)&pIVar8[1].monitor = fVar10;
              pUVar5 = (__this->fields)._maskImage;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                pUVar5 = (__this->fields)._maskImage;
                if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b26f30;
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pUVar5,1,(MethodInfo *)0x0);
              }
              pUVar4 = (__this->fields)._maskComponent;
              if (pUVar4 != (UnityEngine_UI_Mask_o *)0x0) {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pUVar4,1,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._mask;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                            (pUVar3,0,0.0,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._content;
                  uVar1 = *(undefined8 *)((long)&pIVar8[1].monitor + 4);
                  if (DAT_05701371 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Vector2);
                    DAT_05701371 = '\x01';
                  }
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
                    value.fields.y =
                         (float)((ulong)uVar1 >> 0x20) +
                         *(float *)&pIVar8[1].monitor * (float)((ulong)uVar2 >> 0x20);
                    value.fields.x = (float)uVar1 + *(float *)&pIVar8[1].monitor * (float)uVar2;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value,(MethodInfo *)0x0);
                    fVar10 = 0.01;
                    if (0.01 <= duration) {
                      fVar10 = duration;
                    }
                    onVirtualUpdate =
                         (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
                    DG_Tweening_TweenCallback<float>___ctor();
                    t = DG_Tweening_DOVirtual__Float
                                  (0.0,1.0,fVar10,onVirtualUpdate,(MethodInfo *)0x0);
                    pIVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                                       ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
                    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
                    DG_Tweening_TweenCallback___ctor();
                    pDVar9 = (DG_Tweening_Tween_o *)
                             DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                       (pIVar8,action,MethodInfo_Tweener_OnComplete_Tweener);
                    return pDVar9;
                  }
                }
              }
            }
          }
        }
LAB_03b26f30:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, const MethodInfo* method);
// 0x3b26f50

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


