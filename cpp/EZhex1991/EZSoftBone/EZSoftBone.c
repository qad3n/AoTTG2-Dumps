// Type: EZhex1991.EZSoftBone.EZSoftBone
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBone.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBone.Bone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, UnityEngine_Transform_o* systemSpace, UnityEngine_Transform_o* transform, System_Collections_Generic_IEnumerable_Transform__o* endBones, int32_t startDepth, int32_t depth, float nodeLength, float boneLength, const MethodInfo* method);
// 0x2455940

void EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,UnityEngine_Transform_o *systemSpace,
               UnityEngine_Transform_o *transform,
               System_Collections_Generic_IEnumerable_Transform__o *endBones,int32_t startDepth,
               int32_t depth,float nodeLength,float boneLength,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  int32_t *piVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_array *pEVar6;
  long lVar7;
  bool_conflict bVar8;
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
  float local_78;
  float fStack_74;
  
  if (DAT_056fe062 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bone);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains_Transform);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_init_method_metadata(&TypeInfo_List_Bone);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe062 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_EZSoftBone_Bone__o *)il2cpp_runtime_glue(TypeInfo_List_Bone);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
  (__this->fields).childBones = pSVar10;
  il2cpp_runtime_glue(&(__this->fields).childBones);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).transform = transform;
  il2cpp_runtime_glue(&(__this->fields).transform,transform);
  (__this->fields).systemSpace = systemSpace;
  il2cpp_runtime_glue(&(__this->fields).systemSpace);
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar13 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    (__this->fields).worldPosition.fields.x = (float)(int)UVar13.fields._0_8_;
    (__this->fields).worldPosition.fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
    (__this->fields).worldPosition.fields.z = UVar13.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)systemSpace,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    pUVar1 = &(__this->fields).worldPosition;
    fVar3 = (pUVar1->fields).x;
    fVar4 = (pUVar1->fields).y;
    fVar11 = (__this->fields).worldPosition.fields.z;
    if ((char)bVar8 == '\0') {
      if (systemSpace == (UnityEngine_Transform_o *)0x0) goto LAB_02455da3;
      UVar13 = UnityEngine_Transform__InverseTransformPoint
                         (systemSpace,pUVar1->fields,(MethodInfo *)0x0);
      fVar11 = UVar13.fields.z;
      fVar3 = UVar13.fields.x;
      fVar4 = UVar13.fields.y;
    }
    (__this->fields).systemPosition.fields.x = fVar3;
    (__this->fields).systemPosition.fields.y = fVar4;
    (__this->fields).systemPosition.fields.z = fVar11;
    UVar13 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    (__this->fields).localPosition.fields.x = (float)(int)UVar13.fields._0_8_;
    (__this->fields).localPosition.fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
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
    fVar3 = (__this->fields).treeLength;
    if (fVar3 <= fVar11) {
      fVar3 = fVar11;
    }
    (__this->fields).treeLength = fVar3;
    iVar9 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
    if (0 < iVar9) {
      bVar8 = System_Linq_Enumerable__Contains<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)endBones,
                         (Il2CppObject *)transform,MethodInfo_Boolean_Contains_Transform);
      if ((char)bVar8 == '\0') {
        index = 0;
        iVar9 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
        if (0 < iVar9) {
          do {
            __this_00 = UnityEngine_Transform__GetChild(transform,index,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_02455da3;
            __this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_02455da3;
            bVar8 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
              UVar14 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
              if (DAT_056fdea6 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Math);
                DAT_056fdea6 = '\x01';
              }
              local_78 = UVar13.fields.x;
              fStack_74 = UVar13.fields.y;
              fStack_74 = fStack_74 - UVar14.fields.y;
              fVar11 = UVar13.fields.z - UVar14.fields.z;
              local_78 = local_78 - UVar14.fields.x;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_init_class();
              }
              fVar11 = local_78 * local_78 + fStack_74 * fStack_74 + fVar11 * fVar11;
              if (fVar11 < 0.0) {
                fVar11 = sqrtf(fVar11);
              }
              else {
                fVar11 = SQRT(fVar11);
              }
              fVar3 = (__this->fields).boneLength;
              __this_02 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)il2cpp_runtime_glue(TypeInfo_Bone)
              ;
              EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                        (__this_02,systemSpace,__this_00,endBones,startDepth,depth + 1,fVar11,fVar3,
                         in_stack_ffffffffffffff68);
              if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_02455da3;
              (__this_02->fields).parentBone = __this;
              il2cpp_runtime_glue(&__this_02->fields,__this);
              lVar7 = MethodInfo_Void_Add;
              pSVar10 = (__this->fields).childBones;
              if (pSVar10 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0)
              goto LAB_02455da3;
              piVar2 = &(pSVar10->fields)._version;
              *piVar2 = *piVar2 + 1;
              pEVar6 = (pSVar10->fields)._items;
              if (pEVar6 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_array *)0x0) goto LAB_02455da3;
              uVar5 = (pSVar10->fields)._size;
              if (uVar5 < (uint)pEVar6->max_length) {
                (pSVar10->fields)._size = uVar5 + 1;
                pEVar6->m_Items[(int)uVar5] = __this_02;
                il2cpp_runtime_glue(pEVar6->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar10,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              fVar11 = (__this->fields).treeLength;
              fVar3 = (__this_02->fields).treeLength;
              if (fVar11 <= fVar3) {
                fVar11 = fVar3;
              }
              (__this->fields).treeLength = fVar11;
            }
            index = index + 1;
            iVar9 = UnityEngine_Transform__get_childCount(transform,(MethodInfo *)0x0);
          } while (index < iVar9);
        }
      }
    }
    fVar11 = (__this->fields).treeLength;
    fVar3 = 0.0;
    if ((fVar11 != 0.0) || (NAN(fVar11))) {
      fVar3 = (__this->fields).boneLength / fVar11;
    }
    (__this->fields).normalizedLength = fVar3;
    return;
  }
LAB_02455da3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x2456230

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength(__this,(__this->fields).treeLength,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float treeLength, const MethodInfo* method);
// 0x2456240

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float treeLength,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  float fVar1;
  
  if (DAT_056fe063 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe063 = '\x01';
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
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength(__this_00,treeLength,method_00);
      index = index + 1;
      __this_01 = (__this->fields).childBones;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetLeftSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* left, const MethodInfo* method);
