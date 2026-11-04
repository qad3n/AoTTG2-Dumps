// Type: UI.MapEditorHirarchyButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorHirarchyButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyButton.cs
// --------------------------------

// UI.MapEditorHirarchyButton$$Setup
// il2cpp: void UI_MapEditorHirarchyButton__Setup (UI_MapEditorHirarchyButton_o* __this, UnityEngine_Events_UnityAction_o* onButtonClick, UnityEngine_Events_UnityAction_o* onButtonRelease, UnityEngine_Events_UnityAction_PointerEventData__o* onRightClick, UnityEngine_Events_UnityAction_PointerEventData__o* onPointerDown, UnityEngine_Events_UnityAction_PointerEventData__o* onBeginDrag, UnityEngine_Events_UnityAction_PointerEventData__o* onDrag, UnityEngine_Events_UnityAction_PointerEventData__o* onEndDrag, const MethodInfo* method);
// 0x1822b8a30

void UI_MapEditorHirarchyButton__Setup
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_Events_UnityAction_o *onButtonClick,
               UnityEngine_Events_UnityAction_o *onButtonRelease,
               UnityEngine_Events_UnityAction_PointerEventData__o *onRightClick,
               UnityEngine_Events_UnityAction_PointerEventData__o *onPointerDown,
               UnityEngine_Events_UnityAction_PointerEventData__o *onBeginDrag,
               UnityEngine_Events_UnityAction_PointerEventData__o *onDrag,
               UnityEngine_Events_UnityAction_PointerEventData__o *onEndDrag,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  __this_00 = (__this->fields).m_OnClick;
  if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).m_OnClick;
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,onButtonClick,(MethodInfo *)0x0);
      (__this->fields)._onButtonRelease = onButtonRelease;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onButtonRelease,onButtonRelease);
      (__this->fields)._onRightClick = onRightClick;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onRightClick,onRightClick);
      (__this->fields)._onPointerDown = onPointerDown;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onPointerDown,onPointerDown);
      (__this->fields)._onBeginDrag = onBeginDrag;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onBeginDrag,onBeginDrag);
      (__this->fields)._onDrag = onDrag;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onDrag,onDrag);
      (__this->fields)._onEndDrag = onEndDrag;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onEndDrag,onEndDrag);
      UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHirarchyButton$$OnPointerClick
// il2cpp: void UI_MapEditorHirarchyButton__OnPointerClick (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b8950

void UI_MapEditorHirarchyButton__OnPointerClick
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_PointerEventData__o *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((eventData->fields)._button_k__BackingField != 1) {
    UnityEngine_UI_Button__OnPointerClick((UnityEngine_UI_Button_o *)__this,eventData,(MethodInfo *)0x0);
    return;
  }
  pUVar1 = (__this->fields)._onRightClick;
  if (pUVar1 != (UnityEngine_Events_UnityAction_PointerEventData__o *)0x0) {
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,eventData,(pUVar1->fields).method);
    return;
  }
  return;
}


// UI.MapEditorHirarchyButton$$OnPointerDown
// il2cpp: void UI_MapEditorHirarchyButton__OnPointerDown (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b89a0

void UI_MapEditorHirarchyButton__OnPointerDown
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_PointerEventData__o *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((eventData->fields)._button_k__BackingField == 0) &&
     (pUVar1 = (__this->fields)._onPointerDown,
     pUVar1 != (UnityEngine_Events_UnityAction_PointerEventData__o *)0x0)) {
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,eventData,(pUVar1->fields).method);
    return;
  }
  return;
}


// UI.MapEditorHirarchyButton$$OnBeginDrag
// il2cpp: void UI_MapEditorHirarchyButton__OnBeginDrag (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b8890

void UI_MapEditorHirarchyButton__OnBeginDrag
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_PointerEventData__o *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((eventData->fields)._button_k__BackingField == 0) &&
     (pUVar1 = (__this->fields)._onBeginDrag,
     pUVar1 != (UnityEngine_Events_UnityAction_PointerEventData__o *)0x0)) {
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,eventData,(pUVar1->fields).method);
    return;
  }
  return;
}


// UI.MapEditorHirarchyButton$$OnDrag
// il2cpp: void UI_MapEditorHirarchyButton__OnDrag (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b88d0

void UI_MapEditorHirarchyButton__OnDrag
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_PointerEventData__o *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((eventData->fields)._button_k__BackingField == 0) &&
     (pUVar1 = (__this->fields)._onDrag, pUVar1 != (UnityEngine_Events_UnityAction_PointerEventData__o *)0x0))
  {
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,eventData,(pUVar1->fields).method);
    return;
  }
  return;
}


// UI.MapEditorHirarchyButton$$OnEndDrag
// il2cpp: void UI_MapEditorHirarchyButton__OnEndDrag (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b8910

void UI_MapEditorHirarchyButton__OnEndDrag
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_PointerEventData__o *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((eventData->fields)._button_k__BackingField == 0) &&
     (pUVar1 = (__this->fields)._onEndDrag,
     pUVar1 != (UnityEngine_Events_UnityAction_PointerEventData__o *)0x0)) {
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,eventData,(pUVar1->fields).method);
    return;
  }
  return;
}


// UI.MapEditorHirarchyButton$$OnPointerUp
// il2cpp: void UI_MapEditorHirarchyButton__OnPointerUp (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b89e0

void UI_MapEditorHirarchyButton__OnPointerUp
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  UnityEngine_UI_Selectable__OnPointerUp((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (((eventData->fields)._button_k__BackingField == 0) &&
       (pUVar1 = (__this->fields)._onButtonRelease, pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0)) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHirarchyButton$$.ctor
// il2cpp: void UI_MapEditorHirarchyButton___ctor (UI_MapEditorHirarchyButton_o* __this, const MethodInfo* method);
// 0x1818f43b0

void
UI_MapEditorHirarchyButton___ctor(UI_MapEditorHirarchyButton_o* __this, MethodInfo* method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


