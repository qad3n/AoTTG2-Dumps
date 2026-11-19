// Type: EZhex1991.EZSoftBone.EZSoftBoneCollider
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneCollider.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneCollider.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_referenceCollider
// il2cpp: UnityEngine_Collider_o* EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x32a6c50

UnityEngine_Collider_o *
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o **targetAddress;
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Collider_o *pUVar2;
  
  if (Il2CppMethodInitialized_0753e810 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e810 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).m_ReferenceCollider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).m_ReferenceCollider;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
    (__this->fields).m_ReferenceCollider = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return *targetAddress;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x32a6ce0

float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin
                (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, float value, const MethodInfo* method);
// 0x32a6cf0

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x32a6d00

bool EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  return (__this->fields).m_InsideMode;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, bool value, const MethodInfo* method);
// 0x32a6d10

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_InsideMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x32a6d20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a6f41: jmp 0x32a6fe4

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  byte bVar1;
  code cVar2;
  char cVar3;
  UnityEngine_Vector3_o center1;
  UnityEngine_Vector3_o center1_00;
  UnityEngine_Vector3_o center0;
  UnityEngine_Vector3_o center0_00;
  bool bVar4;
  UnityEngine_Collider_o *pUVar5;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_SphereCollider_o *collider;
  UnityEngine_BoxCollider_o *collider_00;
  EZhex1991_EZSoftBone_EZSoftBoneCollider_o *pEVar8;
  UnityEngine_CapsuleCollider_o *collider_01;
  MethodInfo *in_R8;
  float fVar9;
  float fStack_3c;
  UnityEngine_Vector3_Fields local_38;
  Il2CppMethodPointer local_28;
  float fStack_20;
  
  pMVar7 = (MethodInfo *)position;
  if (Il2CppMethodInitialized_0753e811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&"Inside Mode On Mesh Collider is not supported");
    il2cpp_codegen_initialize_runtime_metadata(&"Non-Convex Mesh Collider is not supported");
    Il2CppMethodInitialized_0753e811 = '\x01';
  }
  pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
  if (pUVar5 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
      if (pUVar5 == (UnityEngine_Collider_o *)0x0) {
        collider = (UnityEngine_SphereCollider_o *)0x0;
        cVar3 = (__this->fields).m_InsideMode;
        fVar9 = (__this->fields).m_Margin;
        pMVar7 = extraout_RDX_00;
      }
      else {
        bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
        pMVar7 = (MethodInfo *)(ulong)bVar1;
        if ((pUVar5->klass->_2).typeHierarchyDepth < bVar1) {
          collider = (UnityEngine_SphereCollider_o *)0x0;
          cVar3 = (__this->fields).m_InsideMode;
          fVar9 = (__this->fields).m_Margin;
        }
        else {
          collider = (UnityEngine_SphereCollider_o *)0x0;
          if ((pUVar5->klass->_2).typeHierarchy[(long)&pMVar7[-1].field_0x57] ==
              (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider) {
            collider = (UnityEngine_SphereCollider_o *)pUVar5;
          }
          cVar3 = (__this->fields).m_InsideMode;
          fVar9 = (__this->fields).m_Margin;
        }
      }
      if (cVar3 == '\0') {
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere(position,collider,spacing + fVar9,pMVar7);
        return;
      }
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere(position,collider,spacing + fVar9,pMVar7);
      return;
    }
  }
  pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
  if (pUVar5 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
      if (pUVar5 != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) {
          collider_01 = (UnityEngine_CapsuleCollider_o *)0x0;
          if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider) {
            collider_01 = (UnityEngine_CapsuleCollider_o *)pUVar5;
          }
          goto label_032a7004;
        }
      }
      collider_01 = (UnityEngine_CapsuleCollider_o *)0x0;
