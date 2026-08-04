// Type: UI.ChatScrollRect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatScrollRect.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatScrollRect$$Start
// il2cpp: void UI_ChatScrollRect__Start (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x43b91c0

void UI_ChatScrollRect__Start(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  System_Collections_Generic_List_CanvasGroup__o *__this_00;
  UnityEngine_Events_UnityEvent_float__o *__this_01;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_02;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_array *pUVar5;
  UI_ChatScrollRect_o *call;
  UnityEngine_GameObject_o *__this_03;
  UI_ChatScrollRect_o *__this_04;
  uint uVar6;
  
  if (g_data_057ae394 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnScrollbarValueChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponentInParent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057ae394 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Start
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pIVar4 = UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_ChatPanel_GetComponentInParent_ChatPanel)
  ;
  *(Il2CppObject **)&(__this->fields).isMouseOver = pIVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).isMouseOver);
  pUVar2 = (__this->fields).m_HorizontalScrollbar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  __this_04 = __this;
  UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
            ((UnityEngine_UI_ScrollRect_o *)__this,1,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).m_HorizontalScrollbar;
  if (pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    __this_00 = (pUVar2->fields).m_CanvasGroupCache;
    __this_04 = (UI_ChatScrollRect_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
      pUVar5 = (UnityEngine_Vector3_array *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_Image_GetComponent_Image);
      ppUVar1 = &(__this->fields).m_Corners;
      (__this->fields).m_Corners = pUVar5;
      __this_04 = (UI_ChatScrollRect_o *)ppUVar1;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar5);
      pUVar2 = (__this->fields).m_HorizontalScrollbar;
      if (pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) {
        __this_01 = *(UnityEngine_Events_UnityEvent_float__o **)&(pUVar2->fields).m_Size;
        call = (UI_ChatScrollRect_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_float);
        __this_04 = call;
        UnityEngine_Events_UnityAction_float____ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
          UnityEngine_Events_UnityEvent_float___AddListener
                    (__this_01,(UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_AddListener);
          __this_04 = (UI_ChatScrollRect_o *)(__this->fields).m_HorizontalScrollbar;
          if ((__this_04 != (UI_ChatScrollRect_o *)0x0) &&
             (__this_03 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             __this_03 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_03,1,(MethodInfo *)0x0);
            pUVar5 = *ppUVar1;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return;
            }
            __this_04 = (UI_ChatScrollRect_o *)0x0;
            if (*ppUVar1 != (UnityEngine_Vector3_array *)0x0) {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae395 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ae395 = '\x01';
  }
  __this_02 = *(UnityEngine_Events_UnityEvent_Vector2__o **)&(__this_04->fields).m_HorizontalScrollbarSpacing;
  if (__this_02 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
    return;
  }
  UnityEngine_Events_UnityEvent_Vector2___Invoke
            (__this_02,(UnityEngine_Vector2_o)((ulong)uVar6 << 0x20),MethodInfo_Void_Invoke);
  return;
}


// UI.ChatScrollRect$$OnScrollbarValueChanged
// il2cpp: void UI_ChatScrollRect__OnScrollbarValueChanged (UI_ChatScrollRect_o* __this, float value, const MethodInfo* method);
// 0x43b93b0

void UI_ChatScrollRect__OnScrollbarValueChanged(UI_ChatScrollRect_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  
  if (g_data_057ae395 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ae395 = '\x01';
  }
  __this_00 = *(UnityEngine_Events_UnityEvent_Vector2__o **)&(__this->fields).m_HorizontalScrollbarSpacing;
  if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
    UnityEngine_Events_UnityEvent_Vector2___Invoke
              (__this_00,(UnityEngine_Vector2_o)((ulong)(uint)value << 0x20),MethodInfo_Void_Invoke);
    return;
  }
  return;
}


// UI.ChatScrollRect$$LateUpdate
// il2cpp: void UI_ChatScrollRect__LateUpdate (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x43b9410

void UI_ChatScrollRect__LateUpdate(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *pUVar5;
  int iVar6;
  UnityEngine_Object_o *pUVar7;
  UI_ChatPanel_o *__this_00;
  UnityEngine_UI_Scrollbar_o *x;
  UnityEngine_Vector2_o UVar8;
  float fVar9;
  long lVar10;
  char cVar11;
  bool_conflict bVar12;
  long lVar13;
  intptr_t iVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  MethodInfo *pMVar16;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *__this_02;
  UnityEngine_UI_ScrollRect_o *__this_03;
  UnityEngine_Vector3_array *obj;
  long *__this_04;
  long *localPoint;
  bool bVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar19;
  float fVar20;
  UnityEngine_Vector2_Fields UStack_f0;
  UnityEngine_Vector2_Fields UStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  UnityEngine_Vector2_Fields UStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_90;
  UnityEngine_UI_ScrollRect_o *pUStack_88;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o **ppUStack_80;
  
  if (cRam00000000057ae396 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    cRam00000000057ae396 = '\x01';
  }
  UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  pUVar7 = *(UnityEngine_Object_o **)&(__this->fields).isMouseOver;
  localPoint = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
code_r0x043b94c6:
    x = (__this->fields).m_HorizontalScrollbar;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
              ((UnityEngine_UI_ScrollRect_o *)__this,0,(MethodInfo *)0x0);
    UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
              ((UnityEngine_UI_ScrollRect_o *)__this,1,(MethodInfo *)0x0);
    if (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) == '\0') {
      return;
    }
    obj = (__this->fields).m_Corners;
    if (obj != (UnityEngine_Vector3_array *)0x0) {
      if (g_data_057b4c76 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_MarshalNullCheck_Behaviour,1,0);
        g_data_057b4c76 = '\x01';
      }
      lVar10 = MethodInfo_IntPtr_MarshalNullCheck_Behaviour;
      lVar13 = *(long *)(MethodInfo_IntPtr_MarshalNullCheck_Behaviour + 0x38);
      if (lVar13 == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_IntPtr_MarshalNullCheck_Behaviour);
        lVar13 = *(long *)(lVar10 + 0x38);
      }
      pMVar16 = *(MethodInfo **)(lVar13 + 8);
      iVar14 = UnityEngine_Object_MarshalledUnityObject__MarshalAssumeNotNull_object_
                         (&obj->obj,(MethodInfo_26701D0 *)pMVar16);
      if (iVar14 != 0) {
        if (g_data_057b4c80 == (code *)0x0) {
          g_data_057b4c80 = (code *)il2cpp_runtime_helper_022b28d0(
                                             "UnityEngine.Behaviour::set_enabled_Injected(System.IntPtr,System.Boolean)"
                                             );
        }
        (*g_data_057b4c80)(iVar14,1);
        return;
      }
      UnityEngine_Object_MarshalledUnityObject__ThrowNullExceptionObjectImpl(&obj->obj,pMVar16);
      if (g_data_057b4c80 == (code *)0x0) {
        g_data_057b4c80 = (code *)il2cpp_runtime_helper_022b28d0(
                                           "UnityEngine.Behaviour::set_enabled_Injected(System.IntPtr,System.Boolean)"
                                           );
      }
      (*g_data_057b4c80)(obj,(ulong)pMVar16 & 0xff);
      return;
    }
  }
  else {
    __this_00 = *(UI_ChatPanel_o **)&(__this->fields).isMouseOver;
    if (__this_00 != (UI_ChatPanel_o *)0x0) {
      bVar12 = UI_ChatPanel__IsInteractingWithChatUI(__this_00,(MethodInfo *)0x0);
      if (((((char)bVar12 == '\0') && (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) == '\0')
           ) && (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0')) &&
         (fVar18 = UnityEngine_Time__get_time((MethodInfo *)0x0),
         *(float *)&(__this->fields).handleImage + 1.0 < fVar18)) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                  ((UnityEngine_UI_ScrollRect_o *)__this,0.0,(MethodInfo *)0x0);
      }
      goto code_r0x043b94c6;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae398 = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar13 + 0x138);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  __this_03 = *(UnityEngine_UI_ScrollRect_o **)(lVar13 + 0x138);
  bVar17 = true;
  if (*(char *)(lVar13 + 0x130) == '\0') {
    bVar17 = *(char *)(lVar13 + 0x131) != '\0';
  }
  if (__this_03 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,(uint)bVar17,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_03->fields).m_VerticalScrollbarRect + 1) = 1;
  __this_02 = __this_01;
  __this_04 = (long *)__this_03;
  if (g_data_057b83d0 == '\0') {
    __this_04 = &TypeInfo_RectTransformUtility;
    il2cpp_runtime_helper_023445d0();
    g_data_057b83d0 = '\x01';
  }
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_01 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((__this_01->fields)._dragging_k__BackingField != 0) {
      return;
    }
    pMVar16 = (__this_03->klass->vtable)._9_IsActive.method;
    cVar11 = (*(__this_03->klass->vtable)._9_IsActive.methodPtr)(__this_03);
    if (cVar11 == '\0') {
      return;
    }
    UnityEngine_UI_ScrollRect__UpdateBounds(__this_03,pMVar16);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    localPoint = (long *)&(__this_03->fields).m_OnValueChanged;
    (__this_03->fields).m_OnValueChanged =
         (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    pUVar15 = UnityEngine_UI_ScrollRect__get_viewRect(__this_03,pMVar16);
    UVar4 = (__this_01->fields)._position_k__BackingField.fields;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = cam;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (pUVar15,(UnityEngine_Vector2_o)UVar4,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)localPoint,(MethodInfo *)0x0);
    pUVar15 = (__this_03->fields).m_Content;
    __this_04 = (long *)0x0;
    if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar15,(MethodInfo *)0x0);
      (__this_03->fields).m_PointerStartLocalCursor.fields = UVar4;
      *(undefined1 *)&(__this_03->fields).m_Velocity.fields.x = 1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((__this_02->fields)._dragging_k__BackingField != 0) {
      return;
    }
    *(undefined1 *)&(((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_Velocity.fields.x = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_90 = cam;
  pUStack_88 = __this_03;
  ppUStack_80 = (UnityEngine_UI_ScrollRect_ScrollRectEvent_o **)localPoint;
  if (g_data_057b83d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057b83d1 = '\x01';
  }
  UStack_f0.x = 0.0;
  UStack_f0.y = 0.0;
  if (*(char *)&(((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_Velocity.fields.x != '\0') {
    if (__this_02 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_051e0682:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((__this_02->fields)._dragging_k__BackingField == 0) {
      pMVar16 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->klass->vtable)._9_IsActive.method;
      cVar11 = (*(((UnityEngine_UI_ScrollRect_o *)__this_04)->klass->vtable)._9_IsActive.methodPtr)(__this_04)
      ;
      if (cVar11 != '\0') {
        pUVar15 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this_04,pMVar16);
        UStack_e8 = (__this_02->fields)._position_k__BackingField.fields;
        uStack_e0 = 0;
        pMVar16 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_02,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar12 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                           (pUVar15,(UnityEngine_Vector2_o)UStack_e8,(UnityEngine_Camera_o *)pMVar16,
                            (UnityEngine_Vector2_o *)&UStack_f0,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this_04,pMVar16);
          pUVar15 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_Content;
          if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_051e0682;
          fVar18 = UStack_f0.y;
          pUVar5 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_OnValueChanged;
          UStack_e8 = (UnityEngine_Vector2_Fields)CONCAT44(fVar18,UStack_f0.x - SUB84(pUVar5,0));
          uStack_e0 = 0;
          uStack_a8 = CONCAT44(fVar18,fVar18 - (float)((ulong)pUVar5 >> 0x20));
          uStack_a0 = 0;
          UStack_b8 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_PointerStartLocalCursor.fields;
          uStack_b0 = 0;
          uStack_c8 = CONCAT44(UStack_b8.y,UStack_b8.y);
          uStack_c0 = 0;
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar15,(MethodInfo *)0x0);
          bVar12 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_Horizontal;
          iVar6 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_Vertical;
          fVar18 = UVar8.fields.x;
          if (g_data_057a694c == '\0') {
            auStack_d8._8_4_ = extraout_XMM0_Dc;
            auStack_d8._0_4_ = UVar8.fields.x;
            auStack_d8._4_4_ = UVar8.fields.y;
            auStack_d8._12_4_ = extraout_XMM0_Dd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
            fVar18 = (float)auStack_d8._0_4_;
          }
          fVar19 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar20 = fVar19;
          if (iVar6 != 0) {
            uVar3 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_ContentBounds.fields.m_Center.
                    fields.y;
            fVar9 = SUB84((((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_ViewRect,0);
            if ((char)bVar12 != '\0') {
              fVar18 = (UStack_b8.x + UStack_e8.x) - fVar18;
              fVar1 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_ContentBounds.fields.m_Extents.
                      fields.y;
              fVar2 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_ViewBounds.fields.m_Center.fields
                      .y;
              fVar20 = (fVar1 - fVar2) - ((fVar9 - (float)uVar3) + fVar18);
              if ((-0.001 <= fVar20) &&
                 (fVar18 = (fVar1 + fVar2) - (fVar18 + fVar9 + (float)uVar3), fVar20 = fVar19, 0.001 < fVar18)
                 ) {
                fVar20 = fVar18;
              }
            }
          }
          fVar18 = UStack_b8.x + UStack_e8.x + fVar20;
          if (((((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_Vertical == 1) &&
             ((fVar20 != 0.0 || (NAN(fVar20))))) {
            fVar19 = (((UnityEngine_UI_ScrollRect_o *)__this_04)->fields).m_ViewBounds.fields.m_Center.fields.
                     y;
            fVar19 = fVar19 + fVar19;
            fVar18 = fVar18 - (1.0 - 1.0 / ((ABS(fVar20) * 0.55) / fVar19 + 1.0)) * fVar19 *
                              *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar20) * 4);
          }
          (*(((UnityEngine_UI_ScrollRect_o *)__this_04)->klass->vtable)._47_SetContentAnchoredPosition.
            methodPtr)(fVar18,__this_04,
                       (((UnityEngine_UI_ScrollRect_o *)__this_04)->klass->vtable).
                       _47_SetContentAnchoredPosition.method);
        }
      }
    }
  }
  return;
}


// UI.ChatScrollRect$$OnMouseEnter
// il2cpp: void UI_ChatScrollRect__OnMouseEnter (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x43b7f10

void UI_ChatScrollRect__OnMouseEnter(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Vector3_array *pUVar4;
  UnityEngine_Behaviour_o *__this_00;
  bool bVar5;
  
  *(undefined1 *)&(__this->fields).m_VerticalScrollbarRect = 1;
  if (g_data_057ae398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae398 = '\x01';
  }
  pUVar4 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar4 = (__this->fields).m_Corners;
    bVar5 = true;
    if (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0') {
      bVar5 = *(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) != '\0';
    }
    if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,(uint)bVar5,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    lVar1 = ((UnityEngine_Behaviour_Fields *)&pUVar4->bounds)->m_CachedPtr;
    if (lVar1 != 0) {
      if (g_data_057ae397 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae397 = '\x01';
      }
      *(undefined1 *)(lVar1 + 0x130) = 0;
      pUVar2 = *(UnityEngine_Object_o **)(lVar1 + 0x138);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar3 == '\0') || (*(char *)(lVar1 + 0x131) != '\0')) {
        return;
      }
      pUVar4 = (UnityEngine_Vector3_array *)0x0;
      if (*(UnityEngine_Behaviour_o **)(lVar1 + 0x138) != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(*(UnityEngine_Behaviour_o **)(lVar1 + 0x138),0,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae397 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae397 = '\x01';
    }
    *(undefined1 *)&pUVar4->m_Items[0x16].fields.z = 0;
    pUVar2 = *(UnityEngine_Object_o **)&pUVar4->m_Items[0x17].fields.y;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar3 != '\0') && (*(char *)((long)&pUVar4->m_Items[0x16].fields.z + 1) == '\0')) {
      __this_00 = *(UnityEngine_Behaviour_o **)&pUVar4->m_Items[0x17].fields.y;
      if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  return;
}


// UI.ChatScrollRect$$OnMouseExit
// il2cpp: void UI_ChatScrollRect__OnMouseExit (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x43b8050

void UI_ChatScrollRect__OnMouseExit(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Vector3_array *pUVar2;
  
  if (g_data_057ae397 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae397 = '\x01';
  }
  *(undefined1 *)&(__this->fields).m_VerticalScrollbarRect = 0;
  pUVar2 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) == '\0')) {
    pUVar2 = (__this->fields).m_Corners;
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&pUVar2->obj,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ChatScrollRect$$UpdateHandleVisibility
// il2cpp: void UI_ChatScrollRect__UpdateHandleVisibility (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x43b9540

void UI_ChatScrollRect__UpdateHandleVisibility(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_Fields screenPoint;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  UnityEngine_Vector2_o UVar6;
  char cVar7;
  bool_conflict bVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  MethodInfo *pMVar10;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_Vector3_array *pUVar11;
  long *__this_02;
  float *unaff_R15;
  bool bVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector2_Fields UStack_d8;
  UnityEngine_Vector2_Fields UStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_78;
  UnityEngine_Vector3_array *pUStack_70;
  float *pfStack_68;
  
  if (g_data_057ae398 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae398 = '\x01';
  }
  pUVar11 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar11 = (__this->fields).m_Corners;
  bVar12 = true;
  if (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0') {
    bVar12 = *(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) != '\0';
  }
  if (pUVar11 != (UnityEngine_Vector3_array *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11,(uint)bVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&pUVar11->m_Items[0x16].fields.z + 1) = 1;
  __this_01 = __this_00;
  __this_02 = (long *)pUVar11;
  if (g_data_057b83d0 == '\0') {
    __this_02 = &TypeInfo_RectTransformUtility;
    il2cpp_runtime_helper_023445d0();
    g_data_057b83d0 = '\x01';
  }
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_00 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((__this_00->fields)._dragging_k__BackingField != 0) {
      return;
    }
    pIVar5 = (pUVar11->obj).klass;
    pMVar10 = pIVar5->vtable[9].method;
    cVar7 = (*pIVar5->vtable[9].methodPtr)(pUVar11);
    if (cVar7 == '\0') {
      return;
    }
    UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)pUVar11,pMVar10);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    unaff_R15 = &pUVar11->m_Items[6].fields.z;
    *(undefined8 *)&pUVar11->m_Items[6].fields.z = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    pUVar9 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)pUVar11,pMVar10);
    screenPoint = (__this_00->fields)._position_k__BackingField.fields;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = cam;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (pUVar9,(UnityEngine_Vector2_o)screenPoint,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)unaff_R15,(MethodInfo *)0x0);
    pUVar9 = *(UnityEngine_RectTransform_o **)&pUVar11->m_Items[0].fields;
    __this_02 = (long *)0x0;
    if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar9,(MethodInfo *)0x0);
      pUVar11->m_Items[7].fields.y = UVar6.fields.x;
      pUVar11->m_Items[7].fields.z = UVar6.fields.y;
      *(undefined1 *)&pUVar11->m_Items[0xd].fields.y = 1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((__this_01->fields)._dragging_k__BackingField != 0) {
      return;
    }
    *(undefined1 *)&((UnityEngine_Vector3_array *)__this_02)->m_Items[0xd].fields.y = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_78 = cam;
  pUStack_70 = pUVar11;
  pfStack_68 = unaff_R15;
  if (g_data_057b83d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057b83d1 = '\x01';
  }
  UStack_d8.x = 0.0;
  UStack_d8.y = 0.0;
  if (*(char *)&((UnityEngine_Vector3_array *)__this_02)->m_Items[0xd].fields.y != '\0') {
    if (__this_01 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_051e0682:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((__this_01->fields)._dragging_k__BackingField == 0) {
      pIVar5 = (((UnityEngine_Vector3_array *)__this_02)->obj).klass;
      pMVar10 = pIVar5->vtable[9].method;
      cVar7 = (*pIVar5->vtable[9].methodPtr)(__this_02);
      if (cVar7 != '\0') {
        pUVar9 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this_02,pMVar10);
        UStack_d0 = (__this_01->fields)._position_k__BackingField.fields;
        uStack_c8 = 0;
        pMVar10 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_01,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                          (pUVar9,(UnityEngine_Vector2_o)UStack_d0,(UnityEngine_Camera_o *)pMVar10,
                           (UnityEngine_Vector2_o *)&UStack_d8,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this_02,pMVar10);
          pUVar9 = *(UnityEngine_RectTransform_o **)
                    &((UnityEngine_Vector3_array *)__this_02)->m_Items[0].fields;
          if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_051e0682;
          fVar16 = UStack_d8.y;
          uVar4 = *(undefined8 *)&((UnityEngine_Vector3_array *)__this_02)->m_Items[6].fields.z;
          UStack_d0 = (UnityEngine_Vector2_Fields)CONCAT44(fVar16,UStack_d8.x - (float)uVar4);
          uStack_c8 = 0;
          uStack_90 = CONCAT44(fVar16,fVar16 - (float)((ulong)uVar4 >> 0x20));
          uStack_88 = 0;
          uStack_a0._0_4_ = ((UnityEngine_Vector3_array *)__this_02)->m_Items[7].fields.y;
          uStack_a0._4_4_ = ((UnityEngine_Vector3_array *)__this_02)->m_Items[7].fields.z;
          uStack_98 = 0;
          uStack_b0 = CONCAT44(uStack_a0._4_4_,uStack_a0._4_4_);
          uStack_a8 = 0;
          UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar9,(MethodInfo *)0x0);
          cVar7 = *(char *)&((UnityEngine_Vector3_array *)__this_02)->m_Items[0].fields.z;
          fVar16 = ((UnityEngine_Vector3_array *)__this_02)->m_Items[1].fields.x;
          fVar14 = UVar6.fields.x;
          if (g_data_057a694c == '\0') {
            auStack_c0._8_4_ = extraout_XMM0_Dc;
            auStack_c0._0_4_ = UVar6.fields.x;
            auStack_c0._4_4_ = UVar6.fields.y;
            auStack_c0._12_4_ = extraout_XMM0_Dd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
            fVar14 = (float)auStack_c0._0_4_;
          }
          fVar3 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar15 = fVar3;
          if (fVar16 != 0.0) {
            fVar16 = (float)*(undefined8 *)&((UnityEngine_Vector3_array *)__this_02)->m_Items[8].fields.z;
            fVar13 = (float)*(undefined8 *)&((UnityEngine_Vector3_array *)__this_02)->m_Items[9].fields.z;
            if (cVar7 != '\0') {
              fVar14 = ((float)uStack_a0 + UStack_d0.x) - fVar14;
              fVar1 = ((UnityEngine_Vector3_array *)__this_02)->m_Items[10].fields.z;
              fVar2 = ((UnityEngine_Vector3_array *)__this_02)->m_Items[0xb].fields.z;
              fVar15 = (fVar1 - fVar2) - ((fVar16 - fVar13) + fVar14);
              if ((-0.001 <= fVar15) &&
                 (fVar16 = (fVar1 + fVar2) - (fVar14 + fVar16 + fVar13), fVar15 = fVar3, 0.001 < fVar16)) {
                fVar15 = fVar16;
              }
            }
          }
          fVar16 = (float)uStack_a0 + UStack_d0.x + fVar15;
          if ((((UnityEngine_Vector3_array *)__this_02)->m_Items[1].fields.x == 1.4013e-45) &&
             ((fVar15 != 0.0 || (NAN(fVar15))))) {
            fVar14 = ((UnityEngine_Vector3_array *)__this_02)->m_Items[0xb].fields.z;
            fVar14 = fVar14 + fVar14;
            fVar16 = fVar16 - (1.0 - 1.0 / ((ABS(fVar15) * 0.55) / fVar14 + 1.0)) * fVar14 *
                              *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar15) * 4);
          }
          pIVar5 = (((UnityEngine_Vector3_array *)__this_02)->obj).klass;
          (*pIVar5->vtable[0x2f].methodPtr)(fVar16,__this_02,pIVar5->vtable[0x2f].method);
        }
      }
    }
  }
  return;
}


