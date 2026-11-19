// Type: Utility.Color255
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/Color255.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Color255.cs
// --------------------------------

// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x5de7730

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
// 0x5de7770

void Utility_Color255___ctor_5ce7770(Utility_Color255_o *__this,MethodInfo *method)

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
// 0x5de7790

void Utility_Color255___ctor_5ce7790(Utility_Color255_o *__this,UnityEngine_Color_o color,MethodInfo *method)

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
// 0x5de77d0

UnityEngine_Color_o Utility_Color255__ToColor(Utility_Color255_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  UnityEngine_Color_Fields UVar2;
  
  auVar1._0_4_ = (float)(__this->fields).R;
  auVar1._4_4_ = (float)(__this->fields).G;
  auVar1._8_4_ = (float)(__this->fields).B;
  auVar1._12_4_ = (float)(__this->fields).A;
  UVar2 = (UnityEngine_Color_Fields)divps(auVar1,_DAT_010052a0);
  return (UnityEngine_Color_o)UVar2;
}


// Utility.Color255$$Lerp
// il2cpp: Utility_Color255_o* Utility_Color255__Lerp (Utility_Color255_o* from, Utility_Color255_o* to, float t, const MethodInfo* method);
// 0x5de77f0

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
  
  if (Il2CppMethodInitialized_075482ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_075482ac = '\x01';
  }
  if ((from == (Utility_Color255_o *)0x0) || (to == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar9 = 1.0;
  if (t <= 1.0) {
    fVar9 = t;
  }
  fVar9 = (float)(-(uint)(0.0 <= t) & (uint)fVar9);
  iVar1 = (to->fields).R;
  iVar2 = (to->fields).G;
  iVar3 = (to->fields).B;
  iVar4 = (to->fields).A;
  fVar5 = (float)(from->fields).R;
  fVar6 = (float)(from->fields).G;
  fVar7 = (float)(from->fields).B;
  fVar8 = (float)(from->fields).A;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).R = (int)(fVar9 * ((float)iVar1 - fVar5) + fVar5);
  (__this->fields).G = (int)(fVar9 * ((float)iVar2 - fVar6) + fVar6);
  (__this->fields).B = (int)(fVar9 * ((float)iVar3 - fVar7) + fVar7);
  (__this->fields).A = (int)(fVar9 * ((float)iVar4 - fVar8) + fVar8);
  return __this;
}


// Utility.Color255$$Gradient
// il2cpp: Utility_Color255_o* Utility_Color255__Gradient (UnityEngine_GradientColorKey_array* colorKeys, UnityEngine_GradientAlphaKey_array* alphakeys, int32_t mode, float t, const MethodInfo* method);
// 0x5de78a0

Utility_Color255_o *
Utility_Color255__Gradient
          (UnityEngine_GradientColorKey_array *colorKeys,UnityEngine_GradientAlphaKey_array *alphakeys,
          int32_t mode,float t,MethodInfo *method)

{
  UnityEngine_Gradient_o *__this;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o UVar1;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075482ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Gradient);
    Il2CppMethodInitialized_075482ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
  UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Gradient_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Gradient__SetKeys(__this,colorKeys,alphakeys,(MethodInfo *)0x0);
  UVar1 = UnityEngine_Gradient__Evaluate(__this,t,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  local_38 = UVar1.fields.r;
  fStack_34 = UVar1.fields.g;
  (__this_00->fields).R = (int)(local_38 * 255.0);
  (__this_00->fields).G = (int)(fStack_34 * 255.0);
  (__this_00->fields).B = (int)(UVar1.fields.b * 255.0);
  (__this_00->fields).A = (int)(UVar1.fields.a * 255.0);
  return __this_00;
}


// Utility.Color255$$Equals
// il2cpp: bool Utility_Color255__Equals (Utility_Color255_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5de7970

bool Utility_Color255__Equals(Utility_Color255_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_075482ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_075482ae = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
    if ((((bVar1 <= (obj->klass->_2).typeHierarchyDepth) &&
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Utility_Color255)) &&
        ((__this->fields).R == *(int *)&obj[1].klass)) &&
       (((__this->fields).G == *(int *)((long)&obj[1].klass + 4) &&
        ((__this->fields).B == *(int *)&obj[1].monitor)))) {
      return (__this->fields).A == *(int *)((long)&obj[1].monitor + 4);
    }
  }
  return false;
}


// Utility.Color255$$GetHashCode
// il2cpp: int32_t Utility_Color255__GetHashCode (Utility_Color255_o* __this, const MethodInfo* method);
// 0x5de7a00

int32_t Utility_Color255__GetHashCode(Utility_Color255_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_ValueTuple_T1__T2__T3__T4__o local_28;
  
  if (Il2CppMethodInitialized_075482af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_int_int_GetHashCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_int_int_ctor);
    Il2CppMethodInitialized_075482af = '\x01';
  }
  local_28.fields.Item1 = (Il2CppObject *)0x0;
  local_28.fields.Item2 = (Il2CppObject *)0x0;
  System_ValueTuple_int__int__int__int____ctor
            (&local_28,(__this->fields).R,(__this->fields).G,(__this->fields).B,(__this->fields).A,
             (MethodInfo_4574370 *)MethodInfo_System_ValueTuple_int_int_int_int_ctor);
  local_28.fields.Item3 = local_28.fields.Item1;
  local_28.fields.Item4 = local_28.fields.Item2;
  iVar1 = System_ValueTuple_int__int__int__int___GetHashCode
                    ((System_ValueTuple_T1__T2__T3__T4__o *)&local_28.fields.Item3,
                     (MethodInfo_45753C0 *)MethodInfo_System_ValueTuple_int_int_int_int_GetHashCode);
  return iVar1;
}


