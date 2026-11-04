// Type: Utility.Color255
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Color255.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Color255.cs
// --------------------------------

// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x182332760

void
Utility_Color255___ctor(Utility_Color255_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).A = finallyEnd;
  (__this->fields).R = tryStart;
  (__this->fields).G = tryEnd;
  (__this->fields).B = finallyStart;
  return;
}


// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, const MethodInfo* method);
// 0x182332720

void Utility_Color255___ctor_2332720(Utility_Color255_o *__this,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).A = 0xff;
  (__this->fields).B = 0xff;
  (__this->fields).G = 0xff;
  (__this->fields).R = 0xff;
  return;
}


// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1823327a0

void Utility_Color255___ctor_23327a0(Utility_Color255_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  fVar1 = (color->fields).b;
  fVar2 = (color->fields).g;
  (__this->fields).R = (int)((color->fields).r * 255.0);
  fVar3 = (color->fields).a;
  (__this->fields).G = (int)(fVar2 * 255.0);
  (__this->fields).B = (int)(fVar1 * 255.0);
  (__this->fields).A = (int)(fVar3 * 255.0);
  return;
}


// Utility.Color255$$ToColor
// il2cpp: UnityEngine_Color_o Utility_Color255__ToColor (Utility_Color255_o* __this, const MethodInfo* method);
// 0x1823326d0

UnityEngine_Color_o *
Utility_Color255__ToColor
          (UnityEngine_Color_o *__return_storage_ptr__,Utility_Color255_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).B;
  (__return_storage_ptr__->fields).r = (float)(__this->fields).R / 255.0;
  (__return_storage_ptr__->fields).g = (float)(__this->fields).G / 255.0;
  iVar2 = (__this->fields).A;
  (__return_storage_ptr__->fields).b = (float)iVar1 / 255.0;
  (__return_storage_ptr__->fields).a = (float)iVar2 / 255.0;
  return __return_storage_ptr__;
}


// Utility.Color255$$Lerp
// il2cpp: Utility_Color255_o* Utility_Color255__Lerp (Utility_Color255_o* from, Utility_Color255_o* to, float t, const MethodInfo* method);
// 0x182332520
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823325a8: movaps xmm2, xmm6
// asm:   0x1823325ab: jmp 0x1823325b5
// asm:   0x1823325d9: movaps xmm2, xmm6
// asm:   0x1823325dc: jmp 0x1823325e6
// asm:   0x18233260a: movaps xmm2, xmm6
// asm:   0x18233260d: jmp 0x182332617

Utility_Color255_o *
Utility_Color255__Lerp(Utility_Color255_o *from,Utility_Color255_o *to,float t,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Utility_Color255_o *__this;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_184347800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184347800 = '\x01';
  }
  if ((from != (Utility_Color255_o *)0x0) && (to != (Utility_Color255_o *)0x0)) {
    iVar1 = (to->fields).R;
    fVar8 = (float)(from->fields).R;
    if (t < 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = t;
      if (1.0 < t) {
        fVar5 = 1.0;
      }
    }
    iVar2 = (to->fields).G;
    fVar9 = (float)(from->fields).G;
    if (t < 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = t;
      if (1.0 < t) {
        fVar6 = 1.0;
      }
    }
    iVar3 = (to->fields).B;
    fVar10 = (float)(from->fields).B;
    if (t < 0.0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = t;
      if (1.0 < t) {
        fVar7 = 1.0;
      }
    }
    iVar4 = (to->fields).A;
    fVar11 = (float)(from->fields).A;
    if (t < 0.0) {
      t = 0.0;
    }
    else if (1.0 < t) {
      t = 1.0;
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    (__this->fields).G = (int)(((float)iVar2 - fVar9) * fVar6 + fVar9);
    (__this->fields).B = (int)(((float)iVar3 - fVar10) * fVar7 + fVar10);
    (__this->fields).R = (int)(((float)iVar1 - fVar8) * fVar5 + fVar8);
    (__this->fields).A = (int)(((float)iVar4 - fVar11) * t + fVar11);
    return __this;
  }
  ThrowNullReferenceException();
}


// Utility.Color255$$Gradient
// il2cpp: Utility_Color255_o* Utility_Color255__Gradient (UnityEngine_GradientColorKey_array* colorKeys, UnityEngine_GradientAlphaKey_array* alphakeys, int32_t mode, float t, const MethodInfo* method);
// 0x1823323e0

Utility_Color255_o *
Utility_Color255__Gradient
          (UnityEngine_GradientColorKey_array *colorKeys,UnityEngine_GradientAlphaKey_array *alphakeys,
          int32_t mode,float t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Gradient_o *__this;
  UnityEngine_Color_o *pUVar5;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o local_58 [5];
  
  if (Il2CppMethodInitialized_184347801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Gradient);
    Il2CppMethodInitialized_184347801 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
  UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Gradient_o *)0x0) {
    UnityEngine_Gradient__SetKeys(__this,colorKeys,alphakeys,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Gradient__Evaluate(local_58,__this,t,(MethodInfo *)0x0);
    fVar1 = (pUVar5->fields).r;
    fVar2 = (pUVar5->fields).g;
    fVar3 = (pUVar5->fields).b;
    fVar4 = (pUVar5->fields).a;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).B = (int)(fVar3 * 255.0);
    (__this_00->fields).R = (int)(fVar1 * 255.0);
    (__this_00->fields).A = (int)(fVar4 * 255.0);
    (__this_00->fields).G = (int)(fVar2 * 255.0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Utility.Color255$$Equals
// il2cpp: bool Utility_Color255__Equals (Utility_Color255_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x182332290

bool Utility_Color255__Equals(Utility_Color255_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_184347802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184347802 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Utility_Color255)) {
      bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      if ((((__this->fields).R == *(int *)&obj[1].klass) &&
          ((__this->fields).G == *(int *)((longlong)&obj[1].klass + 4))) &&
         ((__this->fields).B == *(int *)&obj[1].monitor)) {
        return (__this->fields).A == *(int *)((longlong)&obj[1].monitor + 4);
      }
    }
  }
  return false;
}


// Utility.Color255$$GetHashCode
// il2cpp: int32_t Utility_Color255__GetHashCode (Utility_Color255_o* __this, const MethodInfo* method);
// 0x182332350

int32_t Utility_Color255__GetHashCode(Utility_Color255_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *local_28;
  Il2CppObject *pIStack_20;
  Il2CppObject *local_18;
  Il2CppObject *pIStack_10;
  
  if (Il2CppMethodInitialized_184347803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_int_int_GetHashCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_int_int_ctor);
    Il2CppMethodInitialized_184347803 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  pIStack_10 = (Il2CppObject *)0x0;
  local_28 = (Il2CppObject *)0x0;
  pIStack_20 = (Il2CppObject *)0x0;
  System_ValueTuple_int__int__int__int____ctor
            ((UnityEngine_TextCore_GlyphRect_o *)&local_28,(__this->fields).R,(__this->fields).G,
             (__this->fields).B,(__this->fields).A,MethodInfo_System_ValueTuple_int_int_int_int_ctor);
  local_18 = local_28;
  pIStack_10 = pIStack_20;
  iVar1 = System_ValueTuple_int__int__int__int___GetHashCode
                    ((System_ValueTuple_T1__T2__T3__T4__o *)&stack0xffffffffffffffe8,
                     (MethodInfo_104CBF0 *)MethodInfo_System_ValueTuple_int_int_int_int_GetHashCode);
  return iVar1;
}


