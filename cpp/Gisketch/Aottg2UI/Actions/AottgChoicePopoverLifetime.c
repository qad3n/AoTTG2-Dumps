// Type: Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoicePopoverLifetime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__Setup (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, System_Action_o* closed, const MethodInfo* method);
// 0x3b21a30

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,
               System_Action_o *closed,MethodInfo *method)

{
  (__this->fields)._closed = closed;
  il2cpp_runtime_glue(&(__this->fields)._closed);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__OnDestroy (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, const MethodInfo* method);
// 0x3b21a40

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__OnDestroy
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtable_dispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._closed;
  if (pSVar1 != (System_Action_o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime___ctor (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, const MethodInfo* method);
// 0x3b21a60

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


