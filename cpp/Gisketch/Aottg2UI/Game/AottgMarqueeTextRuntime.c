// Type: Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeTextRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, System_String_o* fallback, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5e86b60

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,
               System_String_o *fallback,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  System_String_o **targetAddress;
  System_String_o **targetAddress_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_Action_string__o *__this_00;
  System_String_o *value;
  MethodInfo *pMVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  pMVar2 = (MethodInfo *)fallback;
  if (Il2CppMethodInitialized_07548860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged);
    Il2CppMethodInitialized_07548860 = '\x01';
  }
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  targetAddress = &(__this->fields)._stateKey;
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (fallback == (System_String_o *)0x0) {
    fallback = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  targetAddress_00 = &(__this->fields)._fallback;
  (__this->fields)._fallback = fallback;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText(__this,style,theme,pMVar2);
  pGVar1 = (__this->fields)._state;
  pMVar2 = extraout_RDX;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar1,__this_00,(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._state;
    pMVar2 = extraout_RDX_00;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      value = Gisketch_Aottg2UI_State_GisketchUIState__Get
                        (pGVar1,*targetAddress,*targetAddress_00,(MethodInfo *)0x0);
      pMVar2 = extraout_RDX_01;
      goto label_05e86c67;
    }
  }
  value = *targetAddress_00;
