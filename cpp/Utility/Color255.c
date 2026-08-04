// Type: Utility.Color255
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Color255.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Color255.cs
// --------------------------------

// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x4488b50

void Utility_Color255___ctor
               (Utility_Color255_o *__this,int32_t r,int32_t g,int32_t b,int32_t a,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).R = r;
  (__this->fields).G = g;
  (__this->fields).B = b;
  (__this->fields).A = a;
  return;
}


// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, const MethodInfo* method);
// 0x4488b90

void Utility_Color255___ctor_4388b90(Utility_Color255_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).R = 0xff;
  (__this->fields).G = 0xff;
  (__this->fields).B = 0xff;
  (__this->fields).A = 0xff;
  return;
}


// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4488bb0

void Utility_Color255___ctor_4388bb0(Utility_Color255_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  float local_28;
  float fStack_24;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_28 = color.fields.r;
  fStack_24 = color.fields.g;
  (__this->fields).R = (int)(local_28 * 255.0);
  (__this->fields).G = (int)(fStack_24 * 255.0);
  (__this->fields).B = (int)(color.fields.b * 255.0);
  (__this->fields).A = (int)(color.fields.a * 255.0);
  return;
}


// Utility.Color255$$ToColor
// il2cpp: UnityEngine_Color_o Utility_Color255__ToColor (Utility_Color255_o* __this, const MethodInfo* method);
// 0x4488bf0

UnityEngine_Color_o Utility_Color255__ToColor(Utility_Color255_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1.fields.r = (float)(__this->fields).R / 255.0;
  UVar1.fields.g = (float)(__this->fields).G / 255.0;
  UVar1.fields.b = (float)(__this->fields).B / 255.0;
  UVar1.fields.a = (float)(__this->fields).A / 255.0;
  return (UnityEngine_Color_o)UVar1.fields;
}


// Utility.Color255$$Lerp
// il2cpp: Utility_Color255_o* Utility_Color255__Lerp (Utility_Color255_o* from, Utility_Color255_o* to, float t, const MethodInfo* method);
// 0x4488c30

Utility_Color255_o *
Utility_Color255__Lerp(Utility_Color255_o *from,Utility_Color255_o *to,float t,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Utility_Color255_o *pUVar5;
  UnityEngine_Gradient_o *__this;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  long *plVar6;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_Gradient_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Color_o UVar13;
  float fStack_60;
  float fStack_5c;
  
  alphaKeys = (UnityEngine_GradientAlphaKey_array *)to;
  colorKeys = (UnityEngine_GradientColorKey_array *)from;
  if (g_data_057ae8ce == '\0') {
    colorKeys = (UnityEngine_GradientColorKey_array *)&TypeInfo_Color255;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8ce = '\x01';
  }
  if ((from != (Utility_Color255_o *)0x0) && (to != (Utility_Color255_o *)0x0)) {
    fVar12 = 1.0;
    if (t <= 1.0) {
      fVar12 = t;
    }
    fVar12 = (float)(-(uint)(0.0 <= t) & (uint)fVar12);
    iVar1 = (to->fields).R;
    iVar2 = (to->fields).G;
    iVar3 = (to->fields).B;
    iVar4 = (to->fields).A;
    fVar8 = (float)(from->fields).R;
    fVar9 = (float)(from->fields).G;
    fVar10 = (float)(from->fields).B;
    fVar11 = (float)(from->fields).A;
    pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
    (pUVar5->fields).R = (int)(fVar12 * ((float)iVar1 - fVar8) + fVar8);
    (pUVar5->fields).G = (int)(fVar12 * ((float)iVar2 - fVar9) + fVar9);
    (pUVar5->fields).B = (int)(fVar12 * ((float)iVar3 - fVar10) + fVar10);
    (pUVar5->fields).A = (int)(fVar12 * ((float)iVar4 - fVar11) + fVar11);
    return pUVar5;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Gradient);
    g_data_057ae8cf = '\x01';
  }
  __this = (UnityEngine_Gradient_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Gradient);
  plVar6 = (long *)0x0;
  pUVar7 = __this;
  UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Gradient_o *)0x0) {
    UnityEngine_Gradient__SetKeys(__this,colorKeys,alphaKeys,(MethodInfo *)0x0);
    UVar13 = UnityEngine_Gradient__Evaluate(__this,fVar12,(MethodInfo *)0x0);
    pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
    fStack_60 = UVar13.fields.r;
    fStack_5c = UVar13.fields.g;
    (pUVar5->fields).R = (int)(fStack_60 * 255.0);
    (pUVar5->fields).G = (int)(fStack_5c * 255.0);
    (pUVar5->fields).B = (int)(UVar13.fields.b * 255.0);
    (pUVar5->fields).A = (int)(UVar13.fields.a * 255.0);
    return pUVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae8d0 = '\x01';
  }
  if (plVar6 != (long *)0x0) {
    if ((((*(byte *)(TypeInfo_Color255 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Color255 + 0x130) * 8) ==
          TypeInfo_Color255)) && ((int)(pUVar7->fields).m_Ptr == (int)plVar6[2])) &&
       ((*(int *)((long)&(pUVar7->fields).m_Ptr + 4) == *(int *)((long)plVar6 + 0x14) &&
        (*(int *)&pUVar7[1].klass == (int)plVar6[3])))) {
      iVar1 = *(int *)((long)&pUVar7[1].klass + 4);
      return (Utility_Color255_o *)
             (ulong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)((long)plVar6 + 0x1c));
    }
  }
  return (Utility_Color255_o *)0x0;
}


