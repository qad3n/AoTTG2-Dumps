// Type: UI.MapDragArea
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MapDragArea.cs
// Prior real C# source: none
// --------------------------------

// UI.MapDragArea$$Setup
// il2cpp: void UI_MapDragArea__Setup (UI_MapDragArea_o* __this, System_Action_Vector2__o* onDrag, System_Action_o* onEndDrag, const MethodInfo* method);
// 0x182258f20

void UI_MapDragArea__Setup
               (UI_MapDragArea_o *__this,System_Action_Vector2__o *onDrag,System_Action_o *onEndDrag,
               MethodInfo *method)

{
  (__this->fields)._onDrag = onDrag;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onDrag,onDrag);
  (__this->fields)._onEndDrag = onEndDrag;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onEndDrag,onEndDrag);
  return;
}


// UI.MapDragArea$$OnDrag
// il2cpp: void UI_MapDragArea__OnDrag (UI_MapDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x182258d40

void UI_MapDragArea__OnDrag
               (UI_MapDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Action_Vector2__o *pSVar3;
  UnityEngine_Vector2_o screenPoint;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Camera_o *pUVar6;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector2_Fields local_res20;
  UnityEngine_Vector2_Fields local_38 [6];
  
  if (Il2CppMethodInitialized_1843472d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_1843472d3 = '\x01';
  }
  local_res20.x = 0.0;
  local_res20.y = 0.0;
  local_38[0].x = 0.0;
  local_38[0].y = 0.0;
  pUVar5 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  rect = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar5->klass == TypeInfo_UnityEngine_RectTransform) {
      rect = pUVar5;
    }
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UVar1 = (eventData->fields)._position_k__BackingField.fields;
    pUVar6 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    bVar4 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (rect,(UnityEngine_Vector2_o)UVar1,pUVar6,(UnityEngine_Vector2_o *)&local_res20,
                       (MethodInfo *)0x0);
    if (bVar4) {
      UVar1 = (eventData->fields)._delta_k__BackingField.fields;
      UVar2 = (eventData->fields)._position_k__BackingField.fields;
      pUVar6 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      screenPoint.fields.y = UVar2.y - UVar1.y;
      screenPoint.fields.x = UVar2.x - UVar1.x;
      bVar4 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        (rect,screenPoint,pUVar6,(UnityEngine_Vector2_o *)local_38,(MethodInfo *)0x0);
      if (bVar4) {
        pSVar3 = (__this->fields)._onDrag;
        if (pSVar3 == (System_Action_Vector2__o *)0x0) goto label_182258ee6;
        (*(code *)(pSVar3->fields).invoke_impl)
                  ((pSVar3->fields).method_code,
                   CONCAT44(local_res20.y - local_38[0].y,local_res20.x - local_38[0].x),
                   (pSVar3->fields).method);
      }
    }
    return;
  }
label_182258ee6:
  ThrowNullReferenceException();
}


// UI.MapDragArea$$OnEndDrag
// il2cpp: void UI_MapDragArea__OnEndDrag (UI_MapDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x182258ef0

void UI_MapDragArea__OnEndDrag
               (UI_MapDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields)._onEndDrag;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapDragArea$$.ctor
// il2cpp: void UI_MapDragArea___ctor (UI_MapDragArea_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_MapDragArea___ctor(UI_MapDragArea_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