// 0x24561d0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetLeftSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,
               EZhex1991_EZSoftBone_EZSoftBone_Bone_o *left,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  if ((left != __this) && (left != (__this->fields).rightBone)) {
    (__this->fields).leftBone = left;
    il2cpp_runtime_glue(&(__this->fields).leftBone);
    if ((left == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__InverseTransformPoint
                      (__this_00,(UnityEngine_Vector3_o)(left->fields).worldPosition.fields,
                       (MethodInfo *)0x0);
    (__this->fields).leftPosition.fields = UVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRightSibling
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* right, const MethodInfo* method);
// 0x2456170

void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRightSibling
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,
               EZhex1991_EZSoftBone_EZSoftBone_Bone_o *right,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  if ((right != __this) && (right != (__this->fields).leftBone)) {
    (__this->fields).rightBone = right;
    il2cpp_runtime_glue(&(__this->fields).rightBone);
    if ((right == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (__this_00 = (__this->fields).transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__InverseTransformPoint
                      (__this_00,(UnityEngine_Vector3_o)(right->fields).worldPosition.fields,
                       (MethodInfo *)0x0);
    (__this->fields).rightPosition.fields = UVar1;
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, const MethodInfo* method);
// 0x2456320

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,MethodInfo *method)

{
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  MethodInfo *method_00;
  int index;
  float fVar1;
  
  if (DAT_056fe064 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe064 = '\x01';
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
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate(__this_01,baseRadius,radiusCurve,method_00);
      index = index + 1;
      __this_00 = (__this->fields).childBones;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$Inflate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, float baseRadius, UnityEngine_AnimationCurve_o* radiusCurve, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* material, const MethodInfo* method);
// 0x24563f0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,float baseRadius,
               UnityEngine_AnimationCurve_o *radiusCurve,
               EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *material,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_00;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_01;
  int index;
  float fVar2;
  float fVar3;
  
  if (DAT_056fe065 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe065 = '\x01';
  }
  if (radiusCurve != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar2 = UnityEngine_AnimationCurve__Evaluate
                      (radiusCurve,(__this->fields).normalizedLength,(MethodInfo *)0x0);
    (__this->fields).radius = fVar2 * baseRadius;
    if ((material != (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)0x0) &&
       (pUVar1 = (material->fields).m_DampingCurve, pUVar1 != (UnityEngine_AnimationCurve_o *)0x0))
    {
      fVar2 = (material->fields).m_Damping;
      fVar3 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar1,(__this->fields).normalizedLength,(MethodInfo *)0x0);
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
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                                     MethodInfo_EZSoftBone_Bone_get_Item);
              if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
              EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                        (__this_01,baseRadius,radiusCurve,material,method);
              index = index + 1;
              __this_00 = (__this->fields).childBones;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x24550a0

void EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,int32_t startDepth,MethodInfo *method
               )

{
  UnityEngine_Transform_o *pUVar1;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (DAT_056fe066 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe066 = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0245515b;
    UnityEngine_Transform__set_localPosition
              (pUVar1,(UnityEngine_Vector3_o)(__this->fields).localPosition.fields,(MethodInfo *)0x0
              );
    pUVar1 = (__this->fields).transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0245515b;
    UnityEngine_Transform__set_localRotation
              (pUVar1,(UnityEngine_Quaternion_o)(__this->fields).localRotation.fields,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).childBones;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,method_00);
      index = index + 1;
      __this_01 = (__this->fields).childBones;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
LAB_0245515b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateTransform
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, bool siblingRotationConstraints, int32_t startDepth, const MethodInfo* method);
// 0x2457d20

void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
               (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this,
               bool_conflict siblingRotationConstraints,int32_t startDepth,MethodInfo *method)

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
  
  if (DAT_056fe067 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe067 = '\x01';
  }
  if (startDepth < (__this->fields).depth) {
    pSVar22 = (__this->fields).childBones;
    if (pSVar22 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_0245832d;
    if ((pSVar22->fields)._size != 1) goto LAB_02458258;
    pIVar19 = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar22,0,MethodInfo_EZSoftBone_Bone_get_Item);
    pUVar21 = (__this->fields).transform;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
    UVar27 = UnityEngine_Transform__get_rotation(pUVar21,(MethodInfo *)0x0);
    if (pIVar19 == (Il2CppObject *)0x0) goto LAB_0245832d;
    __this_00 = (__this->fields).transform;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
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
      if ((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method ==
          (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        if (pEVar20 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
          pUVar21 = (__this->fields).transform;
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
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
          goto LAB_02458151;
        }
      }
      else {
        pUVar1 = &(__this->fields).leftPosition;
        uVar9._0_4_ = (pUVar1->fields).x;
        uVar9._4_4_ = (pUVar1->fields).y;
        fVar24 = (__this->fields).leftPosition.fields.z;
        UVar17 = pUVar1->fields;
        uVar3 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.x;
        uVar11 = (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.y
        ;
        pUVar21 = (__this->fields).transform;
        uVar4 = (__this->fields).worldPosition.fields.x;
        uVar12 = (__this->fields).worldPosition.fields.y;
        UVar31.fields.x = (float)uVar3 - (float)uVar4;
        UVar31.fields.y = (float)uVar11 - (float)uVar12;
        UVar31.fields.z =
             (((EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)method)->fields).worldPosition.fields.z -
             (__this->fields).worldPosition.fields.z;
        if (pEVar20 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
LAB_02458151:
          vector_00.fields.y = UVar31.fields.y;
          vector_00.fields.x = UVar31.fields.x;
          vector_00.fields.z = UVar31.fields.z;
          UVar31 = UnityEngine_Transform__InverseTransformVector
                             (pUVar21,vector_00,(MethodInfo *)0x0);
          fromDirection.fields.z = fVar24;
          fromDirection.fields.x = (float)(int)uVar9;
          fromDirection.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
          UVar27 = UnityEngine_Quaternion__FromToRotation(fromDirection,UVar31,(MethodInfo *)0x0);
          pUVar21 = (__this->fields).transform;
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
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
               (local_98 * UVar31.fields.y + fStack_94 * fVar24 + local_88 * fVar25) -
               fVar23 * fStack_84;
          UVar31.fields.z =
               (local_88 * fVar23 + fStack_94 * UVar31.fields.y + fStack_84 * fVar25) -
               fVar24 * local_98;
          fVar26 = (fStack_84 * fVar24 + fStack_94 * fVar23 + local_98 * fVar25) -
                   local_88 * UVar31.fields.y;
          fVar24 = ((fStack_94 * fVar25 - fVar24 * local_88) - fStack_84 * UVar31.fields.y) -
                   fVar23 * local_98;
        }
        else {
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
          UVar31 = UnityEngine_Transform__InverseTransformVector(pUVar21,UVar31,(MethodInfo *)0x0);
          UVar27 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)UVar17,UVar31,(MethodInfo *)0x0);
          pEVar20 = (__this->fields).rightBone;
          if (pEVar20 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245832d;
          pUVar21 = (__this->fields).transform;
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
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
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
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
               (local_98 * fVar25 + fStack_54 * fVar24 + fVar23 * fStack_94) -
               UVar31.fields.y * local_58;
          UVar31.fields.z =
               (fStack_94 * fVar25 + fStack_54 * UVar31.fields.y + fVar24 * local_58) -
               fVar23 * local_98;
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
LAB_02458258:
    pUVar21 = (__this->fields).transform;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
    UnityEngine_Transform__set_position
              (pUVar21,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,
               (MethodInfo *)0x0);
  }
  pUVar21 = (__this->fields).systemSpace;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar18 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar18 != '\0') {
    pUVar21 = (__this->fields).systemSpace;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0245832d;
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
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar22,index,MethodInfo_EZSoftBone_Bone_get_Item);
      if (pEVar20 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
                (pEVar20,siblingRotationConstraints & 0xff,startDepth,method);
      index = index + 1;
      pSVar22 = (__this->fields).childBones;
    } while (pSVar22 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
LAB_0245832d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$SetRestState
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x24557b0

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
  
  if (DAT_056fe068 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe068 = '\x01';
  }
  pUVar2 = (__this->fields).transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    (__this->fields).worldPosition.fields = UVar6;
    pUVar2 = (__this->fields).systemSpace;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      pUVar2 = (__this->fields).systemSpace;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_02455928;
      UVar6 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__InverseTransformPoint
                        (pUVar2,(UnityEngine_Vector3_o)(__this->fields).worldPosition.fields,
                         (MethodInfo *)0x0);
      (__this->fields).systemPosition.fields = UVar6;
    }
    else {
      fVar4 = (__this->fields).worldPosition.fields.y;
      fVar1 = (__this->fields).worldPosition.fields.z;
      (__this->fields).systemPosition.fields.x = (__this->fields).worldPosition.fields.x;
      (__this->fields).systemPosition.fields.y = fVar4;
      (__this->fields).systemPosition.fields.z = fVar1;
    }
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
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
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,
                               MethodInfo_EZSoftBone_Bone_get_Item);
        if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
        index = index + 1;
        __this_01 = (__this->fields).childBones;
      } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
LAB_02455928:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone.Bone$$UpdateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace (EZhex1991_EZSoftBone_EZSoftBone_Bone_o* __this, const MethodInfo* method);
// 0x24565c0

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
  
  if (DAT_056fe069 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe069 = '\x01';
  }
  pUVar1 = (__this->fields).systemSpace;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
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
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_01 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(__this_01,method_00);
      index = index + 1;
      __this_00 = (__this->fields).childBones;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_rootBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_rootBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454290

System_Collections_Generic_List_Transform__o *
EZhex1991_EZSoftBone_EZSoftBone__get_rootBones
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_RootBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_endBones
// il2cpp: System_Collections_Generic_List_Transform__o* EZhex1991_EZSoftBone_EZSoftBone__get_endBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24542a0

System_Collections_Generic_List_Transform__o *
EZhex1991_EZSoftBone_EZSoftBone__get_endBones
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_EndBones;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sharedMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24542b0

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_sharedMaterial
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar2;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar3;
  MethodInfo *method_00;
  
  if (DAT_056fe054 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe054 = '\x01';
  }
  method_00 = (MethodInfo *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppEVar3 = &(__this->fields).m_Material;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    pEVar2 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(method_00);
    *ppEVar3 = pEVar2;
    il2cpp_runtime_glue(ppEVar3,pEVar2);
  }
  return *ppEVar3;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sharedMaterial
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x2454420

void EZhex1991_EZSoftBone_EZSoftBone__set_sharedMaterial
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,MethodInfo *method)

{
  (__this->fields).m_Material = value;
  il2cpp_runtime_glue(&(__this->fields).m_Material);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_material
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBone__get_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454430

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBone__get_material
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar1;
  bool_conflict bVar2;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar3;
  MethodInfo *method_00;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o **ppEVar4;
  
  if (DAT_056fe055 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBoneMaterial_Instantiate_EZSoftBoneMateria);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe055 = '\x01';
  }
  pEVar3 = (__this->fields).m_InstanceMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppEVar1 = &(__this->fields).m_InstanceMaterial;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pEVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (DAT_056fe054 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_056fe054 = '\x01';
    }
    method_00 = (MethodInfo *)(__this->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppEVar4 = &(__this->fields).m_Material;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pEVar3 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(method_00);
      *ppEVar4 = pEVar3;
      il2cpp_runtime_glue(ppEVar4,pEVar3);
    }
    pEVar3 = *ppEVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pEVar3 = (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)
             UnityEngine_Object__Instantiate<object>((Il2CppObject *)pEVar3,MethodInfo_EZSoftBoneMaterial_Instantiate_EZSoftBoneMateria);
    *ppEVar4 = pEVar3;
    il2cpp_runtime_glue(ppEVar4,pEVar3);
    *ppEVar1 = pEVar3;
    il2cpp_runtime_glue(ppEVar1,pEVar3);
  }
  return *ppEVar1;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_material
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_material (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* value, const MethodInfo* method);
// 0x2454550

void EZhex1991_EZSoftBone_EZSoftBone__set_material
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *value,MethodInfo *method)

{
  (__this->fields).m_Material = value;
  il2cpp_runtime_glue(&(__this->fields).m_Material);
  (__this->fields).m_InstanceMaterial = value;
  il2cpp_runtime_glue(&(__this->fields).m_InstanceMaterial,value);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_startDepth
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454590

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_startDepth
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_StartDepth;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_startDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24545a0

void EZhex1991_EZSoftBone_EZSoftBone__set_startDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_StartDepth = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingConstraints
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24545b0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_siblingConstraints
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24545c0

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_SiblingConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_closedSiblings
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24545d0

bool_conflict
EZhex1991_EZSoftBone_EZSoftBone__get_closedSiblings
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields).m_ClosedSiblings);
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_closedSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x24545e0

void EZhex1991_EZSoftBone_EZSoftBone__set_closedSiblings
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).m_ClosedSiblings = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_siblingRotationConstraints
// il2cpp: bool EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24545f0

bool_conflict
EZhex1991_EZSoftBone_EZSoftBone__get_siblingRotationConstraints
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields).m_ClosedSiblings + 1));
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_siblingRotationConstraints
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints (EZhex1991_EZSoftBone_EZSoftBone_o* __this, bool value, const MethodInfo* method);
// 0x2454600

void EZhex1991_EZSoftBone_EZSoftBone__set_siblingRotationConstraints
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields).m_ClosedSiblings + 1) = (char)value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_lengthUnification
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454610

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_lengthUnification
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SiblingRotationConstraints;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_lengthUnification
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x2454620

void EZhex1991_EZSoftBone_EZSoftBone__set_lengthUnification
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_SiblingRotationConstraints = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_collisionLayers
// il2cpp: UnityEngine_LayerMask_o EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454630

UnityEngine_LayerMask_o
EZhex1991_EZSoftBone_EZSoftBone__get_collisionLayers
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)
         (UnityEngine_LayerMask_Fields)(__this->fields).m_LengthUnification;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_collisionLayers
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_LayerMask_o value, const MethodInfo* method);
// 0x2454640

void EZhex1991_EZSoftBone_EZSoftBone__set_collisionLayers
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_LayerMask_o value,
               MethodInfo *method)

