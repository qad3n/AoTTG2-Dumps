// Type: UI.ChatScrollRect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ChatScrollRect.cs
// Prior source: NEW in this update
// --------------------------------

// UI.ChatScrollRect$$Start
// il2cpp: void UI_ChatScrollRect__Start (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x40a79c0

void UI_ChatScrollRect__Start(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  System_Collections_Generic_List_CanvasGroup__o *__this_00;
  UnityEngine_Events_UnityEvent_float__o *__this_01;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_array *pUVar5;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_GameObject_o *__this_02;
  
  if (DAT_05704607 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnScrollbarValueChanged);
    il2cpp_init_method_metadata(&MethodInfo_ChatPanel_GetComponentInParent_ChatPanel);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_float);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_05704607 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Start
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pIVar4 = UnityEngine_Component__GetComponentInParent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_ChatPanel_GetComponentInParent_ChatPanel);
  *(Il2CppObject **)&(__this->fields).isMouseOver = pIVar4;
  il2cpp_runtime_glue(&(__this->fields).isMouseOver);
  pUVar2 = (__this->fields).m_HorizontalScrollbar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
            ((UnityEngine_UI_ScrollRect_o *)__this,1,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).m_HorizontalScrollbar;
  if ((pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
     (__this_00 = (pUVar2->fields).m_CanvasGroupCache,
     __this_00 != (System_Collections_Generic_List_CanvasGroup__o *)0x0)) {
    pUVar5 = (UnityEngine_Vector3_array *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,MethodInfo_Image_GetComponent_Image);
    ppUVar1 = &(__this->fields).m_Corners;
    (__this->fields).m_Corners = pUVar5;
    il2cpp_runtime_glue(ppUVar1,pUVar5);
    pUVar2 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      __this_01 = *(UnityEngine_Events_UnityEvent_float__o **)&(pUVar2->fields).m_Size;
      call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_float);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener(__this_01,call,MethodInfo_Void_AddListener);
        pUVar2 = (__this->fields).m_HorizontalScrollbar;
        if ((pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_02,1,(MethodInfo *)0x0);
          pUVar5 = *ppUVar1;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return;
          }
          if (*ppUVar1 != (UnityEngine_Vector3_array *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatScrollRect$$OnScrollbarValueChanged
// il2cpp: void UI_ChatScrollRect__OnScrollbarValueChanged (UI_ChatScrollRect_o* __this, float value, const MethodInfo* method);
// 0x40a7bb0

void UI_ChatScrollRect__OnScrollbarValueChanged
               (UI_ChatScrollRect_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  
  if (DAT_05704608 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Invoke);
    DAT_05704608 = '\x01';
  }
  __this_00 = *(UnityEngine_Events_UnityEvent_Vector2__o **)
               &(__this->fields).m_HorizontalScrollbarSpacing;
  if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
    UnityEngine_Events_UnityEvent<Vector2>__Invoke
              (__this_00,(UnityEngine_Vector2_o)((ulong)(uint)value << 0x20),MethodInfo_Void_Invoke);
    return;
  }
  return;
}


// UI.ChatScrollRect$$LateUpdate
// il2cpp: void UI_ChatScrollRect__LateUpdate (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x40a7c10

void UI_ChatScrollRect__LateUpdate(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UI_ChatPanel_o *__this_00;
  UnityEngine_UI_Scrollbar_o *x_00;
  UnityEngine_Vector3_array *__this_01;
  bool_conflict bVar1;
  float fVar2;
  
  if (DAT_05704609 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704609 = '\x01';
  }
  UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  x = *(UnityEngine_Object_o **)&(__this->fields).isMouseOver;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = *(UI_ChatPanel_o **)&(__this->fields).isMouseOver;
    if (__this_00 == (UI_ChatPanel_o *)0x0) goto LAB_040a7d33;
    bVar1 = UI_ChatPanel__IsInteractingWithChatUI(__this_00,(MethodInfo *)0x0);
    if ((((char)bVar1 == '\0') &&
        (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) == '\0')) &&
       (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0')) {
      fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (*(float *)&(__this->fields).handleImage + 1.0 < fVar2) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                  ((UnityEngine_UI_ScrollRect_o *)__this,0.0,(MethodInfo *)0x0);
      }
    }
  }
  x_00 = (__this->fields).m_HorizontalScrollbar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
              ((UnityEngine_UI_ScrollRect_o *)__this,0,(MethodInfo *)0x0);
    UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
              ((UnityEngine_UI_ScrollRect_o *)__this,1,(MethodInfo *)0x0);
    if (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) != '\0') {
      __this_01 = (__this->fields).m_Corners;
      if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,1,(MethodInfo *)0x0)
        ;
        return;
      }
