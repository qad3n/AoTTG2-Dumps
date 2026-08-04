// Type: Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeTextRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x44eca80

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar3;
  System_Action_string__o *pSVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *method_01;
  TMPro_TextMeshProUGUI_o *pTVar5;
  
  method_01 = style;
  if (g_data_057aec49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec49 = '\x01';
  }
  (__this->fields)._state = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._state,state);
  ppSVar1 = &(__this->fields)._stateKey;
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_helper_022b4080(ppSVar1,stateKey);
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText(__this,style,theme,(MethodInfo *)method_01);
  pGVar2 = (__this->fields)._state;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar4,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._state;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_State_GisketchUIState__Get
                            (pGVar2,*ppSVar1,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
      goto label_044ecb78;
    }
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044ecb78:
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pTVar5 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pTVar5 = (__this->fields)._text;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar5->klass->vtable)._66_set_text.methodPtr)
              (pTVar5,method_00,(pTVar5->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(pTVar5->fields).m_RaycastTarget;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar5->fields).m_Material;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar4,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ed0a0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ed130

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *pGVar5;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *method_00;
  TMPro_TextMeshProUGUI_o *pTVar8;
  long *__this_00;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_01;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar9;
  float size;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  
  if (g_data_057aec4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__14_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__14_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    g_data_057aec4d = '\x01';
  }
  pTVar8 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar2 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      ppDVar1 = &(__this->fields)._tween;
      pDVar7 = (__this->fields)._tween;
      if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      text = (System_String_o *)0x0;
      __this_00 = (long *)ppDVar1;
      il2cpp_runtime_helper_022b4080();
      pUVar2 = (__this->fields)._textRect;
      if (g_data_057a694c == '\0') {
        __this_00 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar2,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        __this_01 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0;
        if ((pGVar5 != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) &&
           (__this_01 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0,
           (UnityEngine_Transform_c *)pGVar5->klass == TypeInfo_RectTransform)) {
          __this_01 = pGVar5;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (System_String_o *)0x0;
        __this_00 = (long *)__this_01;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar10 = 0.0;
        if ((char)bVar4 != '\0') {
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) goto label_044ed58f;
          UVar13 = UnityEngine_RectTransform__get_rect
                             ((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0);
          fVar10 = UVar13.fields.m_Width;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (System_String_o *)0x0;
        __this_00 = (long *)__this_01;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar12 = 0.0;
        if ((char)bVar4 != '\0') {
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) goto label_044ed58f;
          text = (System_String_o *)0x0;
          UVar13 = UnityEngine_RectTransform__get_rect
                             ((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0);
          fVar12 = UVar13.fields.m_Height;
          __this_00 = (long *)__this_01;
        }
        pTVar8 = (__this->fields)._text;
        if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
          text = (System_String_o *)
                 (*(pTVar8->klass->vtable)._65_get_text.methodPtr)
                           (pTVar8,(pTVar8->klass->vtable)._65_get_text.method);
          UVar3 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                            ((TMPro_TMP_Text_o *)pTVar8,text,(MethodInfo *)0x0);
          fVar11 = UVar3.fields.x;
          pUVar2 = (__this->fields)._textRect;
          __this_00 = (long *)0x0;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            size = fVar11;
            if (fVar11 <= fVar10) {
              size = fVar10;
            }
            text = (System_String_o *)0x0;
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,0,size,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._textRect;
            __this_00 = (long *)0x0;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,1,fVar12,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (fVar11 <= fVar10) {
                return;
              }
              if (fVar10 <= 1.0) {
                return;
              }
              if ((char)bVar4 == '\0') {
                return;
              }
              fVar11 = (fVar11 - fVar10) + 32.0;
              fVar12 = fVar11 / 34.0;
              fVar10 = 1.0;
              if (1.0 <= fVar12) {
                fVar10 = fVar12;
              }
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar6,0.7,(MethodInfo *)0x0);
              getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
              DG_Tweening_Core_DOGetter_Vector2____ctor();
              setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
              DG_Tweening_Core_DOSetter_Vector2____ctor();
              UVar3.fields.y = 0.0;
              UVar3.fields.x = -fVar11;
              t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar3,fVar10,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__Append(pDVar6,pDVar7,(MethodInfo *)0x0);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar6,0.7,(MethodInfo *)0x0);
              callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar6,callback,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                 ((Il2CppObject *)pDVar6,-1,MethodInfo_Sequence_SetLoops_Sequence);
              (__this->fields)._tween = pDVar7;
              il2cpp_runtime_helper_022b4080(ppDVar1,pDVar7);
              return;
            }
          }
        }
      }
