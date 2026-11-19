// Type: EZhex1991.EZSoftBone.EZSoftBone
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBone.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBone.Bone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, UnityEngine_Transform_o* systemSpace, UnityEngine_Transform_o* transform, System_Collections_Generic_IEnumerable_Transform__o* endBones, int32_t startDepth, int32_t depth, float nodeLength, float boneLength, const MethodInfo* method);
// 0x32a3f80

void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,UnityEngine_Transform_o *systemSpace,
               UnityEngine_Transform_o *transform,
               System_Collections_Generic_IEnumerable_Transform__o *endBones,int32_t startDepth,int32_t depth,
               float nodeLength,float boneLength,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  uint32_t uVar4;
  uint uVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_array *pEVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  int32_t iVar9;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar10;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_02;
  int index;
  float fVar11;
  UnityEngine_Quaternion_Fields UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  MethodInfo *in_stack_ffffffffffffff68;
  float local_88;
  float fStack_84;
  
  if (Il2CppMethodInitialized_0753e808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e808 = '\x01';
  }
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
  (__this->fields).childBones = pSVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields).childBones);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).transform = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields).transform);
  (__this->fields).systemSpace = systemSpace;
  Il2CppCodeGenWriteBarrier(&(__this->fields).systemSpace);
  if (transform == (UnityEngine_Transform_o *)0x0) {
label_032a4406:
    ThrowNullReferenceException();
  }
  UVar13 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
  (__this->fields).worldPosition.fields.x = UVar13.fields.x;
  (__this->fields).worldPosition.fields.y = UVar13.fields.y;
  (__this->fields).worldPosition.fields.z = UVar13.fields.z;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)systemSpace,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    fVar2 = (__this->fields).worldPosition.fields.x;
    fVar3 = (__this->fields).worldPosition.fields.y;
    fVar11 = (__this->fields).worldPosition.fields.z;
  }
  else {
    if (systemSpace == (UnityEngine_Transform_o *)0x0) goto label_032a4406;
    UVar13 = UnityEngine_Transform__InverseTransformPoint
                       (systemSpace,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,
                        (MethodInfo *)0x0);
    fVar11 = UVar13.fields.z;
    fVar2 = UVar13.fields.x;
    fVar3 = UVar13.fields.y;
  }
  (__this->fields).systemPosition.fields.x = fVar2;
  (__this->fields).systemPosition.fields.y = fVar3;
  (__this->fields).systemPosition.fields.z = fVar11;
  UVar13 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
  (__this->fields).localPosition.fields.x = UVar13.fields.x;
  (__this->fields).localPosition.fields.y = UVar13.fields.y;
  (__this->fields).localPosition.fields.z = UVar13.fields.z;
  UVar12 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Transform__get_localRotation(transform,(MethodInfo *)0x0);
  (__this->fields).localRotation.fields = UVar12;
  (__this->fields).depth = depth;
  if (startDepth < depth) {
    fVar11 = nodeLength + boneLength;
    (__this->fields).boneLength = fVar11;
  }
  else {
    fVar11 = (__this->fields).boneLength;
  }
  fVar2 = (__this->fields).treeLength;
  if (fVar2 <= fVar11) {
    fVar2 = fVar11;
  }
  (__this->fields).treeLength = fVar2;
  iVar9 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
  if ((0 < iVar9) &&
     (bVar8 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)endBones,
                         (Il2CppObject *)transform,
                         (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_Transform), !bVar8))
  {
    index = 0;
    iVar9 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
    if (0 < iVar9) {
      do {
        __this_00 = UnityEngine_Transform__GetChild(transform,index,(MethodInfo *)0x0);
        if ((__this_00 == (UnityEngine_Transform_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_032a4406;
        bVar8 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
        if (bVar8) {
          UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          UVar14 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar4 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          local_88 = UVar13.fields.x;
          fStack_84 = UVar13.fields.y;
          fStack_84 = fStack_84 - UVar14.fields.y;
          fVar11 = UVar13.fields.z - UVar14.fields.z;
          local_88 = local_88 - UVar14.fields.x;
          fVar11 = fStack_84 * fStack_84 + local_88 * local_88 + fVar11 * fVar11;
          if (fVar11 < 0.0) {
            fVar11 = sqrtf(fVar11);
          }
          else {
            fVar11 = SQRT(fVar11);
          }
          fVar2 = (__this->fields).boneLength;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
          EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                    (__this_02,systemSpace,__this_00,endBones,startDepth,depth + 1,fVar11,fVar2,
                     in_stack_ffffffffffffff68);
          if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a4406;
          (__this_02->fields).parentBone = __this;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).parentBone);
          pMVar7 = MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Add;
          pSVar10 = (__this->fields).childBones;
          if (pSVar10 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_032a4406;
          piVar1 = &(pSVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pEVar6 = (pSVar10->fields)._items;
          if (pEVar6 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_array *)0x0) goto label_032a4406;
          uVar5 = (pSVar10->fields)._size;
          if (uVar5 < (uint)pEVar6->max_length) {
            (pSVar10->fields)._size = uVar5 + 1;
            pEVar6->m_Items[(int)uVar5] = __this_02;
            Il2CppCodeGenWriteBarrier(pEVar6->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)__this_02,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
          fVar11 = (__this->fields).treeLength;
          fVar2 = (__this_02->fields).treeLength;
          if (fVar11 <= fVar2) {
            fVar11 = fVar2;
          }
          (__this->fields).treeLength = fVar11;
        }
        index = index + 1;
        iVar9 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
      } while (index < iVar9);
    }
  }
  fVar11 = (__this->fields).treeLength;
  fVar2 = 0.0;
  if ((fVar11 != 0.0) || (NAN(fVar11))) {
    fVar2 = (__this->fields).boneLength / fVar11;
  }
  (__this->fields).normalizedLength = fVar2;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x32a4880

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_31a4890(__this,(__this->fields).treeLength,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float treeLength, const MethodInfo* method);
// 0x32a4890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a4909: nop dword ptr [rax]

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_31a4890
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float treeLength,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  float fVar1;
  
  if (Il2CppMethodInitialized_0753e809 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e809 = '\x01';
  }
  (__this->fields).treeLength = treeLength;
  fVar1 = 0.0;
  if ((treeLength != 0.0) || (NAN(treeLength))) {
    fVar1 = (__this->fields).boneLength / treeLength;
  }
  (__this->fields).normalizedLength = fVar1;
  __this_01 = (__this->fields).childBones;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= (int)index) {
        return;
      }
      method_00 = (MethodInfo *)(ulong)index;
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_31a4890(__this_00,treeLength,method_00);
      index = index + 1;
      __this_01 = (__this->fields).childBones;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetLeftSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* left, const MethodInfo* method);
// 0x32a4820

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *left,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  if ((left != __this) && ((__this->fields).rightBone != left)) {
    (__this->fields).leftBone = left;
    Il2CppCodeGenWriteBarrier(&(__this->fields).leftBone);
    if ((left == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__InverseTransformPoint
                      (__this_00,(UnityEngine_Vector3_o)(left->fields).worldPosition.fields,(MethodInfo *)0x0)
    ;
    (__this->fields).leftPosition.fields = UVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRightSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* right, const MethodInfo* method);
// 0x32a47c0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *right,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  if ((right != __this) && ((__this->fields).leftBone != right)) {
    (__this->fields).rightBone = right;
    Il2CppCodeGenWriteBarrier(&(__this->fields).rightBone);
    if ((right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__InverseTransformPoint
                      (__this_00,(UnityEngine_Vector3_o)(right->fields).worldPosition.fields,(MethodInfo *)0x0
                      );
    (__this->fields).rightPosition.fields = UVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, const MethodInfo* method);
// 0x32a4970
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a49de: lea r12, [rip + 0x3ff384b]  ; MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item
// asm:   0x32a49e5: nop word ptr cs:[rax + rax]

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  MethodInfo *method_00;
  int index;
  float fVar1;
  
  if (Il2CppMethodInitialized_0753e80a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e80a = '\x01';
  }
  if (radiusCurve != (UnityEngine_AnimationCurve_o *)0x0) {
    index = 0;
    fVar1 = UnityEngine_AnimationCurve__Evaluate
                      (radiusCurve,(__this->fields).normalizedLength,(MethodInfo *)0x0);
    (__this->fields).radius = fVar1 * baseRadius;
    __this_00 = (__this->fields).childBones;
    while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate(__this_01,baseRadius,radiusCurve,method_00);
      index = index + 1;
      __this_00 = (__this->fields).childBones;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* material, const MethodInfo* method);
// 0x32a4a40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a4bae: lea r13, [rip + 0x3ff367b]  ; MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item
// asm:   0x32a4bb5: nop word ptr cs:[rax + rax]

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_31a4a40
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *material,
               MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  int index;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_0753e80b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e80b = '\x01';
  }
  if (radiusCurve != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar2 = UnityEngine_AnimationCurve__Evaluate
                      (radiusCurve,(__this->fields).normalizedLength,(MethodInfo *)0x0);
    (__this->fields).radius = fVar2 * baseRadius;
    if ((material != (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)0x0) &&
       (pUVar1 = (material->fields).m_DampingCurve, pUVar1 != (UnityEngine_AnimationCurve_o *)0x0)) {
      fVar2 = (material->fields).m_Damping;
      fVar3 = UnityEngine_AnimationCurve__Evaluate(pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0)
      ;
      (__this->fields).damping = fVar3 * fVar2;
      pUVar1 = (material->fields).m_StiffnessCurve;
      if (pUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
        fVar2 = (material->fields).m_Stiffness;
        fVar3 = UnityEngine_AnimationCurve__Evaluate
                          (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
        (__this->fields).stiffness = fVar3 * fVar2;
        pUVar1 = (material->fields).m_ResistanceCurve;
        if (pUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
          fVar2 = (material->fields).m_Resistance;
          fVar3 = UnityEngine_AnimationCurve__Evaluate
                            (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
          (__this->fields).resistance = fVar3 * fVar2;
          pUVar1 = (material->fields).m_SlacknessCurve;
          if (pUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
            fVar2 = (material->fields).m_Slackness;
            index = 0;
            fVar3 = UnityEngine_AnimationCurve__Evaluate
                              (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
            (__this->fields).slackness = fVar3 * fVar2;
            __this_00 = (__this->fields).childBones;
            while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
              if ((__this_00->fields)._size <= index) {
                return;
              }
              __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
              if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
              EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_31a4a40
                        (__this_01,baseRadius,radiusCurve,material,method);
              index = index + 1;
              __this_00 = (__this->fields).childBones;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x32a36f0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,int32_t startDepth,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (Il2CppMethodInitialized_0753e80c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e80c = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_032a37aa;
    UnityEngine_Transform__set_localPosition
              (pUVar1,(UnityEngine_Vector3_o)(__this->fields).localPosition.fields,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_032a37aa;
    UnityEngine_Transform__set_localRotation
              (pUVar1,(UnityEngine_Quaternion_o)(__this->fields).localRotation.fields,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).childBones;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,method_00);
      index = index + 1;
      __this_01 = (__this->fields).childBones;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
label_032a37aa:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateTransform
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, bool siblingRotationConstraints, int32_t startDepth, const MethodInfo* method);
// 0x32a6360

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,bool siblingRotationConstraints,
               int32_t startDepth,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  UnityEngine_Transform_o *__this_00;
  bool bVar23;
  Il2CppObject *pIVar24;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar25;
  int index;
  UnityEngine_Transform_o *pUVar26;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar31;
  undefined4 in_XMM1_Dc;
  undefined4 uVar32;
  undefined4 in_XMM1_Dd;
  undefined4 uVar33;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  UnityEngine_Quaternion_o UVar38;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o vector;
  UnityEngine_Vector3_o vector_00;
  UnityEngine_Vector3_o vector_01;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_Fields local_a8;
  UnityEngine_Quaternion_Fields local_98;
  undefined1 local_88 [16];
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_0753e80d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e80d = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pSVar27 = (__this->fields).childBones;
    if (pSVar27 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_032a69fc;
    if ((pSVar27->fields)._size != 1) goto label_032a692a;
    pIVar24 = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar27,0,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    pUVar26 = (__this->fields).transform;
    if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
    UVar38 = UnityEngine_Transform__get_rotation(pUVar26,(MethodInfo *)0x0);
    if (pIVar24 == (Il2CppObject *)0x0) goto label_032a69fc;
    local_98.z = in_XMM1_Dc;
    local_98._0_8_ = UVar38.fields._8_8_;
    local_98.w = in_XMM1_Dd;
    local_88._8_4_ = extraout_XMM0_Dc;
    local_88._0_8_ = UVar38.fields._0_8_;
    local_88._12_4_ = extraout_XMM0_Dd;
    __this_00 = (__this->fields).transform;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
    UVar39.fields.z = *(float *)&pIVar24[8].klass - (__this->fields).worldPosition.fields.z;
    uVar1 = (__this->fields).worldPosition.fields.x;
    uVar12 = (__this->fields).worldPosition.fields.y;
    UVar39.fields.x = SUB84(pIVar24[7].monitor,0) - (float)uVar1;
    UVar39.fields.y = (float)((ulong)pIVar24[7].monitor >> 0x20) - (float)uVar12;
    local_68.x = (float)*(undefined4 *)&pIVar24[2].klass;
    local_78._0_8_ = pIVar24[1].monitor;
    UVar39 = UnityEngine_Transform__InverseTransformVector(__this_00,UVar39,(MethodInfo *)0x0);
    local_b8.z = UVar39.fields.z;
    local_a8.x = local_78.x;
    local_a8.y = local_78.y;
    local_a8.z = local_68.x;
    local_b8._0_8_ = UVar39.fields._0_8_;
    UVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                       ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                        (MethodInfo *)0x0);
    fVar30 = UVar38.fields.z;
    fVar36 = UVar38.fields.w;
    fVar29 = UVar38.fields.x;
    fVar34 = UVar38.fields.y;
    UVar38.fields.z =
         (local_98.x * fVar36 + local_98.y * fVar30 + fVar34 * (float)local_88._0_4_) -
         fVar29 * (float)local_88._4_4_;
    UVar38.fields.y =
         (local_98.y * fVar34 + (float)local_88._4_4_ * fVar36 + local_98.x * fVar29) -
         fVar30 * (float)local_88._0_4_;
    UVar38.fields.x =
         (local_98.y * fVar29 + (float)local_88._0_4_ * fVar36 + (float)local_88._4_4_ * fVar30) -
         fVar34 * local_98.x;
    UVar38.fields.w =
         ((fVar36 * local_98.y - (float)local_88._0_4_ * fVar29) - (float)local_88._4_4_ * fVar34) -
         fVar30 * local_98.x;
    UnityEngine_Transform__set_rotation(pUVar26,UVar38,(MethodInfo *)0x0);
    if (siblingRotationConstraints) {
      pEVar25 = (__this->fields).leftBone;
      method = (MethodInfo *)(__this->fields).rightBone;
      if (pEVar25 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        if ((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)
        {
          pUVar26 = (__this->fields).transform;
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
          fVar30 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.z -
                   (__this->fields).worldPosition.fields.z;
          uVar8 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.x;
          uVar19 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.y;
          uVar9 = (__this->fields).worldPosition.fields.x;
          uVar20 = (__this->fields).worldPosition.fields.y;
          fVar29 = (float)uVar8 - (float)uVar9;
          fVar34 = (float)uVar19 - (float)uVar20;
          local_88._0_4_ = (__this->fields).rightPosition.fields.z;
          uVar35._0_4_ = (__this->fields).rightPosition.fields.x;
          uVar35._4_4_ = (__this->fields).rightPosition.fields.y;
          goto label_032a680f;
        }
      }
      else {
        pUVar26 = (__this->fields).transform;
        if ((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)
        {
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
          fVar30 = (pEVar25->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
          uVar10 = (pEVar25->fields).worldPosition.fields.x;
          uVar21 = (pEVar25->fields).worldPosition.fields.y;
          uVar11 = (__this->fields).worldPosition.fields.x;
          uVar22 = (__this->fields).worldPosition.fields.y;
          fVar29 = (float)uVar10 - (float)uVar11;
          fVar34 = (float)uVar21 - (float)uVar22;
          local_88._0_4_ = (__this->fields).leftPosition.fields.z;
          uVar35._0_4_ = (__this->fields).leftPosition.fields.x;
          uVar35._4_4_ = (__this->fields).leftPosition.fields.y;
label_032a680f:
          uVar33 = 0;
          uVar32 = 0;
          local_98.x = (float)(int)uVar35;
          local_98.y = (float)(int)((ulong)uVar35 >> 0x20);
          vector_01.fields.y = fVar34;
          vector_01.fields.x = fVar29;
          vector_01.fields.z = fVar30;
          UVar39 = UnityEngine_Transform__InverseTransformVector(pUVar26,vector_01,(MethodInfo *)0x0);
          local_b8.z = UVar39.fields.z;
          local_a8.x = local_98.x;
          local_a8.y = local_98.y;
          local_a8.z = (float)local_88._0_4_;
          local_b8._0_8_ = UVar39.fields._0_8_;
          UVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                             ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                              (MethodInfo *)0x0);
          local_88._8_4_ = extraout_XMM0_Dc_03;
          local_88._0_8_ = UVar38.fields._0_8_;
          local_88._12_4_ = extraout_XMM0_Dd_03;
          local_98.z = uVar32;
          local_98._0_8_ = UVar38.fields._8_8_;
          local_98.w = uVar33;
          pUVar26 = (__this->fields).transform;
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
          UVar38 = UnityEngine_Transform__get_rotation(pUVar26,(MethodInfo *)0x0);
          fVar28 = UVar38.fields.z;
          fVar31 = UVar38.fields.w;
          fVar29 = UVar38.fields.x;
          fVar30 = UVar38.fields.y;
          fVar34 = ((float)local_88._0_4_ * fVar31 + local_98.y * fVar29 + fVar30 * local_98.x) -
                   fVar28 * (float)local_88._4_4_;
          fVar36 = ((float)local_88._4_4_ * fVar31 + local_98.y * fVar30 + (float)local_88._0_4_ * fVar28) -
                   fVar29 * local_98.x;
          fVar37 = ((local_98.y * fVar31 - (float)local_88._0_4_ * fVar29) - (float)local_88._4_4_ * fVar30) -
                   local_98.x * fVar28;
          fVar29 = (fVar31 * local_98.x + fVar28 * local_98.y + (float)local_88._4_4_ * fVar29) -
                   (float)local_88._0_4_ * fVar30;
        }
        else {
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
          uVar32 = 0;
          uVar33 = 0;
          vector.fields.z = (pEVar25->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z
          ;
          uVar2 = (pEVar25->fields).worldPosition.fields.x;
          uVar13 = (pEVar25->fields).worldPosition.fields.y;
          uVar3 = (__this->fields).worldPosition.fields.x;
          uVar14 = (__this->fields).worldPosition.fields.y;
          vector.fields.x = (float)uVar2 - (float)uVar3;
          vector.fields.y = (float)uVar13 - (float)uVar14;
          local_88._0_4_ = (__this->fields).leftPosition.fields.z;
          uVar4 = (__this->fields).leftPosition.fields.x;
          uVar15 = (__this->fields).leftPosition.fields.y;
          local_98.y = (float)uVar15;
          local_98.x = (float)uVar4;
          UVar39 = UnityEngine_Transform__InverseTransformVector(pUVar26,vector,(MethodInfo *)0x0);
          local_b8.z = UVar39.fields.z;
          local_a8.x = local_98.x;
          local_a8.y = local_98.y;
          local_a8.z = (float)local_88._0_4_;
          local_b8._0_8_ = UVar39.fields._0_8_;
          UVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                             ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                              (MethodInfo *)0x0);
          pEVar25 = (__this->fields).rightBone;
          if (pEVar25 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a69fc;
          local_98.z = uVar32;
          local_98._0_8_ = UVar38.fields._8_8_;
          local_98.w = uVar33;
          local_88._8_4_ = extraout_XMM0_Dc_00;
          local_88._0_8_ = UVar38.fields._0_8_;
          local_88._12_4_ = extraout_XMM0_Dd_00;
          pUVar26 = (__this->fields).transform;
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
          uVar5 = (__this->fields).rightPosition.fields.x;
          uVar16 = (__this->fields).rightPosition.fields.y;
          local_68.y = (float)uVar16;
          local_68.x = (float)uVar5;
          local_68.z = 0.0;
          local_68.w = 0.0;
          uVar32 = 0;
          uVar33 = 0;
          vector_00.fields.z =
               (pEVar25->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
          local_78.x = (__this->fields).rightPosition.fields.z;
          uVar6 = (pEVar25->fields).worldPosition.fields.x;
          uVar17 = (pEVar25->fields).worldPosition.fields.y;
          uVar7 = (__this->fields).worldPosition.fields.x;
          uVar18 = (__this->fields).worldPosition.fields.y;
          vector_00.fields.x = (float)uVar6 - (float)uVar7;
          vector_00.fields.y = (float)uVar17 - (float)uVar18;
          UVar39 = UnityEngine_Transform__InverseTransformVector(pUVar26,vector_00,(MethodInfo *)0x0);
          local_b8.z = UVar39.fields.z;
          local_a8.x = local_68.x;
          local_a8.y = local_68.y;
          local_a8.z = local_78.x;
          local_b8._0_8_ = UVar39.fields._0_8_;
          UVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                             ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                              (MethodInfo *)0x0);
          local_68.z = (float)extraout_XMM0_Dc_01;
          local_68._0_8_ = UVar38.fields._0_8_;
          local_68.w = (float)extraout_XMM0_Dd_01;
          local_78.z = uVar32;
          local_78._0_8_ = UVar38.fields._8_8_;
          local_78.w = uVar33;
          pUVar26 = (__this->fields).transform;
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
          UVar38 = UnityEngine_Transform__get_rotation(pUVar26,(MethodInfo *)0x0);
          local_48._8_4_ = extraout_XMM0_Dc_02;
          local_48._0_8_ = UVar38.fields._0_8_;
          local_48._12_4_ = extraout_XMM0_Dd_02;
          local_58._8_4_ = uVar32;
          local_58._0_8_ = UVar38.fields._8_8_;
          local_58._12_4_ = uVar33;
          local_a8.z = local_98.x;
          local_a8.w = local_98.y;
          local_a8._0_8_ = local_88._0_8_;
          local_b8.z = local_78.x;
          local_b8.w = local_78.y;
          local_b8._0_8_ = local_68._0_8_;
          UVar38 = UnityEngine_Quaternion__Internal_Lerp
                             ((UnityEngine_Quaternion_o *)&local_a8,(UnityEngine_Quaternion_o *)&local_b8,0.5,
                              (MethodInfo *)0x0);
          fVar28 = UVar38.fields.z;
          fVar31 = UVar38.fields.w;
          fVar29 = UVar38.fields.x;
          fVar30 = UVar38.fields.y;
          fVar34 = ((float)local_58._4_4_ * fVar29 + (float)local_48._0_4_ * fVar31 +
                   (float)local_48._4_4_ * fVar28) - fVar30 * (float)local_58._0_4_;
          fVar36 = ((float)local_58._4_4_ * fVar30 + (float)local_48._4_4_ * fVar31 +
                   (float)local_58._0_4_ * fVar29) - fVar28 * (float)local_48._0_4_;
          fVar37 = ((fVar31 * (float)local_58._4_4_ - (float)local_48._0_4_ * fVar29) -
                   (float)local_48._4_4_ * fVar30) - (float)local_58._0_4_ * fVar28;
          fVar29 = ((float)local_58._0_4_ * fVar31 + (float)local_58._4_4_ * fVar28 +
                   fVar30 * (float)local_48._0_4_) - fVar29 * (float)local_48._4_4_;
        }
        value.fields.y = fVar36;
        value.fields.x = fVar34;
        value.fields.w = fVar37;
        value.fields.z = fVar29;
        UnityEngine_Transform__set_rotation(pUVar26,value,(MethodInfo *)0x0);
      }
    }
label_032a692a:
    pUVar26 = (__this->fields).transform;
    if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
    UnityEngine_Transform__set_position
              (pUVar26,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,(MethodInfo *)0x0);
  }
  pUVar26 = (__this->fields).systemSpace;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar23 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar23) {
    pUVar26 = (__this->fields).systemSpace;
    if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_032a69fc;
    UVar39 = UnityEngine_Transform__InverseTransformPoint
                       (pUVar26,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,(MethodInfo *)0x0
                       );
    (__this->fields).systemPosition.fields.x = UVar39.fields.x;
    (__this->fields).systemPosition.fields.y = UVar39.fields.y;
    (__this->fields).systemPosition.fields.z = UVar39.fields.z;
  }
  pSVar27 = (__this->fields).childBones;
  if (pSVar27 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((pSVar27->fields)._size <= index) {
        return;
      }
      pEVar25 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar27,index,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (pEVar25 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
                (pEVar25,siblingRotationConstraints,startDepth,method);
      index = index + 1;
      pSVar27 = (__this->fields).childBones;
    } while (pSVar27 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
label_032a69fc:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x32a3df0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a3ea5: jmp 0x32a3ee7

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  bool bVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  UnityEngine_Vector3_Fields UVar6;
  
  if (Il2CppMethodInitialized_0753e80e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e80e = '\x01';
  }
  pUVar2 = (__this->fields).transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    (__this->fields).worldPosition.fields = UVar6;
    pUVar2 = (__this->fields).systemSpace;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      fVar4 = (__this->fields).worldPosition.fields.y;
      fVar1 = (__this->fields).worldPosition.fields.z;
      (__this->fields).systemPosition.fields.x = (__this->fields).worldPosition.fields.x;
      (__this->fields).systemPosition.fields.y = fVar4;
      (__this->fields).systemPosition.fields.z = fVar1;
    }
    else {
      pUVar2 = (__this->fields).systemSpace;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_032a3f67;
      UVar6 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__InverseTransformPoint
                        (pUVar2,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,(MethodInfo *)0x0
                        );
      (__this->fields).systemPosition.fields = UVar6;
    }
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar4 = (pUVar3->zeroVector).fields.y;
    fVar1 = (pUVar3->zeroVector).fields.z;
    (__this->fields).speed.fields.x = (pUVar3->zeroVector).fields.x;
    (__this->fields).speed.fields.y = fVar4;
    (__this->fields).speed.fields.z = fVar1;
    __this_01 = (__this->fields).childBones;
    if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      index = 0;
      do {
        if ((__this_01->fields)._size <= (int)index) {
          return;
        }
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
        index = index + 1;
        __this_01 = (__this->fields).childBones;
      } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
label_032a3f67:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x32a4c10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a4cbf: lea r15, [rip + 0x3ff356a]  ; MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item
// asm:   0x32a4cc6: nop word ptr cs:[rax + rax]

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  bool bVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  uint index;
  MethodInfo *method_00;
  UnityEngine_Vector3_Fields UVar3;
  
  if (Il2CppMethodInitialized_0753e80f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e80f = '\x01';
  }
  pUVar1 = (__this->fields).systemSpace;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields).systemSpace;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    index = 0;
    UVar3 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__TransformPoint
                      (pUVar1,(UnityEngine_Vector3_o)(__this->fields).systemPosition.fields,(MethodInfo *)0x0)
    ;
    (__this->fields).worldPosition.fields = UVar3;
    __this_00 = (__this->fields).childBones;
    while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((__this_00->fields)._size <= (int)index) {
        return;
      }
      method_00 = (MethodInfo *)(ulong)index;
      __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(__this_01,method_00);
      index = index + 1;
      __this_00 = (__this->fields).childBones;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_rootBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_rootBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a28b0

System_Collections_Generic_List_Transform__o *
EZhex1991_EZSoftBone_EZSoftBone__get_rootBones(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_RootBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_endBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_endBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a28c0

System_Collections_Generic_List_Transform__o *
EZhex1991_EZSoftBone_EZSoftBone__get_endBones(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_EndBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sharedMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a28d0

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  bool bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **targetAddress;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0753e7fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e7fa = '\x01';
  }
  method_00 = (MethodInfo *)(__this->fields).m_Material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).m_Material;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pEVar2 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(method_00);
    *targetAddress = pEVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return *targetAddress;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sharedMaterial
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x32a2a40

void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,
               MethodInfo *method)

{
  (__this->fields).m_Material = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Material);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_material
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2a50

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_material(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **targetAddress;
  bool bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  MethodInfo *method_00;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_0753e7fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_EZSoftBoneMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e7fb = '\x01';
  }
  pEVar2 = (__this->fields).m_InstanceMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).m_InstanceMaterial;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pEVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_0753e7fa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_0753e7fa = '\x01';
    }
    method_00 = (MethodInfo *)(__this->fields).m_Material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    targetAddress_00 = &(__this->fields).m_Material;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pEVar2 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(method_00);
      *targetAddress_00 = pEVar2;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
    }
    pEVar2 = *targetAddress_00;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pEVar2 = UnityEngine_Object__Instantiate_object__35a4190
                       ((Il2CppObject *)pEVar2,
                        (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_EZSoftBoneMaterial);
    *targetAddress_00 = pEVar2;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    *targetAddress = pEVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return *targetAddress;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_material
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x32a2b70

void EZhex1991_EZSoftBone_EZSoftBone__set_material
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,
               MethodInfo *method)

{
  (__this->fields).m_Material = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Material);
  (__this->fields).m_InstanceMaterial = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_InstanceMaterial);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_startDepth
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2bb0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_StartDepth;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_startDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x32a2bc0

void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_StartDepth = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingConstraints
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2bd0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x32a2be0

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_SiblingConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_closedSiblings
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2bf0

bool EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ClosedSiblings;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_closedSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x32a2c00

void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_ClosedSiblings = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingRotationConstraints
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2c10

bool EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingRotationConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingRotationConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x32a2c20

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_SiblingRotationConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_lengthUnification
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2c30

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_LengthUnification;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_lengthUnification
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x32a2c40

void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_LengthUnification = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_collisionLayers
// il2cpp: UnityEngine_LayerMask_o EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2c50

UnityEngine_LayerMask_o
EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)
         (UnityEngine_LayerMask_Fields)(__this->fields).m_CollisionLayers.fields.m_Mask;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_collisionLayers
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_LayerMask_o value, const MethodInfo* method);
// 0x32a2c60

void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_LayerMask_o value,MethodInfo *method)

{
  (__this->fields).m_CollisionLayers.fields.m_Mask = (int32_t)value.fields.m_Mask;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_extraColliders
// il2cpp: System_Collections_Generic_List_Collider__o* EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2c70

System_Collections_Generic_List_Collider__o *
EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ExtraColliders;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2c80

float EZhex1991_EZSoftBone_EZSoftBone__get_radius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Radius;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_radius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x32a2c90

void EZhex1991_EZSoftBone_EZSoftBone__set_radius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Radius = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radiusCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2ca0

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_RadiusCurve;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_deltaTimeMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2cb0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DeltaTimeMode;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_deltaTimeMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x32a2cc0

void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_DeltaTimeMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_constantDeltaTime
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2cd0

float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ConstantDeltaTime;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_constantDeltaTime
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x32a2ce0

void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ConstantDeltaTime = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_iterations
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2cf0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Iterations;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_iterations
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x32a2d00

void EZhex1991_EZSoftBone_EZSoftBone__set_iterations
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_Iterations = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sleepThreshold
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2d10

float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SleepThreshold;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sleepThreshold
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x32a2d20

void EZhex1991_EZSoftBone_EZSoftBone__set_sleepThreshold
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (__this->fields).m_SleepThreshold = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_gravityAligner
// il2cpp: UnityEngine_Transform_o* EZhex1991_EZSoftBone_EZSoftBone__get_gravityAligner (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2d30

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_gravityAligner
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_GravityAligner;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravityAligner
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x32a2d40

void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,MethodInfo *method)

{
  (__this->fields).m_GravityAligner = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_GravityAligner);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_gravity
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2d50

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBone__get_gravity(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Gravity.fields;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x32a2d70

void EZhex1991_EZSoftBone_EZSoftBone__set_gravity
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields).m_Gravity.fields.x = value.fields.x;
  (__this->fields).m_Gravity.fields.y = value.fields.y;
  (__this->fields).m_Gravity.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceModule
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForceField_o* EZhex1991_EZSoftBone_EZSoftBone__get_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2d80

EZhex1991_EZSoftBone_EZSoftBoneForceField_o *
EZhex1991_EZSoftBone_EZSoftBone__get_forceModule(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceModule;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceModule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForceField_o* value, const MethodInfo* method);
// 0x32a2d90

void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneForceField_o *value,
               MethodInfo *method)

{
  (__this->fields).m_ForceModule = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ForceModule);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceScale
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2db0

float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceScale;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceScale
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x32a2dc0

void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ForceScale = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_simulateSpace
// il2cpp: UnityEngine_Transform_o* EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2dd0

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SimulateSpace;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_simulateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x32a2de0

void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,MethodInfo *method)

{
  (__this->fields).m_SimulateSpace = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_SimulateSpace);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalRadius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2e00

float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields)._globalRadius_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x32a2e10

void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._globalRadius_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalForce
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2e20

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBone__get_globalForce(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._globalForce_k__BackingField.fields;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalForce
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x32a2e40

void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields)._globalForce_k__BackingField.fields.x = value.fields.x;
  (__this->fields)._globalForce_k__BackingField.fields.y = value.fields.y;
  (__this->fields)._globalForce_k__BackingField.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Start
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Start (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2e50

void EZhex1991_EZSoftBone_EZSoftBone__Start(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__CreateBones(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblings(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnEnable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2eb0

void EZhex1991_EZSoftBone_EZSoftBone__OnEnable(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__SetRestState(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Update (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2f50

void EZhex1991_EZSoftBone_EZSoftBone__Update(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_31a2f60(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$LateUpdate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2ff0

void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int iVar1;
  float deltaTime;
  
  iVar1 = (__this->fields).m_DeltaTimeMode;
  if (iVar1 == 2) {
    deltaTime = (__this->fields).m_ConstantDeltaTime;
  }
  else if (iVar1 == 1) {
    deltaTime = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 0) goto label_032a3024;
    deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  }
  EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures(__this,deltaTime,method);
label_032a3024:
  EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnDisable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a36d0

void EZhex1991_EZSoftBone_EZSoftBone__OnDisable(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_31a2f60(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a36e0

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_31a2f60(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x32a2f60

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_31a2f60
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t startDepth,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (Il2CppMethodInitialized_0753e7fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e7fc = '\x01';
  }
  __this_01 = (__this->fields).m_Structures;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$InitStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__InitStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2e80

void EZhex1991_EZSoftBone_EZSoftBone__InitStructures
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__CreateBones(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblings(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a2ec0

void EZhex1991_EZSoftBone_EZSoftBone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (Il2CppMethodInitialized_0753e7fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e7fd = '\x01';
  }
  __this_01 = (__this->fields).m_Structures;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= (int)index) {
        return;
      }
      method_00 = (MethodInfo *)(ulong)index;
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$CreateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__CreateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a37c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a3897: lea r14, [rip + 0x3fd7b52]  ; TypeInfo_UnityEngine_Object

void EZhex1991_EZSoftBone_EZSoftBone__CreateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar4;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_array *pEVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *transform;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  System_Collections_Generic_List_Transform__o *pSVar9;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_0753e7fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e7fe = '\x01';
  }
  pSVar4 = (__this->fields).m_Structures;
  if (pSVar4 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar9 = (__this->fields).m_RootBones;
    if ((pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) || ((pSVar9->fields)._size == 0)) {
      return;
    }
    index = 0;
    do {
      if ((pSVar9->fields)._size <= index) {
        return;
      }
      pUVar8 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar9,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        pSVar9 = (__this->fields).m_RootBones;
        if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        pUVar8 = (__this->fields).m_SimulateSpace;
        transform = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar9,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_Transform_get_Item);
        pSVar9 = (__this->fields).m_EndBones;
        iVar2 = (__this->fields).m_StartDepth;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
        EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                  (__this_00,pUVar8,transform,(System_Collections_Generic_IEnumerable_Transform__o *)pSVar9,
                   iVar2,0,0.0,0.0,in_stack_ffffffffffffffb8);
        pMVar6 = MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Add;
        pSVar4 = (__this->fields).m_Structures;
        if (pSVar4 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) break;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pEVar5 = (pSVar4->fields)._items;
        if (pEVar5 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_array *)0x0) break;
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pEVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pEVar5->m_Items[(int)uVar3] = __this_00;
          Il2CppCodeGenWriteBarrier(pEVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_00,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
      index = index + 1;
      pSVar9 = (__this->fields).m_RootBones;
    } while (pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0);
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a39c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a3ae4: jmp 0x32a3b5c

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  EZhex1991_EZSoftBone_EZSoftBone_o *pEVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Queue_EZSoftBone_Bone__o *bones;
  MethodInfo *in_RCX;
  int iVar4;
  EZhex1991_EZSoftBone_EZSoftBone_o *__this_00;
  
  if (Il2CppMethodInitialized_0753e7ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
    Il2CppMethodInitialized_0753e7ff = '\x01';
  }
  iVar4 = (__this->fields).m_SiblingConstraints;
  if (iVar4 == 2) {
    bones = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
    System_Collections_Generic_Queue_object____ctor
              ((System_Collections_Generic_Queue_T__o *)bones,
               (MethodInfo_3E738D0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
    pEVar2 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
    if (pEVar2 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) {
      if (bones == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
        if (0 < *(int *)&(pEVar2->fields).m_CancellationTokenSource) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pEVar2,0,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item
                    );
          ThrowNullReferenceException();
        }
      }
      else {
        iVar4 = 0;
        do {
          if (*(int *)&(pEVar2->fields).m_CancellationTokenSource <= iVar4) {
            if (bones != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
              if ((bones->fields)._size < 1) {
                return;
              }
              EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                        (pEVar2,bones,(__this->fields).m_ClosedSiblings,in_RCX);
              return;
            }
            break;
          }
          pIVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pEVar2,iVar4,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
          System_Collections_Generic_Queue_object___Enqueue
                    ((System_Collections_Generic_Queue_T__o *)bones,pIVar3,
                     (MethodInfo_3E73ED0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue
                    );
          iVar4 = iVar4 + 1;
          pEVar2 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
        } while (pEVar2 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0);
      }
    }
  }
  else {
    if (iVar4 != 1) {
      return;
    }
    pSVar1 = (__this->fields).m_Structures;
    if (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar4 = 0;
      do {
        if ((pSVar1->fields)._size <= iVar4) {
          return;
        }
        pEVar2 = (EZhex1991_EZSoftBone_EZSoftBone_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
        System_Collections_Generic_Queue_object____ctor
                  ((System_Collections_Generic_Queue_T__o *)pEVar2,
                   (MethodInfo_3E738D0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
        pSVar1 = (__this->fields).m_Structures;
        if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
           pEVar2 == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0)) break;
        __this_00 = pEVar2;
        System_Collections_Generic_Queue_object___Enqueue
                  ((System_Collections_Generic_Queue_T__o *)pEVar2,pIVar3,
                   (MethodInfo_3E73ED0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
        EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                  (__this_00,(System_Collections_Generic_Queue_EZSoftBone_Bone__o *)pEVar2,
                   (__this->fields).m_ClosedSiblings,in_RCX);
        iVar4 = iVar4 + 1;
        pSVar1 = (__this->fields).m_Structures;
      } while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblingsByDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, System_Collections_Generic_Queue_EZSoftBone_Bone__o* bones, bool closed, const MethodInfo* method);
// 0x32a4410
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a44e9: jmp 0x32a47ad
// asm:   0x32a451e: jmp 0x32a47ad
// asm:   0x32a4599: jmp 0x32a47ad
// asm:   0x32a4610: jmp 0x32a46ff
// asm:   0x32a4696: jmp 0x32a47ad

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               System_Collections_Generic_Queue_EZSoftBone_Bone__o *bones,bool closed,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o UVar6;
  Il2CppObject *local_40;
  
  if (Il2CppMethodInitialized_0753e800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Dequeue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_get_Count);
    Il2CppMethodInitialized_0753e800 = '\x01';
  }
  if (((bones != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) &&
      (local_40 = System_Collections_Generic_Queue_object___Dequeue
                            ((System_Collections_Generic_Queue_T__o *)bones,
                             (MethodInfo_3E74090 *)
                             MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Dequeue),
      local_40 != (Il2CppObject *)0x0)) &&
     (pSVar5 = local_40[6].monitor, pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar4 = 0;
    do {
      if ((pSVar5->fields)._size <= iVar4) {
        if ((bones->fields)._size < 1) {
          return;
        }
        pIVar1 = local_40;
        goto label_032a4530;
      }
      pIVar1 = System_Collections_Generic_List_object___get_Item
                         (pSVar5,iVar4,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,pIVar1,
                 (MethodInfo_3E73ED0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
      iVar4 = iVar4 + 1;
      pSVar5 = local_40[6].monitor;
    } while (pSVar5 != (System_Collections_Generic_List_object__o *)0x0);
  }
label_032a47ad:
  ThrowNullReferenceException();
label_032a4530:
  do {
    pIVar2 = System_Collections_Generic_Queue_object___Dequeue
                       ((System_Collections_Generic_Queue_T__o *)bones,
                        (MethodInfo_3E74090 *)
                        MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Dequeue);
    if ((pIVar2 == (Il2CppObject *)0x0) ||
       (pSVar5 = pIVar2[6].monitor, pSVar5 == (System_Collections_Generic_List_object__o *)0x0))
    goto label_032a47ad;
    iVar4 = 0;
    while (iVar4 < (pSVar5->fields)._size) {
      pIVar3 = System_Collections_Generic_List_object___get_Item
                         (pSVar5,iVar4,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,pIVar3,
                 (MethodInfo_3E73ED0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
      iVar4 = iVar4 + 1;
      pSVar5 = pIVar2[6].monitor;
      if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_032a47ad;
    }
    if (*(int *)((long)&pIVar1[9].monitor + 4) == *(int *)((long)&pIVar2[9].monitor + 4)) {
      if (pIVar2 != pIVar1) {
        if (pIVar1[3].monitor != pIVar2) {
          pIVar1[5].klass = (Il2CppClass *)pIVar2;
          Il2CppCodeGenWriteBarrier(&pIVar1[5].klass);
          if ((UnityEngine_Transform_o *)pIVar1[7].klass == (UnityEngine_Transform_o *)0x0) goto label_032a47ad;
          UVar6 = UnityEngine_Transform__InverseTransformPoint
                            ((UnityEngine_Transform_o *)pIVar1[7].klass,
                             (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pIVar2[7].monitor,
                             (MethodInfo *)0x0);
          *(UnityEngine_Vector3_Fields *)&pIVar1[5].monitor = UVar6.fields;
        }
        pIVar3 = local_40;
        if ((Il2CppObject *)pIVar2[5].klass == pIVar1) goto label_032a46ff;
        pIVar2[3].monitor = pIVar1;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor);
        __this_00 = (UnityEngine_Transform_o *)pIVar2[7].klass;
        pIVar3 = pIVar2;
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_032a47ad;
label_032a46d9:
        UVar6 = UnityEngine_Transform__InverseTransformPoint
                          (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pIVar1[7].monitor,
                           (MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)(pIVar3 + 4) = UVar6.fields;
      }
      pIVar3 = local_40;
    }
    else {
      pIVar3 = pIVar2;
      if (closed) {
        if (local_40 == pIVar1) {
          if (local_40 == (Il2CppObject *)0x0) goto label_032a47ad;
        }
        else {
          if (pIVar1[3].monitor == local_40) {
            if (local_40 == (Il2CppObject *)0x0) goto label_032a47ad;
          }
          else {
            pIVar1[5].klass = (Il2CppClass *)local_40;
            Il2CppCodeGenWriteBarrier(&pIVar1[5].klass);
            if ((local_40 == (Il2CppObject *)0x0) ||
               ((UnityEngine_Transform_o *)pIVar1[7].klass == (UnityEngine_Transform_o *)0x0))
            goto label_032a47ad;
            UVar6 = UnityEngine_Transform__InverseTransformPoint
                              ((UnityEngine_Transform_o *)pIVar1[7].klass,
                               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&local_40[7].monitor,
                               (MethodInfo *)0x0);
            *(UnityEngine_Vector3_Fields *)&pIVar1[5].monitor = UVar6.fields;
          }
          if ((Il2CppObject *)local_40[5].klass != pIVar1) {
            local_40[3].monitor = pIVar1;
            Il2CppCodeGenWriteBarrier(&local_40[3].monitor);
            __this_00 = (UnityEngine_Transform_o *)local_40[7].klass;
            pIVar3 = local_40;
            local_40 = pIVar2;
            if (__this_00 != (UnityEngine_Transform_o *)0x0) goto label_032a46d9;
            goto label_032a47ad;
          }
        }
      }
    }
label_032a46ff:
    local_40 = pIVar3;
    pIVar1 = pIVar2;
  } while (0 < (bones->fields)._size);
  if (closed) {
    if (pIVar3 == (Il2CppObject *)0x0) goto label_032a47ad;
    if (pIVar2 != pIVar3) {
      if ((Il2CppObject *)pIVar3[5].klass != pIVar2) {
        pIVar3[3].monitor = pIVar2;
        Il2CppCodeGenWriteBarrier(&pIVar3[3].monitor);
        if ((UnityEngine_Transform_o *)pIVar3[7].klass == (UnityEngine_Transform_o *)0x0) goto label_032a47ad;
        UVar6 = UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Transform_o *)pIVar3[7].klass,
                           (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pIVar2[7].monitor,
                           (MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)(pIVar3 + 4) = UVar6.fields;
      }
      if (pIVar2[3].monitor != pIVar3) {
        pIVar2[5].klass = (Il2CppClass *)pIVar3;
        Il2CppCodeGenWriteBarrier(&pIVar2[5].klass);
        if ((UnityEngine_Transform_o *)pIVar2[7].klass == (UnityEngine_Transform_o *)0x0) goto label_032a47ad;
        UVar6 = UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Transform_o *)pIVar2[7].klass,
                           (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pIVar3[7].monitor,
                           (MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)&pIVar2[5].monitor = UVar6.fields;
      }
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a3bc0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a3c6e: jmp 0x32a3d00
// asm:   0x32a3c8c: nop dword ptr [rax]
// asm:   0x32a3cc2: jmp 0x32a3d00

void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar3;
  int iVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar7;
  float local_1c;
  
  if (Il2CppMethodInitialized_0753e801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e801 = '\x01';
  }
  iVar4 = (__this->fields).m_LengthUnification;
  if (iVar4 == 1) {
    pSVar7 = (__this->fields).m_Structures;
    if (pSVar7 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      uVar5 = 0;
      do {
        if ((pSVar7->fields)._size <= (int)uVar5) {
          return;
        }
        pMVar6 = (MethodInfo *)(ulong)uVar5;
        pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,uVar5,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        if (pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_31a4890(pEVar3,(pEVar3->fields).treeLength,pMVar6)
        ;
        uVar5 = uVar5 + 1;
        pSVar7 = (__this->fields).m_Structures;
      } while (pSVar7 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  else {
    if (iVar4 != 2) {
      return;
    }
    pSVar7 = (__this->fields).m_Structures;
    if (pSVar7 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar4 = 0;
      local_1c = 0.0;
      do {
        if ((pSVar7->fields)._size <= iVar4) {
          uVar5 = 0;
          goto label_032a3cd0;
        }
        pIVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,iVar4,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        if (pIVar2 == (Il2CppObject *)0x0) break;
        fVar1 = *(float *)((long)&pIVar2[10].klass + 4);
        if (local_1c <= fVar1) {
          local_1c = fVar1;
        }
        iVar4 = iVar4 + 1;
        pSVar7 = (__this->fields).m_Structures;
      } while (pSVar7 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  goto label_032a3d00;
  while( true ) {
    EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_31a4890(pEVar3,local_1c,pMVar6);
    uVar5 = uVar5 + 1;
    pSVar7 = (__this->fields).m_Structures;
    if (pSVar7 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) break;
label_032a3cd0:
    if ((pSVar7->fields)._size <= (int)uVar5) {
      return;
    }
    pMVar6 = (MethodInfo *)(ulong)uVar5;
    pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar7,uVar5,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    if (pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
  }
label_032a3d00:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$RefreshRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a3d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a3d99: lea r15, [rip + 0x3ff4490]  ; MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item

void EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_02;
  MethodInfo *method_00;
  int index;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (Il2CppMethodInitialized_0753e802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e802 = '\x01';
  }
  __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    index = 0;
    UVar3 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
    fVar1 = ABS(UVar3.fields.y);
    if (ABS(UVar3.fields.y) <= ABS(UVar3.fields.z)) {
      fVar1 = ABS(UVar3.fields.z);
    }
    fVar2 = ABS(UVar3.fields.x);
    if (ABS(UVar3.fields.x) <= fVar1) {
      fVar2 = fVar1;
    }
    (__this->fields)._globalRadius_k__BackingField = fVar2 * (__this->fields).m_Radius;
    __this_00 = (__this->fields).m_Structures;
    while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (__this_02,(__this->fields)._globalRadius_k__BackingField,(__this->fields).m_RadiusCurve,
                 method_00);
      index = index + 1;
      __this_00 = (__this->fields).m_Structures;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float deltaTime, const MethodInfo* method);
// 0x32a3030
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a3076: jmp 0x32a3564
// asm:   0x32a327b: jmp 0x32a355f

void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float deltaTime,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint32_t uVar7;
  int iVar8;
  UnityEngine_AnimationCurve_o *radiusCurve;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  UnityEngine_Transform_o *pUVar12;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar13;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar14;
  UnityEngine_Vector3_StaticFields *pUVar15;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int index;
  MethodInfo *pMVar16;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar17;
  uint index_00;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar22 [16];
  UnityEngine_Vector3_o UVar23;
  float local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_0753e803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e803 = '\x01';
    uVar7 = (TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar7 = (TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->_2).cctor_finished_or_no_cctor;
  }
  if (uVar7 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone);
    fVar19 = TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->static_fields->DeltaTime_Min;
  }
  else {
    fVar19 = *(float *)((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone)->static_fields;
  }
  if (deltaTime <= fVar19) {
    return;
  }
  pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
    index_00 = 0;
    UVar23 = UnityEngine_Transform__get_lossyScale(pUVar12,(MethodInfo *)0x0);
    fVar19 = ABS(UVar23.fields.y);
    if (ABS(UVar23.fields.y) <= ABS(UVar23.fields.z)) {
      fVar19 = ABS(UVar23.fields.z);
    }
    fVar20 = ABS(UVar23.fields.x);
    if (ABS(UVar23.fields.x) <= fVar19) {
      fVar20 = fVar19;
    }
    (__this->fields)._globalRadius_k__BackingField = fVar20 * (__this->fields).m_Radius;
    pSVar17 = (__this->fields).m_Structures;
    if (pSVar17 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      local_68._0_8_ = &(__this->fields).m_Material;
      do {
        if ((pSVar17->fields)._size <= (int)index_00) {
          fVar20 = (__this->fields).m_Gravity.fields.y;
          fVar19 = (__this->fields).m_Gravity.fields.z;
          (__this->fields)._globalForce_k__BackingField.fields.x = (__this->fields).m_Gravity.fields.x;
          (__this->fields)._globalForce_k__BackingField.fields.y = fVar20;
          (__this->fields)._globalForce_k__BackingField.fields.z = fVar19;
          pUVar12 = (__this->fields).m_GravityAligner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar11) {
            pUVar12 = (__this->fields).m_GravityAligner;
            if (pUVar12 == (UnityEngine_Transform_o *)0x0) break;
            UVar23 = UnityEngine_Transform__TransformDirection
                               (pUVar12,(UnityEngine_Vector3_o)(__this->fields).m_Gravity.fields,
                                (MethodInfo *)0x0);
            local_78 = UVar23.fields.z;
            local_68._8_4_ = extraout_XMM0_Dc;
            local_68._0_8_ = UVar23.fields._0_8_;
            local_68._12_4_ = extraout_XMM0_Dd;
            if (Il2CppMethodInitialized_0753e72d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72d = '\x01';
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a359c;
label_032a3327:
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            else {
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a3327;
label_032a359c:
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e729 = '\x01';
              uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            if (uVar7 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            uVar21 = 0;
            fVar19 = local_78 * local_78 +
                     (float)local_68._4_4_ * (float)local_68._4_4_ +
                     (float)local_68._0_4_ * (float)local_68._0_4_;
            if (fVar19 < 0.0) {
              fVar19 = sqrtf(fVar19);
              uVar21 = extraout_XMM0_Db;
              if (1e-05 < fVar19) goto label_032a339f;
label_032a3374:
              pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_78 = (pUVar15->zeroVector).fields.z;
            }
            else {
              fVar19 = SQRT(fVar19);
              if (fVar19 <= 1e-05) goto label_032a3374;
label_032a339f:
              local_78 = local_78 / fVar19;
              auVar22._4_4_ = fVar19;
              auVar22._0_4_ = fVar19;
              auVar22._8_4_ = uVar21;
              auVar22._12_4_ = uVar21;
              auVar22 = divps(local_68,auVar22);
              local_70._0_4_ = auVar22._0_4_;
              local_70._4_4_ = auVar22._4_4_;
              pUVar15 = (UnityEngine_Vector3_StaticFields *)local_70;
            }
            local_48 = (pUVar15->zeroVector).fields.x;
            fStack_44 = (pUVar15->zeroVector).fields.y;
            UStack_40.x = 0.0;
            UStack_40.y = 0.0;
            uVar1 = (__this->fields).m_Gravity.fields.x;
            uVar4 = (__this->fields).m_Gravity.fields.y;
            local_58 = (float)uVar1;
            fStack_54 = (float)uVar4;
            uStack_50._0_4_ = 0.0;
            uStack_50._4_4_ = 0.0;
            fVar19 = (__this->fields).m_Gravity.fields.z;
            local_68._0_4_ = fVar19;
            if (Il2CppMethodInitialized_0753e72d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72d = '\x01';
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              fVar19 = (float)local_68._0_4_;
              if (Il2CppMethodInitialized_0753e729 == '\0') goto label_032a3600;
label_032a3409:
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            else {
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              if (Il2CppMethodInitialized_0753e729 != '\0') goto label_032a3409;
label_032a3600:
              local_70._0_4_ = 0.0;
              local_70._4_4_ = 0.0;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e729 = '\x01';
              uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              fVar19 = (float)local_68._0_4_;
            }
            if (uVar7 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              fVar19 = (float)local_68._0_4_;
            }
            uVar21 = 0;
            fVar20 = fVar19 * fVar19 + fStack_54 * fStack_54 + local_58 * local_58;
            if (fVar20 < 0.0) {
              fVar20 = sqrtf(fVar20);
              uVar21 = extraout_XMM0_Db_00;
              fVar19 = (float)local_68._0_4_;
              if (1e-05 < fVar20) goto label_032a3479;
label_032a344d:
              pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar19 = (pUVar15->zeroVector).fields.z;
            }
            else {
              fVar20 = SQRT(fVar20);
              if (fVar20 <= 1e-05) goto label_032a344d;
label_032a3479:
              fVar19 = fVar19 / fVar20;
              auVar10._4_4_ = fStack_54;
              auVar10._0_4_ = local_58;
              auVar10._8_4_ = (float)uStack_50;
              auVar10._12_4_ = uStack_50._4_4_;
              auVar9._4_4_ = fVar20;
              auVar9._0_4_ = fVar20;
              auVar9._8_4_ = uVar21;
              auVar9._12_4_ = uVar21;
              auVar22 = divps(auVar10,auVar9);
              local_70._0_4_ = auVar22._0_4_;
              local_70._4_4_ = auVar22._4_4_;
              pUVar15 = (UnityEngine_Vector3_StaticFields *)local_70;
            }
            uVar2 = (pUVar15->zeroVector).fields.x;
            uVar5 = (pUVar15->zeroVector).fields.y;
            fVar20 = acosf(fStack_44 * (float)uVar5 + local_48 * (float)uVar2 + local_78 * fVar19);
            fVar20 = fVar20 / 3.1415927;
            uVar3 = (__this->fields)._globalForce_k__BackingField.fields.x;
            uVar6 = (__this->fields)._globalForce_k__BackingField.fields.y;
            fVar19 = (__this->fields)._globalForce_k__BackingField.fields.z;
            (__this->fields)._globalForce_k__BackingField.fields.x = fVar20 * (float)uVar3;
            (__this->fields)._globalForce_k__BackingField.fields.y = fVar20 * (float)uVar6;
            (__this->fields)._globalForce_k__BackingField.fields.z = fVar20 * fVar19;
          }
          iVar8 = (__this->fields).m_Iterations;
          if (iVar8 < 1) {
            return;
          }
          pSVar17 = (__this->fields).m_Structures;
          iVar18 = 0;
          while (pSVar17 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
            index = 0;
            while (index < (pSVar17->fields)._size) {
              pEVar13 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar17,index,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
              EZhex1991_EZSoftBone_EZSoftBone__UpdateBones(__this,pEVar13,deltaTime / (float)iVar8,method_00);
              index = index + 1;
              pSVar17 = (__this->fields).m_Structures;
              if (pSVar17 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_032a355f;
            }
            iVar18 = iVar18 + 1;
            if ((__this->fields).m_Iterations <= iVar18) {
              return;
            }
          }
          break;
        }
        pEVar13 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar17,index_00,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        fVar19 = (__this->fields)._globalRadius_k__BackingField;
        radiusCurve = (__this->fields).m_RadiusCurve;
        if (Il2CppMethodInitialized_0753e7fa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_0753e7fa = '\x01';
        }
        pMVar16 = *(MethodInfo **)local_68._0_8_;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar11) {
          pEVar14 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(pMVar16);
          *(EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **)local_68._0_8_ = pEVar14;
          Il2CppCodeGenWriteBarrier((void **)local_68._0_8_);
        }
        if (pEVar13 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_31a4a40
                  (pEVar13,fVar19,radiusCurve,(__this->fields).m_Material,in_RCX);
        pUVar12 = (__this->fields).m_SimulateSpace;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar11) {
          pSVar17 = (__this->fields).m_Structures;
          if (pSVar17 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) break;
          pMVar16 = (MethodInfo *)(ulong)index_00;
          pEVar13 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar17,index_00,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
          if (pEVar13 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
          EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(pEVar13,pMVar16);
        }
        index_00 = index_00 + 1;
        pSVar17 = (__this->fields).m_Structures;
      } while (pSVar17 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
label_032a355f:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* bone, float deltaTime, const MethodInfo* method);
// 0x32a4d00
// eh: try 0x32a596a..0x32a5da8 -> pad 0x32a5dbe (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x32a5dda..0x32a5ddf -> pad 0x32a5e01 cleanup
// eh: try 0x32a5e04..0x32a5e0e -> pad 0x32a5e6a catch (...) [compiler noexcept guard]
// eh: try 0x32a5e28..0x32a5e2d -> pad 0x32a5e55 cleanup
// eh: try 0x32a5e58..0x32a5e62 -> pad 0x32a5e6a catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x32a5597: jmp 0x32a5857
// asm:   0x32a5da8: jmp 0x32a5dc2
// asm:   0x32a5daa: jmp 0x32a5e10
// asm:   0x32a5dac: jmp 0x32a5dc2
// asm:   0x32a5dae: jmp 0x32a5dc2
// asm:   0x32a5db0: jmp 0x32a5dc2
// asm:   0x32a5db2: jmp 0x32a5e10
// asm:   0x32a5db4: jmp 0x32a5dc2
// asm:   0x32a5db6: jmp 0x32a5dc2
// asm:   0x32a5db8: jmp 0x32a5dc2
// asm:   0x32a5dba: jmp 0x32a5e10
// asm:   0x32a5dbc: jmp 0x32a5e10
// asm:   0x32a5dbe: jmp 0x32a5dc2
// asm:   0x32a5dc0: jmp 0x32a5e10
// asm:   0x32a5dc2: mov r15, rax
// asm:   0x32a5dc5: cmp edx, 1
// asm:   0x32a5dc8: jne 0x32a5e04
// asm:   0x32a5dca: mov rdi, r15
// asm:   0x32a5dcd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x32a5dd2: mov rbx, qword ptr [rax]
// asm:   0x32a5dd5: mov qword ptr [rsp + 0x58], rbx
// asm:   0x32a5dda: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x32a5ddf: lea rax, [rip + 0x3fe7e12]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_Dispose
// asm:   0x32a5de6: mov rsi, qword ptr [rax]
// asm:   0x32a5de9: lea rdi, [rsp + 0xc0]
// asm:   0x32a5df1: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x32a5df6: test rbx, rbx
// asm:   0x32a5df9: je 0x32a5a4a
// asm:   0x32a5dff: jmp 0x32a5e4d
// asm:   0x32a5e01: mov r15, rax
// asm:   0x32a5e04: lea rdi, [rsp + 0x58]
// asm:   0x32a5e09: call 0x2ab6bc0  ; il2cpp_runtime_helper_02ab6bc0()
// asm:   0x32a5e0e: jmp 0x32a5e62
// asm:   0x32a5e10: mov r15, rax
// asm:   0x32a5e13: cmp edx, 1
// asm:   0x32a5e16: jne 0x32a5e58
// asm:   0x32a5e18: mov rdi, r15
// asm:   0x32a5e1b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x32a5e20: mov rbx, qword ptr [rax]
// asm:   0x32a5e23: mov qword ptr [rsp + 0x58], rbx
// asm:   0x32a5e28: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x32a5e2d: lea rax, [rip + 0x3fe7b0c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x32a5e34: mov rsi, qword ptr [rax]
// asm:   0x32a5e37: lea rdi, [rsp + 0xa0]
// asm:   0x32a5e3f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x32a5e44: test rbx, rbx
// asm:   0x32a5e47: je 0x32a5b47
// asm:   0x32a5e4d: mov rdi, rbx
// asm:   0x32a5e50: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x32a5e55: mov r15, rax
// asm:   0x32a5e58: lea rdi, [rsp + 0x58]
// asm:   0x32a5e5d: call 0x2ab6bf0  ; il2cpp_runtime_helper_02ab6bf0()
// asm:   0x32a5e62: mov rdi, r15
// asm:   0x32a5e65: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x32a5e6a: mov rdi, rax
// asm:   0x32a5e6d: call 0x2ab61e0  ; __clang_call_terminate()

void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *bone,
               float deltaTime,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Vector3_o *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint32_t uVar25;
  UnityEngine_LayerMask_o mask;
  EZhex1991_EZSoftBone_EZSoftBoneForceField_o *pEVar26;
  EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this_00;
  EZhex1991_EZSoftBone_CustomForce_o *pEVar27;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_List_Collider__o *__this_02;
  undefined4 uVar28;
  undefined4 uVar29;
  UnityEngine_Component_o *pUVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  UnityEngine_Transform_o *pUVar35;
  UnityEngine_Vector3_StaticFields *pUVar36;
  UnityEngine_Transform_o *pUVar37;
  UnityEngine_GameObject_o *__this_03;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar38;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar39;
  MethodInfo *method_02;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_04;
  float fVar40;
  float fVar41;
  undefined4 in_XMM0_Db;
  undefined8 uVar42;
  float fVar57;
  float fVar58;
  float extraout_XMM0_Dc;
  float fVar59;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar60;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 extraout_var [12];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  ulong uVar43;
  undefined1 extraout_var_00 [12];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  undefined1 auVar75 [16];
  UnityEngine_Vector3_o UVar76;
  UnityEngine_Vector3_o UVar77;
  UnityEngine_Vector3_Fields UVar78;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  UnityEngine_Vector3_Fields local_f0;
  float local_e4;
  undefined1 local_e0 [16];
  UnityEngine_Component_o *local_d0;
  undefined1 local_c8 [12];
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  UnityEngine_Vector3_Fields aUStack_b0 [2];
  undefined1 local_98 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_90;
  UnityEngine_Component_o *local_88;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Component_o *local_68;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  float local_48;
  undefined4 uStack_44;
  
  local_48 = deltaTime;
  uStack_44 = in_XMM0_Db;
  if (Il2CppMethodInitialized_0753e804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e804 = '\x01';
  }
  local_f0.z = 0.0;
  local_f0.x = 0.0;
  local_f0.y = 0.0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (UnityEngine_Component_o *)0x0;
  local_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_88 = (UnityEngine_Component_o *)0x0;
  if (bone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a5c0e;
  if ((__this->fields).m_StartDepth < (bone->fields).depth) {
    local_f0.x = (bone->fields).worldPosition.fields.x;
    local_f0.y = (bone->fields).worldPosition.fields.y;
    fVar61 = (bone->fields).worldPosition.fields.z;
    uStack_50 = 0;
    local_c8._0_4_ = (__this->fields)._globalForce_k__BackingField.fields.x;
    local_c8._4_4_ = (__this->fields)._globalForce_k__BackingField.fields.y;
    local_c8._8_4_ = 0.0;
    fStack_bc = 0.0;
    local_118 = (__this->fields)._globalForce_k__BackingField.fields.z;
    pEVar26 = (__this->fields).m_ForceModule;
    local_f0.z = fVar61;
    local_e4 = fVar61;
    local_58 = (undefined1  [8])local_f0._0_8_;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar31 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pEVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar31) {
      pEVar26 = (__this->fields).m_ForceModule;
      if (pEVar26 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto label_032a5c0e;
      bVar31 = UnityEngine_Behaviour__get_isActiveAndEnabled
                         ((UnityEngine_Behaviour_o *)pEVar26,(MethodInfo *)0x0);
      if (bVar31) {
        pEVar26 = (__this->fields).m_ForceModule;
        if (pEVar26 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto label_032a5c0e;
        fVar61 = (bone->fields).normalizedLength;
        method_02 = (MethodInfo *)0x0;
        pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pEVar26,(MethodInfo *)0x0);
        __this_00 = (pEVar26->fields).m_Force;
        if ((__this_00 == (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) ||
           (UVar76 = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                               (__this_00,
                                (pEVar26->fields)._time_k__BackingField -
                                fVar61 * (pEVar26->fields).m_Conductivity,method_02),
           pUVar35 == (UnityEngine_Transform_o *)0x0)) goto label_032a5c0e;
        UVar76 = UnityEngine_Transform__TransformDirection(pUVar35,UVar76,(MethodInfo *)0x0);
        fVar66 = (__this->fields).m_ForceScale;
        fVar61 = UVar76.fields.z * fVar66;
        local_c8._4_4_ = (float)local_c8._4_4_ + fVar66 * UVar76.fields.y;
        local_c8._0_4_ = (float)local_c8._0_4_ + fVar66 * UVar76.fields.x;
        fStack_bc = fStack_bc + fVar66 * extraout_XMM0_Dd;
        local_c8._8_4_ = (float)local_c8._8_4_ + fVar66 * extraout_XMM0_Dc;
        local_118 = local_118 + fVar61;
      }
    }
    pEVar27 = (__this->fields).customForce;
    if (pEVar27 != (EZhex1991_EZSoftBone_CustomForce_o *)0x0) {
      uVar42 = (*(code *)(pEVar27->fields).invoke_impl)((pEVar27->fields).method_code);
      local_c8._4_4_ = (float)local_c8._4_4_ + (float)((ulong)uVar42 >> 0x20);
      local_c8._0_4_ = (float)local_c8._0_4_ + (float)uVar42;
      fStack_bc = fStack_bc + (float)((ulong)extraout_XMM0_Qb >> 0x20);
      local_c8._8_4_ = (float)local_c8._8_4_ + (float)extraout_XMM0_Qb;
      local_118 = local_118 + fVar61;
    }
    pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
    UVar76 = UnityEngine_Transform__get_localScale(pUVar35,(MethodInfo *)0x0);
    pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
    UVar77 = UnityEngine_Transform__get_localScale(pUVar35,(MethodInfo *)0x0);
    _local_b8 = UVar77.fields._0_8_;
    aUStack_b0[0]._0_8_ = extraout_XMM0_Qb_01;
    pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
    local_128 = UVar76.fields.x;
    fStack_120 = (float)extraout_XMM0_Qb_00;
    fStack_11c = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
    local_128 = local_128 * (float)local_c8._0_4_;
    fStack_120 = fStack_120 * (float)local_c8._8_4_;
    fStack_11c = fStack_11c * fStack_bc;
    fStack_b4 = fStack_b4 * (float)local_c8._4_4_;
    local_b8 = local_b8 * (float)local_c8._0_4_;
    aUStack_b0[0].y = aUStack_b0[0].y * fStack_bc;
    aUStack_b0[0].x = aUStack_b0[0].x * (float)local_c8._8_4_;
    UVar76 = UnityEngine_Transform__get_localScale(pUVar35,(MethodInfo *)0x0);
    fVar66 = 1.0 - (bone->fields).resistance;
    fVar61 = (float)(__this->fields).m_Iterations;
    fVar40 = 1.0 - (bone->fields).damping;
    uVar3 = (bone->fields).speed.fields.x;
    uVar14 = (bone->fields).speed.fields.y;
    auVar67._0_4_ = fVar66 * local_128;
    auVar67._4_4_ = fVar66 * fStack_b4;
    auVar67._8_4_ = fVar66 * fStack_120;
    auVar67._12_4_ = fVar66 * fStack_11c;
    auVar68._4_4_ = fVar61;
    auVar68._0_4_ = fVar61;
    auVar68._8_4_ = fVar61;
    auVar68._12_4_ = fVar61;
    auVar68 = divps(auVar67,auVar68);
    fVar74 = ((local_118 * UVar76.fields.z * fVar66) / fVar61 + (bone->fields).speed.fields.z) * fVar40;
    fVar41 = fVar40 * (auVar68._0_4_ + (float)uVar3);
    fVar57 = fVar40 * (auVar68._4_4_ + (float)uVar14);
    (bone->fields).speed.fields.x = fVar41;
    (bone->fields).speed.fields.y = fVar57;
    (bone->fields).speed.fields.z = fVar74;
    fVar62 = fVar74 * fVar74 + fVar57 * fVar57 + fVar41 * fVar41;
    pfVar1 = &(__this->fields).m_SleepThreshold;
    fVar61 = local_e4;
    fVar66 = (float)local_58._0_4_;
    fVar58 = (float)local_58._4_4_;
    fVar59 = (float)uStack_50;
    fVar60 = uStack_50._4_4_;
    if (*pfVar1 <= fVar62 && fVar62 != *pfVar1) {
      fVar66 = fVar41 * local_48 + (float)local_58._0_4_;
      fVar58 = fVar57 * local_48 + (float)local_58._4_4_;
      fVar59 = fVar40 * (auVar68._8_4_ + 0.0) * local_48 + (float)uStack_50;
      fVar60 = fVar40 * (auVar68._12_4_ + 0.0) * local_48 + uStack_50._4_4_;
      fVar61 = fVar74 * local_48 + local_e4;
    }
    pEVar38 = (bone->fields).parentBone;
    if (pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a5c0e;
    local_c8._4_4_ = fVar58;
    local_c8._0_4_ = fVar66;
    fStack_bc = fVar60;
    local_c8._8_4_ = fVar59;
    pUVar35 = (pEVar38->fields).transform;
    if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
    local_b8 = (pEVar38->fields).worldPosition.fields.z;
    uVar4 = (pEVar38->fields).worldPosition.fields.x;
    uVar15 = (pEVar38->fields).worldPosition.fields.y;
    UVar76 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    pEVar38 = (bone->fields).parentBone;
    if ((pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar35 = (pEVar38->fields).transform, pUVar35 == (UnityEngine_Transform_o *)0x0)) goto label_032a5c0e;
    local_b8 = local_b8 - UVar76.fields.z;
    uVar63 = 0;
    uVar64 = 0;
    uVar65 = 0;
    UVar77 = UnityEngine_Transform__TransformPoint
                       (pUVar35,(UnityEngine_Vector3_o)(bone->fields).localPosition.fields,(MethodInfo *)0x0);
    fVar58 = (bone->fields).stiffness / (float)(__this->fields).m_Iterations;
    fVar66 = 1.0;
    if (fVar58 <= 1.0) {
      fVar66 = fVar58;
    }
    fVar66 = (float)(-(uint)(0.0 <= fVar58) & (uint)fVar66);
    local_f0.x = fVar66 * ((UVar77.fields.x + ((float)uVar4 - UVar76.fields.x)) - (float)local_c8._0_4_) +
                 (float)local_c8._0_4_;
    fStack_b4 = fVar66 * ((UVar77.fields.y + ((float)uVar15 - UVar76.fields.y)) - (float)local_c8._4_4_) +
                (float)local_c8._4_4_;
    local_f0.z = ((UVar77.fields.z + local_b8) - fVar61) * fVar66 + fVar61;
    local_b8 = local_f0.x;
    aUStack_b0[0].y = fVar66 * ((extraout_XMM0_Dd_01 + (0.0 - extraout_XMM0_Dd_00)) - fStack_bc) + fStack_bc;
    aUStack_b0[0].x =
         fVar66 * ((extraout_XMM0_Dc_01 + (0.0 - extraout_XMM0_Dc_00)) - (float)local_c8._8_4_) +
         (float)local_c8._8_4_;
    local_f0.y = fStack_b4;
    pEVar38 = (bone->fields).parentBone;
    if (pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a5c0e;
    pUVar2 = &(pEVar38->fields).worldPosition;
    fVar66 = (pUVar2->fields).x;
    fVar58 = (pEVar38->fields).worldPosition.fields.y;
    uVar28 = (pUVar2->fields).x;
    uVar29 = (pUVar2->fields).y;
    local_c8._0_4_ = local_f0.z;
    fVar61 = local_f0.z - (pEVar38->fields).worldPosition.fields.z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      fVar66 = (float)uVar28;
      fVar58 = (float)uVar29;
    }
    else {
      local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    }
    local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    auVar69._0_4_ = local_b8 - fVar66;
    auVar69._4_4_ = fStack_b4 - fVar58;
    auVar69._8_4_ = aUStack_b0[0].x - 0.0;
    auVar69._12_4_ = aUStack_b0[0].y - 0.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
    }
    auVar44._4_4_ = uVar63;
    auVar44._0_4_ = fVar61;
    auVar44._8_4_ = uVar64;
    auVar44._12_4_ = uVar65;
    auVar45._4_12_ = auVar44._4_12_;
    fVar66 = fVar61 * fVar61 + auVar69._4_4_ * auVar69._4_4_ + auVar69._0_4_ * auVar69._0_4_;
    if (fVar66 < 0.0) {
      auVar46._0_4_ = sqrtf(fVar66);
      auVar46._4_12_ = extraout_var;
      uVar42 = auVar46._0_8_;
      if (auVar46._0_4_ <= 1e-05) goto label_032a52ad;
label_032a530a:
      auVar47._0_4_ = (float)uVar42;
      fVar61 = fVar61 / auVar47._0_4_;
      uVar63 = (undefined4)((ulong)uVar42 >> 0x20);
      auVar48._8_4_ = uVar63;
      auVar48._0_8_ = uVar42;
      auVar48._12_4_ = uVar63;
      auVar47._8_8_ = auVar48._8_8_;
      auVar47._4_4_ = auVar47._0_4_;
      auVar68 = divps(auVar69,auVar47);
      local_e0._0_8_ = auVar68._0_8_;
      pUVar36 = (UnityEngine_Vector3_StaticFields *)local_e0;
    }
    else {
      auVar45._0_4_ = SQRT(fVar66);
      uVar42 = auVar45._0_8_;
      if (1e-05 < auVar45._0_4_) goto label_032a530a;
label_032a52ad:
      pUVar36 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar61 = (pUVar36->zeroVector).fields.z;
    }
    pEVar38 = (bone->fields).parentBone;
    if ((pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar35 = (pEVar38->fields).transform, pUVar35 == (UnityEngine_Transform_o *)0x0)) goto label_032a5c0e;
    uVar5 = (pUVar36->zeroVector).fields.x;
    uVar16 = (pUVar36->zeroVector).fields.y;
    UVar76 = UnityEngine_Transform__TransformVector
                       (pUVar35,(UnityEngine_Vector3_o)(bone->fields).localPosition.fields,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar25 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar25 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar25 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar66 = UVar76.fields.z * UVar76.fields.z +
             UVar76.fields.y * UVar76.fields.y + UVar76.fields.x * UVar76.fields.x;
    if (fVar66 < 0.0) {
      fVar66 = sqrtf(fVar66);
    }
    else {
      fVar66 = SQRT(fVar66);
    }
    pEVar38 = (bone->fields).parentBone;
    if (pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a5c0e;
    uVar6 = (pEVar38->fields).worldPosition.fields.x;
    uVar17 = (pEVar38->fields).worldPosition.fields.y;
    auVar75._0_4_ = (float)uVar5 * fVar66 + (float)uVar6;
    auVar75._4_4_ = (float)uVar16 * fVar66 + (float)uVar17;
    auVar75._8_4_ = fVar66 * 0.0 + 0.0;
    auVar75._12_4_ = fVar66 * 0.0 + 0.0;
    fVar61 = fVar61 * fVar66 + (pEVar38->fields).worldPosition.fields.z;
    if ((__this->fields).m_SiblingConstraints == 0) {
      iVar39 = 1;
    }
    else {
      pEVar38 = (bone->fields).leftBone;
      if (pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        iVar39 = 1;
        pEVar38 = (bone->fields).rightBone;
      }
      else {
        uVar7 = (pEVar38->fields).worldPosition.fields.x;
        uVar18 = (pEVar38->fields).worldPosition.fields.y;
        local_130 = (float)local_c8._0_4_ - (pEVar38->fields).worldPosition.fields.z;
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        }
        else {
          local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        }
        local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
        }
        auVar70._0_4_ = local_b8 - (float)uVar7;
        auVar70._4_4_ = fStack_b4 - (float)uVar18;
        auVar70._8_4_ = aUStack_b0[0].x - 0.0;
        auVar70._12_4_ = aUStack_b0[0].y - 0.0;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar66 = local_130 * local_130 + auVar70._4_4_ * auVar70._4_4_ + auVar70._0_4_ * auVar70._0_4_;
        if (fVar66 < 0.0) {
          auVar49._0_4_ = sqrtf(fVar66);
          auVar49._4_12_ = extraout_var_00;
          uVar43 = auVar49._0_8_;
          if (auVar49._0_4_ <= 1e-05) goto label_032a549a;
label_032a55b8:
          auVar50._0_4_ = (float)uVar43;
          local_130 = local_130 / auVar50._0_4_;
          uVar63 = (undefined4)(uVar43 >> 0x20);
          auVar51._8_4_ = uVar63;
          auVar51._0_8_ = uVar43;
          auVar51._12_4_ = uVar63;
          auVar50._8_8_ = auVar51._8_8_;
          auVar50._4_4_ = auVar50._0_4_;
          auVar68 = divps(auVar70,auVar50);
          local_e0._0_8_ = auVar68._0_8_;
          pUVar36 = (UnityEngine_Vector3_StaticFields *)local_e0;
        }
        else {
          uVar43 = (ulong)(uint)SQRT(fVar66);
          if (1e-05 < SQRT(fVar66)) goto label_032a55b8;
label_032a549a:
          pUVar36 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_130 = (pUVar36->zeroVector).fields.z;
        }
        pUVar35 = (bone->fields).transform;
        if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
        uVar8 = (pUVar36->zeroVector).fields.x;
        uVar19 = (pUVar36->zeroVector).fields.y;
        UVar76 = UnityEngine_Transform__TransformVector
                           (pUVar35,(UnityEngine_Vector3_o)(bone->fields).leftPosition.fields,
                            (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          aUStack_b0._8_8_ = UVar76.fields._0_8_;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          UVar76.fields.z = UVar76.fields.z;
          UVar76.fields.x = aUStack_b0[0].z;
          UVar76.fields.y = aUStack_b0[1].x;
          Il2CppMethodInitialized_0753e729 = '\x01';
          uVar25 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar25 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar25 == 0) {
          aUStack_b0._8_8_ = UVar76.fields._0_8_;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          UVar76.fields.z = UVar76.fields.z;
          UVar76.fields.x = aUStack_b0[0].z;
          UVar76.fields.y = aUStack_b0[1].x;
        }
        fVar66 = UVar76.fields.z * UVar76.fields.z +
                 UVar76.fields.y * UVar76.fields.y + UVar76.fields.x * UVar76.fields.x;
        if (fVar66 < 0.0) {
          fVar66 = sqrtf(fVar66);
        }
        else {
          fVar66 = SQRT(fVar66);
        }
        pEVar38 = (bone->fields).leftBone;
        if (pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a5c0e;
        uVar9 = (pEVar38->fields).worldPosition.fields.x;
        uVar20 = (pEVar38->fields).worldPosition.fields.y;
        auVar75._0_4_ = auVar75._0_4_ + (float)uVar8 * fVar66 + (float)uVar9;
        auVar75._4_4_ = auVar75._4_4_ + (float)uVar19 * fVar66 + (float)uVar20;
        auVar75._8_4_ = auVar75._8_4_ + fVar66 * 0.0 + 0.0;
        auVar75._12_4_ = auVar75._12_4_ + fVar66 * 0.0 + 0.0;
        fVar61 = fVar61 + local_130 * fVar66 + (pEVar38->fields).worldPosition.fields.z;
        iVar39 = 2;
        pEVar38 = (bone->fields).rightBone;
      }
      if (pEVar38 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        uVar10 = (pEVar38->fields).worldPosition.fields.x;
        uVar21 = (pEVar38->fields).worldPosition.fields.y;
        local_130 = (float)local_c8._0_4_ - (pEVar38->fields).worldPosition.fields.z;
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        }
        else {
          local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        }
        local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
        }
        auVar71._0_4_ = local_b8 - (float)uVar10;
        auVar71._4_4_ = fStack_b4 - (float)uVar21;
        auVar71._8_4_ = aUStack_b0[0].x - 0.0;
        auVar71._12_4_ = aUStack_b0[0].y - 0.0;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar66 = local_130 * local_130 + auVar71._4_4_ * auVar71._4_4_ + auVar71._0_4_ * auVar71._0_4_;
        if (fVar66 < 0.0) {
          auVar52._0_4_ = sqrtf(fVar66);
          auVar52._4_12_ = extraout_var_01;
          uVar43 = auVar52._0_8_;
          if (auVar52._0_4_ <= 1e-05) goto label_032a5745;
label_032a577b:
          auVar53._0_4_ = (float)uVar43;
          local_130 = local_130 / auVar53._0_4_;
          uVar63 = (undefined4)(uVar43 >> 0x20);
          auVar54._8_4_ = uVar63;
          auVar54._0_8_ = uVar43;
          auVar54._12_4_ = uVar63;
          auVar53._8_8_ = auVar54._8_8_;
          auVar53._4_4_ = auVar53._0_4_;
          auVar68 = divps(auVar71,auVar53);
          local_e0._0_8_ = auVar68._0_8_;
          pUVar36 = (UnityEngine_Vector3_StaticFields *)local_e0;
        }
        else {
          uVar43 = (ulong)(uint)SQRT(fVar66);
          if (1e-05 < SQRT(fVar66)) goto label_032a577b;
label_032a5745:
          pUVar36 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_130 = (pUVar36->zeroVector).fields.z;
        }
        pUVar35 = (bone->fields).transform;
        if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
        uVar11 = (pUVar36->zeroVector).fields.x;
        uVar22 = (pUVar36->zeroVector).fields.y;
        UVar77 = UnityEngine_Transform__TransformVector
                           (pUVar35,(UnityEngine_Vector3_o)(bone->fields).rightPosition.fields,
                            (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          aUStack_b0._8_8_ = UVar77.fields._0_8_;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          UVar77.fields.z = UVar77.fields.z;
          UVar77.fields.x = aUStack_b0[0].z;
          UVar77.fields.y = aUStack_b0[1].x;
          Il2CppMethodInitialized_0753e729 = '\x01';
          uVar25 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar25 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar25 == 0) {
          aUStack_b0._8_8_ = UVar77.fields._0_8_;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          UVar77.fields.z = UVar77.fields.z;
          UVar77.fields.x = aUStack_b0[0].z;
          UVar77.fields.y = aUStack_b0[1].x;
        }
        fVar66 = UVar77.fields.z * UVar77.fields.z +
                 UVar77.fields.y * UVar77.fields.y + UVar77.fields.x * UVar77.fields.x;
        if (fVar66 < 0.0) {
          fVar66 = sqrtf(fVar66);
        }
        else {
          fVar66 = SQRT(fVar66);
        }
        local_118 = auVar75._0_4_;
        fStack_114 = auVar75._4_4_;
        fStack_110 = auVar75._8_4_;
        fStack_10c = auVar75._12_4_;
        pEVar38 = (bone->fields).rightBone;
        if (pEVar38 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_032a5c0e;
        uVar12 = (pEVar38->fields).worldPosition.fields.x;
        uVar23 = (pEVar38->fields).worldPosition.fields.y;
        auVar75._0_4_ = local_118 + (float)uVar11 * fVar66 + (float)uVar12;
        auVar75._4_4_ = fStack_114 + (float)uVar22 * fVar66 + (float)uVar23;
        auVar75._8_4_ = fStack_110 + fVar66 * 0.0 + 0.0;
        auVar75._12_4_ = fStack_10c + fVar66 * 0.0 + 0.0;
        fVar61 = fVar61 + local_130 * fVar66 + (pEVar38->fields).worldPosition.fields.z;
        iVar39 = iVar39 + 1;
      }
    }
    auVar55._0_4_ = (float)iVar39;
    fVar58 = (bone->fields).slackness / (float)(__this->fields).m_Iterations;
    fVar66 = 1.0;
    if (fVar58 <= 1.0) {
      fVar66 = fVar58;
    }
    fVar66 = (float)(-(uint)(0.0 <= fVar58) & (uint)fVar66);
    auVar55._4_4_ = auVar55._0_4_;
    auVar55._8_4_ = auVar55._0_4_;
    auVar55._12_4_ = auVar55._0_4_;
    auVar68 = divps(auVar75,auVar55);
    local_f0.x = fVar66 * (local_b8 - auVar68._0_4_) + auVar68._0_4_;
    local_f0.y = fVar66 * (fStack_b4 - auVar68._4_4_) + auVar68._4_4_;
    fVar58 = fVar66 * (aUStack_b0[0].x - auVar68._8_4_) + auVar68._8_4_;
    fVar59 = fVar66 * (aUStack_b0[0].y - auVar68._12_4_) + auVar68._12_4_;
    local_f0.z = ((float)local_c8._0_4_ - fVar61 / auVar55._0_4_) * fVar66 + fVar61 / auVar55._0_4_;
    fVar61 = local_f0.x;
    fVar66 = local_f0.y;
    if (0.0 < (bone->fields).radius) {
      if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase)
        ;
      }
      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->static_fields->EnabledColliders;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_032a5c0e;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_e0,__this_01,
                 (MethodInfo_4FB3DA0 *)
                 MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_GetEnumerator);
      local_68 = local_d0;
      local_78 = (undefined1  [8])local_e0._0_8_;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_e0._8_8_;
      local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_e0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
      while (bVar31 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                                 (MethodInfo_4C456D0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_MoveNext
                                ), pUVar30 = local_68, bVar31) {
        if (local_68 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar35 = (bone->fields).transform;
        pUVar37 = UnityEngine_Component__get_transform(local_68,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar31 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar35,(UnityEngine_Object_o *)pUVar37,(MethodInfo *)0x0)
        ;
        if (bVar31) {
          mask.fields.m_Mask = (UnityEngine_LayerMask_Fields)(__this->fields).m_CollisionLayers.fields.m_Mask;
          __this_03 = UnityEngine_Component__get_gameObject(pUVar30,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar32 = UnityEngine_GameObject__get_layer(__this_03,(MethodInfo *)0x0);
          uVar33 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          uVar34 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if ((uVar33 | 1 << (uVar32 & 0x1f)) == uVar34) {
            (*((Il2CppClass *)pUVar30->klass)->vtable[4].methodPtr)(pUVar30,&local_f0,((Il2CppClass *)pUVar30->klass)->vtable[4].method);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_Dispose);
      __this_02 = (__this->fields).m_ExtraColliders;
      if (__this_02 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_032a5c0e;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_e0,
                 (System_Collections_Generic_List_object__o *)__this_02,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
      local_88 = local_d0;
      local_98 = (undefined1  [8])local_e0._0_8_;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)local_e0._8_8_;
      local_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_e0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_98;
      while (bVar31 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
            pUVar30 = local_88, bVar31) {
        if (local_88 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar35 = (bone->fields).transform;
        pUVar37 = UnityEngine_Component__get_transform(local_88,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar31 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar35,(UnityEngine_Object_o *)pUVar37,(MethodInfo *)0x0)
        ;
        if ((bVar31) &&
           (bVar31 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)pUVar30,(MethodInfo *)0x0),
           bVar31)) {
          EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                    ((UnityEngine_Vector3_o *)&local_f0,(UnityEngine_Collider_o *)pUVar30,
                     (bone->fields).radius,method_00);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose)
      ;
      fVar58 = 0.0;
      fVar59 = 0.0;
      fVar61 = local_f0.x;
      fVar66 = local_f0.y;
    }
    auVar73._4_4_ = uStack_44;
    auVar73._0_4_ = local_48;
    fVar60 = (bone->fields).speed.fields.z;
    uVar13 = (bone->fields).speed.fields.x;
    uVar24 = (bone->fields).speed.fields.y;
    auVar56._0_4_ = fVar61 - (float)local_58._0_4_;
    auVar56._4_4_ = fVar66 - (float)local_58._4_4_;
    auVar56._8_4_ = fVar58 - (float)uStack_50;
    auVar56._12_4_ = fVar59 - uStack_50._4_4_;
    auVar73._8_4_ = uStack_44;
    auVar73._12_4_ = uStack_44;
    auVar72._8_8_ = auVar73._8_8_;
    auVar72._4_4_ = local_48;
    auVar72._0_4_ = local_48;
    auVar68 = divps(auVar56,auVar72);
    (bone->fields).speed.fields.x = (auVar68._0_4_ + (float)uVar13) * 0.5;
    (bone->fields).speed.fields.y = (auVar68._4_4_ + (float)uVar24) * 0.5;
    (bone->fields).speed.fields.z = ((local_f0.z - local_e4) / local_48 + fVar60) * 0.5;
    (bone->fields).worldPosition.fields.z = local_f0.z;
    (bone->fields).worldPosition.fields.x = local_f0.x;
    (bone->fields).worldPosition.fields.y = local_f0.y;
  }
  else {
    pUVar35 = (bone->fields).transform;
    if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_032a5c0e;
    UVar78 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    (bone->fields).worldPosition.fields = UVar78;
  }
  __this_04 = (bone->fields).childBones;
  if (__this_04 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    iVar39 = 0;
    do {
      if ((__this_04->fields)._size <= iVar39) {
        return;
      }
      pEVar38 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_04,iVar39,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      EZhex1991_EZSoftBone_EZSoftBone__UpdateBones(__this,pEVar38,local_48,method_01);
      iVar39 = iVar39 + 1;
      __this_04 = (bone->fields).childBones;
    } while (__this_04 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
label_032a5c0e:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a3640

void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *in_RCX;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (Il2CppMethodInitialized_0753e805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_0753e805 = '\x01';
  }
  __this_01 = (__this->fields).m_Structures;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
                (__this_00,(__this->fields).m_SiblingRotationConstraints,(__this->fields).m_StartDepth,in_RCX)
      ;
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___ctor (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x32a6a20

void EZhex1991_EZSoftBone_EZSoftBone___ctor(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_List_Collider__o *__this_00;
  UnityEngine_AnimationCurve_o *pUVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (Il2CppMethodInitialized_0753e806 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
    Il2CppMethodInitialized_0753e806 = '\x01';
  }
  (__this->fields).m_SiblingRotationConstraints = true;
  UVar1 = UnityEngine_LayerMask__op_Implicit_691af40(1,(MethodInfo *)0x0);
  (__this->fields).m_CollisionLayers.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields).m_ExtraColliders = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ExtraColliders);
  pUVar2 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_RadiusCurve = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_RadiusCurve);
  (__this->fields).m_ConstantDeltaTime = 0.03;
  (__this->fields).m_Iterations = 1;
  (__this->fields).m_SleepThreshold = 0.005;
  (__this->fields).m_ForceScale = 1.0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
  (__this->fields).m_Structures = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Structures);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___cctor (const MethodInfo* method);
// 0x32a6b50

void EZhex1991_EZSoftBone_EZSoftBone___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753e807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone);
    Il2CppMethodInitialized_0753e807 = '\x01';
  }
  TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->static_fields->DeltaTime_Min = 1e-06;
  return;
}


