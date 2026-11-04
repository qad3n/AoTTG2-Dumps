// Type: UI.PanelResizeHandle
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/PanelResizeHandle.cs
// Prior real C# source: none
// --------------------------------

// UI.PanelResizeHandle$$Awake
// il2cpp: void UI_PanelResizeHandle__Awake (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x1822de880

void UI_PanelResizeHandle__Awake(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  UI_PanelResizeHandle_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *value;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184347617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_184347617 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
    value = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar3,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    }
    if (__this != (UI_PanelResizeHandle_o *)0x0) {
      (__this->fields)._panelRT = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panelRT,value);
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._image = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._image,pUVar4);
      pUVar4 = (__this->fields)._image;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar4 = (__this->fields)._image;
        if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
        }
        if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_1822de9bc;
        pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
        local_18.fields.r = (pUVar1->IdleColor).fields.r;
        local_18.fields.g = (pUVar1->IdleColor).fields.g;
        local_18.fields.b = (pUVar1->IdleColor).fields.b;
        local_18.fields.a = (pUVar1->IdleColor).fields.a;
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,&local_18,(pUVar4->klass->vtable)._23_set_color.method);
      }
      return;
    }
  }
label_1822de9bc:
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$OnPointerEnter
// il2cpp: void UI_PanelResizeHandle__OnPointerEnter (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822df5b0

void UI_PanelResizeHandle__OnPointerEnter
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_StaticFields *pUVar2;
  bool bVar3;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184347618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_184347618 = '\x01';
  }
  if ((__this->fields)._isDragging == false) {
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar2 = TypeInfo_UI_PanelResizeHandle->static_fields;
      local_18.fields.r = (pUVar2->HoverColor).fields.r;
      local_18.fields.g = (pUVar2->HoverColor).fields.g;
      local_18.fields.b = (pUVar2->HoverColor).fields.b;
      local_18.fields.a = (pUVar2->HoverColor).fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,&local_18,(pUVar1->klass->vtable)._23_set_color.method);
    }
  }
  return;
}


// UI.PanelResizeHandle$$OnPointerExit
// il2cpp: void UI_PanelResizeHandle__OnPointerExit (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822df680

void UI_PanelResizeHandle__OnPointerExit
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_StaticFields *pUVar2;
  bool bVar3;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184347619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_184347619 = '\x01';
  }
  if ((__this->fields)._isDragging == false) {
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar2 = TypeInfo_UI_PanelResizeHandle->static_fields;
      local_18.fields.r = (pUVar2->IdleColor).fields.r;
      local_18.fields.g = (pUVar2->IdleColor).fields.g;
      local_18.fields.b = (pUVar2->IdleColor).fields.b;
      local_18.fields.a = (pUVar2->IdleColor).fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,&local_18,(pUVar1->klass->vtable)._23_set_color.method);
    }
  }
  return;
}


// UI.PanelResizeHandle$$OnPointerDown
// il2cpp: void UI_PanelResizeHandle__OnPointerDown (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822df450

void UI_PanelResizeHandle__OnPointerDown
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UI_PanelResizeHandle_StaticFields *pUVar3;
  bool bVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434761a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_18434761a = '\x01';
  }
  (__this->fields)._isDragging = true;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    pUVar1 = (__this->fields)._panelRT;
    (__this->fields)._dragStartScreenX = (eventData->fields)._position_k__BackingField.fields.x;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar1 = (__this->fields)._panelRT;
      if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1822df5a7;
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      fVar6 = UVar5.fields.x;
    }
    else {
      fVar6 = 0.0;
    }
    (__this->fields)._panelStartWidth = fVar6;
    pUVar2 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1822df5a7;
      pUVar3 = TypeInfo_UI_PanelResizeHandle->static_fields;
      local_18.r = (pUVar3->DragColor).fields.r;
      local_18.g = (pUVar3->DragColor).fields.g;
      local_18.b = (pUVar3->DragColor).fields.b;
      local_18.a = (pUVar3->DragColor).fields.a;
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (pUVar2,(UnityEngine_Color_o *)&local_18,(pUVar2->klass->vtable)._23_set_color.method);
    }
    UI_PanelResizeHandle__BuildDragVisuals(__this,(MethodInfo *)0x0);
    UI_PanelResizeHandle__UpdateDragVisuals
              (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
               (MethodInfo *)0x0);
    return;
  }
