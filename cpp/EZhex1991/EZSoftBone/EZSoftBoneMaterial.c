// Type: EZhex1991.EZSoftBone.EZSoftBoneMaterial
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneMaterial.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_damping
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_damping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a2f0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_damping
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Damping;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_damping
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_damping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x245a300

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_damping
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Damping = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_dampingCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_dampingCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a320

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_dampingCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DampingCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a330

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Stiffness;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_stiffness
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_stiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x245a340

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_stiffness
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Stiffness = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffnessCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffnessCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a360

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffnessCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_StiffnessCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistance
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a370

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Resistance;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_resistance
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_resistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x245a380

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_resistance
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Resistance = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistanceCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistanceCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a3a0

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistanceCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ResistanceCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slackness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a3b0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slackness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Slackness;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_slackness
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_slackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x245a3c0

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_slackness
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Slackness = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slacknessCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slacknessCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a3e0

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slacknessCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SlacknessCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_defaultMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial (const MethodInfo* method);
// 0x2454330

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_056fe073 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBoneMaterial_CreateInstance_EZSoftBoneMate);
    il2cpp_init_method_metadata(&"SBMat_Default");
    DAT_056fe073 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pIVar2 = UnityEngine_ScriptableObject__CreateInstance<object>(MethodInfo_EZSoftBoneMaterial_CreateInstance_EZSoftBoneMate);
    **(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8) = pIVar2;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_EZSoftBoneMaterial + 0xb8),pIVar2);
  }
  if ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8) != (UnityEngine_Object_o *)0x0)
  {
    UnityEngine_Object__set_name
              ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8),"SBMat_Default",
               (MethodInfo *)0x0);
    return (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetDamping
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetDamping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x24584c0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetDamping
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  UnityEngine_AnimationCurve_o *__this_00;
  float fVar2;
  
  __this_00 = (__this->fields).m_DampingCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar1 = (__this->fields).m_Damping;
    fVar2 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetStiffness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetStiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x24584f0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetStiffness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  UnityEngine_AnimationCurve_o *__this_00;
  float fVar2;
  
  __this_00 = (__this->fields).m_StiffnessCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar1 = (__this->fields).m_Stiffness;
    fVar2 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetResistance
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetResistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x2458520

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetResistance
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  UnityEngine_AnimationCurve_o *__this_00;
  float fVar2;
  
  __this_00 = (__this->fields).m_ResistanceCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar1 = (__this->fields).m_Resistance;
    fVar2 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetSlackness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetSlackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x2458550

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetSlackness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  UnityEngine_AnimationCurve_o *__this_00;
  float fVar2;
  
  __this_00 = (__this->fields).m_SlacknessCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar1 = (__this->fields).m_Slackness;
    fVar2 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial___ctor (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x245a3f0

void EZhex1991_EZSoftBone_EZSoftBoneMaterial___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  
  (__this->fields).m_Damping = 0.2;
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,0.5,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_DampingCurve = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_DampingCurve,pUVar1);
  (__this->fields).m_Stiffness = 0.1;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_StiffnessCurve = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_StiffnessCurve,pUVar1);
  (__this->fields).m_Resistance = 0.9;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  (__this->fields).m_ResistanceCurve = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_ResistanceCurve,pUVar1);
  (__this->fields).m_Slackness = 0.1;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,0.8,(MethodInfo *)0x0);
  (__this->fields).m_SlacknessCurve = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).m_SlacknessCurve);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


