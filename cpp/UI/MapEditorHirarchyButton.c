// Type: UI.MapEditorHirarchyButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorHirarchyButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyButton.cs
// --------------------------------

// UI.MapEditorHirarchyButton$$Setup
// il2cpp: void UI_MapEditorHirarchyButton__Setup (UI_MapEditorHirarchyButton_o* __this, UnityEngine_Events_UnityAction_o* onButtonClick, UnityEngine_Events_UnityAction_o* onButtonRelease, const MethodInfo* method);
// 0x4426650

void UI_MapEditorHirarchyButton__Setup
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_Events_UnityAction_o *onButtonClick,
               UnityEngine_Events_UnityAction_o *onButtonRelease,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  
  __this_00 = (UnityEngine_UI_Button_o *)(__this->fields).m_CanvasGroupCache;
  if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)__this_00,onButtonClick,(MethodInfo *)0x0);
    (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)onButtonRelease;
    il2cpp_runtime_helper_022b4080(&(__this->fields).m_OnClick);
    UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00;
  UnityEngine_UI_Selectable__OnPointerUp
            ((UnityEngine_UI_Selectable_o *)__this_00,
             (UnityEngine_EventSystems_PointerEventData_o *)onButtonClick,(MethodInfo *)0x0);
  pUVar1 = (__this_00->fields).m_OnClick;
  if (pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    (*(code *)(pUVar1->fields).m_PersistentCalls)(pUVar1[1].fields.m_Calls,(pUVar1->fields).m_InvokeArray);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_UI_Button___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHirarchyButton$$OnPointerUp
// il2cpp: void UI_MapEditorHirarchyButton__OnPointerUp (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x44266a0

void UI_MapEditorHirarchyButton__OnPointerUp
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UI_MapEditorHirarchyButton_o *__this_00;
  
  __this_00 = __this;
  UnityEngine_UI_Selectable__OnPointerUp((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).m_OnClick;
  if (pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    (*(code *)(pUVar1->fields).m_PersistentCalls)(pUVar1[1].fields.m_Calls,(pUVar1->fields).m_InvokeArray);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHirarchyButton$$.ctor
// il2cpp: void UI_MapEditorHirarchyButton___ctor (UI_MapEditorHirarchyButton_o* __this, const MethodInfo* method);
// 0x44266d0

void UI_MapEditorHirarchyButton___ctor(UI_MapEditorHirarchyButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


