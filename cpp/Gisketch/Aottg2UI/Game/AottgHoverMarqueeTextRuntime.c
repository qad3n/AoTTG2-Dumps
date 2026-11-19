// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeTextRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x5e84130

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,System_String_o *value,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
            (__this,style,theme,activeColor,(MethodInfo *)activeColor);
  pTVar1 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._66_set_text.methodPtr)(pTVar1,value,(pTVar1->klass->vtable)._66_set_text.method);
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,(MethodInfo *)value);
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84cd0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t == (DG_Tweening_Tween_o *)0x0) {
    return;
  }
  DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84cf0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, bool active, const MethodInfo* method);
// 0x5e84d00

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,bool active,MethodInfo *method)

{
  undefined7 in_register_00000031;
  
  (__this->fields)._active = active;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
            (__this,(MethodInfo *)CONCAT71(in_register_00000031,active));
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$CreateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x5e841a0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  TMPro_TextMeshProUGUI_o **targetAddress_00;
  Il2CppType *handle;
  int32_t weight;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  TMPro_TMP_FontAsset_o *value;
  System_String_o *family;
  float fVar4;
  UnityEngine_Color_Fields UVar5;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o fallback_00;
  
  if (Il2CppMethodInitialized_07548843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Hover Marquee Text");
    Il2CppMethodInitialized_07548843 = '\x01';
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
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                           );
        targetAddress = &(__this->fields)._textRect;
        (__this->fields)._textRect = pUVar2;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pUVar2 = (__this->fields)._textRect;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(pUVar2,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (*targetAddress,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot
                        (*targetAddress,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              pUVar2 = *targetAddress;
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMin
                          (pUVar2,(UnityEngine_Vector2_o)
                                  (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                           (MethodInfo *)0x0);
                pUVar2 = *targetAddress;
                if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_0753ecc8 = '\x01';
                }
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMax
                            (pUVar2,(UnityEngine_Vector2_o)
                                    (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  pTVar3 = UnityEngine_GameObject__AddComponent_object_
                                     (__this_00,
                                      (MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
                  targetAddress_00 = &(__this->fields)._text;
                  (__this->fields)._text = pTVar3;
                  Il2CppCodeGenWriteBarrier(targetAddress_00);
                  pTVar3 = (__this->fields)._text;
                  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    (*(pTVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pTVar3,false,(pTVar3->klass->vtable)._25_set_raycastTarget.method);
                    if (*targetAddress_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping
                                ((TMPro_TMP_Text_o *)*targetAddress_00,false,(MethodInfo *)0x0);
                      if (*targetAddress_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        TMPro_TMP_Text__set_alignment
                                  ((TMPro_TMP_Text_o *)*targetAddress_00,0x1001,(MethodInfo *)0x0);
                        pTVar3 = *targetAddress_00;
                        if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                          if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05e8461b;
                          family = (System_String_o *)0x0;
                          TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar3,20.0,(MethodInfo *)0x0);
                          pTVar3 = *targetAddress_00;
                          weight = 400;
                        }
                        else {
                          if ((style->fields).fontSize.fields.value <= 0.0) {
                            fVar4 = 20.0;
                          }
                          else {
                            fVar4 = System_Nullable_float___get_Value
                                              (&(style->fields).fontSize,
                                               (MethodInfo_3CDA2D0 *)
                                               MethodInfo_System_Nullable_float_get_Value);
                          }
                          if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
                             (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0)) goto label_05e8461b;
                          TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar3,fVar4,(MethodInfo *)0x0);
                          pTVar3 = *targetAddress_00;
                          family = (style->fields).fontFamily;
                          weight = System_Nullable_int___GetValueOrDefault_3cd4bf0
                                             (&(style->fields).fontWeight,400,
                                              (MethodInfo_3CD4BF0 *)
                                              MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
                        }
                        value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                          (family,weight,(System_String_o *)0x0,(MethodInfo *)0x0);
                        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar3,value,(MethodInfo *)0x0);
                          if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            (__this->fields)._normalColor.fields.r = 1.0;
                            (__this->fields)._normalColor.fields.g = 1.0;
                            (__this->fields)._normalColor.fields.b = 1.0;
                            (__this->fields)._normalColor.fields.a = 1.0;
                            if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05e8461b;
                            fVar4 = (float)g_data_01005870;
                            fallback.fields.g = g_data_01005870._4_4_;
                            fallback.fields._8_8_ = g_data_01005870;
                          }
                          else {
                            if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05e8461b;
                            fallback.fields.b = 1.0;
                            fallback.fields.a = 1.0;
                            fallback.fields.r = 1.0;
                            fallback.fields.g = 1.0;
                            UVar5 = (UnityEngine_Color_Fields)
                                    Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                              (theme,(style->fields).textColor,fallback,(MethodInfo *)0x0);
                            fallback.fields._8_8_ = UVar5._8_8_;
                            fVar4 = UVar5.r;
                            fallback.fields.g = UVar5.g;
                            (__this->fields)._normalColor.fields = UVar5;
                          }
                          fallback_00.fields.g = fallback.fields.g;
                          fallback_00.fields.r = fVar4;
                          fallback_00.fields.b = (float)(int)fallback.fields._8_8_;
                          fallback_00.fields.a = (float)(int)((ulong)fallback.fields._8_8_ >> 0x20);
                          UVar5 = (UnityEngine_Color_Fields)
                                  Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                            (theme,activeColor,fallback_00,(MethodInfo *)0x0);
                          (__this->fields)._activeColor.fields = UVar5;
                          pTVar3 = (__this->fields)._text;
                          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
                                      (pTVar3,(UnityEngine_Color_o)(__this->fields)._normalColor.fields,
                                       (pTVar3->klass->vtable)._23_set_color.method);
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
        }
      }
    }
  }
label_05e8461b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RegisterParent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84640

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgHoverMarqueeParentRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeParentRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548844 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar2,
                             (MethodInfo_34B0830 *)
                             MethodInfo_UnityEngine_Component_GetComponent_AottgHoverMarqueeParentRuntime);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (bVar1) {
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05e8474f;
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (__this_01,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeParentRuntime);
        method_00 = extraout_RDX_00;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register(__this_00,__this,method_00);
        return;
      }
    }
  }
