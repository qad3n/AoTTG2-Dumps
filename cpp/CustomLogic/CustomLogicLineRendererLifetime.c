// Type: CustomLogic.CustomLogicLineRendererLifetime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineRendererLifetime.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineRendererLifetime$$OnDestroy
// il2cpp: void CustomLogic_CustomLogicLineRendererLifetime__OnDestroy (CustomLogic_CustomLogicLineRendererLifetime_o* __this, const MethodInfo* method);
// 0x59fee10

void CustomLogic_CustomLogicLineRendererLifetime__OnDestroy
               (CustomLogic_CustomLogicLineRendererLifetime_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this_00;
  CustomLogic_CustomLogicLineRendererBuiltin_o **targetAddress;
  
  __this_00 = (__this->fields).LineRenderer;
  targetAddress = &(__this->fields).LineRenderer;
  if (__this_00 != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources(__this_00,(MethodInfo *)0x0);
  }
  *targetAddress = (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// CustomLogic.CustomLogicLineRendererLifetime$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererLifetime___ctor (CustomLogic_CustomLogicLineRendererLifetime_o* __this, const MethodInfo* method);
// 0x59fee40

void CustomLogic_CustomLogicLineRendererLifetime___ctor
               (CustomLogic_CustomLogicLineRendererLifetime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