// UI.ChatScrollRect$$OnBeginDrag
// il2cpp: void UI_ChatScrollRect__OnBeginDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x43b95e0

void UI_ChatScrollRect__OnBeginDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *pUVar5;
  int iVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  char cVar9;
  bool_conflict bVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  MethodInfo *pMVar12;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  long *__this_01;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o **unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_Fields UStack_c0;
  UnityEngine_Vector2_Fields UStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  UnityEngine_Vector2_Fields UStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_60;
  UI_ChatScrollRect_o *pUStack_58;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o **ppUStack_50;
  
  *(undefined1 *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) = 1;
  __this_00 = eventData;
  __this_01 = (long *)__this;
  if (g_data_057b83d0 == '\0') {
    __this_01 = &TypeInfo_RectTransformUtility;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility,eventData,0);
    g_data_057b83d0 = '\x01';
  }
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((eventData->fields)._dragging_k__BackingField != 0) {
      return;
    }
    pMVar12 = (__this->klass->vtable)._9_IsActive.method;
    cVar9 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this);
    if (cVar9 == '\0') {
      return;
    }
    UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this,pMVar12);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    unaff_R15 = &(__this->fields).m_OnValueChanged;
    (__this->fields).m_OnValueChanged =
         (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    pUVar11 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this,pMVar12);
    UVar4 = (eventData->fields)._position_k__BackingField.fields;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = cam;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (pUVar11,(UnityEngine_Vector2_o)UVar4,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)unaff_R15,(MethodInfo *)0x0);
    pUVar11 = (__this->fields).m_Content;
    __this_01 = (long *)0x0;
    if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar11,(MethodInfo *)0x0);
      (__this->fields).m_PointerStartLocalCursor.fields = UVar4;
      *(undefined1 *)&(__this->fields).m_Velocity.fields.x = 1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((__this_00->fields)._dragging_k__BackingField != 0) {
      return;
    }
    *(undefined1 *)&(((UI_ChatScrollRect_o *)__this_01)->fields).m_Velocity.fields.x = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_60 = cam;
  pUStack_58 = __this;
  ppUStack_50 = unaff_R15;
  if (g_data_057b83d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057b83d1 = '\x01';
  }
  UStack_c0.x = 0.0;
  UStack_c0.y = 0.0;
  if (*(char *)&(((UI_ChatScrollRect_o *)__this_01)->fields).m_Velocity.fields.x != '\0') {
    if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_051e0682:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((__this_00->fields)._dragging_k__BackingField == 0) {
      pMVar12 = (((UI_ChatScrollRect_o *)__this_01)->klass->vtable)._9_IsActive.method;
      cVar9 = (*(((UI_ChatScrollRect_o *)__this_01)->klass->vtable)._9_IsActive.methodPtr)(__this_01);
      if (cVar9 != '\0') {
        pUVar11 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this_01,pMVar12);
        UStack_b8 = (__this_00->fields)._position_k__BackingField.fields;
        uStack_b0 = 0;
        pMVar12 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_00,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                           (pUVar11,(UnityEngine_Vector2_o)UStack_b8,(UnityEngine_Camera_o *)pMVar12,
                            (UnityEngine_Vector2_o *)&UStack_c0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this_01,pMVar12);
          pUVar11 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_Content;
          if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) goto label_051e0682;
          fVar14 = UStack_c0.y;
          pUVar5 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_OnValueChanged;
          UStack_b8 = (UnityEngine_Vector2_Fields)CONCAT44(fVar14,UStack_c0.x - SUB84(pUVar5,0));
          uStack_b0 = 0;
          uStack_78 = CONCAT44(fVar14,fVar14 - (float)((ulong)pUVar5 >> 0x20));
          uStack_70 = 0;
          UStack_88 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_PointerStartLocalCursor.fields;
          uStack_80 = 0;
          uStack_98 = CONCAT44(UStack_88.y,UStack_88.y);
          uStack_90 = 0;
          UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar11,(MethodInfo *)0x0);
          bVar10 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_Horizontal;
          iVar6 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_Vertical;
          fVar14 = UVar7.fields.x;
          if (g_data_057a694c == '\0') {
            auStack_a8._8_4_ = extraout_XMM0_Dc;
            auStack_a8._0_4_ = UVar7.fields.x;
            auStack_a8._4_4_ = UVar7.fields.y;
            auStack_a8._12_4_ = extraout_XMM0_Dd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
            fVar14 = (float)auStack_a8._0_4_;
          }
          fVar13 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar15 = fVar13;
          if (iVar6 != 0) {
            uVar3 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_ContentBounds.fields.m_Center.fields.y;
            fVar8 = SUB84((((UI_ChatScrollRect_o *)__this_01)->fields).m_ViewRect,0);
            if ((char)bVar10 != '\0') {
              fVar14 = (UStack_88.x + UStack_b8.x) - fVar14;
              fVar1 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_ContentBounds.fields.m_Extents.fields.y;
              fVar2 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_ViewBounds.fields.m_Center.fields.y;
              fVar15 = (fVar1 - fVar2) - ((fVar8 - (float)uVar3) + fVar14);
              if ((-0.001 <= fVar15) &&
                 (fVar14 = (fVar1 + fVar2) - (fVar14 + fVar8 + (float)uVar3), fVar15 = fVar13, 0.001 < fVar14)
                 ) {
                fVar15 = fVar14;
              }
            }
          }
          fVar14 = UStack_88.x + UStack_b8.x + fVar15;
          if (((((UI_ChatScrollRect_o *)__this_01)->fields).m_Vertical == 1) &&
             ((fVar15 != 0.0 || (NAN(fVar15))))) {
            fVar13 = (((UI_ChatScrollRect_o *)__this_01)->fields).m_ViewBounds.fields.m_Center.fields.y;
            fVar13 = fVar13 + fVar13;
            fVar14 = fVar14 - (1.0 - 1.0 / ((ABS(fVar15) * 0.55) / fVar13 + 1.0)) * fVar13 *
                              *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar15) * 4);
          }
          (*(((UI_ChatScrollRect_o *)__this_01)->klass->vtable)._47_SetContentAnchoredPosition.methodPtr)
                    (fVar14,__this_01,
                     (((UI_ChatScrollRect_o *)__this_01)->klass->vtable)._47_SetContentAnchoredPosition.method
                    );
        }
      }
    }
  }
  return;
}