{
  (__this->fields).m_LengthUnification = (int32_t)value.fields.m_Mask;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_extraColliders
// il2cpp: System_Collections_Generic_List_Collider__o* EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454650

System_Collections_Generic_List_Collider__o *
EZhex1991_EZSoftBone_EZSoftBone__get_extraColliders
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ExtraColliders;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454660

float EZhex1991_EZSoftBone_EZSoftBone__get_radius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Radius;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_radius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_radius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x2454670

void EZhex1991_EZSoftBone_EZSoftBone__set_radius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_Radius = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_radiusCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454680

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBone__get_radiusCurve
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_RadiusCurve;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_deltaTimeMode
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454690

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_deltaTimeMode
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DeltaTimeMode;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_deltaTimeMode
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24546a0

void EZhex1991_EZSoftBone_EZSoftBone__set_deltaTimeMode
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_DeltaTimeMode = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_constantDeltaTime
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24546b0

float EZhex1991_EZSoftBone_EZSoftBone__get_constantDeltaTime
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ConstantDeltaTime;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_constantDeltaTime
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x24546c0

void EZhex1991_EZSoftBone_EZSoftBone__set_constantDeltaTime
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ConstantDeltaTime = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_iterations
// il2cpp: int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24546d0

int32_t EZhex1991_EZSoftBone_EZSoftBone__get_iterations
                  (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Iterations;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_iterations
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_iterations (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t value, const MethodInfo* method);
// 0x24546e0

void EZhex1991_EZSoftBone_EZSoftBone__set_iterations
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).m_Iterations = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_sleepThreshold
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24546f0

float EZhex1991_EZSoftBone_EZSoftBone__get_sleepThreshold
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SleepThreshold;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_sleepThreshold
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_sleepThreshold (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x2454700

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
// 0x2454710

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_gravityAligner
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_GravityAligner;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravityAligner
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x2454720

void EZhex1991_EZSoftBone_EZSoftBone__set_gravityAligner
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  (__this->fields).m_GravityAligner = value;
  il2cpp_runtime_glue(&(__this->fields).m_GravityAligner);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_gravity
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454730

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBone__get_gravity
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).m_Gravity.fields;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_gravity
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_gravity (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x2454750

void EZhex1991_EZSoftBone_EZSoftBone__set_gravity
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  (__this->fields).m_Gravity.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).m_Gravity.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).m_Gravity.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceModule
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneForceField_o* EZhex1991_EZSoftBone_EZSoftBone__get_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454760

EZhex1991_EZSoftBone_EZSoftBoneForceField_o *
EZhex1991_EZSoftBone_EZSoftBone__get_forceModule
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceModule;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceModule
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBoneForceField_o* value, const MethodInfo* method);
// 0x2454770

void EZhex1991_EZSoftBone_EZSoftBone__set_forceModule
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               EZhex1991_EZSoftBone_EZSoftBoneForceField_o *value,MethodInfo *method)

{
  (__this->fields).m_ForceModule = value;
  il2cpp_runtime_glue(&(__this->fields).m_ForceModule);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_forceScale
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454790

float EZhex1991_EZSoftBone_EZSoftBone__get_forceScale
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ForceScale;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_forceScale
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x24547a0

void EZhex1991_EZSoftBone_EZSoftBone__set_forceScale
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields).m_ForceScale = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_simulateSpace
// il2cpp: UnityEngine_Transform_o* EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24547b0

UnityEngine_Transform_o *
EZhex1991_EZSoftBone_EZSoftBone__get_simulateSpace
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SimulateSpace;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_simulateSpace
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x24547c0

void EZhex1991_EZSoftBone_EZSoftBone__set_simulateSpace
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  (__this->fields).m_SimulateSpace = value;
  il2cpp_runtime_glue(&(__this->fields).m_SimulateSpace);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalRadius
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24547e0

float EZhex1991_EZSoftBone_EZSoftBone__get_globalRadius
                (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (__this->fields)._globalRadius_k__BackingField;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float value, const MethodInfo* method);
// 0x24547f0

void EZhex1991_EZSoftBone_EZSoftBone__set_globalRadius
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._globalRadius_k__BackingField = value;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$get_globalForce
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_EZSoftBone__get_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454800

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_EZSoftBone__get_globalForce
          (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._globalForce_k__BackingField.fields;
}


