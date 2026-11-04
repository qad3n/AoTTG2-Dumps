// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonIntroReveal.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x18190b1f0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               float value,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - value,0x40400000);
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
    pUVar3 = (pGVar2->fields)._mask;
    fVar4 = 1.0 - fVar4;
    if (fVar4 < 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.0;
      if (fVar4 <= 1.0) {
        fVar6 = fVar4;
      }
    }
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                (pUVar3,0,((__this->fields).width - 0.0) * fVar6 + 0.0,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).__4__this;
      if (pGVar2 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
        pUVar3 = (pGVar2->fields)._content;
        fVar6 = (__this->fields).contentStart.fields.x;
        fVar5 = (__this->fields).contentStart.fields.y;
        if (Il2CppMethodInitialized_184341f39 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_184341f39 = '\x01';
        }
        fVar1 = (__this->fields).width;
        fVar6 = fVar1 * (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields.x + fVar6;
        fVar5 = fVar1 * (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields.y + fVar5;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.y = ((__this->fields).contentStart.fields.y - fVar5) * fVar4 + fVar5;
          value_00.fields.x = ((__this->fields).contentStart.fields.x - fVar6) * fVar4 + fVar6;
          UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18190b340

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0___Play_b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *pGVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Mask_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434220d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434220d = '\x01';
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
// 0x1818fcb80

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,
               UnityEngine_RectTransform_o *mask,UnityEngine_RectTransform_o *content,
               UnityEngine_Sprite_o *brushSprite,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_Mask_o *pUVar3;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_18434220b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434220b = '\x01';
  }
  (__this->fields)._mask = mask;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mask,mask);
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content,content);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (mask == (UnityEngine_RectTransform_o *)0x0) goto label_1818fcd90;
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)mask,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  }
  else {
    pUVar2 = (UnityEngine_UI_Image_o *)0x0;
  }
  (__this->fields)._maskImage = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._maskImage,pUVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)mask,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (mask == (UnityEngine_RectTransform_o *)0x0) goto label_1818fcd90;
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)mask,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Mask);
  }
  else {
    pUVar3 = (UnityEngine_UI_Mask_o *)0x0;
  }
  (__this->fields)._maskComponent = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._maskComponent,pUVar3);
  pUVar2 = (__this->fields)._maskImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._maskImage;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fcd90;
    UnityEngine_UI_Image__set_sprite(pUVar2,brushSprite,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._maskImage;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fcd90;
    UnityEngine_UI_Image__set_type(pUVar2,1,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._maskImage;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fcd90;
    local_38.r = 1.0;
    local_38.g = 1.0;
    local_38.b = 1.0;
    local_38.a = 1.0;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,(UnityEngine_Color_o *)&local_38,(pUVar2->klass->vtable)._23_set_color.method);
    pUVar2 = (__this->fields)._maskImage;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fcd90;
    (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar2,false,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
    pUVar2 = (__this->fields)._maskImage;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fcd90;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._maskComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields)._maskComponent;
    if (pUVar3 == (UnityEngine_UI_Mask_o *)0x0) {
label_1818fcd90:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,false,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Play
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, float duration, const MethodInfo* method);
// 0x1818fc7e0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this,float duration,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_Mask_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *object;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Rect_o *pUVar8;
  undefined8 uVar9;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar10;
  DG_Tweening_TweenCallback_o *action;
  float fVar11;
  float fStackX_24;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_18434220c == '\0') {
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
    Il2CppMethodInitialized_18434220c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___c__DisplayClass5_0_o *)0x0)
  goto label_1818fcb70;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  pUVar3 = (__this->fields)._mask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar3 = (__this->fields)._content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      pUVar4 = (__this->fields)._maskComponent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        pUVar3 = (__this->fields)._mask;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          fStackX_24 = UVar7.fields.y;
          (object->fields).maskSize.fields.y = fStackX_24;
          (object->fields).maskSize.fields.x = UVar7.fields.x;
          pUVar3 = (__this->fields)._content;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
            fStackX_24 = UVar7.fields.y;
            (object->fields).contentStart.fields.y = fStackX_24;
            (object->fields).contentStart.fields.x = UVar7.fields.x;
            pUVar3 = (__this->fields)._mask;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar8 = UnityEngine_RectTransform__get_rect(local_48,pUVar3,(MethodInfo *)0x0);
              fVar1 = (pUVar8->fields).m_Width;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              fVar11 = 64.0;
              if (64.0 <= fVar1) {
                fVar11 = fVar1;
              }
              (object->fields).width = fVar11;
              pUVar5 = (__this->fields)._maskImage;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar6) {
                pUVar5 = (__this->fields)._maskImage;
                if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fcb70;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,true,(MethodInfo *)0x0);
              }
              pUVar4 = (__this->fields)._maskComponent;
              if (pUVar4 != (UnityEngine_UI_Mask_o *)0x0) {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,true,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._mask;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar3,0,0.0,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._content;
                  fVar1 = (object->fields).contentStart.fields.x;
                  fVar11 = (object->fields).contentStart.fields.y;
                  uVar9 = il2cpp_runtime_helper_181882d40(0);
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    fVar2 = (object->fields).width;
                    fStackX_24 = (float)((ulonglong)uVar9 >> 0x20);
                    UVar7.fields.x = (float)uVar9 * fVar2 + fVar1;
                    UVar7.fields.y = fStackX_24 * fVar2 + fVar11;
                    UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar7,(MethodInfo *)0x0);
                    __this_00 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                    DG_Tweening_TweenCallback_float____ctor
                              ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__0
                               ,(MethodInfo_E5A750 *)0x0);
                    fVar1 = 0.01;
                    if (0.01 <= duration) {
                      fVar1 = duration;
                    }
                    pDVar10 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar1,__this_00,(MethodInfo *)0x0);
                    pDVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                        ((Il2CppObject *)pDVar10,true,
                                         (MethodInfo_7CA3D0 *)
                                         MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
                    action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                    DG_Tweening_TweenCallback___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__1
                               ,(MethodInfo *)0x0);
                    pDVar10 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                        ((Il2CppObject *)pDVar10,action,
                                         (MethodInfo_7C92E0 *)
                                         MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
                    return (DG_Tweening_Tween_o *)pDVar10;
                  }
                }
              }
            }
          }
        }
label_1818fcb70:
        ThrowNullReferenceException();
      }
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal___ctor(Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


