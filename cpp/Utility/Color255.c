// Type: Utility.Color255
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/Color255.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Color255.cs  [CHANGED since prior version]
// --------------------------------

// Utility.Color255$$.ctor
// il2cpp: void Utility_Color255___ctor (Utility_Color255_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x4153a30

void Utility_Color255___ctor
               (Utility_Color255_o *__this,int32_t r,int32_t g,int32_t b,int32_t a,
               MethodInfo *method)

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
// 0x4158230

void Utility_Color255___ctor(Utility_Color255_o *__this,MethodInfo *method)

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
// 0x4158250

void Utility_Color255___ctor
               (Utility_Color255_o *__this,UnityEngine_Color_o color,MethodInfo *method)

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
// 0x4158290

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
// 0x41582d0

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
  
  if (DAT_05704a17 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_05704a17 = '\x01';
  }
  if ((from != (Utility_Color255_o *)0x0) && (to != (Utility_Color255_o *)0x0)) {
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
    __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).R = (int)(fVar9 * ((float)iVar1 - fVar5) + fVar5);
    (__this->fields).G = (int)(fVar9 * ((float)iVar2 - fVar6) + fVar6);
    (__this->fields).B = (int)(fVar9 * ((float)iVar3 - fVar7) + fVar7);
    (__this->fields).A = (int)(fVar9 * ((float)iVar4 - fVar8) + fVar8);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Color255$$Gradient
// il2cpp: Utility_Color255_o* Utility_Color255__Gradient (UnityEngine_GradientColorKey_array* colorKeys, UnityEngine_GradientAlphaKey_array* alphakeys, int32_t mode, float t, const MethodInfo* method);
// 0x4158380

Utility_Color255_o *
Utility_Color255__Gradient
          (UnityEngine_GradientColorKey_array *colorKeys,
          UnityEngine_GradientAlphaKey_array *alphakeys,int32_t mode,float t,MethodInfo *method)

{
  UnityEngine_Gradient_o *__this;
  Utility_Color255_o *__this_00;
  undefined4 in_register_00000014;
  UnityEngine_Color_o UVar1;
  float local_38;
  float fStack_34;
  
  if (DAT_05704a18 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255,alphakeys,CONCAT44(in_register_00000014,mode));
    il2cpp_init_method_metadata(&TypeInfo_Gradient);
    DAT_05704a18 = '\x01';
  }
  __this = (UnityEngine_Gradient_o *)il2cpp_runtime_glue(TypeInfo_Gradient);
  UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Gradient_o *)0x0) {
    UnityEngine_Gradient__SetKeys(__this,colorKeys,alphakeys,(MethodInfo *)0x0);
    UVar1 = UnityEngine_Gradient__Evaluate(__this,t,(MethodInfo *)0x0);
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    local_38 = UVar1.fields.r;
    fStack_34 = UVar1.fields.g;
    (__this_00->fields).R = (int)(local_38 * 255.0);
    (__this_00->fields).G = (int)(fStack_34 * 255.0);
    (__this_00->fields).B = (int)(UVar1.fields.b * 255.0);
    (__this_00->fields).A = (int)(UVar1.fields.a * 255.0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Color255$$Equals
// il2cpp: bool Utility_Color255__Equals (Utility_Color255_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x4158450

bool_conflict
Utility_Color255__Equals(Utility_Color255_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_05704a19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_05704a19 = '\x01';
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
// 0x41584e0

int32_t Utility_Color255__GetHashCode(Utility_Color255_o *__this,MethodInfo *method)

{
  System_ValueTuple_T1__T2__T3__T4__o __this_00;
  int32_t iVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05704a1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetHashCode);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_4_Int32_Int32_Int32_Int32);
    DAT_05704a1a = '\x01';
  }
  uVar2 = 0;
  pIVar3 = (Il2CppObject *)0x0;
  System_ValueTuple<int__int__int__int>___ctor
            ((System_ValueTuple_T1__T2__T3__T4__o)ZEXT1632(ZEXT816(0)),
             (int32_t)&stack0xffffffffffffffd8,(__this->fields).R,(__this->fields).G,
             (__this->fields).B,(MethodInfo_2B68A70 *)(ulong)(uint)(__this->fields).A);
  __this_00.fields.Item2 = pIVar3;
  __this_00.fields.Item1 = (Il2CppObject *)uVar2;
  __this_00.fields.Item3 = (Il2CppObject *)uVar2;
  __this_00.fields.Item4 = pIVar3;
  iVar1 = System_ValueTuple<int__int__int__int>__GetHashCode
                    (__this_00,(MethodInfo_2B69B50 *)&stack0xffffffffffffffe8);
  return iVar1;
}


