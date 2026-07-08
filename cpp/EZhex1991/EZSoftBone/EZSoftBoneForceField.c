// Type: EZhex1991.EZSoftBone.EZSoftBoneForceField
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneForceField.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForceField.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_conductivity
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_conductivity (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x245a240

float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_conductivity
                (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Conductivity;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_conductivity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_conductivity (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float value, const MethodInfo* method);
// 0x245a250

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_conductivity
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Conductivity = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_force
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForce_o* EZhex1991_EZSoftBone_EZSoftBoneForceField__get_force (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x245a260

EZhex1991_EZSoftBone_EZSoftBoneForce_o *
EZhex1991_EZSoftBone_EZSoftBoneForceField__get_force
          (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Force;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_force
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_force (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForce_o* value, const MethodInfo* method);
// 0x245a270

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_force
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,
               EZhex1991_EZSoftBone_EZSoftBoneForce_o *value,MethodInfo *method)

{
  (__this->fields).m_Force = value;
  il2cpp_runtime_glue(&(__this->fields).m_Force);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_time
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x245a280

float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time
                (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields)._time_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_time
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float value, const MethodInfo* method);
// 0x245a290

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._time_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__OnEnable (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x245a2a0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  (__this->fields)._time_k__BackingField = 0.0;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__Update (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x245a2b0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__Update
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._time_k__BackingField;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._time_k__BackingField = fVar2 + fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$GetForce
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBoneForceField__GetForce (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float normalizedLength, const MethodInfo* method);
// 0x2457890

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForceField__GetForce
          (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float normalizedLength,
          MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_Fields UVar1;
  
  method_00 = (MethodInfo *)0x0;
  __this_01 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).m_Force;
  if (__this_00 != (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) {
    direction = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                          (__this_00,
                           (__this->fields)._time_k__BackingField -
                           normalizedLength * (__this->fields).m_Conductivity,method_00);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar1 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__TransformDirection(__this_01,direction,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField___ctor (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x245a2e0

void EZhex1991_EZSoftBone_EZSoftBoneForceField___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  (__this->fields).m_Conductivity = 0.15;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


