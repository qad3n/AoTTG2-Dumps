// Type: UI.RightClickHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/RightClickHandler.cs
// Prior real C# source: none
// --------------------------------

// UI.RightClickHandler$$Setup
// il2cpp: void UI_RightClickHandler__Setup (UI_RightClickHandler_o* __this, System_Action_PointerEventData__o* onRightClick, const MethodInfo* method);
// 0x5cec670

void UI_RightClickHandler__Setup
               (UI_RightClickHandler_o *__this,System_Action_PointerEventData__o *onRightClick,
               MethodInfo *method)

{
  (__this->fields)._onRightClick = onRightClick;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onRightClick);
  return;
}


// UI.RightClickHandler$$OnPointerClick
// il2cpp: void UI_RightClickHandler__OnPointerClick (UI_RightClickHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5cec680

void UI_RightClickHandler__OnPointerClick
               (UI_RightClickHandler_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtableDispatch;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((eventData->fields)._button_k__BackingField == 1) &&
     (pSVar1 = (__this->fields)._onRightClick, pSVar1 != (System_Action_PointerEventData__o *)0x0)) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// UI.RightClickHandler$$.ctor
// il2cpp: void UI_RightClickHandler___ctor (UI_RightClickHandler_o* __this, const MethodInfo* method);
// 0x5cec6b0

void UI_RightClickHandler___ctor(UI_RightClickHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


