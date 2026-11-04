// Type: RuntimeSceneGizmo.SceneGizmoRenderer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoRenderer$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x180c7fb50

UnityEngine_Transform_o*
RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform(RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x181dcee90

void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  
  (__this->fields).m_referenceTransform = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_referenceTransform,value);
  __this_00 = (__this->fields).controller;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$get_OnComponentClicked
// il2cpp: RuntimeSceneGizmo_ComponentClickedEvent_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x1805853d0

RuntimeSceneGizmo_ComponentClickedEvent_o*
RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked(RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Awake (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x181dce840

void RuntimeSceneGizmo_SceneGizmoRenderer__Awake
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *value;
  
  if (Il2CppMethodInitialized_1843449f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_Instantiate_SceneGizmoController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_1843449f4 = '\x01';
  }
  pUVar1 = (__this->fields).imageHolder;
  if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    value = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields).imageHolderTR = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar4 = value;
      if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_RectTransform);
      }
      (__this->fields).imageHolderTR = pUVar4;
      if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
        value = pUVar2;
      }
      if (value == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_RectTransform);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields).imageHolderTR,value);
    pRVar3 = (__this->fields).controller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pRVar3 = UnityEngine_Object__Instantiate_object__746ba0
                       ((Il2CppObject *)pRVar3,
                        (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_SceneGizmoController);
    (__this->fields).controller = pRVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).controller,pRVar3);
    pRVar3 = (__this->fields).controller;
    if ((pRVar3 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (pUVar1 = (__this->fields).imageHolder, pUVar1 != (UnityEngine_UI_RawImage_o *)0x0)) {
      UnityEngine_UI_RawImage__set_texture
                (pUVar1,(UnityEngine_Texture_o *)(pRVar3->fields)._TargetTexture_k__BackingField,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Start
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Start (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x181dced80

void RuntimeSceneGizmo_SceneGizmoRenderer__Start
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843449f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843449f5 = '\x01';
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).m_referenceTransform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
label_181dcee12:
      ThrowNullReferenceException();
    }
    bVar2 = (*(pUVar1->klass->vtable)._0_Equals.methodPtr)
                      (pUVar1,(Il2CppObject *)0x0,(pUVar1->klass->vtable)._0_Equals.method);
    if (!bVar2) {
      __this_00 = (__this->fields).controller;
      if (__this_00 == (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) goto label_181dcee12;
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
                (__this_00,(__this->fields).m_referenceTransform,(MethodInfo *)0x0);
    }
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x181dceb90

void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843449f6 = '\x01';
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
// 0x181dceae0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843449f7 = '\x01';
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
// 0x181dcee20

void RuntimeSceneGizmo_SceneGizmoRenderer__Update
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if ((__this->fields).hoveringPointer != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    __this_00 = (__this->fields).controller;
    pUVar1 = RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition
                       (&local_18,__this,(__this->fields).hoveringPointer,(MethodInfo *)0x0);
    if (__this_00 == (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
              (__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerClick
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181dcec40

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  RuntimeSceneGizmo_ComponentClickedEvent_o *__this_01;
  int32_t arg0;
  UnityEngine_Vector3_o *pUVar1;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843449f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_GizmoComponent_Invoke);
    Il2CppMethodInitialized_1843449f8 = '\x01';
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((eventData->fields)._dragging_k__BackingField == false) {
      __this_00 = (__this->fields).controller;
      pUVar1 = RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition
                         (&local_18,__this,eventData,(MethodInfo *)0x0);
      if (__this_00 == (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) goto label_181dcece8;
      local_28.x = (pUVar1->fields).x;
      local_28.y = (pUVar1->fields).y;
      local_28.z = (pUVar1->fields).z;
      arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                       (__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (arg0 != -1) {
        __this_01 = (__this->fields).m_onComponentClicked;
        if (__this_01 == (RuntimeSceneGizmo_ComponentClickedEvent_o *)0x0) goto label_181dcece8;
        UnityEngine_Events_UnityEvent_Int32Enum___Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,arg0,
                   (MethodInfo_EBCFA0 *)MethodInfo_UnityEngine_Events_UnityEvent_GizmoComponent_Invoke);
      }
    }
    return;
  }
label_181dcece8:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDrag
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x180547020

void
RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag(RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$GetNormalizedPointerPosition
// il2cpp: UnityEngine_Vector3_o RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181dce960

UnityEngine_Vector3_o *
RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
          UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_Camera_o *cam;
  UnityEngine_Vector2_Fields local_res8;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843449f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843449f9 = '\x01';
  }
  pUVar3 = (__this->fields).imageHolderTR;
  local_res8.x = 0.0;
  local_res8.y = 0.0;
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4 = UnityEngine_RectTransform__get_rect(local_58,pUVar3,(MethodInfo *)0x0);
    fVar1 = (pUVar4->fields).m_Width;
    fVar2 = (pUVar4->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar3 = (__this->fields).imageHolderTR;
      screenPoint = (eventData->fields)._position_k__BackingField.fields;
      cam = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar3,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_res8,
                 (MethodInfo *)0x0);
      (__return_storage_ptr__->fields).z = 0.0;
      (__return_storage_ptr__->fields).x = local_res8.x / fVar1 + 1.0;
      (__return_storage_ptr__->fields).y = local_res8.y / fVar2 + 1.0;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerEnter
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181dcecf0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((__this->fields).highlightHoveredComponents != false) {
    (__this->fields).hoveringPointer = eventData;
    Il2CppCodeGenWriteBarrier(&(__this->fields).hoveringPointer,eventData);
    return;
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerExit
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181dced10

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_Vector3_o local_18;
  
  if ((__this->fields).hoveringPointer == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).controller;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    local_18.fields.x = -10.0;
    local_18.fields.y = -10.0;
    local_18.fields.z = 0.0;
    RuntimeSceneGizmo_SceneGizmoController__OnPointerHover(__this_00,&local_18,(MethodInfo *)0x0);
    (__this->fields).hoveringPointer = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).hoveringPointer,(void *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer___ctor (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x181dcee80

void RuntimeSceneGizmo_SceneGizmoRenderer___ctor
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  (__this->fields).highlightHoveredComponents = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


