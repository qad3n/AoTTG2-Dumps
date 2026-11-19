// Type: UI.MapEditorHierarchyVirtualization
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorHierarchyVirtualization.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorHierarchyVirtualization$$ComputePoolSize
// il2cpp: int32_t UI_MapEditorHierarchyVirtualization__ComputePoolSize (float viewportHeight, float rowHeight, float spacing, int32_t buffer, int32_t minPool, int32_t totalRows, const MethodInfo* method);
// 0x5d78d70

int32_t UI_MapEditorHierarchyVirtualization__ComputePoolSize
                  (float viewportHeight,float rowHeight,float spacing,int32_t buffer,int32_t minPool,
                  int32_t totalRows,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar4 = 1.0;
  if (1.0 <= viewportHeight) {
    fVar4 = viewportHeight;
  }
  fVar5 = 1.0;
  if (1.0 <= rowHeight + spacing) {
    fVar5 = rowHeight + spacing;
  }
  fVar4 = ceilf(fVar4 / fVar5);
  iVar2 = 0;
  if (0 < buffer) {
    iVar2 = buffer;
  }
  iVar3 = iVar2 + (int)fVar4;
  if (iVar2 + (int)fVar4 < minPool) {
    iVar3 = minPool;
  }
  if (totalRows < 2) {
    totalRows = 1;
  }
  if (iVar3 < totalRows) {
    totalRows = iVar3;
  }
  if (iVar3 < 1) {
    totalRows = 1;
  }
  return totalRows;
}


// UI.MapEditorHierarchyVirtualization$$ComputeStartIndex
// il2cpp: int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndex (float contentAnchoredY, float stride, int32_t buffer, int32_t totalRows, int32_t poolSize, const MethodInfo* method);
// 0x5d79080
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7908e: jle 0x5d79124
// asm:   0x5d79122: mov eax, ebx

int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndex
                  (float contentAnchoredY,float stride,int32_t buffer,int32_t totalRows,int32_t poolSize,
                  MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = totalRows - poolSize;
  iVar3 = 0;
  if (0 < iVar2) {
    fVar5 = 0.0;
    if (0.0 <= contentAnchoredY) {
      fVar5 = contentAnchoredY;
    }
    fVar4 = 1.0;
    if (1.0 <= stride) {
      fVar4 = stride;
    }
    if (Il2CppMethodInitialized_0753e7f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f6 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar5 = floorf(fVar5 / fVar4);
    if (buffer < 1) {
      buffer = 0;
    }
    iVar1 = (int)fVar5 - ((uint)buffer >> 1);
    iVar3 = iVar2;
    if (iVar1 < iVar2) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


// UI.MapEditorHierarchyVirtualization$$ComputeStartIndexFromNormalized
// il2cpp: int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized (float verticalNormalizedPosition, int32_t maxStart, const MethodInfo* method);
// 0x5d79130

int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized
                  (float verticalNormalizedPosition,int32_t maxStart,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  MethodInfo *method_00;
  double x;
  double dVar3;
  float fVar4;
  Il2CppMethodPointer pIStack_20;
  undefined1 auStack_18 [16];
  
  if (maxStart < 1) {
    return 0;
  }
  fVar4 = 1.0 - verticalNormalizedPosition;
  auStack_18._0_4_ = 1.0;
  if (fVar4 <= 1.0) {
    auStack_18._0_4_ = fVar4;
  }
  auStack_18._0_4_ = -(uint)(0.0 <= fVar4) & auStack_18._0_4_;
  auStack_18._4_4_ = 0;
  auStack_18._8_4_ = 0;
  auStack_18._12_4_ = 0;
  if (g_data_07541320 == '\0') {
    auStack_18 = ZEXT416((uint)auStack_18._0_4_);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_07541320 = '\x01';
  }
  auStack_18._0_4_ = (float)auStack_18._0_4_ * (float)maxStart;
  fVar4 = (float)auStack_18._0_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar4 = (float)auStack_18._0_4_;
  }
  x = (double)fVar4;
  method_00 = (MethodInfo *)&pIStack_20;
  dVar3 = modf(x,(double *)method_00,method);
  if (0.0 <= (float)auStack_18._0_4_) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      pIStack_20 = (Il2CppMethodPointer)floor(x + 0.5,method_00);
    }
    else if (((long)(double)pIStack_20 & 1U) != 0) {
      pIStack_20 = (Il2CppMethodPointer)((double)pIStack_20 + 1.0);
    }
  }
  else if ((dVar3 != -0.5) || (NAN(dVar3))) {
    pIStack_20 = (Il2CppMethodPointer)ceil(x + -0.5,method_00);
  }
  else if (((long)(double)pIStack_20 & 1U) != 0) {
    pIStack_20 = (Il2CppMethodPointer)((double)pIStack_20 + -1.0);
  }
  iVar2 = (int)(double)pIStack_20;
  if (iVar2 < maxStart) {
    maxStart = iVar2;
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = maxStart;
  }
  return iVar1;
}


