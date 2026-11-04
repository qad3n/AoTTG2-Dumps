// Type: UI.MapEditorHierarchyVirtualization
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorHierarchyVirtualization.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorHierarchyVirtualization$$ComputePoolSize
// il2cpp: int32_t UI_MapEditorHierarchyVirtualization__ComputePoolSize (float viewportHeight, float rowHeight, float spacing, int32_t buffer, int32_t minPool, int32_t totalRows, const MethodInfo* method);
// 0x1822b9850

int32_t UI_MapEditorHierarchyVirtualization__ComputePoolSize
                  (float viewportHeight,float rowHeight,float spacing,int32_t buffer,int32_t minPool,
                  int32_t totalRows,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MethodInfo *in_RDX;
  double dVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 1.0;
  if (1.0 <= viewportHeight) {
    fVar5 = viewportHeight;
  }
  fVar4 = 1.0;
  if (1.0 <= rowHeight + spacing) {
    fVar4 = rowHeight + spacing;
  }
  if (Il2CppMethodInitialized_18433df29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df29 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar3 = il2cpp_runtime_helper_1804f45c0((double)(fVar5 / fVar4),in_RDX);
  iVar1 = 0;
  if (-1 < buffer) {
    iVar1 = buffer;
  }
  iVar2 = (int)dVar3 + iVar1;
  if ((int)dVar3 + iVar1 < minPool) {
    iVar2 = minPool;
  }
  iVar1 = 1;
  if (0 < totalRows) {
    iVar1 = totalRows;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else if (iVar1 < iVar2) {
    return iVar1;
  }
  return iVar2;
}


// UI.MapEditorHierarchyVirtualization$$ComputeStartIndex
// il2cpp: int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndex (float contentAnchoredY, float stride, int32_t buffer, int32_t totalRows, int32_t poolSize, const MethodInfo* method);
// 0x1822b9a30

int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndex
                  (float contentAnchoredY,float stride,int32_t buffer,int32_t totalRows,int32_t poolSize,
                  MethodInfo *method)

{
  MethodInfo *in_RDX;
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  iVar1 = 0;
  if (-1 < totalRows - poolSize) {
    iVar1 = totalRows - poolSize;
  }
  if (iVar1 != 0) {
    fVar5 = 0.0;
    if (0.0 <= contentAnchoredY) {
      fVar5 = contentAnchoredY;
    }
    fVar3 = 1.0;
    if (1.0 <= stride) {
      fVar3 = stride;
    }
    if (Il2CppMethodInitialized_18433df26 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df26 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar4 = il2cpp_runtime_helper_1804f4690((double)(fVar5 / fVar3),in_RDX);
    iVar2 = 0;
    if (-1 < buffer) {
      iVar2 = buffer;
    }
    iVar2 = (int)dVar4 - iVar2 / 2;
    if (((iVar2 < 0) || (iVar2 <= iVar1)) && (iVar1 = iVar2, iVar2 < 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}


// UI.MapEditorHierarchyVirtualization$$ComputeStartIndexFromNormalized
// il2cpp: int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized (float verticalNormalizedPosition, int32_t maxStart, const MethodInfo* method);
// 0x1822b9900

int32_t UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized
                  (float verticalNormalizedPosition,int32_t maxStart,MethodInfo *method)

{
  MethodInfo *method_00;
  double dVar1;
  float fVar2;
  double x;
  Il2CppMethodPointer local_res20;
  
  if (maxStart < 1) {
    return 0;
  }
  fVar2 = 1.0 - verticalNormalizedPosition;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (Il2CppMethodInitialized_184340a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184340a0c = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  x = (double)((float)maxStart * fVar2);
  method_00 = (MethodInfo *)&local_res20;
  if (x < 0.0) {
    dVar1 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,method);
    if (dVar1 == -0.5) {
      if (((longlong)(double)local_res20 & 1U) != 0) {
        local_res20 = (Il2CppMethodPointer)((double)local_res20 - 1.0);
      }
    }
    else {
      local_res20 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(x - 0.5,method_00);
    }
  }
  else {
    dVar1 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,method);
    if (dVar1 == 0.5) {
      if (((longlong)(double)local_res20 & 1U) != 0) {
        local_res20 = (Il2CppMethodPointer)((double)local_res20 + 1.0);
      }
    }
    else {
      local_res20 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f4690(x + 0.5,method_00);
    }
  }
  if ((int)(double)local_res20 < 0) {
    maxStart = 0;
  }
  else if ((int)(double)local_res20 <= maxStart) {
    return (int)(double)local_res20;
  }
  return maxStart;
}


// UI.MapEditorHierarchyVirtualization$$ComputeTopSpacerHeight
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeTopSpacerHeight (int32_t start, float stride, const MethodInfo* method);
// 0x1822b9af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b9af0: nop 

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
  if (0.0 <= fVar2 * (float)start) {
    fVar1 = fVar2 * (float)start;
  }
  return fVar1;
}


// UI.MapEditorHierarchyVirtualization$$ComputeBottomSpacerHeight
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeBottomSpacerHeight (int32_t totalRows, int32_t start, int32_t visible, float stride, const MethodInfo* method);
// 0x1822b96a0

float UI_MapEditorHierarchyVirtualization__ComputeBottomSpacerHeight
                (int32_t totalRows,int32_t start,int32_t visible,float stride,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (totalRows - start) - visible;
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  fVar4 = 1.0;
  if (1.0 <= stride) {
    fVar4 = stride;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar4 * (float)iVar2) {
    fVar1 = fVar4 * (float)iVar2;
  }
  return fVar1;
}


// UI.MapEditorHierarchyVirtualization$$ComputeContentYForStart
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeContentYForStart (int32_t start, float headerOffset, float stride, const MethodInfo* method);
// 0x1822b96d0

float UI_MapEditorHierarchyVirtualization__ComputeContentYForStart
                (int32_t start,float headerOffset,float stride,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = 0;
  if (-1 < start) {
    iVar1 = start;
  }
  fVar2 = 1.0;
  if (1.0 <= stride) {
    fVar2 = stride;
  }
  fVar3 = fVar2 * (float)iVar1 + headerOffset;
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}


// UI.MapEditorHierarchyVirtualization$$ComputeFocusScrollY
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeFocusScrollY (float currentScrollY, int32_t rowIndex, float stride, float viewportHeight, int32_t totalRows, float upperMargin, float lowerMargin, const MethodInfo* method);
// 0x1822b9700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b97a0: jmp 0x1822b97d2

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
  
  fVar2 = 1.0;
  if (1.0 <= stride) {
    fVar2 = stride;
  }
  fVar5 = 1.0;
  if (1.0 <= viewportHeight) {
    fVar5 = viewportHeight;
  }
  iVar1 = 0;
  if (-1 < rowIndex) {
    iVar1 = rowIndex;
  }
  fVar4 = ((float)iVar1 + 0.5) * fVar2;
  fVar6 = 0.0;
  if (0.0 <= currentScrollY) {
    fVar6 = currentScrollY;
  }
  fVar3 = 0.0;
  fVar6 = fVar4 - fVar6;
  if (upperMargin < 0.0) {
    upperMargin = 0.0;
  }
  else if (1.0 < upperMargin) {
    upperMargin = 1.0;
  }
  if (lowerMargin < 0.0) {
    lowerMargin = 0.0;
  }
  else if (1.0 < lowerMargin) {
    lowerMargin = 1.0;
  }
  if ((fVar6 < upperMargin * fVar5) || (lowerMargin * fVar5 < fVar6)) {
    iVar1 = 0;
    if (-1 < totalRows) {
      iVar1 = totalRows;
    }
    fVar2 = (float)iVar1 * fVar2 - fVar5;
    fVar4 = fVar4 - upperMargin * fVar5;
    if (0.0 <= fVar4) {
      if (0.0 <= fVar2) {
        fVar3 = fVar2;
      }
      if (fVar4 <= fVar3) {
        fVar3 = fVar4;
      }
    }
  }
  else if (0.0 <= currentScrollY) {
    fVar3 = currentScrollY;
  }
  return fVar3;
}


// UI.MapEditorHierarchyVirtualization$$ComputeNormalizedForStart
// il2cpp: float UI_MapEditorHierarchyVirtualization__ComputeNormalizedForStart (int32_t start, int32_t maxStart, const MethodInfo* method);
// 0x1822b97f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b97fc: mov ecx, edx
// asm:   0x1822b97fe: jmp 0x1822b9807

float UI_MapEditorHierarchyVirtualization__ComputeNormalizedForStart
                (int32_t start,int32_t maxStart,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  if (maxStart < 1) {
    return 1.0;
  }
  if (((start < 0) || (iVar1 = maxStart, start <= maxStart)) && (iVar1 = start, start < 0)) {
    iVar1 = 0;
  }
  fVar2 = (float)iVar1 / (float)maxStart;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    return 0.0;
  }
  return 1.0 - fVar2;
}


