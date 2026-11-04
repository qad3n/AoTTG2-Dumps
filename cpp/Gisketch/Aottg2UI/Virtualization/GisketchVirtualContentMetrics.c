// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualContentMetrics.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t mode, float itemWidth, float itemHeight, float gap, float viewportHeight, int32_t columns, int32_t virtualizationThreshold, int32_t overscanRows, const MethodInfo* method);
// 0x18189bdd0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t mode,
               float itemWidth,float itemHeight,float gap,float viewportHeight,int32_t columns,
               int32_t virtualizationThreshold,int32_t overscanRows,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  (__this->fields).Mode = mode;
  iVar1 = 1;
  if (0 < columns) {
    iVar1 = columns;
  }
  (__this->fields).Columns = iVar1;
  fVar2 = 1.0;
  if (1.0 <= itemWidth) {
    fVar2 = itemWidth;
  }
  (__this->fields).ItemWidth = fVar2;
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
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ShouldVirtualize
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ShouldVirtualize (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x18189bdc0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ShouldVirtualize
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
               MethodInfo *method)

{
  return (__this->fields).VirtualizationThreshold <= itemCount;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$RowCount
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RowCount (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x18189bd40

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RowCount
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
                  MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 in_register_00000014;
  double dVar3;
  
  iVar2 = 0;
  if (-1 < itemCount) {
    iVar2 = itemCount;
  }
  if (iVar2 != 0) {
    iVar1 = (__this->fields).Columns;
    if (Il2CppMethodInitialized_18433df29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df29 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar3 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar2 / (float)iVar1),
                          (MethodInfo *)CONCAT44(in_register_00000014,itemCount));
    return (int)dVar3;
  }
  return 0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ContentHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, const MethodInfo* method);
// 0x18189ba80

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
                MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  iVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RowCount
                    (__this,itemCount,(MethodInfo *)0x0);
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    iVar2 = iVar1 + -1;
  }
  return (float)iVar2 * (__this->fields).Gap + (float)iVar1 * (__this->fields).ItemHeight;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ContentWidth
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentWidth (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, const MethodInfo* method);
// 0x18189bac0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__ContentWidth
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  if ((__this->fields).Mode != 0) {
    iVar2 = (__this->fields).Columns + -1;
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    return (float)iVar1 * (__this->fields).Gap + (float)(__this->fields).Columns * (__this->fields).ItemWidth;
  }
  return -1.0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$RangeFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RangeFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemCount, float offset, float viewportHeight, const MethodInfo* method);
// 0x18189bb40

Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RangeFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemCount,
          float offset,float viewportHeight,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields local_68;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,itemCount);
  iVar4 = 0;
  if (-1 < itemCount) {
    iVar4 = itemCount;
  }
  if (iVar4 == 0) {
    local_68.Start = -1;
    local_68.End = -1;
  }
  else {
    fVar9 = (__this->fields).Gap + (__this->fields).ItemHeight;
    fVar10 = 1.0;
    if (1.0 <= viewportHeight) {
      fVar10 = viewportHeight;
    }
    fVar8 = 0.0;
    if (0.0 <= offset) {
      fVar8 = offset;
    }
    if (Il2CppMethodInitialized_18433df26 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df26 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar6 = il2cpp_runtime_helper_1804f4690((double)(fVar8 / fVar9),method_00);
    iVar2 = (int)dVar6 - (__this->fields).OverscanRows;
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    iVar2 = (__this->fields).Columns;
    if (Il2CppMethodInitialized_18433df29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df29 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    cVar1 = Il2CppMethodInitialized_18433df29;
    dVar6 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar4 / (float)iVar2),method_00);
    fVar8 = 0.0;
    if (0.0 <= offset) {
      fVar8 = offset;
    }
    if (cVar1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df29 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar7 = il2cpp_runtime_helper_1804f45c0((double)((fVar8 + fVar10) / fVar9),method_00);
    iVar3 = (int)dVar7 + (__this->fields).OverscanRows;
    iVar2 = (int)dVar6 + -1;
    if (iVar3 <= (int)dVar6 + -1) {
      iVar2 = iVar3;
    }
    iVar5 = iVar5 * (__this->fields).Columns;
    if (((iVar5 < 0) || (local_68.Start = iVar4 + -1, iVar5 <= iVar4 + -1)) &&
       (local_68.Start = iVar5, iVar5 < 0)) {
      local_68.Start = 0;
    }
    iVar5 = (iVar2 + 1) * (__this->fields).Columns;
    if (iVar5 + -1 <= iVar4 + -1) {
      iVar4 = iVar5;
    }
    local_68.End = iVar4 + -1;
  }
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)local_68;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$PositionFor
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__PositionFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o __this, int32_t itemIndex, const MethodInfo* method);
// 0x18189bb00

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__PositionFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *__this,int32_t itemIndex,
          MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_Fields UVar2;
  
  iVar1 = (__this->fields).Columns;
  UVar2.y = ((__this->fields).Gap + (__this->fields).ItemHeight) * (float)-(itemIndex / iVar1);
  UVar2.x = ((__this->fields).Gap + (__this->fields).ItemWidth) * (float)(itemIndex % iVar1);
  return (UnityEngine_Vector2_o)UVar2;
}