// EZhex1991.EZSoftBone.EZSoftBone$$set_globalForce
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce (EZhex1991_EZSoftBone_EZSoftBone_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x2454820

void EZhex1991_EZSoftBone_EZSoftBone__set_globalForce
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  (__this->fields)._globalForce_k__BackingField.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields)._globalForce_k__BackingField.fields.y =
       (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields)._globalForce_k__BackingField.fields.z = value.fields.z;
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$Start
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Start (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454830

void EZhex1991_EZSoftBone_EZSoftBone__Start
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone__CreateBones(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetSiblings(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength(__this,method);
  EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnEnable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454890

void EZhex1991_EZSoftBone_EZSoftBone__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (DAT_056fe057 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe057 = '\x01';
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
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$Update
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__Update (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454930

void EZhex1991_EZSoftBone_EZSoftBone__Update
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$LateUpdate
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24549d0

void EZhex1991_EZSoftBone_EZSoftBone__LateUpdate
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

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
    if (iVar1 != 0) goto LAB_02454a04;
    deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  }
  EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures(__this,deltaTime,method);
LAB_02454a04:
  EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms(__this,method);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__OnDisable (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2455080

void EZhex1991_EZSoftBone_EZSoftBone__OnDisable
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2455090

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms(__this,(__this->fields).m_StartDepth,in_RDX);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RevertTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, int32_t startDepth, const MethodInfo* method);
// 0x2454940

void EZhex1991_EZSoftBone_EZSoftBone__RevertTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,int32_t startDepth,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (DAT_056fe056 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe056 = '\x01';
  }
  __this_01 = (__this->fields).m_Structures;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__RevertTransforms(__this_00,startDepth,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$InitStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__InitStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454860

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
// 0x24548a0

void EZhex1991_EZSoftBone_EZSoftBone__SetRestState
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (DAT_056fe057 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe057 = '\x01';
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
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__SetRestState(__this_00,method_00);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$CreateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__CreateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2455170

void EZhex1991_EZSoftBone_EZSoftBone__CreateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar4;
  UnityEngine_Transform_o *systemSpace;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_array *pEVar5;
  long lVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *transform;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  int iVar8;
  System_Collections_Generic_List_Transform__o *pSVar9;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_056fe058 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bone);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe058 = '\x01';
  }
  pSVar4 = (__this->fields).m_Structures;
  if (pSVar4 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
LAB_02455372:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar2 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar2) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields).m_RootBones;
  if (((pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0) &&
      (iVar8 = (pSVar9->fields)._size, iVar8 != 0)) && (0 < iVar8)) {
    iVar8 = 0;
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,MethodInfo_Transform_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pSVar9 = (__this->fields).m_RootBones;
        if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_02455372;
        systemSpace = (__this->fields).m_SimulateSpace;
        transform = (UnityEngine_Transform_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,
                               MethodInfo_Transform_get_Item);
        pSVar9 = (__this->fields).m_EndBones;
        iVar2 = (__this->fields).m_StartDepth;
        __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)il2cpp_runtime_glue(TypeInfo_Bone);
        EZhex1991_EZSoftBone_EZSoftBone_Bone___ctor
                  (__this_00,systemSpace,transform,
                   (System_Collections_Generic_IEnumerable_Transform__o *)pSVar9,iVar2,0,0.0,0.0,
                   in_stack_ffffffffffffffb8);
        lVar6 = MethodInfo_Void_Add;
        pSVar4 = (__this->fields).m_Structures;
        if (pSVar4 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_02455372;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pEVar5 = (pSVar4->fields)._items;
        if (pEVar5 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_array *)0x0) goto LAB_02455372;
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pEVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pEVar5->m_Items[(int)uVar3] = __this_00;
          il2cpp_runtime_glue(pEVar5->m_Items + (int)uVar3,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_00,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      pSVar9 = (__this->fields).m_RootBones;
      if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_02455372;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (pSVar9->fields)._size);
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblings
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblings (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2455380

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
  
  if (DAT_056fe059 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Enqueue);
    il2cpp_init_method_metadata(&MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Queue_Bone);
    DAT_056fe059 = '\x01';
  }
  iVar4 = (__this->fields).m_SiblingConstraints;
  if (iVar4 == 2) {
    bones = (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)il2cpp_runtime_glue(TypeInfo_Queue_Bone);
    System_Collections_Generic_Queue<object>___ctor
              ((System_Collections_Generic_Queue_T__o *)bones,MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    pEVar2 = (EZhex1991_EZSoftBone_EZSoftBone_o *)(__this->fields).m_Structures;
    if (pEVar2 != (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) {
      if (bones == (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) {
        if (0 < *(int *)&(pEVar2->fields).m_CancellationTokenSource) {
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pEVar2,0,MethodInfo_EZSoftBone_Bone_get_Item);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
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
                        (pEVar2,bones,(uint)(byte)(__this->fields).m_ClosedSiblings,in_RCX);
              return;
            }
            break;
          }
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pEVar2,iVar4,MethodInfo_EZSoftBone_Bone_get_Item
                             );
          System_Collections_Generic_Queue<object>__Enqueue
                    ((System_Collections_Generic_Queue_T__o *)bones,pIVar3,MethodInfo_Void_Enqueue);
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
        pEVar2 = (EZhex1991_EZSoftBone_EZSoftBone_o *)il2cpp_runtime_glue(TypeInfo_Queue_Bone);
        System_Collections_Generic_Queue<object>___ctor
                  ((System_Collections_Generic_Queue_T__o *)pEVar2,MethodInfo_Queue_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
        pSVar1 = (__this->fields).m_Structures;
        if ((pSVar1 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                                MethodInfo_EZSoftBone_Bone_get_Item), pEVar2 == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0))
        break;
        __this_00 = pEVar2;
        System_Collections_Generic_Queue<object>__Enqueue
                  ((System_Collections_Generic_Queue_T__o *)pEVar2,pIVar3,MethodInfo_Void_Enqueue);
        EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
                  (__this_00,(System_Collections_Generic_Queue_EZSoftBone_Bone__o *)pEVar2,
                   (uint)(byte)(__this->fields).m_ClosedSiblings,in_RCX);
        iVar4 = iVar4 + 1;
        pSVar1 = (__this->fields).m_Structures;
      } while (pSVar1 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetSiblingsByDepth
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth (EZhex1991_EZSoftBone_EZSoftBone_o* __this, System_Collections_Generic_Queue_EZSoftBone_Bone__o* bones, bool closed, const MethodInfo* method);
// 0x2455db0

/* WARNING: Type propagation algorithm not settling */

void EZhex1991_EZSoftBone_EZSoftBone__SetSiblingsByDepth
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               System_Collections_Generic_Queue_EZSoftBone_Bone__o *bones,bool_conflict closed,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  int iVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  UnityEngine_Vector3_o UVar8;
  char local_3c;
  
  if (DAT_056fe05a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_Dequeue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Enqueue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_056fe05a = '\x01';
  }
  if (((bones != (System_Collections_Generic_Queue_EZSoftBone_Bone__o *)0x0) &&
      (pIVar2 = System_Collections_Generic_Queue<object>__Dequeue
                          ((System_Collections_Generic_Queue_T__o *)bones,MethodInfo_EZSoftBone_Bone_Dequeue),
      pIVar2 != (Il2CppObject *)0x0)) &&
     (pSVar7 = pIVar2[6].monitor, pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar6 = 0;
    do {
      if ((pSVar7->fields)._size <= iVar6) {
        pIVar3 = pIVar2;
        if ((bones->fields)._size < 1) {
          return;
        }
        goto LAB_02455ed1;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item(pSVar7,iVar6,MethodInfo_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue<object>__Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,pIVar3,MethodInfo_Void_Enqueue);
      iVar6 = iVar6 + 1;
      pSVar7 = pIVar2[6].monitor;
    } while (pSVar7 != (System_Collections_Generic_List_object__o *)0x0);
  }
LAB_02456165:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_02455ed1:
  do {
    pIVar4 = System_Collections_Generic_Queue<object>__Dequeue
                       ((System_Collections_Generic_Queue_T__o *)bones,MethodInfo_EZSoftBone_Bone_Dequeue);
    if ((pIVar4 == (Il2CppObject *)0x0) ||
       (pSVar7 = pIVar4[6].monitor, pSVar7 == (System_Collections_Generic_List_object__o *)0x0))
    goto LAB_02456165;
    iVar6 = 0;
    while (iVar6 < (pSVar7->fields)._size) {
      pIVar5 = System_Collections_Generic_List<object>__get_Item(pSVar7,iVar6,MethodInfo_EZSoftBone_Bone_get_Item);
      System_Collections_Generic_Queue<object>__Enqueue
                ((System_Collections_Generic_Queue_T__o *)bones,pIVar5,MethodInfo_Void_Enqueue);
      iVar6 = iVar6 + 1;
      pSVar7 = pIVar4[6].monitor;
      if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_02456165;
    }
    local_3c = (char)closed;
    if (*(int *)((long)&pIVar3[9].monitor + 4) == *(int *)((long)&pIVar4[9].monitor + 4)) {
      pIVar5 = pIVar2;
      if (pIVar3 == pIVar4) goto LAB_02455ec3;
      if (pIVar4 != pIVar3[3].monitor) {
        pIVar3[5].klass = (Il2CppClass *)pIVar4;
        il2cpp_runtime_glue(pIVar3 + 5);
        if ((UnityEngine_Transform_o *)pIVar3[7].klass == (UnityEngine_Transform_o *)0x0)
        goto LAB_02456165;
        UVar8 = UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Transform_o *)pIVar3[7].klass,
                           *(UnityEngine_Vector3_Fields *)&pIVar4[7].monitor,(MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)&pIVar3[5].monitor = UVar8.fields;
      }
      if (pIVar3 == (Il2CppObject *)pIVar4[5].klass) goto LAB_02455ec3;
      pIVar4[3].monitor = pIVar3;
      il2cpp_runtime_glue(&pIVar4[3].monitor);
      if ((UnityEngine_Transform_o *)pIVar4[7].klass == (UnityEngine_Transform_o *)0x0)
      goto LAB_02456165;
      UVar8 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Transform_o *)pIVar4[7].klass,
                         *(UnityEngine_Vector3_Fields *)&pIVar3[7].monitor,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar4 + 4) = UVar8.fields;
      iVar6 = (bones->fields)._size;
    }
    else {
      pIVar5 = pIVar4;
      if (local_3c != '\0') {
        if ((pIVar2 == pIVar3) || (pIVar2 == pIVar3[3].monitor)) {
          if (pIVar2 == (Il2CppObject *)0x0) goto LAB_02456165;
          if (pIVar2 == pIVar3) goto LAB_02455ec3;
          pIVar1 = (Il2CppObject *)pIVar2[5].klass;
        }
        else {
          pIVar3[5].klass = (Il2CppClass *)pIVar2;
          il2cpp_runtime_glue(pIVar3 + 5);
          if ((pIVar2 == (Il2CppObject *)0x0) ||
             ((UnityEngine_Transform_o *)pIVar3[7].klass == (UnityEngine_Transform_o *)0x0))
          goto LAB_02456165;
          UVar8 = UnityEngine_Transform__InverseTransformPoint
                            ((UnityEngine_Transform_o *)pIVar3[7].klass,
                             *(UnityEngine_Vector3_Fields *)&pIVar2[7].monitor,(MethodInfo *)0x0);
          *(UnityEngine_Vector3_Fields *)&pIVar3[5].monitor = UVar8.fields;
          pIVar1 = (Il2CppObject *)pIVar2[5].klass;
        }
        if (pIVar3 != pIVar1) {
          pIVar2[3].monitor = pIVar3;
          il2cpp_runtime_glue(&pIVar2[3].monitor);
          if ((UnityEngine_Transform_o *)pIVar2[7].klass == (UnityEngine_Transform_o *)0x0)
          goto LAB_02456165;
          UVar8 = UnityEngine_Transform__InverseTransformPoint
                            ((UnityEngine_Transform_o *)pIVar2[7].klass,
                             *(UnityEngine_Vector3_Fields *)&pIVar3[7].monitor,(MethodInfo *)0x0);
          *(UnityEngine_Vector3_Fields *)(pIVar2 + 4) = UVar8.fields;
        }
      }
LAB_02455ec3:
      iVar6 = (bones->fields)._size;
      pIVar2 = pIVar5;
    }
    pIVar3 = pIVar4;
  } while (0 < iVar6);
  if (local_3c != '\0') {
    if (pIVar2 == (Il2CppObject *)0x0) goto LAB_02456165;
    if (pIVar2 != pIVar4) {
      if (pIVar4 != (Il2CppObject *)((Il2CppObject *)((long)pIVar2 + 0x50))->klass) {
        ((Il2CppObject *)((long)pIVar2 + 0x30))->monitor = pIVar4;
        il2cpp_runtime_glue(&((Il2CppObject *)((long)pIVar2 + 0x30))->monitor);
        __this_00 = (UnityEngine_Transform_o *)((Il2CppObject *)((long)pIVar2 + 0x70))->klass;
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_02456165;
        UVar8 = UnityEngine_Transform__InverseTransformPoint
                          (__this_00,*(UnityEngine_Vector3_Fields *)&pIVar4[7].monitor,
                           (MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)((long)pIVar2 + 0x40) = UVar8.fields;
      }
      if (pIVar2 != pIVar4[3].monitor) {
        pIVar4[5].klass = (Il2CppClass *)pIVar2;
        il2cpp_runtime_glue(pIVar4 + 5);
        if ((UnityEngine_Transform_o *)pIVar4[7].klass == (UnityEngine_Transform_o *)0x0)
        goto LAB_02456165;
        UVar8 = UnityEngine_Transform__InverseTransformPoint
                          ((UnityEngine_Transform_o *)pIVar4[7].klass,
                           *(UnityEngine_Vector3_Fields *)
                            &((Il2CppObject *)((long)pIVar2 + 0x70))->monitor,(MethodInfo *)0x0);
        *(UnityEngine_Vector3_Fields *)&pIVar4[5].monitor = UVar8.fields;
      }
    }
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$SetTreeLength
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2455580

void EZhex1991_EZSoftBone_EZSoftBone__SetTreeLength
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar4;
  int iVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_EZSoftBone_Bone__o *pSVar8;
  float local_1c;
  
  if (DAT_056fe05b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe05b = '\x01';
  }
  iVar5 = (__this->fields).m_SiblingRotationConstraints;
  if (iVar5 == 1) {
    pSVar8 = (__this->fields).m_Structures;
    if (pSVar8 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      uVar6 = 0;
      do {
        if ((pSVar8->fields)._size <= (int)uVar6) {
          return;
        }
        pMVar7 = (MethodInfo *)(ulong)uVar6;
        pEVar4 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar8,uVar6,MethodInfo_EZSoftBone_Bone_get_Item);
        if (pEVar4 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength
                  (pEVar4,(pEVar4->fields).treeLength,pMVar7);
        uVar6 = uVar6 + 1;
        pSVar8 = (__this->fields).m_Structures;
      } while (pSVar8 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
  else {
    if (iVar5 != 2) {
      return;
    }
    pSVar8 = (__this->fields).m_Structures;
    if (pSVar8 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
      iVar5 = 0;
      local_1c = 0.0;
      do {
        iVar2 = (pSVar8->fields)._size;
        if (iVar2 <= iVar5) {
          if (iVar2 < 1) {
            return;
          }
          uVar6 = 0;
          goto LAB_02455690;
        }
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar8,iVar5,MethodInfo_EZSoftBone_Bone_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) break;
        fVar1 = *(float *)((long)&pIVar3[10].klass + 4);
        if (local_1c <= fVar1) {
          local_1c = fVar1;
        }
        iVar5 = iVar5 + 1;
        pSVar8 = (__this->fields).m_Structures;
      } while (pSVar8 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
    }
  }
LAB_024556ca:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_02455690:
  pMVar7 = (MethodInfo *)(ulong)uVar6;
  pEVar4 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
           System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar8,uVar6,MethodInfo_EZSoftBone_Bone_get_Item);
  if (pEVar4 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_024556ca;
  EZhex1991_EZSoftBone_EZSoftBone_Bone__SetTreeLength(pEVar4,local_1c,pMVar7);
  pSVar8 = (__this->fields).m_Structures;
  if (pSVar8 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_024556ca;
  uVar6 = uVar6 + 1;
  if ((pSVar8->fields)._size <= (int)uVar6) {
    return;
  }
  goto LAB_02455690;
}


// EZhex1991.EZSoftBone.EZSoftBone$$RefreshRadius
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__RefreshRadius (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x24556d0

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
  
  if (DAT_056fe05c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe05c = '\x01';
  }
  __this_01 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
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
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_02 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (__this_02,(__this->fields)._globalRadius_k__BackingField,
                 (__this->fields).m_RadiusCurve,method_00);
      index = index + 1;
      __this_00 = (__this->fields).m_Structures;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateStructures
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateStructures (EZhex1991_EZSoftBone_EZSoftBone_o* __this, float deltaTime, const MethodInfo* method);
// 0x2454a10

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
  
  if (DAT_056fe05d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBone);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe05d = '\x01';
    if (*(int *)(TypeInfo_EZSoftBone + 0xe4) != 0) goto LAB_02454a44;
LAB_02454aa6:
    il2cpp_init_class();
    fVar19 = **(float **)(TypeInfo_EZSoftBone + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_EZSoftBone + 0xe4) == 0) goto LAB_02454aa6;
LAB_02454a44:
    fVar19 = **(float **)(TypeInfo_EZSoftBone + 0xb8);
  }
  if (deltaTime <= fVar19) {
    return;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
LAB_02454f60:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
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
  if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_02454f60;
  ppEVar1 = &(__this->fields).m_Material;
  if (0 < (pSVar13->fields)._size) {
    do {
      pEVar11 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar13,index_00,
                           MethodInfo_EZSoftBone_Bone_get_Item);
      fVar19 = (__this->fields)._globalRadius_k__BackingField;
      radiusCurve = (__this->fields).m_RadiusCurve;
      if (DAT_056fe054 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_056fe054 = '\x01';
      }
      pMVar12 = (MethodInfo *)*ppEVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pEVar10 = EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(pMVar12);
        *ppEVar1 = pEVar10;
        il2cpp_runtime_glue(ppEVar1,pEVar10);
      }
      if (pEVar11 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_02454f60;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__Inflate
                (pEVar11,fVar19,radiusCurve,(__this->fields).m_Material,in_RCX);
      pUVar9 = (__this->fields).m_SimulateSpace;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pSVar13 = (__this->fields).m_Structures;
        if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_02454f60;
        pMVar12 = (MethodInfo *)(ulong)index_00;
        pEVar11 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar13,index_00,
                             MethodInfo_EZSoftBone_Bone_get_Item);
        if (pEVar11 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_02454f60;
        EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateSpace(pEVar11,pMVar12);
      }
      index_00 = index_00 + 1;
      pSVar13 = (__this->fields).m_Structures;
      if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_02454f60;
    } while ((int)index_00 < (pSVar13->fields)._size);
  }
  pUVar9 = (__this->fields).m_GravityAligner;
  fVar15 = (__this->fields).m_Gravity.fields.y;
  fVar19 = (__this->fields).m_Gravity.fields.z;
  (__this->fields)._globalForce_k__BackingField.fields.x = (__this->fields).m_Gravity.fields.x;
  (__this->fields)._globalForce_k__BackingField.fields.y = fVar15;
  (__this->fields)._globalForce_k__BackingField.fields.z = fVar19;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto LAB_02454ed8;
  pUVar9 = (__this->fields).m_GravityAligner;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_02454f60;
  UVar23 = UnityEngine_Transform__TransformDirection
                     (pUVar9,(__this->fields).m_Gravity.fields,(MethodInfo *)0x0);
  fVar19 = UVar23.fields.z;
  auVar22._8_4_ = extraout_XMM0_Dc;
  auVar22._0_8_ = UVar23.fields._0_8_;
  auVar22._12_4_ = extraout_XMM0_Dd;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
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
    if (fVar15 <= 1e-05) goto LAB_02454d3d;
LAB_02454d8e:
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
    if (1e-05 < fVar15) goto LAB_02454d8e;
LAB_02454d3d:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  uVar3._0_4_ = (__this->fields).m_Gravity.fields.x;
  uVar3._4_4_ = (__this->fields).m_Gravity.fields.y;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  fVar15 = (__this->fields).m_Gravity.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar5 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  uVar17 = 0;
  uVar18 = 0;
  fVar16 = fVar15 * fVar15 +
           (float)uVar3._4_4_ * (float)uVar3._4_4_ +
           (float)(undefined4)uVar3 * (float)(undefined4)uVar3;
  if (fVar16 < 0.0) {
    fVar16 = sqrtf(fVar16);
    uVar17 = extraout_XMM0_Dc_01;
    uVar18 = extraout_XMM0_Dd_01;
    if (fVar16 <= 1e-05) goto LAB_02454e19;
LAB_02454e6a:
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
    if (1e-05 < fVar16) goto LAB_02454e6a;
LAB_02454e19:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
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
LAB_02454ed8:
  iVar5 = (__this->fields).m_Iterations;
  if (0 < iVar5) {
    pSVar13 = (__this->fields).m_Structures;
    iVar14 = 0;
    do {
      if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_02454f60;
      index = 0;
      while (index < (pSVar13->fields)._size) {
        pEVar11 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar13,index,MethodInfo_EZSoftBone_Bone_get_Item
                            );
        EZhex1991_EZSoftBone_EZSoftBone__UpdateBones
                  (__this,pEVar11,deltaTime / (float)iVar5,method_00);
        index = index + 1;
        pSVar13 = (__this->fields).m_Structures;
        if (pSVar13 == (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) goto LAB_02454f60;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (__this->fields).m_Iterations);
  }
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateBones
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones (EZhex1991_EZSoftBone_EZSoftBone_o* __this, EZhex1991_EZSoftBone_EZSoftBone_Bone_o* bone, float deltaTime, const MethodInfo* method);
// 0x24566b0

void EZhex1991_EZSoftBone_EZSoftBone__UpdateBones
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,
               EZhex1991_EZSoftBone_EZSoftBone_Bone_o *bone,float deltaTime,MethodInfo *method)

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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_Component_o *__this_06;
  bool_conflict bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  UnityEngine_Transform_o *pUVar33;
  UnityEngine_Transform_o *pUVar34;
  UnityEngine_GameObject_o *__this_07;
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *pEVar35;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar36;
  int iVar37;
  MethodInfo *method_02;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_08;
  float fVar38;
  undefined8 uVar39;
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
  uint32_t uVar40;
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
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar59;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o UVar58;
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
  _union_247328 local_78;
  uint32_t uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  UnityEngine_Component_o *local_38;
  undefined1 auVar54 [16];
  undefined1 auVar52 [16];
  float fVar56;
  
  local_58 = deltaTime;
  fStack_50 = in_XMM0_Dc;
  fStack_4c = in_XMM0_Dd;
  if (DAT_056fe05e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBoneColliderBase_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_EZhex1991_EZSoftBone_EZS);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe05e = '\x01';
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
  if (bone == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
  if ((__this->fields).m_StartDepth < (bone->fields).depth) {
    uVar12._0_4_ = (bone->fields).worldPosition.fields.x;
    uVar12._4_4_ = (bone->fields).worldPosition.fields.y;
    local_128.fields.z = (bone->fields).worldPosition.fields.z;
    uStack_60 = 0;
    uVar2 = (__this->fields)._globalForce_k__BackingField.fields.x;
    uVar13 = (__this->fields)._globalForce_k__BackingField.fields.y;
    fStack_100 = 0.0;
    fStack_fc = 0.0;
    fVar38 = (__this->fields)._globalForce_k__BackingField.fields.z;
    pEVar23 = (__this->fields).m_ForceModule;
    local_128.fields._0_8_ = uVar12;
    local_108 = (float)uVar2;
    fStack_104 = (float)uVar13;
    local_ec = local_128.fields.z;
    local_68 = uVar12;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar29 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pEVar23,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar29 != '\0') {
      pEVar23 = (__this->fields).m_ForceModule;
      if (pEVar23 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto LAB_0245761f;
      bVar29 = UnityEngine_Behaviour__get_isActiveAndEnabled
                         ((UnityEngine_Behaviour_o *)pEVar23,(MethodInfo *)0x0);
      if ((char)bVar29 != '\0') {
        pEVar23 = (__this->fields).m_ForceModule;
        if (pEVar23 == (EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)0x0) goto LAB_0245761f;
        uVar12._0_4_ = (bone->fields).normalizedLength;
        method_02 = (MethodInfo *)0x0;
        pUVar33 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pEVar23,(MethodInfo *)0x0);
        __this_00 = (pEVar23->fields).m_Force;
        if ((__this_00 == (EZhex1991_EZSoftBone_EZSoftBoneForce_o *)0x0) ||
           (UVar57 = EZhex1991_EZSoftBone_EZSoftBoneForce__GetForce
                               (__this_00,
                                (pEVar23->fields)._time_k__BackingField -
                                (float)uVar12 * (pEVar23->fields).m_Conductivity,method_02),
           pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_0245761f;
        UVar57 = UnityEngine_Transform__TransformDirection(pUVar33,UVar57,(MethodInfo *)0x0);
        fVar4 = (__this->fields).m_ForceScale;
        uVar12._0_4_ = UVar57.fields.z * fVar4;
        local_108 = local_108 + fVar4 * UVar57.fields.x;
        fStack_104 = fStack_104 + fVar4 * UVar57.fields.y;
        fStack_100 = fStack_100 + extraout_XMM0_Dc * 0.0;
        fStack_fc = fStack_fc + extraout_XMM0_Dd * 0.0;
        fVar38 = fVar38 + (float)uVar12;
      }
    }
    pEVar24 = (__this->fields).customForce;
    if (pEVar24 != (EZhex1991_EZSoftBone_CustomForce_o *)0x0) {
      uVar39 = (*(code *)(pEVar24->fields).invoke_impl)
                         ((bone->fields).normalizedLength,(pEVar24->fields).method_code);
      local_108 = local_108 + (float)uVar39;
      fStack_104 = fStack_104 + (float)((ulong)uVar39 >> 0x20);
      fStack_100 = fStack_100 + extraout_XMM0_Dc_00;
      fStack_fc = fStack_fc + extraout_XMM0_Dd_00;
      fVar38 = fVar38 + (float)uVar12;
    }
    pUVar33 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
    UVar57 = UnityEngine_Transform__get_localScale(pUVar33,(MethodInfo *)0x0);
    pUVar33 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
    UVar58 = UnityEngine_Transform__get_localScale(pUVar33,(MethodInfo *)0x0);
    fStack_e0 = (float)extraout_XMM0_Dc_01;
    local_e8 = (undefined1  [8])UVar58.fields._0_8_;
    fStack_dc = (float)extraout_XMM0_Dd_01;
    pUVar33 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
    local_138 = UVar57.fields.x;
    fStack_134 = UVar57.fields.y;
    local_138 = local_138 * local_108;
    uVar43 = local_e8._4_4_;
    uVar12._0_4_ = (float)local_e8._4_4_ * fStack_104;
    UVar57 = UnityEngine_Transform__get_localScale(pUVar33,(MethodInfo *)0x0);
    fVar4 = 1.0 - (bone->fields).resistance;
    uVar3 = (bone->fields).speed.fields.x;
    uVar14 = (bone->fields).speed.fields.y;
    auVar46._0_4_ = fVar4 * local_138;
    auVar46._4_4_ = fVar4 * (float)uVar12;
    auVar46._8_4_ = fStack_134 * 0.0;
    auVar46._12_4_ = (float)uVar43 * 0.0;
    uVar12._0_4_ = (float)(__this->fields).m_Iterations;
    auVar47._4_4_ = (float)uVar12;
    auVar47._0_4_ = (float)uVar12;
    auVar47._8_8_ = 0;
    auVar47 = divps(auVar46,auVar47);
    fVar16 = 1.0 - (bone->fields).damping;
    fVar41 = fVar16 * (auVar47._0_4_ + (float)uVar3);
    fVar42 = fVar16 * (auVar47._4_4_ + (float)uVar14);
    fVar16 = fVar16 * ((fVar4 * fVar38 * UVar57.fields.z) / (float)uVar12 +
                      (bone->fields).speed.fields.z);
    (bone->fields).speed.fields.x = fVar41;
    (bone->fields).speed.fields.y = fVar42;
    (bone->fields).speed.fields.z = fVar16;
    fVar45 = fVar16 * fVar16 + fVar42 * fVar42 + fVar41 * fVar41;
    pfVar1 = &(__this->fields).m_SleepThreshold;
    fVar38 = local_ec;
    uVar12._0_4_ = (float)local_68;
    fVar4 = local_68._4_4_;
    fVar15 = (float)uStack_60;
    fVar5 = uStack_60._4_4_;
    if (*pfVar1 <= fVar45 && fVar45 != *pfVar1) {
      uVar12._0_4_ = fVar41 * local_58 + (float)local_68;
      fVar4 = fVar42 * local_58 + local_68._4_4_;
      fVar15 = (auVar47._8_4_ + 0.0) * 0.0 * fStack_50 + (float)uStack_60;
      fVar5 = (auVar47._12_4_ + 0.0) * 0.0 * fStack_4c + uStack_60._4_4_;
      fVar38 = fVar16 * local_58 + local_ec;
      local_128.fields._0_8_ = CONCAT44(fVar4,(float)uVar12);
      local_128.fields.z = fVar38;
    }
    pEVar35 = (bone->fields).parentBone;
    if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
    local_e8._4_4_ = fVar4;
    local_e8._0_4_ = (float)uVar12;
    fStack_e0 = fVar15;
    fStack_dc = fVar5;
    pUVar33 = (pEVar35->fields).transform;
    local_108 = fVar38;
    if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
    fVar4 = (pEVar35->fields).worldPosition.fields.x;
    fVar15 = (pEVar35->fields).worldPosition.fields.y;
    fVar38 = (pEVar35->fields).worldPosition.fields.z;
    UVar57 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
    pEVar35 = (bone->fields).parentBone;
    if ((pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) ||
       (pUVar33 = (pEVar35->fields).transform, pUVar33 == (UnityEngine_Transform_o *)0x0))
    goto LAB_0245761f;
    fVar4 = fVar4 - UVar57.fields.x;
    fVar15 = fVar15 - UVar57.fields.y;
    uVar43 = 0;
    uVar44 = 0;
    UVar58 = UnityEngine_Transform__TransformPoint
                       (pUVar33,(bone->fields).localPosition.fields,(MethodInfo *)0x0);
    fVar5 = (bone->fields).stiffness / (float)(__this->fields).m_Iterations;
    uVar12._0_4_ = 1.0;
    if (fVar5 <= 1.0) {
      uVar12._0_4_ = fVar5;
    }
    uVar12._0_4_ = (float)(-(uint)(0.0 <= fVar5) & (uint)(float)uVar12);
    local_128.fields.x =
         (float)uVar12 * ((UVar58.fields.x + fVar4) - (float)local_e8._0_4_) + (float)local_e8._0_4_
    ;
    local_128.fields.y =
         (float)uVar12 * ((UVar58.fields.y + fVar15) - (float)local_e8._4_4_) +
         (float)local_e8._4_4_;
    fVar4 = ((extraout_XMM0_Dc_03 + (0.0 - extraout_XMM0_Dc_02)) - fStack_e0) * 0.0 + fStack_e0;
    fVar15 = ((extraout_XMM0_Dd_03 + (0.0 - extraout_XMM0_Dd_02)) - fStack_dc) * 0.0 + fStack_dc;
    local_128.fields.z =
         ((UVar58.fields.z + (fVar38 - UVar57.fields.z)) - local_108) * (float)uVar12 + local_108;
    pEVar35 = (bone->fields).parentBone;
    if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
    fVar5 = (pEVar35->fields).worldPosition.fields.x;
    fVar16 = (pEVar35->fields).worldPosition.fields.y;
    fVar38 = local_128.fields.z - (pEVar35->fields).worldPosition.fields.z;
    local_e8._0_4_ = local_128.fields.z;
    local_108 = local_128.fields.x;
    fStack_104 = local_128.fields.y;
    fStack_100 = fVar4;
    fStack_fc = fVar15;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      uVar43 = 0;
      uVar44 = 0;
      DAT_056fde20 = '\x01';
    }
    fVar5 = local_108 - fVar5;
    fVar16 = fStack_104 - fVar16;
    uVar39 = CONCAT44(fVar16,fVar5);
    auVar48._8_4_ = fStack_100 - 0.0;
    auVar48._12_4_ = fStack_fc - 0.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
      uVar39 = CONCAT44(fVar16,fVar5);
      uVar43 = 0;
      uVar44 = 0;
    }
    fVar4 = (float)uVar39;
    fVar15 = (float)((ulong)uVar39 >> 0x20);
    uVar12._0_4_ = fVar38 * fVar38 + fVar15 * fVar15 + fVar4 * fVar4;
    if ((float)uVar12 < 0.0) {
      uVar12._0_4_ = sqrtf((float)uVar12);
      uVar39 = CONCAT44(fVar15,fVar4);
      uVar43 = extraout_XMM0_Dc_04;
      uVar44 = extraout_XMM0_Dd_04;
      if ((float)uVar12 <= 1e-05) goto LAB_02456c5c;
LAB_02456cf6:
      auVar48._0_8_ = uVar39;
      fVar38 = fVar38 / (float)uVar12;
      auVar27._4_4_ = (float)uVar12;
      auVar27._0_4_ = (float)uVar12;
      auVar27._8_4_ = uVar43;
      auVar27._12_4_ = uVar44;
      auVar47 = divps(auVar48,auVar27);
      uVar39 = auVar47._0_8_;
      pEVar35 = (bone->fields).parentBone;
    }
    else {
      uVar12._0_4_ = SQRT((float)uVar12);
      if (1e-05 < (float)uVar12) goto LAB_02456cf6;
LAB_02456c5c:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar39 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pEVar35 = (bone->fields).parentBone;
    }
    if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
    uVar12._0_4_ = (float)uVar39;
    fVar4 = (float)((ulong)uVar39 >> 0x20);
    pUVar33 = (pEVar35->fields).transform;
    if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
    UVar57 = UnityEngine_Transform__TransformVector
                       (pUVar33,(bone->fields).localPosition.fields,(MethodInfo *)0x0);
    fVar42 = UVar57.fields.z;
    fVar15 = UVar57.fields.x;
    fVar5 = UVar57.fields.y;
    fVar16 = (float)extraout_XMM0_Dc_05;
    fVar41 = (float)extraout_XMM0_Dd_05;
    if (DAT_056fde1c == '\0') {
      fStack_110 = (float)extraout_XMM0_Dc_05;
      local_118 = (undefined1  [8])UVar57.fields._0_8_;
      fStack_10c = (float)extraout_XMM0_Dd_05;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      fVar15 = (float)local_118._0_4_;
      fVar5 = (float)local_118._4_4_;
      fVar16 = fStack_110;
      fVar41 = fStack_10c;
      in_stack_fffffffffffffeb4 = fVar42;
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_118._4_4_ = fVar5;
      local_118._0_4_ = fVar15;
      fStack_110 = fVar16;
      fStack_10c = fVar41;
      local_d8 = fVar5;
      fStack_d4 = fVar5;
      uStack_d0 = fVar16;
      uStack_cc = fVar41;
      il2cpp_init_class();
      fVar15 = (float)local_118._0_4_;
      fVar5 = local_d8;
      in_stack_fffffffffffffeb4 = fVar42;
    }
    fVar15 = fVar42 * fVar42 + fVar5 * fVar5 + fVar15 * fVar15;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    auVar47 = _local_118;
    auVar51._4_4_ = fStack_104;
    auVar51._0_4_ = local_108;
    auVar51._8_4_ = fStack_100;
    auVar51._12_4_ = fStack_fc;
    pEVar35 = (bone->fields).parentBone;
    if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
    uVar6 = (pEVar35->fields).worldPosition.fields.x;
    uVar17 = (pEVar35->fields).worldPosition.fields.y;
    fVar5 = (float)uVar12 * fVar15 + (float)uVar6;
    fVar16 = fVar4 * fVar15 + (float)uVar17;
    fVar38 = fVar38 * fVar15 + (pEVar35->fields).worldPosition.fields.z;
    if ((__this->fields).m_SiblingConstraints == 0) {
      iVar37 = 1;
      fVar15 = (float)local_e8._0_4_;
    }
    else {
      pEVar35 = (bone->fields).leftBone;
      if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        iVar37 = 1;
        iVar36 = 1;
        pEVar35 = (bone->fields).rightBone;
        fVar15 = fVar5;
        fVar41 = fVar16;
      }
      else {
        uVar7 = (pEVar35->fields).worldPosition.fields.x;
        uVar18 = (pEVar35->fields).worldPosition.fields.y;
        local_118._4_4_ = uVar18;
        local_118._0_4_ = uVar7;
        in_stack_fffffffffffffeb4 = (float)local_e8._0_4_ - (pEVar35->fields).worldPosition.fields.z
        ;
        if (DAT_056fde20 == '\0') {
          _fStack_110 = 0;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde20 = '\x01';
          auVar49._0_4_ = local_108 - (float)local_118._0_4_;
          auVar49._4_4_ = fStack_104 - (float)local_118._4_4_;
          auVar49._8_4_ = fStack_100 - fStack_110;
          auVar49._12_4_ = fStack_fc - fStack_10c;
          iVar37 = *(int *)(TypeInfo_Math + 0xe4);
          auVar47 = _local_118;
        }
        else {
          auVar49._0_4_ = local_108 - (float)uVar7;
          auVar49._4_4_ = fStack_104 - (float)uVar18;
          auVar49._8_4_ = fStack_100 - 0.0;
          auVar49._12_4_ = fStack_fc - 0.0;
          iVar37 = *(int *)(TypeInfo_Math + 0xe4);
        }
        _local_118 = auVar49;
        auVar46 = _local_118;
        if (iVar37 == 0) {
          il2cpp_init_class();
          auVar46 = _local_118;
          auVar47 = _local_118;
        }
        _local_118 = auVar47;
        uVar43 = 0;
        uVar44 = 0;
        uVar12._0_4_ = in_stack_fffffffffffffeb4 * in_stack_fffffffffffffeb4 +
                       auVar46._4_4_ * auVar46._4_4_ + auVar46._0_4_ * auVar46._0_4_;
        if ((float)uVar12 < 0.0) {
          _local_118 = auVar46;
          uVar12._0_4_ = sqrtf((float)uVar12);
          uVar43 = extraout_XMM0_Dc_06;
          uVar44 = extraout_XMM0_Dd_06;
          auVar46 = _local_118;
          if ((float)uVar12 <= 1e-05) goto LAB_02456e9f;
LAB_02456f16:
          in_stack_fffffffffffffeb4 = in_stack_fffffffffffffeb4 / (float)uVar12;
          auVar26._4_4_ = (float)uVar12;
          auVar26._0_4_ = (float)uVar12;
          auVar26._8_4_ = uVar43;
          auVar26._12_4_ = uVar44;
          _local_118 = divps(auVar46,auVar26);
        }
        else {
          uVar12._0_4_ = SQRT((float)uVar12);
          if (1e-05 < (float)uVar12) goto LAB_02456f16;
LAB_02456e9f:
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          _fStack_110 = 0;
          local_118 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
          in_stack_fffffffffffffeb4 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        pUVar33 = (bone->fields).transform;
        if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
        UVar57 = UnityEngine_Transform__TransformVector
                           (pUVar33,(bone->fields).leftPosition.fields,(MethodInfo *)0x0);
        uVar12._0_4_ = UVar57.fields.x;
        uVar43 = UVar57.fields.y;
        uVar40 = extraout_XMM0_Dc_07;
        uVar44 = extraout_XMM0_Dd_07;
        fVar4 = UVar57.fields.z;
        if (DAT_056fde1c == '\0') {
          uStack_c0 = extraout_XMM0_Dc_07;
          local_c8 = (undefined1  [8])UVar57.fields._0_8_;
          uStack_bc = (uint16_t)extraout_XMM0_Dd_07;
          uStack_ba = SUB42(extraout_XMM0_Dd_07,2);
          local_d8 = UVar57.fields.z;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
          uVar12._0_4_ = (float)local_c8._0_4_;
          uVar43 = local_c8._4_4_;
          uVar40 = uStack_c0;
          uVar44 = _uStack_bc;
          fVar4 = local_d8;
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_c8._4_4_ = uVar43;
          local_c8._0_4_ = (float)uVar12;
          uStack_c0 = uVar40;
          uStack_bc = (uint16_t)uVar44;
          uStack_ba = SUB42(uVar44,2);
          local_d8 = fVar4;
          local_78._0_4_ = uVar43;
          local_78._4_4_ = uVar43;
          uStack_70 = uVar40;
          uStack_6c = uVar44;
          il2cpp_init_class();
          uVar12._0_4_ = (float)local_c8._0_4_;
          fVar4 = local_d8;
          uVar43 = local_78._0_4_;
        }
        uVar12._0_4_ = fVar4 * fVar4 + (float)uVar43 * (float)uVar43 + (float)uVar12 * (float)uVar12
        ;
        if ((float)uVar12 < 0.0) {
          uVar12._0_4_ = sqrtf((float)uVar12);
        }
        else {
          uVar12._0_4_ = SQRT((float)uVar12);
        }
        auVar51._4_4_ = fStack_104;
        auVar51._0_4_ = local_108;
        auVar51._8_4_ = fStack_100;
        auVar51._12_4_ = fStack_fc;
        pEVar35 = (bone->fields).leftBone;
        if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
        uVar8 = (pEVar35->fields).worldPosition.fields.x;
        uVar19 = (pEVar35->fields).worldPosition.fields.y;
        fVar38 = fVar38 + in_stack_fffffffffffffeb4 * (float)uVar12 +
                          (pEVar35->fields).worldPosition.fields.z;
        iVar37 = 2;
        iVar36 = 2;
        pEVar35 = (bone->fields).rightBone;
        fVar15 = fVar5 + (float)local_118._0_4_ * (float)uVar12 + (float)uVar8;
        fVar41 = fVar16 + (float)local_118._4_4_ * (float)uVar12 + (float)uVar19;
        uVar12._0_4_ = fVar5;
        fVar4 = fVar16;
        auVar47 = _local_118;
      }
      fVar16 = fVar41;
      fVar5 = fVar15;
      fVar15 = (float)local_e8._0_4_;
      _local_118 = auVar47;
      if (pEVar35 != (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) {
        uVar9 = (pEVar35->fields).worldPosition.fields.x;
        uVar20 = (pEVar35->fields).worldPosition.fields.y;
        local_118._4_4_ = uVar20;
        local_118._0_4_ = uVar9;
        in_stack_fffffffffffffeb4 = (float)local_e8._0_4_ - (pEVar35->fields).worldPosition.fields.z
        ;
        if (DAT_056fde20 == '\0') {
          _fStack_110 = 0;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde20 = '\x01';
          auVar50._0_4_ = local_108 - (float)local_118._0_4_;
          auVar50._4_4_ = fStack_104 - (float)local_118._4_4_;
          auVar50._8_4_ = fStack_100 - fStack_110;
          auVar50._12_4_ = fStack_fc - fStack_10c;
          iVar37 = *(int *)(TypeInfo_Math + 0xe4);
          uVar12._0_4_ = fVar5;
          fVar4 = fVar16;
          auVar47 = _local_118;
        }
        else {
          auVar50._0_4_ = auVar51._0_4_ - (float)uVar9;
          auVar50._4_4_ = auVar51._4_4_ - (float)uVar20;
          auVar50._8_4_ = auVar51._8_4_ - 0.0;
          auVar50._12_4_ = auVar51._12_4_ - 0.0;
          iVar37 = *(int *)(TypeInfo_Math + 0xe4);
          uVar12._0_4_ = fVar5;
          fVar4 = fVar16;
        }
        _local_118 = auVar50;
        auVar46 = _local_118;
        if (iVar37 == 0) {
          il2cpp_init_class();
          auVar46 = _local_118;
          auVar47 = _local_118;
        }
        _local_118 = auVar47;
        uVar43 = 0;
        uVar44 = 0;
        fVar15 = in_stack_fffffffffffffeb4 * in_stack_fffffffffffffeb4 +
                 auVar46._4_4_ * auVar46._4_4_ + auVar46._0_4_ * auVar46._0_4_;
        if (fVar15 < 0.0) {
          _local_118 = auVar46;
          fVar15 = sqrtf(fVar15);
          uVar43 = extraout_XMM0_Dc_08;
          uVar44 = extraout_XMM0_Dd_08;
          auVar46 = _local_118;
          if (fVar15 <= 1e-05) goto LAB_024570d5;
LAB_0245712b:
          in_stack_fffffffffffffeb4 = in_stack_fffffffffffffeb4 / fVar15;
          auVar25._4_4_ = fVar15;
          auVar25._0_4_ = fVar15;
          auVar25._8_4_ = uVar43;
          auVar25._12_4_ = uVar44;
          _local_118 = divps(auVar46,auVar25);
        }
        else {
          fVar15 = SQRT(fVar15);
          if (1e-05 < fVar15) goto LAB_0245712b;
LAB_024570d5:
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          _fStack_110 = 0;
          local_118 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
          in_stack_fffffffffffffeb4 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        pUVar33 = (bone->fields).transform;
        if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
        UVar57 = UnityEngine_Transform__TransformVector
                           (pUVar33,(bone->fields).rightPosition.fields,(MethodInfo *)0x0);
        fVar15 = UVar57.fields.x;
        uVar43 = UVar57.fields.y;
        uVar40 = extraout_XMM0_Dc_09;
        uVar44 = extraout_XMM0_Dd_09;
        fVar5 = UVar57.fields.z;
        if (DAT_056fde1c == '\0') {
          uStack_c0 = extraout_XMM0_Dc_09;
          local_c8 = (undefined1  [8])UVar57.fields._0_8_;
          uStack_bc = (uint16_t)extraout_XMM0_Dd_09;
          uStack_ba = SUB42(extraout_XMM0_Dd_09,2);
          local_d8 = UVar57.fields.z;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
          fVar15 = (float)local_c8._0_4_;
          uVar43 = local_c8._4_4_;
          uVar40 = uStack_c0;
          uVar44 = _uStack_bc;
          fVar5 = local_d8;
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_c8._4_4_ = uVar43;
          local_c8._0_4_ = fVar15;
          uStack_c0 = uVar40;
          uStack_bc = (uint16_t)uVar44;
          uStack_ba = SUB42(uVar44,2);
          local_d8 = fVar5;
          local_78._0_4_ = uVar43;
          local_78._4_4_ = uVar43;
          uStack_70 = uVar40;
          uStack_6c = uVar44;
          il2cpp_init_class();
          fVar15 = (float)local_c8._0_4_;
          fVar5 = local_d8;
          uVar43 = local_78._0_4_;
        }
        fVar15 = fVar5 * fVar5 + (float)uVar43 * (float)uVar43 + fVar15 * fVar15;
        if (fVar15 < 0.0) {
          fVar15 = sqrtf(fVar15);
        }
        else {
          fVar15 = SQRT(fVar15);
        }
        auVar51._4_4_ = fStack_104;
        auVar51._0_4_ = local_108;
        auVar51._8_4_ = fStack_100;
        auVar51._12_4_ = fStack_fc;
        pEVar35 = (bone->fields).rightBone;
        if (pEVar35 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) goto LAB_0245761f;
        uVar10 = (pEVar35->fields).worldPosition.fields.x;
        uVar21 = (pEVar35->fields).worldPosition.fields.y;
        fVar5 = (float)uVar12 + (float)local_118._0_4_ * fVar15 + (float)uVar10;
        fVar16 = fVar4 + (float)local_118._4_4_ * fVar15 + (float)uVar21;
        fVar38 = fVar38 + in_stack_fffffffffffffeb4 * fVar15 +
                          (pEVar35->fields).worldPosition.fields.z;
        iVar37 = iVar36 + 1;
        fVar15 = (float)local_e8._0_4_;
      }
    }
    fVar56 = auVar51._4_4_;
    fVar42 = (float)iVar37;
    fVar45 = (bone->fields).slackness / (float)(__this->fields).m_Iterations;
    fVar41 = 1.0;
    if (fVar45 <= 1.0) {
      fVar41 = fVar45;
    }
    fVar41 = (float)(-(uint)(0.0 <= fVar45) & (uint)fVar41);
    auVar52._4_12_ = auVar51._4_12_;
    fVar59 = (auVar51._0_4_ - fVar5 / fVar42) * fVar41 + fVar5 / fVar42;
    auVar54._0_8_ = auVar52._0_8_;
    auVar54._8_4_ = fVar56;
    auVar54._12_4_ = fVar56;
    auVar53._8_8_ = auVar54._8_8_;
    auVar53._0_8_ = CONCAT44((fVar56 - fVar16 / fVar42) * fVar41 + fVar16 / fVar42,fVar59);
    local_128.fields.z = (fVar15 - fVar38 / fVar42) * fVar41 + fVar38 / fVar42;
    local_128.fields._0_8_ = auVar53._0_8_;
    if (0.0 < (bone->fields).radius) {
      if (*(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8) ==
          (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0245761f;
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_HashSet_object__o *)
                 **(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8),MethodInfo_HashSet_1_T__Enumerator_EZhex1991_EZSoftBone_EZS);
      local_88 = local_38;
      local_b8._32_8_ = local_48._0_8_;
      pIStack_90 = (Il2CppType *)local_48._8_8_;
      while (__this_02.fields._version = (int32_t)in_stack_fffffffffffffeb4,
            __this_02.fields._set =
                 (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_,
            __this_02.fields._index = in_stack_fffffffffffffea8._8_4_,
            __this_02.fields._current._0_4_ = (float)uVar12, __this_02.fields._current._4_4_ = fVar4
            , bVar29 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                 (__this_02,(MethodInfo_3185890 *)(local_b8 + 0x20)),
            __this_06 = local_88, (char)bVar29 != '\0') {
        if (local_88 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar33 = (bone->fields).transform;
        pUVar34 = UnityEngine_Component__get_transform(local_88,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar29 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar33,(UnityEngine_Object_o *)pUVar34,
                            (MethodInfo *)0x0);
        if ((char)bVar29 != '\0') {
          mask.fields.m_Mask = (UnityEngine_LayerMask_Fields)(__this->fields).m_LengthUnification;
          __this_07 = UnityEngine_Component__get_gameObject(__this_06,(MethodInfo *)0x0);
          if (__this_07 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar30 = UnityEngine_GameObject__get_layer(__this_07,(MethodInfo *)0x0);
          uVar31 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          uVar32 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if ((uVar31 | 1 << (uVar30 & 0x1f)) == uVar32) {
            (*__this_06->klass[1]._1.image)
                      ((bone->fields).radius,__this_06,&local_128,__this_06->klass[1]._1.gc_desc);
          }
        }
      }
      __this_03.fields._version = (int32_t)in_stack_fffffffffffffeb4;
      __this_03.fields._set =
           (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffea8._8_4_;
      __this_03.fields._current._0_4_ = (float)uVar12;
      __this_03.fields._current._4_4_ = fVar4;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185880 *)(local_b8 + 0x20));
      __this_01 = (__this->fields).m_ExtraColliders;
      if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) goto LAB_0245761f;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
      local_b8._16_8_ = local_38;
      local_b8._0_8_ = local_48._0_8_;
      local_b8._8_8_ = local_48._8_8_;
      while (__this_04.fields._version = (int32_t)in_stack_fffffffffffffeb4,
            __this_04.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea8._0_8_,
            __this_04.fields._index = in_stack_fffffffffffffea8._8_4_,
            __this_04.fields._current._0_4_ = (float)uVar12, __this_04.fields._current._4_4_ = fVar4
            , bVar29 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_04,(MethodInfo_3185E20 *)local_b8),
            uVar39 = local_b8._16_8_, (char)bVar29 != '\0') {
        if ((UnityEngine_Component_o *)local_b8._16_8_ == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar33 = (bone->fields).transform;
        pUVar34 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)local_b8._16_8_,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar29 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar33,(UnityEngine_Object_o *)pUVar34,
                            (MethodInfo *)0x0);
        if (((char)bVar29 != '\0') &&
           (bVar29 = UnityEngine_Collider__get_enabled
                               ((UnityEngine_Collider_o *)uVar39,(MethodInfo *)0x0),
           (char)bVar29 != '\0')) {
          EZhex1991_EZSoftBone_EZSoftBoneUtility__PointOutsideCollider
                    (&local_128,(UnityEngine_Collider_o *)uVar39,(bone->fields).radius,method_00);
        }
      }
      __this_05.fields._version = (int32_t)in_stack_fffffffffffffeb4;
      __this_05.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea8._0_8_;
      __this_05.fields._index = in_stack_fffffffffffffea8._8_4_;
      __this_05.fields._current._0_4_ = (float)uVar12;
      __this_05.fields._current._4_4_ = fVar4;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185E10 *)local_b8);
      auVar53._8_8_ = 0;
      auVar53._0_4_ = local_128.fields.x;
      auVar53._4_4_ = local_128.fields.y;
    }
    uVar11 = (bone->fields).speed.fields.x;
    uVar22 = (bone->fields).speed.fields.y;
    auVar55._0_4_ = auVar53._0_4_ - (float)local_68;
    auVar55._4_4_ = auVar53._4_4_ - local_68._4_4_;
    auVar55._8_4_ = auVar53._8_4_ - (float)uStack_60;
    auVar55._12_4_ = auVar53._12_4_ - uStack_60._4_4_;
    auVar28._4_4_ = local_58;
    auVar28._0_4_ = local_58;
    auVar28._8_4_ = fStack_50;
    auVar28._12_4_ = fStack_4c;
    auVar47 = divps(auVar55,auVar28);
    fVar38 = (bone->fields).speed.fields.z;
    (bone->fields).speed.fields.x = (auVar47._0_4_ + (float)uVar11) * 0.5;
    (bone->fields).speed.fields.y = (auVar47._4_4_ + (float)uVar22) * 0.5;
    (bone->fields).speed.fields.z = ((local_128.fields.z - local_ec) / local_58 + fVar38) * 0.5;
    (bone->fields).worldPosition.fields.x = local_128.fields.x;
    (bone->fields).worldPosition.fields.y = local_128.fields.y;
    (bone->fields).worldPosition.fields.z = local_128.fields.z;
    __this_08 = (bone->fields).childBones;
  }
  else {
    pUVar33 = (bone->fields).transform;
    if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto LAB_0245761f;
    UVar57 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
    (bone->fields).worldPosition.fields.x = (float)(int)UVar57.fields._0_8_;
    (bone->fields).worldPosition.fields.y = (float)(int)((ulong)UVar57.fields._0_8_ >> 0x20);
    (bone->fields).worldPosition.fields.z = UVar57.fields.z;
    __this_08 = (bone->fields).childBones;
  }
  if (__this_08 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    iVar37 = 0;
    do {
      if ((__this_08->fields)._size <= iVar37) {
        return;
      }
      pEVar35 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_08,iVar37,
                           MethodInfo_EZSoftBone_Bone_get_Item);
      EZhex1991_EZSoftBone_EZSoftBone__UpdateBones(__this,pEVar35,local_58,method_01);
      iVar37 = iVar37 + 1;
      __this_08 = (bone->fields).childBones;
    } while (__this_08 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
LAB_0245761f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$UpdateTransforms
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2454ff0

void EZhex1991_EZSoftBone_EZSoftBone__UpdateTransforms
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  EZhex1991_EZSoftBone_EZSoftBone_Bone_o *__this_00;
  MethodInfo *in_RCX;
  int index;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (DAT_056fe05f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_Bone_get_Item);
    DAT_056fe05f = '\x01';
  }
  __this_01 = (__this->fields).m_Structures;
  if (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      __this_00 = (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             MethodInfo_EZSoftBone_Bone_get_Item);
      if (__this_00 == (EZhex1991_EZSoftBone_EZSoftBone_Bone_o *)0x0) break;
      EZhex1991_EZSoftBone_EZSoftBone_Bone__UpdateTransform
                (__this_00,(uint)*(byte *)((long)&(__this->fields).m_ClosedSiblings + 1),
                 (__this->fields).m_StartDepth,in_RCX);
      index = index + 1;
      __this_01 = (__this->fields).m_Structures;
    } while (__this_01 != (System_Collections_Generic_List_EZSoftBone_Bone__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBone$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___ctor (EZhex1991_EZSoftBone_EZSoftBone_o* __this, const MethodInfo* method);
// 0x2458350

void EZhex1991_EZSoftBone_EZSoftBone___ctor
               (EZhex1991_EZSoftBone_EZSoftBone_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_List_Collider__o *__this_00;
  UnityEngine_AnimationCurve_o *pUVar2;
  System_Collections_Generic_List_EZSoftBone_Bone__o *__this_01;
  
  if (DAT_056fe060 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_init_method_metadata(&MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
    il2cpp_init_method_metadata(&TypeInfo_List_Collider);
    il2cpp_init_method_metadata(&TypeInfo_List_Bone);
    DAT_056fe060 = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).m_ClosedSiblings + 1) = 1;
  UVar1 = UnityEngine_LayerMask__op_Implicit(1,(MethodInfo *)0x0);
  (__this->fields).m_LengthUnification = (int32_t)UVar1.fields.m_Mask;
  __this_00 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_glue(TypeInfo_List_Collider);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields).m_ExtraColliders = __this_00;
  il2cpp_runtime_glue(&(__this->fields).m_ExtraColliders,__this_00);
  pUVar2 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_RadiusCurve = pUVar2;
  il2cpp_runtime_glue(&(__this->fields).m_RadiusCurve,pUVar2);
  (__this->fields).m_ConstantDeltaTime = 0.03;
  (__this->fields).m_Iterations = 1;
  (__this->fields).m_SleepThreshold = 0.005;
  (__this->fields).m_ForceScale = 1.0;
  __this_01 = (System_Collections_Generic_List_EZSoftBone_Bone__o *)il2cpp_runtime_glue(TypeInfo_List_Bone)
  ;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_EZhex1991_EZSoftBone_EZSoftBone_Bone);
  (__this->fields).m_Structures = __this_01;
  il2cpp_runtime_glue(&(__this->fields).m_Structures);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBone$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBone___cctor (const MethodInfo* method);
// 0x2458480

void EZhex1991_EZSoftBone_EZSoftBone___cctor(MethodInfo *method)

{
  if (DAT_056fe061 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBone);
    DAT_056fe061 = '\x01';
  }
  **(undefined4 **)(TypeInfo_EZSoftBone + 0xb8) = 0x358637bd;
  return;
}


