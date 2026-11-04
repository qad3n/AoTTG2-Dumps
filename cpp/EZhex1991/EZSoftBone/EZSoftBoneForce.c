// Type: EZhex1991.EZSoftBone.EZSoftBoneForce
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneForce.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForce.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_force
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__get_force (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x180584ff0

float
EZhex1991_EZSoftBone_EZSoftBoneForce__get_force(EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Force;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_force
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_force (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float value, const MethodInfo* method);
// 0x180585060

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_force
               (UnityEngine_Keyframe_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_OutWeight = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulence
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulence (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x180585040

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulence
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).m_Turbulence.fields.z;
  fVar2 = (__this->fields).m_Turbulence.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields).m_Turbulence.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulence
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulence (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1805850a0

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulence
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_Vector3_o *value,MethodInfo *method
               )

{
  float fVar1;
  float fVar2;
  
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields).m_Turbulence.fields.x = (value->fields).x;
  (__this->fields).m_Turbulence.fields.y = fVar2;
  (__this->fields).m_Turbulence.fields.z = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_turbulenceMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulenceMode (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x180585030

int32_t EZhex1991_EZSoftBone_EZSoftBoneForce__get_turbulenceMode
                  (UnityEngine_UI_CoroutineTween_ColorTween_o *__this,MethodInfo *method)

{
  return (__this->fields).m_TweenMode;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_turbulenceMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulenceMode (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, int32_t value, const MethodInfo* method);
// 0x180585090

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_turbulenceMode
               (UnityEngine_UI_CoroutineTween_ColorTween_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_TweenMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_frequency
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForce__get_frequency (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x180585000

UnityEngine_AdaptivePerformance_ClusterInfo_o *
EZhex1991_EZSoftBone_EZSoftBoneForce__get_frequency
          (UnityEngine_AdaptivePerformance_ClusterInfo_o *__return_storage_ptr__,
          UnityEngine_AdaptivePerformance_Provider_PerformanceDataRecord_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields)._ClusterInfo_k__BackingField.fields._LittleCore_k__BackingField;
  iVar2 = (__this->fields)._ClusterInfo_k__BackingField.fields._MediumCore_k__BackingField;
  (__return_storage_ptr__->fields)._BigCore_k__BackingField =
       (__this->fields)._ClusterInfo_k__BackingField.fields._BigCore_k__BackingField;
  (__return_storage_ptr__->fields)._MediumCore_k__BackingField = iVar2;
  (__return_storage_ptr__->fields)._LittleCore_k__BackingField = iVar1;
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_frequency
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_frequency (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x180585070

void EZhex1991_EZSoftBone_EZSoftBoneForce__set_frequency
               (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_Vector3_o *value,MethodInfo *method
               )

{
  float fVar1;
  float fVar2;
  
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields).m_Frequency.fields.x = (value->fields).x;
  (__this->fields).m_Frequency.fields.y = fVar2;
  (__this->fields).m_Frequency.fields.z = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$get_timeCycle
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__get_timeCycle (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x180585020

float
EZhex1991_EZSoftBone_EZSoftBoneForce__get_timeCycle(EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, MethodInfo* method)

{
  return (__this->fields).m_TimeCycle;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$set_timeCycle
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce__set_timeCycle (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float value, const MethodInfo* method);
// 0x180585080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180585080: nop 

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
// 0x180584cf0

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,
          float time,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AnimationCurve_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = (__this->fields).m_Turbulence.fields.x;
  iVar1 = (__this->fields).m_TurbulenceMode;
  fVar7 = (__this->fields).m_Turbulence.fields.y;
  fVar5 = (__this->fields).m_Turbulence.fields.z;
  if (iVar1 == 0) {
    fVar6 = (__this->fields).m_TimeCycle;
    fVar3 = (float)il2cpp_runtime_helper_1804f4110(time / fVar6);
    fVar3 = time - fVar3 * fVar6;
    if (fVar3 < 0.0) {
      fVar6 = 0.0;
    }
    else if (fVar3 <= fVar6) {
      fVar6 = fVar3;
    }
    pUVar2 = (__this->fields).m_CurveX;
    fVar6 = fVar6 / (__this->fields).m_TimeCycle;
    if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) {
label_180584ec8:
      ThrowNullReferenceException();
    }
    fVar4 = UnityEngine_AnimationCurve__Evaluate(pUVar2,fVar6,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).m_CurveY;
    if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_180584ec8;
    fVar3 = UnityEngine_AnimationCurve__Evaluate(pUVar2,fVar6,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).m_CurveZ;
    if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_180584ec8;
    fVar6 = UnityEngine_AnimationCurve__Evaluate(pUVar2,fVar6,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) goto label_180584e6e;
    fVar3 = UnityEngine_Mathf__PerlinNoise(time * (__this->fields).m_Frequency.fields.x,0.0,(MethodInfo *)0x0)
    ;
    fVar4 = (fVar3 + fVar3) - 1.0;
    fVar3 = UnityEngine_Mathf__PerlinNoise(time * (__this->fields).m_Frequency.fields.y,0.5,(MethodInfo *)0x0)
    ;
    fVar3 = (fVar3 + fVar3) - 1.0;
    fVar6 = UnityEngine_Mathf__PerlinNoise(time * (__this->fields).m_Frequency.fields.z,1.0,(MethodInfo *)0x0)
    ;
    fVar6 = (fVar6 + fVar6) - 1.0;
  }
  fVar8 = fVar4 * fVar8;
  fVar7 = fVar3 * fVar7;
  fVar5 = fVar6 * fVar5;
label_180584e6e:
  fVar3 = (__this->fields).m_Force;
  (__return_storage_ptr__->fields).x = fVar8 + 0.0;
  (__return_storage_ptr__->fields).y = fVar7 + 0.0;
  (__return_storage_ptr__->fields).z = fVar5 + fVar3;
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$Perlin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__Perlin (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, float x, float y, const MethodInfo* method);
// 0x180584ed0

float EZhex1991_EZSoftBone_EZSoftBoneForce__Perlin
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return (fVar1 + fVar1) - 1.0;
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$Curve
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForce__Curve (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, UnityEngine_AnimationCurve_o* curve, float time, const MethodInfo* method);
// 0x180584cc0

float EZhex1991_EZSoftBone_EZSoftBoneForce__Curve
                (EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this,UnityEngine_AnimationCurve_o *curve,float time
                ,MethodInfo *method)

{
  float fVar1;
  
  if (curve != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar1 = UnityEngine_AnimationCurve__Evaluate(curve,time,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForce___ctor (EZhex1991_EZSoftBone_EZSoftBoneForce_o* __this, const MethodInfo* method);
// 0x180584f00

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
  (__this->fields).m_Frequency.fields.z = 1.5;
  (__this->fields).m_TimeCycle = 2.0;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveX = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_CurveX,pUVar1);
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveY = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_CurveY,pUVar1);
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  (__this->fields).m_CurveZ = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_CurveZ,pUVar1);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


