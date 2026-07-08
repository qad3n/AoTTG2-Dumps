// Type: UI.MapEditorHirarchyButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorHirarchyButton.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyButton.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorHirarchyButton$$Setup
// il2cpp: void UI_MapEditorHirarchyButton__Setup (UI_MapEditorHirarchyButton_o* __this, UnityEngine_Events_UnityAction_o* onButtonClick, UnityEngine_Events_UnityAction_o* onButtonRelease, const MethodInfo* method);
// 0x4112180

void UI_MapEditorHirarchyButton__Setup
               (UI_MapEditorHirarchyButton_o *__this,UnityEngine_Events_UnityAction_o *onButtonClick
               ,UnityEngine_Events_UnityAction_o *onButtonRelease,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).m_CanvasGroupCache;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this_00,onButtonClick,(MethodInfo *)0x0);
    (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)onButtonRelease;
    il2cpp_runtime_glue(&(__this->fields).m_OnClick);
    UnityEngine_UI_Selectable__set_transition
              ((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHirarchyButton$$OnPointerUp
// il2cpp: void UI_MapEditorHirarchyButton__OnPointerUp (UI_MapEditorHirarchyButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x41121d0

void UI_MapEditorHirarchyButton__OnPointerUp
               (UI_MapEditorHirarchyButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  
  UnityEngine_UI_Selectable__OnPointerUp
            ((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).m_OnClick;
  if (pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    (*(code *)(pUVar1->fields).m_PersistentCalls)
              (pUVar1[1].fields.m_Calls,(pUVar1->fields).m_InvokeArray);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorHirarchyButton$$.ctor
// il2cpp: void UI_MapEditorHirarchyButton___ctor (UI_MapEditorHirarchyButton_o* __this, const MethodInfo* method);
// 0x4112200

void UI_MapEditorHirarchyButton___ctor(UI_MapEditorHirarchyButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


