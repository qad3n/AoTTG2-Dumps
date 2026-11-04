// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualRange.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x180acca30

void
Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange___ctor(Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, int32_t start, int32_t end, MethodInfo* method)

{
  (__this->fields).tileX = tileX;
  (__this->fields).tileZ = tileZ;
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$get_Count
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_Count (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, const MethodInfo* method);
// 0x18189e2f0

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_Count
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,MethodInfo *method)

{
  if ((__this->fields).Start <= (__this->fields).End) {
    return ((__this->fields).End - (__this->fields).Start) + 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$get_IsValid
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_IsValid (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, const MethodInfo* method);
// 0x18189e310

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_IsValid
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,MethodInfo *method)

{
  if ((__this->fields).Start <= (__this->fields).End) {
    return 0 < ((__this->fields).End - (__this->fields).Start) + 1;
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__Contains (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, int32_t index, const MethodInfo* method);
// 0x18189e2e0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__Contains
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,int32_t index,
               MethodInfo *method)

{
  if (index < (__this->fields).Start) {
    return false;
  }
  return index <= (__this->fields).End;
}


