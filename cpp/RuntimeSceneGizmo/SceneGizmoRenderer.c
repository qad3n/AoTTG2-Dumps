// Type: RuntimeSceneGizmo.SceneGizmoRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs  [CHANGED since prior version]
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoRenderer$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e2a0

UnityEngine_Transform_o *
RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).m_referenceTransform;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x3d8e2b0

void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields).m_referenceTransform = value;
  il2cpp_runtime_glue(&(__this->fields).m_referenceTransform);
  __this_00 = (__this->fields).controller;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this_00,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$get_OnComponentClicked
// il2cpp: RuntimeSceneGizmo_ComponentClickedEvent_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e2f0

RuntimeSceneGizmo_ComponentClickedEvent_o *
RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).m_onComponentClicked;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Awake (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e300

void RuntimeSceneGizmo_SceneGizmoRenderer__Awake
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar4;
  
  if (DAT_0570270e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SceneGizmoController_Instantiate_SceneGizmoContr);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_0570270e = '\x01';
  }
  pUVar1 = (__this->fields).imageHolder;
  if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    pUVar2 = TypeInfo_RectTransform;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields).imageHolderTR = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar3->klass != TypeInfo_RectTransform) ||
            ((__this->fields).imageHolderTR = pUVar3, pUVar3->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar3);
    }
    il2cpp_runtime_glue(&(__this->fields).imageHolderTR,pUVar3);
    pRVar4 = (__this->fields).controller;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pRVar4 = (RuntimeSceneGizmo_SceneGizmoController_o *)
             UnityEngine_Object__Instantiate<object>((Il2CppObject *)pRVar4,MethodInfo_SceneGizmoController_Instantiate_SceneGizmoContr);
    (__this->fields).controller = pRVar4;
    il2cpp_runtime_glue(&(__this->fields).controller,pRVar4);
    pRVar4 = (__this->fields).controller;
    if ((pRVar4 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (pUVar1 = (__this->fields).imageHolder, pUVar1 != (UnityEngine_UI_RawImage_o *)0x0)) {
      UnityEngine_UI_RawImage__set_texture
                (pUVar1,(UnityEngine_Texture_o *)(pRVar4->fields)._TargetTexture_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Start
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Start (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e400

void RuntimeSceneGizmo_SceneGizmoRenderer__Start
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (DAT_0570270f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570270f = '\x01';
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    cVar2 = (*(pUVar1->klass->vtable)._0_Equals.methodPtr)
                      (pUVar1,0,(pUVar1->klass->vtable)._0_Equals.method);
    if (cVar2 != '\0') {
      return;
    }
    __this_00 = (__this->fields).controller;
    if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
                (__this_00,(__this->fields).m_referenceTransform,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e4a0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_05702710 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702710 = '\x01';
  }
  pRVar1 = (__this->fields).controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pRVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pRVar1 = (__this->fields).controller;
  if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    cVar2 = (*(pRVar1->klass->vtable)._0_Equals.methodPtr)
                      (pRVar1,0,(pRVar1->klass->vtable)._0_Equals.method);
    if (cVar2 != '\0') {
      return;
    }
    pRVar1 = (__this->fields).controller;
    if ((pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pRVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDisable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e550

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_05702711 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702711 = '\x01';
  }
  pRVar1 = (__this->fields).controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pRVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pRVar1 = (__this->fields).controller;
  if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    cVar2 = (*(pRVar1->klass->vtable)._0_Equals.methodPtr)
                      (pRVar1,0,(pRVar1->klass->vtable)._0_Equals.method);
    if (cVar2 != '\0') {
      return;
    }
    pRVar1 = (__this->fields).controller;
    if ((pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pRVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Update
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Update (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e600

void RuntimeSceneGizmo_SceneGizmoRenderer__Update
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_01;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector2_Fields local_50;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  __this_00 = (__this->fields).hoveringPointer;
  if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_01 = (__this->fields).controller;
  if (DAT_05702713 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_05702713 = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  pUVar1 = (__this->fields).imageHolderTR;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    local_38._8_4_ = in_XMM1_Dc;
    local_38._0_8_ = UVar3.fields._8_8_;
    local_38._12_4_ = in_XMM1_Dd;
    pUVar1 = (__this->fields).imageHolderTR;
    local_48 = (__this_00->fields)._position_k__BackingField.fields;
    uStack_40 = 0;
    method_00 = (MethodInfo *)
                UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                          (__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (pUVar1,(UnityEngine_Vector2_o)local_48,(UnityEngine_Camera_o *)method_00,
               (UnityEngine_Vector2_o *)&local_50,(MethodInfo *)0x0);
    if (__this_01 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      auVar2._8_8_ = 0;
      auVar2._0_4_ = local_50.x;
      auVar2._4_4_ = local_50.y;
      auVar2 = divps(auVar2,local_38);
      normalizedPosition.fields.x = auVar2._0_4_ + 1.0;
      normalizedPosition.fields.y = auVar2._4_4_ + 1.0;
      normalizedPosition.fields.z = 0.0;
      RuntimeSceneGizmo_SceneGizmoController__OnPointerHover(__this_01,normalizedPosition,method_00)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerClick
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3d8e7a0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  RuntimeSceneGizmo_ComponentClickedEvent_o *__this_01;
  int32_t arg0;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector2_Fields local_50;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  if (DAT_05702712 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Invoke);
    DAT_05702712 = '\x01';
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(eventData->fields)._useDragThreshold_k__BackingField + 1) != '\0') {
      return;
    }
    __this_00 = (__this->fields).controller;
    if (DAT_05702713 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
      DAT_05702713 = '\x01';
    }
    local_50.x = 0.0;
    local_50.y = 0.0;
    pUVar1 = (__this->fields).imageHolderTR;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      local_38._8_4_ = in_XMM1_Dc;
      local_38._0_8_ = UVar3.fields._8_8_;
      local_38._12_4_ = in_XMM1_Dd;
      pUVar1 = (__this->fields).imageHolderTR;
      local_48 = (eventData->fields)._position_k__BackingField.fields;
      uStack_40 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                            (eventData,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar1,(UnityEngine_Vector2_o)local_48,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&local_50,(MethodInfo *)0x0);
      if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
        auVar2._8_8_ = 0;
        auVar2._0_4_ = local_50.x;
        auVar2._4_4_ = local_50.y;
        auVar2 = divps(auVar2,local_38);
        normalizedPosition.fields.x = auVar2._0_4_ + 1.0;
        normalizedPosition.fields.y = auVar2._4_4_ + 1.0;
        normalizedPosition.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         (__this_00,normalizedPosition,method_00);
        if (arg0 != -1) {
          __this_01 = (__this->fields).m_onComponentClicked;
          if (__this_01 == (RuntimeSceneGizmo_ComponentClickedEvent_o *)0x0) goto LAB_03d8e8bf;
          UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
LAB_03d8e8bf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDrag
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3d8e8d0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$GetNormalizedPointerPosition
// il2cpp: UnityEngine_Vector3_o RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3d8e6e0

UnityEngine_Vector3_o
RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
          UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Camera_o *cam;
  undefined1 auVar2 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector2_Fields UStack_40;
  UnityEngine_Vector2_Fields UStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  
  if (DAT_05702713 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_05702713 = '\x01';
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  pUVar1 = (__this->fields).imageHolderTR;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    auStack_28._8_4_ = in_XMM1_Dc;
    auStack_28._0_8_ = UVar4.fields._8_8_;
    auStack_28._12_4_ = in_XMM1_Dd;
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar1 = (__this->fields).imageHolderTR;
      UStack_38 = (eventData->fields)._position_k__BackingField.fields;
      uStack_30 = 0;
      cam = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                      (eventData,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar1,(UnityEngine_Vector2_o)UStack_38,cam,(UnityEngine_Vector2_o *)&UStack_40,
                 (MethodInfo *)0x0);
      auVar2._8_8_ = 0;
      auVar2._0_4_ = UStack_40.x;
      auVar2._4_4_ = UStack_40.y;
      auVar2 = divps(auVar2,auStack_28);
      UVar3.fields.x = auVar2._0_4_ + 1.0;
      UVar3.fields.y = auVar2._4_4_ + 1.0;
      UVar3.fields.z = 0.0;
      return (UnityEngine_Vector3_o)UVar3.fields;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerEnter
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3d8e8e0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((char)(__this->fields).highlightHoveredComponents != '\0') {
    (__this->fields).hoveringPointer = eventData;
    il2cpp_runtime_glue(&(__this->fields).hoveringPointer);
    return;
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerExit
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3d8e900

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o **ppUVar1;
  
  if ((__this->fields).hoveringPointer == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).controller;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    ppUVar1 = &(__this->fields).hoveringPointer;
    RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
              (__this_00,(UnityEngine_Vector3_o)ZEXT812(0xc1200000c1200000),(MethodInfo *)eventData)
    ;
    *ppUVar1 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    il2cpp_runtime_glue(ppUVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer___ctor (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x3d8e940

void RuntimeSceneGizmo_SceneGizmoRenderer___ctor
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).highlightHoveredComponents = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


