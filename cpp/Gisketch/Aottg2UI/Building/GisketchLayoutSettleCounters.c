// Type: Gisketch.Aottg2UI.Building.GisketchLayoutSettleCounters
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchLayoutSettleCounters.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchLayoutSettleCounters$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters___ctor (Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o __this, int32_t calls, int32_t fullCalls, int32_t targetedCalls, int32_t measurementCalls, int32_t canvasFlushes, int32_t flexRefreshes, int32_t scrollbarPasses, const MethodInfo* method);
// 0x537bd00

void Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters___ctor
               (Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o *__this,int32_t calls,
               int32_t fullCalls,int32_t targetedCalls,int32_t measurementCalls,int32_t canvasFlushes,
               int32_t flexRefreshes,int32_t scrollbarPasses,MethodInfo *method)

{
  (__this->fields).Calls = calls;
  (__this->fields).FullCalls = fullCalls;
  (__this->fields).TargetedCalls = targetedCalls;
  (__this->fields).MeasurementCalls = measurementCalls;
  (__this->fields).CanvasFlushes = canvasFlushes;
  (__this->fields).FlexRefreshes = flexRefreshes;
  (__this->fields).ScrollbarPasses = scrollbarPasses;
  return;
}


