// Type: Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchHoverMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Setup
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup (UnityEngine_GameObject_o* viewport, TMPro_TextMeshProUGUI_o* label, bool selfActivate, const MethodInfo* method);
// 0x53a00b0

Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *
Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup
          (UnityEngine_GameObject_o *viewport,TMPro_TextMeshProUGUI_o *label,bool selfActivate,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this;
  
  if (Il2CppMethodInitialized_07542ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ba3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)viewport,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (viewport != (UnityEngine_GameObject_o *)0x0) {
        __this = UnityEngine_GameObject__GetComponent_object_
                           (viewport,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_GisketchHoverMarqueeText);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this = UnityEngine_GameObject__AddComponent_object_
                             (viewport,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchHoverMarqueeText
                             );
        }
        if (__this != (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure(__this,label,selfActivate,method);
          return __this;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__SetActive (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, bool active, const MethodInfo* method);
// 0x53a05c0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__SetActive
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,bool active,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,active,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a0ac0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate == false) {
    return;
  }
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,true,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a0ae0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate == false) {
    return;
  }
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,(__this->fields)._selected,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnSelect (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a0b00

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate == false) {
    return;
  }
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,true,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a0b20

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate == false) {
    return;
  }
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,(__this->fields)._hovered,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Configure
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, TMPro_TextMeshProUGUI_o* label, bool selfActivate, const MethodInfo* method);
// 0x53a0600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a06c9: jmp 0x53a06d9

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,TMPro_TextMeshProUGUI_o *label,
               bool selfActivate,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector2_Fields UVar6;
  
  if (Il2CppMethodInitialized_07542ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07542ba4 = '\x01';
  }
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)label,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._textRect = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._textRect);
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._viewport = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar5 = pUVar3;
      }
      (__this->fields)._viewport = pUVar5;
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._viewport);
    (__this->fields)._selfActivate = selfActivate;
    iVar2 = TMPro_TMP_Text__get_alignment((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    (__this->fields)._normalAlignment = iVar2;
    pUVar3 = (__this->fields)._textRect;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_anchorMin(pUVar3,(MethodInfo *)0x0);
      (__this->fields)._normalAnchorMin.fields = UVar6;
      pUVar3 = (__this->fields)._textRect;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar6 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_anchorMax(pUVar3,(MethodInfo *)0x0)
        ;
        (__this->fields)._normalAnchorMax.fields = UVar6;
        pUVar3 = (__this->fields)._textRect;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
          (__this->fields)._normalPivot.fields = UVar6;
          pUVar3 = (__this->fields)._textRect;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UVar6 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
            (__this->fields)._normalSizeDelta.fields = UVar6;
            pUVar3 = (__this->fields)._textRect;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UVar6 = (UnityEngine_Vector2_Fields)
                      UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
              (__this->fields)._normalAnchoredPosition.fields = UVar6;
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                x = UnityEngine_GameObject__GetComponent_object_
                              (pUVar4,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar1 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar1) {
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_053a07f3;
                  UnityEngine_GameObject__AddComponent_object_
                            (pUVar4,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
                }
                TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)label,false,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)label,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_053a07f3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDisable (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x53a0b40

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this,method);
  (__this->fields)._hovered = false;
  (__this->fields)._selected = false;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Update (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x53a0c90

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Update
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_Vector2_o value;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07542ba5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ba5 = '\x01';
  }
  if ((__this->fields)._marqueeActive != false) {
    pUVar1 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      fVar4 = (__this->fields)._elapsed;
      fVar3 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      fVar3 = fVar3 + fVar4;
      (__this->fields)._elapsed = fVar3;
      if (0.45 <= fVar3) {
        pUVar1 = (__this->fields)._textRect;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          fVar4 = 0.0;
          if (0.0 <= fVar3 + -0.45) {
            fVar4 = fVar3 + -0.45;
          }
          fVar3 = (__this->fields)._travel;
          fVar5 = fVar4 * 42.0;
          if (fVar3 <= fVar4 * 42.0) {
            fVar5 = fVar3;
          }
          value.fields.y = 0.0;
          value.fields.x = -fVar5;
          UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value,(MethodInfo *)0x0);
          fVar4 = (__this->fields)._travel;
          if (fVar5 < fVar4) {
            return;
          }
          if ((__this->fields)._elapsed < fVar4 / 42.0 + 0.45 + 0.45) {
            return;
          }
          (__this->fields)._elapsed = 0.0;
          pUVar1 = (__this->fields)._textRect;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchoredPosition
                      (pUVar1,(UnityEngine_Vector2_o)
                              (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            return;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, bool active, const MethodInfo* method);
// 0x53a0800

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,bool active,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Rect_o UVar6;
  float fStack_48;
  
  if (Il2CppMethodInitialized_07542ba6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542ba6 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar2 = (__this->fields)._viewport;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar2 = (__this->fields)._viewport;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pTVar1 = (__this->fields)._label;
          if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
            method_00 = (MethodInfo *)
                        (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                                  (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
            UVar5 = TMPro_TMP_Text__GetPreferredValues_670eff0
                              ((TMPro_TMP_Text_o *)pTVar1,(System_String_o *)method_00,(MethodInfo *)0x0);
            fStack_48 = UVar6.fields.m_Width;
            if (((1.0 < fStack_48) && (active)) && (fVar4 = UVar5.fields.x, fStack_48 + 1.0 < fVar4)) {
              if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
              }
              bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (bVar3) {
                (__this->fields)._marqueeActive = true;
                (__this->fields)._elapsed = 0.0;
                (__this->fields)._travel = (fVar4 - fStack_48) + 24.0;
                pTVar1 = (__this->fields)._label;
                if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar1,0,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._label;
                  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,0x1001,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._textRect;
                    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar2,(UnityEngine_Vector2_o)
                                        ((ulong)(uint)(__this->fields)._normalAnchorMin.fields.y << 0x20),
                                 (MethodInfo *)0x0);
                      pUVar2 = (__this->fields)._textRect;
                      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMax
                                  (pUVar2,(UnityEngine_Vector2_o)
                                          ((ulong)(uint)(__this->fields)._normalAnchorMax.fields.y << 0x20),
                                   (MethodInfo *)0x0);
                        pUVar2 = (__this->fields)._textRect;
                        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_pivot
                                    (pUVar2,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                          pUVar2 = (__this->fields)._textRect;
                          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                      (pUVar2,0,fVar4 + 24.0,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields)._textRect;
                            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                              Il2CppMethodInitialized_0753ecc8 = '\x01';
                            }
                            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (pUVar2,(UnityEngine_Vector2_o)
                                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).
                                                fields,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_053a0ab9;
              }
            }
            Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this,method_00);
            return;
          }
        }
label_053a0ab9:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Restore
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x53a0b60

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542ba7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ba7 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      (__this->fields)._marqueeActive = false;
      (__this->fields)._elapsed = 0.0;
      pTVar1 = (__this->fields)._label;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar1,1,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._label;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_alignment
                    ((TMPro_TMP_Text_o *)pTVar1,(__this->fields)._normalAlignment,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._textRect;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalAnchorMin.fields,
                       (MethodInfo *)0x0);
            pUVar2 = (__this->fields)._textRect;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalAnchorMax.fields,
                         (MethodInfo *)0x0);
              pUVar2 = (__this->fields)._textRect;
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalPivot.fields,
                           (MethodInfo *)0x0);
                pUVar2 = (__this->fields)._textRect;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalSizeDelta.fields,
                             (MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._textRect;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchoredPosition
                              (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalAnchoredPosition.fields,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText___ctor (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x53a0e00

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText___ctor
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


