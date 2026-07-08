// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeTextRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x41728c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,System_String_o *value
               ,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
            (__this,style,theme,activeColor,(MethodInfo *)activeColor);
  pTVar1 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,value,(pTVar1->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,(MethodInfo *)value);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4173420

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4173440

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, bool active, const MethodInfo* method);
// 0x4173450

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,bool_conflict active,
               MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)&(__this->fields)._active = (char)active;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$CreateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x4172930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  TMPro_TextMeshProUGUI_o **ppTVar2;
  undefined4 uVar3;
  int iVar4;
  System_RuntimeTypeHandle_o handle;
  int32_t weight;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  TMPro_TMP_FontAsset_o *value;
  undefined8 uVar9;
  System_String_o *family;
  float fVar10;
  UnityEngine_Color_Fields UVar12;
  UnityEngine_Color_o fallback_00;
  UnityEngine_Color_o fallback;
  float fVar11;
  
  if (DAT_05704ae2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Hover Marquee Text");
    DAT_05704ae2 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((pSVar5 != (System_Type_o *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class), lVar6 == 0
       )) {
      uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar9,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar5;
    il2cpp_runtime_glue(components->m_Items,pSVar5);
    __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        ppUVar1 = &(__this->fields)._textRect;
        (__this->fields)._textRect = pUVar7;
        il2cpp_runtime_glue(ppUVar1);
        pUVar7 = (__this->fields)._textRect;
        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (*ppUVar1,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot
                        (*ppUVar1,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              pUVar7 = *ppUVar1;
              if (DAT_056fe093 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_056fe093 = '\x01';
              }
              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMin
                          (pUVar7,(UnityEngine_Vector2_o)
                                  **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                pUVar7 = *ppUVar1;
                if (DAT_056fe093 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_056fe093 = '\x01';
                }
                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMax
                            (pUVar7,(UnityEngine_Vector2_o)
                                    **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                             (MethodInfo *)0x0);
                  pTVar8 = (TMPro_TextMeshProUGUI_o *)
                           UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                  ppTVar2 = &(__this->fields)._text;
                  (__this->fields)._text = pTVar8;
                  il2cpp_runtime_glue(ppTVar2);
                  pTVar8 = (__this->fields)._text;
                  if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    (*(pTVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pTVar8,0,(pTVar8->klass->vtable)._25_set_raycastTarget.method);
                    if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping
                                ((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                      if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        TMPro_TMP_Text__set_alignment
                                  ((TMPro_TMP_Text_o *)*ppTVar2,0x1001,(MethodInfo *)0x0);
                        pTVar8 = *ppTVar2;
                        fVar10 = 20.0;
                        if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                           (0.0 < (style->fields).fontSize.fields.value)) {
                          fVar10 = System_Nullable<float>__get_Value
                                             ((System_Nullable_float__o)&(style->fields).fontSize,
                                              MethodInfo_Single_get_Value);
                        }
                        if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          family = (System_String_o *)0x0;
                          TMPro_TMP_Text__set_fontSize
                                    ((TMPro_TMP_Text_o *)pTVar8,fVar10,(MethodInfo *)0x0);
                          pTVar8 = *ppTVar2;
                          if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            weight = 400;
                            iVar4 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                          }
                          else {
                            family = (style->fields).fontFamily;
                            weight = System_Nullable<int>__GetValueOrDefault
                                               ((System_Nullable_int__o)&(style->fields).fontWeight,
                                                400,MethodInfo_Int32_GetValueOrDefault);
                            iVar4 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                          }
                          if (iVar4 == 0) {
                            il2cpp_init_class();
                          }
                          value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                            (family,weight,(System_String_o *)0x0,(MethodInfo *)0x0)
                          ;
                          if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            TMPro_TMP_Text__set_font
                                      ((TMPro_TMP_Text_o *)pTVar8,value,(MethodInfo *)0x0);
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              fVar10 = (float)DAT_00ccd980;
                              fVar11 = DAT_00ccd980._4_4_;
                              uVar9 = DAT_00ccd980;
                              UVar12.b = fVar10;
                              UVar12.r = (float)(int)uVar9;
                              UVar12.g = (float)(int)((ulong)uVar9 >> 0x20);
                              UVar12.a = fVar11;
                              (__this->fields)._normalColor.fields = UVar12;
                              if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                              goto LAB_04172db7;
                            }
                            else {
                              if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                              goto LAB_04172db7;
                              fallback.fields.b = 1.0;
                              fallback.fields.a = 1.0;
                              fallback.fields.r = 1.0;
                              fallback.fields.g = 1.0;
                              UVar12 = (UnityEngine_Color_Fields)
                                       Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                 (theme,(style->fields).textColor,fallback,
                                                  (MethodInfo *)0x0);
                              uVar9 = UVar12._8_8_;
                              fVar10 = UVar12.r;
                              fVar11 = UVar12.g;
                              (__this->fields)._normalColor.fields = UVar12;
                            }
                            fallback_00.fields.g = fVar11;
                            fallback_00.fields.r = fVar10;
                            fallback_00.fields.b = (float)(int)uVar9;
                            fallback_00.fields.a = (float)(int)((ulong)uVar9 >> 0x20);
                            UVar12 = (UnityEngine_Color_Fields)
                                     Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                               (theme,activeColor,fallback_00,(MethodInfo *)0x0);
                            (__this->fields)._activeColor.fields = UVar12;
                            pTVar8 = (__this->fields)._text;
                            if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              uVar9._0_4_ = (__this->fields)._normalColor.fields.b;
                              uVar9._4_4_ = (__this->fields)._normalColor.fields.a;
                              uVar3 = (__this->fields)._normalColor.fields.r;
                              (*(pTVar8->klass->vtable)._23_set_color.methodPtr)
                                        (uVar3,uVar9,pTVar8,
                                         (pTVar8->klass->vtable)._23_set_color.method);
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
  }
LAB_04172db7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RegisterParent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4172dd0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704ae3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_Aott);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_Aott);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae3 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar2,MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_Aott);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((char)bVar1 != '\0') {
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_04172edf;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)
                    UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_Aott);
        method_00 = extraout_RDX_00;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register(__this_00,__this,method_00);
        return;
      }
    }
  }
