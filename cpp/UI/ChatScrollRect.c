// Type: UI.ChatScrollRect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatScrollRect.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatScrollRect$$Start
// il2cpp: void UI_ChatScrollRect__Start (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x18223efe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223f1ae: mov rsi, qword ptr [rsp + 0x30]

void UI_ChatScrollRect__Start(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  bool bVar2;
  UI_ChatPanel_o *value;
  UnityEngine_UI_Image_o *pUVar3;
  DG_Tweening_Core_DOSetter_float__o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  
  if (Il2CppMethodInitialized_184347222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatScrollRect_OnScrollbarValueChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
    Il2CppMethodInitialized_184347222 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  value = UnityEngine_Component__GetComponentInParent_object__664f20
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ChatPanel);
  (__this->fields)._chatPanel = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._chatPanel,value);
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
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields).handleImage = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).handleImage,pUVar3);
    pUVar1 = (__this->fields).m_VerticalScrollbar;
    if (pUVar1 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar1->fields).m_OnValueChanged;
      __this_02 = (DG_Tweening_Core_DOSetter_float__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_float);
      UnityEngine_Events_UnityAction_float____ctor
                (__this_02,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ChatScrollRect_OnScrollbarValueChanged,(MethodInfo_E5A750 *)0x0);
      if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
        UnityEngine_Events_UnityEvent_Vector2___AddListener
                  (__this_01,(UnityEngine_Events_UnityAction_T0__o *)__this_02,
                   (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
        pUVar1 = (__this->fields).m_VerticalScrollbar;
        if ((pUVar1 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
           (__this_03 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           __this_03 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_03,true,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).handleImage;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            pUVar3 = (__this->fields).handleImage;
            if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_18223f1be;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,false,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_18223f1be:
  ThrowNullReferenceException();
}


// UI.ChatScrollRect$$OnScrollbarValueChanged
// il2cpp: void UI_ChatScrollRect__OnScrollbarValueChanged (UI_ChatScrollRect_o* __this, float value, const MethodInfo* method);
// 0x18223ef80

void UI_ChatScrollRect__OnScrollbarValueChanged(UI_ChatScrollRect_o *__this,float value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_Invoke);
    Il2CppMethodInitialized_184347223 = '\x01';
  }
  if ((__this->fields).m_OnValueChanged != (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent_Vector2___Invoke
              ((UnityEngine_Events_UnityEvent_Vector2__o *)(__this->fields).m_OnValueChanged,
               (UnityEngine_Vector2_o)((ulonglong)(uint)value << 0x20),
               (MethodInfo_EBDB60 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_Invoke);
  }
  return;
}


// UI.ChatScrollRect$$LateUpdate
// il2cpp: void UI_ChatScrollRect__LateUpdate (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x18223eac0

void UI_ChatScrollRect__LateUpdate(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184347224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347224 = '\x01';
  }
  UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._chatPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) goto label_18223eb75;
  pUVar1 = (__this->fields)._chatPanel;
  if (pUVar1 == (UI_ChatPanel_o *)0x0) goto label_18223ebcc;
  bVar3 = UI_ChatPanel__IsInteractingWithChatUI(pUVar1,(MethodInfo *)0x0);
  if (bVar3) {
label_18223eb75:
    if ((__this->fields).isDragging == false) {
      return;
    }
  }
  else if ((__this->fields).isDragging == false) {
    if (((__this->fields).isMouseOver == false) &&
       (fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0), (__this->fields).lastScrollTime + 1.0 < fVar4))
    {
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                ((UnityEngine_UI_ScrollRect_o *)__this,0.0,(MethodInfo *)0x0);
    }
    goto label_18223eb75;
  }
  pUVar2 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields).handleImage;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
label_18223ebcc:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatScrollRect$$OnMouseEnter
// il2cpp: void UI_ChatScrollRect__OnMouseEnter (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x18223ed40

void UI_ChatScrollRect__OnMouseEnter(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = Il2CppMethodInitialized_184347226 == '\0';
  (__this->fields).isMouseOver = true;
  if (bVar3) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347226 = '\x01';
  }
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    cVar2 = '\x01';
    pUVar1 = (__this->fields).handleImage;
    if ((__this->fields).isMouseOver == false) {
      cVar2 = (__this->fields).isDragging;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,cVar2 != '\0',(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatScrollRect$$OnMouseExit
// il2cpp: void UI_ChatScrollRect__OnMouseExit (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x18223ede0

void UI_ChatScrollRect__OnMouseExit(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347225 = '\x01';
  }
  pUVar1 = (__this->fields).handleImage;
  (__this->fields).isMouseOver = false;
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
  }
  return;
}


// UI.ChatScrollRect$$UpdateHandleVisibility
// il2cpp: void UI_ChatScrollRect__UpdateHandleVisibility (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x18223f1d0

void UI_ChatScrollRect__UpdateHandleVisibility(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  char cVar3;
  
  if (Il2CppMethodInitialized_184347226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347226 = '\x01';
  }
  pUVar1 = (__this->fields).handleImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    cVar3 = '\x01';
    pUVar1 = (__this->fields).handleImage;
    if ((__this->fields).isMouseOver == false) {
      cVar3 = (__this->fields).isDragging;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,cVar3 != '\0',(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatScrollRect$$OnBeginDrag
// il2cpp: void UI_ChatScrollRect__OnBeginDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18223ebe0

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
// 0x18223eca0

void UI_ChatScrollRect__OnEndDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347227 = '\x01';
  }
  UnityEngine_UI_ScrollRect__OnEndDrag((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).handleImage;
  (__this->fields).isDragging = false;
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
  }
  return;
}


// UI.ChatScrollRect$$OnDrag
// il2cpp: void UI_ChatScrollRect__OnDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18223ebf0

void UI_ChatScrollRect__OnDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347228 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347228 = '\x01';
  }
  if ((__this->fields).isDragging != false) {
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
  }
  return;
}


// UI.ChatScrollRect$$OnScroll
// il2cpp: void UI_ChatScrollRect__OnScroll (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* data, const MethodInfo* method);
// 0x18223ee70

void UI_ChatScrollRect__OnScroll
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *data,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UI_ChatPanel_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  
  if (Il2CppMethodInitialized_184347229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347229 = '\x01';
  }
  if ((__this->fields).isMouseOver != false) {
    if (data == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_18223ef74:
      ThrowNullReferenceException();
    }
    UVar1 = (data->fields)._scrollDelta_k__BackingField.fields;
    UVar6.x = UVar1.x * 1.5;
    UVar6.y = UVar1.y * 1.5;
    (data->fields)._scrollDelta_k__BackingField.fields = UVar6;
    UnityEngine_UI_ScrollRect__OnScroll((UnityEngine_UI_ScrollRect_o *)__this,data,(MethodInfo *)0x0);
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    pUVar2 = (__this->fields)._chatPanel;
    (__this->fields).lastScrollTime = fVar5;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._chatPanel;
      if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_18223ef74;
      UI_ChatPanel__UpdateChatInteractionState(pUVar2,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields).handleImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields).handleImage;
      if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_18223ef74;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.ChatScrollRect$$.ctor
// il2cpp: void UI_ChatScrollRect___ctor (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x1819050c0

void
UI_ChatScrollRect___ctor(UI_ChatScrollRect_o* __this, MethodInfo* method)

{
  UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


