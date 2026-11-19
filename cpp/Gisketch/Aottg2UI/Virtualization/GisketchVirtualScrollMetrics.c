// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualScrollMetrics.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, float itemHeight, float gap, float viewportHeight, int32_t virtualizationThreshold, int32_t overscanRows, float paddingLeft, float paddingRight, float paddingTop, float paddingBottom, const MethodInfo* method);
// 0x5320820

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,float itemHeight,
               float gap,float viewportHeight,int32_t virtualizationThreshold,int32_t overscanRows,
               float paddingLeft,float paddingRight,float paddingTop,float paddingBottom,MethodInfo *method)

{
  undefined1 auVar1 [16];
  int32_t iVar2;
  int32_t iVar3;
  undefined1 auVar4 [12];
  undefined1 in_register_00001204 [12];
  undefined1 auVar6 [16];
  undefined1 auVar5 [16];
  undefined4 in_XMM1_Db;
  undefined1 auVar7 [16];
  
  auVar7._4_12_ = in_register_00001204;
  auVar7._0_4_ = itemHeight;
  auVar6._0_8_ = auVar7._0_8_;
  auVar6._8_4_ = in_register_00001204._0_4_;
  auVar6._12_4_ = in_XMM1_Db;
  auVar5._8_8_ = auVar6._8_8_;
  auVar5._4_4_ = gap;
  auVar5._0_4_ = itemHeight;
  auVar7 = maxps(ZEXT816(0x3f800000),auVar5);
  (__this->fields).ItemHeight = (float)auVar7._0_4_;
  (__this->fields).Gap = (float)auVar7._4_4_;
  auVar4 = ZEXT812(0x3f800000);
  if (auVar4._0_4_ <= viewportHeight) {
    auVar4._4_8_ = auVar4._4_8_;
    auVar4._0_4_ = viewportHeight;
  }
  (__this->fields).ViewportHeight = auVar4._0_4_;
  iVar2 = 1;
  if (1 < virtualizationThreshold) {
    iVar2 = virtualizationThreshold;
  }
  iVar3 = 0;
  if (0 < overscanRows) {
    iVar3 = overscanRows;
  }
  (__this->fields).VirtualizationThreshold = iVar2;
  (__this->fields).OverscanRows = iVar3;
  auVar1._4_4_ = paddingRight;
  auVar1._0_4_ = paddingLeft;
  auVar1._8_4_ = paddingTop;
  auVar1._12_4_ = paddingBottom;
  auVar7 = maxps(ZEXT816(0),auVar1);
  (__this->fields).PaddingLeft = (float)auVar7._0_4_;
  (__this->fields).PaddingRight = (float)auVar7._4_4_;
  (__this->fields).PaddingTop = (float)auVar7._8_4_;
  (__this->fields).PaddingBottom = (float)auVar7._12_4_;
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$ShouldVirtualize
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ShouldVirtualize (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x5320870

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ShouldVirtualize
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemCount,
               MethodInfo *method)

{
  return (__this->fields).VirtualizationThreshold <= itemCount;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$get_Step
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__get_Step (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, const MethodInfo* method);
// 0x5320880

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__get_Step
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,MethodInfo *method)

{
  return (__this->fields).ItemHeight + (__this->fields).Gap;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$ContentHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ContentHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x5320890

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__ContentHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemCount,
                MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (__this->fields).PaddingTop;
  if (itemCount < 1) {
    return fVar1 + (__this->fields).PaddingBottom;
  }
  uVar2 = (__this->fields).ItemHeight;
  uVar3 = (__this->fields).Gap;
  return (float)(itemCount + -1) * (float)uVar3 + fVar1 + (float)itemCount * (float)uVar2 +
         (__this->fields).PaddingBottom;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$RangeFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__RangeFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemCount, float offset, float viewportHeight, const MethodInfo* method);
// 0x53208d0

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__RangeFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemCount,
          float offset,float viewportHeight,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  int iVar3;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar4;
  int32_t iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (itemCount < 1) {
    GVar4.Start = -1;
    GVar4.End = -1;
  }
  else {
    fVar7 = offset - (__this->fields).PaddingTop;
    fVar9 = 0.0;
    if (0.0 <= fVar7) {
      fVar9 = fVar7;
    }
    fVar7 = (__this->fields).ItemHeight;
    fVar1 = (__this->fields).Gap;
    if (Il2CppMethodInitialized_0753e7f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f6 = '\x01';
    }
    fVar8 = 1.0;
    if (1.0 <= viewportHeight) {
      fVar8 = viewportHeight;
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar7 = floorf(fVar9 / (fVar7 + fVar1));
    iVar3 = (int)fVar7 - (__this->fields).OverscanRows;
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    fVar7 = (__this->fields).ItemHeight;
    fVar1 = (__this->fields).Gap;
    if (Il2CppMethodInitialized_0753e7f9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f9 = '\x01';
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar9 = ceilf((fVar8 + fVar9) / (fVar7 + fVar1));
    iVar5 = (int)fVar9 + (__this->fields).OverscanRows;
    if (itemCount + -1 < iVar5) {
      iVar5 = itemCount + -1;
    }
    GVar4.End = iVar5;
    GVar4.Start = iVar6;
  }
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)GVar4;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$OffsetFor
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__OffsetFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o __this, int32_t itemIndex, const MethodInfo* method);
// 0x5320a50

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics__OffsetFor
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__this,int32_t itemIndex,
                MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < itemIndex) {
    iVar1 = itemIndex;
  }
  return (float)iVar1 * ((__this->fields).ItemHeight + (__this->fields).Gap) + (__this->fields).PaddingTop;
}