LAB_04172edf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4172ef0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  undefined4 uVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Color_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_RectTransform_o *pUVar7;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_o *callback;
  Il2CppObject *t_00;
  UnityEngine_RectTransform_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Rect_o UVar14;
  float local_58;
  float local_48;
  
  if (DAT_05704ae4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector2__RefreshMarquee_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshMarquee_b__15_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshMarquee_b__15_2);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOGetter_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_DOSetter_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_05704ae4 = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar10 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar6 == '\0') {
      ppDVar1 = &(__this->fields)._tween;
      pDVar9 = (__this->fields)._tween;
      if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      il2cpp_runtime_glue(ppDVar1);
      pUVar10 = (__this->fields)._textRect;
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar10,(UnityEngine_Vector2_o)
                           **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
        ;
        pTVar3 = (__this->fields)._text;
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar5 = &(__this->fields)._activeColor;
          if ((char)(__this->fields)._active == '\0') {
            pUVar5 = &(__this->fields)._normalColor;
          }
          uVar2 = (pUVar5->fields).r;
          (*(pTVar3->klass->vtable)._23_set_color.methodPtr)(uVar2);
          pUVar7 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar10 = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
            pUVar10 = pUVar7;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          fVar11 = 0.0;
          local_58 = 0.0;
          if ((char)bVar6 != '\0') {
            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04173413;
            UVar14 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            fVar11 = UVar14.fields.m_XMin;
            local_58 = UVar14.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class(fVar11);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          fVar11 = 0.0;
          if ((char)bVar6 != '\0') {
            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04173413;
            UVar14 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            fVar11 = UVar14.fields.m_Height;
          }
          pTVar3 = (__this->fields)._text;
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            text = (System_String_o *)
                   (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                             (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
            UVar4 = TMPro_TMP_Text__GetPreferredValues
                              ((TMPro_TMP_Text_o *)pTVar3,text,(MethodInfo *)0x0);
            pUVar10 = (__this->fields)._textRect;
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              fVar12 = local_58;
              if (local_58 <= 1.0) {
                fVar12 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                        (pUVar10,0,fVar12,(MethodInfo *)0x0);
              pUVar10 = (__this->fields)._textRect;
              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                          (pUVar10,1,fVar11,(MethodInfo *)0x0);
                pTVar3 = (__this->fields)._text;
                if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar3,1,(MethodInfo *)0x0);
                  if ((char)(__this->fields)._active == '\0') {
                    return;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  local_48 = UVar4.fields.x;
                  if (local_48 <= local_58) {
                    return;
                  }
                  if (local_58 <= 1.0) {
                    return;
                  }
                  if ((char)bVar6 == '\0') {
                    return;
                  }
                  pTVar3 = (__this->fields)._text;
                  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar3,0,(MethodInfo *)0x0)
                    ;
                    pUVar10 = (__this->fields)._textRect;
                    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar10,0,local_48,(MethodInfo *)0x0);
                      fVar12 = (local_48 - local_58) + 32.0;
                      fVar13 = fVar12 / 34.0;
                      fVar11 = 1.0;
                      if (1.0 <= fVar13) {
                        fVar11 = fVar13;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)
                               il2cpp_runtime_glue(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter<Vector2>___ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)
                               il2cpp_runtime_glue(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter<Vector2>___ctor();
                      UVar4.fields.y = 0.0;
                      UVar4.fields.x = -fVar12;
                      t = DG_Tweening_DOTween__To(getter,setter,UVar4,fVar11,(MethodInfo *)0x0);
                      pDVar9 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                         ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Ve);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__Append
                                         (pDVar8,pDVar9,(MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                         (pDVar8,callback,(MethodInfo *)0x0);
                      t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                                       ((Il2CppObject *)pDVar8,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar9 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                                         (t_00,1,MethodInfo_Sequence_SetUpdate_Sequence);
                      (__this->fields)._tween = pDVar9;
                      il2cpp_runtime_glue(ppDVar1,pDVar9);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_04173413:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4173590

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x41735a0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__<RefreshMarquee>b__15_0
          (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._textRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x41735c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__<RefreshMarquee>b__15_1
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,
               UnityEngine_Vector2_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._textRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x41735e0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__<RefreshMarquee>b__15_2
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._textRect;
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


