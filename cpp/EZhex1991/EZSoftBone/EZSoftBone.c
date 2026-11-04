// Type: EZhex1991.EZSoftBone.EZSoftBone
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBone.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBone.Bone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, UnityEngine_Transform_o* systemSpace, UnityEngine_Transform_o* transform, System_Collections_Generic_IEnumerable_Transform__o* endBones, int32_t startDepth, int32_t depth, float nodeLength, float boneLength, const MethodInfo* method);
// 0x1805836e0

void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,UnityEngine_Transform_o *systemSpace,
               UnityEngine_Transform_o *transform,
               System_Collections_Generic_IEnumerable_Transform__o *endBones,int32_t startDepth,int32_t depth,
               float nodeLength,float boneLength,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  float fVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  int32_t iVar11;
  int32_t iVar12;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  longlong lVar15;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_03;
  float fVar16;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Quaternion_o local_58 [3];
  
  if (Il2CppMethodInitialized_18433df38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df38 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
  (__this->fields).childBones = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).childBones,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).transform = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields).transform,transform);
  (__this->fields).systemSpace = systemSpace;
  Il2CppCodeGenWriteBarrier(&(__this->fields).systemSpace,systemSpace);
  if (transform == (UnityEngine_Transform_o *)0x0) {
label_180583af5:
    ThrowNullReferenceException();
  }
  pUVar13 = UnityEngine_Transform__get_position
                      ((UnityEngine_Vector3_o *)&local_78,transform,(MethodInfo *)0x0);
  fVar10 = (pUVar13->fields).z;
  fVar16 = (pUVar13->fields).y;
  (__this->fields).worldPosition.fields.x = (pUVar13->fields).x;
  (__this->fields).worldPosition.fields.y = fVar16;
  (__this->fields).worldPosition.fields.z = fVar10;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)systemSpace,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    uVar2 = (__this->fields).worldPosition.fields.x;
    uVar5 = (__this->fields).worldPosition.fields.y;
    fVar10 = (__this->fields).worldPosition.fields.z;
  }
  else {
    if (systemSpace == (UnityEngine_Transform_o *)0x0) goto label_180583af5;
    local_88.x = (__this->fields).worldPosition.fields.x;
    local_88.y = (__this->fields).worldPosition.fields.y;
    local_88.z = (__this->fields).worldPosition.fields.z;
    pUVar13 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Vector3_o *)&local_78,systemSpace,(UnityEngine_Vector3_o *)&local_88,
                         (MethodInfo *)0x0);
    uVar3 = (pUVar13->fields).x;
    uVar6 = (pUVar13->fields).y;
    fVar10 = (pUVar13->fields).z;
    uVar2 = uVar3;
    uVar5 = uVar6;
  }
  (__this->fields).systemPosition.fields.x = (float)uVar2;
  (__this->fields).systemPosition.fields.y = (float)uVar5;
  (__this->fields).systemPosition.fields.z = fVar10;
  pUVar13 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Vector3_o *)&local_78,transform,(MethodInfo *)0x0);
  fVar10 = (pUVar13->fields).z;
  fVar16 = (pUVar13->fields).y;
  (__this->fields).localPosition.fields.x = (pUVar13->fields).x;
  (__this->fields).localPosition.fields.y = fVar16;
  (__this->fields).localPosition.fields.z = fVar10;
  pUVar14 = UnityEngine_Transform__get_localRotation(local_58,transform,(MethodInfo *)0x0);
  fVar10 = (pUVar14->fields).x;
  fVar16 = (pUVar14->fields).y;
  fVar7 = (pUVar14->fields).z;
  fVar8 = (pUVar14->fields).w;
  (__this->fields).depth = depth;
  (__this->fields).localRotation.fields.x = fVar10;
  (__this->fields).localRotation.fields.y = fVar16;
  (__this->fields).localRotation.fields.z = fVar7;
  (__this->fields).localRotation.fields.w = fVar8;
  if (startDepth < depth) {
    (__this->fields).boneLength = nodeLength + boneLength;
  }
  fVar10 = (__this->fields).treeLength;
  pfVar1 = &(__this->fields).boneLength;
  lVar15 = 0xa0;
  if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
    lVar15 = 0xa4;
  }
  (__this->fields).treeLength = *(float *)((longlong)&__this->klass + lVar15);
  iVar11 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
  if ((0 < iVar11) &&
     (bVar9 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)endBones,
                         (Il2CppObject *)transform,
                         (MethodInfo_6BA240 *)MethodInfo_System_Linq_Enumerable_Contains_Transform), !bVar9))
  {
    for (iVar11 = 0; iVar12 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0),
        iVar11 < iVar12; iVar11 = iVar11 + 1) {
      __this_01 = UnityEngine_Transform__GetChild(transform,iVar11,(MethodInfo *)0x0);
      if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 == (UnityEngine_GameObject_o *)0x0)) goto label_180583af5;
      bVar9 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (bVar9) {
        pUVar13 = UnityEngine_Transform__get_position(&local_68,__this_01,(MethodInfo *)0x0);
        uVar4._0_4_ = (pUVar13->fields).x;
        uVar4._4_4_ = (pUVar13->fields).y;
        fVar10 = (pUVar13->fields).z;
        pUVar13 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)local_58,transform,(MethodInfo *)0x0);
        local_88.x = (pUVar13->fields).x;
        local_88.y = (pUVar13->fields).y;
        local_88.z = (pUVar13->fields).z;
        local_78._0_8_ = uVar4;
        local_78.z = fVar10;
        fVar16 = (float)il2cpp_runtime_helper_180562c80(&local_78,&local_88,0);
        fVar10 = (__this->fields).boneLength;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
        EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                  (__this_03,systemSpace,__this_01,endBones,startDepth,depth + 1,fVar16,fVar10,
                   (MethodInfo *)0x0);
        if (__this_03 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180583af5;
        (__this_03->fields).parentBone = __this;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).parentBone,__this);
        if ((__this->fields).childBones == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0)
        goto label_180583af5;
        il2cpp_runtime_helper_180012890();
        fVar10 = (__this->fields).treeLength;
        pfVar1 = &(__this_03->fields).treeLength;
        if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
          __this_03 = __this;
        }
        (__this->fields).treeLength = (__this_03->fields).treeLength;
      }
    }
  }
  fVar10 = (__this->fields).treeLength;
  fVar16 = 0.0;
  if (fVar10 != 0.0) {
    fVar16 = (__this->fields).boneLength / fVar10;
  }
  (__this->fields).normalizedLength = fVar16;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x180582cd0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_582ce0
            (__this,(__this->fields).treeLength,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float treeLength, const MethodInfo* method);
// 0x180582ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180582d8c: jmp 0x180582d50

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_582ce0
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float treeLength,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  float fVar2;
  
  if (Il2CppMethodInitialized_18433df39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df39 = '\x01';
  }
  fVar2 = 0.0;
  (__this->fields).treeLength = treeLength;
  if (treeLength != 0.0) {
    fVar2 = (__this->fields).boneLength / treeLength;
  }
  (__this->fields).normalizedLength = fVar2;
  index = 0;
  pSVar1 = (__this->fields).childBones;
  while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    pSVar1 = (__this->fields).childBones;
    if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
    EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_582ce0(__this_00,treeLength,(MethodInfo *)0x0);
    index = index + 1;
    pSVar1 = (__this->fields).childBones;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetLeftSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* left, const MethodInfo* method);
