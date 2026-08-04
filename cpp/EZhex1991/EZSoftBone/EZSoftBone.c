// Type: EZhex1991.EZSoftBone.EZSoftBone
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBone.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBone.Bone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, UnityEngine_Transform_o* systemSpace, UnityEngine_Transform_o* transform, System_Collections_Generic_IEnumerable_Transform__o* endBones, int32_t startDepth, int32_t depth, float nodeLength, float boneLength, const MethodInfo* method);
// 0x2493a50

void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,UnityEngine_Transform_o *systemSpace,
               UnityEngine_Transform_o *transform,
               System_Collections_Generic_IEnumerable_Transform__o *endBones,int32_t startDepth,int32_t depth,
               float nodeLength,float boneLength,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  System_Object_array *pSVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar6;
  UnityEngine_Transform_o *pUVar7;
  long lVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar11;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar12;
  UnityEngine_GameObject_o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar13;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar14;
  char extraout_DL;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar15;
  int iVar16;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar17;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar18;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar19;
  uint uVar20;
  float fVar21;
  UnityEngine_Quaternion_Fields UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  MethodInfo *in_stack_ffffffffffffff68;
  float local_78;
  float fStack_74;
  
  if (g_data_057a691d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bone);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Bone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a691d = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_EZSoftBone_Bone__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Bone);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
  (__this->fields).childBones = pSVar11;
  il2cpp_runtime_helper_022b4080(&(__this->fields).childBones);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).transform = transform;
  il2cpp_runtime_helper_022b4080(&(__this->fields).transform,transform);
  pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(__this->fields).systemSpace;
  (__this->fields).systemSpace = systemSpace;
  pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)systemSpace;
  il2cpp_runtime_helper_022b4080();
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar23 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    (__this->fields).worldPosition.fields.x = (float)(int)UVar23.fields._0_8_;
    (__this->fields).worldPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
    (__this->fields).worldPosition.fields.z = UVar23.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
    pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)systemSpace;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)systemSpace,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar1 = &(__this->fields).worldPosition;
    fVar3 = (pUVar1->fields).x;
    fVar4 = (pUVar1->fields).y;
    fVar21 = (__this->fields).worldPosition.fields.z;
    if ((char)bVar9 != '\0') {
label_02493ba5:
      (__this->fields).systemPosition.fields.x = fVar3;
      (__this->fields).systemPosition.fields.y = fVar4;
      (__this->fields).systemPosition.fields.z = fVar21;
      UVar23 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
      (__this->fields).localPosition.fields.x = (float)(int)UVar23.fields._0_8_;
      (__this->fields).localPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
      (__this->fields).localPosition.fields.z = UVar23.fields.z;
      UVar22 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Transform__get_localRotation(transform,(MethodInfo *)0x0);
      (__this->fields).localRotation.fields = UVar22;
      (__this->fields).depth = depth;
      if (startDepth < depth) {
        fVar21 = nodeLength + boneLength;
        (__this->fields).boneLength = fVar21;
      }
      else {
        fVar21 = (__this->fields).boneLength;
      }
      fVar3 = (__this->fields).treeLength;
      if (fVar3 <= fVar21) {
        fVar3 = fVar21;
      }
      (__this->fields).treeLength = fVar3;
      iVar10 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
      if ((0 < iVar10) &&
         (bVar9 = System_Linq_Enumerable__Contains_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)endBones,
                             (Il2CppObject *)transform,MethodInfo_Boolean_Contains_Transform), (char)bVar9 == '\0')) {
        pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
        iVar10 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
        if (0 < iVar10) {
          do {
            iVar16 = (int)pEVar17;
            pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)transform;
            pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                      UnityEngine_Transform__GetChild(transform,iVar16,(MethodInfo *)0x0);
            if (pEVar12 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02493eb3;
            pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
            pEVar18 = pEVar12;
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pEVar12,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_02493eb3;
            bVar9 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              UVar23 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pEVar12,(MethodInfo *)0x0);
              UVar24 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              local_78 = UVar23.fields.x;
              fStack_74 = UVar23.fields.y;
              fStack_74 = fStack_74 - UVar24.fields.y;
              fVar21 = UVar23.fields.z - UVar24.fields.z;
              local_78 = local_78 - UVar24.fields.x;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar21 = local_78 * local_78 + fStack_74 * fStack_74 + fVar21 * fVar21;
              if (fVar21 < 0.0) {
                fVar21 = sqrtf(fVar21);
              }
              else {
                fVar21 = SQRT(fVar21);
              }
              fVar3 = (__this->fields).boneLength;
              pEVar13 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Bone);
              pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)systemSpace;
              pEVar18 = pEVar13;
              EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                        (pEVar13,systemSpace,(UnityEngine_Transform_o *)pEVar12,endBones,startDepth,depth + 1,
                         fVar21,fVar3,in_stack_ffffffffffffff68);
              if (pEVar13 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02493eb3;
              (pEVar13->fields).parentBone = __this;
              pEVar17 = __this;
              il2cpp_runtime_helper_022b4080(&pEVar13->fields);
              lVar8 = MethodInfo_Void_Add;
              pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(__this->fields).childBones;
              if (pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02493eb3;
              pfVar2 = &(pEVar18->fields).localPosition.fields.y;
              *pfVar2 = (float)((int)*pfVar2 + 1);
              pSVar5 = (System_Object_array *)(pEVar18->fields).parentBone;
              if (pSVar5 == (System_Object_array *)0x0) goto label_02493eb3;
              fVar21 = (pEVar18->fields).localPosition.fields.x;
              if ((uint)fVar21 < (uint)*(float *)&pSVar5->max_length) {
                (pEVar18->fields).localPosition.fields.x = (float)((int)fVar21 + 1);
                pSVar5->m_Items[(int)fVar21] = (Il2CppObject *)pEVar13;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)fVar21);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pEVar18,(Il2CppObject *)pEVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              fVar21 = (__this->fields).treeLength;
              fVar3 = (pEVar13->fields).treeLength;
              if (fVar21 <= fVar3) {
                fVar21 = fVar3;
              }
              (__this->fields).treeLength = fVar21;
            }
            uVar20 = iVar16 + 1;
            pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(ulong)uVar20;
            iVar10 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
          } while ((int)uVar20 < iVar10);
        }
      }
      fVar21 = (__this->fields).treeLength;
      fVar3 = 0.0;
      if ((fVar21 != 0.0) || (NAN(fVar21))) {
        fVar3 = (__this->fields).boneLength / fVar21;
      }
      (__this->fields).normalizedLength = fVar3;
      return;
    }
    if (systemSpace != (UnityEngine_Transform_o *)0x0) {
      UVar23 = UnityEngine_Transform__InverseTransformPoint(systemSpace,pUVar1->fields,(MethodInfo *)0x0);
      fVar21 = UVar23.fields.z;
      fVar3 = UVar23.fields.x;
      fVar4 = UVar23.fields.y;
      goto label_02493ba5;
    }
  }
