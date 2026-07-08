// Type: Characters.CarrySpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/CarrySpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.CarrySpecial$$get_ActiveTime
// il2cpp: float Characters_CarrySpecial__get_ActiveTime (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x3fe6e70

float Characters_CarrySpecial__get_ActiveTime(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.CarrySpecial$$get_CarryDistance
// il2cpp: float Characters_CarrySpecial__get_CarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x3fe6e80

float Characters_CarrySpecial__get_CarryDistance
                (Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.CarrySpecial$$get_GroundedCarryDistance
// il2cpp: float Characters_CarrySpecial__get_GroundedCarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x3fe6e90

float Characters_CarrySpecial__get_GroundedCarryDistance
                (Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.CarrySpecial$$.ctor
// il2cpp: void Characters_CarrySpecial___ctor (Characters_CarrySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7a10

void Characters_CarrySpecial___ctor
               (Characters_CarrySpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor((Characters_BaseHoldAttackSpecial_o *)__this,owner,method)
  ;
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.CarrySpecial$$Activate
// il2cpp: void Characters_CarrySpecial__Activate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x3fe6ea0

void Characters_CarrySpecial__Activate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *x;
  bool_conflict bVar3;
  
  if (DAT_05704167 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704167 = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 1;
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar2->klass->_2).naturalAligment < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  x = pCVar2[1].fields.Cache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    *(undefined1 *)&(__this->fields).IsActive = 0;
    (*(__this->klass->vtable)._10_Deactivate.methodPtr)
              (__this,(__this->klass->vtable)._10_Deactivate.method);
    return;
  }
  return;
}


// Characters.CarrySpecial$$ActiveFixedUpdate
// il2cpp: void Characters_CarrySpecial__ActiveFixedUpdate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x3fe6f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Characters_CarrySpecial__ActiveFixedUpdate
               (Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  float distance;
  byte bVar1;
  int iVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar4;
  System_String_o *b;
  undefined8 uVar5;
  UnityEngine_Ray_o ray;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  undefined8 uVar6;
  bool_conflict bVar7;
  bool_conflict bVar8;
  Characters_Human_o *human;
  Characters_Human_o *pCVar9;
  Characters_Human_o *pCVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar13;
  float in_XMM1_Dd;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  System_Collections_Generic_HashSet_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  Characters_Human_o *pCVar18;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  Characters_Human_o *pCStack_68;
  undefined1 auStack_60 [16];
  Characters_Human_o *pCStack_50;
  System_Collections_Generic_HashSet_T__o *pSStack_48;
  Il2CppMethodPointer pIStack_40;
  Characters_Human_o *pCStack_38;
  
  if (DAT_05704168 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05704168 = '\x01';
  }
  auStack_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  auStack_c8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._16_8_ = (Characters_Human_o *)0x0;
  Characters_ExtendedUseable__ActiveFixedUpdate
            ((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  pCVar9 = (Characters_Human_o *)(__this->fields)._owner;
  if (pCVar9 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    pCVar10 = pCVar9;
    if (((pCVar9->klass->_2).naturalAligment < bVar1) ||
       ((pCVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
LAB_03fe75de:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pCVar10);
    }
    pUVar3 = (pCVar9->fields).GrabHand;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 0;
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
                    /* WARNING: Read-only address (ram,0x00cd0380) is written */
      return;
    }
    distance = *(float *)(&DAT_00cd0fd0 +
                         (ulong)(*(char *)((long)&(pCVar9->fields).Animation + 4) == '\0') * 4);
    Characters_Human__GetAimRayAfterHumanCheap
              ((UnityEngine_Ray_o *)auStack_60,pCVar9,(MethodInfo *)0x0);
    pCStack_38 = pCStack_50;
    pSStack_48 = (System_Collections_Generic_HashSet_T__o *)auStack_60._0_8_;
    pIStack_40 = (Il2CppMethodPointer)auStack_60._8_8_;
    ray.fields.m_Origin.fields.z = (float)auStack_60._8_4_;
    ray.fields.m_Direction.fields.x = (float)auStack_60._12_4_;
    ray.fields.m_Origin.fields.x = (float)auStack_60._0_4_;
    ray.fields.m_Origin.fields.y = (float)auStack_60._4_4_;
    ray.fields.m_Direction.fields._4_8_ = pCStack_50;
    pSVar16 = (System_Collections_Generic_HashSet_T__o *)auStack_60._0_8_;
    pIVar17 = (Il2CppMethodPointer)auStack_60._8_8_;
    pCVar18 = pCStack_50;
    human = Characters_Human__GetHumanAlongRay(pCVar9,ray,distance,(MethodInfo *)0x0);
    bVar7 = Characters_Human__IsValidCarryTarget(pCVar9,human,distance,(MethodInfo *)0x0);
    pCVar10 = *(Characters_Human_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pCVar10 != (Characters_Human_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if (((pCVar10->klass->_2).naturalAligment < bVar1) ||
         ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) goto LAB_03fe75de;
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(pCVar10->fields).RichTextName;
      auStack_c8._24_8_ = human;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_60,__this_00,
                   MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
        auStack_c8._16_8_ = pCStack_50;
        auStack_c8._0_8_ = auStack_60._0_8_;
        auStack_c8._8_8_ = auStack_60._8_8_;
        pCStack_68 = (Characters_Human_o *)0x0;
        fVar11 = INFINITY;
        while (__this_01.fields._8_8_ = pIVar17, __this_01.fields._set = pSVar16,
              __this_01.fields._current = (Il2CppObject *)pCVar18,
              bVar8 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185890 *)auStack_c8),
              uVar6 = auStack_c8._16_8_, (char)bVar8 != '\0') {
          bVar8 = Characters_Human__IsCarryable
                            (pCVar9,(Characters_Human_o *)auStack_c8._16_8_,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Characters_BaseCharacter__RemoveOutline
                      ((Characters_BaseCharacter_o *)uVar6,(MethodInfo *)0x0);
          }
          else {
            lVar4 = *(long *)&(pCVar9->fields).Dead;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
            if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            fStack_78 = UVar15.fields.z;
            auStack_88._8_4_ = extraout_XMM0_Dc;
            auStack_88._0_8_ = UVar15.fields._0_8_;
            auStack_88._12_4_ = extraout_XMM0_Dd;
            fStack_74 = in_XMM1_Db;
            fStack_70 = in_XMM1_Dc;
            fStack_6c = in_XMM1_Dd;
            if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            lVar4 = *(long *)&((Characters_Human_Fields *)(uVar6 + 0x10))->Dead;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
            if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            fStack_98 = UVar15.fields.z;
            auStack_a8._8_4_ = extraout_XMM0_Dc_00;
            auStack_a8._0_8_ = UVar15.fields._0_8_;
            auStack_a8._12_4_ = extraout_XMM0_Dd_00;
            fStack_94 = in_XMM1_Db;
            fStack_90 = in_XMM1_Dc;
            fStack_8c = in_XMM1_Dd;
            if (DAT_056fdea6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fdea6 = '\x01';
              iVar2 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar2 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar2 == 0) {
              il2cpp_init_class();
            }
            in_XMM1_Db = ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_) *
                         ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_);
            in_XMM1_Dc = (fStack_74 - fStack_94) * (fStack_74 - fStack_94);
            in_XMM1_Dd = ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) *
                         ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_);
            fVar12 = in_XMM1_Db +
                     ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) *
                     ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) +
                     (fStack_78 - fStack_98) * (fStack_78 - fStack_98);
            if (fVar12 < 0.0) {
              fVar12 = sqrtf(fVar12);
              if (distance < fVar12) goto LAB_03fe71f0;
LAB_03fe7350:
              b = *(System_String_o **)&(pCVar9->fields).AI;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar8 = GameManagers_TeamInfo__SameTeam
                                ((Characters_BaseCharacter_o *)uVar6,b,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                in_XMM1_Db = DAT_00cd0380._4_4_;
                in_XMM1_Dc = DAT_00cd0380._8_4_;
                in_XMM1_Dd = DAT_00cd0380._12_4_;
                color_00.fields.b = (float)(int)DAT_00cd0380;
                color_00.fields.a = (float)(int)((ulong)DAT_00cd0380 >> 0x20);
                color_00.fields.r = 1.0;
                color_00.fields.g = 0.0;
                Characters_BaseCharacter__AddVisibleOutlineWithColor
                          ((Characters_BaseCharacter_o *)uVar6,color_00,(MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)uVar6,
                                   (UnityEngine_Object_o *)auStack_c8._24_8_,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  fVar12 = DAT_00ccd980._4_4_;
                  fVar13 = DAT_00ccd980._8_4_;
                  fVar14 = DAT_00ccd980._12_4_;
                  uVar5 = DAT_00ccd980;
                  color.fields.b = (float)(int)uVar5;
                  color.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
                  color.fields.r = (float)(int)uVar5;
                  color.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
                  Characters_BaseCharacter__AddVisibleOutlineWithColor
                            ((Characters_BaseCharacter_o *)uVar6,color,(MethodInfo *)0x0);
                  lVar4 = *(long *)&(pCVar9->fields).Dead;
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                  if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  fStack_78 = UVar15.fields.z;
                  auStack_88._8_4_ = extraout_XMM0_Dc_01;
                  auStack_88._0_8_ = UVar15.fields._0_8_;
                  auStack_88._12_4_ = extraout_XMM0_Dd_01;
                  lVar4 = *(long *)&((Characters_Human_Fields *)(uVar6 + 0x10))->Dead;
                  fStack_74 = fVar12;
                  fStack_70 = fVar13;
                  fStack_6c = fVar14;
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                  if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  fStack_98 = UVar15.fields.z;
                  auStack_a8._8_4_ = extraout_XMM0_Dc_02;
                  auStack_a8._0_8_ = UVar15.fields._0_8_;
                  auStack_a8._12_4_ = extraout_XMM0_Dd_02;
                  fStack_94 = fVar12;
                  fStack_90 = fVar13;
                  fStack_8c = fVar14;
                  if (DAT_056fdea6 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Math);
                    DAT_056fdea6 = '\x01';
                    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
                  }
                  else {
                    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
                  }
                  if (iVar2 == 0) {
                    il2cpp_init_class();
                  }
                  fVar12 = ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_) *
                           ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_) +
                           ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) *
                           ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) +
                           (fStack_78 - fStack_98) * (fStack_78 - fStack_98);
                  if (0.0 <= fVar12) {
                    in_XMM1_Db = 0.0;
                    in_XMM1_Dc = 0.0;
                    in_XMM1_Dd = 0.0;
                    if (SQRT(fVar12) < fVar11) {
                      pCStack_68 = (Characters_Human_o *)uVar6;
                      fVar11 = SQRT(fVar12);
                    }
                  }
                  else {
                    fVar12 = sqrtf(fVar12);
                    in_XMM1_Db = 0.0;
                    in_XMM1_Dc = 0.0;
                    in_XMM1_Dd = 0.0;
                    if (fVar12 < fVar11) {
                      pCStack_68 = (Characters_Human_o *)uVar6;
                      fVar11 = fVar12;
                    }
                  }
                }
              }
            }
            else {
              if (SQRT(fVar12) <= distance) goto LAB_03fe7350;
LAB_03fe71f0:
              Characters_BaseCharacter__RemoveOutline
                        ((Characters_BaseCharacter_o *)uVar6,(MethodInfo *)0x0);
            }
          }
        }
        __this_02.fields._8_8_ = pIVar17;
        __this_02.fields._set = pSVar16;
        __this_02.fields._current = (Il2CppObject *)pCVar18;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185880 *)auStack_c8);
        uVar6 = auStack_c8._24_8_;
        pCVar9 = (Characters_Human_o *)auStack_c8._24_8_;
        if ((char)bVar7 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)uVar6,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto LAB_03fe75d6;
            color_01.fields.b = 0.0;
            color_01.fields.a = 1.0;
            color_01.fields.r = 1.0;
            color_01.fields.g = 0.0;
            Characters_BaseCharacter__AddVisibleOutlineWithColor
                      ((Characters_BaseCharacter_o *)uVar6,color_01,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pCVar9 = pCStack_68;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCStack_68,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            return;
          }
        }
        if (pCVar9 != (Characters_Human_o *)0x0) {
          color_02.fields.b = 0.0;
          color_02.fields.a = 1.0;
          color_02.fields.r = 0.0;
          color_02.fields.g = 1.0;
          Characters_BaseCharacter__AddVisibleOutlineWithColor
                    ((Characters_BaseCharacter_o *)pCVar9,color_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03fe75d6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CarrySpecial$$Deactivate
// il2cpp: void Characters_CarrySpecial__Deactivate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x3fe77e0

void Characters_CarrySpecial__Deactivate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar2;
  Characters_Human_o *target;
  Characters_Human_o *__this_03;
  System_Collections_Generic_HashSet_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Characters_BaseCharacter_o *__this_04;
  
  if (DAT_05704169 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704169 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_04 = (Characters_BaseCharacter_o *)0x0;
  __this_03 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_03 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((__this_03->klass->_2).naturalAligment < bVar1) ||
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
LAB_03fe7a1a:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_03);
    }
    x = (__this_03->fields).GrabHand;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      Characters_Human__StopCarrySpecial(__this_03,(MethodInfo *)0x0);
      return;
    }
    target = Characters_Human__GetCarryOption
                       (__this_03,
                        *(float *)(&DAT_00cd0fd0 +
                                  (ulong)(*(char *)((long)&(__this_03->fields).Animation + 4) ==
                                         '\0') * 4),(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      Characters_Human__StartCarrySpecial(__this_03,target,(MethodInfo *)0x0);
    }
    Characters_BaseUseable__SetCooldownLeft
              ((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
    __this_03 = *(Characters_Human_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_03 != (Characters_Human_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if (((__this_03->klass->_2).naturalAligment < bVar1) ||
         ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager))
      goto LAB_03fe7a1a;
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this_03->fields).RichTextName;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb8,
                   __this_00,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
        while( true ) {
          __this_01.fields._8_8_ = pIVar4;
          __this_01.fields._set = pSVar3;
          __this_01.fields._current = (Il2CppObject *)__this_04;
          bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffffb8);
          if ((char)bVar2 == '\0') {
            __this_02.fields._8_8_ = pIVar4;
            __this_02.fields._set = pSVar3;
            __this_02.fields._current = (Il2CppObject *)__this_04;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffffb8);
            return;
          }
          if (__this_04 == (Characters_BaseCharacter_o *)0x0) break;
          Characters_BaseCharacter__RemoveOutline(__this_04,(MethodInfo *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


