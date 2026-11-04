// Type: Gisketch.Aottg2UI.Building.GisketchLayoutSettleCounters
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchLayoutSettleCounters.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchLayoutSettleCounters$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters___ctor (Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o __this, int32_t calls, int32_t fullCalls, int32_t targetedCalls, int32_t measurementCalls, int32_t canvasFlushes, int32_t flexRefreshes, int32_t scrollbarPasses, const MethodInfo* method);
// 0x1818dadb0

void Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters___ctor
               (Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o *__this,int32_t calls,
               int32_t fullCalls,int32_t targetedCalls,int32_t measurementCalls,int32_t canvasFlushes,
               int32_t flexRefreshes,int32_t scrollbarPasses,MethodInfo *method)

{
  (__this->fields).MeasurementCalls = measurementCalls;
  (__this->fields).CanvasFlushes = canvasFlushes;
  (__this->fields).FlexRefreshes = flexRefreshes;
  (__this->fields).ScrollbarPasses = scrollbarPasses;
  (__this->fields).Calls = calls;
  (__this->fields).FullCalls = fullCalls;
  (__this->fields).TargetedCalls = targetedCalls;
  return;
}