// UI.MapEditorHierarchyVirtualization$$ComputeTopSpacerHeight
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeTopSpacerHeight (int32_t start, float stride, const MethodInfo* method);
// 0x5d79270

float UI_MapEditorHierarchyVirtualization__ComputeTopSpacerHeight
                (int32_t start,float stride,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (1.0 <= stride) {
    fVar2 = stride;
  }
  fVar1 = 0.0;
  if (0.0 <= (float)start * fVar2) {
    fVar1 = (float)start * fVar2;
  }
  return fVar1;
}


// UI.MapEditorHierarchyVirtualization$$ComputeBottomSpacerHeight
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeBottomSpacerHeight (int32_t totalRows, int32_t start, int32_t visible, float stride, const MethodInfo* method);
// 0x5d79290

float UI_MapEditorHierarchyVirtualization__ComputeBottomSpacerHeight
                (int32_t totalRows,int32_t start,int32_t visible,float stride,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = totalRows - (start + visible);
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  fVar4 = 1.0;
  if (1.0 <= stride) {
    fVar4 = stride;
  }
  fVar3 = 0.0;
  if (0.0 <= (float)iVar1 * fVar4) {
    fVar3 = (float)iVar1 * fVar4;
  }
  return fVar3;
}


// UI.MapEditorHierarchyVirtualization$$ComputeContentYForStart
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeContentYForStart (int32_t start, float headerOffset, float stride, const MethodInfo* method);
// 0x5d7de10

float UI_MapEditorHierarchyVirtualization__ComputeContentYForStart
                (int32_t start,float headerOffset,float stride,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = 0;
  if (0 < start) {
    iVar1 = start;
  }
  fVar2 = 1.0;
  if (1.0 <= stride) {
    fVar2 = stride;
  }
  fVar3 = (float)iVar1 * fVar2 + headerOffset;
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}


// UI.MapEditorHierarchyVirtualization$$ComputeFocusScrollY
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeFocusScrollY (float currentScrollY, int32_t rowIndex, float stride, float viewportHeight, int32_t totalRows, float upperMargin, float lowerMargin, const MethodInfo* method);
// 0x5d7ba10

float UI_MapEditorHierarchyVirtualization__ComputeFocusScrollY
                (float currentScrollY,int32_t rowIndex,float stride,float viewportHeight,int32_t totalRows,
                float upperMargin,float lowerMargin,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = 1.0;
  if (1.0 <= stride) {
    fVar3 = stride;
  }
  if (rowIndex < 1) {
    rowIndex = 0;
  }
  fVar8 = 1.0;
  if (1.0 <= viewportHeight) {
    fVar8 = viewportHeight;
  }
  fVar4 = ((float)rowIndex + 0.5) * fVar3;
  fVar2 = 0.0;
  if (0.0 <= currentScrollY) {
    fVar2 = currentScrollY;
  }
  fVar5 = fVar4 - fVar2;
  fVar6 = 1.0;
  if (upperMargin <= 1.0) {
    fVar6 = upperMargin;
  }
  fVar6 = (float)(-(uint)(0.0 <= upperMargin) & (uint)fVar6) * fVar8;
  if (fVar6 <= fVar5) {
    fVar7 = 1.0;
    if (lowerMargin <= 1.0) {
      fVar7 = lowerMargin;
    }
    if (fVar5 <= (float)(-(uint)(0.0 <= lowerMargin) & (uint)fVar7) * fVar8) {
      return fVar2;
    }
  }
  iVar1 = 0;
  if (0 < totalRows) {
    iVar1 = totalRows;
  }
  fVar8 = fVar3 * (float)iVar1 - fVar8;
  fVar3 = 0.0;
  if (0.0 <= fVar8) {
    fVar3 = fVar8;
  }
  fVar4 = fVar4 - fVar6;
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  return (float)(-(uint)(0.0 <= fVar4) & (uint)fVar3);
}


// UI.MapEditorHierarchyVirtualization$$ComputeNormalizedForStart
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeNormalizedForStart (int32_t start, int32_t maxStart, const MethodInfo* method);
// 0x5d7de40

float UI_MapEditorHierarchyVirtualization__ComputeNormalizedForStart
                (int32_t start,int32_t maxStart,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (maxStart < 1) {
    return 1.0;
  }
  fVar2 = (float)maxStart;
  if (start < maxStart) {
    maxStart = start;
  }
  iVar1 = 0;
  if (-1 < start) {
    iVar1 = maxStart;
  }
  fVar2 = (float)iVar1 / fVar2;
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  return (float)(~-(uint)(0.0 <= fVar2) & 0x3f800000 | (uint)(1.0 - fVar3) & -(uint)(0.0 <= fVar2));
}