// UI.ChatScrollRect$$OnEndDrag
// il2cpp: void UI_ChatScrollRect__OnEndDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x43b95f0

void UI_ChatScrollRect__OnEndDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  undefined8 uVar5;
  UnityEngine_Object_o *x;
  Il2CppClass *pIVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_o UVar8;
  long lVar9;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  UnityEngine_RectTransform_o *pUVar12;
  MethodInfo *pMVar13;
  UnityEngine_Vector3_array *pUVar14;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *data;
  UnityEngine_Vector3_array *pUVar15;
  UnityEngine_UI_ScrollRect_o *__this_02;
  long *__this_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector2_Fields UStack_98;
  UnityEngine_Vector2_Fields UStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  UnityEngine_Vector3_array *pUStack_58;
  UnityEngine_UI_ScrollRect_o *pUStack_50;
  UnityEngine_Vector3_array *pUStack_48;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_40;
  UI_ChatScrollRect_o *pUStack_38;
  UnityEngine_Vector3_array *pUStack_30;
  UnityEngine_Vector3_array *pUStack_28;
  
  if (g_data_057ae399 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae399 = '\x01';
  }
  UnityEngine_UI_ScrollRect__OnEndDrag((UnityEngine_UI_ScrollRect_o *)__this,eventData,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) = 0;
  pUVar14 = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar15 = (__this->fields).m_Corners;
  if (pUVar15 != (UnityEngine_Vector3_array *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pUVar15,(uint)*(byte *)&(__this->fields).m_VerticalScrollbarRect,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_30 = (UnityEngine_Vector3_array *)__this;
  pUStack_28 = pUVar14;
  if (g_data_057ae39a == '\0') {
    pUStack_38 = (UI_ChatScrollRect_o *)0x43b96b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae39a = '\x01';
  }
  if (*(char *)((long)&pUVar15->m_Items[0x16].fields.z + 1) == '\0') {
    return;
  }
  x = *(UnityEngine_Object_o **)&pUVar15->m_Items[0x17].fields.y;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_38 = (UI_ChatScrollRect_o *)0x43b96df;
    il2cpp_runtime_helper_02337ed0();
  }
  data = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pUStack_38 = (UI_ChatScrollRect_o *)0x43b96eb;
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    __this_02 = *(UnityEngine_UI_ScrollRect_o **)&pUVar15->m_Items[0x17].fields.y;
    if (__this_02 == (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUStack_38 = (UI_ChatScrollRect_o *)0x43b9724;
      il2cpp_runtime_helper_022b2c90();
      __this_03 = (long *)__this_02;
      pUStack_48 = pUVar15;
      pUStack_40 = __this_01;
      pUStack_38 = (UI_ChatScrollRect_o *)x;
      if (g_data_057ae39b == '\0') {
        __this_03 = &TypeInfo_Object;
        pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b9750;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae39b = '\x01';
      }
      if (*(char *)&(__this_02->fields).m_VerticalScrollbarRect == '\0') {
        return;
      }
      pUVar14 = (UnityEngine_Vector3_array *)0x0;
      if (data != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        UVar4 = (data->fields)._scrollDelta_k__BackingField.fields;
        UVar7.y = UVar4.y * 1.5;
        UVar7.x = UVar4.x * 1.5;
        (data->fields)._scrollDelta_k__BackingField.fields = UVar7;
        pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b9791;
        UnityEngine_UI_ScrollRect__OnScroll(__this_02,data,(MethodInfo *)0x0);
        pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b9798;
        fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&__this_02[1].monitor = fVar19;
        pUVar14 = (UnityEngine_Vector3_array *)__this_02[1].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b97c0;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b97cc;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          __this_03 = (long *)0x0;
          if (__this_02[1].klass == (UnityEngine_UI_ScrollRect_c *)0x0) goto label_043b982e;
          pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b97e3;
          UI_ChatPanel__UpdateChatInteractionState((UI_ChatPanel_o *)__this_02[1].klass,(MethodInfo *)0x0);
        }
        pUVar14 = (__this_02->fields).m_Corners;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b97fb;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b9807;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        pUVar15 = (__this_02->fields).m_Corners;
        __this_03 = (long *)0x0;
        if (pUVar15 != (UnityEngine_Vector3_array *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar15,1,(MethodInfo *)0x0);
          return;
        }
      }
label_043b982e:
      pUStack_50 = (UnityEngine_UI_ScrollRect_o *)0x43b9833;
      uStack_60 = il2cpp_runtime_helper_022b2c90();
      pUStack_58 = pUVar14;
      pUStack_50 = __this_02;
      if (g_data_057b83ca == '\0') {
        uStack_68 = 0x51de61c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ScrollRectEvent,0);
        uStack_68 = 0x51de628;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057b83ca = '\x01';
      }
      *(undefined2 *)&(((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_Horizontal = 0x101;
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_Vertical = 1;
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_MovementType = 0x3dcccccd;
      *(undefined1 *)&(((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_Elasticity = 1;
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_Inertia = 0x3e0a3d71;
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_DecelerationRate = 1.0;
      uStack_68 = 0x51de664;
      __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ScrollRectEvent);
      if (g_data_057b83de == '\0') {
        uStack_68 = 0x51de67c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_UnityEngine_Vector2);
        g_data_057b83de = '\x01';
      }
      uStack_68 = 0x51de695;
      UnityEngine_Events_UnityEvent_Vector2____ctor(__this_00,MethodInfo_UnityEvent_1_UnityEngine_Vector2);
      *(UnityEngine_Events_UnityEvent_Vector2__o **)
       &(((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_HorizontalScrollbarSpacing = __this_00;
      uStack_68 = 0x51de6a5;
      il2cpp_runtime_helper_022b4080(&(((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_HorizontalScrollbarSpacing,
                         __this_00);
      if (g_data_057a694c == '\0') {
        uStack_68 = 0x51de6ba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      lVar9 = TypeInfo_Vector2;
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_OnValueChanged =
           (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_PointerStartLocalCursor.fields =
           **(UnityEngine_Vector2_Fields **)(lVar9 + 0xb8);
      *(undefined8 *)&(((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_Velocity.fields.y =
           **(undefined8 **)(lVar9 + 0xb8);
      uStack_68 = 0x51de70c;
      pUVar12 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,4);
      (((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_HorizontalScrollbarRect = pUVar12;
      uStack_68 = 0x51de722;
      il2cpp_runtime_helper_022b4080(&(((UnityEngine_UI_ScrollRect_o *)__this_03)->fields).m_HorizontalScrollbarRect);
      UnityEngine_EventSystems_UIBehaviour___ctor
                ((UnityEngine_EventSystems_UIBehaviour_o *)__this_03,(MethodInfo *)0x0);
      return;
    }
    pUStack_38 = (UI_ChatScrollRect_o *)0x43b9707;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,1,(MethodInfo *)0x0);
  }
  pUStack_38 = (UI_ChatScrollRect_o *)pUStack_30;
  pUStack_30 = pUStack_28;
  if (g_data_057b83d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility,__this_01,0);
    g_data_057b83d1 = '\x01';
  }
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  if (*(char *)&pUVar15->m_Items[0xd].fields.y != '\0') {
    if (__this_01 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_051e0682:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((__this_01->fields)._dragging_k__BackingField == 0) {
      pIVar6 = (pUVar15->obj).klass;
      pMVar13 = pIVar6->vtable[9].method;
      cVar10 = (*pIVar6->vtable[9].methodPtr)(pUVar15);
      if (cVar10 != '\0') {
        pUVar12 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)pUVar15,pMVar13);
        UStack_90 = (__this_01->fields)._position_k__BackingField.fields;
        uStack_88 = 0;
        pMVar13 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_01,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar11 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                           (pUVar12,(UnityEngine_Vector2_o)UStack_90,(UnityEngine_Camera_o *)pMVar13,
                            (UnityEngine_Vector2_o *)&UStack_98,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)pUVar15,pMVar13);
          pUVar12 = *(UnityEngine_RectTransform_o **)&pUVar15->m_Items[0].fields;
          if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) goto label_051e0682;
          fVar19 = UStack_98.y;
          uVar5 = *(undefined8 *)&pUVar15->m_Items[6].fields.z;
          UStack_90 = (UnityEngine_Vector2_Fields)CONCAT44(fVar19,UStack_98.x - (float)uVar5);
          uStack_88 = 0;
          pUStack_50 = (UnityEngine_UI_ScrollRect_o *)CONCAT44(fVar19,fVar19 - (float)((ulong)uVar5 >> 0x20));
          pUStack_48 = (UnityEngine_Vector3_array *)0x0;
          uStack_60._0_4_ = pUVar15->m_Items[7].fields.y;
          uStack_60._4_4_ = pUVar15->m_Items[7].fields.z;
          pUStack_58 = (UnityEngine_Vector3_array *)0x0;
          uStack_70 = CONCAT44(uStack_60._4_4_,uStack_60._4_4_);
          uStack_68 = 0;
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar12,(MethodInfo *)0x0);
          cVar10 = *(char *)&pUVar15->m_Items[0].fields.z;
          fVar19 = pUVar15->m_Items[1].fields.x;
          fVar17 = UVar8.fields.x;
          if (g_data_057a694c == '\0') {
            auStack_80._8_4_ = extraout_XMM0_Dc;
            auStack_80._0_4_ = UVar8.fields.x;
            auStack_80._4_4_ = UVar8.fields.y;
            auStack_80._12_4_ = extraout_XMM0_Dd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
            fVar17 = (float)auStack_80._0_4_;
          }
          fVar3 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar18 = fVar3;
          if (fVar19 != 0.0) {
            fVar19 = (float)*(undefined8 *)&pUVar15->m_Items[8].fields.z;
            fVar16 = (float)*(undefined8 *)&pUVar15->m_Items[9].fields.z;
            if (cVar10 != '\0') {
              fVar17 = ((float)uStack_60 + UStack_90.x) - fVar17;
              fVar1 = pUVar15->m_Items[10].fields.z;
              fVar2 = pUVar15->m_Items[0xb].fields.z;
              fVar18 = (fVar1 - fVar2) - ((fVar19 - fVar16) + fVar17);
              if ((-0.001 <= fVar18) &&
                 (fVar19 = (fVar1 + fVar2) - (fVar17 + fVar19 + fVar16), fVar18 = fVar3, 0.001 < fVar19)) {
                fVar18 = fVar19;
              }
            }
          }
          fVar19 = (float)uStack_60 + UStack_90.x + fVar18;
          if ((pUVar15->m_Items[1].fields.x == 1.4013e-45) && ((fVar18 != 0.0 || (NAN(fVar18))))) {
            fVar17 = pUVar15->m_Items[0xb].fields.z;
            fVar17 = fVar17 + fVar17;
            fVar19 = fVar19 - (1.0 - 1.0 / ((ABS(fVar18) * 0.55) / fVar17 + 1.0)) * fVar17 *
                              *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar18) * 4);
          }
          pIVar6 = (pUVar15->obj).klass;
          (*pIVar6->vtable[0x2f].methodPtr)(fVar19,pUVar15,pIVar6->vtable[0x2f].method);
        }
      }
    }
  }
  return;
}


// UI.ChatScrollRect$$OnDrag
// il2cpp: void UI_ChatScrollRect__OnDrag (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x43b9690

void UI_ChatScrollRect__OnDrag
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *pUVar5;
  int iVar6;
  UnityEngine_Vector3_array *x;
  UI_ChatPanel_o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_o UVar8;
  float fVar9;
  long lVar10;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_02;
  undefined8 uVar13;
  UnityEngine_RectTransform_o *pUVar14;
  MethodInfo *pMVar15;
  UnityEngine_Object_o *x_00;
  UnityEngine_EventSystems_PointerEventData_o *data;
  UnityEngine_Vector3_array *__this_03;
  long *__this_04;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector2_Fields UStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  UnityEngine_Vector2_Fields UStack_48;
  UnityEngine_Object_o *pUStack_40;
  UnityEngine_Vector3_array *pUStack_38;
  UI_ChatScrollRect_o *pUStack_30;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_28;
  UnityEngine_Vector3_array *pUStack_20;
  
  if (g_data_057ae39a == '\0') {
    pUStack_20 = (UnityEngine_Vector3_array *)0x43b96b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae39a = '\x01';
  }
  if (*(char *)((long)&(__this->fields).m_VerticalScrollbarRect + 1) == '\0') {
    return;
  }
  x = (__this->fields).m_Corners;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_20 = (UnityEngine_Vector3_array *)0x43b96df;
    il2cpp_runtime_helper_02337ed0();
  }
  data = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pUStack_20 = (UnityEngine_Vector3_array *)0x43b96eb;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    __this_03 = (__this->fields).m_Corners;
    if (__this_03 == (UnityEngine_Vector3_array *)0x0) {
      pUStack_20 = (UnityEngine_Vector3_array *)0x43b9724;
      il2cpp_runtime_helper_022b2c90();
      __this_04 = (long *)__this_03;
      pUStack_30 = __this;
      pUStack_28 = eventData;
      pUStack_20 = x;
      if (g_data_057ae39b == '\0') {
        __this_04 = &TypeInfo_Object;
        pUStack_38 = (UnityEngine_Vector3_array *)0x43b9750;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae39b = '\x01';
      }
      if (*(char *)&__this_03->m_Items[0x16].fields.z == '\0') {
        return;
      }
      x_00 = (UnityEngine_Object_o *)0x0;
      if (data != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        UVar4 = (data->fields)._scrollDelta_k__BackingField.fields;
        UVar7.y = UVar4.y * 1.5;
        UVar7.x = UVar4.x * 1.5;
        (data->fields)._scrollDelta_k__BackingField.fields = UVar7;
        pUStack_38 = (UnityEngine_Vector3_array *)0x43b9791;
        UnityEngine_UI_ScrollRect__OnScroll((UnityEngine_UI_ScrollRect_o *)__this_03,data,(MethodInfo *)0x0);
        pUStack_38 = (UnityEngine_Vector3_array *)0x43b9798;
        fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        __this_03->m_Items[0x18].fields.z = fVar17;
        x_00 = *(UnityEngine_Object_o **)&__this_03->m_Items[0x18].fields;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_38 = (UnityEngine_Vector3_array *)0x43b97c0;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_38 = (UnityEngine_Vector3_array *)0x43b97cc;
        bVar12 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          __this_00 = *(UI_ChatPanel_o **)&__this_03->m_Items[0x18].fields;
          __this_04 = (long *)0x0;
          if (__this_00 == (UI_ChatPanel_o *)0x0) goto label_043b982e;
          pUStack_38 = (UnityEngine_Vector3_array *)0x43b97e3;
          UI_ChatPanel__UpdateChatInteractionState(__this_00,(MethodInfo *)0x0);
        }
        x_00 = *(UnityEngine_Object_o **)&__this_03->m_Items[0x17].fields.y;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_38 = (UnityEngine_Vector3_array *)0x43b97fb;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_38 = (UnityEngine_Vector3_array *)0x43b9807;
        bVar12 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          return;
        }
        __this_01 = *(UnityEngine_Behaviour_o **)&__this_03->m_Items[0x17].fields.y;
        __this_04 = (long *)0x0;
        if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled(__this_01,1,(MethodInfo *)0x0);
          return;
        }
      }
label_043b982e:
      pUStack_38 = (UnityEngine_Vector3_array *)0x43b9833;
      UStack_48 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
      pUStack_40 = x_00;
      pUStack_38 = __this_03;
      if (g_data_057b83ca == '\0') {
        uStack_50 = 0x51de61c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ScrollRectEvent,0);
        uStack_50 = 0x51de628;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057b83ca = '\x01';
      }
      *(undefined2 *)&((UnityEngine_Vector3_array *)__this_04)->m_Items[0].fields.z = 0x101;
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[1].fields.x = 1.4013e-45;
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[1].fields.y = 0.1;
      *(undefined1 *)&((UnityEngine_Vector3_array *)__this_04)->m_Items[1].fields.z = 1;
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[2].fields.x = 0.135;
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[2].fields.y = 1.0;
      uStack_50 = 0x51de664;
      __this_02 = (UnityEngine_Events_UnityEvent_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ScrollRectEvent);
      if (g_data_057b83de == '\0') {
        uStack_50 = 0x51de67c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_UnityEngine_Vector2);
        g_data_057b83de = '\x01';
      }
      uStack_50 = 0x51de695;
      UnityEngine_Events_UnityEvent_Vector2____ctor(__this_02,MethodInfo_UnityEvent_1_UnityEngine_Vector2);
      *(UnityEngine_Events_UnityEvent_Vector2__o **)
       &((UnityEngine_Vector3_array *)__this_04)->m_Items[6].fields = __this_02;
      uStack_50 = 0x51de6a5;
      il2cpp_runtime_helper_022b4080(((UnityEngine_Vector3_array *)__this_04)->m_Items + 6,__this_02);
      if (g_data_057a694c == '\0') {
        uStack_50 = 0x51de6ba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      lVar10 = TypeInfo_Vector2;
      *(undefined8 *)&((UnityEngine_Vector3_array *)__this_04)->m_Items[6].fields.z =
           **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
      uVar13 = **(undefined8 **)(lVar10 + 0xb8);
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[7].fields.y = (float)(int)uVar13;
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[7].fields.z = (float)(int)((ulong)uVar13 >> 0x20);
      *(undefined8 *)&((UnityEngine_Vector3_array *)__this_04)->m_Items[0xd].fields.z =
           **(undefined8 **)(lVar10 + 0xb8);
      uStack_50 = 0x51de70c;
      uVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,4);
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[0x16].fields.x = (float)(int)uVar13;
      ((UnityEngine_Vector3_array *)__this_04)->m_Items[0x16].fields.y = (float)(int)((ulong)uVar13 >> 0x20);
      uStack_50 = 0x51de722;
      il2cpp_runtime_helper_022b4080(((UnityEngine_Vector3_array *)__this_04)->m_Items + 0x16);
      UnityEngine_EventSystems_UIBehaviour___ctor
                ((UnityEngine_EventSystems_UIBehaviour_o *)__this_04,(MethodInfo *)0x0);
      return;
    }
    pUStack_20 = (UnityEngine_Vector3_array *)0x43b9707;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,1,(MethodInfo *)0x0);
  }
  if (g_data_057b83d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility,eventData,0);
    g_data_057b83d1 = '\x01';
  }
  UStack_80.x = 0.0;
  UStack_80.y = 0.0;
  if (*(char *)&(__this->fields).m_Velocity.fields.x != '\0') {
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_051e0682:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((eventData->fields)._dragging_k__BackingField == 0) {
      pMVar15 = (__this->klass->vtable)._9_IsActive.method;
      cVar11 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this);
      if (cVar11 != '\0') {
        pUVar14 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this,pMVar15);
        UStack_78 = (eventData->fields)._position_k__BackingField.fields;
        uStack_70 = 0;
        pMVar15 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar12 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                           (pUVar14,(UnityEngine_Vector2_o)UStack_78,(UnityEngine_Camera_o *)pMVar15,
                            (UnityEngine_Vector2_o *)&UStack_80,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this,pMVar15);
          pUVar14 = (__this->fields).m_Content;
          if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_051e0682;
          fVar17 = UStack_80.y;
          pUVar5 = (__this->fields).m_OnValueChanged;
          UStack_78 = (UnityEngine_Vector2_Fields)CONCAT44(fVar17,UStack_80.x - SUB84(pUVar5,0));
          uStack_70 = 0;
          pUStack_38 = (UnityEngine_Vector3_array *)CONCAT44(fVar17,fVar17 - (float)((ulong)pUVar5 >> 0x20));
          pUStack_30 = (UI_ChatScrollRect_o *)0x0;
          UStack_48 = (__this->fields).m_PointerStartLocalCursor.fields;
          pUStack_40 = (UnityEngine_Object_o *)0x0;
          uStack_58 = CONCAT44(UStack_48.y,UStack_48.y);
          uStack_50 = 0;
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar14,(MethodInfo *)0x0);
          bVar12 = (__this->fields).m_Horizontal;
          iVar6 = (__this->fields).m_Vertical;
          fVar17 = UVar8.fields.x;
          if (g_data_057a694c == '\0') {
            auStack_68._8_4_ = extraout_XMM0_Dc;
            auStack_68._0_4_ = UVar8.fields.x;
            auStack_68._4_4_ = UVar8.fields.y;
            auStack_68._12_4_ = extraout_XMM0_Dd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
            fVar17 = (float)auStack_68._0_4_;
          }
          fVar16 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar18 = fVar16;
          if (iVar6 != 0) {
            uVar3 = (__this->fields).m_ContentBounds.fields.m_Center.fields.y;
            fVar9 = SUB84((__this->fields).m_ViewRect,0);
            if ((char)bVar12 != '\0') {
              fVar17 = (UStack_48.x + UStack_78.x) - fVar17;
              fVar1 = (__this->fields).m_ContentBounds.fields.m_Extents.fields.y;
              fVar2 = (__this->fields).m_ViewBounds.fields.m_Center.fields.y;
              fVar18 = (fVar1 - fVar2) - ((fVar9 - (float)uVar3) + fVar17);
              if ((-0.001 <= fVar18) &&
                 (fVar17 = (fVar1 + fVar2) - (fVar17 + fVar9 + (float)uVar3), fVar18 = fVar16, 0.001 < fVar17)
                 ) {
                fVar18 = fVar17;
              }
            }
          }
          fVar17 = UStack_48.x + UStack_78.x + fVar18;
          if (((__this->fields).m_Vertical == 1) && ((fVar18 != 0.0 || (NAN(fVar18))))) {
            fVar16 = (__this->fields).m_ViewBounds.fields.m_Center.fields.y;
            fVar16 = fVar16 + fVar16;
            fVar17 = fVar17 - (1.0 - 1.0 / ((ABS(fVar18) * 0.55) / fVar16 + 1.0)) * fVar16 *
                              *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar18) * 4);
          }
          (*(__this->klass->vtable)._47_SetContentAnchoredPosition.methodPtr)
                    (fVar17,__this,(__this->klass->vtable)._47_SetContentAnchoredPosition.method);
        }
      }
    }
  }
  return;
}