LAB_040a7d33:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.ChatScrollRect$$OnMouseEnter
// il2cpp: void UI_ChatScrollRect__OnMouseEnter (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x40a7280

void UI_ChatScrollRect__OnMouseEnter(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  bool_conflict bVar2;
  bool bVar3;
  
  *(undefined1 *)&(__this->fields).m_VerticalScrollbarRect = 1;
  if (DAT_0570460b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570460b = '\x01';
  }
  pUVar1 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).m_Corners;
    bVar3 = true;
    if (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0') {
      bVar3 = *(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) != '\0';
    }
    if (pUVar1 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar1,(uint)bVar3,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.ChatScrollRect$$OnMouseExit
// il2cpp: void UI_ChatScrollRect__OnMouseExit (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x40a73c0

void UI_ChatScrollRect__OnMouseExit(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570460a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570460a = '\x01';
  }
  *(undefined1 *)&(__this->fields).m_VerticalScrollbarRect = 0;
  pUVar1 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 != '\0') &&
     (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) == '\0')) {
    pUVar1 = (__this->fields).m_Corners;
    if (pUVar1 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.ChatScrollRect$$UpdateHandleVisibility
// il2cpp: void UI_ChatScrollRect__UpdateHandleVisibility (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x40a7d40

void UI_ChatScrollRect__UpdateHandleVisibility(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  bool_conflict bVar2;
  bool bVar3;
  
  if (DAT_0570460b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570460b = '\x01';
  }
  pUVar1 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).m_Corners;
    bVar3 = true;
    if (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0') {
      bVar3 = *(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) != '\0';
    }
    if (pUVar1 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar1,(uint)bVar3,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.ChatScrollRect$$OnBeginDrag
// il2cpp: void UI_ChatScrollRect__OnBeginDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x40a7de0

void UI_ChatScrollRect__OnBeginDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) = 1;
  UnityEngine_UI_ScrollRect__OnBeginDrag
            ((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// UI.ChatScrollRect$$OnEndDrag
// il2cpp: void UI_ChatScrollRect__OnEndDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x40a7df0

void UI_ChatScrollRect__OnEndDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570460c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570460c = '\x01';
  }
  UnityEngine_UI_ScrollRect__OnEndDrag
            ((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) = 0;
  pUVar1 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).m_Corners;
    if (pUVar1 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar1,
                 (uint)*(byte *)&(__this->fields).m_VerticalScrollbarRect,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.ChatScrollRect$$OnDrag
// il2cpp: void UI_ChatScrollRect__OnDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x40a7e90

void UI_ChatScrollRect__OnDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570460d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570460d = '\x01';
  }
  if (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) != '\0') {
    pUVar1 = (__this->fields).m_Corners;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields).m_Corners;
      if (pUVar1 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,1,(MethodInfo *)0x0);
    }
    UnityEngine_UI_ScrollRect__OnDrag
              ((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatScrollRect$$OnScroll
// il2cpp: void UI_ChatScrollRect__OnScroll (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* data, const MethodInfo* method);
// 0x40a7f30

void UI_ChatScrollRect__OnScroll
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *data,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Object_o *x;
  UI_ChatPanel_o *__this_00;
  UnityEngine_Vector3_array *pUVar2;
  bool_conflict bVar3;
  float fVar4;
  UnityEngine_Vector2_Fields UVar5;
  
  if (DAT_0570460e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570460e = '\x01';
  }
  if (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0') {
    return;
  }
  if (data != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UVar1 = (data->fields)._scrollDelta_k__BackingField.fields;
    UVar5.x = UVar1.x * 1.5;
    UVar5.y = UVar1.y * 1.5;
    (data->fields)._scrollDelta_k__BackingField.fields = UVar5;
    UnityEngine_UI_ScrollRect__OnScroll
              ((UnityEngine_UI_ScrollRect_o *)__this,data,(MethodInfo *)0x0);
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    *(float *)&(__this->fields).handleImage = fVar4;
    x = *(UnityEngine_Object_o **)&(__this->fields).isMouseOver;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = *(UI_ChatPanel_o **)&(__this->fields).isMouseOver;
      if (__this_00 == (UI_ChatPanel_o *)0x0) goto LAB_040a802e;
      UI_ChatPanel__UpdateChatInteractionState(__this_00,(MethodInfo *)0x0);
    }
    pUVar2 = (__this->fields).m_Corners;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar2 = (__this->fields).m_Corners;
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040a802e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatScrollRect$$.ctor
// il2cpp: void UI_ChatScrollRect___ctor (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x40a8040

void UI_ChatScrollRect___ctor(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