label_032a7004:
      fVar9 = spacing + (__this->fields).m_Margin;
      if ((__this->fields).m_InsideMode == false) {
        fStack_20 = 0.0;
        local_28 = (Il2CppMethodPointer)0x0;
        local_38.z = 0.0;
        local_38.x = 0.0;
        local_38.y = 0.0;
        fStack_3c = 0.0;
        pMVar7 = (MethodInfo *)&local_28;
        EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                  (collider_01,(UnityEngine_Vector3_o *)pMVar7,(UnityEngine_Vector3_o *)&local_38,&fStack_3c,
                   in_R8);
        center0_00.fields.z = fStack_20;
        center0_00.fields._0_8_ = local_28;
        center1_00.fields.z = local_38.z;
        center1_00.fields.x = local_38.x;
        center1_00.fields.y = local_38.y;
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_31a90c0
                  (position,center0_00,center1_00,fVar9 + fStack_3c,pMVar7);
        return;
      }
      fStack_20 = 0.0;
      local_28 = (Il2CppMethodPointer)0x0;
      local_38.z = 0.0;
      local_38.x = 0.0;
      local_38.y = 0.0;
      fStack_3c = 0.0;
      pMVar7 = (MethodInfo *)&local_28;
      EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                (collider_01,(UnityEngine_Vector3_o *)pMVar7,(UnityEngine_Vector3_o *)&local_38,&fStack_3c,
                 in_R8);
      center0.fields.z = fStack_20;
      center0.fields._0_8_ = local_28;
      center1.fields.z = local_38.z;
      center1.fields.x = local_38.x;
      center1.fields.y = local_38.y;
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_31a98f0
                (position,center0,center1,fStack_3c - fVar9,pMVar7);
      return;
    }
  }
  pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
  if (pUVar5 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider
       )) {
      pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
      pMVar7 = extraout_RDX_01;
      if (pUVar5 != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
        pMVar7 = (MethodInfo *)(ulong)bVar1;
        if (bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) {
          collider_00 = (UnityEngine_BoxCollider_o *)0x0;
          if ((pUVar5->klass->_2).typeHierarchy[(long)&pMVar7[-1].field_0x57] ==
              (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider) {
            collider_00 = (UnityEngine_BoxCollider_o *)pUVar5;
          }
          goto label_032a710d;
        }
      }
      collider_00 = (UnityEngine_BoxCollider_o *)0x0;
label_032a710d:
      fVar9 = spacing + (__this->fields).m_Margin;
      if ((__this->fields).m_InsideMode == false) {
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox(position,collider_00,fVar9,pMVar7);
        return;
      }
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox(position,collider_00,fVar9,pMVar7);
      return;
    }
  }
  pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
  if (pUVar5 == (UnityEngine_Collider_o *)0x0) {
    return;
  }
  bVar1 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
  if ((pUVar5->klass->_2).typeHierarchyDepth < bVar1) {
    return;
  }
  if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider)
  {
    return;
  }
  pEVar8 = __this;
  pMVar6 = (MethodInfo *)EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,pMVar7);
  pMVar7 = extraout_RDX;
  if (pMVar6 != (MethodInfo *)0x0) {
    cVar2 = (code)(TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
    pMVar7 = (MethodInfo *)(ulong)(byte)cVar2;
    if ((byte)cVar2 <= (byte)pMVar6->methodPointer[0x130]) {
      pEVar8 = *(EZhex1991_EZSoftBone_EZSoftBoneCollider_o **)(pMVar6->methodPointer + 200);
      method_01 = (MethodInfo *)0x0;
      if (*(UnityEngine_MeshCollider_c **)((long)pEVar8 + (long)pMVar7 * 8 + -8) ==
          TypeInfo_UnityEngine_MeshCollider) {
        method_01 = pMVar6;
      }
      bVar4 = EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex
                        (pEVar8,(UnityEngine_MeshCollider_o *)method_01,pMVar7);
      goto joined_r0x032a6ebc;
    }
  }
  method_01 = (MethodInfo *)0x0;
  bVar4 = EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex
                    (pEVar8,(UnityEngine_MeshCollider_o *)0x0,pMVar7);
joined_r0x032a6ebc:
  if (!bVar4) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Debug)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogError_68c4df0
              ((Il2CppObject *)"Non-Convex Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  if ((__this->fields).m_InsideMode == false) {
    pUVar5 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,method_01);
    EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
              (position,pUVar5,spacing + (__this->fields).m_Margin,method_00);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UnityEngine_Debug)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogError_68c4df0
            ((Il2CppObject *)"Inside Mode On Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_InsideMode = false;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$CheckConvex
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_MeshCollider_o* meshCollider, const MethodInfo* method);
// 0x32a7cf0

bool EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_MeshCollider_o *meshCollider,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_0753e812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e812 = '\x01';
  }
  if (meshCollider == (UnityEngine_MeshCollider_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(meshCollider,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UnityEngine_MeshCollider__get_convex(meshCollider,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Reset
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x32a7d70

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *pUVar1;
  
  if (Il2CppMethodInitialized_0753e813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    Il2CppMethodInitialized_0753e813 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
  (__this->fields).m_ReferenceCollider = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ReferenceCollider);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x32a7dc0

void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0753e814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    Il2CppMethodInitialized_0753e814 = '\x01';
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