// Utility.Color255$$Gradient
// il2cpp: Utility_Color255_o* Utility_Color255__Gradient (UnityEngine_GradientColorKey_array* colorKeys, UnityEngine_GradientAlphaKey_array* alphakeys, int32_t mode, float t, const MethodInfo* method);
// 0x4488ce0

Utility_Color255_o *
Utility_Color255__Gradient
          (UnityEngine_GradientColorKey_array *colorKeys,UnityEngine_GradientAlphaKey_array *alphakeys,
          int32_t mode,float t,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Gradient_o *__this;
  Utility_Color255_o *__this_00;
  undefined4 in_register_00000014;
  long *plVar2;
  UnityEngine_Gradient_o *pUVar3;
  UnityEngine_Color_o UVar4;
  float local_38;
  float fStack_34;
  
  if (g_data_057ae8cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255,alphakeys,CONCAT44(in_register_00000014,mode));
    il2cpp_runtime_helper_023445d0(&TypeInfo_Gradient);
    g_data_057ae8cf = '\x01';
  }
  __this = (UnityEngine_Gradient_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Gradient);
  plVar2 = (long *)0x0;
  pUVar3 = __this;
  UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Gradient_o *)0x0) {
    UnityEngine_Gradient__SetKeys(__this,colorKeys,alphakeys,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Gradient__Evaluate(__this,t,(MethodInfo *)0x0);
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    local_38 = UVar4.fields.r;
    fStack_34 = UVar4.fields.g;
    (__this_00->fields).R = (int)(local_38 * 255.0);
    (__this_00->fields).G = (int)(fStack_34 * 255.0);
    (__this_00->fields).B = (int)(UVar4.fields.b * 255.0);
    (__this_00->fields).A = (int)(UVar4.fields.a * 255.0);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae8d0 = '\x01';
  }
  if (plVar2 != (long *)0x0) {
    if ((((*(byte *)(TypeInfo_Color255 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Color255 + 0x130) * 8) ==
          TypeInfo_Color255)) && ((int)(pUVar3->fields).m_Ptr == (int)plVar2[2])) &&
       ((*(int *)((long)&(pUVar3->fields).m_Ptr + 4) == *(int *)((long)plVar2 + 0x14) &&
        (*(int *)&pUVar3[1].klass == (int)plVar2[3])))) {
      iVar1 = *(int *)((long)&pUVar3[1].klass + 4);
      return (Utility_Color255_o *)
             (ulong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)((long)plVar2 + 0x1c));
    }
  }
  return (Utility_Color255_o *)0x0;
}


// Utility.Color255$$Equals
// il2cpp: bool Utility_Color255__Equals (Utility_Color255_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x4488db0

bool_conflict Utility_Color255__Equals(Utility_Color255_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  
  if (g_data_057ae8d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae8d0 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_Color255->_2).naturalAligment;
    if ((((bVar1 <= (obj->klass->_2).naturalAligment) &&
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Color255)) &&
        ((__this->fields).R == *(int *)&obj[1].klass)) &&
       (((__this->fields).G == *(int *)((long)&obj[1].klass + 4) &&
        ((__this->fields).B == *(int *)&obj[1].monitor)))) {
      iVar2 = (__this->fields).A;
      return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == *(int *)((long)&obj[1].monitor + 4));
    }
  }
  return 0;
}


// Utility.Color255$$GetHashCode
// il2cpp: int32_t Utility_Color255__GetHashCode (Utility_Color255_o* __this, const MethodInfo* method);
// 0x4488e40

int32_t Utility_Color255__GetHashCode(Utility_Color255_o *__this,MethodInfo *method)

{
  System_ValueTuple_T1__T2__T3__T4__o __this_00;
  int32_t iVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  
  if (g_data_057ae8d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetHashCode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_4_Int32_Int32_Int32_Int32);
    g_data_057ae8d1 = '\x01';
  }
  uVar2 = 0;
  pIVar3 = (Il2CppObject *)0x0;
  System_ValueTuple_int__int__int__int____ctor
            ((System_ValueTuple_T1__T2__T3__T4__o)ZEXT1632(ZEXT816(0)),(int32_t)&stack0xffffffffffffffd8,
             (__this->fields).R,(__this->fields).G,(__this->fields).B,
             (MethodInfo_2BD8FF0 *)(ulong)(uint)(__this->fields).A);
  __this_00.fields.Item2 = pIVar3;
  __this_00.fields.Item1 = (Il2CppObject *)uVar2;
  __this_00.fields.Item3 = (Il2CppObject *)uVar2;
  __this_00.fields.Item4 = pIVar3;
  iVar1 = System_ValueTuple_int__int__int__int___GetHashCode
                    (__this_00,(MethodInfo_2BDA0D0 *)&stack0xffffffffffffffe8);
  return iVar1;
}


