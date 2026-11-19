// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonIntroReveal.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x539e4d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x539e4f0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields UVar3;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar4;
  UnityEngine_RectTransform_o *pUVar5;
  float fVar6;
  UnityEngine_Vector2_o value_00;
  float fVar7;
  float fVar8;
  
  fVar6 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this,1.0 - value,3.0,method);
  pGVar4 = (__this->fields).__4__this;
  if ((pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
     (pUVar5 = (pGVar4->fields)._mask, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
    fVar6 = 1.0 - fVar6;
    fVar8 = 1.0;
    if (fVar6 <= 1.0) {
      fVar8 = fVar6;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
              (pUVar5,0,(float)(-(uint)(0.0 <= fVar6) & (uint)fVar8) * (__this->fields).width + 0.0,
               (MethodInfo *)0x0);
    pGVar4 = (__this->fields).__4__this;
    if (pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      pUVar5 = (pGVar4->fields)._content;
      UVar1 = (__this->fields).contentStart.fields;
      if (Il2CppMethodInitialized_07542888 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542888 = '\x01';
      }
      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
        UVar3 = (__this->fields).contentStart.fields;
        fVar8 = (__this->fields).width;
        fVar7 = UVar1.x + fVar8 * UVar2.x;
        fVar8 = UVar1.y + fVar8 * UVar2.y;
        value_00.fields.x = fVar6 * (UVar3.x - fVar7) + fVar7;
        value_00.fields.y = fVar6 * (UVar3.y - fVar8) + fVar8;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x539e600

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Mask_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07542b8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b8c = '\x01';
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
          pUVar3 = (pGVar1->fields)._maskImage;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            return;
          }
          pGVar1 = (__this->fields).__4__this;
          if ((pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) &&
             (pUVar3 = (pGVar1->fields)._maskImage, pUVar3 != (UnityEngine_UI_Image_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, UnityEngine_RectTransform_o* mask, UnityEngine_RectTransform_o* content, UnityEngine_Sprite_o* brushSprite, const MethodInfo* method);
// 0x539df40

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,
               UnityEngine_RectTransform_o *mask,UnityEngine_RectTransform_o *content,
               UnityEngine_Sprite_o *brushSprite,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  UnityEngine_UI_Mask_o **targetAddress_00;
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_Mask_o *pUVar3;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_07542b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b8a = '\x01';
  }
  (__this->fields)._mask = mask;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mask);
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_UI_Image_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (mask == (UnityEngine_RectTransform_o *)0x0) goto label_0539e156;
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)mask,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  }
  targetAddress = &(__this->fields)._maskImage;
  (__this->fields)._maskImage = pUVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_UI_Mask_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (mask == (UnityEngine_RectTransform_o *)0x0) goto label_0539e156;
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)mask,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Mask);
  }
  targetAddress_00 = &(__this->fields)._maskComponent;
  (__this->fields)._maskComponent = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pUVar2 = (__this->fields)._maskImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_0539e156;
    UnityEngine_UI_Image__set_sprite(*targetAddress,brushSprite,(MethodInfo *)0x0);
    if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_0539e156;
    UnityEngine_UI_Image__set_type(*targetAddress,1,(MethodInfo *)0x0);
    pUVar2 = *targetAddress;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_0539e156;
    UVar4.fields.b = 1.0;
    UVar4.fields.a = 1.0;
    UVar4.fields.r = 1.0;
    UVar4.fields.g = 1.0;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,UVar4,(pUVar2->klass->vtable)._23_set_color.method);
    pUVar2 = *targetAddress;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_0539e156;
    (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar2,false,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
    if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_0539e156;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*targetAddress,false,(MethodInfo *)0x0);
  }
  pUVar3 = *targetAddress_00;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*targetAddress_00 != (UnityEngine_UI_Mask_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*targetAddress_00,false,(MethodInfo *)0x0);
    return;
  }
label_0539e156:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Play
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, float duration, const MethodInfo* method);
// 0x539e160

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,float duration,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Mask_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_Fields UVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar7;
  DG_Tweening_TweenCallback_o *__this_02;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  
  if (Il2CppMethodInitialized_07542b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0);
    Il2CppMethodInitialized_07542b8b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *)0x0)
  goto label_0539e4be;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pUVar2 = (__this->fields)._mask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar2 = (__this->fields)._content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      pUVar3 = (__this->fields)._maskComponent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        pUVar2 = (__this->fields)._mask;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
          (__this_00->fields).maskSize.fields = UVar5;
          pUVar2 = (__this->fields)._content;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UVar5 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
            (__this_00->fields).contentStart.fields = UVar5;
            pUVar2 = (__this->fields)._mask;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              fVar8 = 64.0;
              if (64.0 <= UVar9.fields.m_Width) {
                fVar8 = UVar9.fields.m_Width;
              }
              (__this_00->fields).width = fVar8;
              pUVar4 = (__this->fields)._maskImage;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar6) {
                pUVar4 = (__this->fields)._maskImage;
                if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_0539e4be;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,true,(MethodInfo *)0x0);
              }
              pUVar3 = (__this->fields)._maskComponent;
              if (pUVar3 != (UnityEngine_UI_Mask_o *)0x0) {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,true,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._mask;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,0,0.0,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._content;
                  UVar5 = (__this_00->fields).contentStart.fields;
                  if (Il2CppMethodInitialized_07542888 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                    Il2CppMethodInitialized_07542888 = '\x01';
                  }
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
                    fVar8 = (__this_00->fields).width;
                    value.fields.y = UVar5.y + fVar8 * UVar1.y;
                    value.fields.x = UVar5.x + fVar8 * UVar1.x;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
                    fVar8 = 0.01;
                    if (0.01 <= duration) {
                      fVar8 = duration;
                    }
                    __this_01 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor
                              (__this_01,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__0
                               ,(MethodInfo_4293C90 *)0x0);
                    pDVar7 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar8,__this_01,(MethodInfo *)0x0);
                    pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                       ((Il2CppObject *)pDVar7,true,
                                        (MethodInfo_36B08F0 *)
                                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
                    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                    DG_Tweening_TweenCallback___ctor
                              (__this_02,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__1
                               ,(MethodInfo *)0x0);
                    pDVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                       ((Il2CppObject *)pDVar7,__this_02,
                                        (MethodInfo_36AF8A0 *)
                                        MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
                    return (DG_Tweening_Tween_o *)pDVar7;
                  }
                }
              }
            }
          }
        }
label_0539e4be:
        ThrowNullReferenceException();
      }
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, const MethodInfo* method);
// 0x539e4e0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