label_02493eb3:
  il2cpp_runtime_helper_022b2c90();
  pEVar12 = pEVar17;
  if (g_data_057a6915 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_Dequeue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6915 = '\x01';
  }
  if ((pEVar17 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) &&
     (pEVar12 = MethodInfo_EZSoftBone_Bone_Dequeue, pEVar18 = pEVar17,
     pEVar13 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
               System_Collections_Generic_Queue_object___Dequeue
                         ((System_Collections_Generic_Queue_T__o *)pEVar17,(MethodInfo_38E5900 *)MethodInfo_EZSoftBone_Bone_Dequeue)
     , pEVar13 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) {
    pSVar11 = (pEVar13->fields).childBones;
    pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
    if (pSVar11 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar16 = 0;
      do {
        if ((pSVar11->fields)._size <= iVar16) {
          pEVar19 = pEVar13;
          if ((int)(pEVar17->fields).localPosition.fields.z < 1) {
            return;
          }
          goto label_02493fe1;
        }
        pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar11,iVar16,MethodInfo_EZSoftBone_Bone_get_Item);
        System_Collections_Generic_Queue_object___Enqueue
                  ((System_Collections_Generic_Queue_T__o *)pEVar17,(Il2CppObject *)pEVar12,MethodInfo_Void_Enqueue);
        iVar16 = iVar16 + 1;
        pSVar11 = (pEVar13->fields).childBones;
      } while (pSVar11 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
      pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
    }
  }
  goto label_02494275;
label_02493fe1:
  do {
    pEVar12 = MethodInfo_EZSoftBone_Bone_Dequeue;
    pEVar18 = pEVar17;
    pEVar14 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
              System_Collections_Generic_Queue_object___Dequeue
                        ((System_Collections_Generic_Queue_T__o *)pEVar17,(MethodInfo_38E5900 *)MethodInfo_EZSoftBone_Bone_Dequeue);
    if ((pEVar14 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(pEVar14->fields).childBones,
       pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) goto label_02494275;
    iVar16 = 0;
    while (iVar16 < (int)(pEVar18->fields).localPosition.fields.x) {
      pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pEVar18,iVar16,MethodInfo_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)pEVar17,(Il2CppObject *)pEVar12,MethodInfo_Void_Enqueue);
      iVar16 = iVar16 + 1;
      pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(pEVar14->fields).childBones;
      if (pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02494275;
    }
    if ((pEVar19->fields).depth == (pEVar14->fields).depth) {
      pEVar15 = pEVar13;
      if (pEVar19 == pEVar14) goto label_02493fd3;
      if (pEVar14 != (pEVar19->fields).leftBone) {
        (pEVar19->fields).rightBone = pEVar14;
        pEVar12 = pEVar14;
        il2cpp_runtime_helper_022b4080(&(pEVar19->fields).rightBone);
        pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(pEVar19->fields).transform;
        if (pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02494275;
        pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
        UVar23 = UnityEngine_Transform__InverseTransformPoint
                           ((UnityEngine_Transform_o *)pEVar18,(pEVar14->fields).worldPosition.fields,
                            (MethodInfo *)0x0);
        (pEVar19->fields).rightPosition.fields.x = (float)(int)UVar23.fields._0_8_;
        (pEVar19->fields).rightPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
        (pEVar19->fields).rightPosition.fields.z = UVar23.fields.z;
      }
      if (pEVar19 == (pEVar14->fields).rightBone) goto label_02493fd3;
      (pEVar14->fields).leftBone = pEVar19;
      pEVar12 = pEVar19;
      il2cpp_runtime_helper_022b4080(&(pEVar14->fields).leftBone);
      pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(pEVar14->fields).transform;
      if (pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02494275;
      pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
      UVar23 = UnityEngine_Transform__InverseTransformPoint
                         ((UnityEngine_Transform_o *)pEVar18,(pEVar19->fields).worldPosition.fields,
                          (MethodInfo *)0x0);
      (pEVar14->fields).leftPosition.fields.x = (float)(int)UVar23.fields._0_8_;
      (pEVar14->fields).leftPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
      (pEVar14->fields).leftPosition.fields.z = UVar23.fields.z;
      iVar16 = (int)(pEVar17->fields).localPosition.fields.z;
    }
    else {
      pEVar15 = pEVar14;
      if (extraout_DL != '\0') {
        if ((pEVar13 == pEVar19) || (pEVar13 == (pEVar19->fields).leftBone)) {
          if (pEVar13 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02494275;
          if (pEVar13 == pEVar19) goto label_02493fd3;
          pEVar6 = (pEVar13->fields).rightBone;
        }
        else {
          pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(pEVar19->fields).rightBone;
          (pEVar19->fields).rightBone = pEVar13;
          pEVar12 = pEVar13;
          il2cpp_runtime_helper_022b4080();
          if ((pEVar13 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
             (pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(pEVar19->fields).transform,
             pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)) goto label_02494275;
          pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
          UVar23 = UnityEngine_Transform__InverseTransformPoint
                             ((UnityEngine_Transform_o *)pEVar18,(pEVar13->fields).worldPosition.fields,
                              (MethodInfo *)0x0);
          (pEVar19->fields).rightPosition.fields.x = (float)(int)UVar23.fields._0_8_;
          (pEVar19->fields).rightPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
          (pEVar19->fields).rightPosition.fields.z = UVar23.fields.z;
          pEVar6 = (pEVar13->fields).rightBone;
        }
        if (pEVar19 != pEVar6) {
          (pEVar13->fields).leftBone = pEVar19;
          pEVar12 = pEVar19;
          il2cpp_runtime_helper_022b4080(&(pEVar13->fields).leftBone);
          pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)(pEVar13->fields).transform;
          if (pEVar18 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02494275;
          pEVar12 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
          UVar23 = UnityEngine_Transform__InverseTransformPoint
                             ((UnityEngine_Transform_o *)pEVar18,(pEVar19->fields).worldPosition.fields,
                              (MethodInfo *)0x0);
          (pEVar13->fields).leftPosition.fields.x = (float)(int)UVar23.fields._0_8_;
          (pEVar13->fields).leftPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
          (pEVar13->fields).leftPosition.fields.z = UVar23.fields.z;
        }
      }
label_02493fd3:
      iVar16 = (int)(pEVar17->fields).localPosition.fields.z;
      pEVar13 = pEVar15;
    }
    pEVar19 = pEVar14;
  } while (0 < iVar16);
  if (extraout_DL == '\0') {
    return;
  }
  if (pEVar13 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
    if (pEVar13 == pEVar14) {
      return;
    }
    if (pEVar14 != (pEVar13->fields).rightBone) {
      (pEVar13->fields).leftBone = pEVar14;
      pEVar12 = pEVar14;
      il2cpp_runtime_helper_022b4080(&(pEVar13->fields).leftBone);
      pUVar7 = (pEVar13->fields).transform;
      pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_02494275;
      UVar23 = UnityEngine_Transform__InverseTransformPoint
                         (pUVar7,(pEVar14->fields).worldPosition.fields,(MethodInfo *)0x0);
      (pEVar13->fields).leftPosition.fields.x = (float)(int)UVar23.fields._0_8_;
      (pEVar13->fields).leftPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
      (pEVar13->fields).leftPosition.fields.z = UVar23.fields.z;
    }
    if (pEVar13 == (pEVar14->fields).leftBone) {
      return;
    }
    (pEVar14->fields).rightBone = pEVar13;
    pEVar12 = pEVar13;
    il2cpp_runtime_helper_022b4080(&(pEVar14->fields).rightBone);
    pUVar7 = (pEVar14->fields).transform;
    pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UVar23 = UnityEngine_Transform__InverseTransformPoint
                         (pUVar7,(pEVar13->fields).worldPosition.fields,(MethodInfo *)0x0);
      (pEVar14->fields).rightPosition.fields.x = (float)(int)UVar23.fields._0_8_;
      (pEVar14->fields).rightPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
      (pEVar14->fields).rightPosition.fields.z = UVar23.fields.z;
      return;
    }
  }
label_02494275:
  il2cpp_runtime_helper_022b2c90();
  if ((pEVar12 == pEVar18) || (pEVar12 == (pEVar18->fields).leftBone)) {
    return;
  }
  pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(pEVar18->fields).rightBone;
  (pEVar18->fields).rightBone = pEVar12;
  pEVar13 = pEVar12;
  il2cpp_runtime_helper_022b4080();
  if (pEVar12 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
    pUVar7 = (pEVar18->fields).transform;
    pEVar17 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UVar23 = UnityEngine_Transform__InverseTransformPoint
                         (pUVar7,(pEVar12->fields).worldPosition.fields,(MethodInfo *)0x0);
      (pEVar18->fields).rightPosition.fields.x = (float)(int)UVar23.fields._0_8_;
      (pEVar18->fields).rightPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
      (pEVar18->fields).rightPosition.fields.z = UVar23.fields.z;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pEVar13 != pEVar17) && (pEVar13 != (pEVar17->fields).rightBone)) {
    pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(pEVar17->fields).leftBone;
    (pEVar17->fields).leftBone = pEVar13;
    pEVar12 = pEVar13;
    il2cpp_runtime_helper_022b4080();
    if (pEVar13 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
      pUVar7 = (pEVar17->fields).transform;
      pEVar18 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UVar23 = UnityEngine_Transform__InverseTransformPoint
                           (pUVar7,(pEVar13->fields).worldPosition.fields,(MethodInfo *)0x0);
        (pEVar17->fields).leftPosition.fields.x = (float)(int)UVar23.fields._0_8_;
        (pEVar17->fields).leftPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
        (pEVar17->fields).leftPosition.fields.z = UVar23.fields.z;
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
              (pEVar18,(pEVar18->fields).treeLength,(MethodInfo *)pEVar12);
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x2494340

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350(__this,(__this->fields).treeLength,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float treeLength, const MethodInfo* method);
// 0x2494350

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float treeLength,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  float fVar1;
  
  if (g_data_057a691e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a691e = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350(__this_00,treeLength,method_00);
      index = index + 1;
      __this_01 = (__this->fields).childBones;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetLeftSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* left, const MethodInfo* method);
// 0x24942e0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *left,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *method_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  UnityEngine_Vector3_Fields UVar1;
  
  if ((left != __this) && (left != (__this->fields).rightBone)) {
    __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(__this->fields).leftBone;
    (__this->fields).leftBone = left;
    method_00 = left;
    il2cpp_runtime_helper_022b4080();
    if ((left == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0,
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
                (__this_01,(__this_01->fields).treeLength,(MethodInfo *)method_00);
      return;
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
// 0x2494280

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *right,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *method_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar3;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  UnityEngine_Vector3_Fields UVar4;
  
  if ((right != __this) && (right != (__this->fields).leftBone)) {
    pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(__this->fields).rightBone;
    (__this->fields).rightBone = right;
    pEVar2 = right;
    il2cpp_runtime_helper_022b4080();
    if ((right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar1 = (__this->fields).transform, pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0,
       pUVar1 == (UnityEngine_Transform_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      if ((pEVar2 != pEVar3) && (pEVar2 != (pEVar3->fields).rightBone)) {
        __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)&(pEVar3->fields).leftBone;
        (pEVar3->fields).leftBone = pEVar2;
        method_00 = pEVar2;
        il2cpp_runtime_helper_022b4080();
        if ((pEVar2 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
           (pUVar1 = (pEVar3->fields).transform, __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0,
           pUVar1 == (UnityEngine_Transform_o *)0x0)) {
          il2cpp_runtime_helper_022b2c90();
          EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
                    (__this_00,(__this_00->fields).treeLength,(MethodInfo *)method_00);
          return;
        }
        UVar4 = (UnityEngine_Vector3_Fields)
                UnityEngine_Transform__InverseTransformPoint
                          (pUVar1,(UnityEngine_Vector3_o)(pEVar2->fields).worldPosition.fields,
                           (MethodInfo *)0x0);
        (pEVar3->fields).leftPosition.fields = UVar4;
      }
      return;
    }
    UVar4 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__InverseTransformPoint
                      (pUVar1,(UnityEngine_Vector3_o)(right->fields).worldPosition.fields,(MethodInfo *)0x0);
    (__this->fields).rightPosition.fields = UVar4;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, const MethodInfo* method);
// 0x2494430

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  MethodInfo *method_00;
  int index;
  float fVar1;
  
  if (g_data_057a691f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a691f = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate(__this_01,baseRadius,radiusCurve,method_00);
      index = index + 1;
      __this_00 = (__this->fields).childBones;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* material, const MethodInfo* method);
// 0x2494500

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_2394500
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
  
  if (g_data_057a6920 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6920 = '\x01';
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
                                    ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_EZSoftBone_Bone_get_Item
                                    );
              if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
              EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_2394500
                        (__this_01,baseRadius,radiusCurve,material,method);
              index = index + 1;
              __this_00 = (__this->fields).childBones;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x24931b0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,int32_t startDepth,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (g_data_057a6921 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6921 = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_0249326b;
    UnityEngine_Transform__set_localPosition
              (pUVar1,(UnityEngine_Vector3_o)(__this->fields).localPosition.fields,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_0249326b;
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
                            ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,method_00);
      index = index + 1;
      __this_01 = (__this->fields).childBones;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
label_0249326b:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateTransform
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, bool siblingRotationConstraints, int32_t startDepth, const MethodInfo* method);
// 0x2495e30

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,bool_conflict siblingRotationConstraints,
               int32_t startDepth,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar17;
  bool_conflict bVar18;
  Il2CppObject *pIVar19;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar20;
  int index;
  UnityEngine_Transform_o *pUVar21;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Quaternion_o UVar27;
  UnityEngine_Quaternion_o UVar28;
  UnityEngine_Quaternion_o UVar29;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o vector;
  UnityEngine_Vector3_o vector_00;
  UnityEngine_Vector3_o fromDirection;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_58;
  float fStack_54;
  
  if (g_data_057a6922 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6922 = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pSVar22 = (__this->fields).childBones;
    if (pSVar22 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_0249643d;
    if ((pSVar22->fields)._size == 1) {
      pIVar19 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar22,0,MethodInfo_EZSoftBone_Bone_get_Item);
      pUVar21 = (__this->fields).transform;
      if (((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
          (UVar27 = UnityEngine_Transform__get_rotation(pUVar21,(MethodInfo *)0x0),
          pIVar19 == (Il2CppObject *)0x0)) ||
         (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_0249643d;
      uVar2 = (__this->fields).worldPosition.fields.x;
      uVar10 = (__this->fields).worldPosition.fields.y;
      UVar30.fields.x = SUB84(pIVar19[7].monitor,0) - (float)uVar2;
      UVar30.fields.y = (float)((ulong)pIVar19[7].monitor >> 0x20) - (float)uVar10;
      UVar30.fields.z = *(float *)&pIVar19[8].klass - (__this->fields).worldPosition.fields.z;
      UVar31.fields = *(UnityEngine_Vector3_Fields *)&pIVar19[1].monitor;
      UVar30 = UnityEngine_Transform__InverseTransformVector(__this_00,UVar30,(MethodInfo *)0x0);
      UVar28 = UnityEngine_Quaternion__FromToRotation(UVar31,UVar30,(MethodInfo *)0x0);
      UVar31.fields.y = UVar28.fields.z;
      UVar31.fields.z = UVar28.fields.w;
      fVar24 = UVar28.fields.x;
      UVar31.fields.x = UVar28.fields.y;
      local_98 = UVar27.fields.z;
      fStack_94 = UVar27.fields.w;
      local_88 = UVar27.fields.x;
      fStack_84 = UVar27.fields.y;
      UVar27.fields.y =
           (local_98 * fVar24 + fStack_84 * UVar31.fields.z + fStack_94 * UVar31.fields.x) -
           UVar31.fields.y * local_88;
      UVar27.fields.x =
           (fStack_84 * UVar31.fields.y + local_88 * UVar31.fields.z + fStack_94 * fVar24) -
           UVar31.fields.x * local_98;
      UVar27.fields.w =
           ((UVar31.fields.z * fStack_94 - fVar24 * local_88) - UVar31.fields.x * fStack_84) -
           UVar31.fields.y * local_98;
      UVar27.fields.z =
           (local_88 * UVar31.fields.x + local_98 * UVar31.fields.z + fStack_94 * UVar31.fields.y) -
           fStack_84 * fVar24;
      UnityEngine_Transform__set_rotation(pUVar21,UVar27,(MethodInfo *)0x0);
      if ((char)siblingRotationConstraints != '\0') {
        method = (MethodInfo *)(__this->fields).leftBone;
        pEVar20 = (__this->fields).rightBone;
        if ((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0)
        {
          if (pEVar20 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
            pUVar21 = (__this->fields).transform;
            if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
            uVar7 = (__this->fields).worldPosition.fields.x;
            uVar15 = (__this->fields).worldPosition.fields.y;
            uVar8 = (pEVar20->fields).worldPosition.fields.x;
            uVar16 = (pEVar20->fields).worldPosition.fields.y;
            UVar31.fields.x = (float)uVar8 - (float)uVar7;
            UVar31.fields.y = (float)uVar16 - (float)uVar15;
            UVar31.fields.z =
                 (pEVar20->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
            fVar24 = (__this->fields).rightPosition.fields.z;
            uVar9._0_4_ = (__this->fields).rightPosition.fields.x;
            uVar9._4_4_ = (__this->fields).rightPosition.fields.y;
            goto label_02496261;
          }
        }
        else {
          pUVar1 = &(__this->fields).leftPosition;
          uVar9._0_4_ = (pUVar1->fields).x;
          uVar9._4_4_ = (pUVar1->fields).y;
          fVar24 = (__this->fields).leftPosition.fields.z;
          UVar17 = pUVar1->fields;
          uVar3 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.x;
          uVar11 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.y;
          pUVar21 = (__this->fields).transform;
          uVar4 = (__this->fields).worldPosition.fields.x;
          uVar12 = (__this->fields).worldPosition.fields.y;
          UVar31.fields.x = (float)uVar3 - (float)uVar4;
          UVar31.fields.y = (float)uVar11 - (float)uVar12;
          UVar31.fields.z =
               (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.z -
               (__this->fields).worldPosition.fields.z;
          if (pEVar20 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
            if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
label_02496261:
            vector_00.fields.y = UVar31.fields.y;
            vector_00.fields.x = UVar31.fields.x;
            vector_00.fields.z = UVar31.fields.z;
            UVar31 = UnityEngine_Transform__InverseTransformVector(pUVar21,vector_00,(MethodInfo *)0x0);
            fromDirection.fields.z = fVar24;
            fromDirection.fields.x = (float)(int)uVar9;
            fromDirection.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
            UVar27 = UnityEngine_Quaternion__FromToRotation(fromDirection,UVar31,(MethodInfo *)0x0);
            pUVar21 = (__this->fields).transform;
            if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
            UVar28 = UnityEngine_Transform__get_rotation(pUVar21,(MethodInfo *)0x0);
            fVar23 = UVar28.fields.z;
            fVar25 = UVar28.fields.w;
            fVar24 = UVar28.fields.x;
            UVar31.fields.y = UVar28.fields.y;
            local_98 = UVar27.fields.z;
            fStack_94 = UVar27.fields.w;
            local_88 = UVar27.fields.x;
            fStack_84 = UVar27.fields.y;
            UVar31.fields.x =
                 (local_98 * UVar31.fields.y + fStack_94 * fVar24 + local_88 * fVar25) - fVar23 * fStack_84;
            UVar31.fields.z =
                 (local_88 * fVar23 + fStack_94 * UVar31.fields.y + fStack_84 * fVar25) - fVar24 * local_98;
            fVar26 = (fStack_84 * fVar24 + fStack_94 * fVar23 + local_98 * fVar25) -
                     local_88 * UVar31.fields.y;
            fVar24 = ((fStack_94 * fVar25 - fVar24 * local_88) - fStack_84 * UVar31.fields.y) -
                     fVar23 * local_98;
          }
          else {
            if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
            UVar31 = UnityEngine_Transform__InverseTransformVector(pUVar21,UVar31,(MethodInfo *)0x0);
            UVar27 = UnityEngine_Quaternion__FromToRotation
                               ((UnityEngine_Vector3_o)UVar17,UVar31,(MethodInfo *)0x0);
            pEVar20 = (__this->fields).rightBone;
            if ((pEVar20 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
               (pUVar21 = (__this->fields).transform, pUVar21 == (UnityEngine_Transform_o *)0x0))
            goto label_0249643d;
            UVar17 = (__this->fields).rightPosition.fields;
            uVar5 = (__this->fields).worldPosition.fields.x;
            uVar13 = (__this->fields).worldPosition.fields.y;
            uVar6 = (pEVar20->fields).worldPosition.fields.x;
            uVar14 = (pEVar20->fields).worldPosition.fields.y;
            vector.fields.x = (float)uVar6 - (float)uVar5;
            vector.fields.y = (float)uVar14 - (float)uVar13;
            vector.fields.z =
                 (pEVar20->fields).worldPosition.fields.z - (__this->fields).worldPosition.fields.z;
            UVar31 = UnityEngine_Transform__InverseTransformVector(pUVar21,vector,(MethodInfo *)0x0);
            UVar28 = UnityEngine_Quaternion__FromToRotation
                               ((UnityEngine_Vector3_o)UVar17,UVar31,(MethodInfo *)0x0);
            pUVar21 = (__this->fields).transform;
            if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
            UVar29 = UnityEngine_Transform__get_rotation(pUVar21,(MethodInfo *)0x0);
            UVar27 = UnityEngine_Quaternion__Lerp(UVar27,UVar28,0.5,(MethodInfo *)0x0);
            fVar23 = UVar27.fields.z;
            fVar25 = UVar27.fields.w;
            fVar24 = UVar27.fields.x;
            UVar31.fields.y = UVar27.fields.y;
            local_58 = UVar29.fields.z;
            fStack_54 = UVar29.fields.w;
            local_98 = UVar29.fields.x;
            fStack_94 = UVar29.fields.y;
            UVar31.fields.x =
                 (local_98 * fVar25 + fStack_54 * fVar24 + fVar23 * fStack_94) - UVar31.fields.y * local_58;
            UVar31.fields.z =
                 (fStack_94 * fVar25 + fStack_54 * UVar31.fields.y + fVar24 * local_58) - fVar23 * local_98;
            fVar26 = (local_58 * fVar25 + fStack_54 * fVar23 + local_98 * UVar31.fields.y) -
                     fStack_94 * fVar24;
            fVar24 = ((fVar25 * fStack_54 - local_98 * fVar24) - UVar31.fields.y * fStack_94) -
                     local_58 * fVar23;
          }
          UVar28.fields.y = UVar31.fields.z;
          UVar28.fields.x = UVar31.fields.x;
          UVar28.fields.w = fVar24;
          UVar28.fields.z = fVar26;
          UnityEngine_Transform__set_rotation(pUVar21,UVar28,(MethodInfo *)0x0);
        }
      }
    }
    pUVar21 = (__this->fields).transform;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
    UnityEngine_Transform__set_position
              (pUVar21,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,(MethodInfo *)0x0);
  }
  pUVar21 = (__this->fields).systemSpace;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar18 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar18 != '\0') {
    pUVar21 = (__this->fields).systemSpace;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0249643d;
    UVar31 = UnityEngine_Transform__InverseTransformPoint
                       (pUVar21,(__this->fields).worldPosition.fields,(MethodInfo *)0x0);
    (__this->fields).systemPosition.fields.x = (float)(int)UVar31.fields._0_8_;
    (__this->fields).systemPosition.fields.y = (float)(int)((ulong)UVar31.fields._0_8_ >> 0x20);
    (__this->fields).systemPosition.fields.z = UVar31.fields.z;
  }
  pSVar22 = (__this->fields).childBones;
  if (pSVar22 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((pSVar22->fields)._size <= index) {
        return;
      }
      pEVar20 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar22,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (pEVar20 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
                (pEVar20,siblingRotationConstraints & 0xff,startDepth,method);
      index = index + 1;
      pSVar22 = (__this->fields).childBones;
    } while (pSVar22 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
label_0249643d:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x24938c0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined8 uVar3;
  float fVar4;
  bool_conflict bVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  UnityEngine_Vector3_Fields UVar6;
  
  if (g_data_057a6923 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6923 = '\x01';
  }
  pUVar2 = (__this->fields).transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    (__this->fields).worldPosition.fields = UVar6;
    pUVar2 = (__this->fields).systemSpace;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar2 = (__this->fields).systemSpace;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_02493a38;
      UVar6 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__InverseTransformPoint
                        (pUVar2,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,(MethodInfo *)0x0
                        );
      (__this->fields).systemPosition.fields = UVar6;
    }
    else {
      fVar4 = (__this->fields).worldPosition.fields.y;
      fVar1 = (__this->fields).worldPosition.fields.z;
      (__this->fields).systemPosition.fields.x = (__this->fields).worldPosition.fields.x;
      (__this->fields).systemPosition.fields.y = fVar4;
      (__this->fields).systemPosition.fields.z = fVar1;
    }
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).speed.fields.x = (float)(int)uVar3;
    (__this->fields).speed.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
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
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
        if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
        index = index + 1;
        __this_01 = (__this->fields).childBones;
      } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
label_02493a38:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x24946d0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  bool_conflict bVar2;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  uint index;
  MethodInfo *method_00;
  UnityEngine_Vector3_Fields UVar3;
  
  if (g_data_057a6924 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6924 = '\x01';
  }
  pUVar1 = (__this->fields).systemSpace;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (__this->fields).systemSpace;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      index = 0;
      UVar3 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__TransformPoint
                        (pUVar1,(UnityEngine_Vector3_o)(__this->fields).systemPosition.fields,
                         (MethodInfo *)0x0);
      (__this->fields).worldPosition.fields = UVar3;
      __this_00 = (__this->fields).childBones;
      while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
        if ((__this_00->fields)._size <= (int)index) {
          return;
        }
        method_00 = (MethodInfo *)(ulong)index;
        __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_EZSoftBone_Bone_get_Item);
        if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(__this_01,method_00);
        index = index + 1;
        __this_00 = (__this->fields).childBones;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_rootBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_rootBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24923a0

System_Collections_Generic_List_Transform__o *
EZhex1991_EZSoftBone_EZSoftBone__get_rootBones(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_RootBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_endBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_endBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24923b0

System_Collections_Generic_List_Transform__o *
EZhex1991_EZSoftBone_EZSoftBone__get_endBones(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_EndBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sharedMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24923c0

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar3;
  MethodInfo *method_00;
  
  if (g_data_057a690f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a690f = '\x01';
  }
  method_00 = (MethodInfo *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppEVar3 = &(__this->fields).m_Material;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pEVar2 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(method_00);
    *ppEVar3 = pEVar2;
    il2cpp_runtime_helper_022b4080(ppEVar3,pEVar2);
  }
  return *ppEVar3;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sharedMaterial
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x2492530

void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,
               MethodInfo *method)

{
  (__this->fields).m_Material = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_Material);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_material
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492540

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_material(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar1;
  bool_conflict bVar2;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar3;
  MethodInfo *method_00;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar4;
  
  if (g_data_057a6910 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBoneMaterial_Instantiate_EZSoftBoneMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6910 = '\x01';
  }
  pEVar3 = (__this->fields).m_InstanceMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppEVar1 = &(__this->fields).m_InstanceMaterial;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pEVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (g_data_057a690f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a690f = '\x01';
    }
    method_00 = (MethodInfo *)(__this->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppEVar4 = &(__this->fields).m_Material;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pEVar3 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(method_00);
      *ppEVar4 = pEVar3;
      il2cpp_runtime_helper_022b4080(ppEVar4,pEVar3);
    }
    pEVar3 = *ppEVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pEVar3 = (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)
             UnityEngine_Object__Instantiate_object_((Il2CppObject *)pEVar3,MethodInfo_EZSoftBoneMaterial_Instantiate_EZSoftBoneMaterial);
    *ppEVar4 = pEVar3;
    il2cpp_runtime_helper_022b4080(ppEVar4,pEVar3);
    *ppEVar1 = pEVar3;
    il2cpp_runtime_helper_022b4080(ppEVar1,pEVar3);
  }
  return *ppEVar1;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_material
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x2492660

void EZhex1991_EZSoftBone_EZSoftBone__set_material
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,
               MethodInfo *method)

{
  (__this->fields).m_Material = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_Material);
  (__this->fields).m_InstanceMaterial = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_InstanceMaterial,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_startDepth
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24926a0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_StartDepth;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_startDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24926b0

void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_StartDepth = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingConstraints
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24926c0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24926d0

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_SiblingConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_closedSiblings
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24926e0

bool_conflict
EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_ClosedSiblings);
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_closedSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x24926f0

void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).m_ClosedSiblings = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingRotationConstraints
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492700

bool_conflict
EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields).m_ClosedSiblings + 1));
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingRotationConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x2492710

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields).m_ClosedSiblings + 1) = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_lengthUnification
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492720

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingRotationConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_lengthUnification
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x2492730

void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_SiblingRotationConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_collisionLayers
// il2cpp: UnityEngine_LayerMask_o EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492740

UnityEngine_LayerMask_o
EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)(__this->fields).m_LengthUnification;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_collisionLayers
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_LayerMask_o value, const MethodInfo* method);
// 0x2492750

void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_LayerMask_o value,MethodInfo *method)

{
  (__this->fields).m_LengthUnification = (int32_t)value.fields.m_Mask;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_extraColliders
// il2cpp: System_Collections_Generic_List_Collider__o* EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492760

System_Collections_Generic_List_Collider__o *
EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ExtraColliders;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492770

float EZhex1991_EZSoftBone_EZSoftBone__get_radius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Radius;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_radius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x2492780

void EZhex1991_EZSoftBone_EZSoftBone__set_radius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Radius = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radiusCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492790

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_RadiusCurve;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_deltaTimeMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24927a0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DeltaTimeMode;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_deltaTimeMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24927b0

void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_DeltaTimeMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_constantDeltaTime
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24927c0

float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ConstantDeltaTime;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_constantDeltaTime
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x24927d0

void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ConstantDeltaTime = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_iterations
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24927e0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Iterations;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_iterations
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24927f0

void EZhex1991_EZSoftBone_EZSoftBone__set_iterations
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_Iterations = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sleepThreshold
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492800

float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SleepThreshold;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sleepThreshold
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x2492810

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
// 0x2492820

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_gravityAligner
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_GravityAligner;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravityAligner
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x2492830

void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,MethodInfo *method)

{
  (__this->fields).m_GravityAligner = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_GravityAligner);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_gravity
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492840

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBone__get_gravity(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Gravity.fields;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x2492860

void EZhex1991_EZSoftBone_EZSoftBone__set_gravity
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields).m_Gravity.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).m_Gravity.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).m_Gravity.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceModule
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForceField_o* EZhex1991_EZSoftBone_EZSoftBone__get_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492870

EZhex1991_EZSoftBone_EZSoftBoneForceField_o *
EZhex1991_EZSoftBone_EZSoftBone__get_forceModule(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceModule;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceModule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForceField_o* value, const MethodInfo* method);
// 0x2492880

void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBoneForceField_o *value,
               MethodInfo *method)

{
  (__this->fields).m_ForceModule = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_ForceModule);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceScale
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24928a0

float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceScale;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceScale
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x24928b0

void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ForceScale = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_simulateSpace
// il2cpp: UnityEngine_Transform_o* EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24928c0

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SimulateSpace;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_simulateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x24928d0

void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,MethodInfo *method)

