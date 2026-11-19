// Type: RuntimeSceneGizmo.SceneGizmoRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoRenderer$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d500

UnityEngine_Transform_o *
RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).m_referenceTransform;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x586d510

void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields).m_referenceTransform = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_referenceTransform);
  __this_00 = (__this->fields).controller;
  if (__this_00 == (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    ThrowNullReferenceException();
  }
  RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this_00,value,method_00);
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$get_OnComponentClicked
// il2cpp: RuntimeSceneGizmo_ComponentClickedEvent_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d550

RuntimeSceneGizmo_ComponentClickedEvent_o *
RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).m_onComponentClicked;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Awake (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d560
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586d5d5: lea rdi, [rbx + 0x28]
// asm:   0x586d5d9: jmp 0x586d5e7

void RuntimeSceneGizmo_SceneGizmoRenderer__Awake
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar4;
  
  if (Il2CppMethodInitialized_07545150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_Instantiate_SceneGizmoController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07545150 = '\x01';
  }
  pUVar1 = (__this->fields).imageHolder;
  if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    pUVar2 = TypeInfo_UnityEngine_RectTransform;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields).imageHolderTR = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar3->klass != TypeInfo_UnityEngine_RectTransform) ||
            ((__this->fields).imageHolderTR = pUVar3, pUVar3->klass != pUVar2)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields).imageHolderTR);
    pRVar4 = (__this->fields).controller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pRVar4 = UnityEngine_Object__Instantiate_object__35a4190
                       ((Il2CppObject *)pRVar4,
                        (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_SceneGizmoController);
    (__this->fields).controller = pRVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).controller);
    pRVar4 = (__this->fields).controller;
    if ((pRVar4 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (pUVar1 = (__this->fields).imageHolder, pUVar1 != (UnityEngine_UI_RawImage_o *)0x0)) {
      UnityEngine_UI_RawImage__set_texture
                (pUVar1,(UnityEngine_Texture_o *)(pRVar4->fields)._TargetTexture_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Start
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Start (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d670

void RuntimeSceneGizmo_SceneGizmoRenderer__Start
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545151 = '\x01';
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    bVar2 = (*(pUVar1->klass->vtable)._0_Equals.methodPtr)
                      (pUVar1,(Il2CppObject *)0x0,(pUVar1->klass->vtable)._0_Equals.method);
    if (bVar2) {
      return;
    }
    __this_00 = (__this->fields).controller;
    if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
                (__this_00,(__this->fields).m_referenceTransform,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d710

void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07545152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545152 = '\x01';
  }
  pRVar1 = (__this->fields).controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pRVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pRVar1 = (__this->fields).controller;
  if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    bVar2 = (*(pRVar1->klass->vtable)._0_Equals.methodPtr)
                      (pRVar1,(Il2CppObject *)0x0,(pRVar1->klass->vtable)._0_Equals.method);
    if (bVar2) {
      return;
    }
    pRVar1 = (__this->fields).controller;
    if ((pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pRVar1,(MethodInfo *)0x0)
       , __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDisable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d7c0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07545153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545153 = '\x01';
  }
  pRVar1 = (__this->fields).controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pRVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pRVar1 = (__this->fields).controller;
  if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    bVar2 = (*(pRVar1->klass->vtable)._0_Equals.methodPtr)
                      (pRVar1,(Il2CppObject *)0x0,(pRVar1->klass->vtable)._0_Equals.method);
    if (bVar2) {
      return;
    }
    pRVar1 = (__this->fields).controller;
    if ((pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pRVar1,(MethodInfo *)0x0)
       , __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Update
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Update (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586d870

void RuntimeSceneGizmo_SceneGizmoRenderer__Update
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  MethodInfo *in_RDX;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Vector3_o normalizedPosition;
  
  eventData = (__this->fields).hoveringPointer;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).controller;
  normalizedPosition =
       RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition(__this,eventData,in_RDX);
  if (__this_00 == (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    ThrowNullReferenceException();
  }
  RuntimeSceneGizmo_SceneGizmoController__OnPointerHover(__this_00,normalizedPosition,(MethodInfo *)eventData)
  ;
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerClick
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x586d990

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  RuntimeSceneGizmo_ComponentClickedEvent_o *__this_01;
  int32_t arg0;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector3_o normalizedPosition;
  
  if (Il2CppMethodInitialized_07545154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_GizmoComponent_Invoke);
    Il2CppMethodInitialized_07545154 = '\x01';
    method = extraout_RDX;
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((eventData->fields)._dragging_k__BackingField != false) {
      return;
    }
    __this_00 = (__this->fields).controller;
    normalizedPosition =
         RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition(__this,eventData,method);
    if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                       (__this_00,normalizedPosition,(MethodInfo *)eventData);
      if (arg0 == -1) {
        return;
      }
      __this_01 = (__this->fields).m_onComponentClicked;
      if (__this_01 != (RuntimeSceneGizmo_ComponentClickedEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent_Int32Enum___Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,arg0,
                   (MethodInfo_4318CF0 *)MethodInfo_UnityEngine_Events_UnityEvent_GizmoComponent_Invoke);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDrag
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x586da10

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$GetNormalizedPointerPosition
// il2cpp: UnityEngine_Vector3_o RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x586d8a0

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
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_Fields local_40;
  UnityEngine_Vector2_Fields local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_07545155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07545155 = '\x01';
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
  pUVar1 = (__this->fields).imageHolderTR;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    local_28._8_4_ = in_XMM1_Dc;
    local_28._0_8_ = UVar3.fields._8_8_;
    local_28._12_4_ = in_XMM1_Dd;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar1 = (__this->fields).imageHolderTR;
      local_38 = (eventData->fields)._position_k__BackingField.fields;
      uStack_30 = 0;
      cam = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar1,(UnityEngine_Vector2_o)local_38,cam,(UnityEngine_Vector2_o *)&local_40,
                 (MethodInfo *)0x0);
      auVar2._8_8_ = 0;
      auVar2._0_4_ = local_40.x;
      auVar2._4_4_ = local_40.y;
      auVar2 = divps(auVar2,local_28);
      UVar4.fields.x = auVar2._0_4_ + 1.0;
      UVar4.fields.y = auVar2._4_4_ + 1.0;
      UVar4.fields.z = 0.0;
      return (UnityEngine_Vector3_o)UVar4.fields;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerEnter
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x586da20

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields).highlightHoveredComponents == false) {
    return;
  }
  (__this->fields).hoveringPointer = eventData;
  Il2CppCodeGenWriteBarrier(&(__this->fields).hoveringPointer);
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerExit
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x586da40

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o **targetAddress;
  
  if ((__this->fields).hoveringPointer == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).controller;
  if (__this_00 == (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    ThrowNullReferenceException();
  }
  targetAddress = &(__this->fields).hoveringPointer;
  RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
            (__this_00,(UnityEngine_Vector3_o)ZEXT812(0xc1200000c1200000),(MethodInfo *)eventData);
  *targetAddress = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer___ctor (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x586da80

void RuntimeSceneGizmo_SceneGizmoRenderer___ctor
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  (__this->fields).highlightHoveredComponents = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


