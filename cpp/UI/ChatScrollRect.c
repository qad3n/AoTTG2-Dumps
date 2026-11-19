// Type: UI.ChatScrollRect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatScrollRect.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatScrollRect$$Start
// il2cpp: void UI_ChatScrollRect__Start (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x5d1ab90

void UI_ChatScrollRect__Start(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Events_UnityEvent_float__o *__this_01;
  bool bVar2;
  UI_ChatPanel_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_GameObject_o *__this_02;
  
  if (Il2CppMethodInitialized_07547d94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatScrollRect_OnScrollbarValueChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
    Il2CppMethodInitialized_07547d94 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Start
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ChatPanel);
  (__this->fields)._chatPanel = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanel);
  pUVar1 = (__this->fields).m_VerticalScrollbar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
            ((UnityEngine_UI_ScrollRect_o *)__this,1,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).m_VerticalScrollbar;
  if ((pUVar1 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
     (__this_00 = (pUVar1->fields).m_HandleRect, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    targetAddress = &(__this->fields).handleImage;
    (__this->fields).handleImage = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = (__this->fields).m_VerticalScrollbar;
    if (pUVar1 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar1->fields).m_OnValueChanged;
      call = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_float);
      UnityEngine_Events_UnityAction_float____ctor
                ((UnityEngine_Events_UnityAction_float__o *)call,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ChatScrollRect_OnScrollbarValueChanged,(MethodInfo_4311C00 *)0x0);
      if (__this_01 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent_float___AddListener
                  (__this_01,call,
                   (MethodInfo_43194E0 *)MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
        pUVar1 = (__this->fields).m_VerticalScrollbar;
        if ((pUVar1 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
          pUVar4 = *targetAddress;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            return;
          }
          if (*targetAddress != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)*targetAddress,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatScrollRect$$OnScrollbarValueChanged
// il2cpp: void UI_ChatScrollRect__OnScrollbarValueChanged (UI_ChatScrollRect_o* __this, float value, const MethodInfo* method);
// 0x5d1ad80

void UI_ChatScrollRect__OnScrollbarValueChanged(UI_ChatScrollRect_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = value;
  if (Il2CppMethodInitialized_07547d95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_Invoke);
    Il2CppMethodInitialized_07547d95 = '\x01';
  }
  __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(__this->fields).m_OnValueChanged;
  if (__this_00 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
    return;
  }
  UnityEngine_Events_UnityEvent_Vector2___Invoke
            (__this_00,(UnityEngine_Vector2_o)(auVar1._0_8_ << 0x20),
             (MethodInfo_4319D20 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_Invoke);
  return;
}


// UI.ChatScrollRect$$LateUpdate
// il2cpp: void UI_ChatScrollRect__LateUpdate (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x5d1ade0

void UI_ChatScrollRect__LateUpdate(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547d96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d96 = '\x01';
  }
  UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._chatPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields)._chatPanel;
    if (pUVar1 == (UI_ChatPanel_o *)0x0) goto label_05d1af69;
    if ((pUVar1->fields)._isInteractingWithChatUI == false) {
      if (Il2CppMethodInitialized_07547d53 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07547d53 = '\x01';
      }
      if ((pUVar1->fields)._isDestroyed == false) {
        pTVar2 = (pUVar1->fields)._inputField;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pTVar2 = (pUVar1->fields)._inputField;
          if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05d1af69;
          if ((pTVar2->fields).m_AllowInput != false) goto label_05d1af08;
        }
      }
      if ((((pUVar1->fields)._emojiPanelActive == false) && ((__this->fields).isDragging == false)) &&
         ((__this->fields).isMouseOver == false)) {
        fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        if ((__this->fields).lastScrollTime + 1.0 < fVar5) {
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                    ((UnityEngine_UI_ScrollRect_o *)__this,0.0,(MethodInfo *)0x0);
        }
      }
    }
  }
label_05d1af08:
  if ((__this->fields).isDragging != false) {
    pUVar3 = (__this->fields).handleImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields).handleImage;
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,true,(MethodInfo *)0x0);
        return;
      }
