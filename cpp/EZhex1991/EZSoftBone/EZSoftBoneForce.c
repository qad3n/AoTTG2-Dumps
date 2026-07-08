// Type: EZhex1991.EZSoftBone.EZSoftBoneForce
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneForce.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForce.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_force
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__get_force (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x2459ef0

float EZhex1991_EZSoftBone_EZSoftBoneForce__get_force
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Force;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_force
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_force (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float value, const MethodInfo* method);
// 0x2459f00

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_force
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Force = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulence
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulence (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x2459f10

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulence
          (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Turbulence.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulence
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulence (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x2459f20

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulence
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  (__this->fields).m_Turbulence.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).m_Turbulence.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).m_Turbulence.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulenceMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulenceMode (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x2459f30

int32_t EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulenceMode
                  (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (__this->fields).m_TurbulenceMode;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulenceMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulenceMode (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, int32_t value, const MethodInfo* method);
// 0x2459f40

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulenceMode
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_TurbulenceMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_frequency
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__get_frequency (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x2459f50

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForce__get_frequency
          (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Frequency.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_frequency
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_frequency (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x2459f60

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_frequency
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  (__this->fields).m_Frequency.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).m_Frequency.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).m_Frequency.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_timeCycle
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__get_timeCycle (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x2459f70

float EZhex1991_EZSoftBone_EZSoftBoneForce__get_timeCycle
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,MethodInfo *method)

{
  return (__this->fields).m_TimeCycle;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_timeCycle
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_timeCycle (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float value, const MethodInfo* method);
// 0x2459f80

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
// 0x2459f90

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
          (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float time,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  UnityEngine_AnimationCurve_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  
  fVar1 = (__this->fields).m_Turbulence.fields.x;
  fVar2 = (__this->fields).m_Turbulence.fields.y;
  fVar9 = (__this->fields).m_Turbulence.fields.z;
  iVar4 = (__this->fields).m_TurbulenceMode;
  if (iVar4 == 1) {
    fVar6 = UnityEngine_Mathf__PerlinNoise
                      ((__this->fields).m_Frequency.fields.x * time,0.0,(MethodInfo *)0x0);
    uVar3 = (__this->fields).m_Frequency.fields.y;
    fVar7 = UnityEngine_Mathf__PerlinNoise((float)uVar3 * time,0.5,(MethodInfo *)0x0);
    fVar6 = fVar6 + fVar6 + -1.0;
    fVar7 = fVar7 + fVar7 + -1.0;
    fVar8 = UnityEngine_Mathf__PerlinNoise
                      (time * (__this->fields).m_Frequency.fields.z,1.0,(MethodInfo *)0x0);
    fVar8 = fVar8 + fVar8 + -1.0;
  }
  else {
    if (iVar4 != 0) goto LAB_0245a11a;
    fVar8 = (__this->fields).m_TimeCycle;
    fVar6 = floorf(time / fVar8);
    pUVar5 = (__this->fields).m_CurveX;
    if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) {
LAB_0245a140:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar7 = time - fVar6 * fVar8;
    fVar6 = fVar8;
    if (fVar7 <= fVar8) {
      fVar6 = fVar7;
    }
    fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar6) / fVar8;
    fVar6 = UnityEngine_AnimationCurve__Evaluate(pUVar5,fVar8,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).m_CurveY;
    if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) goto LAB_0245a140;
    fVar7 = UnityEngine_AnimationCurve__Evaluate(pUVar5,fVar8,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).m_CurveZ;
    if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) goto LAB_0245a140;
    fVar8 = UnityEngine_AnimationCurve__Evaluate(pUVar5,fVar8,(MethodInfo *)0x0);
  }
  fVar2 = fVar2 * fVar7;
  fVar1 = fVar1 * fVar6;
  fVar9 = fVar9 * fVar8;
LAB_0245a11a:
  UVar10.fields.y = fVar2 + 0.0;
  UVar10.fields.x = fVar1 + 0.0;
  UVar10.fields.z = fVar9 + (__this->fields).m_Force;
  return (UnityEngine_Vector3_o)UVar10.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$Perlin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__Perlin (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float x, float y, const MethodInfo* method);
// 0x245a170

float EZhex1991_EZSoftBone_EZSoftBoneForce__Perlin
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return fVar1 + fVar1 + -1.0;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$Curve
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__Curve (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_AnimationCurve_o* curve, float time, const MethodInfo* method);
// 0x245a150

float EZhex1991_EZSoftBone_EZSoftBoneForce__Curve
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_AnimationCurve_o *curve,
                float time,MethodInfo *method)

{
  float fVar1;
  
  if (curve != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar1 = UnityEngine_AnimationCurve__Evaluate(curve,time,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce___ctor (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x245a190

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
  il2cpp_runtime_glue(&(__this->fields).m_CurveX,pUVar1);
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveY = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_CurveY,pUVar1);
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveZ = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_CurveZ);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


