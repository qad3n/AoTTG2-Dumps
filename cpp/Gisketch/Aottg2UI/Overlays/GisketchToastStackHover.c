// Type: Gisketch.Aottg2UI.Overlays.GisketchToastStackHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastStackHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__Setup (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, System_Action_bool__o* hover, const MethodInfo* method);
// 0x3b53d90

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,System_Action_bool__o *hover,
               MethodInfo *method)

{
  (__this->fields)._hover = hover;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hover);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerEnter (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b53da0

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerEnter
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._hover;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)((pSVar1->fields).method_code,1,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerExit (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b53dc0

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerExit
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._hover;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)((pSVar1->fields).method_code,0,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, const MethodInfo* method);
// 0x3b53de0

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