label_05e8474f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84760

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  UnityEngine_Color_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  UnityEngine_Vector2_o UVar7;
  bool bVar8;
  ulong uVar9;
  UnityEngine_RectTransform_o *pUVar10;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar11;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_00;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar12;
  DG_Tweening_TweenCallback_o *__this_02;
  UnityEngine_RectTransform_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  UnityEngine_Rect_o UVar18;
  float local_58;
  float local_48;
  
  if (Il2CppMethodInitialized_07548845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector2_Vector2_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_07548845 = '\x01';
  }
  pTVar6 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar13 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      targetAddress = &(__this->fields)._tween;
      pDVar12 = (__this->fields)._tween;
      if (pDVar12 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar12,false,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar13 = (__this->fields)._textRect;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar13,(UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
        ;
        pTVar6 = (__this->fields)._text;
        if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
          uVar9 = (ulong)(__this->fields)._active;
          pUVar1 = &(__this->fields)._normalColor + (uVar9 != 0);
          uVar2 = (pUVar1->fields).r;
          uVar4 = (pUVar1->fields).g;
          UVar17.fields.g = (float)uVar4;
          UVar17.fields.r = (float)uVar2;
          pUVar1 = &(__this->fields)._normalColor + uVar9;
          uVar3 = (pUVar1->fields).b;
          uVar5 = (pUVar1->fields).a;
          UVar17.fields.a = (float)uVar5;
          UVar17.fields.b = (float)uVar3;
          (*(pTVar6->klass->vtable)._23_set_color.methodPtr)
                    (pTVar6,UVar17,(pTVar6->klass->vtable)._23_set_color.method);
          pUVar10 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar13 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar13 = (UnityEngine_RectTransform_o *)0x0,
             pUVar10->klass == TypeInfo_UnityEngine_RectTransform)) {
            pUVar13 = pUVar10;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          local_58 = 0.0;
          if (bVar8) {
            if (pUVar13 == (UnityEngine_RectTransform_o *)0x0) goto label_05e84cc7;
            UVar18 = UnityEngine_RectTransform__get_rect(pUVar13,(MethodInfo *)0x0);
            local_58 = UVar18.fields.m_Width;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar16 = 0.0;
          if (bVar8) {
            if (pUVar13 == (UnityEngine_RectTransform_o *)0x0) goto label_05e84cc7;
            UVar18 = UnityEngine_RectTransform__get_rect(pUVar13,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            fVar16 = UVar18.fields.m_Height;
          }
          pTVar6 = (__this->fields)._text;
          if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
            text = (*(pTVar6->klass->vtable)._65_get_text.methodPtr)
                             (pTVar6,(pTVar6->klass->vtable)._65_get_text.method);
            UVar7 = TMPro_TMP_Text__GetPreferredValues_670eff0
                              ((TMPro_TMP_Text_o *)pTVar6,text,(MethodInfo *)0x0);
            pUVar13 = (__this->fields)._textRect;
            if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
              fVar14 = local_58;
              if (local_58 <= 1.0) {
                fVar14 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar13,0,fVar14,(MethodInfo *)0x0);
              pUVar13 = (__this->fields)._textRect;
              if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar13,1,fVar16,(MethodInfo *)0x0);
                pTVar6 = (__this->fields)._text;
                if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar6,1,(MethodInfo *)0x0);
                  if ((__this->fields)._active == false) {
                    return;
                  }
                  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
                  }
                  bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  if (!bVar8) {
                    return;
                  }
                  if (local_58 <= 1.0) {
                    return;
                  }
                  local_48 = UVar7.fields.x;
                  if (local_48 <= local_58) {
                    return;
                  }
                  pTVar6 = (__this->fields)._text;
                  if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar6,0,(MethodInfo *)0x0);
                    pUVar13 = (__this->fields)._textRect;
                    if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar13,0,local_48,(MethodInfo *)0x0);
                      fVar14 = (local_48 - local_58) + 32.0;
                      fVar15 = fVar14 / 34.0;
                      fVar16 = 1.0;
                      if (1.0 <= fVar15) {
                        fVar16 = fVar15;
                      }
                      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                      }
                      pDVar11 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar11 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar11,0.45,(MethodInfo *)0x0);
                      __this_00 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor
                                (__this_00,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_0
                                 ,(MethodInfo_494D3F0 *)0x0);
                      __this_01 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor
                                (__this_01,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_1
                                 ,(MethodInfo_494E600 *)0x0);
                      UVar7.fields.y = 0.0;
                      UVar7.fields.x = -fVar14;
                      t = DG_Tweening_DOTween__To_3166a40(__this_00,__this_01,UVar7,fVar16,(MethodInfo *)0x0);
                      pDVar12 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)t,1,
                                           (MethodInfo_36B0160 *)
                                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector2_Vector2_VectorOptions
                                          );
                      pDVar11 = DG_Tweening_TweenSettingsExtensions__Append(pDVar11,pDVar12,(MethodInfo *)0x0)
                      ;
                      pDVar11 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar11,0.45,(MethodInfo *)0x0);
                      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback)
                      ;
                      DG_Tweening_TweenCallback___ctor
                                (__this_02,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_2
                                 ,(MethodInfo *)0x0);
                      pDVar11 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                          (pDVar11,__this_02,(MethodInfo *)0x0);
                      pDVar11 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                          ((Il2CppObject *)pDVar11,-1,
                                           (MethodInfo_36B0580 *)
                                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Sequence);
                      pDVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                          ((Il2CppObject *)pDVar11,true,
                                           (MethodInfo_36B08F0 *)
                                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
                      (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar11;
                      Il2CppCodeGenWriteBarrier(targetAddress);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_05e84cc7:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84e40

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84e50

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0
          (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._textRect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x5e84e70

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._textRect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e84e90

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._textRect;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchoredPosition
            (__this_00,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  return;
}


