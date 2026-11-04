// Type: UI.ColorPickDragArea
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ColorPickDragArea.cs
// Prior real C# source: none
// --------------------------------

// UI.ColorPickDragArea$$Setup
// il2cpp: void UI_ColorPickDragArea__Setup (UI_ColorPickDragArea_o* __this, int32_t mode, System_Action_float__float__o* onChanged, const MethodInfo* method);
// 0x1821bcbf0

void UI_ColorPickDragArea__Setup
               (UI_ColorPickDragArea_o *__this,int32_t mode,System_Action_float__float__o *onChanged,
               MethodInfo *method)

{
  (__this->fields)._mode = mode;
  (__this->fields)._onChanged = onChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onChanged,onChanged);
  return;
}


// UI.ColorPickDragArea$$OnPointerDown
// il2cpp: void UI_ColorPickDragArea__OnPointerDown (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1821bcbe0

void
UI_ColorPickDragArea__OnPointerDown(UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  UI_ColorPickDragArea__Notify(__this,eventData,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickDragArea$$OnDrag
// il2cpp: void UI_ColorPickDragArea__OnDrag (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1821bcbe0

void UI_ColorPickDragArea__OnDrag
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_ColorPickDragArea__Notify(__this,eventData,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickDragArea$$Notify
// il2cpp: void UI_ColorPickDragArea__Notify (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1821bc930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bcac1: xorps xmm7, xmm7

void UI_ColorPickDragArea__Notify
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Action_float__float__o *pSVar1;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_RectTransform_o *rect;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_Fields local_res20;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_184346ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184346ef7 = '\x01';
  }
  local_res20.x = 0.0;
  local_res20.y = 0.0;
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) && (pUVar3->klass == TypeInfo_UnityEngine_RectTransform))
  {
    rect = pUVar3;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((__this->fields)._onChanged == (System_Action_float__float__o *)0x0) {
    return;
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto label_1821bcbd8;
  screenPoint = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_res20,
                     (MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto label_1821bcbd8;
  pUVar4 = UnityEngine_RectTransform__get_rect(local_58,rect,(MethodInfo *)0x0);
  fVar7 = (pUVar4->fields).m_XMin;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  pUVar4 = UnityEngine_RectTransform__get_rect(local_58,rect,(MethodInfo *)0x0);
  fVar5 = (pUVar4->fields).m_Width + (pUVar4->fields).m_XMin;
  if (fVar7 == fVar5) {
label_1821bcac4:
    fVar7 = 0.0;
  }
  else {
    fVar7 = (local_res20.x - fVar7) / (fVar5 - fVar7);
    if (fVar7 < 0.0) goto label_1821bcac4;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
  }
  pUVar4 = UnityEngine_RectTransform__get_rect(local_58,rect,(MethodInfo *)0x0);
  fVar5 = (pUVar4->fields).m_YMin;
  pUVar4 = UnityEngine_RectTransform__get_rect(local_58,rect,(MethodInfo *)0x0);
  fVar6 = (pUVar4->fields).m_YMin + (pUVar4->fields).m_Height;
  if (fVar5 == fVar6) {
label_1821bcb57:
    fVar5 = 0.0;
  }
  else {
    fVar5 = (local_res20.y - fVar5) / (fVar6 - fVar5);
    if (fVar5 < 0.0) goto label_1821bcb57;
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  if ((__this->fields)._mode == 1) {
    fVar5 = 0.0;
  }
  else if ((__this->fields)._mode == 2) {
    fVar7 = 0.0;
  }
  pSVar1 = (__this->fields)._onChanged;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (1.0 < fVar7) {
    fVar7 = 1.0;
  }
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  if (pSVar1 != (System_Action_float__float__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,fVar7,fVar5,(pSVar1->fields).method);
    return;
  }
label_1821bcbd8:
  ThrowNullReferenceException();
}


// UI.ColorPickDragArea$$.ctor
// il2cpp: void UI_ColorPickDragArea___ctor (UI_ColorPickDragArea_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_ColorPickDragArea___ctor(UI_ColorPickDragArea_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