{
  (__this->fields).m_SimulateSpace = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_SimulateSpace);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalRadius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24928f0

float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields)._globalRadius_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x2492900

void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._globalRadius_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalForce
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492910

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBone__get_globalForce(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._globalForce_k__BackingField.fields;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalForce
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x2492930

void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields)._globalForce_k__BackingField.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields)._globalForce_k__BackingField.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields)._globalForce_k__BackingField.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Start
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Start (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492940

void EZhex1991_EZSoftBone_EZSoftBone__Start(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_02;
  MethodInfo *method_00;
  int index;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  
  EZhex1991_EZSoftBone_EZSoftBone__CreateBones(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblings(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength(__this,method);
  if (g_data_057a6917 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6917 = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (__this_02,(__this->fields)._globalRadius_k__BackingField,(__this->fields).m_RadiusCurve,
                 method_00);
      index = index + 1;
      __this_00 = (__this->fields).m_Structures;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnEnable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24929a0

void EZhex1991_EZSoftBone_EZSoftBone__OnEnable(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (g_data_057a6912 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6912 = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Update (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492a40

void EZhex1991_EZSoftBone_EZSoftBone__Update(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_2392a50(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$LateUpdate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492ae0

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
    if (iVar1 != 0) goto label_02492b14;
    deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  }
  EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures(__this,deltaTime,method);
label_02492b14:
  EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnDisable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2493190

void EZhex1991_EZSoftBone_EZSoftBone__OnDisable(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_2392a50(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24931a0

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_2392a50(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x2492a50

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms_2392a50
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t startDepth,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (g_data_057a6911 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6911 = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$InitStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__InitStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2492970

void EZhex1991_EZSoftBone_EZSoftBone__InitStructures
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
  
  EZhex1991_EZSoftBone_EZSoftBone__CreateBones(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblings(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength(__this,method);
  if (g_data_057a6917 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6917 = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (__this_02,(__this->fields)._globalRadius_k__BackingField,(__this->fields).m_RadiusCurve,
                 method_00);
      index = index + 1;
      __this_00 = (__this->fields).m_Structures;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24929b0

void EZhex1991_EZSoftBone_EZSoftBone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (g_data_057a6912 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6912 = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$CreateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__CreateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2493280

void EZhex1991_EZSoftBone_EZSoftBone__CreateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t startDepth;
  int iVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_EZSoftBone_Bone__c *__this_00;
  bool_conflict bVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *transform;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar5;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar6;
  EZhex1991_EZSoftBone_EZSoftBone_o *bones;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *in_RCX;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  int32_t iVar10;
  int iVar11;
  uint uVar12;
  EZhex1991_EZSoftBone_EZSoftBone_o *__this_01;
  System_Collections_Generic_List_Transform__o *pSVar13;
  EZhex1991_EZSoftBone_EZSoftBone_o *__this_02;
  System_Collections_Generic_Queue_EZSoftBone_Bone__o *unaff_R14;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  float fStackY_9c;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_01 = __this;
  if (g_data_057a6913 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bone);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6913 = '\x01';
  }
  pSVar6 = (__this->fields).m_Structures;
  pMVar9 = in_RCX;
  if (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar10 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    if (0 < iVar10) {
      in_RCX = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar10,(MethodInfo *)0x0);
    }
    pSVar13 = (__this->fields).m_RootBones;
    if (((pSVar13 != (System_Collections_Generic_List_Transform__o *)0x0) &&
        (iVar11 = (pSVar13->fields)._size, iVar11 != 0)) && (0 < iVar11)) {
      iVar10 = 0;
      do {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar13,iVar10,MethodInfo_Transform_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pSVar13 = (__this->fields).m_RootBones;
          __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0;
          pMVar9 = in_RCX;
          unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)&TypeInfo_Object;
          if (pSVar13 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_02493482;
          pUVar8 = (__this->fields).m_SimulateSpace;
          transform = (UnityEngine_Transform_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar13,iVar10,MethodInfo_Transform_get_Item);
          pMVar9 = (MethodInfo *)(__this->fields).m_EndBones;
          startDepth = (__this->fields).m_StartDepth;
          pEVar5 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Bone);
          EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                    (pEVar5,pUVar8,transform,(System_Collections_Generic_IEnumerable_Transform__o *)pMVar9,
                     startDepth,0,0.0,0.0,in_stack_ffffffffffffffb8);
          in_RCX = MethodInfo_Void_Add;
          __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
          unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)&MethodInfo_Transform_get_Item;
          if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) goto label_02493482;
          piVar1 = (int32_t *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar3 = (System_Object_array *)(__this_01->fields).m_CachedPtr;
          pMVar9 = in_RCX;
          unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)&MethodInfo_Transform_get_Item;
          if (pSVar3 == (System_Object_array *)0x0) goto label_02493482;
          uVar12 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
          if (uVar12 < (uint)pSVar3->max_length) {
            in_RCX = (MethodInfo *)(ulong)(uVar12 + 1);
            *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar12 + 1;
            pSVar3->m_Items[(int)uVar12] = (Il2CppObject *)pEVar5;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar12,pEVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pEVar5,
                       (MethodInfo_362C220 *)in_RCX->klass->rgctx_data[0xe].method);
          }
        }
        unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)&TypeInfo_Object;
        pSVar13 = (__this->fields).m_RootBones;
        __this_01 = (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0;
        pMVar9 = in_RCX;
        if (pSVar13 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_02493482;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (pSVar13->fields)._size);
    }
    return;
  }
label_02493482:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01;
  if (g_data_057a6914 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)&TypeInfo_Queue_Bone;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6914 = '\x01';
  }
  iVar11 = (__this_01->fields).m_SiblingConstraints;
  if (iVar11 == 2) {
    unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Bone);
    System_Collections_Generic_Queue_object____ctor
              ((System_Collections_Generic_Queue_T__o *)unaff_R14,MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this_01->fields).m_Structures;
    if (__this_02 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) {
      if (unaff_R14 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
        if (0 < *(int *)&(__this_02->fields).m_CancellationTokenSource) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_EZSoftBone_Bone_get_Item);
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a6916 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
            g_data_057a6916 = '\x01';
          }
          iVar11 = (__this_02->fields).m_SiblingRotationConstraints;
          if (iVar11 == 1) {
            pSVar6 = (__this_02->fields).m_Structures;
            if (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
              uVar12 = 0;
              do {
                if ((pSVar6->fields)._size <= (int)uVar12) {
                  return;
                }
                pMVar9 = (MethodInfo *)(ulong)uVar12;
                pEVar5 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar6,uVar12,MethodInfo_EZSoftBone_Bone_get_Item);
                if (pEVar5 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
                EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
                          (pEVar5,(pEVar5->fields).treeLength,pMVar9);
                uVar12 = uVar12 + 1;
                pSVar6 = (__this_02->fields).m_Structures;
              } while (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
            }
          }
          else {
            if (iVar11 != 2) {
              return;
            }
            pSVar6 = (__this_02->fields).m_Structures;
            if (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
              iVar11 = 0;
              fStackY_9c = 0.0;
              do {
                iVar2 = (pSVar6->fields)._size;
                if (iVar2 <= iVar11) {
                  if (iVar2 < 1) {
                    return;
                  }
                  uVar12 = 0;
                  goto label_024937a0;
                }
                pIVar7 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar6,iVar11,MethodInfo_EZSoftBone_Bone_get_Item);
                if (pIVar7 == (Il2CppObject *)0x0) break;
                fVar14 = *(float *)((long)&pIVar7[10].klass + 4);
                if (fStackY_9c <= fVar14) {
                  fStackY_9c = fVar14;
                }
                iVar11 = iVar11 + 1;
                pSVar6 = (__this_02->fields).m_Structures;
              } while (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
            }
          }
label_024937da:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a6917 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
            g_data_057a6917 = '\x01';
          }
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            iVar11 = 0;
            UVar16 = UnityEngine_Transform__get_lossyScale(pUVar8,(MethodInfo *)0x0);
            fVar14 = ABS(UVar16.fields.y);
            if (ABS(UVar16.fields.y) <= ABS(UVar16.fields.z)) {
              fVar14 = ABS(UVar16.fields.z);
            }
            fVar15 = ABS(UVar16.fields.x);
            if (ABS(UVar16.fields.x) <= fVar14) {
              fVar15 = fVar14;
            }
            *(float *)&pSVar6[4].fields._items = fVar15 * *(float *)&pSVar6[2].fields._items;
            __this_00 = pSVar6[5].klass;
            while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__c *)0x0) {
              if (*(int *)&(__this_00->_1).namespaze <= iVar11) {
                return;
              }
              pEVar5 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,iVar11,MethodInfo_EZSoftBone_Bone_get_Item);
              if (pEVar5 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
              EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                        (pEVar5,*(float *)&pSVar6[4].fields._items,
                         *(UnityEngine_AnimationCurve_o **)&pSVar6[2].fields._size,method_00);
              iVar11 = iVar11 + 1;
              __this_00 = pSVar6[5].klass;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          return;
        }
      }
      else {
        iVar11 = 0;
        do {
          if (*(int *)&(__this_02->fields).m_CancellationTokenSource <= iVar11) goto label_02493632;
          pIVar7 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_02,iVar11,MethodInfo_EZSoftBone_Bone_get_Item);
          System_Collections_Generic_Queue_object___Enqueue
                    ((System_Collections_Generic_Queue_T__o *)unaff_R14,pIVar7,MethodInfo_Void_Enqueue);
          iVar11 = iVar11 + 1;
          __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this_01->fields).m_Structures;
        } while (__this_02 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0);
      }
    }
  }
  else {
    if (iVar11 != 1) {
      return;
    }
    pSVar6 = (__this_01->fields).m_Structures;
    if (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar11 = 0;
      unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)&MethodInfo_Void_Enqueue;
      do {
        if ((pSVar6->fields)._size <= iVar11) {
          return;
        }
        bones = (EZhex1991_EZSoftBone_EZSoftBone_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Bone);
        System_Collections_Generic_Queue_object____ctor
                  ((System_Collections_Generic_Queue_T__o *)bones,MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
        __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this_01->fields).m_Structures;
        if ((__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) ||
           (pIVar7 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,iVar11,MethodInfo_EZSoftBone_Bone_get_Item),
           bones == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0)) break;
        __this_02 = bones;
        System_Collections_Generic_Queue_object___Enqueue
                  ((System_Collections_Generic_Queue_T__o *)bones,pIVar7,MethodInfo_Void_Enqueue);
        EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                  (__this_02,(System_Collections_Generic_Queue_EZSoftBone_Bone__o *)bones,
                   (uint)(byte)(__this_01->fields).m_ClosedSiblings,pMVar9);
        iVar11 = iVar11 + 1;
        pSVar6 = (__this_01->fields).m_Structures;
      } while (pSVar6 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_02493632:
  } while (unaff_R14 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0);
  if ((unaff_R14->fields)._size < 1) {
    return;
  }
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
            (__this_02,unaff_R14,(uint)(byte)(__this_01->fields).m_ClosedSiblings,pMVar9);
  return;
label_024937a0:
  pMVar9 = (MethodInfo *)(ulong)uVar12;
  pEVar5 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar6,uVar12,MethodInfo_EZSoftBone_Bone_get_Item);
  if (pEVar5 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_024937da;
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350(pEVar5,fStackY_9c,pMVar9);
  pSVar6 = (__this_02->fields).m_Structures;
  if (pSVar6 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_024937da;
  uVar12 = uVar12 + 1;
  if ((pSVar6->fields)._size <= (int)uVar12) {
    return;
  }
  goto label_024937a0;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2493490

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__c *__this_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar2;
  EZhex1991_EZSoftBone_EZSoftBone_o *bones;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *__this_01;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int iVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  EZhex1991_EZSoftBone_EZSoftBone_o *__this_02;
  System_Collections_Generic_Queue_EZSoftBone_Bone__o *unaff_R14;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_54;
  
  __this_02 = __this;
  if (g_data_057a6914 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)&TypeInfo_Queue_Bone;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6914 = '\x01';
  }
  iVar5 = (__this->fields).m_SiblingConstraints;
  if (iVar5 == 2) {
    unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Bone);
    System_Collections_Generic_Queue_object____ctor
              ((System_Collections_Generic_Queue_T__o *)unaff_R14,MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
    if (__this_02 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) {
      if (unaff_R14 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
        if (0 < *(int *)&(__this_02->fields).m_CancellationTokenSource) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_EZSoftBone_Bone_get_Item);
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a6916 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
            g_data_057a6916 = '\x01';
          }
          iVar5 = (__this_02->fields).m_SiblingRotationConstraints;
          if (iVar5 == 1) {
            pSVar2 = (__this_02->fields).m_Structures;
            if (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
              uVar6 = 0;
              do {
                if ((pSVar2->fields)._size <= (int)uVar6) {
                  return;
                }
                pMVar7 = (MethodInfo *)(ulong)uVar6;
                pEVar4 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar2,uVar6,MethodInfo_EZSoftBone_Bone_get_Item);
                if (pEVar4 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
                EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
                          (pEVar4,(pEVar4->fields).treeLength,pMVar7);
                uVar6 = uVar6 + 1;
                pSVar2 = (__this_02->fields).m_Structures;
              } while (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
            }
          }
          else {
            if (iVar5 != 2) {
              return;
            }
            pSVar2 = (__this_02->fields).m_Structures;
            if (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
              iVar5 = 0;
              fStack_54 = 0.0;
              do {
                iVar1 = (pSVar2->fields)._size;
                if (iVar1 <= iVar5) {
                  if (iVar1 < 1) {
                    return;
                  }
                  uVar6 = 0;
                  goto label_024937a0;
                }
                pIVar3 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar2,iVar5,MethodInfo_EZSoftBone_Bone_get_Item);
                if (pIVar3 == (Il2CppObject *)0x0) break;
                fVar8 = *(float *)((long)&pIVar3[10].klass + 4);
                if (fStack_54 <= fVar8) {
                  fStack_54 = fVar8;
                }
                iVar5 = iVar5 + 1;
                pSVar2 = (__this_02->fields).m_Structures;
              } while (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
            }
          }
label_024937da:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a6917 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
            g_data_057a6917 = '\x01';
          }
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            iVar5 = 0;
            UVar10 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
            fVar8 = ABS(UVar10.fields.y);
            if (ABS(UVar10.fields.y) <= ABS(UVar10.fields.z)) {
              fVar8 = ABS(UVar10.fields.z);
            }
            fVar9 = ABS(UVar10.fields.x);
            if (ABS(UVar10.fields.x) <= fVar8) {
              fVar9 = fVar8;
            }
            *(float *)&pSVar2[4].fields._items = fVar9 * *(float *)&pSVar2[2].fields._items;
            __this_00 = pSVar2[5].klass;
            while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__c *)0x0) {
              if (*(int *)&(__this_00->_1).namespaze <= iVar5) {
                return;
              }
              pEVar4 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,iVar5,MethodInfo_EZSoftBone_Bone_get_Item);
              if (pEVar4 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
              EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                        (pEVar4,*(float *)&pSVar2[4].fields._items,
                         *(UnityEngine_AnimationCurve_o **)&pSVar2[2].fields._size,method_00);
              iVar5 = iVar5 + 1;
              __this_00 = pSVar2[5].klass;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          return;
        }
      }
      else {
        iVar5 = 0;
        do {
          if (*(int *)&(__this_02->fields).m_CancellationTokenSource <= iVar5) goto label_02493632;
          pIVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_02,iVar5,MethodInfo_EZSoftBone_Bone_get_Item);
          System_Collections_Generic_Queue_object___Enqueue
                    ((System_Collections_Generic_Queue_T__o *)unaff_R14,pIVar3,MethodInfo_Void_Enqueue);
          iVar5 = iVar5 + 1;
          __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
        } while (__this_02 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0);
      }
    }
  }
  else {
    if (iVar5 != 1) {
      return;
    }
    pSVar2 = (__this->fields).m_Structures;
    if (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar5 = 0;
      unaff_R14 = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)&MethodInfo_Void_Enqueue;
      do {
        if ((pSVar2->fields)._size <= iVar5) {
          return;
        }
        bones = (EZhex1991_EZSoftBone_EZSoftBone_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Bone);
        System_Collections_Generic_Queue_object____ctor
                  ((System_Collections_Generic_Queue_T__o *)bones,MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
        __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
        if ((__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,iVar5,MethodInfo_EZSoftBone_Bone_get_Item),
           bones == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0)) break;
        __this_02 = bones;
        System_Collections_Generic_Queue_object___Enqueue
                  ((System_Collections_Generic_Queue_T__o *)bones,pIVar3,MethodInfo_Void_Enqueue);
        EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                  (__this_02,(System_Collections_Generic_Queue_EZSoftBone_Bone__o *)bones,
                   (uint)(byte)(__this->fields).m_ClosedSiblings,in_RCX);
        iVar5 = iVar5 + 1;
        pSVar2 = (__this->fields).m_Structures;
      } while (pSVar2 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_02493632:
  } while (unaff_R14 == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0);
  if ((unaff_R14->fields)._size < 1) {
    return;
  }
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
            (__this_02,unaff_R14,(uint)(byte)(__this->fields).m_ClosedSiblings,in_RCX);
  return;
label_024937a0:
  pMVar7 = (MethodInfo *)(ulong)uVar6;
  pEVar4 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar2,uVar6,MethodInfo_EZSoftBone_Bone_get_Item);
  if (pEVar4 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_024937da;
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350(pEVar4,fStack_54,pMVar7);
  pSVar2 = (__this_02->fields).m_Structures;
  if (pSVar2 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_024937da;
  uVar6 = uVar6 + 1;
  if ((pSVar2->fields)._size <= (int)uVar6) {
    return;
  }
  goto label_024937a0;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblingsByDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, System_Collections_Generic_Queue_EZSoftBone_Bone__o* bones, bool closed, const MethodInfo* method);
// 0x2493ec0

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               System_Collections_Generic_Queue_EZSoftBone_Bone__o *bones,bool_conflict closed,
               MethodInfo *method)

