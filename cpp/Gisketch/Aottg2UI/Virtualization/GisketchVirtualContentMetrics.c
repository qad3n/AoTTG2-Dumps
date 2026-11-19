// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualContentMetrics.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t mode, float itemWidth, float itemHeight, float gap, float viewportHeight, int32_t columns, int32_t virtualizationThreshold, int32_t overscanRows, const MethodInfo* method);
// 0x531e3c0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t mode,
               float itemWidth,float itemHeight,float gap,float viewportHeight,int32_t columns,
               int32_t virtualizationThreshold,int32_t overscanRows,MethodInfo *method)

{
  int32_t iVar1;
  undefined1 auVar2 [16];
  
  (__this->fields).Mode = mode;
  if (columns < 2) {
    columns = 1;
  }
  (__this->fields).Columns = columns;
  auVar2._4_4_ = itemHeight;
  auVar2._0_4_ = itemWidth;
  auVar2._8_4_ = gap;
  auVar2._12_4_ = viewportHeight;
  auVar2 = maxps(_DAT_0100a430,auVar2);
  (__this->fields).ItemWidth = (float)auVar2._0_4_;
  (__this->fields).ItemHeight = (float)auVar2._4_4_;
  (__this->fields).Gap = (float)auVar2._8_4_;
  (__this->fields).ViewportHeight = (float)auVar2._12_4_;
  iVar1 = 1;
  if (1 < virtualizationThreshold) {
    iVar1 = virtualizationThreshold;
  }
  (__this->fields).VirtualizationThreshold = iVar1;
  iVar1 = 0;
  if (0 < overscanRows) {
    iVar1 = overscanRows;
  }
  (__this->fields).OverscanRows = iVar1;
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ShouldVirtualize
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ShouldVirtualize (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x531e400

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ShouldVirtualize
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
               MethodInfo *method)

{
  return (__this->fields).VirtualizationThreshold <= itemCount;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$RowCount
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RowCount (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x531e410

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RowCount
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
                  MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if (itemCount < 1) {
    return 0;
  }
  iVar1 = (__this->fields).Columns;
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
  }
  fVar2 = (float)itemCount / (float)iVar1;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar2 = ceilf(fVar2);
    return (int)fVar2;
  }
  fVar2 = ceilf(fVar2);
  return (int)fVar2;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ContentHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x531e4a0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = 0;
  if (0 < itemCount) {
    iVar3 = (__this->fields).Columns;
    if (Il2CppMethodInitialized_0753e7f9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f9 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar5 = ceilf((float)itemCount / (float)iVar3);
    iVar3 = (int)fVar5;
  }
  iVar4 = 0;
  if (0 < iVar3 + -1) {
    iVar4 = iVar3 + -1;
  }
  uVar1 = (__this->fields).ItemHeight;
  uVar2 = (__this->fields).Gap;
  return (float)iVar4 * (float)uVar2 + (float)iVar3 * (float)uVar1;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ContentWidth
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentWidth (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, const MethodInfo* method);
// 0x531e550

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentWidth
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((__this->fields).Mode == 0) {
    return -1.0;
  }
  iVar2 = (__this->fields).Columns;
  iVar1 = iVar2 + -1;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return (float)iVar3 * (__this->fields).Gap + (float)iVar2 * (__this->fields).ItemWidth;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$RangeFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RangeFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, float offset, float viewportHeight, const MethodInfo* method);
// 0x531e590

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RangeFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
          float offset,float viewportHeight,MethodInfo *method)

{
  int iVar1;
  ulong uVar2;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_40;
  
  if (itemCount < 1) {
    GVar3.Start = -1;
    GVar3.End = -1;
  }
  else {
    fVar11 = (__this->fields).ItemHeight + (__this->fields).Gap;
    fVar10 = 0.0;
    if (0.0 <= offset) {
      fVar10 = offset;
    }
    if (Il2CppMethodInitialized_0753e7f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f6 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    local_40 = 1.0;
    fVar9 = floorf(fVar10 / fVar11);
    iVar1 = (int)fVar9 - (__this->fields).OverscanRows;
    iVar4 = (__this->fields).Columns;
    iVar7 = 0;
    if (0 < iVar1) {
      iVar7 = iVar1;
    }
    if (Il2CppMethodInitialized_0753e7f9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f9 = '\x01';
    }
    if (1.0 <= viewportHeight) {
      local_40 = viewportHeight;
    }
    fVar9 = (float)itemCount / (float)iVar4;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar9 = ceilf(fVar9);
      if (Il2CppMethodInitialized_0753e7f9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7f9 = '\x01';
      }
    }
    else {
      fVar9 = ceilf(fVar9);
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar10 = ceilf((fVar10 + local_40) / fVar11);
    iVar4 = (int)fVar10 + (__this->fields).OverscanRows;
    if ((int)fVar9 + -1 < iVar4) {
      iVar4 = (int)fVar9 + -1;
    }
    iVar1 = (__this->fields).Columns;
    uVar8 = iVar7 * iVar1;
    uVar6 = itemCount - 1;
    uVar5 = uVar6;
    if ((int)uVar8 < (int)uVar6) {
      uVar5 = uVar8;
    }
    uVar2 = 0;
    if (-1 < (int)uVar8) {
      uVar2 = (ulong)uVar5;
    }
    uVar5 = (iVar4 + 1) * iVar1 - 1;
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    GVar3 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)(uVar2 | (ulong)uVar5 << 0x20);
  }
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)GVar3;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$PositionFor
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__PositionFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemIndex, const MethodInfo* method);
// 0x531e790

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__PositionFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemIndex,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UnityEngine_Vector2_o UVar4;
  
  iVar3 = (__this->fields).Columns;
  uVar1 = (__this->fields).ItemHeight;
  uVar2 = (__this->fields).Gap;
  UVar4.fields.x = ((__this->fields).ItemWidth + (float)uVar2) * (float)(itemIndex % iVar3);
  UVar4.fields.y = ((float)uVar2 + (float)uVar1) * (float)-(itemIndex / iVar3);
  return (UnityEngine_Vector2_o)UVar4.fields;
}


