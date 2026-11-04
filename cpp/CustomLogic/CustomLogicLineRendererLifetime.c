// Type: CustomLogic.CustomLogicLineRendererLifetime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineRendererLifetime.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineRendererLifetime$$OnDestroy
// il2cpp: void CustomLogic_CustomLogicLineRendererLifetime__OnDestroy (CustomLogic_CustomLogicLineRendererLifetime_o* __this, const MethodInfo* method);
// 0x181f05e40

void CustomLogic_CustomLogicLineRendererLifetime__OnDestroy
               (CustomLogic_CustomLogicLineRendererLifetime_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicLineRendererBuiltin_o *__this_00;
  
  __this_00 = (__this->fields).LineRenderer;
  if (__this_00 != (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineRendererBuiltin__ReleaseResources(__this_00,(MethodInfo *)0x0);
  }
  (__this->fields).LineRenderer = (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LineRenderer,(void *)0x0);
  return;
}


// CustomLogic.CustomLogicLineRendererLifetime$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineRendererLifetime___ctor (CustomLogic_CustomLogicLineRendererLifetime_o* __this, const MethodInfo* method);
// 0x180528540

void
CustomLogic_CustomLogicLineRendererLifetime___ctor(CustomLogic_CustomLogicLineRendererLifetime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