// 0x180582a40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180582aac: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x180582ab1: add rsp, 0x40
// asm:   0x180582ab5: pop rdi

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *left,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if ((left != __this) && (left != (__this->fields).rightBone)) {
    (__this->fields).leftBone = left;
    Il2CppCodeGenWriteBarrier(&(__this->fields).leftBone,left);
    if ((left == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    local_28.x = (left->fields).worldPosition.fields.x;
    local_28.y = (left->fields).worldPosition.fields.y;
    local_28.z = (left->fields).worldPosition.fields.z;
    pUVar3 = UnityEngine_Transform__InverseTransformPoint
                       (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__this->fields).leftPosition.fields.x = (pUVar3->fields).x;
    (__this->fields).leftPosition.fields.y = fVar2;
    (__this->fields).leftPosition.fields.z = fVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRightSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* right, const MethodInfo* method);
// 0x180582c50
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180582cbc: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x180582cc1: add rsp, 0x40
// asm:   0x180582cc5: pop rdi

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *right,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if ((right != __this) && (right != (__this->fields).leftBone)) {
    (__this->fields).rightBone = right;
    Il2CppCodeGenWriteBarrier(&(__this->fields).rightBone,right);
    if ((right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    local_28.x = (right->fields).worldPosition.fields.x;
    local_28.y = (right->fields).worldPosition.fields.y;
    local_28.z = (right->fields).worldPosition.fields.z;
    pUVar3 = UnityEngine_Transform__InverseTransformPoint
                       (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__this->fields).rightPosition.fields.x = (pUVar3->fields).x;
    (__this->fields).rightPosition.fields.y = fVar2;
    (__this->fields).rightPosition.fields.z = fVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, const MethodInfo* method);
// 0x180582860
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1805828da: nop word ptr [rax + rax]
// asm:   0x18058291f: jmp 0x1805828e0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  float fVar2;
  
  if (Il2CppMethodInitialized_18433df3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df3a = '\x01';
  }
  if (radiusCurve != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar2 = UnityEngine_AnimationCurve__Evaluate
                      (radiusCurve,(__this->fields).normalizedLength,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).childBones;
    index = 0;
    (__this->fields).radius = fVar2 * baseRadius;
    while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      pSVar1 = (__this->fields).childBones;
      if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate(__this_00,baseRadius,radiusCurve,(MethodInfo *)0x0);
      index = index + 1;
      pSVar1 = (__this->fields).childBones;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* material, const MethodInfo* method);
// 0x180582690
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180582826: jmp 0x1805827e2

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_582690
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *material,
               MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_18433df3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df3b = '\x01';
  }
  if (radiusCurve != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar3 = UnityEngine_AnimationCurve__Evaluate
                      (radiusCurve,(__this->fields).normalizedLength,(MethodInfo *)0x0);
    (__this->fields).radius = fVar3 * baseRadius;
    if ((material != (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)0x0) &&
       (pUVar1 = (material->fields).m_DampingCurve, pUVar1 != (UnityEngine_AnimationCurve_o *)0x0)) {
      fVar3 = (material->fields).m_Damping;
      fVar4 = UnityEngine_AnimationCurve__Evaluate(pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0)
      ;
      (__this->fields).damping = fVar4 * fVar3;
      pUVar1 = (material->fields).m_StiffnessCurve;
      if (pUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
        fVar3 = (material->fields).m_Stiffness;
        fVar4 = UnityEngine_AnimationCurve__Evaluate
                          (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
        (__this->fields).stiffness = fVar4 * fVar3;
        pUVar1 = (material->fields).m_ResistanceCurve;
        if (pUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
          fVar3 = (material->fields).m_Resistance;
          fVar4 = UnityEngine_AnimationCurve__Evaluate
                            (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
          (__this->fields).resistance = fVar4 * fVar3;
          pUVar1 = (material->fields).m_SlacknessCurve;
          if (pUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
            fVar3 = (material->fields).m_Slackness;
            fVar4 = UnityEngine_AnimationCurve__Evaluate
                              (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).childBones;
            index = 0;
            (__this->fields).slackness = fVar4 * fVar3;
            while (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
              if ((pSVar2->fields)._size <= index) {
                return;
              }
              pSVar2 = (__this->fields).childBones;
              if ((pSVar2 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
                 (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                              System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                         (MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
                 __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
              EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_582690
                        (__this_00,baseRadius,radiusCurve,material,(MethodInfo *)0x0);
              index = index + 1;
              pSVar2 = (__this->fields).childBones;
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
// 0x180582940
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1805829dc: nop dword ptr [rax]
// asm:   0x180582a1b: jmp 0x1805829e0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,int32_t startDepth,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18433df3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df3c = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_180582a2d;
    local_18.x = (__this->fields).localPosition.fields.x;
    local_18.y = (__this->fields).localPosition.fields.y;
    local_18.z = (__this->fields).localPosition.fields.z;
    UnityEngine_Transform__set_localPosition(pUVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_180582a2d;
    local_18.x = (__this->fields).localRotation.fields.x;
    local_18.y = (__this->fields).localRotation.fields.y;
    local_18.z = (__this->fields).localRotation.fields.z;
    local_18.w = (__this->fields).localRotation.fields.w;
    UnityEngine_Transform__set_localRotation(pUVar1,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
  }
  index = 0;
  pSVar2 = (__this->fields).childBones;
  while (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((pSVar2->fields)._size <= index) {
      return;
    }
    pSVar2 = (__this->fields).childBones;
    if ((pSVar2 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
    EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,(MethodInfo *)0x0);
    index = index + 1;
    pSVar2 = (__this->fields).childBones;
  }
label_180582a2d:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateTransform
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, bool siblingRotationConstraints, int32_t startDepth, const MethodInfo* method);
// 0x180582ed0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058361a: nop word ptr [rax + rax]
// asm:   0x180583668: jmp 0x180583620

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,bool siblingRotationConstraints,
               int32_t startDepth,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar19;
  void *pvVar16;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar17;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar18;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar31;
  UnityEngine_Transform_o *__this_00;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  bool bVar36;
  Il2CppObject *pIVar37;
  UnityEngine_Quaternion_o *pUVar38;
  UnityEngine_Vector3_o *pUVar39;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar40;
  UnityEngine_Transform_o *pUVar41;
  float fVar42;
  int index;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_Fields local_a8;
  UnityEngine_Quaternion_o local_98 [8];
  
  if (Il2CppMethodInitialized_18433df3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df3d = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pSVar31 = (__this->fields).childBones;
    if (pSVar31 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_1805836cd;
    if ((pSVar31->fields)._size == 1) {
      pIVar37 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar31,0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      pUVar41 = (__this->fields).transform;
      if ((pUVar41 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar38 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)&local_a8,pUVar41,(MethodInfo *)0x0),
         pIVar37 == (Il2CppObject *)0x0)) goto label_1805836cd;
      __this_00 = (__this->fields).transform;
      uVar5 = (__this->fields).worldPosition.fields.x;
      uVar19 = (__this->fields).worldPosition.fields.y;
      uVar46._0_4_ = SUB84(pIVar37[7].monitor,0) - (float)uVar5;
      uVar46._4_4_ = (float)((ulonglong)pIVar37[7].monitor >> 0x20) - (float)uVar19;
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
      fVar12 = (pUVar38->fields).x;
      fVar26 = (pUVar38->fields).y;
      fVar42 = (pUVar38->fields).z;
      fVar1 = (pUVar38->fields).w;
      pvVar16 = pIVar37[1].monitor;
      fVar30 = *(float *)&pIVar37[2].klass;
      local_b8._0_8_ = uVar46;
      local_b8.z = *(float *)&pIVar37[8].klass - (__this->fields).worldPosition.fields.z;
      pUVar39 = UnityEngine_Transform__InverseTransformVector
                          ((UnityEngine_Vector3_o *)&local_a8,__this_00,(UnityEngine_Vector3_o *)&local_b8,
                           (MethodInfo *)0x0);
      local_b8.x = (pUVar39->fields).x;
      local_b8.y = (pUVar39->fields).y;
      local_b8.z = (pUVar39->fields).z;
      local_a8.z = fVar30;
      local_a8._0_8_ = pvVar16;
      pUVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                          (local_98,(UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                           (MethodInfo *)0x0);
      fVar30 = (pUVar38->fields).x;
      fVar2 = (pUVar38->fields).w;
      fVar3 = (pUVar38->fields).z;
      fVar4 = (pUVar38->fields).y;
      local_a8.y = (fVar2 * fVar26 + fVar4 * fVar1 + fVar30 * fVar42) - fVar3 * fVar12;
      local_a8.x = (fVar30 * fVar1 + fVar2 * fVar12 + fVar3 * fVar26) - fVar4 * fVar42;
      local_a8.w = ((fVar2 * fVar1 - fVar30 * fVar12) - fVar4 * fVar26) - fVar3 * fVar42;
      local_a8.z = (fVar2 * fVar42 + fVar3 * fVar1 + fVar4 * fVar12) - fVar30 * fVar26;
      UnityEngine_Transform__set_rotation(pUVar41,(UnityEngine_Quaternion_o *)&local_a8,(MethodInfo *)0x0);
      if (!siblingRotationConstraints) goto label_180583568;
      if ((__this->fields).leftBone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
label_18058339c:
        if ((__this->fields).rightBone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180583568;
        pEVar40 = (__this->fields).rightBone;
        pUVar41 = (__this->fields).transform;
        uVar10 = (__this->fields).worldPosition.fields.x;
        uVar24 = (__this->fields).worldPosition.fields.y;
        uVar11 = (pEVar40->fields).worldPosition.fields.x;
        uVar25 = (pEVar40->fields).worldPosition.fields.y;
        uVar49._0_4_ = (float)uVar11 - (float)uVar10;
        uVar49._4_4_ = (float)uVar25 - (float)uVar24;
        if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
        fVar12 = (__this->fields).rightPosition.fields.x;
        fVar26 = (__this->fields).rightPosition.fields.y;
        fVar42 = (__this->fields).rightPosition.fields.z;
label_1805833fe:
        local_a8.z = (pEVar40->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
        local_a8._0_8_ = uVar49;
        pUVar39 = UnityEngine_Transform__InverseTransformVector
                            ((UnityEngine_Vector3_o *)&local_b8,pUVar41,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        local_a8.x = (pUVar39->fields).x;
        local_a8.y = (pUVar39->fields).y;
        local_a8.z = (pUVar39->fields).z;
        local_b8.y = fVar26;
        local_b8.x = fVar12;
        local_b8.z = fVar42;
        pUVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                            (local_98,(UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        pUVar41 = (__this->fields).transform;
        if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
        fVar12 = (pUVar38->fields).x;
        fVar26 = (pUVar38->fields).y;
        fVar42 = (pUVar38->fields).z;
        fVar1 = (pUVar38->fields).w;
        pUVar38 = UnityEngine_Transform__get_rotation(local_98,pUVar41,(MethodInfo *)0x0);
        fVar30 = (pUVar38->fields).x;
        fVar2 = (pUVar38->fields).w;
        fVar3 = (pUVar38->fields).y;
        fVar4 = (pUVar38->fields).z;
        fVar50 = fVar12 * fVar3;
        fVar43 = fVar42 * fVar2;
        fVar45 = fVar26 * fVar30;
        local_a8.y = (fVar1 * fVar3 + fVar26 * fVar2 + fVar12 * fVar4) - fVar42 * fVar30;
        local_a8.x = (fVar12 * fVar2 + fVar1 * fVar30 + fVar42 * fVar3) - fVar26 * fVar4;
        fVar44 = fVar1 * fVar4;
        local_a8.w = ((fVar1 * fVar2 - fVar12 * fVar30) - fVar26 * fVar3) - fVar42 * fVar4;
      }
      else {
        if ((__this->fields).rightBone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
          if ((__this->fields).leftBone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_18058339c;
          pEVar40 = (__this->fields).leftBone;
          if (pEVar40 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_1805836cd;
          pUVar41 = (__this->fields).transform;
          uVar13 = (__this->fields).worldPosition.fields.x;
          uVar27 = (__this->fields).worldPosition.fields.y;
          uVar14 = (pEVar40->fields).worldPosition.fields.x;
          uVar28 = (pEVar40->fields).worldPosition.fields.y;
          uVar49._0_4_ = (float)uVar14 - (float)uVar13;
          uVar49._4_4_ = (float)uVar28 - (float)uVar27;
          if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
          uVar15 = (__this->fields).leftPosition.fields.x;
          uVar29 = (__this->fields).leftPosition.fields.y;
          fVar42 = (__this->fields).leftPosition.fields.z;
          fVar12 = (float)uVar15;
          fVar26 = (float)uVar29;
          goto label_1805833fe;
        }
        pEVar40 = (__this->fields).leftBone;
        if (pEVar40 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_1805836cd;
        pUVar41 = (__this->fields).transform;
        uVar6 = (__this->fields).worldPosition.fields.x;
        uVar20 = (__this->fields).worldPosition.fields.y;
        uVar7 = (pEVar40->fields).worldPosition.fields.x;
        uVar21 = (pEVar40->fields).worldPosition.fields.y;
        uVar47._0_4_ = (float)uVar7 - (float)uVar6;
        uVar47._4_4_ = (float)uVar21 - (float)uVar20;
        if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
        local_a8.z = (pEVar40->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
        uVar17._0_4_ = (__this->fields).leftPosition.fields.x;
        uVar17._4_4_ = (__this->fields).leftPosition.fields.y;
        fVar12 = (__this->fields).leftPosition.fields.z;
        local_a8._0_8_ = uVar47;
        pUVar39 = UnityEngine_Transform__InverseTransformVector
                            ((UnityEngine_Vector3_o *)&local_b8,pUVar41,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        local_a8.x = (pUVar39->fields).x;
        local_a8.y = (pUVar39->fields).y;
        local_a8.z = (pUVar39->fields).z;
        local_b8.z = fVar12;
        local_b8._0_8_ = uVar17;
        pUVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                            (local_98,(UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        pEVar40 = (__this->fields).rightBone;
        if (pEVar40 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_1805836cd;
        pUVar41 = (__this->fields).transform;
        uVar8 = (__this->fields).worldPosition.fields.x;
        uVar22 = (__this->fields).worldPosition.fields.y;
        uVar9 = (pEVar40->fields).worldPosition.fields.x;
        uVar23 = (pEVar40->fields).worldPosition.fields.y;
        uVar48._0_4_ = (float)uVar9 - (float)uVar8;
        uVar48._4_4_ = (float)uVar23 - (float)uVar22;
        if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
        uVar32._0_4_ = (pUVar38->fields).x;
        uVar32._4_4_ = (pUVar38->fields).y;
        uVar33._0_4_ = (pUVar38->fields).z;
        uVar33._4_4_ = (pUVar38->fields).w;
        fVar12 = (__this->fields).rightPosition.fields.z;
        uVar18._0_4_ = (__this->fields).rightPosition.fields.x;
        uVar18._4_4_ = (__this->fields).rightPosition.fields.y;
        local_a8._0_8_ = uVar48;
        local_a8.z = (pEVar40->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
        pUVar39 = UnityEngine_Transform__InverseTransformVector
                            ((UnityEngine_Vector3_o *)&local_b8,pUVar41,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        local_a8.x = (pUVar39->fields).x;
        local_a8.y = (pUVar39->fields).y;
        local_a8.z = (pUVar39->fields).z;
        local_b8.z = fVar12;
        local_b8._0_8_ = uVar18;
        pUVar38 = UnityEngine_Quaternion__Internal_FromToRotation
                            (local_98,(UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        pUVar41 = (__this->fields).transform;
        if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
        uVar34._0_4_ = (pUVar38->fields).x;
        uVar34._4_4_ = (pUVar38->fields).y;
        uVar35._0_4_ = (pUVar38->fields).z;
        uVar35._4_4_ = (pUVar38->fields).w;
        pUVar38 = UnityEngine_Transform__get_rotation(local_98,pUVar41,(MethodInfo *)0x0);
        fVar12 = (pUVar38->fields).x;
        fVar26 = (pUVar38->fields).y;
        fVar42 = (pUVar38->fields).z;
        fVar1 = (pUVar38->fields).w;
        local_b8._0_8_ = uVar32;
        local_b8._8_8_ = uVar33;
        local_a8._0_8_ = uVar34;
        local_a8._8_8_ = uVar35;
        pUVar38 = UnityEngine_Quaternion__Internal_Lerp
                            (local_98,(UnityEngine_Quaternion_o *)&local_b8,
                             (UnityEngine_Quaternion_o *)&local_a8,0.5,(MethodInfo *)0x0);
        fVar30 = (pUVar38->fields).x;
        fVar2 = (pUVar38->fields).w;
        fVar3 = (pUVar38->fields).z;
        fVar4 = (pUVar38->fields).y;
        fVar50 = fVar30 * fVar26;
        fVar43 = fVar3 * fVar1;
        fVar45 = fVar4 * fVar12;
        local_a8.y = (fVar2 * fVar26 + fVar4 * fVar1 + fVar30 * fVar42) - fVar3 * fVar12;
        local_a8.x = (fVar30 * fVar1 + fVar2 * fVar12 + fVar3 * fVar26) - fVar4 * fVar42;
        fVar44 = fVar2 * fVar42;
        local_a8.w = ((fVar2 * fVar1 - fVar30 * fVar12) - fVar4 * fVar26) - fVar3 * fVar42;
      }
      local_a8.z = (fVar44 + fVar43 + fVar45) - fVar50;
      UnityEngine_Transform__set_rotation(pUVar41,(UnityEngine_Quaternion_o *)&local_a8,(MethodInfo *)0x0);
    }
label_180583568:
    pUVar41 = (__this->fields).transform;
    if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
    local_a8.x = (__this->fields).worldPosition.fields.x;
    local_a8.y = (__this->fields).worldPosition.fields.y;
    local_a8.z = (__this->fields).worldPosition.fields.z;
    UnityEngine_Transform__set_position(pUVar41,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
  }
  pUVar41 = (__this->fields).systemSpace;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar36 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar36) {
    pUVar41 = (__this->fields).systemSpace;
    if (pUVar41 == (UnityEngine_Transform_o *)0x0) goto label_1805836cd;
    local_a8.x = (__this->fields).worldPosition.fields.x;
    local_a8.y = (__this->fields).worldPosition.fields.y;
    local_a8.z = (__this->fields).worldPosition.fields.z;
    pUVar39 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Vector3_o *)&local_b8,pUVar41,(UnityEngine_Vector3_o *)&local_a8,
                         (MethodInfo *)0x0);
    fVar26 = (pUVar39->fields).y;
    fVar12 = (pUVar39->fields).z;
    (__this->fields).systemPosition.fields.x = (pUVar39->fields).x;
    (__this->fields).systemPosition.fields.y = fVar26;
    (__this->fields).systemPosition.fields.z = fVar12;
  }
  index = 0;
  pSVar31 = (__this->fields).childBones;
  while (pSVar31 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((pSVar31->fields)._size <= index) {
      return;
    }
    pSVar31 = (__this->fields).childBones;
    if ((pSVar31 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (pEVar40 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar31,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       pEVar40 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
    EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
              (pEVar40,siblingRotationConstraints,startDepth,(MethodInfo *)0x0);
    index = index + 1;
    pSVar31 = (__this->fields).childBones;
  }
label_1805836cd:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x180582ac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180582c38: jmp 0x180582c00

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  UnityEngine_Vector3_o *pUVar7;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  undefined8 uVar8;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18433df3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df3e = '\x01';
  }
  pUVar1 = (__this->fields).transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_28,pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).systemSpace;
    fVar6 = (pUVar7->fields).z;
    fVar4 = (pUVar7->fields).y;
    (__this->fields).worldPosition.fields.x = (pUVar7->fields).x;
    (__this->fields).worldPosition.fields.y = fVar4;
    (__this->fields).worldPosition.fields.z = fVar6;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      uVar8._0_4_ = (__this->fields).worldPosition.fields.x;
      uVar8._4_4_ = (__this->fields).worldPosition.fields.y;
      fVar6 = (__this->fields).worldPosition.fields.z;
    }
    else {
      pUVar1 = (__this->fields).systemSpace;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_180582c45;
      local_28.x = (__this->fields).worldPosition.fields.x;
      local_28.y = (__this->fields).worldPosition.fields.y;
      local_28.z = (__this->fields).worldPosition.fields.z;
      pUVar7 = UnityEngine_Transform__InverseTransformPoint
                         (&local_18,pUVar1,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      uVar8._0_4_ = (pUVar7->fields).x;
      uVar8._4_4_ = (pUVar7->fields).y;
      fVar6 = (pUVar7->fields).z;
    }
    (__this->fields).systemPosition.fields.x = (float)(int)uVar8;
    (__this->fields).systemPosition.fields.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    (__this->fields).systemPosition.fields.z = fVar6;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    index = 0;
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar6 = (pUVar2->zeroVector).fields.z;
    fVar4 = (pUVar2->zeroVector).fields.y;
    (__this->fields).speed.fields.x = (pUVar2->zeroVector).fields.x;
    (__this->fields).speed.fields.y = fVar4;
    (__this->fields).speed.fields.z = fVar6;
    pSVar3 = (__this->fields).childBones;
    while (pSVar3 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar3->fields)._size <= index) {
        return;
      }
      pSVar3 = (__this->fields).childBones;
      if ((pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,(MethodInfo *)0x0);
      index = index + 1;
      pSVar3 = (__this->fields).childBones;
    }
  }
label_180582c45:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x180582db0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180582e7b: nop dword ptr [rax + rax]
// asm:   0x180582eb8: jmp 0x180582e80

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar3;
  float fVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18433df3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df3f = '\x01';
  }
  pUVar2 = (__this->fields).systemSpace;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pUVar2 = (__this->fields).systemSpace;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    local_28.x = (__this->fields).systemPosition.fields.x;
    local_28.y = (__this->fields).systemPosition.fields.y;
    local_28.z = (__this->fields).systemPosition.fields.z;
    pUVar6 = UnityEngine_Transform__TransformPoint
                       (&local_18,pUVar2,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    index = 0;
    fVar1 = (pUVar6->fields).z;
    fVar4 = (pUVar6->fields).y;
    pSVar3 = (__this->fields).childBones;
    (__this->fields).worldPosition.fields.x = (pUVar6->fields).x;
    (__this->fields).worldPosition.fields.y = fVar4;
    (__this->fields).worldPosition.fields.z = fVar1;
    while (pSVar3 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar3->fields)._size <= index) {
        return;
      }
      pSVar3 = (__this->fields).childBones;
      if ((pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(__this_00,(MethodInfo *)0x0);
      index = index + 1;
      pSVar3 = (__this->fields).childBones;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_rootBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_rootBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x1805852b0

System_Collections_Generic_List_Transform__o*
EZhex1991_EZSoftBone_EZSoftBone__get_rootBones(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  return (__this->fields).m_RootBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_endBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_endBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180584c80

System_Collections_Generic_List_Transform__o*
EZhex1991_EZSoftBone_EZSoftBone__get_endBones(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  return (__this->fields).m_EndBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sharedMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a710

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  bool bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  
  if (Il2CppMethodInitialized_18433df2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df2a = '\x01';
  }
  pEVar2 = (__this->fields).m_Material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pEVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
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
    if (pEVar2 == (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pEVar2,"SBMat_Default",(MethodInfo *)0x0);
    pEVar2 = TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneMaterial->static_fields->m_DefaultMaterial;
    (__this->fields).m_Material = pEVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_Material,pEVar2);
  }
  return (__this->fields).m_Material;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sharedMaterial
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x18058aa00

void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial
               (UnityEngine_UIElements_CreationContext_o *__this,
               System_Collections_Generic_List_CreationContext_SerializedDataOverrideRange__o *value,
               MethodInfo *method)

{
  (__this->fields)._serializedDataOverrides_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._serializedDataOverrides_k__BackingField,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_material
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a620

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_material(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  bool bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  
  if (Il2CppMethodInitialized_18433df2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_EZSoftBoneMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df2b = '\x01';
  }
  pEVar2 = (__this->fields).m_InstanceMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pEVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pEVar2 = EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pEVar2 = UnityEngine_Object__Instantiate_object__746ba0
                       ((Il2CppObject *)pEVar2,
                        (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_EZSoftBoneMaterial);
    (__this->fields).m_Material = pEVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_Material,pEVar2);
    (__this->fields).m_InstanceMaterial = pEVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_InstanceMaterial,pEVar2);
  }
  return (__this->fields).m_InstanceMaterial;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_material
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x18058a9b0

void EZhex1991_EZSoftBone_EZSoftBone__set_material
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,
               MethodInfo *method)

{
  (__this->fields).m_Material = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Material,value);
  (__this->fields).m_InstanceMaterial = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_InstanceMaterial,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_startDepth
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a8b0

UnityEngine_InputForUI_EventModifiers_o
EZhex1991_EZSoftBone_EZSoftBone__get_startDepth(UnityEngine_InputForUI_KeyEvent_o *__this,MethodInfo *method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._eventModifiers_k__BackingField.fields._state;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_startDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x18058aa60

void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth
               (UnityEngine_InputForUI_KeyEvent_o *__this,UnityEngine_InputForUI_EventModifiers_o value,
               MethodInfo *method)

{
  (__this->fields)._eventModifiers_k__BackingField.fields._state = (uint32_t)value.fields._state;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingConstraints
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a870

Unity_Collections_Unicode_Rune_o
EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints
          (Unity_Collections_FixedString64Bytes_Enumerator_o *__this,MethodInfo *method)

{
  return (Unity_Collections_Unicode_Rune_Fields)
         (Unity_Collections_Unicode_Rune_Fields)(__this->fields).current.fields.value;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x18058aa10

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_SiblingConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_closedSiblings
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a530

bool EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ClosedSiblings;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_closedSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x18058a8c0

void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_ClosedSiblings = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingRotationConstraints
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a880

bool EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingRotationConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingRotationConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x18058aa20

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool value,MethodInfo *method)

{
  (__this->fields).m_SiblingRotationConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_lengthUnification
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a610

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification
                  (TMPro_TMP_TextProcessingStack_MaterialReference__o *__this,MethodInfo_58A610 *method)

{
  return (__this->fields).m_RolloverSize;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_lengthUnification
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x18058a9a0

void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification
               (TMPro_TMP_TextProcessingStack_MaterialReference__o *__this,int32_t value,
               MethodInfo_58A9A0 *method)

{
  (__this->fields).m_RolloverSize = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_collisionLayers
// il2cpp: UnityEngine_LayerMask_o EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a540

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers
                  (TMPro_TMP_TextProcessingStack_MaterialReference__o *__this,MethodInfo_58A540 *method)

{
  return (__this->fields).m_Count;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_collisionLayers
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_LayerMask_o value, const MethodInfo* method);
// 0x18058a8d0

void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_LayerMask_o value,MethodInfo *method)

{
  (__this->fields).m_CollisionLayers.fields.m_Mask = (int32_t)value.fields.m_Mask;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_extraColliders
// il2cpp: System_Collections_Generic_List_Collider__o* EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a570

System_Collections_Generic_List_Collider__o*
EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a700

float EZhex1991_EZSoftBone_EZSoftBone__get_radius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Radius;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_radius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x18058a9f0

void EZhex1991_EZSoftBone_EZSoftBone__set_radius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Radius = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radiusCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a6f0

UnityEngine_AnimationCurve_o*
EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields).m_RadiusCurve.fields.Value;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_deltaTimeMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a560

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode
                  (UnityEngine_InputForUI_PointerEvent_o *__this,MethodInfo *method)

{
  return (__this->fields)._eventSource_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_deltaTimeMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x18058a8f0

void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode
               (UnityEngine_InputForUI_PointerEvent_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._eventSource_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_constantDeltaTime
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a550

float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ConstantDeltaTime;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_constantDeltaTime
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x18058a8e0

void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ConstantDeltaTime = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_iterations
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a600

UnityEngine_InputForUI_EventModifiers_o
EZhex1991_EZSoftBone_EZSoftBone__get_iterations
          (UnityEngine_InputForUI_PointerEvent_o *__this,MethodInfo *method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._eventModifiers_k__BackingField.fields._state;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_iterations
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x18058a990

void
EZhex1991_EZSoftBone_EZSoftBone__set_iterations(EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields).m_Iterations.fields._state = (uint32_t)value.fields._state;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sleepThreshold
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a8a0

float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SleepThreshold;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sleepThreshold
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x18058aa50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058aa50: nop 

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
// 0x18058a5d0

UnityEngine_Transform_o*
EZhex1991_EZSoftBone_EZSoftBone__get_gravityAligner(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  return (__this->fields).m_GravityAligner;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravityAligner
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x18058a960

void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,MethodInfo *method)

{
  (__this->fields).m_GravityAligner = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_GravityAligner,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_gravity
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a5e0

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_EZSoftBone__get_gravity
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_EZSoftBone_o *__this,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).m_Gravity.fields.z;
  fVar2 = (__this->fields).m_Gravity.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields).m_Gravity.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x18058a970

void EZhex1991_EZSoftBone_EZSoftBone__set_gravity
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields).m_Gravity.fields.x = (value->fields).x;
  (__this->fields).m_Gravity.fields.y = fVar2;
  (__this->fields).m_Gravity.fields.z = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceModule
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForceField_o* EZhex1991_EZSoftBone_EZSoftBone__get_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a580

Il2CppObject *
EZhex1991_EZSoftBone_EZSoftBone__get_forceModule
          (System_Collections_Generic_KeyValuePair_BindingId__object__o *__this,MethodInfo_58A580 *method)

{
  return (__this->fields).value;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceModule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForceField_o* value, const MethodInfo* method);
// 0x18058a900

void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneForceField_o *value,
               MethodInfo *method)

{
  (__this->fields).m_ForceModule = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ForceModule,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceScale
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a590

float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceScale;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceScale
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x18058a920

void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ForceScale = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_simulateSpace
// il2cpp: UnityEngine_Transform_o* EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a890

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SimulateSpace;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_simulateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x18058aa30

void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,MethodInfo *method)

{
  (__this->fields).m_SimulateSpace = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_SimulateSpace,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalRadius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a5c0

float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields)._globalRadius_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x18058a950

void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._globalRadius_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalForce
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a5a0

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_EZSoftBone__get_globalForce
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_EZSoftBone_o *__this,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._globalForce_k__BackingField.fields.z;
  fVar2 = (__this->fields)._globalForce_k__BackingField.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields)._globalForce_k__BackingField.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalForce
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x18058a930

void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields)._globalForce_k__BackingField.fields.x = (value->fields).x;
  (__this->fields)._globalForce_k__BackingField.fields.y = fVar2;
  (__this->fields)._globalForce_k__BackingField.fields.z = fVar1;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Start
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Start (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180588ff0

void EZhex1991_EZSoftBone_EZSoftBone__Start(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__InitStructures(__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnEnable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180588500

void EZhex1991_EZSoftBone_EZSoftBone__OnEnable(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__SetRestState(__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Update (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x1805884f0

void
EZhex1991_EZSoftBone_EZSoftBone__Update(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_588620
            (__this,(__this->fields).m_StartDepth,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$LateUpdate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180588410
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180588445: movaps xmm1, xmm0
// asm:   0x18058848b: nop dword ptr [rax + rax]
// asm:   0x1805884d7: jmp 0x180588490

void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int iVar2;
  float deltaTime;
  
  iVar2 = (__this->fields).m_DeltaTimeMode;
  if (iVar2 == 0) {
    deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  }
  else if (iVar2 == 1) {
    deltaTime = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  }
  else {
    if (iVar2 != 2) goto label_180588453;
    deltaTime = (__this->fields).m_ConstantDeltaTime;
  }
  EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures(__this,deltaTime,(MethodInfo *)0x0);
label_180588453:
  if (Il2CppMethodInitialized_18433df35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df35 = '\x01';
  }
  iVar2 = 0;
  pSVar1 = (__this->fields).m_Structures;
  while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((pSVar1->fields)._size <= iVar2) {
      return;
    }
    pSVar1 = (__this->fields).m_Structures;
    if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,iVar2,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
    EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
              (__this_00,(__this->fields).m_SiblingRotationConstraints,(__this->fields).m_StartDepth,
               (MethodInfo *)0x0);
    iVar2 = iVar2 + 1;
    pSVar1 = (__this->fields).m_Structures;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnDisable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x1805884f0

void
EZhex1991_EZSoftBone_EZSoftBone__OnDisable(EZhex1991_EZSoftBone_EZSoftBone_o* __this, MethodInfo* method)

{
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_588620
            (__this,(__this->fields).m_StartDepth,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x1805884f0

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_588620
            (__this,(__this->fields).m_StartDepth,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x180588620
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058867b: nop dword ptr [rax + rax]
// asm:   0x180588775: jmp 0x180588680

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_588620
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t startDepth,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  int index;
  int index_00;
  void *local_28;
  float local_20;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18433df2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df2c = '\x01';
  }
  index_00 = 0;
  pSVar1 = (__this->fields).m_Structures;
  while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((pSVar1->fields)._size <= index_00) {
      return;
    }
    pSVar1 = (__this->fields).m_Structures;
    if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       pIVar2 == (Il2CppObject *)0x0)) break;
    if (Il2CppMethodInitialized_18433df3c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      Il2CppMethodInitialized_18433df3c = '\x01';
    }
    if (startDepth < *(int *)((longlong)&pIVar2[9].monitor + 4)) {
      if (pIVar2[7].klass == (Il2CppClass *)0x0) break;
      local_28 = pIVar2[1].monitor;
      local_20 = *(float *)&pIVar2[2].klass;
      UnityEngine_Transform__set_localPosition
                ((UnityEngine_Transform_o *)pIVar2[7].klass,(UnityEngine_Vector3_o *)&local_28,
                 (MethodInfo *)0x0);
      if (pIVar2[7].klass == (Il2CppClass *)0x0) break;
      local_18._0_8_ = *(undefined8 *)((longlong)&pIVar2[2].klass + 4);
      local_18._8_8_ = *(undefined8 *)((longlong)&pIVar2[2].monitor + 4);
      UnityEngine_Transform__set_localRotation
                ((UnityEngine_Transform_o *)pIVar2[7].klass,(UnityEngine_Quaternion_o *)&local_18,
                 (MethodInfo *)0x0);
    }
    index = 0;
    while( true ) {
      __this_00 = pIVar2[6].monitor;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_180588795;
      if ((__this_00->fields)._size <= index) break;
      __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            (__this_00,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180588795;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_01,startDepth,(MethodInfo *)0x0);
      index = index + 1;
    }
    index_00 = index_00 + 1;
    pSVar1 = (__this->fields).m_Structures;
  }
label_180588795:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$InitStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__InitStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180587f30
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180588014: mov r15d, r13d
// asm:   0x180588017: mov ecx, r13d
// asm:   0x18058801a: xorps xmm6, xmm6
// asm:   0x18058801d: nop dword ptr [rax]
// asm:   0x18058810c: jmp 0x180588407
// asm:   0x180588201: jmp 0x180588407
// asm:   0x18058832d: jmp 0x1805882d1
// asm:   0x1805883c4: jmp 0x180588407

void EZhex1991_EZSoftBone_EZSoftBone__InitStructures
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t startDepth;
  bool bVar2;
  System_Collections_Generic_List_Transform__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *transform;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar5;
  System_Collections_Generic_Queue_EZSoftBone_Bone__o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Vector3_o *pUVar8;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar9;
  int iVar10;
  int index;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o local_48 [2];
  
  if (Il2CppMethodInitialized_18433df2e == '\0') {
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
    Il2CppMethodInitialized_18433df2e = '\x01';
  }
  pSVar9 = (__this->fields).m_Structures;
  if (pSVar9 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    iVar10 = (pSVar9->fields)._size;
    index = 0;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar9->fields)._size = 0;
    if (0 < iVar10) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar10,(MethodInfo *)0x0);
    }
    if (((__this->fields).m_RootBones == (System_Collections_Generic_List_Transform__o *)0x0) ||
       (pSVar3 = (__this->fields).m_RootBones, iVar10 = index, (pSVar3->fields)._size == 0)) {
label_180588111:
      if (Il2CppMethodInitialized_18433df2f == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone)
        ;
        Il2CppMethodInitialized_18433df2f = '\x01';
      }
      if ((__this->fields).m_SiblingConstraints == 1) {
        pSVar9 = (__this->fields).m_Structures;
        iVar10 = index;
        while (pSVar9 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
          if ((pSVar9->fields)._size <= iVar10) goto label_180588228;
          pSVar6 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
          System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_object____ctor
                    ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)pSVar6,
                     (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
          pSVar9 = (__this->fields).m_Structures;
          if ((pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
             (pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar9,iVar10,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
             pSVar6 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0)) break;
          System_Collections_Generic_Queue_object___Enqueue
                    ((System_Collections_Generic_Queue_T__o *)pSVar6,pIVar7,
                     (MethodInfo_B93CA0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue)
          ;
          EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                    (__this,pSVar6,(__this->fields).m_ClosedSiblings,(MethodInfo *)0x0);
          iVar10 = iVar10 + 1;
          pSVar9 = (__this->fields).m_Structures;
        }
      }
      else if ((__this->fields).m_SiblingConstraints == 2) {
        pSVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
        System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_object____ctor
                  ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)pSVar6,
                   (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
        pSVar9 = (__this->fields).m_Structures;
        iVar10 = index;
        if (pSVar9 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
          while (iVar10 < (pSVar9->fields)._size) {
            pSVar9 = (__this->fields).m_Structures;
            if ((pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
               (pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,iVar10,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
               pSVar6 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0)) goto label_180588407;
            System_Collections_Generic_Queue_object___Enqueue
                      ((System_Collections_Generic_Queue_T__o *)pSVar6,pIVar7,
                       (MethodInfo_B93CA0 *)
                       MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
            pSVar9 = (__this->fields).m_Structures;
            iVar10 = iVar10 + 1;
            if (pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_180588407;
          }
          if (pSVar6 != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
            if (0 < (pSVar6->fields)._size) {
              EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                        (__this,pSVar6,(__this->fields).m_ClosedSiblings,(MethodInfo *)0x0);
            }
            goto label_180588228;
          }
        }
      }
      else {
label_180588228:
        EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength(__this,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433df32 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
          Il2CppMethodInitialized_18433df32 = '\x01';
        }
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_lossyScale(local_48,pUVar4,(MethodInfo *)0x0);
          fVar12 = ABS((pUVar8->fields).y);
          fVar13 = ABS((pUVar8->fields).z);
          fVar11 = ABS((pUVar8->fields).x);
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          if (fVar11 <= fVar12) {
            fVar11 = fVar12;
          }
          pSVar9 = (__this->fields).m_Structures;
          (__this->fields)._globalRadius_k__BackingField = fVar11 * (__this->fields).m_Radius;
          while (pSVar9 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
            if ((pSVar9->fields)._size <= index) {
              return;
            }
            pSVar9 = (__this->fields).m_Structures;
            if ((pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
               (pEVar5 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                         System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
               pEVar5 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
            EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                      (pEVar5,(__this->fields)._globalRadius_k__BackingField,(__this->fields).m_RadiusCurve,
                       (MethodInfo *)0x0);
            index = index + 1;
            pSVar9 = (__this->fields).m_Structures;
          }
        }
      }
    }
    else {
      do {
        if ((pSVar3->fields)._size <= iVar10) goto label_180588111;
        pSVar3 = (__this->fields).m_RootBones;
        if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,iVar10,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item
                           );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar3 = (__this->fields).m_RootBones;
          if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) break;
          pUVar4 = (__this->fields).m_SimulateSpace;
          transform = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,iVar10,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          pSVar3 = (__this->fields).m_EndBones;
          startDepth = (__this->fields).m_StartDepth;
          pEVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
          EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                    (pEVar5,pUVar4,transform,(System_Collections_Generic_IEnumerable_Transform__o *)pSVar3,
                     startDepth,0,0.0,0.0,(MethodInfo *)0x0);
          if ((__this->fields).m_Structures == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0)
          break;
          il2cpp_runtime_helper_180012890();
        }
        pSVar3 = (__this->fields).m_RootBones;
        iVar10 = iVar10 + 1;
      } while (pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0);
    }
  }
label_180588407:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x1805887a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058894d: nop dword ptr [rax]
// asm:   0x180588992: jmp 0x1805887f3

void EZhex1991_EZSoftBone_EZSoftBone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar1;
  float fVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o *pUVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  int index;
  int index_00;
  Il2CppClass *pIVar6;
  void *local_38;
  float local_30;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18433df2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df2d = '\x01';
  }
  pSVar3 = (__this->fields).m_Structures;
  index = 0;
  if (pSVar3 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    while( true ) {
      if ((pSVar3->fields)._size <= index) {
        return;
      }
      pSVar3 = (__this->fields).m_Structures;
      if ((pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         pIVar4 == (Il2CppObject *)0x0)) break;
      if (Il2CppMethodInitialized_18433df3e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_18433df3e = '\x01';
      }
      if (pIVar4[7].klass == (Il2CppClass *)0x0) break;
      pUVar5 = UnityEngine_Transform__get_position
                         (&local_28,(UnityEngine_Transform_o *)pIVar4[7].klass,(MethodInfo *)0x0);
      x = pIVar4[8].monitor;
      fVar2 = (pUVar5->fields).z;
      pIVar4[7].monitor = *(void **)&pUVar5->fields;
      *(float *)&pIVar4[8].klass = fVar2;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pIVar6 = pIVar4[7].monitor;
        fVar2 = *(float *)&pIVar4[8].klass;
      }
      else {
        if (pIVar4[8].monitor == (UnityEngine_Transform_o *)0x0) break;
        local_38 = pIVar4[7].monitor;
        local_30 = *(float *)&pIVar4[8].klass;
        pUVar5 = UnityEngine_Transform__InverseTransformPoint
                           (&local_18,pIVar4[8].monitor,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        pIVar6 = *(Il2CppClass **)&pUVar5->fields;
        fVar2 = (pUVar5->fields).z;
      }
      pIVar4[9].klass = pIVar6;
      *(float *)&pIVar4[9].monitor = fVar2;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      index_00 = 0;
      fVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
      pIVar4[0xc].klass = *(Il2CppClass **)&(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
      *(float *)&pIVar4[0xc].monitor = fVar2;
      while( true ) {
        __this_00 = pIVar4[6].monitor;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_1805889ac;
        if ((__this_00->fields)._size <= index_00) break;
        __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (__this_00,index_00,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_1805889ac;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_01,(MethodInfo *)0x0);
        index_00 = index_00 + 1;
      }
      pSVar3 = (__this->fields).m_Structures;
      index = index + 1;
      if (pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) break;
    }
  }
label_1805889ac:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$CreateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__CreateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180587d10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180587dee: mov r15d, r13d
// asm:   0x180587df1: mov ecx, r13d
// asm:   0x180587df4: xorps xmm6, xmm6
// asm:   0x180587edb: jmp 0x180587df7

void EZhex1991_EZSoftBone_EZSoftBone__CreateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar3;
  bool bVar4;
  System_Collections_Generic_List_Transform__o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *transform;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int32_t index;
  
  if (Il2CppMethodInitialized_18433df2e == '\0') {
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
    Il2CppMethodInitialized_18433df2e = '\x01';
  }
  pSVar3 = (__this->fields).m_Structures;
  if (pSVar3 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    iVar2 = (pSVar3->fields)._size;
    index = 0;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if (((__this->fields).m_RootBones == (System_Collections_Generic_List_Transform__o *)0x0) ||
       (pSVar5 = (__this->fields).m_RootBones, (pSVar5->fields)._size == 0)) {
      return;
    }
    do {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      pSVar5 = (__this->fields).m_RootBones;
      if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) break;
      pUVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pSVar5 = (__this->fields).m_RootBones;
        if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        pUVar6 = (__this->fields).m_SimulateSpace;
        transform = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar5,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Transform_get_Item);
        pSVar5 = (__this->fields).m_EndBones;
        iVar2 = (__this->fields).m_StartDepth;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone_Bone);
        EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                  (__this_00,pUVar6,transform,(System_Collections_Generic_IEnumerable_Transform__o *)pSVar5,
                   iVar2,0,0.0,0.0,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).m_Structures;
        if (pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) break;
        il2cpp_runtime_helper_180012890(pSVar3,__this_00,MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_Add);
      }
      pSVar5 = (__this->fields).m_RootBones;
      index = index + 1;
    } while (pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0);
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180588c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180588d7f: jmp 0x180588e3d

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Queue_EZSoftBone_Bone__o *pSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar3;
  int iVar4;
  
  if (Il2CppMethodInitialized_18433df2f == '\0') {
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
    Il2CppMethodInitialized_18433df2f = '\x01';
  }
  if ((__this->fields).m_SiblingConstraints == 1) {
    iVar4 = 0;
    pSVar3 = (__this->fields).m_Structures;
    while (pSVar3 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar3->fields)._size <= iVar4) {
        return;
      }
      pSVar1 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
      System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_object____ctor
                ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)pSVar1,
                 (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
      pSVar3 = (__this->fields).m_Structures;
      if ((pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,iVar4,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         pSVar1 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0)) break;
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)pSVar1,pIVar2,
                 (MethodInfo_B93CA0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
      EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                (__this,pSVar1,(__this->fields).m_ClosedSiblings,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
      pSVar3 = (__this->fields).m_Structures;
    }
  }
  else {
    if ((__this->fields).m_SiblingConstraints != 2) {
      return;
    }
    pSVar1 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_EZSoftBone_Bone);
    System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_object____ctor
              ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)pSVar1,
               (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_ctor);
    pSVar3 = (__this->fields).m_Structures;
    iVar4 = 0;
    if (pSVar3 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      while (iVar4 < (pSVar3->fields)._size) {
        pSVar3 = (__this->fields).m_Structures;
        if ((pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,iVar4,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
           pSVar1 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0)) goto label_180588e3d;
        System_Collections_Generic_Queue_object___Enqueue
                  ((System_Collections_Generic_Queue_T__o *)pSVar1,pIVar2,
                   (MethodInfo_B93CA0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
        pSVar3 = (__this->fields).m_Structures;
        iVar4 = iVar4 + 1;
        if (pSVar3 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_180588e3d;
      }
      if (pSVar1 != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
        if ((pSVar1->fields)._size < 1) {
          return;
        }
        EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                  (__this,pSVar1,(__this->fields).m_ClosedSiblings,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_180588e3d:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblingsByDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, System_Collections_Generic_Queue_EZSoftBone_Bone__o* bones, bool closed, const MethodInfo* method);
// 0x1805889c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180588acb: nop dword ptr [rax + rax]
// asm:   0x180588b4a: mov rsi, rbx
// asm:   0x180588b4d: mov rbp, rbx
// asm:   0x180588b50: jmp 0x180588aa0

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               System_Collections_Generic_Queue_EZSoftBone_Bone__o *bones,bool closed,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar6;
  Il2CppObject *pIVar7;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *right;
  UnityEngine_Vector3_o *pUVar8;
  bool bVar9;
  int iVar10;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *right_00;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28;
  
  if (Il2CppMethodInitialized_18433df30 == '\0') {
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
    Il2CppMethodInitialized_18433df30 = '\x01';
  }
  if ((bones != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) &&
     (pEVar6 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
               System_Collections_Generic_Queue_object___Dequeue
                         ((System_Collections_Generic_Queue_T__o *)bones,
                          (MethodInfo_B93600 *)
                          MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Dequeue),
     pEVar6 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) {
    iVar10 = 0;
    while (pSVar2 = (pEVar6->fields).childBones,
          pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar2->fields)._size <= iVar10) {
        right = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
        pEVar5 = pEVar6;
        goto label_180588aa0;
      }
      pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,iVar10,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,pIVar7,
                 (MethodInfo_B93CA0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
      iVar10 = iVar10 + 1;
    }
  }
label_180588c78:
  ThrowNullReferenceException();
label_180588aa0:
  right_00 = pEVar5;
  __this_00 = pEVar6;
  if (0 < (bones->fields)._size) {
    right = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
            System_Collections_Generic_Queue_object___Dequeue
                      ((System_Collections_Generic_Queue_T__o *)bones,
                       (MethodInfo_B93600 *)
                       MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Dequeue);
    iVar10 = 0;
    if (right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180588c78;
    while( true ) {
      pSVar2 = (right->fields).childBones;
      if (pSVar2 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_180588c78;
      if ((pSVar2->fields)._size <= iVar10) break;
      pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,iVar10,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,pIVar7,
                 (MethodInfo_B93CA0 *)MethodInfo_System_Collections_Generic_Queue_EZSoftBone_Bone_Enqueue);
      iVar10 = iVar10 + 1;
    }
    if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180588c78;
    pEVar6 = right;
    if ((__this_00->fields).depth == (right->fields).depth) {
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling(__this_00,right,(MethodInfo *)0x0);
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling(right,__this_00,(MethodInfo *)0x0);
      pEVar5 = right_00;
    }
    else {
      pEVar5 = right;
      if (closed) {
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling(__this_00,right_00,(MethodInfo *)0x0);
        if (right_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180588c78;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling(right_00,__this_00,(MethodInfo *)0x0);
      }
    }
    goto label_180588aa0;
  }
  bVar9 = false;
  if (right != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
    bVar9 = closed;
  }
  if (bVar9 != false) {
    if (right_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180588c78;
    if ((right == right_00) || (right == (right_00->fields).rightBone)) {
      if (right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180588c78;
    }
    else {
      (right_00->fields).leftBone = right;
      Il2CppCodeGenWriteBarrier(&(right_00->fields).leftBone,right);
      if ((right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
         (pUVar3 = (right_00->fields).transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
      goto label_180588c78;
      local_38.x = (right->fields).worldPosition.fields.x;
      local_38.y = (right->fields).worldPosition.fields.y;
      local_38.z = (right->fields).worldPosition.fields.z;
      pUVar8 = UnityEngine_Transform__InverseTransformPoint
                         (&local_28,pUVar3,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      fVar4 = (pUVar8->fields).y;
      fVar1 = (pUVar8->fields).z;
      (right_00->fields).leftPosition.fields.x = (pUVar8->fields).x;
      (right_00->fields).leftPosition.fields.y = fVar4;
      (right_00->fields).leftPosition.fields.z = fVar1;
    }
    if ((right_00 != right) && (right_00 != (right->fields).leftBone)) {
      (right->fields).rightBone = right_00;
      Il2CppCodeGenWriteBarrier(&(right->fields).rightBone,right_00);
      pUVar3 = (right->fields).transform;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_180588c78;
      local_38.x = (right_00->fields).worldPosition.fields.x;
      local_38.y = (right_00->fields).worldPosition.fields.y;
      local_38.z = (right_00->fields).worldPosition.fields.z;
      pUVar8 = UnityEngine_Transform__InverseTransformPoint
                         (&local_28,pUVar3,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      fVar4 = (pUVar8->fields).y;
      fVar1 = (pUVar8->fields).z;
      (right->fields).rightPosition.fields.x = (pUVar8->fields).x;
      (right->fields).rightPosition.fields.y = fVar4;
      (right->fields).rightPosition.fields.z = fVar1;
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180588e50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180588ebd: nop dword ptr [rax]
// asm:   0x180588f0f: jmp 0x180588fde
// asm:   0x180588f1f: nop 
// asm:   0x180588f6e: jmp 0x180588fde
// asm:   0x180588fc7: jmp 0x180588f80

void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar3;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar4;
  int iVar5;
  int index;
  float treeLength;
  
  if (Il2CppMethodInitialized_18433df31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df31 = '\x01';
  }
  if ((__this->fields).m_LengthUnification == 1) {
    iVar5 = 0;
    pSVar4 = (__this->fields).m_Structures;
    while (pSVar4 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar4->fields)._size <= iVar5) {
        return;
      }
      pSVar4 = (__this->fields).m_Structures;
      if ((pSVar4 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,iVar5,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_582ce0
                (pEVar3,(pEVar3->fields).treeLength,(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      pSVar4 = (__this->fields).m_Structures;
    }
  }
  else {
    if ((__this->fields).m_LengthUnification != 2) {
      return;
    }
    pSVar4 = (__this->fields).m_Structures;
    index = 0;
    treeLength = 0.0;
    iVar5 = 0;
    if (pSVar4 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      while (__this_00 = (__this->fields).m_Structures, iVar5 < (pSVar4->fields)._size) {
        if ((__this_00 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,iVar5,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
           pIVar2 == (Il2CppObject *)0x0)) goto label_180588fde;
        fVar1 = *(float *)((longlong)&pIVar2[10].klass + 4);
        if (treeLength <= fVar1) {
          treeLength = fVar1;
        }
        pSVar4 = (__this->fields).m_Structures;
        iVar5 = iVar5 + 1;
        if (pSVar4 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_180588fde;
      }
      if (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_180588f20;
    }
  }
  goto label_180588fde;
  while( true ) {
    EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_582ce0(pEVar3,treeLength,(MethodInfo *)0x0);
    __this_00 = (__this->fields).m_Structures;
    index = index + 1;
    if (__this_00 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) break;
label_180588f20:
    if ((__this_00->fields)._size <= index) {
      return;
    }
    pSVar4 = (__this->fields).m_Structures;
    if ((pSVar4 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
  }
label_180588fde:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$RefreshRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x180588510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180588600: jmp 0x1805885b5

void EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  int index;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18433df32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df32 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_lossyScale(&local_18,__this_00,(MethodInfo *)0x0);
    fVar4 = ABS((pUVar2->fields).y);
    fVar5 = ABS((pUVar2->fields).z);
    fVar3 = ABS((pUVar2->fields).x);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    index = 0;
    pSVar1 = (__this->fields).m_Structures;
    (__this->fields)._globalRadius_k__BackingField = fVar3 * (__this->fields).m_Radius;
    while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      pSVar1 = (__this->fields).m_Structures;
      if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
         (__this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
         __this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (__this_01,(__this->fields)._globalRadius_k__BackingField,(__this->fields).m_RadiusCurve,
                 (MethodInfo *)0x0);
      index = index + 1;
      pSVar1 = (__this->fields).m_Structures;
    }
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float deltaTime, const MethodInfo* method);
// 0x180589e80
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180589faa: nop word ptr [rax + rax]
// asm:   0x18058a081: jmp 0x180589fb0
// asm:   0x18058a294: nop dword ptr [rax]
// asm:   0x18058a298: nop dword ptr [rax + rax]
// asm:   0x18058a2a0: mov edi, r14d
// asm:   0x18058a2e1: mov r14, qword ptr [rsp + 0xc8]
// asm:   0x18058a2e9: mov rdi, qword ptr [rsp + 0xc0]
// asm:   0x18058a2f1: mov rsi, qword ptr [rsp + 0xb8]
// asm:   0x18058a2f9: mov rbp, qword ptr [rsp + 0xb0]
// asm:   0x18058a301: movaps xmm7, xmmword ptr [rsp + 0x80]

void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float deltaTime,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  UnityEngine_AnimationCurve_o *radiusCurve;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar9;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar10;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *material;
  int iVar11;
  int iVar12;
  int index;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_o local_68 [8];
  
  if (Il2CppMethodInitialized_18433df33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433df33 = '\x01';
  }
  if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBone);
  }
  if (deltaTime <= TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->static_fields->DeltaTime_Min) {
    return;
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__get_lossyScale
                       ((UnityEngine_Vector3_o *)&local_78,pUVar7,(MethodInfo *)0x0);
    fVar17 = ABS((pUVar8->fields).y);
    fVar19 = ABS((pUVar8->fields).z);
    fVar16 = ABS((pUVar8->fields).x);
    if (fVar17 <= fVar19) {
      fVar17 = fVar19;
    }
    if (fVar16 <= fVar17) {
      fVar16 = fVar17;
    }
    iVar13 = 0;
    pSVar9 = (__this->fields).m_Structures;
    (__this->fields)._globalRadius_k__BackingField = fVar16 * (__this->fields).m_Radius;
    iVar12 = iVar13;
    if (pSVar9 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      while (iVar12 < (pSVar9->fields)._size) {
        pSVar9 = (__this->fields).m_Structures;
        if (pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_18058a31a;
        pEVar10 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar9,iVar12,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
        fVar17 = (__this->fields)._globalRadius_k__BackingField;
        radiusCurve = (__this->fields).m_RadiusCurve;
        material = EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial(__this,(MethodInfo *)0x0);
        if (pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_18058a31a;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_582690
                  (pEVar10,fVar17,radiusCurve,material,(MethodInfo *)0x0);
        pUVar7 = (__this->fields).m_SimulateSpace;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pSVar9 = (__this->fields).m_Structures;
          if ((pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
             (pEVar10 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar9,iVar12,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
             pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) goto label_18058a31a;
          EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(pEVar10,(MethodInfo *)0x0);
        }
        pSVar9 = (__this->fields).m_Structures;
        iVar12 = iVar12 + 1;
        if (pSVar9 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_18058a31a;
      }
      fVar16 = (__this->fields).m_Gravity.fields.y;
      fVar17 = (__this->fields).m_Gravity.fields.z;
      pUVar7 = (__this->fields).m_GravityAligner;
      (__this->fields)._globalForce_k__BackingField.fields.x = (__this->fields).m_Gravity.fields.x;
      (__this->fields)._globalForce_k__BackingField.fields.y = fVar16;
      (__this->fields)._globalForce_k__BackingField.fields.z = fVar17;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        pUVar7 = (__this->fields).m_GravityAligner;
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18058a31a;
        local_78.x = (__this->fields).m_Gravity.fields.x;
        local_78.y = (__this->fields).m_Gravity.fields.y;
        local_78.z = (__this->fields).m_Gravity.fields.z;
        pUVar8 = UnityEngine_Transform__TransformDirection
                           (local_68,pUVar7,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
        uVar2._0_4_ = (pUVar8->fields).x;
        uVar2._4_4_ = (pUVar8->fields).y;
        fVar17 = (pUVar8->fields).z;
        local_78._0_8_ = uVar2;
        local_78.z = fVar17;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar16 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
        if (fVar16 <= 1e-05) {
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar16 = (pUVar5->zeroVector).fields.x;
          fVar19 = (pUVar5->zeroVector).fields.y;
          fVar17 = (pUVar5->zeroVector).fields.z;
        }
        else {
          fVar19 = local_78.y / fVar16;
          fVar17 = fVar17 / fVar16;
          fVar16 = (float)uVar2 / fVar16;
        }
        uVar3._0_4_ = (__this->fields).m_Gravity.fields.x;
        uVar3._4_4_ = (__this->fields).m_Gravity.fields.y;
        fVar18 = (__this->fields).m_Gravity.fields.z;
        local_78._0_8_ = uVar3;
        local_78.z = fVar18;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar14 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
        if (fVar14 <= 1e-05) {
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar14 = (pUVar5->zeroVector).fields.x;
          fVar15 = (pUVar5->zeroVector).fields.y;
          fVar18 = (pUVar5->zeroVector).fields.z;
        }
        else {
          fVar15 = local_78.y / fVar14;
          fVar18 = fVar18 / fVar14;
          fVar14 = (float)uVar3 / fVar14;
        }
        fVar17 = (float)il2cpp_runtime_helper_1804f6310(fVar15 * fVar19 + fVar14 * fVar16 + fVar18 * fVar17);
        fVar17 = fVar17 / 3.1415927;
        uVar1 = (__this->fields)._globalForce_k__BackingField.fields.x;
        uVar4 = (__this->fields)._globalForce_k__BackingField.fields.y;
        (__this->fields)._globalForce_k__BackingField.fields.z =
             fVar17 * (__this->fields)._globalForce_k__BackingField.fields.z;
        (__this->fields)._globalForce_k__BackingField.fields.x = (float)uVar1 * fVar17;
        (__this->fields)._globalForce_k__BackingField.fields.y = (float)uVar4 * fVar17;
      }
      iVar12 = (__this->fields).m_Iterations;
      index = iVar13;
      iVar11 = iVar13;
      if ((__this->fields).m_Iterations < 1) {
        return;
      }
      while (pSVar9 = (__this->fields).m_Structures,
            pSVar9 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
        if (index < (pSVar9->fields)._size) {
          pEVar10 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar9,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
          EZhex1991_EZSoftBone_EZSoftBone__UpdateBones
                    (__this,pEVar10,deltaTime / (float)iVar12,(MethodInfo *)0x0);
          index = index + 1;
        }
        else {
          iVar11 = iVar11 + 1;
          index = iVar13;
          if ((__this->fields).m_Iterations <= iVar11) {
            return;
          }
        }
      }
    }
  }
label_18058a31a:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* bone, float deltaTime, const MethodInfo* method);
// 0x180589000
// eh: try 0x180589aa0..0x180589e6a -> pad 0x1833158c0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180589b83: mov rdx, qword ptr [rip + 0x3af3f5e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_Dispose
// asm:   0x180589b8a: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x180589b8f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x180589b94: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x180589b99: test rcx, rcx
// asm:   0x180589b9c: jne 0x180589e5e
// asm:   0x180589ba2: xor r15d, r15d
// asm:   0x180589ba5: movss xmm12, dword ptr [rsp + 0x1a0]
// asm:   0x180589baf: mov rsi, qword ptr [rsp + 0x198]
// asm:   0x180589bb7: mov r13, qword ptr [rsp + 0x190]
// asm:   0x180589bbf: movss xmm6, dword ptr [rsp + 0x68]
// asm:   0x180589bc5: movss xmm7, dword ptr [rsp + 0x6c]
// asm:   0x180589bcb: movss xmm8, dword ptr [rsp + 0x70]
// asm:   0x180589c1e: nop 
// asm:   0x180589ccf: mov rdx, qword ptr [rip + 0x3aef1fa]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x180589cd6: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x180589cdb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x180589ce0: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x180589ce5: test rcx, rcx
// asm:   0x180589ce8: jne 0x180589e6a
// asm:   0x180589cee: movss xmm12, dword ptr [rsp + 0x1a0]
// asm:   0x180589cf8: mov rsi, qword ptr [rsp + 0x198]
// asm:   0x180589d00: mov r13, qword ptr [rsp + 0x190]
// asm:   0x180589d08: movss xmm5, dword ptr [rsp + 0x28]
// asm:   0x180589d0e: movss xmm4, dword ptr [rsp + 0x24]
// asm:   0x180589d14: movss xmm3, dword ptr [rsp + 0x20]
// asm:   0x180589d1a: movss xmm6, dword ptr [rsp + 0x68]
// asm:   0x180589d20: movss xmm7, dword ptr [rsp + 0x6c]
// asm:   0x180589d26: movss xmm8, dword ptr [rsp + 0x70]
// asm:   0x180589d2d: jmp 0x180589d42
// asm:   0x180589d2f: movss xmm6, dword ptr [rsp + 0x74]
// asm:   0x180589d35: movss xmm7, dword ptr [rsp + 0x78]
// asm:   0x180589d3b: movss xmm8, dword ptr [rsp + 0x7c]
// asm:   0x180589d42: xor r15d, r15d
// asm:   0x180589e5e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x180589e6a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833158c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833158c5: push rbp
// asm:   0x1833158c6: sub rsp, 0x20
// asm:   0x1833158ca: mov rbp, rdx
// asm:   0x1833158cd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x1833158d4: mov rcx, qword ptr [rax]
// asm:   0x1833158d7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x1833158db: movabs rax, 0
// asm:   0x1833158e5: add rsp, 0x20
// asm:   0x1833158e9: pop rbp
// asm:   0x1833158ea: ret 
// asm:   0x1833158f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833158f5: push rbp
// asm:   0x1833158f6: sub rsp, 0x20
// asm:   0x1833158fa: mov rbp, rdx
// asm:   0x1833158fd: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x183315904: mov rcx, qword ptr [rax]
// asm:   0x183315907: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18331590b: movabs rax, 0
// asm:   0x183315915: add rsp, 0x20
// asm:   0x183315919: pop rbp
// asm:   0x18331591a: ret 

void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *bone,
               float deltaTime,MethodInfo *method)

{
  UnityEngine_LayerMask_o mask;
  EZhex1991_EZSoftBone_EZSoftBoneForceField_o *pEVar1;
  EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this_00;
  EZhex1991_EZSoftBone_CustomForce_o *pEVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  System_Collections_Generic_List_Collider__o *__this_02;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_03;
  UnityEngine_Component_o *pUVar4;
  bool bVar5;
  int32_t layer;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  float *pfVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *__this_04;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o local_168;
  UnityEngine_Vector3_Fields local_158;
  UnityEngine_Vector3_Fields local_148;
  undefined1 local_138 [16];
  UnityEngine_Component_o *local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_100;
  UnityEngine_Component_o *local_f8;
  undefined1 local_f0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_e8;
  UnityEngine_Component_o *local_e0;
  
  if (Il2CppMethodInitialized_18433df34 == '\0') {
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
    Il2CppMethodInitialized_18433df34 = '\x01';
  }
  local_168.fields.x = 0.0;
  local_168.fields.y = 0.0;
  local_168.fields.z = 0.0;
  local_108 = (undefined1  [8])0x0;
  pUStack_100 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_f8 = (UnityEngine_Component_o *)0x0;
  local_f0 = (undefined1  [8])0x0;
  pUStack_e8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_e0 = (UnityEngine_Component_o *)0x0;
  if (bone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180589e70;
  if ((__this->fields).m_StartDepth < (bone->fields).depth) {
    local_120 = (bone->fields).worldPosition.fields.x;
    local_11c = (bone->fields).worldPosition.fields.y;
    local_168.fields.z = (bone->fields).worldPosition.fields.z;
    fVar12 = (__this->fields)._globalForce_k__BackingField.fields.x;
    fVar14 = (__this->fields)._globalForce_k__BackingField.fields.y;
    fVar16 = (__this->fields)._globalForce_k__BackingField.fields.z;
    pEVar1 = (__this->fields).m_ForceModule;
    local_118 = local_168.fields.z;
    local_114 = local_120;
    local_110 = local_11c;
    local_10c = local_168.fields.z;
    local_168.fields.x = local_120;
    local_168.fields.y = local_11c;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pEVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pEVar1 = (__this->fields).m_ForceModule;
      if (pEVar1 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto label_180589e70;
      bVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled
                        ((UnityEngine_Behaviour_o *)pEVar1,(MethodInfo *)0x0);
      if (bVar5) {
        pEVar1 = (__this->fields).m_ForceModule;
        if (pEVar1 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto label_180589e70;
        fVar18 = (bone->fields).normalizedLength;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pEVar1,(MethodInfo *)0x0);
        __this_00 = (pEVar1->fields).m_Force;
        if ((__this_00 == (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) ||
           (pUVar6 = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                               ((UnityEngine_Vector3_o *)&local_148,__this_00,
                                (pEVar1->fields)._time_k__BackingField -
                                fVar18 * (pEVar1->fields).m_Conductivity,(MethodInfo *)0x0),
           pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_180589e70;
        local_158.x = (pUVar6->fields).x;
        local_158.y = (pUVar6->fields).y;
        local_158.z = (pUVar6->fields).z;
        pUVar6 = UnityEngine_Transform__TransformDirection
                           ((UnityEngine_Vector3_o *)&local_148,pUVar7,(UnityEngine_Vector3_o *)&local_158,
                            (MethodInfo *)0x0);
        fVar18 = (__this->fields).m_ForceScale;
        fVar12 = fVar18 * (pUVar6->fields).x + fVar12;
        fVar14 = fVar18 * (pUVar6->fields).y + fVar14;
        fVar16 = fVar18 * (pUVar6->fields).z + fVar16;
      }
    }
    if ((__this->fields).customForce != (EZhex1991_EZSoftBone_CustomForce_o *)0x0) {
      pEVar2 = (__this->fields).customForce;
      pfVar8 = (float *)(*(code *)(pEVar2->fields).invoke_impl)
                                  (&local_148,(pEVar2->fields).method_code,(bone->fields).normalizedLength);
      fVar12 = *pfVar8 + fVar12;
      fVar14 = fVar14 + pfVar8[1];
      fVar16 = fVar16 + pfVar8[2];
    }
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_180589e70;
    pUVar6 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)&local_148,pUVar7,(MethodInfo *)0x0);
    fVar18 = (pUVar6->fields).x;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_180589e70;
    pUVar6 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)&local_148,pUVar7,(MethodInfo *)0x0);
    fVar17 = (pUVar6->fields).y;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_180589e70;
    pUVar6 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)&local_148,pUVar7,(MethodInfo *)0x0);
    fVar19 = (pUVar6->fields).z;
    fVar15 = 1.0 - (bone->fields).resistance;
    fVar13 = (float)(__this->fields).m_Iterations;
    fVar18 = (fVar12 * fVar18 * fVar15) / fVar13 + (bone->fields).speed.fields.x;
    (bone->fields).speed.fields.x = fVar18;
    fVar17 = (fVar14 * fVar17 * fVar15) / fVar13 + (bone->fields).speed.fields.y;
    (bone->fields).speed.fields.y = fVar17;
    fVar12 = (fVar16 * fVar19 * fVar15) / fVar13 + (bone->fields).speed.fields.z;
    (bone->fields).speed.fields.z = fVar12;
    fVar14 = 1.0 - (bone->fields).damping;
    fVar18 = fVar14 * fVar18;
    fVar17 = fVar14 * fVar17;
    (bone->fields).speed.fields.y = fVar17;
    fVar14 = fVar14 * fVar12;
    (bone->fields).speed.fields.x = fVar18;
    (bone->fields).speed.fields.z = fVar14;
    fVar12 = fVar14 * fVar14 + fVar17 * fVar17 + fVar18 * fVar18;
    pfVar8 = &(__this->fields).m_SleepThreshold;
    if (*pfVar8 <= fVar12 && fVar12 != *pfVar8) {
      local_168.fields.x = deltaTime * fVar18 + local_168.fields.x;
      local_168.fields.y = deltaTime * fVar17 + local_168.fields.y;
      local_168.fields.z = deltaTime * fVar14 + local_168.fields.z;
    }
    pEVar10 = (bone->fields).parentBone;
    if ((pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar7 = (pEVar10->fields).transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_180589e70;
    fVar12 = (pEVar10->fields).worldPosition.fields.x;
    fVar14 = (pEVar10->fields).worldPosition.fields.y;
    fVar16 = (pEVar10->fields).worldPosition.fields.z;
    pUVar6 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_148,pUVar7,(MethodInfo *)0x0)
    ;
    fVar18 = (pUVar6->fields).x;
    fVar17 = (pUVar6->fields).y;
    fVar19 = (pUVar6->fields).z;
    pEVar10 = (bone->fields).parentBone;
    if ((pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar7 = (pEVar10->fields).transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_180589e70;
    local_158.x = (bone->fields).localPosition.fields.x;
    local_158.y = (bone->fields).localPosition.fields.y;
    local_158.z = (bone->fields).localPosition.fields.z;
    pUVar6 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Vector3_o *)&local_148,pUVar7,(UnityEngine_Vector3_o *)&local_158,
                        (MethodInfo *)0x0);
    fVar13 = (bone->fields).stiffness / (float)(__this->fields).m_Iterations;
    if (fVar13 < 0.0) {
      fVar13 = 0.0;
    }
    else if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    local_168.fields.x =
         (((fVar12 - fVar18) + (pUVar6->fields).x) - local_168.fields.x) * fVar13 + local_168.fields.x;
    local_168.fields.y =
         (((fVar14 - fVar17) + (pUVar6->fields).y) - local_168.fields.y) * fVar13 + local_168.fields.y;
    local_168.fields.z =
         (((fVar16 - fVar19) + (pUVar6->fields).z) - local_168.fields.z) * fVar13 + local_168.fields.z;
    pEVar10 = (bone->fields).parentBone;
    if (pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180589e70;
    fVar12 = local_168.fields.x - (pEVar10->fields).worldPosition.fields.x;
    fVar14 = local_168.fields.y - (pEVar10->fields).worldPosition.fields.y;
    fVar16 = local_168.fields.z - (pEVar10->fields).worldPosition.fields.z;
    local_158.y = fVar14;
    local_158.x = fVar12;
    local_158.z = fVar16;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar18 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
    if (fVar18 <= 1e-05) {
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar12 = (pUVar3->zeroVector).fields.x;
      fVar14 = (pUVar3->zeroVector).fields.y;
      fVar16 = (pUVar3->zeroVector).fields.z;
    }
    else {
      fVar12 = fVar12 / fVar18;
      fVar14 = fVar14 / fVar18;
      fVar16 = fVar16 / fVar18;
    }
    pEVar10 = (bone->fields).parentBone;
    if ((pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar7 = (pEVar10->fields).transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_180589e70;
    local_148.x = (bone->fields).localPosition.fields.x;
    local_148.y = (bone->fields).localPosition.fields.y;
    local_148.z = (bone->fields).localPosition.fields.z;
    pUVar6 = UnityEngine_Transform__TransformVector
                       ((UnityEngine_Vector3_o *)local_138,pUVar7,(UnityEngine_Vector3_o *)&local_148,
                        (MethodInfo *)0x0);
    local_158.x = (pUVar6->fields).x;
    local_158.y = (pUVar6->fields).y;
    local_158.z = (pUVar6->fields).z;
    fVar18 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
    pEVar10 = (bone->fields).parentBone;
    if (pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180589e70;
    fVar17 = fVar12 * fVar18 + (pEVar10->fields).worldPosition.fields.x;
    fVar12 = fVar14 * fVar18 + (pEVar10->fields).worldPosition.fields.y;
    fVar14 = fVar16 * fVar18 + (pEVar10->fields).worldPosition.fields.z;
    iVar11 = 1;
    if ((__this->fields).m_SiblingConstraints != 0) {
      if ((bone->fields).leftBone != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        pEVar10 = (bone->fields).leftBone;
        fVar16 = local_168.fields.x - (pEVar10->fields).worldPosition.fields.x;
        fVar18 = local_168.fields.y - (pEVar10->fields).worldPosition.fields.y;
        fVar19 = local_168.fields.z - (pEVar10->fields).worldPosition.fields.z;
        local_158.y = fVar18;
        local_158.x = fVar16;
        local_158.z = fVar19;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
        if (fVar13 <= 1e-05) {
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar16 = (pUVar3->zeroVector).fields.x;
          fVar18 = (pUVar3->zeroVector).fields.y;
          fVar19 = (pUVar3->zeroVector).fields.z;
        }
        else {
          fVar16 = fVar16 / fVar13;
          fVar18 = fVar18 / fVar13;
          fVar19 = fVar19 / fVar13;
        }
        pUVar7 = (bone->fields).transform;
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_180589e70;
        local_148.x = (bone->fields).leftPosition.fields.x;
        local_148.y = (bone->fields).leftPosition.fields.y;
        local_148.z = (bone->fields).leftPosition.fields.z;
        pUVar6 = UnityEngine_Transform__TransformVector
                           ((UnityEngine_Vector3_o *)local_138,pUVar7,(UnityEngine_Vector3_o *)&local_148,
                            (MethodInfo *)0x0);
        local_158.x = (pUVar6->fields).x;
        local_158.y = (pUVar6->fields).y;
        local_158.z = (pUVar6->fields).z;
        fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
        pEVar10 = (bone->fields).leftBone;
        if (pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180589e70;
        fVar17 = fVar16 * fVar13 + (pEVar10->fields).worldPosition.fields.x + fVar17;
        fVar12 = fVar18 * fVar13 + (pEVar10->fields).worldPosition.fields.y + fVar12;
        fVar14 = fVar19 * fVar13 + (pEVar10->fields).worldPosition.fields.z + fVar14;
        iVar11 = 2;
      }
      if ((bone->fields).rightBone != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        pEVar10 = (bone->fields).rightBone;
        fVar16 = local_168.fields.x - (pEVar10->fields).worldPosition.fields.x;
        fVar18 = local_168.fields.y - (pEVar10->fields).worldPosition.fields.y;
        fVar19 = local_168.fields.z - (pEVar10->fields).worldPosition.fields.z;
        local_158.y = fVar18;
        local_158.x = fVar16;
        local_158.z = fVar19;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
        if (fVar13 <= 1e-05) {
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar16 = (pUVar3->zeroVector).fields.x;
          fVar18 = (pUVar3->zeroVector).fields.y;
          fVar19 = (pUVar3->zeroVector).fields.z;
        }
        else {
          fVar16 = fVar16 / fVar13;
          fVar18 = fVar18 / fVar13;
          fVar19 = fVar19 / fVar13;
        }
        pUVar7 = (bone->fields).transform;
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_180589e70;
        local_148.x = (bone->fields).rightPosition.fields.x;
        local_148.y = (bone->fields).rightPosition.fields.y;
        local_148.z = (bone->fields).rightPosition.fields.z;
        pUVar6 = UnityEngine_Transform__TransformVector
                           ((UnityEngine_Vector3_o *)local_138,pUVar7,(UnityEngine_Vector3_o *)&local_148,
                            (MethodInfo *)0x0);
        local_158.x = (pUVar6->fields).x;
        local_158.y = (pUVar6->fields).y;
        local_158.z = (pUVar6->fields).z;
        fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
        pEVar10 = (bone->fields).rightBone;
        if (pEVar10 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_180589e70;
        fVar17 = fVar16 * fVar13 + (pEVar10->fields).worldPosition.fields.x + fVar17;
        fVar12 = fVar18 * fVar13 + (pEVar10->fields).worldPosition.fields.y + fVar12;
        fVar14 = fVar19 * fVar13 + (pEVar10->fields).worldPosition.fields.z + fVar14;
        iVar11 = iVar11 + 1;
      }
    }
    fVar16 = (float)iVar11;
    fVar18 = (bone->fields).slackness / (float)(__this->fields).m_Iterations;
    if (fVar18 < 0.0) {
      fVar18 = 0.0;
    }
    else if (1.0 < fVar18) {
      fVar18 = 1.0;
    }
    local_168.fields.x = (local_168.fields.x - fVar17 / fVar16) * fVar18 + fVar17 / fVar16;
    local_168.fields.y = (local_168.fields.y - fVar12 / fVar16) * fVar18 + fVar12 / fVar16;
    local_168.fields.z = (local_168.fields.z - fVar14 / fVar16) * fVar18 + fVar14 / fVar16;
    fVar12 = local_114;
    fVar14 = local_110;
    fVar16 = local_10c;
    if (0.0 < (bone->fields).radius) {
      if ((TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase)
        ;
      }
      __this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                  TypeInfo_EZhex1991_EZSoftBone_EZSoftBoneColliderBase->static_fields->EnabledColliders;
      if (__this_01 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) goto label_180589e70;
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_138,__this_01,
                 (MethodInfo_175C200 *)
                 MethodInfo_System_Collections_Generic_HashSet_EZSoftBoneColliderBase_GetEnumerator);
      local_108 = (undefined1  [8])local_138._0_8_;
      pUStack_100 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138._8_8_;
      local_f8 = local_128;
      local_138._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_138._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_108;
      while (bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_108,
                                (MethodInfo_15381F0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_MoveNext
                               ), pUVar4 = local_f8, bVar5) {
        if (local_f8 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = (bone->fields).transform;
        pUVar9 = UnityEngine_Component__get_transform(local_f8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
        if (bVar5) {
          mask.fields.m_Mask = (UnityEngine_LayerMask_Fields)(__this->fields).m_CollisionLayers.fields.m_Mask;
          __this_04 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
          if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          layer = UnityEngine_GameObject__get_layer(__this_04,(MethodInfo *)0x0);
          bVar5 = EZhex1991_EZSoftBone_EZSoftBoneUtility__Contains(mask,layer,(MethodInfo *)0x0);
          if (bVar5) {
            (*((Il2CppClass *)pUVar4->klass)->vtable[4].methodPtr)(pUVar4,&local_168,(bone->fields).radius);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_108,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_EZSoftBoneColliderBase_Dispose);
      fVar16 = local_10c;
      fVar14 = local_110;
      fVar12 = local_114;
      __this_02 = (__this->fields).m_ExtraColliders;
      if (__this_02 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_180589e70;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_138,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
      local_f0 = (undefined1  [8])local_138._0_8_;
      pUStack_e8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138._8_8_;
      local_e0 = local_128;
      local_138._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_138._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f0;
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_f0,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
            pUVar4 = local_e0, bVar5) {
        if (local_e0 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = (bone->fields).transform;
        pUVar9 = UnityEngine_Component__get_transform(local_e0,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
        if ((bVar5) &&
           (bVar5 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)pUVar4,(MethodInfo *)0x0),
           bVar5)) {
          EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                    (&local_168,(UnityEngine_Collider_o *)pUVar4,(bone->fields).radius,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    }
    iVar11 = 0;
    (bone->fields).speed.fields.x =
         ((local_168.fields.x - fVar12) / deltaTime + (bone->fields).speed.fields.x) * 0.5;
    (bone->fields).speed.fields.y =
         ((local_168.fields.y - fVar14) / deltaTime + (bone->fields).speed.fields.y) * 0.5;
    (bone->fields).speed.fields.z =
         ((local_168.fields.z - fVar16) / deltaTime + (bone->fields).speed.fields.z) * 0.5;
    (bone->fields).worldPosition.fields.x = local_168.fields.x;
    (bone->fields).worldPosition.fields.y = local_168.fields.y;
    (bone->fields).worldPosition.fields.z = local_168.fields.z;
  }
  else {
    pUVar7 = (bone->fields).transform;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_180589e70;
    pUVar6 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_148,pUVar7,(MethodInfo *)0x0)
    ;
    fVar12 = (pUVar6->fields).z;
    fVar14 = (pUVar6->fields).y;
    (bone->fields).worldPosition.fields.x = (pUVar6->fields).x;
    (bone->fields).worldPosition.fields.y = fVar14;
    (bone->fields).worldPosition.fields.z = fVar12;
    iVar11 = 0;
  }
  while (__this_03 = (bone->fields).childBones,
        __this_03 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((__this_03->fields)._size <= iVar11) {
      return;
    }
    pEVar10 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
              System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)__this_03,iVar11,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    EZhex1991_EZSoftBone_EZSoftBone__UpdateBones(__this,pEVar10,deltaTime,(MethodInfo *)0x0);
    iVar11 = iVar11 + 1;
  }
label_180589e70:
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18058a3ac: jmp 0x18058a365

void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int index;
  
  if (Il2CppMethodInitialized_18433df35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item);
    Il2CppMethodInitialized_18433df35 = '\x01';
  }
  index = 0;
  pSVar1 = (__this->fields).m_Structures;
  while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    pSVar1 = (__this->fields).m_Structures;
    if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
       (__this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_get_Item),
       __this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) break;
    EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
              (__this_00,(__this->fields).m_SiblingRotationConstraints,(__this->fields).m_StartDepth,
               (MethodInfo *)0x0);
    index = index + 1;
    pSVar1 = (__this->fields).m_Structures;
  }
  ThrowNullReferenceException();
}


// EZhex1991.EZSoftBone.EZSoftBone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___ctor (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x18058a400

void EZhex1991_EZSoftBone_EZSoftBone___ctor(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_List_Collider__o *__this_00;
  UnityEngine_AnimationCurve_o *value;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (Il2CppMethodInitialized_18433df36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
    Il2CppMethodInitialized_18433df36 = '\x01';
  }
  (__this->fields).m_SiblingRotationConstraints = true;
  UVar1 = UnityEngine_LayerMask__op_Implicit(1,(MethodInfo *)0x0);
  (__this->fields).m_CollisionLayers.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields).m_ExtraColliders = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_ExtraColliders,__this_00);
  value = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_RadiusCurve = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_RadiusCurve,value);
  (__this->fields).m_ConstantDeltaTime = 0.03;
  (__this->fields).m_Iterations = 1;
  (__this->fields).m_SleepThreshold = 0.005;
  (__this->fields).m_ForceScale = 1.0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EZSoftBone_Bone);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_EZSoftBone_Bone_ctor);
  (__this->fields).m_Structures = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Structures,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___cctor (const MethodInfo* method);
// 0x18058a3c0

void EZhex1991_EZSoftBone_EZSoftBone___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18433df37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_EZhex1991_EZSoftBone_EZSoftBone);
    Il2CppMethodInitialized_18433df37 = '\x01';
  }
  TypeInfo_EZhex1991_EZSoftBone_EZSoftBone->static_fields->DeltaTime_Min = 1e-06;
  return;
}