label_1822df5a7:
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$OnDrag
// il2cpp: void UI_PanelResizeHandle__OnDrag (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822df410

void UI_PanelResizeHandle__OnDrag
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if ((__this->fields)._isDragging == false) {
    return;
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UI_PanelResizeHandle__UpdateDragVisuals
              (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$OnPointerUp
// il2cpp: void UI_PanelResizeHandle__OnPointerUp (UI_PanelResizeHandle_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822df750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822df924: mov rdi, qword ptr [rsp + 0x40]

void UI_PanelResizeHandle__OnPointerUp
               (UI_PanelResizeHandle_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_StaticFields *pUVar2;
  UnityEngine_Object_o *pUVar3;
  System_Action_float__o *pSVar4;
  bool bVar5;
  float fVar6;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434761b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_18434761b = '\x01';
  }
  if ((__this->fields)._isDragging != false) {
    pUVar1 = (__this->fields)._image;
    (__this->fields)._isDragging = false;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar1 = (__this->fields)._image;
      if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
      }
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1822df934;
      pUVar2 = TypeInfo_UI_PanelResizeHandle->static_fields;
      local_18.r = (pUVar2->IdleColor).fields.r;
      local_18.g = (pUVar2->IdleColor).fields.g;
      local_18.b = (pUVar2->IdleColor).fields.b;
      local_18.a = (pUVar2->IdleColor).fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o *)&local_18,(pUVar1->klass->vtable)._23_set_color.method);
    }
    if (Il2CppMethodInitialized_18434761f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434761f = '\x01';
    }
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._lineGO;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (UnityEngine_Object_o *)(__this->fields)._lineGO;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
      (__this->fields)._lineGO = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lineGO,(void *)0x0);
    }
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._ghostGO;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (UnityEngine_Object_o *)(__this->fields)._ghostGO;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
      (__this->fields)._ghostGO = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ghostGO,(void *)0x0);
    }
    pSVar4 = (__this->fields).OnResize;
    if (pSVar4 != (System_Action_float__o *)0x0) {
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_1822df934:
        ThrowNullReferenceException();
      }
      fVar6 = UI_PanelResizeHandle__ComputeNewWidth
                        (__this,(eventData->fields)._position_k__BackingField.fields.x,(MethodInfo *)0x0);
      (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,fVar6,(pSVar4->fields).method);
    }
  }
  return;
}


// UI.PanelResizeHandle$$ComputeNewWidth
// il2cpp: float UI_PanelResizeHandle__ComputeNewWidth (UI_PanelResizeHandle_o* __this, float screenX, const MethodInfo* method);
// 0x1822df220

float UI_PanelResizeHandle__ComputeNewWidth(UI_PanelResizeHandle_o *__this,float screenX,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434761c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434761c = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponentInParent_object__664f20
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    if (0.0 < fVar2) {
      fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
      goto label_1822df2c0;
    }
  }
  fVar2 = 1.0;
label_1822df2c0:
  fVar2 = (screenX - (__this->fields)._dragStartScreenX) / fVar2;
  fVar3 = (__this->fields)._panelStartWidth;
  if ((__this->fields).IsRightEdge == false) {
    fVar3 = fVar3 - fVar2;
  }
  else {
    fVar3 = fVar3 + fVar2;
  }
  fVar2 = (__this->fields).MinWidth;
  if ((fVar2 <= fVar3) && (fVar2 = (__this->fields).MaxWidth, fVar3 <= fVar2)) {
    fVar2 = fVar3;
  }
  return fVar2;
}


// UI.PanelResizeHandle$$BuildDragVisuals
// il2cpp: void UI_PanelResizeHandle__BuildDragVisuals (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x1822dea80