// UI.ChatScrollRect$$OnScroll
// il2cpp: void UI_ChatScrollRect__OnScroll (UI_ChatScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* data, const MethodInfo* method);
// 0x43b9730

void UI_ChatScrollRect__OnScroll
               (UI_ChatScrollRect_o *__this,UnityEngine_EventSystems_PointerEventData_o *data,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Object_o *x;
  UI_ChatPanel_o *__this_00;
  UnityEngine_Vector3_array *pUVar2;
  long lVar3;
  bool_conflict bVar4;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  UnityEngine_RectTransform_o *pUVar5;
  UI_ChatScrollRect_o *__this_02;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  
  __this_02 = __this;
  if (g_data_057ae39b == '\0') {
    __this_02 = (UI_ChatScrollRect_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae39b = '\x01';
  }
  if (*(char *)&(__this->fields).m_VerticalScrollbarRect == '\0') {
    return;
  }
  if (data != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UVar1 = (data->fields)._scrollDelta_k__BackingField.fields;
    UVar7.x = UVar1.x * 1.5;
    UVar7.y = UVar1.y * 1.5;
    (data->fields)._scrollDelta_k__BackingField.fields = UVar7;
    UnityEngine_UI_ScrollRect__OnScroll((UnityEngine_UI_ScrollRect_o *)__this,data,(MethodInfo *)0x0);
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    *(float *)&(__this->fields).handleImage = fVar6;
    x = *(UnityEngine_Object_o **)&(__this->fields).isMouseOver;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = *(UI_ChatPanel_o **)&(__this->fields).isMouseOver;
      __this_02 = (UI_ChatScrollRect_o *)0x0;
      if (__this_00 == (UI_ChatPanel_o *)0x0) goto label_043b982e;
      UI_ChatPanel__UpdateChatInteractionState(__this_00,(MethodInfo *)0x0);
    }
    pUVar2 = (__this->fields).m_Corners;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pUVar2 = (__this->fields).m_Corners;
    __this_02 = (UI_ChatScrollRect_o *)0x0;
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
label_043b982e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057b83ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScrollRectEvent,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057b83ca = '\x01';
  }
  *(undefined2 *)&(__this_02->fields).m_Horizontal = 0x101;
  (__this_02->fields).m_Vertical = 1;
  (__this_02->fields).m_MovementType = 0x3dcccccd;
  *(undefined1 *)&(__this_02->fields).m_Elasticity = 1;
  (__this_02->fields).m_Inertia = 0x3e0a3d71;
  (__this_02->fields).m_DecelerationRate = 1.0;
  __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ScrollRectEvent);
  if (g_data_057b83de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_UnityEngine_Vector2);
    g_data_057b83de = '\x01';
  }
  UnityEngine_Events_UnityEvent_Vector2____ctor(__this_01,MethodInfo_UnityEvent_1_UnityEngine_Vector2);
  *(UnityEngine_Events_UnityEvent_Vector2__o **)&(__this_02->fields).m_HorizontalScrollbarSpacing = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_HorizontalScrollbarSpacing,__this_01);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  lVar3 = TypeInfo_Vector2;
  (__this_02->fields).m_OnValueChanged =
       (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  (__this_02->fields).m_PointerStartLocalCursor.fields = **(UnityEngine_Vector2_Fields **)(lVar3 + 0xb8);
  *(undefined8 *)&(__this_02->fields).m_Velocity.fields.y = **(undefined8 **)(lVar3 + 0xb8);
  pUVar5 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,4);
  (__this_02->fields).m_HorizontalScrollbarRect = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_HorizontalScrollbarRect);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.ChatScrollRect$$.ctor
