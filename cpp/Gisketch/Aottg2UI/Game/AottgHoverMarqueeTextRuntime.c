// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeTextRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x44ea150

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,System_String_o *value,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  DG_Tweening_Tween_o **ppDVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  TMPro_TMP_Text_o *pTVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Color_o *pUVar9;
  System_RuntimeTypeHandle_o handle;
  int32_t weight;
  bool_conflict bVar10;
  System_Type_array *components;
  System_Type_o *pSVar11;
  long lVar12;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar14;
  UnityEngine_Material_o *pUVar15;
  TMPro_TMP_FontAsset_o *value_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *item;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_02;
  UnityEngine_RectTransform_o *pUVar16;
  System_String_o *pSVar17;
  DG_Tweening_Sequence_o *pDVar18;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar19;
  DG_Tweening_TweenCallback_o *callback;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar20;
  TMPro_TextMeshProUGUI_o *pTVar21;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_04;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Color_o UVar27;
  UnityEngine_Color_o fallback;
  UnityEngine_Rect_o UVar28;
  float fStack_e0;
  float fStack_d0;
  
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
            (__this,style,theme,activeColor,(MethodInfo *)activeColor);
  pTVar21 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar21->klass->vtable)._66_set_text.methodPtr)
              (pTVar21,value,(pTVar21->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,(MethodInfo *)value);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Hover Marquee Text");
    g_data_057aec2c = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_044ea64a;
  if ((pSVar11 == (System_Type_o *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pSVar11), lVar12 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar11;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar11);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(__this_00,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar21,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar13,parent,0,(MethodInfo *)0x0);
          pIVar14 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
          pUVar9 = &(pTVar21->fields).m_Color;
          *(Il2CppObject **)&(pTVar21->fields).m_Color.fields = pIVar14;
          il2cpp_runtime_helper_022b4080(pUVar9);
          pUVar20 = *(UnityEngine_RectTransform_o **)&(pTVar21->fields).m_Color.fields;
          if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(pUVar20,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
            if (*(UnityEngine_RectTransform_o **)&pUVar9->fields != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (*(UnityEngine_RectTransform_o **)&pUVar9->fields,
                         (UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              if (*(UnityEngine_RectTransform_o **)&pUVar9->fields != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (*(UnityEngine_RectTransform_o **)&pUVar9->fields,
                           (UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                pUVar20 = *(UnityEngine_RectTransform_o **)&pUVar9->fields;
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMin
                            (pUVar20,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  pUVar20 = *(UnityEngine_RectTransform_o **)&pUVar9->fields;
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_offsetMax
                              (pUVar20,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    pUVar15 = (UnityEngine_Material_o *)
                              UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                    ppUVar1 = &(pTVar21->fields).m_Material;
                    (pTVar21->fields).m_Material = pUVar15;
                    il2cpp_runtime_helper_022b4080(ppUVar1);
                    pUVar15 = (pTVar21->fields).m_Material;
                    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                      (*(code *)pUVar15->klass[1].vtable._1_Finalize.method)
                                (pUVar15,0,pUVar15->klass[1].vtable._2_GetHashCode.methodPtr);
                      if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                        TMPro_TMP_Text__set_enableWordWrapping
                                  ((TMPro_TMP_Text_o *)*ppUVar1,0,(MethodInfo *)0x0);
                        if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*ppUVar1,0x1001,(MethodInfo *)0x0)
                          ;
                          pTVar7 = (TMPro_TMP_Text_o *)*ppUVar1;
                          fVar23 = 20.0;
                          if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                             (0.0 < (style->fields).fontSize.fields.value)) {
                            fVar23 = System_Nullable_float___get_Value
                                               ((System_Nullable_float__o)&(style->fields).fontSize,
                                                MethodInfo_Single_get_Value);
                          }
                          if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
                            pSVar17 = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize(pTVar7,fVar23,(MethodInfo *)0x0);
                            pTVar7 = (TMPro_TMP_Text_o *)*ppUVar1;
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              weight = 400;
                              iVar6 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            else {
                              pSVar17 = (style->fields).fontFamily;
                              weight = System_Nullable_int___GetValueOrDefault_37e7730
                                                 ((System_Nullable_int__o)&(style->fields).fontWeight,400,
                                                  MethodInfo_Int32_GetValueOrDefault);
                              iVar6 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            if (iVar6 == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            value_00 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                                 (pSVar17,weight,(System_String_o *)0x0,0,(MethodInfo *)0x0);
                            if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
                              TMPro_TMP_Text__set_font(pTVar7,value_00,(MethodInfo *)0x0);
                              if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                fVar23 = 1.0;
                                fVar24 = 1.0;
                                (pTVar21->fields).m_Color.fields.b = 1.0;
                                (pTVar21->fields).m_Color.fields.a = 1.0;
                                (pTVar21->fields).m_SkipLayoutUpdate = 0x3f800000;
                                (pTVar21->fields).m_SkipMaterialUpdate = 0x3f800000;
                                fVar25 = fVar23;
                                fVar26 = fVar24;
                                if (__this_03 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto label_044ea601;
                              }
                              else if (__this_03 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                UVar27.fields.b = 1.0;
                                UVar27.fields.a = 1.0;
                                UVar27.fields.r = 1.0;
                                UVar27.fields.g = 1.0;
                                UVar27 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (__this_03,(style->fields).textColor,UVar27,
                                                    (MethodInfo *)0x0);
                                fVar23 = UVar27.fields.r;
                                fVar24 = UVar27.fields.g;
                                *(UnityEngine_Color_Fields *)&(pTVar21->fields).m_Color.fields.b =
                                     UVar27.fields;
                                fVar25 = UVar27.fields.b;
                                fVar26 = UVar27.fields.a;
label_044ea601:
                                fallback.fields.g = fVar24;
                                fallback.fields.r = fVar23;
                                fallback.fields.a = fVar26;
                                fallback.fields.b = fVar25;
                                UVar27 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (__this_03,activeColor,fallback,(MethodInfo *)0x0);
                                (pTVar21->fields).m_RaycastTarget = (bool_conflict)UVar27.fields.r;
                                (pTVar21->fields).m_RaycastTargetCache = (bool_conflict)UVar27.fields.g;
                                (pTVar21->fields).m_RaycastPadding.fields.x = UVar27.fields.b;
                                (pTVar21->fields).m_RaycastPadding.fields.y = UVar27.fields.a;
                                pUVar15 = (pTVar21->fields).m_Material;
                                if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                                  uVar3 = (pTVar21->fields).m_SkipLayoutUpdate;
                                  uVar4 = (pTVar21->fields).m_Color.fields.b;
                                  (**(code **)&pUVar15->klass[1]._2.naturalAligment)
                                            (uVar4,uVar3,pUVar15,pUVar15->klass[1].vtable._0_Equals.methodPtr)
                                  ;
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
label_044ea64a:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  item = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aec2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec2d = '\x01';
  }
  __this_04 = item;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)item,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    x = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
        UnityEngine_Transform__get_parent(pUVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = x;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (x != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = __this_01;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((char)bVar10 != '\0') {
        __this_02 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        __this_04 = x;
        if (__this_02 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044ea77f;
        __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
        method_00 = extraout_RDX_00;
      }
      __this_04 = __this_02;
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
                  ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)__this_01,item,method_00);
        return;
      }
    }
  }
label_044ea77f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057aec2e = '\x01';
  }
  pTVar21 = (__this_04->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pUVar20 = (__this_04->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      ppDVar2 = &(__this_04->fields)._tween;
      pDVar19 = (__this_04->fields)._tween;
      if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar19,0,(MethodInfo *)0x0);
      }
      (__this_04->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      plVar22 = (long *)ppDVar2;
      il2cpp_runtime_helper_022b4080();
      pUVar20 = (__this_04->fields)._textRect;
      if (g_data_057a694c == '\0') {
        plVar22 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar20,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pTVar21 = (__this_04->fields)._text;
        plVar22 = (long *)0x0;
        if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar9 = &(__this_04->fields)._activeColor;
          if ((char)(__this_04->fields)._active == '\0') {
            pUVar9 = &(__this_04->fields)._normalColor;
          }
          uVar5 = (pUVar9->fields).r;
          (*(pTVar21->klass->vtable)._23_set_color.methodPtr)(uVar5);
          pUVar16 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          pUVar20 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar16 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar20 = (UnityEngine_RectTransform_o *)0x0, pUVar16->klass == TypeInfo_RectTransform)) {
            pUVar20 = pUVar16;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar22 = (long *)pUVar20;
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar23 = 0.0;
          fStack_e0 = 0.0;
          if ((char)bVar10 != '\0') {
            if (pUVar20 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar28 = UnityEngine_RectTransform__get_rect(pUVar20,(MethodInfo *)0x0);
            fVar23 = UVar28.fields.m_XMin;
            fStack_e0 = UVar28.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(fVar23);
          }
          plVar22 = (long *)pUVar20;
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar23 = 0.0;
          if ((char)bVar10 != '\0') {
            if (pUVar20 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar28 = UnityEngine_RectTransform__get_rect(pUVar20,(MethodInfo *)0x0);
            fVar23 = UVar28.fields.m_Height;
            plVar22 = (long *)pUVar20;
          }
          pTVar21 = (__this_04->fields)._text;
          if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
            pSVar17 = (System_String_o *)
                      (*(pTVar21->klass->vtable)._65_get_text.methodPtr)
                                (pTVar21,(pTVar21->klass->vtable)._65_get_text.method);
            UVar8 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                              ((TMPro_TMP_Text_o *)pTVar21,pSVar17,(MethodInfo *)0x0);
            pUVar20 = (__this_04->fields)._textRect;
            plVar22 = (long *)0x0;
            if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
              fVar24 = fStack_e0;
              if (fStack_e0 <= 1.0) {
                fVar24 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar20,0,fVar24,(MethodInfo *)0x0);
              pUVar20 = (__this_04->fields)._textRect;
              plVar22 = (long *)0x0;
              if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar20,1,fVar23,(MethodInfo *)0x0);
                pTVar21 = (__this_04->fields)._text;
                plVar22 = (long *)0x0;
                if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar21,1,(MethodInfo *)0x0);
                  if ((char)(__this_04->fields)._active == '\0') {
                    return;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  fStack_d0 = UVar8.fields.x;
                  if (fStack_d0 <= fStack_e0) {
                    return;
                  }
                  if (fStack_e0 <= 1.0) {
                    return;
                  }
                  if ((char)bVar10 == '\0') {
                    return;
                  }
                  pTVar21 = (__this_04->fields)._text;
                  plVar22 = (long *)0x0;
                  if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar21,0,(MethodInfo *)0x0);
                    pUVar20 = (__this_04->fields)._textRect;
                    plVar22 = (long *)0x0;
                    if (pUVar20 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar20,0,fStack_d0,(MethodInfo *)0x0);
                      fVar24 = (fStack_d0 - fStack_e0) + 32.0;
                      fVar25 = fVar24 / 34.0;
                      fVar23 = 1.0;
                      if (1.0 <= fVar25) {
                        fVar23 = fVar25;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar18 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar18,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor();
                      UVar8.fields.y = 0.0;
                      UVar8.fields.x = -fVar24;
                      t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar8,fVar23,(MethodInfo *)0x0);
                      pDVar19 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__Append(pDVar18,pDVar19,(MethodInfo *)0x0)
                      ;
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar18,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                          (pDVar18,callback,(MethodInfo *)0x0);
                      pIVar14 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                          ((Il2CppObject *)pDVar18,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar19 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar14,1,MethodInfo_Sequence_SetUpdate_Sequence)
                      ;
                      (__this_04->fields)._tween = pDVar19;
                      il2cpp_runtime_helper_022b4080(ppDVar2,pDVar19);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044eacb3:
      il2cpp_runtime_helper_022b2c90();
      pDVar19 = (DG_Tweening_Tween_o *)
                (((UnityEngine_RectTransform_o *)((long)plVar22 + 0x48))->fields).m_CachedPtr;
      if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar19,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44eacc0

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
// 0x44eace0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, bool active, const MethodInfo* method);
// 0x44eacf0

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
// 0x44ea1c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  TMPro_TextMeshProUGUI_o **ppTVar2;
  DG_Tweening_Tween_o **ppDVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Color_o *pUVar9;
  System_RuntimeTypeHandle_o handle;
  int32_t weight;
  bool_conflict bVar10;
  System_Type_array *components;
  System_Type_o *pSVar11;
  long lVar12;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  TMPro_TMP_FontAsset_o *value;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *item;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_02;
  UnityEngine_RectTransform_o *pUVar16;
  System_String_o *pSVar17;
  DG_Tweening_Sequence_o *pDVar18;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar19;
  DG_Tweening_TweenCallback_o *callback;
  Il2CppObject *t_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_03;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o fallback_00;
  UnityEngine_Rect_o UVar26;
  float fStack_c8;
  float fStack_b8;
  UnityEngine_Color_Fields UVar25;
  
  if (g_data_057aec2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Hover Marquee Text");
    g_data_057aec2c = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_044ea64a;
  if ((pSVar11 == (System_Type_o *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pSVar11), lVar12 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar11;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar11);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(__this_00,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar13,parent,0,(MethodInfo *)0x0);
          pUVar14 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
          ppUVar1 = &(__this->fields)._textRect;
          (__this->fields)._textRect = pUVar14;
          il2cpp_runtime_helper_022b4080(ppUVar1);
          pUVar14 = (__this->fields)._textRect;
          if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(pUVar14,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (*ppUVar1,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (*ppUVar1,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                pUVar14 = *ppUVar1;
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  pUVar14 = *ppUVar1;
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_offsetMax
                              (pUVar14,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    pTVar15 = (TMPro_TextMeshProUGUI_o *)
                              UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                    ppTVar2 = &(__this->fields)._text;
                    (__this->fields)._text = pTVar15;
                    il2cpp_runtime_helper_022b4080(ppTVar2);
                    pTVar15 = (__this->fields)._text;
                    if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      (*(pTVar15->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pTVar15,0,(pTVar15->klass->vtable)._25_set_raycastTarget.method);
                      if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        TMPro_TMP_Text__set_enableWordWrapping
                                  ((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                        if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*ppTVar2,0x1001,(MethodInfo *)0x0)
                          ;
                          pTVar15 = *ppTVar2;
                          fVar21 = 20.0;
                          if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                             (0.0 < (style->fields).fontSize.fields.value)) {
                            fVar21 = System_Nullable_float___get_Value
                                               ((System_Nullable_float__o)&(style->fields).fontSize,
                                                MethodInfo_Single_get_Value);
                          }
                          if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            pSVar17 = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar15,fVar21,(MethodInfo *)0x0)
                            ;
                            pTVar15 = *ppTVar2;
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              weight = 400;
                              iVar7 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            else {
                              pSVar17 = (style->fields).fontFamily;
                              weight = System_Nullable_int___GetValueOrDefault_37e7730
                                                 ((System_Nullable_int__o)&(style->fields).fontWeight,400,
                                                  MethodInfo_Int32_GetValueOrDefault);
                              iVar7 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            if (iVar7 == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                              (pSVar17,weight,(System_String_o *)0x0,0,(MethodInfo *)0x0);
                            if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar15,value,(MethodInfo *)0x0);
                              if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                fVar21 = 1.0;
                                fVar22 = 1.0;
                                (__this->fields)._normalColor.fields.r = 1.0;
                                (__this->fields)._normalColor.fields.g = 1.0;
                                (__this->fields)._normalColor.fields.b = 1.0;
                                (__this->fields)._normalColor.fields.a = 1.0;
                                fVar23 = fVar21;
                                fVar24 = fVar22;
                                if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto label_044ea601;
                              }
                              else if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                fallback.fields.b = 1.0;
                                fallback.fields.a = 1.0;
                                fallback.fields.r = 1.0;
                                fallback.fields.g = 1.0;
                                UVar25 = (UnityEngine_Color_Fields)
                                         Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (theme,(style->fields).textColor,fallback,(MethodInfo *)0x0
                                                   );
                                fVar21 = UVar25.r;
                                fVar22 = UVar25.g;
                                (__this->fields)._normalColor.fields = UVar25;
                                fVar23 = UVar25.b;
                                fVar24 = UVar25.a;
label_044ea601:
                                fallback_00.fields.g = fVar22;
                                fallback_00.fields.r = fVar21;
                                fallback_00.fields.a = fVar24;
                                fallback_00.fields.b = fVar23;
                                UVar25 = (UnityEngine_Color_Fields)
                                         Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (theme,activeColor,fallback_00,(MethodInfo *)0x0);
                                (__this->fields)._activeColor.fields = UVar25;
                                pTVar15 = (__this->fields)._text;
                                if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                  uVar4 = (__this->fields)._normalColor.fields.b;
                                  uVar5 = (__this->fields)._normalColor.fields.r;
                                  (*(pTVar15->klass->vtable)._23_set_color.methodPtr)
                                            (uVar5,uVar4,pTVar15,(pTVar15->klass->vtable)._23_set_color.method
                                            );
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
label_044ea64a:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  item = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aec2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec2d = '\x01';
  }
  __this_03 = item;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)item,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    x = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
        UnityEngine_Transform__get_parent(pUVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = x;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (x != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = __this_01;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((char)bVar10 != '\0') {
        __this_02 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        __this_03 = x;
        if (__this_02 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044ea77f;
        __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
        method_00 = extraout_RDX_00;
      }
      __this_03 = __this_02;
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
                  ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)__this_01,item,method_00);
        return;
      }
    }
  }
label_044ea77f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057aec2e = '\x01';
  }
  pTVar15 = (__this_03->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pUVar14 = (__this_03->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      ppDVar3 = &(__this_03->fields)._tween;
      pDVar19 = (__this_03->fields)._tween;
      if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar19,0,(MethodInfo *)0x0);
      }
      (__this_03->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      plVar20 = (long *)ppDVar3;
      il2cpp_runtime_helper_022b4080();
      pUVar14 = (__this_03->fields)._textRect;
      if (g_data_057a694c == '\0') {
        plVar20 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar14,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pTVar15 = (__this_03->fields)._text;
        plVar20 = (long *)0x0;
        if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar9 = &(__this_03->fields)._activeColor;
          if ((char)(__this_03->fields)._active == '\0') {
            pUVar9 = &(__this_03->fields)._normalColor;
          }
          uVar6 = (pUVar9->fields).r;
          (*(pTVar15->klass->vtable)._23_set_color.methodPtr)(uVar6);
          pUVar16 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          pUVar14 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar16 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar14 = (UnityEngine_RectTransform_o *)0x0, pUVar16->klass == TypeInfo_RectTransform)) {
            pUVar14 = pUVar16;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = (long *)pUVar14;
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar21 = 0.0;
          fStack_c8 = 0.0;
          if ((char)bVar10 != '\0') {
            if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar26 = UnityEngine_RectTransform__get_rect(pUVar14,(MethodInfo *)0x0);
            fVar21 = UVar26.fields.m_XMin;
            fStack_c8 = UVar26.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(fVar21);
          }
          plVar20 = (long *)pUVar14;
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar21 = 0.0;
          if ((char)bVar10 != '\0') {
            if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar26 = UnityEngine_RectTransform__get_rect(pUVar14,(MethodInfo *)0x0);
            fVar21 = UVar26.fields.m_Height;
            plVar20 = (long *)pUVar14;
          }
          pTVar15 = (__this_03->fields)._text;
          if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
            pSVar17 = (System_String_o *)
                      (*(pTVar15->klass->vtable)._65_get_text.methodPtr)
                                (pTVar15,(pTVar15->klass->vtable)._65_get_text.method);
            UVar8 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                              ((TMPro_TMP_Text_o *)pTVar15,pSVar17,(MethodInfo *)0x0);
            pUVar14 = (__this_03->fields)._textRect;
            plVar20 = (long *)0x0;
            if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
              fVar22 = fStack_c8;
              if (fStack_c8 <= 1.0) {
                fVar22 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar14,0,fVar22,(MethodInfo *)0x0);
              pUVar14 = (__this_03->fields)._textRect;
              plVar20 = (long *)0x0;
              if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar14,1,fVar21,(MethodInfo *)0x0);
                pTVar15 = (__this_03->fields)._text;
                plVar20 = (long *)0x0;
                if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar15,1,(MethodInfo *)0x0);
                  if ((char)(__this_03->fields)._active == '\0') {
                    return;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  fStack_b8 = UVar8.fields.x;
                  if (fStack_b8 <= fStack_c8) {
                    return;
                  }
                  if (fStack_c8 <= 1.0) {
                    return;
                  }
                  if ((char)bVar10 == '\0') {
                    return;
                  }
                  pTVar15 = (__this_03->fields)._text;
                  plVar20 = (long *)0x0;
                  if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    pUVar14 = (__this_03->fields)._textRect;
                    plVar20 = (long *)0x0;
                    if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar14,0,fStack_b8,(MethodInfo *)0x0);
                      fVar22 = (fStack_b8 - fStack_c8) + 32.0;
                      fVar23 = fVar22 / 34.0;
                      fVar21 = 1.0;
                      if (1.0 <= fVar23) {
                        fVar21 = fVar23;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar18 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar18,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor();
                      UVar8.fields.y = 0.0;
                      UVar8.fields.x = -fVar22;
                      t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar8,fVar21,(MethodInfo *)0x0);
                      pDVar19 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__Append(pDVar18,pDVar19,(MethodInfo *)0x0)
                      ;
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar18,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar18 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                          (pDVar18,callback,(MethodInfo *)0x0);
                      t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                       ((Il2CppObject *)pDVar18,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar19 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Sequence_SetUpdate_Sequence);
                      (__this_03->fields)._tween = pDVar19;
                      il2cpp_runtime_helper_022b4080(ppDVar3,pDVar19);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044eacb3:
      il2cpp_runtime_helper_022b2c90();
      pDVar19 = (DG_Tweening_Tween_o *)
                (((UnityEngine_RectTransform_o *)((long)plVar20 + 0x48))->fields).m_CachedPtr;
      if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar19,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RegisterParent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ea670

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  undefined4 uVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Color_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_02;
  UnityEngine_RectTransform_o *pUVar7;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_o *callback;
  Il2CppObject *t_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar10;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_03;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Rect_o UVar15;
  float fStack_80;
  float fStack_70;
  
  if (g_data_057aec2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec2d = '\x01';
  }
  __this_03 = __this;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    x = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
        UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = x;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (x != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = __this_01;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((char)bVar6 != '\0') {
        __this_02 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        __this_03 = x;
        if (__this_02 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044ea77f;
        __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
        method_00 = extraout_RDX_00;
      }
      __this_03 = __this_02;
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
                  ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)__this_01,__this,method_00);
        return;
      }
    }
  }
label_044ea77f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057aec2e = '\x01';
  }
  pTVar3 = (__this_03->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar10 = (__this_03->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      ppDVar1 = &(__this_03->fields)._tween;
      pDVar9 = (__this_03->fields)._tween;
      if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
      }
      (__this_03->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      plVar11 = (long *)ppDVar1;
      il2cpp_runtime_helper_022b4080();
      pUVar10 = (__this_03->fields)._textRect;
      if (g_data_057a694c == '\0') {
        plVar11 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar10,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pTVar3 = (__this_03->fields)._text;
        plVar11 = (long *)0x0;
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar5 = &(__this_03->fields)._activeColor;
          if ((char)(__this_03->fields)._active == '\0') {
            pUVar5 = &(__this_03->fields)._normalColor;
          }
          uVar2 = (pUVar5->fields).r;
          (*(pTVar3->klass->vtable)._23_set_color.methodPtr)(uVar2);
          pUVar7 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar10 = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
            pUVar10 = pUVar7;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar11 = (long *)pUVar10;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar12 = 0.0;
          fStack_80 = 0.0;
          if ((char)bVar6 != '\0') {
            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar15 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            fVar12 = UVar15.fields.m_XMin;
            fStack_80 = UVar15.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(fVar12);
          }
          plVar11 = (long *)pUVar10;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar12 = 0.0;
          if ((char)bVar6 != '\0') {
            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar15 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            fVar12 = UVar15.fields.m_Height;
            plVar11 = (long *)pUVar10;
          }
          pTVar3 = (__this_03->fields)._text;
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            text = (System_String_o *)
                   (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                             (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
            UVar4 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                              ((TMPro_TMP_Text_o *)pTVar3,text,(MethodInfo *)0x0);
            pUVar10 = (__this_03->fields)._textRect;
            plVar11 = (long *)0x0;
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              fVar13 = fStack_80;
              if (fStack_80 <= 1.0) {
                fVar13 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar10,0,fVar13,(MethodInfo *)0x0);
              pUVar10 = (__this_03->fields)._textRect;
              plVar11 = (long *)0x0;
              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar10,1,fVar12,(MethodInfo *)0x0);
                pTVar3 = (__this_03->fields)._text;
                plVar11 = (long *)0x0;
                if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar3,1,(MethodInfo *)0x0);
                  if ((char)(__this_03->fields)._active == '\0') {
                    return;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  fStack_70 = UVar4.fields.x;
                  if (fStack_70 <= fStack_80) {
                    return;
                  }
                  if (fStack_80 <= 1.0) {
                    return;
                  }
                  if ((char)bVar6 == '\0') {
                    return;
                  }
                  pTVar3 = (__this_03->fields)._text;
                  plVar11 = (long *)0x0;
                  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar3,0,(MethodInfo *)0x0);
                    pUVar10 = (__this_03->fields)._textRect;
                    plVar11 = (long *)0x0;
                    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar10,0,fStack_70,(MethodInfo *)0x0);
                      fVar13 = (fStack_70 - fStack_80) + 32.0;
                      fVar14 = fVar13 / 34.0;
                      fVar12 = 1.0;
                      if (1.0 <= fVar14) {
                        fVar12 = fVar14;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor();
                      UVar4.fields.y = 0.0;
                      UVar4.fields.x = -fVar13;
                      t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar4,fVar12,(MethodInfo *)0x0);
                      pDVar9 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                         ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__Append(pDVar8,pDVar9,(MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                         (pDVar8,callback,(MethodInfo *)0x0);
                      t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                       ((Il2CppObject *)pDVar8,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar9 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Sequence_SetUpdate_Sequence);
                      (__this_03->fields)._tween = pDVar9;
                      il2cpp_runtime_helper_022b4080(ppDVar1,pDVar9);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044eacb3:
      il2cpp_runtime_helper_022b2c90();
      pDVar9 = (DG_Tweening_Tween_o *)
               (((UnityEngine_RectTransform_o *)((long)plVar11 + 0x48))->fields).m_CachedPtr;
      if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ea790

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
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Rect_o UVar15;
  float local_58;
  float local_48;
  
  if (g_data_057aec2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057aec2e = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar10 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      ppDVar1 = &(__this->fields)._tween;
      pDVar9 = (__this->fields)._tween;
      if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      plVar11 = (long *)ppDVar1;
      il2cpp_runtime_helper_022b4080();
      pUVar10 = (__this->fields)._textRect;
      if (g_data_057a694c == '\0') {
        plVar11 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar10,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pTVar3 = (__this->fields)._text;
        plVar11 = (long *)0x0;
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar5 = &(__this->fields)._activeColor;
          if ((char)(__this->fields)._active == '\0') {
            pUVar5 = &(__this->fields)._normalColor;
          }
          uVar2 = (pUVar5->fields).r;
          (*(pTVar3->klass->vtable)._23_set_color.methodPtr)(uVar2);
          pUVar7 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar10 = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
            pUVar10 = pUVar7;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar11 = (long *)pUVar10;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar12 = 0.0;
          local_58 = 0.0;
          if ((char)bVar6 != '\0') {
            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar15 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            fVar12 = UVar15.fields.m_XMin;
            local_58 = UVar15.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(fVar12);
          }
          plVar11 = (long *)pUVar10;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar12 = 0.0;
          if ((char)bVar6 != '\0') {
            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar15 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            fVar12 = UVar15.fields.m_Height;
            plVar11 = (long *)pUVar10;
          }
          pTVar3 = (__this->fields)._text;
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            text = (System_String_o *)
                   (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                             (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
            UVar4 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                              ((TMPro_TMP_Text_o *)pTVar3,text,(MethodInfo *)0x0);
            pUVar10 = (__this->fields)._textRect;
            plVar11 = (long *)0x0;
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              fVar13 = local_58;
              if (local_58 <= 1.0) {
                fVar13 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar10,0,fVar13,(MethodInfo *)0x0);
              pUVar10 = (__this->fields)._textRect;
              plVar11 = (long *)0x0;
              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar10,1,fVar12,(MethodInfo *)0x0);
                pTVar3 = (__this->fields)._text;
                plVar11 = (long *)0x0;
                if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar3,1,(MethodInfo *)0x0);
                  if ((char)(__this->fields)._active == '\0') {
                    return;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
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
                  plVar11 = (long *)0x0;
                  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar3,0,(MethodInfo *)0x0);
                    pUVar10 = (__this->fields)._textRect;
                    plVar11 = (long *)0x0;
                    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar10,0,local_48,(MethodInfo *)0x0);
                      fVar13 = (local_48 - local_58) + 32.0;
                      fVar14 = fVar13 / 34.0;
                      fVar12 = 1.0;
                      if (1.0 <= fVar14) {
                        fVar12 = fVar14;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor();
                      UVar4.fields.y = 0.0;
                      UVar4.fields.x = -fVar13;
                      t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar4,fVar12,(MethodInfo *)0x0);
                      pDVar9 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                         ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__Append(pDVar8,pDVar9,(MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                         (pDVar8,callback,(MethodInfo *)0x0);
                      t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                       ((Il2CppObject *)pDVar8,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar9 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Sequence_SetUpdate_Sequence);
                      (__this->fields)._tween = pDVar9;
                      il2cpp_runtime_helper_022b4080(ppDVar1,pDVar9);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044eacb3:
      il2cpp_runtime_helper_022b2c90();
      pDVar9 = (DG_Tweening_Tween_o *)
               (((UnityEngine_RectTransform_o *)((long)plVar11 + 0x48))->fields).m_CachedPtr;
      if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44eae30

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44eae40

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0
          (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__c *__this_00;
  bool_conflict bVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  undefined1 *puVar3;
  uint uVar4;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Collections_Generic_List_object__o *__this_04;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  undefined8 unaff_R15;
  undefined7 uVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o extraout_XMM0_Qa;
  UnityEngine_Vector2_o extraout_XMM0_Qa_00;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_01;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_02;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_03;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_04;
  
  __this_02 = (__this->fields)._textRect;
  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7 = UnityEngine_RectTransform__get_anchoredPosition(__this_02,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar7.fields;
  }
  UVar7.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  __this_03 = (System_Collections_Generic_List_object__o *)__this_02[1].fields.m_CachedPtr;
  if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_03,UVar7,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)extraout_XMM0_Qa.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this_03[1].klass;
  if (g_data_057a694c == '\0') {
    __this_03 = (System_Collections_Generic_List_object__o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_00 != (System_Collections_Generic_List_object__c *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_00,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return (UnityEngine_Vector2_o)extraout_XMM0_Qa_00.fields;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_03[1].klass = 1;
  x = (UnityEngine_Object_o *)0x0;
  puVar3 = &stack0xffffffffffffffe8;
  UVar8 = extraout_XMM0_Qa_01;
  do {
    pSVar5 = __this_03;
    *(MethodInfo **)(puVar3 + -8) = unaff_RBP;
    *(undefined8 *)(puVar3 + -0x10) = unaff_R15;
    *(System_Collections_Generic_List_object__o **)(puVar3 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar3 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar3 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar3 + -0x30) = x;
    *(undefined8 *)(puVar3 + -0x38) = uVar2;
    uVar6 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar3 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eb000;
      UVar8 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if (*(char *)&pSVar5[1].klass == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar6,1);
      __this_04 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
    }
    else {
      if (*(char *)&pSVar5[1].klass != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar6,*(undefined1 *)((long)&pSVar5[1].klass + 1));
      __this_04 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
    }
    __this_03 = (System_Collections_Generic_List_object__o *)0x0;
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      uVar4 = (__this_04->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar4;
      if ((int)uVar4 < 0) {
        return (UnityEngine_Vector2_o)UVar8;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar3 + -0x40) = 0x44eaf3b;
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item(__this_04,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar3 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_03 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item(__this_03,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_01->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar3 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_01,method_00);
          UVar8 = extraout_XMM0_Qa_03;
        }
        else {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt(__this_03,index,MethodInfo_Void_RemoveAt);
          UVar8 = extraout_XMM0_Qa_02;
        }
        if (index + -1 < 0) {
          return (UnityEngine_Vector2_o)UVar8;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_04 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
      } while (__this_04 != (System_Collections_Generic_List_object__o *)0x0);
      __this_03 = (System_Collections_Generic_List_object__o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar3 + -0x40) = 0x44eb02b;
    uVar2 = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&__this_03[1].klass = 0;
    puVar3 = puVar3 + -0x38;
    unaff_R14 = pSVar5;
    UVar8 = extraout_XMM0_Qa_04;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x44eae60

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__c *__this_00;
  bool_conflict bVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  undefined1 *puVar3;
  uint uVar4;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Collections_Generic_List_object__o *__this_03;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  undefined8 unaff_R15;
  undefined7 uVar6;
  
  __this_02 = (System_Collections_Generic_List_object__o *)(__this->fields)._textRect;
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_02,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this_02[1].klass;
  if (g_data_057a694c == '\0') {
    __this_02 = (System_Collections_Generic_List_object__o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_00 != (System_Collections_Generic_List_object__c *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_00,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_02[1].klass = 1;
  x = (UnityEngine_Object_o *)0x0;
  puVar3 = &stack0xfffffffffffffff0;
  do {
    pSVar5 = __this_02;
    *(MethodInfo **)(puVar3 + -8) = unaff_RBP;
    *(undefined8 *)(puVar3 + -0x10) = unaff_R15;
    *(System_Collections_Generic_List_object__o **)(puVar3 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar3 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar3 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar3 + -0x30) = x;
    *(undefined8 *)(puVar3 + -0x38) = uVar2;
    uVar6 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar3 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if (*(char *)&pSVar5[1].klass == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar6,1);
      __this_03 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
    }
    else {
      if (*(char *)&pSVar5[1].klass != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar6,*(undefined1 *)((long)&pSVar5[1].klass + 1));
      __this_03 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
    }
    __this_02 = (System_Collections_Generic_List_object__o *)0x0;
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      uVar4 = (__this_03->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar4;
      if ((int)uVar4 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar3 + -0x40) = 0x44eaf3b;
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item(__this_03,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar3 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_02 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
        if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item(__this_02,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_01->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar3 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_01,method_00);
        }
        else {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt(__this_02,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_03 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._syncRoot;
      } while (__this_03 != (System_Collections_Generic_List_object__o *)0x0);
      __this_02 = (System_Collections_Generic_List_object__o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar3 + -0x40) = 0x44eb02b;
    uVar2 = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&__this_02[1].klass = 0;
    puVar3 = puVar3 + -0x38;
    unaff_R14 = pSVar5;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44eae80

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  bool_conflict bVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  undefined1 *puVar3;
  uint uVar4;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  TMPro_TextMeshProUGUI_o *pTVar5;
  TMPro_TextMeshProUGUI_o *__this_02;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  TMPro_TextMeshProUGUI_o *unaff_R14;
  undefined8 unaff_R15;
  undefined7 uVar6;
  
  __this_00 = (__this->fields)._textRect;
  if (g_data_057a694c == '\0') {
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_Color.fields.r = 1;
  x = (UnityEngine_Object_o *)0x0;
  puVar3 = &stack0xfffffffffffffff8;
  do {
    pTVar5 = (TMPro_TextMeshProUGUI_o *)__this;
    *(MethodInfo **)(puVar3 + -8) = unaff_RBP;
    *(undefined8 *)(puVar3 + -0x10) = unaff_R15;
    *(TMPro_TextMeshProUGUI_o **)(puVar3 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar3 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar3 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar3 + -0x30) = x;
    *(undefined8 *)(puVar3 + -0x38) = uVar2;
    uVar6 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar3 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar3 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if (*(char *)&(pTVar5->fields).m_Color.fields.r == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar6,1);
      __this_02 = (TMPro_TextMeshProUGUI_o *)(pTVar5->fields).m_Material;
    }
    else {
      if (*(char *)&(pTVar5->fields).m_Color.fields.r != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar6,*(undefined1 *)((long)&(pTVar5->fields).m_Color.fields.r + 1));
      __this_02 = (TMPro_TextMeshProUGUI_o *)(pTVar5->fields).m_Material;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0;
    if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
      uVar4 = *(int *)&(__this_02->fields).m_CancellationTokenSource - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar4;
      if ((int)uVar4 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar3 + -0x40) = 0x44eaf3b;
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar3 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)(pTVar5->fields).m_Material;
        if ((TMPro_TextMeshProUGUI_o *)__this == (TMPro_TextMeshProUGUI_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_01->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar3 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_01,method_00);
        }
        else {
          *(undefined8 *)(puVar3 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_02 = (TMPro_TextMeshProUGUI_o *)(pTVar5->fields).m_Material;
      } while (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar3 + -0x40) = 0x44eb02b;
    uVar2 = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(((TMPro_TextMeshProUGUI_o *)__this)->fields).m_Color.fields.r = 0;
    puVar3 = puVar3 + -0x38;
    unaff_R14 = pTVar5;
  } while( true );
}


