// Type: Gisketch.Aottg2UI.Data.GisketchOverlayDefinition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchOverlayDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchOverlayDefinition$$UsesCachedResetLifecycle
// il2cpp: bool Gisketch_Aottg2UI_Data_GisketchOverlayDefinition__UsesCachedResetLifecycle (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* __this, const MethodInfo* method);
// 0x1818d09e0

bool Gisketch_Aottg2UI_Data_GisketchOverlayDefinition__UsesCachedResetLifecycle
               (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this,MethodInfo *method)

{
  return (__this->fields).lifecycle == 1;
}


// Gisketch.Aottg2UI.Data.GisketchOverlayDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* __this, const MethodInfo* method);
// 0x1818d09f0

void Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this,MethodInfo *method)

{
  (__this->fields).modal = true;
  (__this->fields).dismissOnBackdrop = true;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


