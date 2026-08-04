// Type: EZhex1991.EZSoftBone.EZSoftBoneForceField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneForceField.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForceField.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_conductivity
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_conductivity (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x2498350

float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_conductivity
                (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Conductivity;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_conductivity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_conductivity (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float value, const MethodInfo* method);
// 0x2498360

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_conductivity
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Conductivity = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_force
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForce_o* EZhex1991_EZSoftBone_EZSoftBoneForceField__get_force (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x2498370

EZhex1991_EZSoftBone_EZSoftBoneForce_o *
EZhex1991_EZSoftBone_EZSoftBoneForceField__get_force
          (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Force;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_force
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_force (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForce_o* value, const MethodInfo* method);
// 0x2498380

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_force
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,
               EZhex1991_EZSoftBone_EZSoftBoneForce_o *value,MethodInfo *method)

{
  (__this->fields).m_Force = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_Force);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_time
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x2498390

float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time
                (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields)._time_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_time
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float value, const MethodInfo* method);
// 0x24983a0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._time_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__OnEnable (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x24983b0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  (__this->fields)._time_k__BackingField = 0.0;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__Update (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x24983c0

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
// 0x24959a0

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBoneForceField__GetForce
          (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float normalizedLength,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_LayerMask_o mask;
  EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this_01;
  undefined8 extraout_XMM0_Qa;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_Fields UVar2;
  
  method_00 = (MethodInfo *)0x0;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = (__this->fields).m_Force;
  if (__this_01 != (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) {
    UVar1 = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                      (__this_01,
                       (__this->fields)._time_k__BackingField -
                       normalizedLength * (__this->fields).m_Conductivity,method_00);
    in_XMM1_Da = UVar1.fields.z;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar2 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__TransformDirection(__this_00,UVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar2;
    }
  }
  mask.fields.m_Mask = SUB84(__this_01,0);
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  UVar1.fields.z = in_XMM1_Da;
  UVar1.fields.x = (float)(int)extraout_XMM0_Qa;
  UVar1.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField___ctor (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x24983f0

void EZhex1991_EZSoftBone_EZSoftBoneForceField___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  (__this->fields).m_Conductivity = 0.15;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


