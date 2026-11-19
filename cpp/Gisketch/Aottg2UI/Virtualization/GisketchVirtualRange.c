// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualRange.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x531e780

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,int32_t start,int32_t end,
               MethodInfo *method)

{
  (__this->fields).Start = start;
  (__this->fields).End = end;
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$get_Count
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_Count (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, const MethodInfo* method);
// 0x5320810

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_Count
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).End;
  iVar2 = (iVar1 - (__this->fields).Start) + 1;
  if (iVar1 < (__this->fields).Start) {
    iVar2 = 0;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$get_IsValid
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_IsValid (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, const MethodInfo* method);
// 0x531f540

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__get_IsValid
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).End;
  return 0 < (iVar1 - (__this->fields).Start) + 1 && (__this->fields).Start <= iVar1;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualRange$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__Contains (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o __this, int32_t index, const MethodInfo* method);
// 0x5320110

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange__Contains
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o *__this,int32_t index,
               MethodInfo *method)

{
  if (index < (__this->fields).Start) {
    return false;
  }
  return index <= (__this->fields).End;
}


