// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchTooltipTrigger.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* text, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3aedb90

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *text,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  if (DAT_05701405 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_05701405 = '\x01';
  }
  (__this->fields)._text = text;
  il2cpp_runtime_glue(&(__this->fields)._text,text);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  (__this->fields)._theme = theme;
  il2cpp_runtime_glue(&(__this->fields)._theme,theme);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3aedc10

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *method_01;
  
  method_01 = eventData;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)method_01);
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip(__this,eventData,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3aee6e0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  char cVar4;
  bool_conflict bVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_01;
  MethodInfo *method_00;
  float from;
  UnityEngine_Vector3_o endValue;
  
  if (DAT_0570140d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Void_DestroyTooltip);
    il2cpp_init_method_metadata(&MethodInfo_Void__PlayExit_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570140d = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pDVar7 = (__this->fields)._tween;
  if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar3 = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      if (cVar4 != '\0') {
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar2 = (__this->fields)._tooltipRect;
        if (DAT_056fe077 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fe077 = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        endValue.fields.x = (float)uVar1 * (float)0x3f666666;
        endValue.fields.y = (float)((ulong)uVar1 >> 0x20) * (float)0x3f666666;
        endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar2,endValue,0.1,(MethodInfo *)0x0);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar7,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._group;
        if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        from = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t_00 = DG_Tweening_DOVirtual__Float(from,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join
                           (pDVar6,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        t_01 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                         ((Il2CppObject *)pDVar6,action,MethodInfo_Sequence_OnComplete_Sequence);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(t_01,1,MethodInfo_Sequence_SetUpdate_Sequence);
        (__this->fields)._tween = pDVar7;
        il2cpp_runtime_glue(&(__this->fields)._tween,pDVar7);
        return;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3aeea00

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip(__this,eventData,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3aeea30

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields size;
  UnityEngine_Canvas_o *pUVar1;
  UnityEngine_Vector2_o screenPosition;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation((MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)eventData);
  if (DAT_0570140b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTooltipTrigger);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_0570140b = '\x01';
  }
  pUVar4 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_RectTransform)) {
      pUVar4 = pUVar3;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields)._placementCanvas;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          UVar5.fields.x = UVar6.fields.m_XMin + UVar6.fields.m_Width * 0.5;
          UVar5.fields.y = UVar6.fields.m_YMin + UVar6.fields.m_Height * 0.5;
          UVar5.fields.z = 0.0;
          UVar5 = UnityEngine_Transform__TransformPoint
                            ((UnityEngine_Transform_o *)pUVar4,UVar5,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._placementCanvas;
          if (pUVar1 != (UnityEngine_Canvas_o *)0x0) {
            cam = UnityEngine_Canvas__get_worldCamera(pUVar1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              il2cpp_init_class();
            }
            screenPosition =
                 UnityEngine_RectTransformUtility__WorldToScreenPoint(cam,UVar5,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._placementCanvas;
            size = (__this->fields)._tooltipSize.fields;
            pUVar4 = (__this->fields)._tooltipRect;
            method_00 = extraout_RDX;
            if (*(int *)(TypeInfo_GisketchTooltipTrigger + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_00;
            }
            Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                      (pUVar1,screenPosition,(UnityEngine_Vector2_o)size,pUVar4,method_00);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3aeec10

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  char cVar4;
  bool_conflict bVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_01;
  MethodInfo *method_00;
  float from;
  UnityEngine_Vector3_o endValue;
  
  if (DAT_0570140d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Void_DestroyTooltip);
    il2cpp_init_method_metadata(&MethodInfo_Void__PlayExit_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570140d = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pDVar7 = (__this->fields)._tween;
  if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar3 = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      if (cVar4 != '\0') {
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar2 = (__this->fields)._tooltipRect;
        if (DAT_056fe077 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fe077 = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        endValue.fields.x = (float)uVar1 * (float)0x3f666666;
        endValue.fields.y = (float)((ulong)uVar1 >> 0x20) * (float)0x3f666666;
        endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar2,endValue,0.1,(MethodInfo *)0x0);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar7,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._group;
        if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        from = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t_00 = DG_Tweening_DOVirtual__Float(from,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join
                           (pDVar6,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        t_01 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                         ((Il2CppObject *)pDVar6,action,MethodInfo_Sequence_OnComplete_Sequence);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(t_01,1,MethodInfo_Sequence_SetUpdate_Sequence);
        (__this->fields)._tween = pDVar7;
        il2cpp_runtime_glue(&(__this->fields)._tween,pDVar7);
        return;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ShowTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aedc40

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_CanvasGroup_o **ppUVar2;
  UnityEngine_Object_o *x;
  System_String_o *requiredText;
  UnityEngine_Vector2_Fields UVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  int32_t weight;
  UnityEngine_Canvas_o *pUVar5;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_CanvasGroup_o *pUVar13;
  Il2CppObject *pIVar14;
  TMPro_TMP_Text_o *__this_00;
  TMPro_TMP_FontAsset_o *value;
  System_String_o **ppSVar15;
  System_String_o *pSVar16;
  undefined8 uVar17;
  MethodInfo *pMVar18;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  UnityEngine_Vector2_o UVar21;
  UnityEngine_Vector2_o value_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar22;
  UnityEngine_Color_o UVar23;
  UnityEngine_Color_o fallback;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_60;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_58;
  float local_4c;
  undefined1 local_48 [16];
  
  if (DAT_05701406 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponentInParent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTooltipTrigger);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"tooltipText");
    il2cpp_init_method_metadata(&"AoTTG Tooltip Label");
    il2cpp_init_method_metadata(&"tooltip");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"AoTTG Tooltip");
    il2cpp_init_method_metadata(&"ink");
    DAT_05701406 = '\x01';
  }
  local_58 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  local_60 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar4 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar5 = (UnityEngine_Canvas_o *)
               UnityEngine_Component__GetComponentInParent<object>
                         ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponentInParent_Canvas);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        (__this->fields)._placementCanvas = pUVar5;
        il2cpp_runtime_glue(&(__this->fields)._placementCanvas,pUVar5);
        pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
        handle = TypeRef_RectTransform;
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (pSVar6 == (System_Type_array *)0x0) goto LAB_03aee591;
        if ((pSVar7 != (System_Type_o *)0x0) &&
           (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0
           )) {
LAB_03aee59b:
          uVar17 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar17,0);
        }
        if ((int)pSVar6->max_length == 0) {
LAB_03aee596:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        ppUVar1 = &(__this->fields)._tooltip;
        pSVar6->m_Items[0] = pSVar7;
        il2cpp_runtime_glue(pSVar6->m_Items,pSVar7);
        pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar9,"AoTTG Tooltip",pSVar6,(MethodInfo *)0x0);
        *ppUVar1 = pUVar9;
        il2cpp_runtime_glue(ppUVar1);
        if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar10 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_Canvas_o *)0x0)) &&
           (pUVar11 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar10,pUVar11,0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            (__this->fields)._tooltipRect = pUVar12;
            il2cpp_runtime_glue(&(__this->fields)._tooltipRect);
            pUVar12 = (__this->fields)._tooltipRect;
            if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot
                        (pUVar12,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              pUVar9 = *ppUVar1;
              if (*(int *)(TypeInfo_GisketchTooltipTrigger + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05701408 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
                DAT_05701408 = '\x01';
              }
              if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar5 = (UnityEngine_Canvas_o *)
                           UnityEngine_GameObject__AddComponent<object>(pUVar9,MethodInfo_Canvas_AddComponent_Canvas),
                 pUVar5 != (UnityEngine_Canvas_o *)0x0)) {
                UnityEngine_Canvas__set_overrideSorting(pUVar5,1,(MethodInfo *)0x0);
                UnityEngine_Canvas__set_sortingOrder(pUVar5,0x3b6,(MethodInfo *)0x0);
                if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar13 = (UnityEngine_CanvasGroup_o *)
                            UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
                  ppUVar2 = &(__this->fields)._group;
                  (__this->fields)._group = pUVar13;
                  il2cpp_runtime_glue(ppUVar2);
                  pUVar13 = (__this->fields)._group;
                  if (pUVar13 != (UnityEngine_CanvasGroup_o *)0x0) {
                    UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar13,0,(MethodInfo *)0x0);
                    pUVar13 = *ppUVar2;
                    if (pUVar13 != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_CanvasGroup__set_interactable(pUVar13,0,(MethodInfo *)0x0);
                      if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                         (pIVar14 = UnityEngine_GameObject__AddComponent<object>
                                              (*ppUVar1,MethodInfo_Image_AddComponent_Image),
                         pIVar14 != (Il2CppObject *)0x0)) {
                        (*pIVar14->klass->vtable[0x19].methodPtr)
                                  (pIVar14,0,pIVar14->klass->vtable[0x19].method);
                        pSVar16 = "tooltip";
                        if (DAT_05701407 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
                          DAT_05701407 = '\x01';
                        }
                        pGVar19 = (__this->fields)._theme;
                        if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pGVar19 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                                    **(long **)(TypeInfo_GisketchTheme + 0xb8);
                          if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                          goto LAB_03aee591;
                        }
                        pMVar18 = (MethodInfo *)0x0;
                        Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                  (pGVar19,pSVar16,&local_58,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
                                  (__this,(__this->fields)._tooltip,local_58,pMVar18);
                        pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar6 != (System_Type_array *)0x0) {
                          if ((pSVar7 != (System_Type_o *)0x0) &&
                             (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).
                                                                element_class), lVar8 == 0))
                          goto LAB_03aee59b;
                          if ((int)pSVar6->max_length == 0) goto LAB_03aee596;
                          pSVar6->m_Items[0] = pSVar7;
                          il2cpp_runtime_glue(pSVar6->m_Items,pSVar7);
                          pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                          UnityEngine_GameObject___ctor
                                    (pUVar9,"AoTTG Tooltip Label",pSVar6,(MethodInfo *)0x0);
                          if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                             (__this_00 = (TMPro_TMP_Text_o *)
                                          UnityEngine_GameObject__AddComponent<object>
                                                    (pUVar9,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI),
                             __this_00 != (TMPro_TMP_Text_o *)0x0)) {
                            pUVar10 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0);
                            if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                               (pUVar11 = UnityEngine_GameObject__get_transform
                                                    (*ppUVar1,(MethodInfo *)0x0),
                               pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                              UnityEngine_Transform__SetParent(pUVar10,pUVar11,0,(MethodInfo *)0x0);
                              pUVar12 = (UnityEngine_RectTransform_o *)
                                        UnityEngine_Component__GetComponent<object>
                                                  ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform
                                                  );
                              if (DAT_056fe093 == '\0') {
                                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                DAT_056fe093 = '\x01';
                              }
                              if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (pUVar12,(UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)
                                                     (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                if (DAT_0570136e == '\0') {
                                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                  DAT_0570136e = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar12,(UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                                           (MethodInfo *)0x0);
                                local_48._0_12_ = ZEXT812(0x41400000);
                                local_48._12_4_ = 0;
                                if ((local_58 !=
                                     (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                   ((char)(local_58->fields).padding.fields.hasValue != '\0')) {
                                  local_48._0_4_ =
                                       System_Nullable<float>__get_Value
                                                 ((System_Nullable_float__o)
                                                  &(local_58->fields).padding,MethodInfo_Single_get_Value);
                                  local_48._4_4_ = extraout_XMM0_Db;
                                  local_48._8_4_ = extraout_XMM0_Dc;
                                  local_48._12_4_ = extraout_XMM0_Dd;
                                }
                                UVar21.fields.y = (float)local_48._0_4_;
                                UVar21.fields.x = (float)local_48._0_4_;
                                UnityEngine_RectTransform__set_offsetMin
                                          (pUVar12,UVar21,(MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_offsetMax
                                          (pUVar12,(UnityEngine_Vector2_o)
                                                   (CONCAT44(local_48._0_4_,local_48._0_4_) ^
                                                   0x8000000080000000),(MethodInfo *)0x0);
                                pSVar16 = "tooltipText";
                                if (DAT_05701407 == '\0') {
                                  il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
                                  DAT_05701407 = '\x01';
                                }
                                pGVar19 = (__this->fields)._theme;
                                if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                                    il2cpp_init_class();
                                  }
                                  pGVar19 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                                            **(long **)(TypeInfo_GisketchTheme + 0xb8);
                                  if (pGVar19 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                  goto LAB_03aee591;
                                }
                                pMVar18 = (MethodInfo *)0x0;
                                Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                          (pGVar19,pSVar16,&local_60,(MethodInfo *)0x0);
                                fVar20 = 18.0;
                                if ((local_60 !=
                                     (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                   (0.0 < (local_60->fields).fontSize.fields.value)) {
                                  fVar20 = System_Nullable<float>__get_Value
                                                     ((System_Nullable_float__o)
                                                      &(local_60->fields).fontSize,MethodInfo_Single_get_Value);
                                }
                                TMPro_TMP_Text__set_fontSize(__this_00,fVar20,(MethodInfo *)0x0);
                                if (local_60 ==
                                    (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                  weight = 400;
                                  pSVar16 = "text";
                                }
                                else {
                                  pSVar16 = (local_60->fields).fontFamily;
                                  weight = System_Nullable<int>__GetValueOrDefault
                                                     ((System_Nullable_int__o)
                                                      &(local_60->fields).fontWeight,400,
                                                      MethodInfo_Int32_GetValueOrDefault);
                                }
                                requiredText = (__this->fields)._text;
                                if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                                  (pSVar16,weight,requiredText,pMVar18);
                                TMPro_TMP_Text__set_font(__this_00,value,(MethodInfo *)0x0);
                                (*(__this_00->klass->vtable)._66_set_text.methodPtr)
                                          (__this_00,(__this->fields)._text,
                                           (__this_00->klass->vtable)._66_set_text.method);
                                pGVar19 = (__this->fields)._theme;
                                if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                  if (local_60 ==
                                      (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                    ppSVar15 = (System_String_o **)&"ink";
                                  }
                                  else {
                                    ppSVar15 = &(local_60->fields).textColor;
                                  }
                                  pSVar16 = (System_String_o *)0x0;
                                  UVar23.fields.b = 1.0;
                                  UVar23.fields.a = 1.0;
                                  UVar23.fields.r = 1.0;
                                  UVar23.fields.g = 1.0;
                                  UVar23 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                     (pGVar19,*ppSVar15,UVar23,(MethodInfo *)0x0);
                                  (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                                            (UVar23.fields._0_8_,UVar23.fields._8_8_,__this_00,
                                             (__this_00->klass->vtable)._23_set_color.method);
                                  (*(__this_00->klass->vtable)._25_set_raycastTarget.methodPtr)
                                            (__this_00,0,
                                             (__this_00->klass->vtable)._25_set_raycastTarget.method
                                            );
                                  TMPro_TMP_Text__set_enableWordWrapping
                                            (__this_00,1,(MethodInfo *)0x0);
                                  pGVar19 = (__this->fields)._theme;
                                  if (local_58 !=
                                      (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                    pSVar16 = (local_58->fields).background;
                                  }
                                  if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                    fallback.fields.b = 0.07;
                                    fallback.fields.a = 0.96;
                                    fallback.fields.r = 0.05;
                                    fallback.fields.g = 0.05;
                                    UVar23 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                       (pGVar19,pSVar16,fallback,(MethodInfo *)0x0);
                                    (*pIVar14->klass->vtable[0x17].methodPtr)
                                              (UVar23.fields._0_8_,UVar23.fields._8_8_,pIVar14,
                                               pIVar14->klass->vtable[0x17].method);
                                    if (*(int *)(TypeInfo_GisketchTooltipTrigger + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    local_48._0_4_ = local_48._0_4_ + local_48._0_4_;
                                    local_4c = 420.0 - (float)local_48._0_4_;
                                    pSVar16 = (System_String_o *)
                                              (*(__this_00->klass->vtable)._65_get_text.methodPtr)
                                                        (__this_00,
                                                         (__this_00->klass->vtable)._65_get_text.
                                                         method);
                                    UVar21 = TMPro_TMP_Text__GetPreferredValues
                                                       (__this_00,pSVar16,local_4c,0.0,
                                                        (MethodInfo *)0x0);
                                    fVar22 = (float)local_48._0_4_ + UVar21.fields.x;
                                    fVar20 = 420.0;
                                    if (fVar22 <= 420.0) {
                                      fVar20 = fVar22;
                                    }
                                    fVar22 = UVar21.fields.y + (float)local_48._0_4_;
                                    UVar3.y = fVar22;
                                    UVar3.x = fVar20;
                                    (__this->fields)._tooltipSize.fields = UVar3;
                                    pUVar12 = (__this->fields)._tooltipRect;
                                    if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                                      value_00.fields.y = fVar22;
                                      value_00.fields.x = fVar20;
                                      pMVar18 = (MethodInfo *)0x0;
                                      UnityEngine_RectTransform__set_sizeDelta
                                                (pUVar12,value_00,(MethodInfo *)0x0);
                                      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
                                                (__this,pMVar18);
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
LAB_03aee591:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Style
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x3aeec90

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style
          (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *name,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  
  if (DAT_05701407 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_05701407 = '\x01';
  }
  __this_00 = (__this->fields)._theme;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(long **)(TypeInfo_GisketchTheme + 0xb8);
    if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                    (__this_00,name,style,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PromoteTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip (UnityEngine_GameObject_o* tooltip, const MethodInfo* method);
// 0x3aeec20

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip
               (UnityEngine_GameObject_o *tooltip,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this;
  
  if (DAT_05701408 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    DAT_05701408 = '\x01';
  }
  if (tooltip != (UnityEngine_GameObject_o *)0x0) {
    __this = (UnityEngine_Canvas_o *)
             UnityEngine_GameObject__AddComponent<object>(tooltip,MethodInfo_Canvas_AddComponent_Canvas);
    if (__this != (UnityEngine_Canvas_o *)0x0) {
      UnityEngine_Canvas__set_overrideSorting(__this,1,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this,0x3b6,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ApplyShadow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x3aeed10

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  UnityEngine_Color_o color;
  
  if (DAT_05701409 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_init_method_metadata(&"shadow");
    DAT_05701409 = '\x01';
  }
  if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
     (*(char *)((long)&(style->fields).reliefGradient.fields.hasValue + 1) != '\0')) {
    if (go != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                  UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
      __this_00 = (__this->fields)._theme;
      if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (__this_00,"shadow",
                           (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                           (MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup(__this_01,color,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3aee5b0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPosition;
  UnityEngine_Vector2_Fields size;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Canvas_o *pUVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar4;
  UnityEngine_Vector2_Fields *pUVar5;
  
  if (DAT_0570140a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTooltipTrigger);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570140a = '\x01';
  }
  pUVar1 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar2 = (__this->fields)._placementCanvas;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pUVar2 = (__this->fields)._placementCanvas;
      pMVar4 = extraout_RDX;
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
          pMVar4 = extraout_RDX_00;
        }
        pUVar5 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      else {
        pUVar5 = &(eventData->fields)._position_k__BackingField.fields;
      }
      screenPosition = *pUVar5;
      size = (__this->fields)._tooltipSize.fields;
      pUVar1 = (__this->fields)._tooltipRect;
      if (*(int *)(TypeInfo_GisketchTooltipTrigger + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar4 = extraout_RDX_01;
      }
      Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                (pUVar2,(UnityEngine_Vector2_o)screenPosition,(UnityEngine_Vector2_o)size,pUVar1,
                 pMVar4);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltipToTarget
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aeea50

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields size;
  UnityEngine_Canvas_o *pUVar1;
  UnityEngine_Vector2_o screenPosition;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  if (DAT_0570140b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTooltipTrigger);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_0570140b = '\x01';
  }
  pUVar4 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_RectTransform)) {
      pUVar4 = pUVar3;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields)._placementCanvas;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          UVar5.fields.x = UVar6.fields.m_XMin + UVar6.fields.m_Width * 0.5;
          UVar5.fields.y = UVar6.fields.m_YMin + UVar6.fields.m_Height * 0.5;
          UVar5.fields.z = 0.0;
          UVar5 = UnityEngine_Transform__TransformPoint
                            ((UnityEngine_Transform_o *)pUVar4,UVar5,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._placementCanvas;
          if (pUVar1 != (UnityEngine_Canvas_o *)0x0) {
            cam = UnityEngine_Canvas__get_worldCamera(pUVar1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              il2cpp_init_class();
            }
            screenPosition =
                 UnityEngine_RectTransformUtility__WorldToScreenPoint(cam,UVar5,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._placementCanvas;
            size = (__this->fields)._tooltipSize.fields;
            pUVar4 = (__this->fields)._tooltipRect;
            method_00 = extraout_RDX;
            if (*(int *)(TypeInfo_GisketchTooltipTrigger + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_00;
            }
            Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
                      (pUVar1,screenPosition,(UnityEngine_Vector2_o)size,pUVar4,method_00);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$TooltipSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize (TMPro_TextMeshProUGUI_o* label, float padding, const MethodInfo* method);
// 0x3aeedc0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize
          (TMPro_TextMeshProUGUI_o *label,float padding,MethodInfo *method)

{
  System_String_o *text;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float fVar4;
  
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    fVar1 = padding + padding;
    text = (System_String_o *)
           (*(label->klass->vtable)._65_get_text.methodPtr)
                     (label,(label->klass->vtable)._65_get_text.method);
    UVar2 = TMPro_TMP_Text__GetPreferredValues
                      ((TMPro_TMP_Text_o *)label,text,420.0 - fVar1,0.0,(MethodInfo *)0x0);
    fVar3 = fVar1 + UVar2.fields.x;
    fVar4 = 420.0;
    if (fVar3 <= 420.0) {
      fVar4 = fVar3;
    }
    UVar2.fields.y = UVar2.fields.y + fVar1;
    UVar2.fields.x = fVar4;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aeee50

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  char cVar4;
  bool_conflict bVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_0570140c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Void__PlayEnter_b__25_0);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570140c = '\x01';
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar3 = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      if (cVar4 != '\0') {
        pDVar7 = (__this->fields)._tween;
        if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
        }
        pUVar2 = (__this->fields)._tooltipRect;
        if (DAT_056fe077 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fe077 = '\x01';
        }
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          value.fields.x = (float)uVar1 * (float)0x3f570a3d;
          value.fields.y = (float)((ulong)uVar1 >> 0x20) * (float)0x3f570a3d;
          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.84;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)pUVar2,value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._group;
          if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_alpha(pUVar3,0.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar2 = (__this->fields)._tooltipRect;
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            t = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar2,
                           (UnityEngine_Vector3_o)
                           *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                           0.14,(MethodInfo *)0x0);
            pDVar7 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetEase<object>
                               ((Il2CppObject *)t,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
            pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar7,(MethodInfo *)0x0);
            onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float)
            ;
            DG_Tweening_TweenCallback<float>___ctor();
            t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,onVirtualUpdate,(MethodInfo *)0x0);
            pDVar6 = DG_Tweening_TweenSettingsExtensions__Join
                               (pDVar6,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
            pDVar7 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                               ((Il2CppObject *)pDVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
            (__this->fields)._tween = pDVar7;
            il2cpp_runtime_glue(&(__this->fields)._tween,pDVar7);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aee6f0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  char cVar4;
  bool_conflict bVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_01;
  MethodInfo *method_00;
  float from;
  UnityEngine_Vector3_o endValue;
  
  if (DAT_0570140d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Void_DestroyTooltip);
    il2cpp_init_method_metadata(&MethodInfo_Void__PlayExit_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570140d = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pDVar7 = (__this->fields)._tween;
  if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar3 = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      if (cVar4 != '\0') {
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar2 = (__this->fields)._tooltipRect;
        if (DAT_056fe077 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fe077 = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        endValue.fields.x = (float)uVar1 * (float)0x3f666666;
        endValue.fields.y = (float)((ulong)uVar1 >> 0x20) * (float)0x3f666666;
        endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar2,endValue,0.1,(MethodInfo *)0x0);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar7,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._group;
        if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        from = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t_00 = DG_Tweening_DOVirtual__Float(from,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join
                           (pDVar6,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        t_01 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                         ((Il2CppObject *)pDVar6,action,MethodInfo_Sequence_OnComplete_Sequence);
        pDVar7 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(t_01,1,MethodInfo_Sequence_SetUpdate_Sequence);
        (__this->fields)._tween = pDVar7;
        il2cpp_runtime_glue(&(__this->fields)._tween,pDVar7);
        return;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$DestroyTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aef310

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (DAT_0570140e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570140e = '\x01';
  }
  t = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._tween);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip (UnityEngine_Canvas_o* canvas, UnityEngine_Vector2_o screenPosition, UnityEngine_Vector2_o size, UnityEngine_RectTransform_o* tooltip, const MethodInfo* method);
// 0x3aef110

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
               (UnityEngine_Canvas_o *canvas,UnityEngine_Vector2_o screenPosition,
               UnityEngine_Vector2_o size,UnityEngine_RectTransform_o *tooltip,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Camera_o *cam;
  UnityEngine_RectTransform_o *rect;
  uint uVar3;
  float fVar4;
  float fVar7;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Vector2_Fields local_60;
  UnityEngine_Vector2_Fields local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_28._8_4_ = in_XMM1_Dc;
  local_28._0_8_ = size.fields;
  local_28._12_4_ = in_XMM1_Dd;
  local_58 = screenPosition.fields;
  uStack_50 = in_XMM0_Qb;
  if (DAT_0570140f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTooltipTrigger);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_0570140f = '\x01';
  }
  local_60.x = 0.0;
  local_60.y = 0.0;
  if (canvas != (UnityEngine_Canvas_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (rect = (UnityEngine_RectTransform_o *)0x0, pUVar2->klass == TypeInfo_RectTransform)) {
      rect = pUVar2;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    cam = UnityEngine_Canvas__get_worldCamera(canvas,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)local_58,cam,(UnityEngine_Vector2_o *)&local_60,
               (MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar15 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      auVar6._0_8_ = UVar15.fields._0_8_;
      auVar6._8_8_ = extraout_XMM0_Qb;
      fVar10 = UVar15.fields.m_Width;
      fVar9 = UVar15.fields.m_Height;
      fVar13 = local_60.x;
      fVar14 = 0.0;
      if (*(int *)(TypeInfo_GisketchTooltipTrigger + 0xe4) == 0) {
        local_58 = (UnityEngine_Vector2_Fields)((ulong)local_60 & 0xffffffff);
        uStack_50 = 0;
        local_38._8_4_ = in_XMM1_Dc;
        local_38._0_8_ = UVar15.fields._8_8_;
        local_38._12_4_ = in_XMM1_Dd;
        local_48 = auVar6;
        il2cpp_init_class();
        auVar6._0_8_ = local_48._0_8_;
        fVar10 = (float)local_38._0_4_;
        fVar9 = (float)local_38._4_4_;
        fVar13 = local_58.x;
        fVar14 = local_58.y;
      }
      if (tooltip != (UnityEngine_RectTransform_o *)0x0) {
        fVar4 = (float)auVar6._0_8_;
        fVar13 = fVar13 + **(float **)(TypeInfo_GisketchTooltipTrigger + 0xb8);
        fVar10 = (fVar10 + fVar4) - local_28._0_4_;
        fVar7 = (float)((ulong)auVar6._0_8_ >> 0x20);
        fVar12 = (*(float **)(TypeInfo_GisketchTooltipTrigger + 0xb8))[1] + local_60.y;
        fVar11 = fVar7 + local_28._4_4_;
        if (fVar13 <= fVar10) {
          fVar10 = fVar13;
        }
        fVar8 = fVar9 + fVar7;
        if (fVar12 <= fVar9 + fVar7) {
          fVar8 = fVar12;
        }
        uVar3 = -(uint)(fVar11 <= fVar12);
        auVar5._0_4_ = local_60.x -
                       (float)(~-(uint)(fVar4 <= fVar13) & (uint)fVar4 |
                              (uint)fVar10 & -(uint)(fVar4 <= fVar13));
        auVar5._4_4_ = local_60.y -
                       ((float)(~uVar3 & (uint)fVar11 | (uint)fVar8 & uVar3) - local_28._4_4_);
        auVar5._8_4_ = 0.0 - (float)(~(uint)fVar14 & (uint)fVar7 | (uint)fVar9 & (uint)fVar14);
        auVar5._12_4_ = 0.0 - fVar7;
        auVar6 = divps(auVar5,local_28);
        UnityEngine_RectTransform__set_pivot
                  (tooltip,(UnityEngine_Vector2_o)auVar6._0_8_,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchoredPosition
                  (tooltip,(UnityEngine_Vector2_o)local_60,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aef410

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aef420

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip(__this,method);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3aef430

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor (const MethodInfo* method);
// 0x3aef440

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor(MethodInfo *method)

{
  if (DAT_05701410 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTooltipTrigger);
    DAT_05701410 = '\x01';
  }
  **(undefined8 **)(TypeInfo_GisketchTooltipTrigger + 0xb8) = 0x41c0000041c00000;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayEnter>b__25_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__25_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x3aef480

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__<PlayEnter>b__25_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayExit>b__26_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__26_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x3aef4a0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__<PlayExit>b__26_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


