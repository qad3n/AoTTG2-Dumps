// Type: Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeTextRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x41751e0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_Action_string__o *value;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  
  method_00 = style;
  if (DAT_05704aff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    DAT_05704aff = '\x01';
  }
  (__this->fields)._state = state;
  il2cpp_runtime_glue(&(__this->fields)._state,state);
  ppSVar1 = &(__this->fields)._stateKey;
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_glue(ppSVar1,stateKey);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
            (__this,style,theme,(MethodInfo *)method_00);
  pGVar2 = (__this->fields)._state;
  method_01 = extraout_RDX;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,value,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._state;
    method_01 = extraout_RDX_00;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      value_00 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                           (pGVar2,*ppSVar1,
                            (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                            (MethodInfo *)0x0);
      method_01 = extraout_RDX_01;
      goto LAB_041752d8;
    }
  }
  value_00 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_041752d8:
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText(__this,value_00,method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4175800

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (DAT_05704b00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    DAT_05704b00 = '\x01';
  }
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4175890

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x4175d00

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  System_String_o *value;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._stateKey,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = Gisketch_Aottg2UI_State_GisketchUIState__Get
                      (__this_00,(__this->fields)._stateKey,
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText(__this,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$CreateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x41752f0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  TMPro_TextMeshProUGUI_o **ppTVar2;
  int iVar3;
  System_RuntimeTypeHandle_o handle;
  int32_t weight;
  System_Type_array *components;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar6;
  TMPro_TextMeshProUGUI_o *pTVar7;
  TMPro_TMP_FontAsset_o *value;
  undefined8 uVar8;
  System_String_o *family;
  float value_00;
  UnityEngine_Color_Fields UVar9;
  UnityEngine_Color_o fallback;
  
  if (DAT_05704b01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Marquee Text");
    DAT_05704b01 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((pSVar4 != (System_Type_o *)0x0) &&
       (lVar5 = il2cpp_runtime_glue(pSVar4,(((components->obj).klass)->_1).element_class), lVar5 == 0
       )) {
      uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar8,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar4;
    il2cpp_runtime_glue(components->m_Items,pSVar4);
    __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"AoTTG Marquee Text",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        ppUVar1 = &(__this->fields)._textRect;
        (__this->fields)._textRect = pUVar6;
        il2cpp_runtime_glue(ppUVar1);
        pUVar6 = (__this->fields)._textRect;
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar6,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (*ppUVar1,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot
                        (*ppUVar1,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              pUVar6 = *ppUVar1;
              if (DAT_056fe093 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_056fe093 = '\x01';
              }
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMin
                          (pUVar6,(UnityEngine_Vector2_o)
                                  **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                pUVar6 = *ppUVar1;
                if (DAT_056fe093 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_056fe093 = '\x01';
                }
                if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMax
                            (pUVar6,(UnityEngine_Vector2_o)
                                    **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                             (MethodInfo *)0x0);
                  pTVar7 = (TMPro_TextMeshProUGUI_o *)
                           UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                  ppTVar2 = &(__this->fields)._text;
                  (__this->fields)._text = pTVar7;
                  il2cpp_runtime_glue(ppTVar2);
                  pTVar7 = (__this->fields)._text;
                  if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    (*(pTVar7->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pTVar7,0,(pTVar7->klass->vtable)._25_set_raycastTarget.method);
                    if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping
                                ((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                      if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        TMPro_TMP_Text__set_overflowMode
                                  ((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                        if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_alignment
                                    ((TMPro_TMP_Text_o *)*ppTVar2,0x1001,(MethodInfo *)0x0);
                          pTVar7 = *ppTVar2;
                          value_00 = 24.0;
                          if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                             (value_00 = 24.0, 0.0 < (style->fields).fontSize.fields.value)) {
                            value_00 = System_Nullable<float>__get_Value
                                                 ((System_Nullable_float__o)
                                                  &(style->fields).fontSize,MethodInfo_Single_get_Value);
                          }
                          if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            family = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize
                                      ((TMPro_TMP_Text_o *)pTVar7,value_00,(MethodInfo *)0x0);
                            pTVar7 = *ppTVar2;
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              weight = 400;
                              iVar3 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            else {
                              family = (style->fields).fontFamily;
                              weight = System_Nullable<int>__GetValueOrDefault
                                                 ((System_Nullable_int__o)
                                                  &(style->fields).fontWeight,400,MethodInfo_Int32_GetValueOrDefault);
                              iVar3 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            if (iVar3 == 0) {
                              il2cpp_init_class();
                            }
                            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                              (family,weight,(System_String_o *)0x0,
                                               (MethodInfo *)0x0);
                            if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              TMPro_TMP_Text__set_font
                                        ((TMPro_TMP_Text_o *)pTVar7,value,(MethodInfo *)0x0);
                              pTVar7 = *ppTVar2;
                              if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                              {
                                UVar9.b = 1.0;
                                UVar9.a = 1.0;
                                UVar9.r = 1.0;
                                UVar9.g = 1.0;
                              }
                              else {
                                if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto LAB_04175730;
                                fallback.fields.b = 1.0;
                                fallback.fields.a = 1.0;
                                fallback.fields.r = 1.0;
                                fallback.fields.g = 1.0;
                                UVar9 = (UnityEngine_Color_Fields)
                                        Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                  (theme,(style->fields).textColor,fallback,
                                                   (MethodInfo *)0x0);
                              }
                              if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                (*(pTVar7->klass->vtable)._23_set_color.methodPtr)
                                          (UVar9._0_8_,UVar9._8_8_,pTVar7,
                                           (pTVar7->klass->vtable)._23_set_color.method);
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
  }
LAB_04175730:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$SetText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4175750

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  
  if (DAT_05704b02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704b02 = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pTVar1 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,value,(pTVar1->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x41758a0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_RectTransform_o *pUVar8;
  float size;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  
  if (DAT_05704b03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector2__RefreshMarquee_b__14_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshMarquee_b__14_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshMarquee_b__14_2);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOGetter_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_DOSetter_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetLoops_Sequence);
    DAT_05704b03 = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar8 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      ppDVar1 = &(__this->fields)._tween;
      pDVar7 = (__this->fields)._tween;
      if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      il2cpp_runtime_glue(ppDVar1);
      pUVar8 = (__this->fields)._textRect;
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar8,(UnityEngine_Vector2_o)
                          **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_RectTransform_o *)0x0;
        if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
           (pUVar8 = (UnityEngine_RectTransform_o *)0x0, pUVar5->klass == TypeInfo_RectTransform)) {
          pUVar8 = pUVar5;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        fVar9 = 0.0;
        if ((char)bVar4 != '\0') {
          if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04175cef;
          UVar12 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
          fVar9 = UVar12.fields.m_Width;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        fVar11 = 0.0;
        if ((char)bVar4 != '\0') {
          if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04175cef;
          UVar12 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
          fVar11 = UVar12.fields.m_Height;
        }
        pTVar2 = (__this->fields)._text;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          text = (System_String_o *)
                 (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                           (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
          UVar3 = TMPro_TMP_Text__GetPreferredValues
                            ((TMPro_TMP_Text_o *)pTVar2,text,(MethodInfo *)0x0);
          fVar10 = UVar3.fields.x;
          pUVar8 = (__this->fields)._textRect;
          if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
            size = fVar10;
            if (fVar10 <= fVar9) {
              size = fVar9;
            }
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar8,0,size,(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._textRect;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                        (pUVar8,1,fVar11,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (fVar10 <= fVar9) {
                return;
              }
              if (fVar9 <= 1.0) {
                return;
              }
              if ((char)bVar4 == '\0') {
                return;
              }
              fVar10 = (fVar10 - fVar9) + 32.0;
              fVar11 = fVar10 / 34.0;
              fVar9 = 1.0;
              if (1.0 <= fVar11) {
                fVar9 = fVar11;
              }
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                 (pDVar6,0.7,(MethodInfo *)0x0);
              getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_glue(TypeInfo_DOGetter_Vector2);
              DG_Tweening_Core_DOGetter<Vector2>___ctor();
              setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_glue(TypeInfo_DOSetter_Vector2);
              DG_Tweening_Core_DOSetter<Vector2>___ctor();
              UVar3.fields.y = 0.0;
              UVar3.fields.x = -fVar10;
              t = DG_Tweening_DOTween__To(getter,setter,UVar3,fVar9,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                 ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Ve);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__Append(pDVar6,pDVar7,(MethodInfo *)0x0);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                 (pDVar6,0.7,(MethodInfo *)0x0);
              callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                 (pDVar6,callback,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                                 ((Il2CppObject *)pDVar6,-1,MethodInfo_Sequence_SetLoops_Sequence);
              (__this->fields)._tween = pDVar7;
              il2cpp_runtime_glue(ppDVar1,pDVar7);
              return;
            }
          }
        }
      }
LAB_04175cef:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4175d60

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__14_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_0 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4175d70

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__<RefreshMarquee>b__14_0
          (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_1 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x4175d90

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__<RefreshMarquee>b__14_1
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,UnityEngine_Vector2_o value
               ,MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__14_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_2 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x4175db0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__<RefreshMarquee>b__14_2
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

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