void UI_PanelResizeHandle__BuildDragVisuals(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UI_PanelResizeHandle_StaticFields *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_BaseMenu_o *__this_01;
  bool bVar3;
  UnityEngine_Canvas_o *x;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_Image_o *pUVar8;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_Font_o *value;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_18434761d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x97\x84  \xe2\x96\xba");
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeDragGhost");
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeDragLine");
    Il2CppMethodInitialized_18434761d = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (x != (UnityEngine_Canvas_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar5,"ResizeDragLine",(MethodInfo *)0x0);
    (__this->fields)._lineGO = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineGO,pUVar5);
    pUVar5 = (__this->fields)._lineGO;
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,pUVar4,false,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._lineGO;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar5,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
        (__this->fields)._lineRT = pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRT,pUVar7);
        pUVar7 = (__this->fields)._lineRT;
        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          pUVar7 = (__this->fields)._lineRT;
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar7,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pUVar7 = (__this->fields)._lineRT;
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar7,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar7 = (__this->fields)._lineRT;
              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMax
                          (pUVar7,(UnityEngine_Vector2_o)0x40000000,(MethodInfo *)0x0);
                pUVar5 = (__this->fields)._lineGO;
                if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar8 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar5,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                  if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
                  }
                  if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                    pUVar2 = TypeInfo_UI_PanelResizeHandle->static_fields;
                    local_48[0].r = (pUVar2->LineColor).fields.r;
                    local_48[0].g = (pUVar2->LineColor).fields.g;
                    local_48[0].b = (pUVar2->LineColor).fields.b;
                    local_48[0].a = (pUVar2->LineColor).fields.a;
                    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                              (pUVar8,(UnityEngine_Color_o *)local_48,
                               (pUVar8->klass->vtable)._23_set_color.method);
                    (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar8,false,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
                    UI_PanelResizeHandle__BoostSortOrder((__this->fields)._lineGO,31999,(MethodInfo *)0x0);
                    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                    UnityEngine_GameObject___ctor(pUVar5,"ResizeDragGhost",(MethodInfo *)0x0);
                    (__this->fields)._ghostGO = pUVar5;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._ghostGO,pUVar5);
                    pUVar5 = (__this->fields)._ghostGO;
                    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
                       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,pUVar4,false,(MethodInfo *)0x0);
                      pUVar5 = (__this->fields)._ghostGO;
                      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                           (pUVar5,(MethodInfo_6F4D60 *)
                                                   MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                           );
                        (__this->fields)._ghostRT = pUVar7;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._ghostRT,pUVar7);
                        pUVar7 = (__this->fields)._ghostRT;
                        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                          Il2CppMethodInitialized_18433e3c9 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                          UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
                          UnityEngine_RectTransform__set_anchorMax
                                    (pUVar7,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMin
                                    (pUVar7,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
                          pUVar7 = (__this->fields)._ghostRT;
                          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar7,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                            pUVar7 = (__this->fields)._ghostRT;
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_sizeDelta
                                        (pUVar7,(UnityEngine_Vector2_o)0x41d0000042600000,(MethodInfo *)0x0);
                              pUVar5 = (__this->fields)._ghostGO;
                              if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
                                 (pUVar8 = UnityEngine_GameObject__AddComponent_object_
                                                     (pUVar5,(MethodInfo_6F4D60 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image),
                                 pUVar8 != (UnityEngine_UI_Image_o *)0x0)) {
                                pUVar2 = TypeInfo_UI_PanelResizeHandle->static_fields;
                                local_48[0].r = (pUVar2->GhostBg).fields.r;
                                local_48[0].g = (pUVar2->GhostBg).fields.g;
                                local_48[0].b = (pUVar2->GhostBg).fields.b;
                                local_48[0].a = (pUVar2->GhostBg).fields.a;
                                (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar8,(UnityEngine_Color_o *)local_48,
                                           (pUVar8->klass->vtable)._23_set_color.method);
                                (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                                          (pUVar8,false,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
                                pUVar5 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                UnityEngine_GameObject___ctor(pUVar5,"Label",(MethodInfo *)0x0);
                                if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                                  __this_00 = (__this->fields)._ghostGO;
                                  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                                     (pUVar6 = UnityEngine_GameObject__get_transform
                                                         (__this_00,(MethodInfo *)0x0),
                                     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                                    UnityEngine_Transform__SetParent_2f5a7e0
                                              (pUVar4,pUVar6,false,(MethodInfo *)0x0);
                                    pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                                       (pUVar5,(MethodInfo_6F4D60 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                                       );
                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector2);
                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                    }
                                    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (pUVar7,(UnityEngine_Vector2_o)
                                                        (TypeInfo_UnityEngine_Vector2->static_fields->
                                                        zeroVector).fields,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_184341f36 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_184341f36 = '\x01';
                                      }
                                      UnityEngine_RectTransform__set_anchorMax
                                                (pUVar7,(UnityEngine_Vector2_o)
                                                        (TypeInfo_UnityEngine_Vector2->static_fields->
                                                        oneVector).fields,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_18433e3c9 = '\x01';
                                      }
                                      UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                                      ;
                                      UnityEngine_RectTransform__set_offsetMax
                                                (pUVar7,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
                                      UnityEngine_RectTransform__set_offsetMin
                                                (pUVar7,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
                                      __this_02 = UnityEngine_GameObject__AddComponent_object_
                                                            (pUVar5,(MethodInfo_6F4D60 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Text);
                                      if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
                                        (*(__this_02->klass->vtable)._75_set_text.methodPtr)
                                                  (__this_02,"\xe2\x97\x84  \xe2\x96\xba",
                                                   (__this_02->klass->vtable)._75_set_text.method);
                                        UnityEngine_UI_Text__set_fontSize(__this_02,0x10,(MethodInfo *)0x0);
                                        UnityEngine_UI_Text__set_fontStyle(__this_02,1,(MethodInfo *)0x0);
                                        UnityEngine_UI_Text__set_alignment(__this_02,4,(MethodInfo *)0x0);
                                        pUVar2 = TypeInfo_UI_PanelResizeHandle->static_fields;
                                        local_48[0].r = (pUVar2->GhostText).fields.r;
                                        local_48[0].g = (pUVar2->GhostText).fields.g;
                                        local_48[0].b = (pUVar2->GhostText).fields.b;
                                        local_48[0].a = (pUVar2->GhostText).fields.a;
                                        (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                                  (__this_02,(UnityEngine_Color_o *)local_48,
                                                   (__this_02->klass->vtable)._23_set_color.method);
                                        (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                                                  (__this_02,false,
                                                   (__this_02->klass->vtable)._25_set_raycastTarget.method);
                                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UI_UIManager);
                                        }
                                        __this_01 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                        if (__this_01 == (UI_BaseMenu_o *)0x0) {
                                          __this_03 = (UnityEngine_UI_Text_o *)0x0;
                                        }
                                        else {
                                          __this_03 = UnityEngine_Component__GetComponentInChildren_object__664b50
                                                                ((UnityEngine_Component_o *)__this_01,
                                                                 (MethodInfo_664B50 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponentInChildren_Text
                                                       );
                                        }
                                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0)
                                        {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                        }
                                        bVar3 = UnityEngine_Object__op_Inequality
                                                          ((UnityEngine_Object_o *)__this_03,
                                                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                        if (bVar3) {
                                          if (__this_03 == (UnityEngine_UI_Text_o *)0x0) goto label_1822df20b;
                                          value = UnityEngine_UI_Text__get_font(__this_03,(MethodInfo *)0x0);
                                          UnityEngine_UI_Text__set_font(__this_02,value,(MethodInfo *)0x0);
                                        }
                                        pUVar5 = (__this->fields)._ghostGO;
                                        if ((TypeInfo_UI_PanelResizeHandle->_2).cctor_finished_or_no_cctor ==
                                            0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UI_PanelResizeHandle);
                                        }
                                        UI_PanelResizeHandle__BoostSortOrder(pUVar5,32000,(MethodInfo *)0x0);
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
        }
      }
    }
  }
label_1822df20b:
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$UpdateDragVisuals
// il2cpp: void UI_PanelResizeHandle__UpdateDragVisuals (UI_PanelResizeHandle_o* __this, UnityEngine_Vector2_o screenPos, const MethodInfo* method);
// 0x1822df940
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822dfb69: movaps xmm9, xmmword ptr [rsp + 0x50]
// asm:   0x1822dfb6f: movaps xmm7, xmmword ptr [rsp + 0x70]
// asm:   0x1822dfb74: movaps xmm11, xmmword ptr [rsp + 0x40]

void UI_PanelResizeHandle__UpdateDragVisuals
               (UI_PanelResizeHandle_o *__this,UnityEngine_Vector2_o screenPos,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  bool bVar2;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_o value_01;
  float fStack_74;
  UnityEngine_Rect_o local_70 [6];
  
  if (Il2CppMethodInitialized_18434761e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434761e = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponentInParent_object__664f20
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    fVar5 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    if (fVar5 <= 0.0) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    }
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar4 = UnityEngine_RectTransform__get_rect(local_70,pUVar3,(MethodInfo *)0x0);
      fVar1 = (pUVar4->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar6 = UI_PanelResizeHandle__ComputeNewWidth(__this,screenPos.fields.x,(MethodInfo *)0x0);
      if ((__this->fields).IsRightEdge == false) {
        fVar6 = fVar1 - fVar6;
      }
      pUVar3 = (__this->fields)._lineRT;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar3 = (__this->fields)._lineRT;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1822dfb93;
        value.fields.y = 0.0;
        value.fields.x = fVar6 - 1.0;
        UnityEngine_RectTransform__set_offsetMin(pUVar3,value,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._lineRT;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1822dfb93;
        value_00.fields.y = 0.0;
        value_00.fields.x = fVar6 + 1.0;
        UnityEngine_RectTransform__set_offsetMax(pUVar3,value_00,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields)._ghostRT;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        fStack_74 = screenPos.fields.y;
        pUVar3 = (__this->fields)._ghostRT;
        value_01.fields.x = screenPos.fields.x / fVar5;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1822dfb93;
        value_01.fields.y = fStack_74 / fVar5 + 18.0;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value_01,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1822dfb93:
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$DestroyDragVisuals
// il2cpp: void UI_PanelResizeHandle__DestroyDragVisuals (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x1822df310

void UI_PanelResizeHandle__DestroyDragVisuals(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434761f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434761f = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._lineGO;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._lineGO;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._lineGO = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineGO,(void *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._ghostGO;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._ghostGO;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._ghostGO = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ghostGO,(void *)0x0);
  }
  return;
}


// UI.PanelResizeHandle$$BoostSortOrder
// il2cpp: void UI_PanelResizeHandle__BoostSortOrder (UnityEngine_GameObject_o* go, int32_t order, const MethodInfo* method);
// 0x1822de9d0

void UI_PanelResizeHandle__BoostSortOrder(UnityEngine_GameObject_o *go,int32_t order,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this;
  UnityEngine_UI_GraphicRaycaster_o *__this_00;
  
  if (Il2CppMethodInitialized_184347620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_184347620 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    if (__this != (UnityEngine_Canvas_o *)0x0) {
      UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this,order,(MethodInfo *)0x0);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
      if (__this_00 != (UnityEngine_UI_GraphicRaycaster_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PanelResizeHandle$$.ctor
// il2cpp: void UI_PanelResizeHandle___ctor (UI_PanelResizeHandle_o* __this, const MethodInfo* method);
// 0x1822dfcc0

void UI_PanelResizeHandle___ctor(UI_PanelResizeHandle_o *__this,MethodInfo *method)

{
  (__this->fields).MinWidth = 150.0;
  (__this->fields).MaxWidth = 700.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PanelResizeHandle$$.cctor
// il2cpp: void UI_PanelResizeHandle___cctor (const MethodInfo* method);
// 0x1822dfba0

void UI_PanelResizeHandle___cctor(MethodInfo *method)

{
  UI_PanelResizeHandle_StaticFields *pUVar1;
  
  if (Il2CppMethodInitialized_184347621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_PanelResizeHandle);
    Il2CppMethodInitialized_184347621 = '\x01';
  }
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->IdleColor).fields.r = 1.0;
  (pUVar1->IdleColor).fields.g = 1.0;
  (pUVar1->IdleColor).fields.b = 1.0;
  (pUVar1->IdleColor).fields.a = 0.04;
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->HoverColor).fields.r = 1.0;
  (pUVar1->HoverColor).fields.g = 1.0;
  (pUVar1->HoverColor).fields.b = 1.0;
  (pUVar1->HoverColor).fields.a = 0.18;
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->DragColor).fields.r = 1.0;
  (pUVar1->DragColor).fields.g = 1.0;
  (pUVar1->DragColor).fields.b = 1.0;
  (pUVar1->DragColor).fields.a = 0.28;
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->LineColor).fields.r = 1.0;
  (pUVar1->LineColor).fields.g = 0.78;
  (pUVar1->LineColor).fields.b = 0.22;
  (pUVar1->LineColor).fields.a = 0.9;
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->GhostBg).fields.r = 0.12;
  (pUVar1->GhostBg).fields.g = 0.12;
  (pUVar1->GhostBg).fields.b = 0.12;
  (pUVar1->GhostBg).fields.a = 0.8;
  pUVar1 = TypeInfo_UI_PanelResizeHandle->static_fields;
  (pUVar1->GhostText).fields.r = 1.0;
  (pUVar1->GhostText).fields.g = 0.78;
  (pUVar1->GhostText).fields.b = 0.22;
  (pUVar1->GhostText).fields.a = 1.0;
  return;
}


