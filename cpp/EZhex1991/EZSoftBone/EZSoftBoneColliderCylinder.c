// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderCylinder.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderCylinder.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x180584280

float
EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_margin(EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, float value, const MethodInfo* method);
// 0x1805842a0

void
EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_margin(EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x180584270

bool EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__get_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  return (__this->fields).m_InsideMode;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, bool value, const MethodInfo* method);
// 0x180584290

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_InsideMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x180584010

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68 [8];
  
  if ((__this->fields).m_InsideMode == false) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar9 = spacing + (__this->fields).m_Margin;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
label_180584216:
      ThrowNullReferenceException();
    }
    pUVar6 = UnityEngine_Transform__get_lossyScale((UnityEngine_Vector3_o *)local_68,pUVar5,(MethodInfo *)0x0)
    ;
    fVar1 = (pUVar6->fields).y;
    fVar8 = ABS((pUVar6->fields).x);
    fVar7 = ABS((pUVar6->fields).z);
    pUVar6 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_68,pUVar5,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar6->fields).x;
    uVar2._4_4_ = (pUVar6->fields).y;
    fVar4 = (pUVar6->fields).z;
    pUVar6 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_68,pUVar5,(MethodInfo *)0x0);
    local_78.x = (pUVar6->fields).x;
    local_78.y = (pUVar6->fields).y;
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    local_78.z = (pUVar6->fields).z;
    local_68[0]._0_8_ = uVar2;
    local_68[0].z = fVar4;
    EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCylinder_5875c0
              (position,(UnityEngine_Vector3_o *)local_68,(UnityEngine_Vector3_o *)&local_78,
               fVar8 * 0.5 + fVar9,ABS(fVar1) + fVar9,(MethodInfo *)0x0);
  }
  else {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar9 = spacing + (__this->fields).m_Margin;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_180584216;
    pUVar6 = UnityEngine_Transform__get_lossyScale((UnityEngine_Vector3_o *)local_68,pUVar5,(MethodInfo *)0x0)
    ;
    fVar1 = (pUVar6->fields).y;
    fVar8 = ABS((pUVar6->fields).x);
    fVar7 = ABS((pUVar6->fields).z);
    pUVar6 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_68,pUVar5,(MethodInfo *)0x0);
    uVar3._0_4_ = (pUVar6->fields).x;
    uVar3._4_4_ = (pUVar6->fields).y;
    fVar4 = (pUVar6->fields).z;
    pUVar6 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_78,pUVar5,(MethodInfo *)0x0);
    local_68[0].x = (pUVar6->fields).x;
    local_68[0].y = (pUVar6->fields).y;
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    local_68[0].z = (pUVar6->fields).z;
    local_78._0_8_ = uVar3;
    local_78.z = fVar4;
    EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCylinder_586400
              (position,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)local_68,
               fVar8 * 0.5 - fVar9,ABS(fVar1) - fVar9,(MethodInfo *)0x0);
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderCylinder$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o* __this, const MethodInfo* method);
// 0x180584220

void EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneColliderCylinder_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18433df48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    Il2CppMethodInitialized_18433df48 = '\x01';
  }
  if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


