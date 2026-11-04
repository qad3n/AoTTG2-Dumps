// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualScrollMetrics.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, float itemHeight, float gap, float viewportHeight, int32_t virtualizationThreshold, int32_t overscanRows, float paddingLeft, float paddingRight, float paddingTop, float paddingBottom, const MethodInfo* method);
// 0x18189e520

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,float itemHeight,
               float gap,float viewportHeight,int32_t virtualizationThreshold,int32_t overscanRows,
               float paddingLeft,float paddingRight,float paddingTop,float paddingBottom,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (1.0 <= itemHeight) {
    fVar2 = itemHeight;
  }
  (__this->fields).ItemHeight = fVar2;
  fVar2 = 0.0;
  if (0.0 <= gap) {
    fVar2 = gap;
  }
  (__this->fields).Gap = fVar2;
  fVar2 = 1.0;
  if (1.0 <= viewportHeight) {
    fVar2 = viewportHeight;
  }
  (__this->fields).ViewportHeight = fVar2;
  iVar1 = 1;
  if (0 < virtualizationThreshold) {
    iVar1 = virtualizationThreshold;
  }
  (__this->fields).VirtualizationThreshold = iVar1;
  iVar1 = 0;
  if (-1 < overscanRows) {
    iVar1 = overscanRows;
  }
  (__this->fields).OverscanRows = iVar1;
  fVar2 = 0.0;
  if (0.0 <= paddingLeft) {
    fVar2 = paddingLeft;
  }
  (__this->fields).PaddingLeft = fVar2;
  fVar2 = 0.0;
  if (0.0 <= paddingRight) {
    fVar2 = paddingRight;
  }
  (__this->fields).PaddingRight = fVar2;
  fVar2 = 0.0;
  if (0.0 <= paddingTop) {
    fVar2 = paddingTop;
  }
  (__this->fields).PaddingTop = fVar2;
  fVar2 = 0.0;
  if (0.0 <= paddingBottom) {
    fVar2 = paddingBottom;
  }
  (__this->fields).PaddingBottom = fVar2;
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$ShouldVirtualize
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ShouldVirtualize (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x18189e510

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ShouldVirtualize
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemCount,
               MethodInfo *method)

{
  return (__this->fields).VirtualizationThreshold <= itemCount;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$get_Step
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__get_Step (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, const MethodInfo* method);
// 0x18189e5b0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__get_Step
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,MethodInfo *method)

{
  return (__this->fields).Gap + (__this->fields).ItemHeight;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$ContentHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ContentHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x18189e330

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ContentHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemCount,
                MethodInfo *method)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < itemCount) {
    iVar3 = itemCount;
  }
  fVar1 = (__this->fields).PaddingTop;
  if (iVar3 != 0) {
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      iVar2 = iVar3 + -1;
    }
    return (float)iVar3 * (__this->fields).ItemHeight + fVar1 + (float)iVar2 * (__this->fields).Gap +
           (__this->fields).PaddingBottom;
  }
  return fVar1 + (__this->fields).PaddingBottom;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$RangeFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__RangeFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemCount, float offset, float viewportHeight, const MethodInfo* method);
// 0x18189e3c0

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__RangeFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemCount,
          float offset,float viewportHeight,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar4;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  int iVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields local_48;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,itemCount);
  iVar5 = 0;
  if (-1 < itemCount) {
    iVar5 = itemCount;
  }
  if (iVar5 != 0) {
    fVar7 = offset - (__this->fields).PaddingTop;
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar8 = fVar7;
    }
    fVar7 = 1.0;
    if (1.0 <= viewportHeight) {
      fVar7 = viewportHeight;
    }
    fVar1 = (__this->fields).Gap;
    fVar2 = (__this->fields).ItemHeight;
    if (Il2CppMethodInitialized_18433df26 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df26 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar6 = il2cpp_runtime_helper_1804f4690((double)(fVar8 / (fVar1 + fVar2)),method_00);
    iVar3 = (int)dVar6 - (__this->fields).OverscanRows;
    local_48.Start = 0;
    if (-1 < iVar3) {
      local_48.Start = iVar3;
    }
    fVar1 = (__this->fields).Gap;
    fVar2 = (__this->fields).ItemHeight;
    if (Il2CppMethodInitialized_18433df29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df29 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar6 = il2cpp_runtime_helper_1804f45c0((double)((fVar7 + fVar8) / (fVar1 + fVar2)),method_00);
    iVar3 = (int)dVar6 + (__this->fields).OverscanRows;
    local_48.End = iVar5 + -1;
    if (iVar3 <= iVar5 + -1) {
      local_48.End = iVar3;
    }
    return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)local_48;
  }
  GVar4.Start = -1;
  GVar4.End = -1;
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)GVar4;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$OffsetFor
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__OffsetFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemIndex, const MethodInfo* method);
// 0x18189e390
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189e390: nop 

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__OffsetFor
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemIndex,
                MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < itemIndex) {
    iVar1 = itemIndex;
  }
  return ((__this->fields).Gap + (__this->fields).ItemHeight) * (float)iVar1 + (__this->fields).PaddingTop;
}