{
  Il2CppRGCTXData *pIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppRGCTXData *pIVar3;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  int iVar6;
  Il2CppRGCTXData *pIVar7;
  MethodInfo *__this_00;
  UnityEngine_Vector3_o UVar8;
  char local_3c;
  
  pIVar3 = (Il2CppRGCTXData *)bones;
  if (g_data_057a6915 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_Dequeue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6915 = '\x01';
  }
  if ((bones != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) &&
     (pIVar3 = MethodInfo_EZSoftBone_Bone_Dequeue, __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)bones,
     pIVar2 = (Il2CppRGCTXData *)
              System_Collections_Generic_Queue_object___Dequeue
                        ((System_Collections_Generic_Queue_T__o *)bones,(MethodInfo_38E5900 *)MethodInfo_EZSoftBone_Bone_Dequeue),
     pIVar2 != (Il2CppRGCTXData *)0x0)) {
    __this_00 = pIVar2[0xd].method;
    __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0;
    if (__this_00 != (MethodInfo *)0x0) {
      iVar6 = 0;
      do {
        if (*(int *)&__this_00->name <= iVar6) {
          pIVar7 = pIVar2;
          if ((bones->fields)._size < 1) {
            return;
          }
          goto label_02493fe1;
        }
        pIVar3 = (Il2CppRGCTXData *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar6,MethodInfo_EZSoftBone_Bone_get_Item);
        System_Collections_Generic_Queue_object___Enqueue
                  ((System_Collections_Generic_Queue_T__o *)bones,(Il2CppObject *)pIVar3,MethodInfo_Void_Enqueue);
        iVar6 = iVar6 + 1;
        __this_00 = pIVar2[0xd].method;
      } while (__this_00 != (MethodInfo *)0x0);
      __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0;
    }
  }
  goto label_02494275;
