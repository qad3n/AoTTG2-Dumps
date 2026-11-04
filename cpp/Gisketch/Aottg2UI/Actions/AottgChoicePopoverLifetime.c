// Type: Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoicePopoverLifetime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__Setup (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, System_Action_o* closed, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__Setup(Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, System_Action_o* closed, MethodInfo* method)

{
  (__this->fields)._closed = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._closed,value);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__OnDestroy (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, const MethodInfo* method);
// 0x1818f79c0

void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime__OnDestroy
               (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields)._closed;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime___ctor (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime___ctor(Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


