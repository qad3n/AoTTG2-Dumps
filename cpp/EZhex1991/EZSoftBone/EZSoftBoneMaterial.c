// Type: EZhex1991.EZSoftBone.EZSoftBoneMaterial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneMaterial.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneMaterial.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_damping
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_damping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x180584ff0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_damping
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Damping;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_damping
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_damping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x180585400

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_damping
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = 1.0, value <= 1.0)) {
    (__this->fields).m_Damping = value;
    return;
  }
  (__this->fields).m_Damping = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_dampingCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_dampingCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x1805852b0

UnityEngine_AnimationCurve_o*
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_dampingCurve(EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, MethodInfo* method)

{
  return (__this->fields).m_DampingCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x180584ac0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Stiffness;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_stiffness
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_stiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x180585490

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_stiffness
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = 1.0, value <= 1.0)) {
    (__this->fields).m_Stiffness = value;
    return;
  }
  (__this->fields).m_Stiffness = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffnessCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffnessCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x1805853f0

UnityEngine_GraphicsBuffer_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffnessCurve
          (UnityEngine_Rendering_IndirectBufferContextStorage_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DrawArgsBuffer;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistance
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x180585020

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Resistance;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_resistance
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_resistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x180585430

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_resistance
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = 1.0, value <= 1.0)) {
    (__this->fields).m_Resistance = value;
    return;
  }
  (__this->fields).m_Resistance = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistanceCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistanceCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x1805853c0

UnityEngine_AnimationCurve_o*
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistanceCurve(EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slackness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x1805853e0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slackness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Slackness;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_slackness
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_slackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x180585460

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_slackness
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = 1.0, value <= 1.0)) {
    (__this->fields).m_Slackness = value;
    return;
  }
  (__this->fields).m_Slackness = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slacknessCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slacknessCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x1805853d0

UnityEngine_AnimationCurve_o*
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slacknessCurve(EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_defaultMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial (const MethodInfo* method);
// 0x1805852c0

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(MethodInfo *method)

{
  bool bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  
  if (Il2CppMethodInitialized_18433df49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_ScriptableObject_CreateInstance_EZSoftBoneMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"SBMat_Default");
    Il2CppMethodInitialized_18433df49 = '\x01';
  }
  pEVar2 = TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial->static_fields->m_DefaultMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pEVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pEVar2 = UnityEngine_ScriptableObject__CreateInstance_object_
                       ((MethodInfo_7973D0 *)
                        MethodInfo_UnityEngine_ScriptableObject_CreateInstance_EZSoftBoneMaterial);
    TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial->static_fields->m_DefaultMaterial = pEVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial->static_fields->m_DefaultMaterial,pEVar2);
  }
  pEVar2 = TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial->static_fields->m_DefaultMaterial;
  if (pEVar2 != (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pEVar2,"SBMat_Default",(MethodInfo *)0x0);
    return TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial->static_fields->m_DefaultMaterial;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetDamping
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetDamping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x1805850b0

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
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetStiffness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetStiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x180585170

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
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetResistance
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetResistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x1805850f0

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
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetSlackness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetSlackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x180585130

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
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial___ctor (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x1805851b0

void EZhex1991_EZSoftBone_EZSoftBoneMaterial___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  
  (__this->fields).m_Damping = 0.2;
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,0.5,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_DampingCurve = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_DampingCurve,pUVar1);
  (__this->fields).m_Stiffness = 0.1;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_StiffnessCurve = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_StiffnessCurve,pUVar1);
  (__this->fields).m_Resistance = 0.9;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  (__this->fields).m_ResistanceCurve = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ResistanceCurve,pUVar1);
  (__this->fields).m_Slackness = 0.1;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,0.8,(MethodInfo *)0x0);
  (__this->fields).m_SlacknessCurve = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_SlacknessCurve,pUVar1);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


