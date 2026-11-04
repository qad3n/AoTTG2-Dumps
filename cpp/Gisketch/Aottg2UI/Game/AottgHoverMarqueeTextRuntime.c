// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeTextRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x1823b43d0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,System_String_o *value,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
            (__this,style,theme,activeColor,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,value,(pTVar1->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x1823b3bd0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x1823b3bf0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, bool active, const MethodInfo* method);
// 0x1823b43c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,bool active,MethodInfo *method)

{
  (__this->fields)._active = active;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$CreateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* activeColor, const MethodInfo* method);
// 0x1823b3700

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *activeColor,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppType *handle;
  uint32_t weight;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar4;
  TMPro_TextMeshProUGUI_o *pTVar5;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_Color_o *pUVar6;
  System_String_o *family;
  float fVar7;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_o local_68 [3];
  
  if (Il2CppMethodInitialized_184347d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Hover Marquee Text");
    Il2CppMethodInitialized_184347d12 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
        ;
        (__this->fields)._textRect = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._textRect,pUVar4);
        pUVar4 = (__this->fields)._textRect;
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(pUVar4,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._textRect;
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._textRect;
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot
                        (pUVar4,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              pUVar4 = (__this->fields)._textRect;
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMin
                          (pUVar4,(UnityEngine_Vector2_o)
                                  (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields)._textRect;
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMax
                            (pUVar4,(UnityEngine_Vector2_o)
                                    (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  pTVar5 = UnityEngine_GameObject__AddComponent_object_
                                     (__this_00,
                                      (MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
                  (__this->fields)._text = pTVar5;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._text,pTVar5);
                  pTVar5 = (__this->fields)._text;
                  if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    (*(pTVar5->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pTVar5,false,(pTVar5->klass->vtable)._25_set_raycastTarget.method);
                    pTVar5 = (__this->fields)._text;
                    if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping
                                ((TMPro_TMP_Text_o *)pTVar5,false,(MethodInfo *)0x0);
                      pTVar5 = (__this->fields)._text;
                      if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar5,0x1001,(MethodInfo *)0x0);
                        pTVar5 = (__this->fields)._text;
                        if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
                           ((style->fields).fontSize.fields.value <= 0.0)) {
                          fVar7 = 20.0;
                        }
                        else {
                          fVar7 = System_Nullable_float___get_Value
                                            (&(style->fields).fontSize,
                                             (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
                        }
                        if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar5,fVar7,(MethodInfo *)0x0);
                          pTVar5 = (__this->fields)._text;
                          if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            family = (System_String_o *)0x0;
                            weight = 400;
                          }
                          else {
                            family = (style->fields).fontFamily;
                            weight = System_Nullable_uint___GetValueOrDefault_adc220
                                               ((System_Nullable_uint__o *)&(style->fields).fontWeight,400,
                                                (MethodInfo_ADC220 *)
                                                MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
                          }
                          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
                          }
                          value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                            (family,weight,(System_String_o *)0x0,false,(MethodInfo *)0x0);
                          if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar5,value,(MethodInfo *)0x0);
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              (__this->fields)._normalColor.fields.r = 1.0;
                              (__this->fields)._normalColor.fields.g = 1.0;
                              (__this->fields)._normalColor.fields.b = 1.0;
                              (__this->fields)._normalColor.fields.a = 1.0;
                              if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                              goto label_1823b3baa;
                            }
                            else {
                              if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                              goto label_1823b3baa;
                              local_78.r = 1.0;
                              local_78.g = 1.0;
                              local_78.b = 1.0;
                              local_78.a = 1.0;
                              pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                 (local_68,theme,(style->fields).textColor,
                                                  (UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
                              fVar7 = (pUVar6->fields).b;
                              fVar1 = (pUVar6->fields).a;
                              fVar2 = (pUVar6->fields).r;
                              (__this->fields)._normalColor.fields.g = (pUVar6->fields).g;
                              (__this->fields)._normalColor.fields.b = fVar7;
                              (__this->fields)._normalColor.fields.a = fVar1;
                              (__this->fields)._normalColor.fields.r = fVar2;
                            }
                            local_78.r = (__this->fields)._normalColor.fields.r;
                            local_78.g = (__this->fields)._normalColor.fields.g;
                            local_78.b = (__this->fields)._normalColor.fields.b;
                            local_78.a = (__this->fields)._normalColor.fields.a;
                            pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                               (local_68,theme,activeColor,(UnityEngine_Color_o *)&local_78,
                                                (MethodInfo *)0x0);
                            pTVar5 = (__this->fields)._text;
                            fVar7 = (pUVar6->fields).g;
                            fVar1 = (pUVar6->fields).b;
                            fVar2 = (pUVar6->fields).a;
                            (__this->fields)._activeColor.fields.r = (pUVar6->fields).r;
                            (__this->fields)._activeColor.fields.g = fVar7;
                            (__this->fields)._activeColor.fields.b = fVar1;
                            (__this->fields)._activeColor.fields.a = fVar2;
                            if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              local_78.r = (__this->fields)._normalColor.fields.r;
                              local_78.g = (__this->fields)._normalColor.fields.g;
                              local_78.b = (__this->fields)._normalColor.fields.b;
                              local_78.a = (__this->fields)._normalColor.fields.a;
                              (*(pTVar5->klass->vtable)._23_set_color.methodPtr)
                                        (pTVar5,(UnityEngine_Color_o *)&local_78,
                                         (pTVar5->klass->vtable)._23_set_color.method);
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
label_1823b3baa:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RegisterParent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x1823b4190

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *pGVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  char cVar7;
  UnityEngine_Transform_o *pUVar8;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *x;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgHoverMarqueeParentRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeParentRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d13 = '\x01';
  }
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__GetParent(pUVar8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      return;
    }
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      x = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)pUVar8,
                     (MethodInfo_6651A0 *)
                     MethodInfo_UnityEngine_Component_GetComponent_AottgHoverMarqueeParentRuntime);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0)
        ;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1823b43ad;
        x = UnityEngine_GameObject__AddComponent_object_
                      (__this_00,
                       (MethodInfo_6F4D60 *)
                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeParentRuntime);
      }
      if (x != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) {
        if (Il2CppMethodInitialized_184347d15 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Add);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Contains);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184347d15 = '\x01';
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          return;
        }
        pSVar3 = (x->fields)._items;
        if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
          bVar6 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this,
                             (MethodInfo_93FC70 *)
                             MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Contains)
          ;
          pMVar5 = MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Add;
          if (bVar6) {
            return;
          }
          pSVar3 = (x->fields)._items;
          if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar4 = (pSVar3->fields)._items;
            if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pGVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                if ((uint)pGVar4->max_length <= uVar2) {
                  ThrowIndexOutOfRangeException();
                }
                pGVar4->m_Items[(int)uVar2] = __this;
                Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar2,__this);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this,
                           (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              cVar7 = '\x01';
              if ((x->fields)._hovered == false) {
                cVar7 = (x->fields)._selected;
              }
              if (__this != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
                (__this->fields)._active = cVar7 != '\0';
                Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_1823b43ad:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x1823b3c00

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  System_String_o *text;
  UnityEngine_Vector2_o UVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_00;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_RectTransform_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o local_68 [6];
  
  if (Il2CppMethodInitialized_184347d14 == '\0') {
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
    Il2CppMethodInitialized_184347d14 = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar8 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pDVar7 = (__this->fields)._tween;
      if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar7,false,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,(void *)0x0);
      pUVar8 = (__this->fields)._textRect;
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar8,(UnityEngine_Vector2_o)
                          (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._text;
        if ((__this->fields)._active == false) {
          fVar12 = (__this->fields)._normalColor.fields.r;
          fVar9 = (__this->fields)._normalColor.fields.g;
          fVar11 = (__this->fields)._normalColor.fields.b;
          fVar10 = (__this->fields)._normalColor.fields.a;
        }
        else {
          fVar12 = (__this->fields)._activeColor.fields.r;
          fVar9 = (__this->fields)._activeColor.fields.g;
          fVar11 = (__this->fields)._activeColor.fields.b;
          fVar10 = (__this->fields)._activeColor.fields.a;
        }
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          local_68[0].fields.m_XMin = fVar12;
          local_68[0].fields.m_YMin = fVar9;
          local_68[0].fields.m_Width = fVar11;
          local_68[0].fields.m_Height = fVar10;
          (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                    (pTVar1,(UnityEngine_Color_o *)local_68,(pTVar1->klass->vtable)._23_set_color.method);
          pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
            pUVar8 = pUVar3;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_1823b417e;
            pUVar4 = UnityEngine_RectTransform__get_rect(local_68,pUVar8,(MethodInfo *)0x0);
            fVar12 = (pUVar4->fields).m_Width;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
          }
          else {
            fVar12 = 0.0;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_1823b417e;
            pUVar4 = UnityEngine_RectTransform__get_rect(local_68,pUVar8,(MethodInfo *)0x0);
            fVar9 = (pUVar4->fields).m_Height;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
          }
          else {
            fVar9 = 0.0;
          }
          pTVar1 = (__this->fields)._text;
          if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
            text = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                             (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
            UVar5 = TMPro_TMP_Text__GetPreferredValues_2d12570
                              ((TMPro_TMP_Text_o *)pTVar1,text,(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._textRect;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              fVar11 = fVar12;
              if (fVar12 <= 1.0) {
                fVar11 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar8,0,fVar11,(MethodInfo *)0x0);
              pUVar8 = (__this->fields)._textRect;
              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar8,1,fVar9,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._text;
                if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar1,1,(MethodInfo *)0x0);
                  if ((__this->fields)._active == false) {
                    return;
                  }
                  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
                  }
                  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  if (!bVar2) {
                    return;
                  }
                  if (fVar12 <= 1.0) {
                    return;
                  }
                  fVar9 = UVar5.fields.x;
                  if (fVar9 <= fVar12) {
                    return;
                  }
                  pTVar1 = (__this->fields)._text;
                  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar1,0,(MethodInfo *)0x0);
                    pUVar8 = (__this->fields)._textRect;
                    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar8,0,fVar9,(MethodInfo *)0x0);
                      fVar11 = (fVar9 - fVar12) + 32.0;
                      fVar9 = fVar11 / 34.0;
                      fVar12 = 1.0;
                      if (1.0 <= fVar9) {
                        fVar12 = fVar9;
                      }
                      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                      }
                      pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar6,0.45,(MethodInfo *)0x0);
                      __this_00 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor
                                (__this_00,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_0
                                 ,(MethodInfo_1387740 *)0x0);
                      __this_01 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor
                                (__this_01,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_1
                                 ,(MethodInfo_E5A7E0 *)0x0);
                      UVar5.fields.y = 0.0;
                      UVar5.fields.x = -fVar11;
                      t = DG_Tweening_DOTween__To_54bcb0(__this_00,__this_01,UVar5,fVar12,(MethodInfo *)0x0);
                      pDVar7 = (DG_Tweening_Tween_o *)
                               DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                         ((Il2CppObject *)t,1,
                                          (MethodInfo_7C9BC0 *)
                                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector2_Vector2_VectorOptions
                                         );
                      pDVar6 = DG_Tweening_TweenSettingsExtensions__Append(pDVar6,pDVar7,(MethodInfo *)0x0);
                      pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar6,0.45,(MethodInfo *)0x0);
                      callback = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                      DG_Tweening_TweenCallback___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)callback,
                                 (Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_2
                                 ,(MethodInfo *)0x0);
                      pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                         (pDVar6,callback,(MethodInfo *)0x0);
                      pDVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                         ((Il2CppObject *)pDVar6,-1,
                                          (MethodInfo_7CA070 *)
                                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Sequence);
                      pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                         ((Il2CppObject *)pDVar6,true,
                                          (MethodInfo_7CA3D0 *)
                                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
                      (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar6;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar6);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_1823b417e:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___ctor(Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x1823b4460

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_0
          (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._textRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x1823b4480

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_1
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._textRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2 (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x1823b44a0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime___RefreshMarquee_b__15_2
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._textRect;
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