label_05d1af69:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatScrollRect$$OnMouseEnter
// il2cpp: void UI_ChatScrollRect__OnMouseEnter (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x5d199e0

void UI_ChatScrollRect__OnMouseEnter(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  (__this->fields).isMouseOver = true;
  if (Il2CppMethodInitialized_07547d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d98 = '\x01';
  }
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).handleImage;
    bVar2 = true;
    if ((__this->fields).isMouseOver == false) {
      bVar2 = (__this->fields).isDragging != false;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,bVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatScrollRect$$OnMouseExit
// il2cpp: void UI_ChatScrollRect__OnMouseExit (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x5d19b20

void UI_ChatScrollRect__OnMouseExit(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d97 = '\x01';
  }
  (__this->fields).isMouseOver = false;
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields).isDragging == false)) {
    pUVar1 = (__this->fields).handleImage;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatScrollRect$$UpdateHandleVisibility
// il2cpp: void UI_ChatScrollRect__UpdateHandleVisibility (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x5d1af70

void UI_ChatScrollRect__UpdateHandleVisibility(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d98 = '\x01';
  }
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).handleImage;
    bVar2 = true;
    if ((__this->fields).isMouseOver == false) {
      bVar2 = (__this->fields).isDragging != false;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,bVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatScrollRect$$OnBeginDrag
// il2cpp: void UI_ChatScrollRect__OnBeginDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d1b010

void UI_ChatScrollRect__OnBeginDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  (__this->fields).isDragging = true;
  UnityEngine_UI_ScrollRect__OnBeginDrag((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// UI.ChatScrollRect$$OnEndDrag
// il2cpp: void UI_ChatScrollRect__OnEndDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d1b020

void UI_ChatScrollRect__OnEndDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d99 = '\x01';
  }
  UnityEngine_UI_ScrollRect__OnEndDrag((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  (__this->fields).isDragging = false;
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).handleImage;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pUVar1,(__this->fields).isMouseOver,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatScrollRect$$OnDrag
// il2cpp: void UI_ChatScrollRect__OnDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d1b0c0

void UI_ChatScrollRect__OnDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d9a = '\x01';
  }
  if ((__this->fields).isDragging == false) {
    return;
  }
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).handleImage;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,true,(MethodInfo *)0x0);
  }
  UnityEngine_UI_ScrollRect__OnDrag((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// UI.ChatScrollRect$$OnScroll
// il2cpp: void UI_ChatScrollRect__OnScroll (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* data, const MethodInfo* method);
// 0x5d1b160

void UI_ChatScrollRect__OnScroll
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *data,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UI_ChatPanel_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  MethodInfo *method_00;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  
  if (Il2CppMethodInitialized_07547d9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d9b = '\x01';
  }
  if ((__this->fields).isMouseOver == false) {
    return;
  }
  if (data != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UVar1 = (data->fields)._scrollDelta_k__BackingField.fields;
    UVar6.x = UVar1.x * 1.5;
    UVar6.y = UVar1.y * 1.5;
    (data->fields)._scrollDelta_k__BackingField.fields = UVar6;
    UnityEngine_UI_ScrollRect__OnScroll((UnityEngine_UI_ScrollRect_o *)__this,data,(MethodInfo *)0x0);
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields).lastScrollTime = fVar5;
    pUVar2 = (__this->fields)._chatPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._chatPanel;
      if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_05d1b25c;
      UI_ChatPanel__UpdateChatInteractionState(pUVar2,method_00);
    }
    pUVar3 = (__this->fields).handleImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pUVar3 = (__this->fields).handleImage;
    if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,true,(MethodInfo *)0x0);
      return;
    }
  }
label_05d1b25c:
  ThrowNullReferenceException();
}


// UI.ChatScrollRect$$.ctor
// il2cpp: void UI_ChatScrollRect___ctor (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x5d1b270

void UI_ChatScrollRect___ctor(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


