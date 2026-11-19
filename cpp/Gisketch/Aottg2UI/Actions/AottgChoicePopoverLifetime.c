// Type: Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoicePopoverLifetime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__Setup (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, System_Action_o* closed, const MethodInfo* method);
// 0x5398620

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,System_Action_o *closed,
               MethodInfo *method)

{
  (__this->fields)._closed = closed;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._closed);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__OnDestroy (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, const MethodInfo* method);
// 0x5398630

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__OnDestroy
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._closed;
  if (pSVar1 == (System_Action_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime___ctor (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, const MethodInfo* method);
// 0x5398650

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


