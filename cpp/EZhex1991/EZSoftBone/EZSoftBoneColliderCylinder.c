// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderCylinder.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderCylinder.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x32a8000

float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin
                (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, float value, const MethodInfo* method);
// 0x32a8010

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x32a8020

bool EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  return (__this->fields).m_InsideMode;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, bool value, const MethodInfo* method);
// 0x32a8030

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_InsideMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x32a8040

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *pMVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  
  bVar1 = (__this->fields).m_InsideMode;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (bVar1 == false) {
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      fVar3 = spacing + (__this->fields).m_Margin;
      UVar5 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
      UVar6 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      pMVar2 = (MethodInfo *)0x0;
      UVar7 = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
      fVar4 = ABS(UVar5.fields.x);
      if (ABS(UVar5.fields.x) <= ABS(UVar5.fields.z)) {
        fVar4 = ABS(UVar5.fields.z);
      }
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_31aa110
                (position,UVar6,UVar7,fVar4 * 0.5 + fVar3,ABS(UVar5.fields.y) + fVar3,pMVar2);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    fVar3 = spacing + (__this->fields).m_Margin;
    UVar5 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    UVar6 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)0x0;
    UVar7 = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
    fVar4 = ABS(UVar5.fields.x);
    if (ABS(UVar5.fields.x) <= ABS(UVar5.fields.z)) {
      fVar4 = ABS(UVar5.fields.z);
    }
    EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_31aa630
              (position,UVar6,UVar7,fVar4 * 0.5 - fVar3,ABS(UVar5.fields.y) - fVar3,pMVar2);
    return;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x32a8360

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0753e818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    Il2CppMethodInitialized_0753e818 = '\x01';
    uVar1 = (TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


