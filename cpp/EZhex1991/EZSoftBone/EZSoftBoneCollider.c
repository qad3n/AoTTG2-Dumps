// Type: EZhex1991.EZSoftBone.EZSoftBoneCollider
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneCollider.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneCollider.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_referenceCollider
// il2cpp: UnityEngine_Collider_o* EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x180584ad0

UnityEngine_Collider_o *
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider
          (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Collider_o *value;
  
  if (Il2CppMethodInitialized_18433df40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df40 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).m_ReferenceCollider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
    (__this->fields).m_ReferenceCollider = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_ReferenceCollider,value);
  }
  return (__this->fields).m_ReferenceCollider;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_margin
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x180584ac0

float
EZhex1991_EZSoftBone_EZSoftBoneCollider__get_margin(EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Margin;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_margin
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, float value, const MethodInfo* method);
// 0x180584b70

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_margin
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Margin = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$get_insideMode
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x180584ab0

bool EZhex1991_EZSoftBone_EZSoftBoneCollider__get_insideMode
               (UnityEngine_Rendering_RTHandleAllocInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._bindTextureMS_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$set_insideMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, bool value, const MethodInfo* method);
// 0x180584b60

void EZhex1991_EZSoftBone_EZSoftBoneCollider__set_insideMode
               (UnityEngine_Rendering_RTHandleAllocInfo_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._bindTextureMS_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Collide
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_Vector3_o* position, float spacing, const MethodInfo* method);
// 0x180584340
// asm: 70 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1805845e7: mov ecx, dword ptr [rax + 8]
// asm:   0x1805845ea: lea r8, [rbp - 0x29]
// asm:   0x1805845ee: movsd xmm0, qword ptr [rax]
// asm:   0x1805845f2: xor r9d, r9d
// asm:   0x1805845f5: mov dword ptr [rbp - 0x21], ecx
// asm:   0x1805845f8: mov rdx, rdi
// asm:   0x1805845fb: lea rcx, [rbp - 0x19]
// asm:   0x1805845ff: movsd qword ptr [rbp - 0x29], xmm0
// asm:   0x180584604: call 0x182f5abf0  ; UnityEngine_Transform__TransformPoint()
// asm:   0x180584609: xor edx, edx
// asm:   0x18058460b: mov rcx, rbx
// asm:   0x18058460e: movsd xmm0, qword ptr [rax]
// asm:   0x180584612: mov eax, dword ptr [rax + 8]
// asm:   0x180584615: movsd qword ptr [rbp - 0x29], xmm0
// asm:   0x18058461a: mov dword ptr [rbp - 0x21], eax
// asm:   0x18058461d: call 0x182fe8f50  ; UnityEngine_SphereCollider__get_radius()
// asm:   0x180584622: addss xmm7, xmm6
// asm:   0x180584626: xor r9d, r9d
// asm:   0x180584629: lea rdx, [rbp - 0x29]
// asm:   0x18058462d: mov rcx, rsi
// asm:   0x180584630: subss xmm0, xmm7
// asm:   0x180584634: movaps xmm2, xmm0
// asm:   0x180584637: call 0x1805868d0  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere()
// asm:   0x18058463c: jmp 0x18058457c
// asm:   0x18058469b: mov ecx, ebx
// asm:   0x18058469d: jmp 0x1805846db
// asm:   0x180584701: lea r8, [rbp - 0x39]
// asm:   0x180584705: lea rdx, [rbp - 0x29]
// asm:   0x180584709: call 0x1805859a0  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams()
// asm:   0x18058470e: movsd xmm0, qword ptr [rbp - 0x39]
// asm:   0x180584713: addss xmm7, xmm6
// asm:   0x180584717: mov eax, dword ptr [rbp - 0x31]
// asm:   0x18058471a: lea r8, [rbp - 0x19]
// asm:   0x18058471e: movss xmm3, dword ptr [rbp - 0x49]
// asm:   0x180584723: lea rdx, [rbp - 0x39]
// asm:   0x180584727: movsd qword ptr [rbp - 0x19], xmm0
// asm:   0x18058472c: mov rcx, rsi
// asm:   0x18058472f: movsd xmm0, qword ptr [rbp - 0x29]
// asm:   0x180584734: mov dword ptr [rbp - 0x11], eax
// asm:   0x180584737: addss xmm3, xmm7
// asm:   0x18058473b: mov eax, dword ptr [rbp - 0x21]
// asm:   0x18058473e: movsd qword ptr [rbp - 0x39], xmm0
// asm:   0x180584743: mov dword ptr [rbp - 0x31], eax
// asm:   0x180584746: mov qword ptr [rsp + 0x20], rbx
// asm:   0x18058474b: call 0x180586f20  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule()
// asm:   0x180584750: jmp 0x18058457c
// asm:   0x180584755: lea r8, [rbp - 0x29]
// asm:   0x180584759: lea rdx, [rbp - 0x39]
// asm:   0x18058475d: call 0x1805859a0  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams()
// asm:   0x180584762: movsd xmm0, qword ptr [rbp - 0x29]
// asm:   0x180584767: addss xmm7, xmm6
// asm:   0x18058476b: mov eax, dword ptr [rbp - 0x21]
// asm:   0x18058476e: lea r8, [rbp - 0x19]
// asm:   0x180584772: movss xmm3, dword ptr [rbp - 0x49]
// asm:   0x180584777: lea rdx, [rbp - 0x29]
// asm:   0x18058477b: movsd qword ptr [rbp - 0x19], xmm0
// asm:   0x180584780: mov rcx, rsi
// asm:   0x180584783: movsd xmm0, qword ptr [rbp - 0x39]
// asm:   0x180584788: mov dword ptr [rbp - 0x11], eax
// asm:   0x18058478b: subss xmm3, xmm7
// asm:   0x18058478f: mov eax, dword ptr [rbp - 0x31]
// asm:   0x180584792: movsd qword ptr [rbp - 0x29], xmm0
// asm:   0x180584797: mov dword ptr [rbp - 0x21], eax
// asm:   0x18058479a: mov qword ptr [rsp + 0x20], rbx
// asm:   0x18058479f: call 0x180586120  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule()
// asm:   0x1805847a4: jmp 0x18058457c
// asm:   0x18058484f: call 0x180586ab0  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox()
// asm:   0x180584854: jmp 0x18058457c
// asm:   0x180584859: call 0x180585d70  ; EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox()
// asm:   0x18058485e: jmp 0x18058457c

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Collide
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_Vector3_o *position,
               float spacing,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_Collider_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Object_o *x;
  UnityEngine_CapsuleCollider_o *collider;
  UnityEngine_Component_o *__this_00;
  UnityEngine_BoxCollider_o *collider_00;
  UnityEngine_MeshCollider_o *__this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8 [4];
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78 [9];
  
  if (Il2CppMethodInitialized_18433df41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&"Inside Mode On Mesh Collider is not supported");
    il2cpp_codegen_initialize_runtime_metadata(&"Non-Convex Mesh Collider is not supported");
    Il2CppMethodInitialized_18433df41 = '\x01';
  }
  pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar2 = true,
           (pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
          bVar2 = false;
        }
        __this_00 = (UnityEngine_Component_o *)0x0;
        if (bVar2) {
          __this_00 = (UnityEngine_Component_o *)pUVar3;
        }
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          fVar7 = (__this->fields).m_Margin;
          if ((__this->fields).m_InsideMode == false) {
            pUVar4 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Transform__get_lossyScale
                                 ((UnityEngine_Vector3_o *)local_78,pUVar4,(MethodInfo *)0x0);
              fVar8 = ABS((pUVar5->fields).x);
              fVar9 = ABS((pUVar5->fields).y);
              fVar10 = ABS((pUVar5->fields).z);
              fVar6 = UnityEngine_SphereCollider__get_radius
                                ((UnityEngine_SphereCollider_o *)__this_00,(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_SphereCollider__get_center
                                 ((UnityEngine_Vector3_o *)local_78,(UnityEngine_SphereCollider_o *)__this_00,
                                  (MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                local_88.z = (pUVar5->fields).z;
                local_88.x = (pUVar5->fields).x;
                local_88.y = (pUVar5->fields).y;
                pUVar5 = UnityEngine_Transform__TransformPoint
                                   ((UnityEngine_Vector3_o *)local_78,pUVar4,
                                    (UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
                if (fVar9 <= fVar10) {
                  fVar9 = fVar10;
                }
                local_88.x = (pUVar5->fields).x;
                local_88.y = (pUVar5->fields).y;
                local_88.z = (pUVar5->fields).z;
                if (fVar8 <= fVar9) {
                  fVar8 = fVar9;
                }
                EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideSphere_587bf0
                          (position,(UnityEngine_Vector3_o *)&local_88,fVar8 * fVar6 + fVar7 + spacing,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            pUVar4 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_SphereCollider__get_center
                               ((UnityEngine_Vector3_o *)local_78,(UnityEngine_SphereCollider_o *)__this_00,
                                (MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              local_88.z = (pUVar5->fields).z;
              local_88.x = (pUVar5->fields).x;
              local_88.y = (pUVar5->fields).y;
              pUVar5 = UnityEngine_Transform__TransformPoint
                                 ((UnityEngine_Vector3_o *)local_78,pUVar4,(UnityEngine_Vector3_o *)&local_88,
                                  (MethodInfo *)0x0);
              local_88.x = (pUVar5->fields).x;
              local_88.y = (pUVar5->fields).y;
              local_88.z = (pUVar5->fields).z;
              fVar8 = UnityEngine_SphereCollider__get_radius
                                ((UnityEngine_SphereCollider_o *)__this_00,(MethodInfo *)0x0);
              EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideSphere_5868d0
                        (position,(UnityEngine_Vector3_o *)&local_88,fVar8 - (fVar7 + spacing),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_180584a00;
    }
  }
  pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
      collider = (UnityEngine_CapsuleCollider_o *)0x0;
      if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar2 = true,
           (pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          bVar2 = false;
        }
        collider = (UnityEngine_CapsuleCollider_o *)0x0;
        if (bVar2) {
          collider = (UnityEngine_CapsuleCollider_o *)pUVar3;
        }
      }
      fVar7 = (__this->fields).m_Margin;
      local_88.x = 0.0;
      local_88.y = 0.0;
      local_88.z = 0.0;
      local_98.x = 0.0;
      local_98.y = 0.0;
      local_98.z = 0.0;
      local_a8[0] = 0.0;
      if ((__this->fields).m_InsideMode == false) {
        EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                  (collider,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_98,local_a8,
                   (MethodInfo *)0x0);
        local_78[0].x = local_98.x;
        local_78[0].y = local_98.y;
        local_78[0].z = local_98.z;
        local_98.x = local_88.x;
        local_98.y = local_88.y;
        local_98.z = local_88.z;
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCapsule_586f20
                  (position,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Vector3_o *)local_78,
                   local_a8[0] + fVar7 + spacing,(MethodInfo *)0x0);
        return;
      }
      EZhex1991_EZSoftBone_EZSoftBoneUtility__GetCapsuleParams
                (collider,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Vector3_o *)&local_88,local_a8,
                 (MethodInfo *)0x0);
      local_78[0].x = local_88.x;
      local_78[0].y = local_88.y;
      local_78[0].z = local_88.z;
      local_88.x = local_98.x;
      local_88.y = local_98.y;
      local_88.z = local_98.z;
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideCapsule_586120
                (position,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)local_78,
                 local_a8[0] - (fVar7 + spacing),(MethodInfo *)0x0);
      return;
    }
  }
  pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
      pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
      collider_00 = (UnityEngine_BoxCollider_o *)0x0;
      if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar2 = true,
           (pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
          bVar2 = false;
        }
        if (bVar2) {
          collider_00 = (UnityEngine_BoxCollider_o *)pUVar3;
        }
      }
      fVar7 = spacing + (__this->fields).m_Margin;
      if ((__this->fields).m_InsideMode == false) {
        EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideBox(position,collider_00,fVar7,(MethodInfo *)0x0);
        return;
      }
      EZhex1991_EZSoftBone_EZSoftBoneUtility__PointInsideBox(position,collider_00,fVar7,(MethodInfo *)0x0);
      return;
    }
  }
  pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider)) {
      pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_MeshCollider_o *)0x0;
      if (pUVar3 != (UnityEngine_Collider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar2 = true,
           (pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider)) {
          bVar2 = false;
        }
        if (bVar2) {
          __this_01 = (UnityEngine_MeshCollider_o *)pUVar3;
        }
      }
      if (Il2CppMethodInitialized_18433df42 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_18433df42 = '\x01';
      }
      if (__this_01 == (UnityEngine_MeshCollider_o *)0x0) {
label_180584a00:
        ThrowNullReferenceException();
      }
      x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar2) && (bVar2 = UnityEngine_MeshCollider__get_convex(__this_01,(MethodInfo *)0x0), bVar2)) {
        if ((__this->fields).m_InsideMode == false) {
          pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneCollider__get_referenceCollider(__this,(MethodInfo *)0x0);
          EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                    (position,pUVar3,spacing + (__this->fields).m_Margin,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          UnityEngine_Debug__LogError_2ec3060
                    ((Il2CppObject *)"Inside Mode On Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
          (__this->fields).m_InsideMode = false;
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError_2ec3060
                  ((Il2CppObject *)"Non-Convex Mesh Collider is not supported",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$CheckConvex
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, UnityEngine_MeshCollider_o* meshCollider, const MethodInfo* method);
// 0x1805842b0

bool EZhex1991_EZSoftBone_EZSoftBoneCollider__CheckConvex
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,UnityEngine_MeshCollider_o *meshCollider,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_18433df42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df42 = '\x01';
  }
  if (meshCollider == (UnityEngine_MeshCollider_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = (UnityEngine_Object_o *)UnityEngine_MeshCollider__get_sharedMesh(meshCollider,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = UnityEngine_MeshCollider__get_convex(meshCollider,(MethodInfo *)0x0);
  return bVar1;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$Reset
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x180584a10

void EZhex1991_EZSoftBone_EZSoftBoneCollider__Reset
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *value;
  
  if (Il2CppMethodInitialized_18433df43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    Il2CppMethodInitialized_18433df43 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
  (__this->fields).m_ReferenceCollider = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ReferenceCollider,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneCollider$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor (EZhex1991_EZSoftBone_EZSoftBoneCollider_o* __this, const MethodInfo* method);
// 0x180584a60

void EZhex1991_EZSoftBone_EZSoftBoneCollider___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneCollider_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18433df44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    Il2CppMethodInitialized_18433df44 = '\x01';
  }
  if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