label_02493fe1:
  do {
    pIVar3 = MethodInfo_EZSoftBone_Bone_Dequeue;
    __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)bones;
    pIVar4 = (Il2CppRGCTXData *)
             System_Collections_Generic_Queue_object___Dequeue
                       ((System_Collections_Generic_Queue_T__o *)bones,(MethodInfo_38E5900 *)MethodInfo_EZSoftBone_Bone_Dequeue);
    if ((pIVar4 == (Il2CppRGCTXData *)0x0) ||
       (__this = (EZhex1991_EZSoftBone_EZSoftBone_o *)pIVar4[0xd].klass,
       (Il2CppRGCTXData *)__this == (Il2CppRGCTXData *)0x0)) goto label_02494275;
    iVar6 = 0;
    while (iVar6 < *(int *)((long)__this + 0x18)) {
      pIVar3 = (Il2CppRGCTXData *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this,iVar6,MethodInfo_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue_object___Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,(Il2CppObject *)pIVar3,MethodInfo_Void_Enqueue);
      iVar6 = iVar6 + 1;
      __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)pIVar4[0xd].klass;
      if ((Il2CppRGCTXData *)__this == (Il2CppRGCTXData *)0x0) goto label_02494275;
    }
    local_3c = (char)closed;
    if (*(int *)((long)pIVar7 + 0x9c) == *(int *)((long)pIVar4 + 0x9c)) {
      pIVar5 = pIVar2;
      if (pIVar7 == pIVar4) goto label_02493fd3;
      if (pIVar4 != pIVar7[7].rgctxDataDummy) {
        pIVar7[10].klass = (Il2CppClass *)pIVar4;
        pIVar3 = pIVar4;
        il2cpp_runtime_helper_022b4080(pIVar7 + 10);
        __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)pIVar7[0xe].klass;
        if (__this == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) goto label_02494275;
        pIVar3 = (Il2CppRGCTXData *)0x0;
        UVar8 = UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Transform_o *)__this,*(UnityEngine_Vector3_Fields *)(pIVar4 + 0xf),
                           (MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)(pIVar7 + 0xb) = UVar8.fields;
      }
      if (pIVar7 == pIVar4[10].rgctxDataDummy) goto label_02493fd3;
      pIVar4[7].klass = (Il2CppClass *)pIVar7;
      pIVar3 = pIVar7;
      il2cpp_runtime_helper_022b4080(pIVar4 + 7);
      __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)pIVar4[0xe].klass;
      if (__this == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) goto label_02494275;
      pIVar3 = (Il2CppRGCTXData *)0x0;
      UVar8 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Transform_o *)__this,*(UnityEngine_Vector3_Fields *)(pIVar7 + 0xf),
                         (MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar4 + 8) = UVar8.fields;
      iVar6 = (bones->fields)._size;
    }
    else {
      pIVar5 = pIVar4;
      if (local_3c != '\0') {
        if ((pIVar2 == pIVar7) || (pIVar2 == pIVar7[7].rgctxDataDummy)) {
          if (pIVar2 == (Il2CppRGCTXData *)0x0) goto label_02494275;
          if (pIVar2 == pIVar7) goto label_02493fd3;
          pIVar1 = pIVar2[10].rgctxDataDummy;
        }
        else {
          __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)(pIVar7 + 10);
          pIVar7[10].klass = (Il2CppClass *)pIVar2;
          pIVar3 = pIVar2;
          il2cpp_runtime_helper_022b4080();
          if ((pIVar2 == (Il2CppRGCTXData *)0x0) ||
             (__this = (EZhex1991_EZSoftBone_EZSoftBone_o *)pIVar7[0xe].klass,
             __this == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0)) goto label_02494275;
          pIVar3 = (Il2CppRGCTXData *)0x0;
          UVar8 = UnityEngine_Transform__InverseTransformPoint
                            ((UnityEngine_Transform_o *)__this,*(UnityEngine_Vector3_Fields *)(pIVar2 + 0xf),
                             (MethodInfo *)0x0);
          *(UnityEngine_Vector3_Fields *)(pIVar7 + 0xb) = UVar8.fields;
          pIVar1 = pIVar2[10].rgctxDataDummy;
        }
        if (pIVar7 != pIVar1) {
          pIVar2[7].klass = (Il2CppClass *)pIVar7;
          pIVar3 = pIVar7;
          il2cpp_runtime_helper_022b4080(pIVar2 + 7);
          __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)pIVar2[0xe].klass;
          if (__this == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) goto label_02494275;
          pIVar3 = (Il2CppRGCTXData *)0x0;
          UVar8 = UnityEngine_Transform__InverseTransformPoint
                            ((UnityEngine_Transform_o *)__this,*(UnityEngine_Vector3_Fields *)(pIVar7 + 0xf),
                             (MethodInfo *)0x0);
          *(UnityEngine_Vector3_Fields *)(pIVar2 + 8) = UVar8.fields;
        }
      }
label_02493fd3:
      iVar6 = (bones->fields)._size;
      pIVar2 = pIVar5;
    }
    pIVar7 = pIVar4;
  } while (0 < iVar6);
  if (local_3c == '\0') {
    return;
  }
  if (pIVar2 != (Il2CppRGCTXData *)0x0) {
    if (pIVar2 == pIVar4) {
      return;
    }
    if (pIVar4 != pIVar2[10].rgctxDataDummy) {
      pIVar2[7].klass = (Il2CppClass *)pIVar4;
      pIVar3 = pIVar4;
      il2cpp_runtime_helper_022b4080(pIVar2 + 7);
      __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0;
      if (pIVar2[0xe].method == (MethodInfo *)0x0) goto label_02494275;
      UVar8 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Transform_o *)pIVar2[0xe].method,
                         *(UnityEngine_Vector3_Fields *)(pIVar4 + 0xf),(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar2 + 8) = UVar8.fields;
    }
    if (pIVar2 == pIVar4[7].rgctxDataDummy) {
      return;
    }
    pIVar4[10].klass = (Il2CppClass *)pIVar2;
    pIVar3 = pIVar2;
    il2cpp_runtime_helper_022b4080(pIVar4 + 10);
    __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0;
    if (pIVar4[0xe].method != (MethodInfo *)0x0) {
      UVar8 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Transform_o *)pIVar4[0xe].method,
                         *(UnityEngine_Vector3_Fields *)(pIVar2 + 0xf),(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar4 + 0xb) = UVar8.fields;
      return;
    }
  }
