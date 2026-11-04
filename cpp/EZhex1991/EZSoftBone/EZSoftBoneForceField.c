// Type: EZhex1991.EZSoftBone.EZSoftBoneForceField
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneForceField.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneForceField.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_conductivity
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_conductivity (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x180584280

float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_conductivity
                (UnityEngine_AdaptivePerformance_Provider_PerformanceDataRecord_o *__this,MethodInfo *method)

{
  return (__this->fields)._GpuFrameTime_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_conductivity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_conductivity (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float value, const MethodInfo* method);
// 0x1805842a0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_conductivity
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Conductivity = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_force
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForce_o* EZhex1991_EZSoftBone_EZSoftBoneForceField__get_force (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x180584c80

EZhex1991_EZSoftBone_EZSoftBoneForce_o*
EZhex1991_EZSoftBone_EZSoftBoneForceField__get_force(EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Force;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_force
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_force (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForce_o* value, const MethodInfo* method);
// 0x180584ca0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_force
               (Photon_Voice_VoiceInfo_o *__this,Il2CppObject *value,MethodInfo *method)

{
  (__this->fields)._UserData_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._UserData_k__BackingField,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$get_time
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x180584c90

float EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time
                (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  return (__this->fields)._time_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$set_time
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, float value, const MethodInfo* method);
// 0x180584cb0

void EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time
               (UnityEngine_TextCore_FaceInfo_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_MeanLine = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__OnEnable (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x180584c30

void EZhex1991_EZSoftBone_EZSoftBoneForceField__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  (__this->fields)._time_k__BackingField = 0.0;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField__Update (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x180584c40

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
// 0x180584b80

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_EZSoftBoneForceField__GetForce
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,
          float normalizedLength,MethodInfo *method)

{
  float fVar1;
  EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this_00;
  float fVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).m_Force;
  if (__this_00 != (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) {
    pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                       (local_28,__this_00,
                        (__this->fields)._time_k__BackingField -
                        normalizedLength * (__this->fields).m_Conductivity,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_38.x = (pUVar3->fields).x;
      local_38.y = (pUVar3->fields).y;
      local_38.z = (pUVar3->fields).z;
      pUVar3 = UnityEngine_Transform__TransformDirection
                         (local_28,__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      fVar2 = (pUVar3->fields).y;
      fVar1 = (pUVar3->fields).z;
      (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
      (__return_storage_ptr__->fields).y = fVar2;
      (__return_storage_ptr__->fields).z = fVar1;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneForceField$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneForceField___ctor (EZhex1991_EZSoftBone_EZSoftBoneForceField_o* __this, const MethodInfo* method);
// 0x180584c70

void EZhex1991_EZSoftBone_EZSoftBoneForceField___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *__this,MethodInfo *method)

{
  (__this->fields).m_Conductivity = 0.15;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


