// Type: UI.MapDragArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapDragArea.cs
// Prior real C# source: none
// --------------------------------

// UI.MapDragArea$$Setup
// il2cpp: void UI_MapDragArea__Setup (UI_MapDragArea_o* __this, System_Action_Vector2__o* onDrag, System_Action_o* onEndDrag, const MethodInfo* method);
// 0x5d35870

void UI_MapDragArea__Setup
               (UI_MapDragArea_o *__this,System_Action_Vector2__o *onDrag,System_Action_o *onEndDrag,
               MethodInfo *method)

{
  (__this->fields)._onDrag = onDrag;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onDrag);
  (__this->fields)._onEndDrag = onEndDrag;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onEndDrag);
  return;
}


// UI.MapDragArea$$OnDrag
// il2cpp: void UI_MapDragArea__OnDrag (UI_MapDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d36f10

void UI_MapDragArea__OnDrag
               (UI_MapDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Action_Vector2__o *pSVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *pUVar5;
  UnityEngine_Vector2_Fields local_48;
  UnityEngine_Vector2_Fields local_40;
  UnityEngine_Vector2_Fields local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07547e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07547e50 = '\x01';
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
  local_48.x = 0.0;
  local_48.y = 0.0;
  rect = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((rect != (UnityEngine_RectTransform_o *)0x0) && (rect->klass != TypeInfo_UnityEngine_RectTransform)) {
    il2cpp_codegen_raise_invalid_cast_exception(rect);
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_05d37058:
    ThrowNullReferenceException();
  }
  local_38 = (eventData->fields)._position_k__BackingField.fields;
  uStack_30 = 0;
  pUVar5 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar4 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)local_38,pUVar5,(UnityEngine_Vector2_o *)&local_40,
                     (MethodInfo *)0x0);
  if (bVar4) {
    UVar1 = (eventData->fields)._position_k__BackingField.fields;
    UVar2 = (eventData->fields)._delta_k__BackingField.fields;
    local_38.y = UVar1.y - UVar2.y;
    local_38.x = UVar1.x - UVar2.x;
    uStack_30 = 0;
    pUVar5 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    bVar4 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (rect,(UnityEngine_Vector2_o)local_38,pUVar5,(UnityEngine_Vector2_o *)&local_48,
                       (MethodInfo *)0x0);
    if (bVar4) {
      pSVar3 = (__this->fields)._onDrag;
      if (pSVar3 == (System_Action_Vector2__o *)0x0) goto label_05d37058;
      (*(code *)(pSVar3->fields).invoke_impl)
                (local_40.x - local_48.x,(pSVar3->fields).method_code,(pSVar3->fields).method);
    }
  }
  return;
}


// UI.MapDragArea$$OnEndDrag
// il2cpp: void UI_MapDragArea__OnEndDrag (UI_MapDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d37070

void UI_MapDragArea__OnEndDrag
               (UI_MapDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._onEndDrag;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,method,vtableDispatch);
  return;
}


// UI.MapDragArea$$.ctor
// il2cpp: void UI_MapDragArea___ctor (UI_MapDragArea_o* __this, const MethodInfo* method);
// 0x5d37090

void UI_MapDragArea___ctor(UI_MapDragArea_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