label_044ed58f:
      il2cpp_runtime_helper_022b2c90();
      bVar4 = System_String__op_Equality
                        (text,(((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields).
                              _stateKey,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      pGVar9 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._state;
      if (pGVar9 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar9,(MethodInfo *)0x0);
        return;
      }
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_State_GisketchUIState__Get
                            (pGVar9,(((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields).
                                    _stateKey,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
      if (g_data_057aec4c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aec4c = '\x01';
      }
      pTVar8 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      pTVar8 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._text;
      if (method_00 == (MethodInfo *)0x0) {
        method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      if (pTVar8 == (TMPro_TextMeshProUGUI_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aec4a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
          g_data_057aec4a = '\x01';
        }
        pDVar7 = *(DG_Tweening_Tween_o **)&(pTVar8->fields).m_RaycastTarget;
        if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
        }
        pGVar9 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar8->fields).m_Material;
        if (pGVar9 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
        System_Action_object____ctor();
        Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar9,value,(MethodInfo *)0x0);
        return;
      }
      (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                (pTVar8,method_00,(pTVar8->klass->vtable)._66_set_text.method);
      Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
                ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x44ed5a0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  bool_conflict bVar1;
  System_Action_string__o *value;
  MethodInfo *method_00;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._stateKey,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  pGVar3 = (__this->fields)._state;
  if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar3,(MethodInfo *)0x0);
    return;
  }
  method_00 = (MethodInfo *)
              Gisketch_Aottg2UI_State_GisketchUIState__Get
                        (pGVar3,(__this->fields)._stateKey,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pTVar2 = (__this->fields)._text;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,method_00,(pTVar2->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(pTVar2->fields).m_RaycastTarget;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pGVar3 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar2->fields).m_Material;
  if (pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar3,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$CreateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x44ecb90

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  TMPro_TextMeshProUGUI_o **ppTVar2;
  int iVar3;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  int32_t weight;
  bool_conflict bVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  TMPro_TMP_FontAsset_o *value;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_03;
  System_Action_string__o *value_00;
  MethodInfo *method_00;
  System_String_o *family;
  float value_01;
  UnityEngine_Color_Fields UVar9;
  UnityEngine_Color_o fallback;
  
  if (g_data_057aec4b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Marquee Text");
    g_data_057aec4b = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_044ecfd3;
  if ((pSVar5 != (System_Type_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0)) goto label_044ecfdd;
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar5;
    il2cpp_runtime_helper_022b4080(components->m_Items,pSVar5);
    __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor_4dfc440(__this_01,"AoTTG Marquee Text",components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_4e09e30(__this_02,parent,0,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
        ppUVar1 = &(__this->fields)._textRect;
        (__this->fields)._textRect = pUVar7;
        il2cpp_runtime_helper_022b4080(ppUVar1);
        pUVar7 = (__this->fields)._textRect;
        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (*ppUVar1,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot
                        (*ppUVar1,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              pUVar7 = *ppUVar1;
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMin
                          (pUVar7,(UnityEngine_Vector2_o)
                                  **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                pUVar7 = *ppUVar1;
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMax
                            (pUVar7,(UnityEngine_Vector2_o)
                                    **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                  pTVar8 = (TMPro_TextMeshProUGUI_o *)
                           UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                  ppTVar2 = &(__this->fields)._text;
                  (__this->fields)._text = pTVar8;
                  il2cpp_runtime_helper_022b4080(ppTVar2);
                  pTVar8 = (__this->fields)._text;
                  if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    (*(pTVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pTVar8,0,(pTVar8->klass->vtable)._25_set_raycastTarget.method);
                    if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0)
                      ;
                      if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                        if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*ppTVar2,0x1001,(MethodInfo *)0x0)
                          ;
                          pTVar8 = *ppTVar2;
                          value_01 = 24.0;
                          if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                             (value_01 = 24.0, 0.0 < (style->fields).fontSize.fields.value)) {
                            value_01 = System_Nullable_float___get_Value
                                                 ((System_Nullable_float__o)&(style->fields).fontSize,
                                                  MethodInfo_Single_get_Value);
                          }
                          if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            family = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize
                                      ((TMPro_TMP_Text_o *)pTVar8,value_01,(MethodInfo *)0x0);
                            pTVar8 = *ppTVar2;
                            if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              weight = 400;
                              iVar3 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            else {
                              family = (style->fields).fontFamily;
                              weight = System_Nullable_int___GetValueOrDefault_37e7730
                                                 ((System_Nullable_int__o)&(style->fields).fontWeight,400,
                                                  MethodInfo_Int32_GetValueOrDefault);
                              iVar3 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            if (iVar3 == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                              (family,weight,(System_String_o *)0x0,0,(MethodInfo *)0x0);
                            if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar8,value,(MethodInfo *)0x0);
                              pTVar8 = *ppTVar2;
                              if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                UVar9.b = 1.0;
                                UVar9.a = 1.0;
                                UVar9.r = 1.0;
                                UVar9.g = 1.0;
                              }
                              else {
                                if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto label_044ecfd3;
                                fallback.fields.b = 1.0;
                                fallback.fields.a = 1.0;
                                fallback.fields.r = 1.0;
                                fallback.fields.g = 1.0;
                                UVar9 = (UnityEngine_Color_Fields)
                                        Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                  (theme,(style->fields).textColor,fallback,(MethodInfo *)0x0)
                                ;
                              }
                              if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                (*(pTVar8->klass->vtable)._23_set_color.methodPtr)
                                          (UVar9._0_8_,UVar9._8_8_,pTVar8,
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
label_044ecfd3:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
label_044ecfdd:
  __this_03 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)il2cpp_runtime_helper_0231b270();
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pTVar8 = (__this_03->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pTVar8 = (__this_03->fields)._text;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
              (pTVar8,method_00,(pTVar8->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this_03,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(pTVar8->fields).m_RaycastTarget;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  __this_00 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar8->fields).m_Material;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  value_00 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$SetText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44ecff0

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  System_Action_string__o *value_00;
  TMPro_TextMeshProUGUI_o *pTVar2;
  
  if (g_data_057aec4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec4c = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pTVar2 = (__this->fields)._text;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,value,(pTVar2->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aec4a = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(pTVar2->fields).m_RaycastTarget;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  __this_00 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar2->fields).m_Material;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value_00 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$RefreshMarquee
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ed140

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *pGVar5;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *method_00;
  TMPro_TextMeshProUGUI_o *pTVar8;
  long *__this_00;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_01;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar9;
  float size;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  
  if (g_data_057aec4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__14_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__14_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    g_data_057aec4d = '\x01';
  }
  pTVar8 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar2 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      ppDVar1 = &(__this->fields)._tween;
      pDVar7 = (__this->fields)._tween;
      if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
      }
      (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      text = (System_String_o *)0x0;
      __this_00 = (long *)ppDVar1;
      il2cpp_runtime_helper_022b4080();
      pUVar2 = (__this->fields)._textRect;
      if (g_data_057a694c == '\0') {
        __this_00 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar2,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        __this_01 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0;
        if ((pGVar5 != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) &&
           (__this_01 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0,
           (UnityEngine_Transform_c *)pGVar5->klass == TypeInfo_RectTransform)) {
          __this_01 = pGVar5;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (System_String_o *)0x0;
        __this_00 = (long *)__this_01;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar10 = 0.0;
        if ((char)bVar4 != '\0') {
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) goto label_044ed58f;
          UVar13 = UnityEngine_RectTransform__get_rect
                             ((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0);
          fVar10 = UVar13.fields.m_Width;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (System_String_o *)0x0;
        __this_00 = (long *)__this_01;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar12 = 0.0;
        if ((char)bVar4 != '\0') {
          if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) goto label_044ed58f;
          text = (System_String_o *)0x0;
          UVar13 = UnityEngine_RectTransform__get_rect
                             ((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0);
          fVar12 = UVar13.fields.m_Height;
          __this_00 = (long *)__this_01;
        }
        pTVar8 = (__this->fields)._text;
        if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
          text = (System_String_o *)
                 (*(pTVar8->klass->vtable)._65_get_text.methodPtr)
                           (pTVar8,(pTVar8->klass->vtable)._65_get_text.method);
          UVar3 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                            ((TMPro_TMP_Text_o *)pTVar8,text,(MethodInfo *)0x0);
          fVar11 = UVar3.fields.x;
          pUVar2 = (__this->fields)._textRect;
          __this_00 = (long *)0x0;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            size = fVar11;
            if (fVar11 <= fVar10) {
              size = fVar10;
            }
            text = (System_String_o *)0x0;
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,0,size,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._textRect;
            __this_00 = (long *)0x0;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar2,1,fVar12,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (fVar11 <= fVar10) {
                return;
              }
              if (fVar10 <= 1.0) {
                return;
              }
              if ((char)bVar4 == '\0') {
                return;
              }
              fVar11 = (fVar11 - fVar10) + 32.0;
              fVar12 = fVar11 / 34.0;
              fVar10 = 1.0;
              if (1.0 <= fVar12) {
                fVar10 = fVar12;
              }
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar6,0.7,(MethodInfo *)0x0);
              getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
              DG_Tweening_Core_DOGetter_Vector2____ctor();
              setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
              DG_Tweening_Core_DOSetter_Vector2____ctor();
              UVar3.fields.y = 0.0;
              UVar3.fields.x = -fVar11;
              t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar3,fVar10,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__Append(pDVar6,pDVar7,(MethodInfo *)0x0);
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar6,0.7,(MethodInfo *)0x0);
              callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pDVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar6,callback,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                 ((Il2CppObject *)pDVar6,-1,MethodInfo_Sequence_SetLoops_Sequence);
              (__this->fields)._tween = pDVar7;
              il2cpp_runtime_helper_022b4080(ppDVar1,pDVar7);
              return;
            }
          }
        }
      }
label_044ed58f:
      il2cpp_runtime_helper_022b2c90();
      bVar4 = System_String__op_Equality
                        (text,(((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields).
                              _stateKey,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      pGVar9 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._state;
      if (pGVar9 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar9,(MethodInfo *)0x0);
        return;
      }
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_State_GisketchUIState__Get
                            (pGVar9,(((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields).
                                    _stateKey,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
      if (g_data_057aec4c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aec4c = '\x01';
      }
      pTVar8 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      pTVar8 = (((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00)->fields)._text;
      if (method_00 == (MethodInfo *)0x0) {
        method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      if (pTVar8 == (TMPro_TextMeshProUGUI_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aec4a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
          g_data_057aec4a = '\x01';
        }
        pDVar7 = *(DG_Tweening_Tween_o **)&(pTVar8->fields).m_RaycastTarget;
        if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
        }
        pGVar9 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar8->fields).m_Material;
        if (pGVar9 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
        System_Action_object____ctor();
        Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar9,value,(MethodInfo *)0x0);
        return;
      }
      (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                (pTVar8,method_00,(pTVar8->klass->vtable)._66_set_text.method);
      Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__RefreshMarquee
                ((Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)__this_00,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ed600

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__14_0
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_0 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ed610

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_0
          (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppRGCTXData *__this_00;
  long *plVar2;
  long lVar3;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  undefined8 *puVar6;
  MethodInfo *fallback;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *__this_02;
  MethodInfo *pMVar8;
  long lVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o extraout_XMM0_Qa;
  UnityEngine_Vector2_o extraout_XMM0_Qa_00;
  undefined1 auVar11 [16];
  
  __this_01 = (__this->fields)._textRect;
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar10 = UnityEngine_RectTransform__get_anchoredPosition(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar10.fields;
  }
  UVar10.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01[2].monitor;
  if (__this_02 != (MethodInfo *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_02,UVar10,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)extraout_XMM0_Qa.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (__this_02->field7_0x38).rgctx_data;
  if (g_data_057a694c == '\0') {
    __this_02 = (MethodInfo *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_00 != (Il2CppRGCTXData *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_00,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return (UnityEngine_Vector2_o)extraout_XMM0_Qa_00.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = fallback;
  if (g_data_057aec4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec4e = '\x01';
    pMVar4 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_00;
  }
  pMVar7 = fallback;
  pMVar8 = method;
  pMVar4 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)method,(System_String_o *)fallback,pMVar4);
  if ((__this_02 != (MethodInfo *)0x0) &&
     (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,(System_String_o *)pMVar4,"accountDialogText"
                          ,(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar7 = pMVar4, pMVar8 = __this_02, pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar5->fields).textKey = (System_String_o *)method;
    UVar10.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey,method);
    return (UnityEngine_Vector2_o)UVar10.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec54 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar9 = TypeInfo_AottgAccountDialogUi;
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar9 = TypeInfo_AottgAccountDialogUi;
  }
  TypeInfo_AottgAccountDialogUi = lVar9;
  if (plVar2 == (long *)0x0) {
    auVar11 = il2cpp_runtime_helper_022b2c90();
label_044ed831:
    puVar6 = (undefined8 *)(auVar11._0_8_ + (long)*(int *)(auVar11._8_8_ + 8 + lVar9) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar11._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar11._0_8_ = lVar3;
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar9) == TypeInfo_IGisketchLocalizer) goto label_044ed831;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  UVar10.fields =
       (UnityEngine_Vector2_Fields)(*(code *)*puVar6)(plVar2,pMVar8,pMVar7,puVar6[1],(code *)*puVar6);
  return (UnityEngine_Vector2_o)UVar10.fields;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_1 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x44ed630

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_1
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  int iVar1;
  Il2CppRGCTXData *__this_00;
  long *plVar2;
  long lVar3;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  undefined8 *puVar6;
  MethodInfo *fallback;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *__this_01;
  MethodInfo *pMVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  __this_01 = (MethodInfo *)(__this->fields)._textRect;
  if (__this_01 != (MethodInfo *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (__this_01->field7_0x38).rgctx_data;
  if (g_data_057a694c == '\0') {
    __this_01 = (MethodInfo *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_00 != (Il2CppRGCTXData *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_00,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = fallback;
  if (g_data_057aec4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec4e = '\x01';
    pMVar4 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_00;
  }
  pMVar7 = fallback;
  pMVar8 = method;
  pMVar4 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)method,(System_String_o *)fallback,pMVar4);
  if ((__this_01 != (MethodInfo *)0x0) &&
     (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,(System_String_o *)pMVar4,"accountDialogText"
                          ,(System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar7 = pMVar4, pMVar8 = __this_01, pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar5->fields).textKey = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec54 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar9 = TypeInfo_AottgAccountDialogUi;
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar9 = TypeInfo_AottgAccountDialogUi;
  }
  TypeInfo_AottgAccountDialogUi = lVar9;
  if (plVar2 == (long *)0x0) {
    auVar10 = il2cpp_runtime_helper_022b2c90();
label_044ed831:
    puVar6 = (undefined8 *)(auVar10._0_8_ + (long)*(int *)(auVar10._8_8_ + 8 + lVar9) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar10._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar10._0_8_ = lVar3;
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar9) == TypeInfo_IGisketchLocalizer) goto label_044ed831;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  (*(code *)*puVar6)(plVar2,pMVar8,pMVar7,puVar6[1],(code *)*puVar6);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__14_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_2 (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o* __this, const MethodInfo* method);
// 0x44ed650

void Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime___RefreshMarquee_b__14_2
               (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  long *plVar2;
  long lVar3;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  undefined8 *puVar6;
  MethodInfo *fallback;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  __this_00 = (__this->fields)._textRect;
  if (g_data_057a694c == '\0') {
    __this = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = fallback;
  if (g_data_057aec4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&"accountDialogText");
    g_data_057aec4e = '\x01';
    pMVar4 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgAccountDialogUi + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = extraout_RDX_00;
  }
  pMVar7 = fallback;
  pMVar8 = method;
  pMVar4 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgAccountDialogUi__Text
                     ((System_String_o *)method,(System_String_o *)fallback,pMVar4);
  if (((MethodInfo *)__this != (MethodInfo *)0x0) &&
     (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this,(System_String_o *)pMVar4,"accountDialogText",
                          (System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar7 = pMVar4, pMVar8 = (MethodInfo *)__this,
     pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar5->fields).textKey = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgAccountDialogUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec54 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgAccountDialogUi + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar9 = TypeInfo_AottgAccountDialogUi;
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgAccountDialogUi + 0xb8);
    lVar9 = TypeInfo_AottgAccountDialogUi;
  }
  TypeInfo_AottgAccountDialogUi = lVar9;
  if (plVar2 == (long *)0x0) {
    auVar10 = il2cpp_runtime_helper_022b2c90();
label_044ed831:
    puVar6 = (undefined8 *)(auVar10._0_8_ + (long)*(int *)(auVar10._8_8_ + 8 + lVar9) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar10._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar10._0_8_ = lVar3;
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar9) == TypeInfo_IGisketchLocalizer) goto label_044ed831;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  (*(code *)*puVar6)(plVar2,pMVar8,pMVar7,puVar6[1],(code *)*puVar6);
  return;
}


