// Type: Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchHoverMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Setup
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup (UnityEngine_GameObject_o* viewport, TMPro_TextMeshProUGUI_o* label, bool selfActivate, const MethodInfo* method);
// 0x181902c00

Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *
Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup
          (UnityEngine_GameObject_o *viewport,TMPro_TextMeshProUGUI_o *label,bool selfActivate,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this;
  
  if (Il2CppMethodInitialized_184342224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342224 = '\x01';
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
                           (viewport,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_GisketchHoverMarqueeText);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this = UnityEngine_GameObject__AddComponent_object_
                             (viewport,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchHoverMarqueeText
                             );
        }
        if (__this != (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure
                    (__this,label,selfActivate,(MethodInfo *)0x0);
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
// 0x181902bf0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__SetActive
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,bool active,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,active,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181902740

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate != false) {
    (__this->fields)._hovered = true;
    Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181902760

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate != false) {
    (__this->fields)._hovered = false;
    Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh
              (__this,(__this->fields)._selected != false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnSelect (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x181902780

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate != false) {
    (__this->fields)._selected = true;
    Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(__this,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x181902700

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields)._selfActivate != false) {
    (__this->fields)._selected = false;
    Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh
              (__this,(__this->fields)._hovered,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Configure
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, TMPro_TextMeshProUGUI_o* label, bool selfActivate, const MethodInfo* method);
// 0x1819024a0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,TMPro_TextMeshProUGUI_o *label,
               bool selfActivate,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_RectTransform_o *pUVar7;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184342225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184342225 = '\x01';
  }
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)label,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._textRect = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._textRect,pUVar3);
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._viewport = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar7 = pUVar3;
      if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar7 = pUVar4;
      }
      (__this->fields)._viewport = pUVar7;
      if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar3 = pUVar4;
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._viewport,pUVar3);
    (__this->fields)._selfActivate = selfActivate;
    iVar2 = TMPro_TMP_Text__get_alignment((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._textRect;
    (__this->fields)._normalAlignment = iVar2;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = UnityEngine_RectTransform__get_anchorMin(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._textRect;
      fStackX_c = UVar5.fields.y;
      (__this->fields)._normalAnchorMin.fields.y = fStackX_c;
      (__this->fields)._normalAnchorMin.fields.x = UVar5.fields.x;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_anchorMax(pUVar3,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._textRect;
        fStackX_c = UVar5.fields.y;
        (__this->fields)._normalAnchorMax.fields.y = fStackX_c;
        (__this->fields)._normalAnchorMax.fields.x = UVar5.fields.x;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._textRect;
          fStackX_c = UVar5.fields.y;
          (__this->fields)._normalPivot.fields.y = fStackX_c;
          (__this->fields)._normalPivot.fields.x = UVar5.fields.x;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._textRect;
            fStackX_c = UVar5.fields.y;
            (__this->fields)._normalSizeDelta.fields.y = fStackX_c;
            (__this->fields)._normalSizeDelta.fields.x = UVar5.fields.x;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
              fStackX_c = UVar5.fields.y;
              (__this->fields)._normalAnchoredPosition.fields.y = fStackX_c;
              (__this->fields)._normalAnchoredPosition.fields.x = UVar5.fields.x;
              pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                x = UnityEngine_GameObject__GetComponent_object_
                              (pUVar6,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar1 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar1) {
                  pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1819026ec;
                  UnityEngine_GameObject__AddComponent_object_
                            (pUVar6,(MethodInfo_6F4D60 *)
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
label_1819026ec:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDisable (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x181902720

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this,(MethodInfo *)0x0);
  (__this->fields)._hovered = false;
  (__this->fields)._selected = false;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Update (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x181902d40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181902e5f: movaps xmm7, xmmword ptr [rsp + 0x20]
// asm:   0x181902e64: movaps xmm6, xmmword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Update
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184342226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342226 = '\x01';
  }
  if ((__this->fields)._marqueeActive != false) {
    pUVar1 = (__this->fields)._textRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      fVar5 = (__this->fields)._elapsed;
      fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 + fVar5;
      (__this->fields)._elapsed = fVar4;
      if (0.45 <= fVar4) {
        fVar5 = 0.0;
        if (0.0 <= fVar4 - 0.45) {
          fVar5 = fVar4 - 0.45;
        }
        fVar4 = (__this->fields)._travel;
        fVar6 = fVar5 * 42.0;
        if (fVar4 <= fVar5 * 42.0) {
          fVar6 = fVar4;
        }
        pUVar1 = (__this->fields)._textRect;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
label_181902e6f:
          ThrowNullReferenceException();
        }
        method_00 = (MethodInfo *)0x0;
        UVar3.fields.y = 0.0;
        UVar3.fields.x = -fVar6;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar3,(MethodInfo *)0x0);
        if (((__this->fields)._travel <= fVar6) &&
           (fVar5 = (__this->fields)._travel / 42.0 + 0.45 + 0.45, fVar5 <= (__this->fields)._elapsed)) {
          (__this->fields)._elapsed = 0.0;
          pUVar1 = (__this->fields)._textRect;
          UVar3 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                            ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,fVar5,method_00);
          if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_181902e6f;
          UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar3,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, bool active, const MethodInfo* method);
// 0x1819027a0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,bool active,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_Rect_o *pUVar4;
  System_String_o *text;
  UnityEngine_Vector2_o UVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184342227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342227 = '\x01';
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
          pUVar4 = UnityEngine_RectTransform__get_rect(local_38,pUVar2,(MethodInfo *)0x0);
          fVar6 = (pUVar4->fields).m_Width;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pTVar1 = (__this->fields)._label;
          if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
            text = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                             (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
            UVar5 = TMPro_TMP_Text__GetPreferredValues_2d12570
                              ((TMPro_TMP_Text_o *)pTVar1,text,(MethodInfo *)0x0);
            fVar7 = UVar5.fields.x;
            if ((active) && (1.0 < fVar6 && fVar6 + 1.0 < fVar7)) {
              if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
              }
              bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (bVar3) {
                pTVar1 = (__this->fields)._label;
                (__this->fields)._marqueeActive = true;
                (__this->fields)._elapsed = 0.0;
                (__this->fields)._travel = (fVar7 - fVar6) + 24.0;
                if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar1,0,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._label;
                  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,0x1001,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._textRect;
                    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar2,(UnityEngine_Vector2_o)
                                        ((ulonglong)(uint)(__this->fields)._normalAnchorMin.fields.y << 0x20),
                                 (MethodInfo *)0x0);
                      pUVar2 = (__this->fields)._textRect;
                      fVar6 = (__this->fields)._normalAnchorMax.fields.y;
                      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMax
                                  (pUVar2,(UnityEngine_Vector2_o)((ulonglong)(uint)fVar6 << 0x20),
                                   (MethodInfo *)0x0);
                        pUVar2 = (__this->fields)._textRect;
                        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                          method_00 = (MethodInfo *)0x0;
                          UnityEngine_RectTransform__set_pivot
                                    (pUVar2,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                          pUVar2 = (__this->fields)._textRect;
                          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                      (pUVar2,0,fVar7 + 24.0,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields)._textRect;
                            UVar5 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                                              ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,fVar6,
                                               method_00);
                            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchoredPosition(pUVar2,UVar5,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_181902a55;
              }
            }
            Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this,(MethodInfo *)0x0);
            return;
          }
        }
label_181902a55:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Restore
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x181902a60

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184342228 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342228 = '\x01';
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
      pTVar1 = (__this->fields)._label;
      (__this->fields)._marqueeActive = false;
      (__this->fields)._elapsed = 0.0;
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
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText___ctor(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


