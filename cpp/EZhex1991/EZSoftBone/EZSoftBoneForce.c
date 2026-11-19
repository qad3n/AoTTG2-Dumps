// Type: EZhex1991.EZSoftBone.EZSoftBoneForce
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneForce.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForce.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_force
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__get_force (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x32a83d0

float EZhex1991_EZSoftBone_EZSoftBoneForce__get_force
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Force;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_force
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_force (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float value, const MethodInfo* method);
// 0x32a83e0

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_force
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Force = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulence
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulence (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x32a83f0

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulence
          (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Turbulence.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulence
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulence (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x32a8400

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulence
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields).m_Turbulence.fields.x = value.fields.x;
  (__this->fields).m_Turbulence.fields.y = value.fields.y;
  (__this->fields).m_Turbulence.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulenceMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulenceMode (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x32a8410

int32_t EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulenceMode
                  (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (__this->fields).m_TurbulenceMode;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulenceMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulenceMode (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, int32_t value, const MethodInfo* method);
// 0x32a8420

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulenceMode
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_TurbulenceMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_frequency
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__get_frequency (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x32a8430

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForce__get_frequency
          (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Frequency.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_frequency
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_frequency (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x32a8440

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_frequency
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields).m_Frequency.fields.x = value.fields.x;
  (__this->fields).m_Frequency.fields.y = value.fields.y;
  (__this->fields).m_Frequency.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_timeCycle
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__get_timeCycle (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x32a8450

float EZhex1991_EZSoftBone_EZSoftBoneForce__get_timeCycle
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (__this->fields).m_TimeCycle;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_timeCycle
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_timeCycle (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float value, const MethodInfo* method);
// 0x32a8460

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_timeCycle
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (__this->fields).m_TimeCycle = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$GetForce
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float time, const MethodInfo* method);
// 0x32a8470

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
          (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float time,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  UnityEngine_AnimationCurve_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  fVar1 = (__this->fields).m_Turbulence.fields.x;
  fVar2 = (__this->fields).m_Turbulence.fields.y;
  fVar6 = (__this->fields).m_Turbulence.fields.z;
  iVar3 = (__this->fields).m_TurbulenceMode;
  if (iVar3 == 1) {
    fVar5 = UnityEngine_Mathf__PerlinNoise((__this->fields).m_Frequency.fields.x * time,0.0,(MethodInfo *)0x0)
    ;
    fVar7 = UnityEngine_Mathf__PerlinNoise((__this->fields).m_Frequency.fields.y * time,0.5,(MethodInfo *)0x0)
    ;
    fVar5 = fVar5 + fVar5 + -1.0;
    fVar7 = fVar7 + fVar7 + -1.0;
    fVar8 = UnityEngine_Mathf__PerlinNoise(time * (__this->fields).m_Frequency.fields.z,1.0,(MethodInfo *)0x0)
    ;
    fVar8 = fVar8 + fVar8 + -1.0;
  }
  else {
    if (iVar3 != 0) goto label_032a85f6;
    fVar8 = (__this->fields).m_TimeCycle;
    fVar5 = floorf(time / fVar8);
    pUVar4 = (__this->fields).m_CurveX;
    if (pUVar4 == (UnityEngine_AnimationCurve_o *)0x0) {
label_032a8607:
      ThrowNullReferenceException();
    }
    fVar7 = time - fVar5 * fVar8;
    fVar5 = fVar8;
    if (fVar7 <= fVar8) {
      fVar5 = fVar7;
    }
    fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar5) / fVar8;
    fVar5 = UnityEngine_AnimationCurve__Evaluate(pUVar4,fVar8,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).m_CurveY;
    if (pUVar4 == (UnityEngine_AnimationCurve_o *)0x0) goto label_032a8607;
    fVar7 = UnityEngine_AnimationCurve__Evaluate(pUVar4,fVar8,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).m_CurveZ;
    if (pUVar4 == (UnityEngine_AnimationCurve_o *)0x0) goto label_032a8607;
    fVar8 = UnityEngine_AnimationCurve__Evaluate(pUVar4,fVar8,(MethodInfo *)0x0);
  }
  fVar2 = fVar2 * fVar7;
  fVar1 = fVar1 * fVar5;
  fVar6 = fVar6 * fVar8;
label_032a85f6:
  UVar9.fields.x = fVar1 + 0.0;
  UVar9.fields.y = fVar2 + 0.0;
  UVar9.fields.z = fVar6 + (__this->fields).m_Force;
  return (UnityEngine_Vector3_o)UVar9.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$Perlin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__Perlin (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float x, float y, const MethodInfo* method);
// 0x32a8630

float EZhex1991_EZSoftBone_EZSoftBoneForce__Perlin
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return fVar1 + fVar1 + -1.0;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$Curve
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__Curve (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_AnimationCurve_o* curve, float time, const MethodInfo* method);
// 0x32a8610

float EZhex1991_EZSoftBone_EZSoftBoneForce__Curve
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_AnimationCurve_o *curve,float time
                ,MethodInfo *method)

{
  float fVar1;
  
  if (curve == (UnityEngine_AnimationCurve_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_AnimationCurve__Evaluate(curve,time,(MethodInfo *)0x0);
  return fVar1;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce___ctor (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x32a8650

void EZhex1991_EZSoftBone_EZSoftBoneForce___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  
  (__this->fields).m_Force = 1.0;
  (__this->fields).m_Turbulence.fields.x = 1.0;
  (__this->fields).m_Turbulence.fields.y = 0.5;
  (__this->fields).m_Turbulence.fields.z = 2.0;
  (__this->fields).m_TurbulenceMode = 1;
  (__this->fields).m_Frequency.fields.x = 1.0;
  (__this->fields).m_Frequency.fields.y = 1.0;
  *(undefined8 *)&(__this->fields).m_Frequency.fields.z = 0x400000003fc00000;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveX = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_CurveX);
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveY = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_CurveY);
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveZ = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_CurveZ);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