// il2cpp: void UI_ChatScrollRect___ctor (UI_ChatScrollRect_o* __this, const MethodInfo* method);
// 0x43b9840

void UI_ChatScrollRect___ctor(UI_ChatScrollRect_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  
  if (g_data_057b83ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScrollRectEvent,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057b83ca = '\x01';
  }
  *(undefined2 *)&(__this->fields).m_Horizontal = 0x101;
  (__this->fields).m_Vertical = 1;
  (__this->fields).m_MovementType = 0x3dcccccd;
  *(undefined1 *)&(__this->fields).m_Elasticity = 1;
  (__this->fields).m_Inertia = 0x3e0a3d71;
  (__this->fields).m_DecelerationRate = 1.0;
  __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ScrollRectEvent);
  if (g_data_057b83de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_UnityEngine_Vector2);
    g_data_057b83de = '\x01';
  }
  UnityEngine_Events_UnityEvent_Vector2____ctor(__this_00,MethodInfo_UnityEvent_1_UnityEngine_Vector2);
  *(UnityEngine_Events_UnityEvent_Vector2__o **)&(__this->fields).m_HorizontalScrollbarSpacing = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_HorizontalScrollbarSpacing,__this_00);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  lVar1 = TypeInfo_Vector2;
  (__this->fields).m_OnValueChanged =
       (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  (__this->fields).m_PointerStartLocalCursor.fields = **(UnityEngine_Vector2_Fields **)(lVar1 + 0xb8);
  *(undefined8 *)&(__this->fields).m_Velocity.fields.y = **(undefined8 **)(lVar1 + 0xb8);
  pUVar2 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,4);
  (__this->fields).m_HorizontalScrollbarRect = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_HorizontalScrollbarRect);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