label_02494275:
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar3 == (Il2CppRGCTXData *)__this) ||
     (pIVar3 == ((Il2CppRGCTXData *)((long)__this + 0x38))->rgctxDataDummy)) {
    return;
  }
  pIVar2 = (Il2CppRGCTXData *)((long)__this + 0x50);
  ((Il2CppRGCTXData *)((long)__this + 0x50))->klass = (Il2CppClass *)pIVar3;
  pIVar7 = pIVar3;
  il2cpp_runtime_helper_022b4080();
  if (pIVar3 != (Il2CppRGCTXData *)0x0) {
    pIVar2 = (Il2CppRGCTXData *)0x0;
    if (((Il2CppRGCTXData *)((long)__this + 0x70))->method != (MethodInfo *)0x0) {
      UVar8 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Transform_o *)((Il2CppRGCTXData *)((long)__this + 0x70))->method,
                         *(UnityEngine_Vector3_Fields *)(pIVar3 + 0xf),(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)((long)__this + 0x58) = UVar8.fields;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar7 != pIVar2) && (pIVar7 != pIVar2[10].rgctxDataDummy)) {
    pIVar3 = pIVar2 + 7;
    pIVar2[7].klass = (Il2CppClass *)pIVar7;
    pIVar4 = pIVar7;
    il2cpp_runtime_helper_022b4080();
    if (pIVar7 != (Il2CppRGCTXData *)0x0) {
      pIVar3 = (Il2CppRGCTXData *)0x0;
      if (pIVar2[0xe].method != (MethodInfo *)0x0) {
        UVar8 = UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Transform_o *)pIVar2[0xe].method,
                           *(UnityEngine_Vector3_Fields *)(pIVar7 + 0xf),(MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)(pIVar2 + 8) = UVar8.fields;
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350
              ((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)pIVar3,*(float *)((long)pIVar3 + 0xa4),
               (MethodInfo *)pIVar4);
    return;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2493690

void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__c *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_01;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar3;
  MethodInfo *method_00;
  int iVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_02;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  float local_1c;
  
  if (g_data_057a6916 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6916 = '\x01';
  }
  iVar4 = (__this->fields).m_SiblingRotationConstraints;
  if (iVar4 == 1) {
    __this_02 = (__this->fields).m_Structures;
    if (__this_02 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      uVar5 = 0;
      do {
        if ((__this_02->fields)._size <= (int)uVar5) {
          return;
        }
        pMVar6 = (MethodInfo *)(ulong)uVar5;
        pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,uVar5,MethodInfo_EZSoftBone_Bone_get_Item);
        if (pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350(pEVar3,(pEVar3->fields).treeLength,pMVar6)
        ;
        uVar5 = uVar5 + 1;
        __this_02 = (__this->fields).m_Structures;
      } while (__this_02 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  else {
    if (iVar4 != 2) {
      return;
    }
    __this_02 = (__this->fields).m_Structures;
    if (__this_02 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar4 = 0;
      local_1c = 0.0;
      do {
        iVar1 = (__this_02->fields)._size;
        if (iVar1 <= iVar4) {
          if (iVar1 < 1) {
            return;
          }
          uVar5 = 0;
          goto label_024937a0;
        }
        pIVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,iVar4,MethodInfo_EZSoftBone_Bone_get_Item);
        if (pIVar2 == (Il2CppObject *)0x0) break;
        fVar7 = *(float *)((long)&pIVar2[10].klass + 4);
        if (local_1c <= fVar7) {
          local_1c = fVar7;
        }
        iVar4 = iVar4 + 1;
        __this_02 = (__this->fields).m_Structures;
      } while (__this_02 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
label_024937da:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6917 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6917 = '\x01';
  }
  __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    iVar4 = 0;
    UVar9 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
    fVar7 = ABS(UVar9.fields.y);
    if (ABS(UVar9.fields.y) <= ABS(UVar9.fields.z)) {
      fVar7 = ABS(UVar9.fields.z);
    }
    fVar8 = ABS(UVar9.fields.x);
    if (ABS(UVar9.fields.x) <= fVar7) {
      fVar8 = fVar7;
    }
    *(float *)&__this_02[4].fields._items = fVar8 * *(float *)&__this_02[2].fields._items;
    __this_00 = __this_02[5].klass;
    while (__this_00 != (System_Collections_Generic_List_EZSoftBone_Bone__c *)0x0) {
      if (*(int *)&(__this_00->_1).namespaze <= iVar4) {
        return;
      }
      pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar4,MethodInfo_EZSoftBone_Bone_get_Item);
      if (pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (pEVar3,*(float *)&__this_02[4].fields._items,
                 *(UnityEngine_AnimationCurve_o **)&__this_02[2].fields._size,method_00);
      iVar4 = iVar4 + 1;
      __this_00 = __this_02[5].klass;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
label_024937a0:
  pMVar6 = (MethodInfo *)(ulong)uVar5;
  pEVar3 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_02,uVar5,MethodInfo_EZSoftBone_Bone_get_Item);
  if (pEVar3 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_024937da;
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength_2394350(pEVar3,local_1c,pMVar6);
  __this_02 = (__this->fields).m_Structures;
  if (__this_02 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_024937da;
  uVar5 = uVar5 + 1;
  if ((__this_02->fields)._size <= (int)uVar5) {
    return;
  }
  goto label_024937a0;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RefreshRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24937e0

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
  
  if (g_data_057a6917 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a6917 = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (__this_02,(__this->fields)._globalRadius_k__BackingField,(__this->fields).m_RadiusCurve,
                 method_00);
      index = index + 1;
      __this_00 = (__this->fields).m_Structures;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float deltaTime, const MethodInfo* method);
// 0x2492b20

void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float deltaTime,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  UnityEngine_AnimationCurve_o *radiusCurve;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar10;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar11;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int index;
  MethodInfo *pMVar12;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar13;
  uint index_00;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  UnityEngine_Vector3_o UVar23;
  undefined8 local_58;
  undefined8 uVar20;
  
  if (g_data_057a6918 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBone);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6918 = '\x01';
    if (*(int *)(TypeInfo_EZSoftBone + 0xe4) != 0) goto label_02492b54;
label_02492bb6:
    il2cpp_runtime_helper_02337ed0();
    fVar19 = **(float **)(TypeInfo_EZSoftBone + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_EZSoftBone + 0xe4) == 0) goto label_02492bb6;
label_02492b54:
    fVar19 = **(float **)(TypeInfo_EZSoftBone + 0xb8);
  }
  if (deltaTime <= fVar19) {
    return;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_02493070;
  index_00 = 0;
  UVar23 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
  fVar19 = ABS(UVar23.fields.y);
  if (ABS(UVar23.fields.y) <= ABS(UVar23.fields.z)) {
    fVar19 = ABS(UVar23.fields.z);
  }
  fVar15 = ABS(UVar23.fields.x);
  if (ABS(UVar23.fields.x) <= fVar19) {
    fVar15 = fVar19;
  }
  (__this->fields)._globalRadius_k__BackingField = fVar15 * (__this->fields).m_Radius;
  pSVar13 = (__this->fields).m_Structures;
  if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_02493070;
  ppEVar1 = &(__this->fields).m_Material;
  if (0 < (pSVar13->fields)._size) {
    do {
      pEVar11 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar13,index_00,MethodInfo_EZSoftBone_Bone_get_Item);
      fVar19 = (__this->fields)._globalRadius_k__BackingField;
      radiusCurve = (__this->fields).m_RadiusCurve;
      if (g_data_057a690f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a690f = '\x01';
      }
      pMVar12 = (MethodInfo *)*ppEVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pEVar10 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(pMVar12);
        *ppEVar1 = pEVar10;
        il2cpp_runtime_helper_022b4080(ppEVar1,pEVar10);
      }
      if (pEVar11 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02493070;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate_2394500
                (pEVar11,fVar19,radiusCurve,(__this->fields).m_Material,in_RCX);
      pUVar9 = (__this->fields).m_SimulateSpace;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pSVar13 = (__this->fields).m_Structures;
        if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_02493070;
        pMVar12 = (MethodInfo *)(ulong)index_00;
        pEVar11 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar13,index_00,MethodInfo_EZSoftBone_Bone_get_Item);
        if (pEVar11 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_02493070;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(pEVar11,pMVar12);
      }
      index_00 = index_00 + 1;
      pSVar13 = (__this->fields).m_Structures;
      if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_02493070;
    } while ((int)index_00 < (pSVar13->fields)._size);
  }
  pUVar9 = (__this->fields).m_GravityAligner;
  fVar15 = (__this->fields).m_Gravity.fields.y;
  fVar19 = (__this->fields).m_Gravity.fields.z;
  (__this->fields)._globalForce_k__BackingField.fields.x = (__this->fields).m_Gravity.fields.x;
  (__this->fields)._globalForce_k__BackingField.fields.y = fVar15;
  (__this->fields)._globalForce_k__BackingField.fields.z = fVar19;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar9 = (__this->fields).m_GravityAligner;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_02493070;
    UVar23 = UnityEngine_Transform__TransformDirection
                       (pUVar9,(__this->fields).m_Gravity.fields,(MethodInfo *)0x0);
    fVar19 = UVar23.fields.z;
    auVar22._8_4_ = extraout_XMM0_Dc;
    auVar22._0_8_ = UVar23.fields._0_8_;
    auVar22._12_4_ = extraout_XMM0_Dd;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_58._0_4_ = UVar23.fields.x;
    local_58._4_4_ = UVar23.fields.y;
    uVar17 = 0;
    uVar18 = 0;
    fVar15 = fVar19 * fVar19 + local_58._4_4_ * local_58._4_4_ + (float)local_58 * (float)local_58;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
      uVar17 = extraout_XMM0_Dc_00;
      uVar18 = extraout_XMM0_Dd_00;
      if (fVar15 <= 1e-05) goto label_02492e4d;
label_02492e9e:
      fVar19 = fVar19 / fVar15;
      auVar7._4_4_ = fVar15;
      auVar7._0_4_ = fVar15;
      auVar7._8_4_ = uVar17;
      auVar7._12_4_ = uVar18;
      auVar22 = divps(auVar22,auVar7);
      local_58 = auVar22._0_8_;
    }
    else {
      fVar15 = SQRT(fVar15);
      if (1e-05 < fVar15) goto label_02492e9e;
label_02492e4d:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      local_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    uVar3._0_4_ = (__this->fields).m_Gravity.fields.x;
    uVar3._4_4_ = (__this->fields).m_Gravity.fields.y;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar3;
    fVar15 = (__this->fields).m_Gravity.fields.z;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar17 = 0;
    uVar18 = 0;
    fVar16 = fVar15 * fVar15 +
             (float)uVar3._4_4_ * (float)uVar3._4_4_ + (float)(undefined4)uVar3 * (float)(undefined4)uVar3;
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
      uVar17 = extraout_XMM0_Dc_01;
      uVar18 = extraout_XMM0_Dd_01;
      if (fVar16 <= 1e-05) goto label_02492f29;
label_02492f7a:
      fVar15 = fVar15 / fVar16;
      auVar6._4_4_ = fVar16;
      auVar6._0_4_ = fVar16;
      auVar6._8_4_ = uVar17;
      auVar6._12_4_ = uVar18;
      auVar22 = divps(auVar21,auVar6);
      uVar20 = auVar22._0_8_;
    }
    else {
      fVar16 = SQRT(fVar16);
      if (1e-05 < fVar16) goto label_02492f7a;
label_02492f29:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar15 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    fVar15 = acosf((float)((ulong)uVar20 >> 0x20) * local_58._4_4_ + (float)local_58 * (float)uVar20 +
                   fVar19 * fVar15);
    fVar15 = fVar15 / 3.1415927;
    uVar2 = (__this->fields)._globalForce_k__BackingField.fields.x;
    uVar4 = (__this->fields)._globalForce_k__BackingField.fields.y;
    fVar19 = (__this->fields)._globalForce_k__BackingField.fields.z;
    (__this->fields)._globalForce_k__BackingField.fields.x = fVar15 * (float)uVar2;
    (__this->fields)._globalForce_k__BackingField.fields.y = fVar15 * (float)uVar4;
    (__this->fields)._globalForce_k__BackingField.fields.z = fVar15 * fVar19;
  }
  iVar5 = (__this->fields).m_Iterations;
  if (iVar5 < 1) {
    return;
  }
  pSVar13 = (__this->fields).m_Structures;
  iVar14 = 0;
  while (pSVar13 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    while (index < (pSVar13->fields)._size) {
      pEVar11 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar13,index,MethodInfo_EZSoftBone_Bone_get_Item);
      EZhex1991_EZSoftBone_EZSoftBone__UpdateBones(__this,pEVar11,deltaTime / (float)iVar5,method_00);
      index = index + 1;
      pSVar13 = (__this->fields).m_Structures;
      if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto label_02493070;
    }
    iVar14 = iVar14 + 1;
    if ((__this->fields).m_Iterations <= iVar14) {
      return;
    }
  }
label_02493070:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* bone, float deltaTime, const MethodInfo* method);
// 0x24947c0

void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,EZhex1991_EZSoftBone_EZSoftBone_Bone_o *bone,
               float deltaTime,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  UnityEngine_LayerMask_o mask;
  EZhex1991_EZSoftBone_EZSoftBoneForceField_o *pEVar23;
  EZhex1991_EZSoftBone_EZSoftBoneForce_o *__this_00;
  EZhex1991_EZSoftBone_CustomForce_o *pEVar24;
  System_Collections_Generic_List_Collider__o *__this_01;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  UnityEngine_Component_o *__this_09;
  bool_conflict bVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  UnityEngine_Transform_o *pUVar34;
  UnityEngine_Transform_o *pUVar35;
  UnityEngine_GameObject_o *__this_10;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar36;
  long *plVar37;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar38;
  int iVar39;
  MethodInfo *method_02;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_11;
  EZhex1991_EZSoftBone_EZSoftBone_o *pEVar40;
  float fVar41;
  undefined8 uVar42;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  uint32_t extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  uint32_t extraout_XMM0_Dc_09;
  uint32_t uVar43;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar63;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [12];
  UnityEngine_Vector3_o UVar61;
  UnityEngine_Vector3_o UVar62;
  undefined1 in_stack_fffffffffffffea8 [12];
  float in_stack_fffffffffffffeb4;
  float local_138;
  float fStack_134;
  UnityEngine_Vector3_o local_128;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  uint32_t uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined1 local_b8 [40];
  Il2CppType *pIStack_90;
  UnityEngine_Component_o *local_88;
  _union_249689 local_78;
  uint32_t uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  UnityEngine_Component_o *local_38;
  undefined1 auVar57 [16];
  undefined1 auVar55 [16];
  float fVar59;
  
  local_58 = deltaTime;
  fStack_50 = in_XMM0_Dc;
  fStack_4c = in_XMM0_Dd;
  if (g_data_057a6919 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBoneColliderBase_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_EZhex1991_EZSoftBone_EZSoftBoneCo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6919 = '\x01';
  }
  local_128.fields.z = 0.0;
  local_128.fields.x = 0.0;
  local_128.fields.y = 0.0;
  local_b8._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_90 = (Il2CppType *)0x0;
  local_88 = (UnityEngine_Component_o *)0x0;
  local_b8._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_b8._8_8_ = (Il2CppType *)0x0;
  local_b8._16_8_ = (UnityEngine_Component_o *)0x0;
  if (bone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
  pEVar40 = __this;
  if ((__this->fields).m_StartDepth < (bone->fields).depth) {
    uVar12._0_4_ = (bone->fields).worldPosition.fields.x;
    uVar12._4_4_ = (bone->fields).worldPosition.fields.y;
    local_128.fields.z = (bone->fields).worldPosition.fields.z;
    uStack_60 = 0;
    uVar2 = (__this->fields)._globalForce_k__BackingField.fields.x;
    uVar13 = (__this->fields)._globalForce_k__BackingField.fields.y;
    fStack_100 = 0.0;
    fStack_fc = 0.0;
    fVar41 = (__this->fields)._globalForce_k__BackingField.fields.z;
    pEVar23 = (__this->fields).m_ForceModule;
    local_128.fields._0_8_ = uVar12;
    local_108 = (float)uVar2;
    fStack_104 = (float)uVar13;
    local_ec = local_128.fields.z;
    local_68 = uVar12;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar30 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pEVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar30 != '\0') {
      pEVar23 = (__this->fields).m_ForceModule;
      if (pEVar23 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto label_0249572f;
      bVar30 = UnityEngine_Behaviour__get_isActiveAndEnabled
                         ((UnityEngine_Behaviour_o *)pEVar23,(MethodInfo *)0x0);
      if ((char)bVar30 != '\0') {
        pEVar23 = (__this->fields).m_ForceModule;
        if (pEVar23 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto label_0249572f;
        uVar12._0_4_ = (bone->fields).normalizedLength;
        method_02 = (MethodInfo *)0x0;
        pUVar34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pEVar23,(MethodInfo *)0x0);
        __this_00 = (pEVar23->fields).m_Force;
        if ((__this_00 == (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) ||
           (UVar61 = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                               (__this_00,
                                (pEVar23->fields)._time_k__BackingField -
                                (float)uVar12 * (pEVar23->fields).m_Conductivity,method_02),
           pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_0249572f;
        UVar61 = UnityEngine_Transform__TransformDirection(pUVar34,UVar61,(MethodInfo *)0x0);
        fVar4 = (__this->fields).m_ForceScale;
        uVar12._0_4_ = UVar61.fields.z * fVar4;
        local_108 = local_108 + fVar4 * UVar61.fields.x;
        fStack_104 = fStack_104 + fVar4 * UVar61.fields.y;
        fStack_100 = fStack_100 + extraout_XMM0_Dc * 0.0;
        fStack_fc = fStack_fc + extraout_XMM0_Dd * 0.0;
        fVar41 = fVar41 + (float)uVar12;
      }
    }
    pEVar24 = (__this->fields).customForce;
    if (pEVar24 != (EZhex1991_EZSoftBone_CustomForce_o *)0x0) {
      uVar42 = (*(code *)(pEVar24->fields).invoke_impl)
                         ((bone->fields).normalizedLength,(pEVar24->fields).method_code);
      local_108 = local_108 + (float)uVar42;
      fStack_104 = fStack_104 + (float)((ulong)uVar42 >> 0x20);
      fStack_100 = fStack_100 + extraout_XMM0_Dc_00;
      fStack_fc = fStack_fc + extraout_XMM0_Dd_00;
      fVar41 = fVar41 + (float)uVar12;
    }
    pUVar34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
    UVar61 = UnityEngine_Transform__get_localScale(pUVar34,(MethodInfo *)0x0);
    pUVar34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
    UVar62 = UnityEngine_Transform__get_localScale(pUVar34,(MethodInfo *)0x0);
    fStack_e0 = (float)extraout_XMM0_Dc_01;
    local_e8 = (undefined1  [8])UVar62.fields._0_8_;
    fStack_dc = (float)extraout_XMM0_Dd_01;
    pUVar34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
    local_138 = UVar61.fields.x;
    fStack_134 = UVar61.fields.y;
    local_138 = local_138 * local_108;
    uVar46 = local_e8._4_4_;
    uVar12._0_4_ = (float)local_e8._4_4_ * fStack_104;
    UVar61 = UnityEngine_Transform__get_localScale(pUVar34,(MethodInfo *)0x0);
    fVar4 = 1.0 - (bone->fields).resistance;
    uVar3 = (bone->fields).speed.fields.x;
    uVar14 = (bone->fields).speed.fields.y;
    auVar49._0_4_ = fVar4 * local_138;
    auVar49._4_4_ = fVar4 * (float)uVar12;
    auVar49._8_4_ = fStack_134 * 0.0;
    auVar49._12_4_ = (float)uVar46 * 0.0;
    uVar12._0_4_ = (float)(__this->fields).m_Iterations;
    auVar50._4_4_ = (float)uVar12;
    auVar50._0_4_ = (float)uVar12;
    auVar50._8_8_ = 0;
    auVar50 = divps(auVar49,auVar50);
    fVar16 = 1.0 - (bone->fields).damping;
    fVar44 = fVar16 * (auVar50._0_4_ + (float)uVar3);
    fVar45 = fVar16 * (auVar50._4_4_ + (float)uVar14);
    fVar16 = fVar16 * ((fVar4 * fVar41 * UVar61.fields.z) / (float)uVar12 + (bone->fields).speed.fields.z);
    (bone->fields).speed.fields.x = fVar44;
    (bone->fields).speed.fields.y = fVar45;
    (bone->fields).speed.fields.z = fVar16;
    fVar48 = fVar16 * fVar16 + fVar45 * fVar45 + fVar44 * fVar44;
    pfVar1 = &(__this->fields).m_SleepThreshold;
    fVar41 = local_ec;
    uVar12._0_4_ = (float)local_68;
    fVar4 = local_68._4_4_;
    fVar15 = (float)uStack_60;
    fVar5 = uStack_60._4_4_;
    if (*pfVar1 <= fVar48 && fVar48 != *pfVar1) {
      uVar12._0_4_ = fVar44 * local_58 + (float)local_68;
      fVar4 = fVar45 * local_58 + local_68._4_4_;
      fVar15 = (auVar50._8_4_ + 0.0) * 0.0 * fStack_50 + (float)uStack_60;
      fVar5 = (auVar50._12_4_ + 0.0) * 0.0 * fStack_4c + uStack_60._4_4_;
      fVar41 = fVar16 * local_58 + local_ec;
      local_128.fields._0_8_ = CONCAT44(fVar4,(float)uVar12);
      local_128.fields.z = fVar41;
    }
    pEVar36 = (bone->fields).parentBone;
    if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
    local_e8._4_4_ = fVar4;
    local_e8._0_4_ = (float)uVar12;
    fStack_e0 = fVar15;
    fStack_dc = fVar5;
    pUVar34 = (pEVar36->fields).transform;
    local_108 = fVar41;
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
    fVar4 = (pEVar36->fields).worldPosition.fields.x;
    fVar15 = (pEVar36->fields).worldPosition.fields.y;
    fVar41 = (pEVar36->fields).worldPosition.fields.z;
    UVar61 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    pEVar36 = (bone->fields).parentBone;
    if ((pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar34 = (pEVar36->fields).transform, pUVar34 == (UnityEngine_Transform_o *)0x0)) goto label_0249572f;
    fVar4 = fVar4 - UVar61.fields.x;
    fVar15 = fVar15 - UVar61.fields.y;
    uVar46 = 0;
    uVar47 = 0;
    UVar62 = UnityEngine_Transform__TransformPoint
                       (pUVar34,(bone->fields).localPosition.fields,(MethodInfo *)0x0);
    fVar5 = (bone->fields).stiffness / (float)(__this->fields).m_Iterations;
    uVar12._0_4_ = 1.0;
    if (fVar5 <= 1.0) {
      uVar12._0_4_ = fVar5;
    }
    uVar12._0_4_ = (float)(-(uint)(0.0 <= fVar5) & (uint)(float)uVar12);
    local_128.fields.x =
         (float)uVar12 * ((UVar62.fields.x + fVar4) - (float)local_e8._0_4_) + (float)local_e8._0_4_;
    local_128.fields.y =
         (float)uVar12 * ((UVar62.fields.y + fVar15) - (float)local_e8._4_4_) + (float)local_e8._4_4_;
    fVar4 = ((extraout_XMM0_Dc_03 + (0.0 - extraout_XMM0_Dc_02)) - fStack_e0) * 0.0 + fStack_e0;
    fVar15 = ((extraout_XMM0_Dd_03 + (0.0 - extraout_XMM0_Dd_02)) - fStack_dc) * 0.0 + fStack_dc;
    local_128.fields.z =
         ((UVar62.fields.z + (fVar41 - UVar61.fields.z)) - local_108) * (float)uVar12 + local_108;
    pEVar36 = (bone->fields).parentBone;
    if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
    fVar5 = (pEVar36->fields).worldPosition.fields.x;
    fVar16 = (pEVar36->fields).worldPosition.fields.y;
    fVar41 = local_128.fields.z - (pEVar36->fields).worldPosition.fields.z;
    local_e8._0_4_ = local_128.fields.z;
    local_108 = local_128.fields.x;
    fStack_104 = local_128.fields.y;
    fStack_100 = fVar4;
    fStack_fc = fVar15;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      uVar46 = 0;
      uVar47 = 0;
      g_data_057a6845 = '\x01';
    }
    fVar5 = local_108 - fVar5;
    fVar16 = fStack_104 - fVar16;
    uVar42 = CONCAT44(fVar16,fVar5);
    auVar51._8_4_ = fStack_100 - 0.0;
    auVar51._12_4_ = fStack_fc - 0.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar42 = CONCAT44(fVar16,fVar5);
      uVar46 = 0;
      uVar47 = 0;
    }
    fVar4 = (float)uVar42;
    fVar15 = (float)((ulong)uVar42 >> 0x20);
    uVar12._0_4_ = fVar41 * fVar41 + fVar15 * fVar15 + fVar4 * fVar4;
    if ((float)uVar12 < 0.0) {
      uVar12._0_4_ = sqrtf((float)uVar12);
      uVar42 = CONCAT44(fVar15,fVar4);
      uVar46 = extraout_XMM0_Dc_04;
      uVar47 = extraout_XMM0_Dd_04;
      if ((float)uVar12 <= 1e-05) goto label_02494d6c;
label_02494e06:
      auVar51._0_8_ = uVar42;
      fVar41 = fVar41 / (float)uVar12;
      auVar28._4_4_ = (float)uVar12;
      auVar28._0_4_ = (float)uVar12;
      auVar28._8_4_ = uVar46;
      auVar28._12_4_ = uVar47;
      auVar50 = divps(auVar51,auVar28);
      uVar42 = auVar50._0_8_;
      pEVar36 = (bone->fields).parentBone;
    }
    else {
      uVar12._0_4_ = SQRT((float)uVar12);
      if (1e-05 < (float)uVar12) goto label_02494e06;
label_02494d6c:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar42 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pEVar36 = (bone->fields).parentBone;
    }
    if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
    uVar12._0_4_ = (float)uVar42;
    fVar4 = (float)((ulong)uVar42 >> 0x20);
    pUVar34 = (pEVar36->fields).transform;
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
    UVar61 = UnityEngine_Transform__TransformVector
                       (pUVar34,(bone->fields).localPosition.fields,(MethodInfo *)0x0);
    fVar45 = UVar61.fields.z;
    fVar15 = UVar61.fields.x;
    fVar5 = UVar61.fields.y;
    fVar16 = (float)extraout_XMM0_Dc_05;
    fVar44 = (float)extraout_XMM0_Dd_05;
    if (g_data_057a6841 == '\0') {
      fStack_110 = (float)extraout_XMM0_Dc_05;
      local_118 = (undefined1  [8])UVar61.fields._0_8_;
      fStack_10c = (float)extraout_XMM0_Dd_05;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      fVar15 = (float)local_118._0_4_;
      fVar5 = (float)local_118._4_4_;
      fVar16 = fStack_110;
      fVar44 = fStack_10c;
      in_stack_fffffffffffffeb4 = fVar45;
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_118._4_4_ = fVar5;
      local_118._0_4_ = fVar15;
      fStack_110 = fVar16;
      fStack_10c = fVar44;
      local_d8 = fVar5;
      fStack_d4 = fVar5;
      uStack_d0 = fVar16;
      uStack_cc = fVar44;
      il2cpp_runtime_helper_02337ed0();
      fVar15 = (float)local_118._0_4_;
      fVar5 = local_d8;
      in_stack_fffffffffffffeb4 = fVar45;
    }
    fVar15 = fVar45 * fVar45 + fVar5 * fVar5 + fVar15 * fVar15;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    auVar50 = _local_118;
    auVar54._4_4_ = fStack_104;
    auVar54._0_4_ = local_108;
    auVar54._8_4_ = fStack_100;
    auVar54._12_4_ = fStack_fc;
    pEVar36 = (bone->fields).parentBone;
    if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
    uVar6 = (pEVar36->fields).worldPosition.fields.x;
    uVar17 = (pEVar36->fields).worldPosition.fields.y;
    fVar5 = (float)uVar12 * fVar15 + (float)uVar6;
    fVar16 = fVar4 * fVar15 + (float)uVar17;
    fVar41 = fVar41 * fVar15 + (pEVar36->fields).worldPosition.fields.z;
    if ((__this->fields).m_SiblingConstraints == 0) {
      iVar39 = 1;
      fVar15 = (float)local_e8._0_4_;
    }
    else {
      pEVar36 = (bone->fields).leftBone;
      if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        iVar39 = 1;
        iVar38 = 1;
        pEVar36 = (bone->fields).rightBone;
        fVar15 = fVar5;
        fVar44 = fVar16;
      }
      else {
        uVar7 = (pEVar36->fields).worldPosition.fields.x;
        uVar18 = (pEVar36->fields).worldPosition.fields.y;
        local_118._4_4_ = uVar18;
        local_118._0_4_ = uVar7;
        in_stack_fffffffffffffeb4 = (float)local_e8._0_4_ - (pEVar36->fields).worldPosition.fields.z;
        if (g_data_057a6845 == '\0') {
          _fStack_110 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
          auVar52._0_4_ = local_108 - (float)local_118._0_4_;
          auVar52._4_4_ = fStack_104 - (float)local_118._4_4_;
          auVar52._8_4_ = fStack_100 - fStack_110;
          auVar52._12_4_ = fStack_fc - fStack_10c;
          iVar39 = *(int *)(TypeInfo_Math + 0xe4);
          auVar50 = _local_118;
        }
        else {
          auVar52._0_4_ = local_108 - (float)uVar7;
          auVar52._4_4_ = fStack_104 - (float)uVar18;
          auVar52._8_4_ = fStack_100 - 0.0;
          auVar52._12_4_ = fStack_fc - 0.0;
          iVar39 = *(int *)(TypeInfo_Math + 0xe4);
        }
        _local_118 = auVar52;
        auVar49 = _local_118;
        if (iVar39 == 0) {
          il2cpp_runtime_helper_02337ed0();
          auVar49 = _local_118;
          auVar50 = _local_118;
        }
        _local_118 = auVar50;
        uVar46 = 0;
        uVar47 = 0;
        uVar12._0_4_ = in_stack_fffffffffffffeb4 * in_stack_fffffffffffffeb4 +
                       auVar49._4_4_ * auVar49._4_4_ + auVar49._0_4_ * auVar49._0_4_;
        if ((float)uVar12 < 0.0) {
          _local_118 = auVar49;
          uVar12._0_4_ = sqrtf((float)uVar12);
          uVar46 = extraout_XMM0_Dc_06;
          uVar47 = extraout_XMM0_Dd_06;
          auVar49 = _local_118;
          if ((float)uVar12 <= 1e-05) goto label_02494faf;
label_02495026:
          in_stack_fffffffffffffeb4 = in_stack_fffffffffffffeb4 / (float)uVar12;
          auVar27._4_4_ = (float)uVar12;
          auVar27._0_4_ = (float)uVar12;
          auVar27._8_4_ = uVar46;
          auVar27._12_4_ = uVar47;
          _local_118 = divps(auVar49,auVar27);
        }
        else {
          uVar12._0_4_ = SQRT((float)uVar12);
          if (1e-05 < (float)uVar12) goto label_02495026;
label_02494faf:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          _fStack_110 = 0;
          local_118 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
          in_stack_fffffffffffffeb4 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        pUVar34 = (bone->fields).transform;
        if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
        UVar61 = UnityEngine_Transform__TransformVector
                           (pUVar34,(bone->fields).leftPosition.fields,(MethodInfo *)0x0);
        uVar12._0_4_ = UVar61.fields.x;
        uVar46 = UVar61.fields.y;
        uVar43 = extraout_XMM0_Dc_07;
        uVar47 = extraout_XMM0_Dd_07;
        fVar4 = UVar61.fields.z;
        if (g_data_057a6841 == '\0') {
          uStack_c0 = extraout_XMM0_Dc_07;
          local_c8 = (undefined1  [8])UVar61.fields._0_8_;
          uStack_bc = (uint16_t)extraout_XMM0_Dd_07;
          uStack_ba = SUB42(extraout_XMM0_Dd_07,2);
          local_d8 = UVar61.fields.z;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          uVar12._0_4_ = (float)local_c8._0_4_;
          uVar46 = local_c8._4_4_;
          uVar43 = uStack_c0;
          uVar47 = _uStack_bc;
          fVar4 = local_d8;
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_c8._4_4_ = uVar46;
          local_c8._0_4_ = (float)uVar12;
          uStack_c0 = uVar43;
          uStack_bc = (uint16_t)uVar47;
          uStack_ba = SUB42(uVar47,2);
          local_d8 = fVar4;
          local_78._0_4_ = uVar46;
          local_78._4_4_ = uVar46;
          uStack_70 = uVar43;
          uStack_6c = uVar47;
          il2cpp_runtime_helper_02337ed0();
          uVar12._0_4_ = (float)local_c8._0_4_;
          fVar4 = local_d8;
          uVar46 = local_78._0_4_;
        }
        uVar12._0_4_ = fVar4 * fVar4 + (float)uVar46 * (float)uVar46 + (float)uVar12 * (float)uVar12;
        if ((float)uVar12 < 0.0) {
          uVar12._0_4_ = sqrtf((float)uVar12);
        }
        else {
          uVar12._0_4_ = SQRT((float)uVar12);
        }
        auVar54._4_4_ = fStack_104;
        auVar54._0_4_ = local_108;
        auVar54._8_4_ = fStack_100;
        auVar54._12_4_ = fStack_fc;
        pEVar36 = (bone->fields).leftBone;
        if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
        uVar8 = (pEVar36->fields).worldPosition.fields.x;
        uVar19 = (pEVar36->fields).worldPosition.fields.y;
        fVar41 = fVar41 + in_stack_fffffffffffffeb4 * (float)uVar12 + (pEVar36->fields).worldPosition.fields.z
        ;
        iVar39 = 2;
        iVar38 = 2;
        pEVar36 = (bone->fields).rightBone;
        fVar15 = fVar5 + (float)local_118._0_4_ * (float)uVar12 + (float)uVar8;
        fVar44 = fVar16 + (float)local_118._4_4_ * (float)uVar12 + (float)uVar19;
        uVar12._0_4_ = fVar5;
        fVar4 = fVar16;
        auVar50 = _local_118;
      }
      fVar16 = fVar44;
      fVar5 = fVar15;
      fVar15 = (float)local_e8._0_4_;
      _local_118 = auVar50;
      if (pEVar36 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        uVar9 = (pEVar36->fields).worldPosition.fields.x;
        uVar20 = (pEVar36->fields).worldPosition.fields.y;
        local_118._4_4_ = uVar20;
        local_118._0_4_ = uVar9;
        in_stack_fffffffffffffeb4 = (float)local_e8._0_4_ - (pEVar36->fields).worldPosition.fields.z;
        if (g_data_057a6845 == '\0') {
          _fStack_110 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
          auVar53._0_4_ = local_108 - (float)local_118._0_4_;
          auVar53._4_4_ = fStack_104 - (float)local_118._4_4_;
          auVar53._8_4_ = fStack_100 - fStack_110;
          auVar53._12_4_ = fStack_fc - fStack_10c;
          iVar39 = *(int *)(TypeInfo_Math + 0xe4);
          uVar12._0_4_ = fVar5;
          fVar4 = fVar16;
          auVar50 = _local_118;
        }
        else {
          auVar53._0_4_ = auVar54._0_4_ - (float)uVar9;
          auVar53._4_4_ = auVar54._4_4_ - (float)uVar20;
          auVar53._8_4_ = auVar54._8_4_ - 0.0;
          auVar53._12_4_ = auVar54._12_4_ - 0.0;
          iVar39 = *(int *)(TypeInfo_Math + 0xe4);
          uVar12._0_4_ = fVar5;
          fVar4 = fVar16;
        }
        _local_118 = auVar53;
        auVar49 = _local_118;
        if (iVar39 == 0) {
          il2cpp_runtime_helper_02337ed0();
          auVar49 = _local_118;
          auVar50 = _local_118;
        }
        _local_118 = auVar50;
        uVar46 = 0;
        uVar47 = 0;
        fVar15 = in_stack_fffffffffffffeb4 * in_stack_fffffffffffffeb4 +
                 auVar49._4_4_ * auVar49._4_4_ + auVar49._0_4_ * auVar49._0_4_;
        if (fVar15 < 0.0) {
          _local_118 = auVar49;
          fVar15 = sqrtf(fVar15);
          uVar46 = extraout_XMM0_Dc_08;
          uVar47 = extraout_XMM0_Dd_08;
          auVar49 = _local_118;
          if (fVar15 <= 1e-05) goto label_024951e5;
label_0249523b:
          in_stack_fffffffffffffeb4 = in_stack_fffffffffffffeb4 / fVar15;
          auVar26._4_4_ = fVar15;
          auVar26._0_4_ = fVar15;
          auVar26._8_4_ = uVar46;
          auVar26._12_4_ = uVar47;
          _local_118 = divps(auVar49,auVar26);
        }
        else {
          fVar15 = SQRT(fVar15);
          if (1e-05 < fVar15) goto label_0249523b;
label_024951e5:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          _fStack_110 = 0;
          local_118 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
          in_stack_fffffffffffffeb4 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        pUVar34 = (bone->fields).transform;
        if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
        UVar61 = UnityEngine_Transform__TransformVector
                           (pUVar34,(bone->fields).rightPosition.fields,(MethodInfo *)0x0);
        fVar15 = UVar61.fields.x;
        uVar46 = UVar61.fields.y;
        uVar43 = extraout_XMM0_Dc_09;
        uVar47 = extraout_XMM0_Dd_09;
        fVar5 = UVar61.fields.z;
        if (g_data_057a6841 == '\0') {
          uStack_c0 = extraout_XMM0_Dc_09;
          local_c8 = (undefined1  [8])UVar61.fields._0_8_;
          uStack_bc = (uint16_t)extraout_XMM0_Dd_09;
          uStack_ba = SUB42(extraout_XMM0_Dd_09,2);
          local_d8 = UVar61.fields.z;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar15 = (float)local_c8._0_4_;
          uVar46 = local_c8._4_4_;
          uVar43 = uStack_c0;
          uVar47 = _uStack_bc;
          fVar5 = local_d8;
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_c8._4_4_ = uVar46;
          local_c8._0_4_ = fVar15;
          uStack_c0 = uVar43;
          uStack_bc = (uint16_t)uVar47;
          uStack_ba = SUB42(uVar47,2);
          local_d8 = fVar5;
          local_78._0_4_ = uVar46;
          local_78._4_4_ = uVar46;
          uStack_70 = uVar43;
          uStack_6c = uVar47;
          il2cpp_runtime_helper_02337ed0();
          fVar15 = (float)local_c8._0_4_;
          fVar5 = local_d8;
          uVar46 = local_78._0_4_;
        }
        fVar15 = fVar5 * fVar5 + (float)uVar46 * (float)uVar46 + fVar15 * fVar15;
        if (fVar15 < 0.0) {
          fVar15 = sqrtf(fVar15);
        }
        else {
          fVar15 = SQRT(fVar15);
        }
        auVar54._4_4_ = fStack_104;
        auVar54._0_4_ = local_108;
        auVar54._8_4_ = fStack_100;
        auVar54._12_4_ = fStack_fc;
        pEVar36 = (bone->fields).rightBone;
        if (pEVar36 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto label_0249572f;
        uVar10 = (pEVar36->fields).worldPosition.fields.x;
        uVar21 = (pEVar36->fields).worldPosition.fields.y;
        fVar5 = (float)uVar12 + (float)local_118._0_4_ * fVar15 + (float)uVar10;
        fVar16 = fVar4 + (float)local_118._4_4_ * fVar15 + (float)uVar21;
        fVar41 = fVar41 + in_stack_fffffffffffffeb4 * fVar15 + (pEVar36->fields).worldPosition.fields.z;
        iVar39 = iVar38 + 1;
        fVar15 = (float)local_e8._0_4_;
      }
    }
    fVar59 = auVar54._4_4_;
    fVar45 = (float)iVar39;
    fVar48 = (bone->fields).slackness / (float)(__this->fields).m_Iterations;
    fVar44 = 1.0;
    if (fVar48 <= 1.0) {
      fVar44 = fVar48;
    }
    fVar44 = (float)(-(uint)(0.0 <= fVar48) & (uint)fVar44);
    auVar55._4_12_ = auVar54._4_12_;
    fVar63 = (auVar54._0_4_ - fVar5 / fVar45) * fVar44 + fVar5 / fVar45;
    auVar57._0_8_ = auVar55._0_8_;
    auVar57._8_4_ = fVar59;
    auVar57._12_4_ = fVar59;
    auVar56._8_8_ = auVar57._8_8_;
    auVar56._0_8_ = CONCAT44((fVar59 - fVar16 / fVar45) * fVar44 + fVar16 / fVar45,fVar63);
    local_128.fields.z = (fVar15 - fVar41 / fVar45) * fVar44 + fVar41 / fVar45;
    local_128.fields._0_8_ = auVar56._0_8_;
    if (0.0 < (bone->fields).radius) {
      if (*(int *)(_DAT_05578bb0 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8) !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8),
                   MethodInfo_HashSet_1_T_Enumerator_EZhex1991_EZSoftBone_EZSoftBoneCo);
        local_88 = local_38;
        local_b8._32_8_ = local_48._0_8_;
        pIStack_90 = (Il2CppType *)local_48._8_8_;
        while( true ) {
          do {
            __this_02.fields._version = (int32_t)in_stack_fffffffffffffeb4;
            __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_
            ;
            __this_02.fields._index = in_stack_fffffffffffffea8._8_4_;
            __this_02.fields._current._0_4_ = (float)uVar12;
            __this_02.fields._current._4_4_ = fVar4;
            bVar30 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               (__this_02,(MethodInfo_3219C40 *)(local_b8 + 0x20));
            __this_09 = local_88;
            if ((char)bVar30 == '\0') {
              __this_03.fields._version = (int32_t)in_stack_fffffffffffffeb4;
              __this_03.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_;
              __this_03.fields._index = in_stack_fffffffffffffea8._8_4_;
              __this_03.fields._current._0_4_ = (float)uVar12;
              __this_03.fields._current._4_4_ = fVar4;
              System_Collections_Generic_HashSet_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_3219C30 *)(local_b8 + 0x20));
              goto label_0249556b;
            }
            if (local_88 == (UnityEngine_Component_o *)0x0) goto label_024957f5;
            pUVar34 = (bone->fields).transform;
            pUVar35 = UnityEngine_Component__get_transform(local_88,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar30 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar34,(UnityEngine_Object_o *)pUVar35,
                                (MethodInfo *)0x0);
          } while ((char)bVar30 == '\0');
          mask.fields.m_Mask = (UnityEngine_LayerMask_Fields)(__this->fields).m_LengthUnification;
          __this_10 = UnityEngine_Component__get_gameObject(__this_09,(MethodInfo *)0x0);
          if (__this_10 == (UnityEngine_GameObject_o *)0x0) break;
          uVar31 = UnityEngine_GameObject__get_layer(__this_10,(MethodInfo *)0x0);
          uVar32 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          uVar33 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if ((uVar32 | 1 << (uVar31 & 0x1f)) == uVar33) {
            (*__this_09->klass[1]._1.image)
                      ((bone->fields).radius,__this_09,&local_128,__this_09->klass[1]._1.gc_desc);
          }
        }
        do {
          auVar60 = il2cpp_runtime_helper_022b2c90();
          if (auVar60._8_4_ != 1) {
            __this_07.fields._version = (int32_t)in_stack_fffffffffffffeb4;
            __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_
            ;
            __this_07.fields._index = in_stack_fffffffffffffea8._8_4_;
            __this_07.fields._current._0_4_ = (float)uVar12;
            __this_07.fields._current._4_4_ = fVar4;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_07,(MethodInfo_3219C30 *)(local_b8 + 0x20));
label_02495983:
            _Unwind_Resume(auVar60._0_8_);
          }
          plVar37 = (long *)__cxa_begin_catch(auVar60._0_8_);
          lVar25 = *plVar37;
          __cxa_end_catch();
          __this_06.fields._version = (int32_t)in_stack_fffffffffffffeb4;
          __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_;
          __this_06.fields._index = in_stack_fffffffffffffea8._8_4_;
          __this_06.fields._current._0_4_ = (float)uVar12;
          __this_06.fields._current._4_4_ = fVar4;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_06,(MethodInfo_3219C30 *)(local_b8 + 0x20));
          pEVar40 = __this;
          if (lVar25 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar25);
            __this_08.fields._version = (int32_t)in_stack_fffffffffffffeb4;
            __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea8._0_8_;
            __this_08.fields._index = in_stack_fffffffffffffea8._8_4_;
            __this_08.fields._current._0_4_ = (float)uVar12;
            __this_08.fields._current._4_4_ = fVar4;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_08,(MethodInfo_321A1C0 *)local_b8);
            goto label_02495983;
          }
label_0249556b:
          __this_01 = (pEVar40->fields).m_ExtraColliders;
          if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) break;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
          local_b8._16_8_ = local_38;
          local_b8._0_8_ = local_48._0_8_;
          local_b8._8_8_ = local_48._8_8_;
          __this = (EZhex1991_EZSoftBone_EZSoftBone_o *)&MethodInfo_Boolean_MoveNext;
          while( true ) {
            __this_04.fields._version = (int32_t)in_stack_fffffffffffffeb4;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea8._0_8_;
            __this_04.fields._index = in_stack_fffffffffffffea8._8_4_;
            __this_04.fields._current._0_4_ = (float)uVar12;
            __this_04.fields._current._4_4_ = fVar4;
            bVar30 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_04,(MethodInfo_321A1D0 *)local_b8);
            uVar42 = local_b8._16_8_;
            if ((char)bVar30 == '\0') {
              __this_05.fields._version = (int32_t)in_stack_fffffffffffffeb4;
              __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea8._0_8_
              ;
              __this_05.fields._index = in_stack_fffffffffffffea8._8_4_;
              __this_05.fields._current._0_4_ = (float)uVar12;
              __this_05.fields._current._4_4_ = fVar4;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_05,(MethodInfo_321A1C0 *)local_b8);
              auVar56._8_8_ = 0;
              auVar56._0_4_ = local_128.fields.x;
              auVar56._4_4_ = local_128.fields.y;
              goto label_02495678;
            }
            if ((UnityEngine_Component_o *)local_b8._16_8_ == (UnityEngine_Component_o *)0x0) break;
            pUVar34 = (bone->fields).transform;
            pUVar35 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)local_b8._16_8_,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar30 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar34,(UnityEngine_Object_o *)pUVar35,
                                (MethodInfo *)0x0);
            if (((char)bVar30 != '\0') &&
               (bVar30 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)uVar42,(MethodInfo *)0x0)
               , (char)bVar30 != '\0')) {
              EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                        (&local_128,(UnityEngine_Collider_o *)uVar42,(bone->fields).radius,method_00);
            }
          }
          il2cpp_runtime_helper_022b2c90();