label_05e86c67:
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText(__this,value,pMVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e87170

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_07548861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged);
    Il2CppMethodInitialized_07548861 = '\x01';
  }
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged,
             (MethodInfo_4A81BE0 *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e87200

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x5e876c0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  System_String_o *value;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._stateKey,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = Gisketch_Aottg2UI_State_GisketchUIState__Get
                    (__this_00,(__this->fields)._stateKey,
                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText(__this,value,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$CreateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5e86c80

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

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
  float value_00;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_07548862 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Marquee Text");
    Il2CppMethodInitialized_07548862 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar1 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Marquee Text",components,(MethodInfo *)0x0);
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
                        TMPro_TMP_Text__set_overflowMode
                                  ((TMPro_TMP_Text_o *)*targetAddress_00,0,(MethodInfo *)0x0);
                        if (*targetAddress_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_alignment
                                    ((TMPro_TMP_Text_o *)*targetAddress_00,0x1001,(MethodInfo *)0x0);
                          pTVar3 = *targetAddress_00;
                          if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05e870a1;
                            family = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar3,24.0,(MethodInfo *)0x0);
                            pTVar3 = *targetAddress_00;
                            weight = 400;
                          }
                          else {
                            if ((style->fields).fontSize.fields.value <= 0.0) {
                              value_00 = 24.0;
                            }
                            else {
                              value_00 = System_Nullable_float___get_Value
                                                   (&(style->fields).fontSize,
                                                    (MethodInfo_3CDA2D0 *)
                                                    MethodInfo_System_Nullable_float_get_Value);
                            }
                            if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
                               (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0)) goto label_05e870a1;
                            TMPro_TMP_Text__set_fontSize
                                      ((TMPro_TMP_Text_o *)pTVar3,value_00,(MethodInfo *)0x0);
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
                            pTVar3 = *targetAddress_00;
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              UVar4.fields.b = 1.0;
                              UVar4.fields.a = 1.0;
                              UVar4.fields.r = 1.0;
                              UVar4.fields.g = 1.0;
                            }
                            else {
                              if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                              goto label_05e870a1;
                              fallback.fields.b = 1.0;
                              fallback.fields.a = 1.0;
                              fallback.fields.r = 1.0;
                              fallback.fields.g = 1.0;
                              UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                (theme,(style->fields).textColor,fallback,(MethodInfo *)0x0);
                            }
                            if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
                                        (pTVar3,UVar4,(pTVar3->klass->vtable)._23_set_color.method);
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
label_05e870a1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$SetText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e870c0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548863 = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._66_set_text.methodPtr)(pTVar1,value,(pTVar1->klass->vtable)._66_set_text.method);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e87210

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_00;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar6;
  DG_Tweening_TweenCallback_o *__this_02;
  UnityEngine_RectTransform_o *pUVar7;
  float size;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  
  if (Il2CppMethodInitialized_07548864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_2);
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
    Il2CppMethodInitialized_07548864 = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar7 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      targetAddress = &(__this->fields)._tween;
      pDVar6 = (__this->fields)._tween;
      if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar6,false,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar7 = (__this->fields)._textRect;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar7,(UnityEngine_Vector2_o)
                          (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_RectTransform_o *)0x0;
        if ((pUVar4 != (UnityEngine_RectTransform_o *)0x0) &&
           (pUVar7 = (UnityEngine_RectTransform_o *)0x0, pUVar4->klass == TypeInfo_UnityEngine_RectTransform))
        {
          pUVar7 = pUVar4;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar8 = 0.0;
        if (bVar3) {
          if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05e876ad;
          UVar11 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
          fVar8 = UVar11.fields.m_Width;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar10 = 0.0;
        if (bVar3) {
          if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05e876ad;
          UVar11 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          fVar10 = UVar11.fields.m_Height;
        }
        pTVar1 = (__this->fields)._text;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          text = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                           (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
          UVar2 = TMPro_TMP_Text__GetPreferredValues_670eff0
                            ((TMPro_TMP_Text_o *)pTVar1,text,(MethodInfo *)0x0);
          fVar9 = UVar2.fields.x;
          pUVar7 = (__this->fields)._textRect;
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            size = fVar9;
            if (fVar9 <= fVar8) {
              size = fVar8;
            }
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar7,0,size,(MethodInfo *)0x0);
            pUVar7 = (__this->fields)._textRect;
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar7,1,fVar10,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
              }
              bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (!bVar3) {
                return;
              }
              if (fVar8 <= 1.0) {
                return;
              }
              if (fVar9 <= fVar8) {
                return;
              }
              fVar9 = (fVar9 - fVar8) + 32.0;
              fVar10 = fVar9 / 34.0;
              fVar8 = 1.0;
              if (1.0 <= fVar10) {
                fVar8 = fVar10;
              }
              if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
              }
              pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar5,0.7,(MethodInfo *)0x0);
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector2)
              ;
              DG_Tweening_Core_DOGetter_Vector2____ctor
                        (__this_00,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_0,
                         (MethodInfo_494D3F0 *)0x0);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector2)
              ;
              DG_Tweening_Core_DOSetter_Vector2____ctor
                        (__this_01,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_1,
                         (MethodInfo_494E600 *)0x0);
              UVar2.fields.y = 0.0;
              UVar2.fields.x = -fVar9;
              t = DG_Tweening_DOTween__To_3166a40(__this_00,__this_01,UVar2,fVar8,(MethodInfo *)0x0);
              pDVar6 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                 ((Il2CppObject *)t,1,
                                  (MethodInfo_36B0160 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector2_Vector2_VectorOptions
                                 );
              pDVar5 = DG_Tweening_TweenSettingsExtensions__Append(pDVar5,pDVar6,(MethodInfo *)0x0);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar5,0.7,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        (__this_02,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_2,
                         (MethodInfo *)0x0);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar5,__this_02,(MethodInfo *)0x0)
              ;
              pDVar5 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                 ((Il2CppObject *)pDVar5,-1,
                                  (MethodInfo_36B0580 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetLoops_Sequence);
              (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar5;
              Il2CppCodeGenWriteBarrier(targetAddress);
              return;
            }
          }
        }
      }
label_05e876ad:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e87720

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__15_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__15_0 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e87730

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__15_0
          (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__15_1 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x5e87750

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__15_1
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,UnityEngine_Vector2_o value,
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


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__15_2 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x5e87770

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__15_2
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

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


