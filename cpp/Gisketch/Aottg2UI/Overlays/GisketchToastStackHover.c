// Type: Gisketch.Aottg2UI.Overlays.GisketchToastStackHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastStackHover.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__Setup (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, System_Action_bool__o* hover, const MethodInfo* method);
// 0x3ae9470

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,
               System_Action_bool__o *hover,MethodInfo *method)

{
  (__this->fields)._hover = hover;
  il2cpp_runtime_glue(&(__this->fields)._hover);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerEnter (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ae9480

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerEnter
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtable_dispatch;
  
  pSVar1 = (__this->fields)._hover;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,1,(pSVar1->fields).method,vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerExit (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ae94a0

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover__OnPointerExit
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtable_dispatch;
  
  pSVar1 = (__this->fields)._hover;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,0,(pSVar1->fields).method,vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o* __this, const MethodInfo* method);
// 0x3ae94c0

void Gisketch_Aottg2UI_Overlays_GisketchToastStackHover___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