label_024957f5:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      goto label_0249572f;
    }
label_02495678:
    uVar11 = (bone->fields).speed.fields.x;
    uVar22 = (bone->fields).speed.fields.y;
    auVar58._0_4_ = auVar56._0_4_ - (float)local_68;
    auVar58._4_4_ = auVar56._4_4_ - local_68._4_4_;
    auVar58._8_4_ = auVar56._8_4_ - (float)uStack_60;
    auVar58._12_4_ = auVar56._12_4_ - uStack_60._4_4_;
    auVar29._4_4_ = local_58;
    auVar29._0_4_ = local_58;
    auVar29._8_4_ = fStack_50;
    auVar29._12_4_ = fStack_4c;
    auVar50 = divps(auVar58,auVar29);
    fVar41 = (bone->fields).speed.fields.z;
    (bone->fields).speed.fields.x = (auVar50._0_4_ + (float)uVar11) * 0.5;
    (bone->fields).speed.fields.y = (auVar50._4_4_ + (float)uVar22) * 0.5;
    (bone->fields).speed.fields.z = ((local_128.fields.z - local_ec) / local_58 + fVar41) * 0.5;
    (bone->fields).worldPosition.fields.x = local_128.fields.x;
    (bone->fields).worldPosition.fields.y = local_128.fields.y;
    (bone->fields).worldPosition.fields.z = local_128.fields.z;
    __this_11 = (bone->fields).childBones;
  }
  else {
    pUVar34 = (bone->fields).transform;
    if (pUVar34 == (UnityEngine_Transform_o *)0x0) goto label_0249572f;
    UVar61 = UnityEngine_Transform__get_position(pUVar34,(MethodInfo *)0x0);
    (bone->fields).worldPosition.fields.x = (float)(int)UVar61.fields._0_8_;
    (bone->fields).worldPosition.fields.y = (float)(int)((ulong)UVar61.fields._0_8_ >> 0x20);
    (bone->fields).worldPosition.fields.z = UVar61.fields.z;
    __this_11 = (bone->fields).childBones;
  }
  if (__this_11 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    iVar39 = 0;
    do {
      if ((__this_11->fields)._size <= iVar39) {
        return;
      }
      pEVar36 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_11,iVar39,MethodInfo_EZSoftBone_Bone_get_Item);
      EZhex1991_EZSoftBone_EZSoftBone__UpdateBones(pEVar40,pEVar36,local_58,method_01);
      iVar39 = iVar39 + 1;
      __this_11 = (bone->fields).childBones;
    } while (__this_11 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
label_0249572f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2493100

void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *in_RCX;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (g_data_057a691a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_Bone_get_Item);
    g_data_057a691a = '\x01';
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
                            ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
                (__this_00,(uint)*(byte *)((long)&(__this->fields).m_ClosedSiblings + 1),
                 (__this->fields).m_StartDepth,in_RCX);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___ctor (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2496460

void EZhex1991_EZSoftBone_EZSoftBone___ctor(EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_List_Collider__o *__this_00;
  UnityEngine_AnimationCurve_o *pUVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (g_data_057a691b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Bone);
    g_data_057a691b = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).m_ClosedSiblings + 1) = 1;
  UVar1 = UnityEngine_LayerMask__op_Implicit_4dfc6f0(1,(MethodInfo *)0x0);
  (__this->fields).m_LengthUnification = (int32_t)UVar1.fields.m_Mask;
  __this_00 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields).m_ExtraColliders = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_ExtraColliders,__this_00);
  pUVar2 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_RadiusCurve = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_RadiusCurve,pUVar2);
  (__this->fields).m_ConstantDeltaTime = 0.03;
  (__this->fields).m_Iterations = 1;
  (__this->fields).m_SleepThreshold = 0.005;
  (__this->fields).m_ForceScale = 1.0;
  __this_01 = (System_Collections_Generic_List_EZSoftBone_Bone__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Bone);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
  (__this->fields).m_Structures = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_Structures);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___cctor (const MethodInfo* method);
// 0x2496590

void EZhex1991_EZSoftBone_EZSoftBone___cctor(MethodInfo *method)

{
  if (g_data_057a691c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBone);
    g_data_057a691c = '\x01';
  }
  **(undefined4 **)(TypeInfo_EZSoftBone + 0xb8) = 0x358637bd;
  return;
}


