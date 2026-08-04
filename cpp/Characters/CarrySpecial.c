// Type: Characters.CarrySpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CarrySpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// --------------------------------

// Characters.CarrySpecial$$get_ActiveTime
// il2cpp: float Characters_CarrySpecial__get_ActiveTime (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x42f3730

float Characters_CarrySpecial__get_ActiveTime(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.CarrySpecial$$get_CarryDistance
// il2cpp: float Characters_CarrySpecial__get_CarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x42f3740

float Characters_CarrySpecial__get_CarryDistance(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.CarrySpecial$$get_GroundedCarryDistance
// il2cpp: float Characters_CarrySpecial__get_GroundedCarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x42f3750

float Characters_CarrySpecial__get_GroundedCarryDistance(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.CarrySpecial$$.ctor
// il2cpp: void Characters_CarrySpecial___ctor (Characters_CarrySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e42d0

void Characters_CarrySpecial___ctor
               (Characters_CarrySpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor((Characters_BaseHoldAttackSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.CarrySpecial$$Activate
// il2cpp: void Characters_CarrySpecial__Activate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x42f3760

void Characters_CarrySpecial__Activate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  float distance;
  byte bVar1;
  int iVar2;
  Utility_BaseComponentCache_o *x;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar4;
  System_String_o *b;
  undefined8 uVar5;
  UnityEngine_Ray_o ray;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined8 uVar6;
  bool_conflict bVar7;
  Characters_Human_o *human;
  long *plVar8;
  Characters_Human_o *pCVar9;
  Characters_Human_o *__this_05;
  Characters_BaseCharacter_o *__this_06;
  float fVar10;
  float fVar11;
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
  float fVar12;
  float in_XMM1_Dd;
  float fVar13;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  undefined1 auVar14 [12];
  UnityEngine_Vector3_o UVar15;
  System_Collections_Generic_HashSet_T__o *in_stack_fffffffffffffef0;
  Il2CppMethodPointer in_stack_fffffffffffffef8;
  Characters_Human_o *in_stack_ffffffffffffff00;
  char cStack_e9;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [16];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  Characters_Human_o *pCStack_80;
  undefined1 auStack_78 [16];
  Characters_Human_o *pCStack_68;
  System_Collections_Generic_HashSet_T__o *pSStack_60;
  Il2CppMethodPointer pIStack_58;
  Characters_Human_o *pCStack_50;
  
  if (g_data_057aded5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aded5 = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields)._keyIsReset + 1) = 1;
  __this_06 = (__this->fields)._owner;
  if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      x = __this_06[1].fields.Cache;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields).IsActive = 0;
      (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                (__this,(__this->klass->vtable)._10_Deactivate.method);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aded6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057aded6 = '\x01';
  }
  auStack_e0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  auStack_e0._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._16_8_ = (Characters_Human_o *)0x0;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this_06,(MethodInfo *)0x0);
  __this_05 = *(Characters_Human_o **)&(__this_06->fields).MaxFootstepDistance;
  if (__this_05 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    pCVar9 = __this_05;
    if ((__this_05->klass->_2).naturalAligment < bVar1) goto label_042f3e9e;
    if ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human) goto label_042f3e9e;
    pUVar3 = (__this_05->fields).GrabHand;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      *(undefined1 *)((long)&(__this_06->fields).m_CancellationTokenSource + 4) = 0;
      return;
    }
    distance = *(float *)(&g_data_00d1d668 +
                         (ulong)(*(char *)((long)&(__this_05->fields).Animation + 4) == '\0') * 4);
    Characters_Human__GetAimRayAfterHumanCheap((UnityEngine_Ray_o *)auStack_78,__this_05,(MethodInfo *)0x0);
    pCStack_50 = pCStack_68;
    pSStack_60 = (System_Collections_Generic_HashSet_T__o *)auStack_78._0_8_;
    pIStack_58 = (Il2CppMethodPointer)auStack_78._8_8_;
    ray.fields.m_Origin.fields.z = (float)auStack_78._8_4_;
    ray.fields.m_Direction.fields.x = (float)auStack_78._12_4_;
    ray.fields.m_Origin.fields.x = (float)auStack_78._0_4_;
    ray.fields.m_Origin.fields.y = (float)auStack_78._4_4_;
    ray.fields.m_Direction.fields._4_8_ = pCStack_68;
    in_stack_fffffffffffffef0 = (System_Collections_Generic_HashSet_T__o *)auStack_78._0_8_;
    in_stack_fffffffffffffef8 = (Il2CppMethodPointer)auStack_78._8_8_;
    in_stack_ffffffffffffff00 = pCStack_68;
    human = Characters_Human__GetHumanAlongRay(__this_05,ray,distance,(MethodInfo *)0x0);
    bVar7 = Characters_Human__IsValidCarryTarget(__this_05,human,distance,(MethodInfo *)0x0);
    pCVar9 = *(Characters_Human_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pCVar9 != (Characters_Human_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((pCVar9->klass->_2).naturalAligment < bVar1) goto label_042f3e9e;
      if ((pCVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager) goto label_042f3e9e;
      cStack_e9 = (char)bVar7;
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(pCVar9->fields).RichTextName;
      auStack_e0._24_8_ = human;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78,__this_00,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
        auStack_e0._16_8_ = pCStack_68;
        auStack_e0._0_8_ = auStack_78._0_8_;
        auStack_e0._8_8_ = auStack_78._8_8_;
        pCStack_80 = (Characters_Human_o *)0x0;
        fVar10 = INFINITY;
label_042f3aba:
        while( true ) {
          __this_01.fields._8_8_ = in_stack_fffffffffffffef8;
          __this_01.fields._set = in_stack_fffffffffffffef0;
          __this_01.fields._current = (Il2CppObject *)in_stack_ffffffffffffff00;
          bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)auStack_e0);
          uVar6 = auStack_e0._16_8_;
          if ((char)bVar7 == '\0') {
            __this_02.fields._8_8_ = in_stack_fffffffffffffef8;
            __this_02.fields._set = in_stack_fffffffffffffef0;
            __this_02.fields._current = (Il2CppObject *)in_stack_ffffffffffffff00;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)auStack_e0);
            goto label_042f3dc7;
          }
          bVar7 = Characters_Human__IsCarryable
                            (__this_05,(Characters_Human_o *)auStack_e0._16_8_,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') break;
          if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto label_042f3e91;
          Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)uVar6,(MethodInfo *)0x0);
        }
        lVar4 = *(long *)&(__this_05->fields).Dead;
        if (lVar4 == 0) {
          il2cpp_runtime_helper_022b2c90();
label_042f3e7d:
          il2cpp_runtime_helper_022b2c90();
label_042f3e82:
          il2cpp_runtime_helper_022b2c90();
label_042f3e87:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f3e7d;
          UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          fStack_90 = UVar15.fields.z;
          auStack_a0._8_4_ = extraout_XMM0_Dc;
          auStack_a0._0_8_ = UVar15.fields._0_8_;
          auStack_a0._12_4_ = extraout_XMM0_Dd;
          fStack_8c = in_XMM1_Db;
          fStack_88 = in_XMM1_Dc;
          fStack_84 = in_XMM1_Dd;
          if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto label_042f3e82;
          lVar4 = *(long *)&((Characters_Human_Fields *)(uVar6 + 0x10))->Dead;
          if (lVar4 == 0) goto label_042f3e87;
          pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            fStack_b0 = UVar15.fields.z;
            auStack_c0._8_4_ = extraout_XMM0_Dc_00;
            auStack_c0._0_8_ = UVar15.fields._0_8_;
            auStack_c0._12_4_ = extraout_XMM0_Dd_00;
            fStack_ac = in_XMM1_Db;
            fStack_a8 = in_XMM1_Dc;
            fStack_a4 = in_XMM1_Dd;
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar2 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar2 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar2 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            in_XMM1_Db = ((float)auStack_a0._0_4_ - (float)auStack_c0._0_4_) *
                         ((float)auStack_a0._0_4_ - (float)auStack_c0._0_4_);
            in_XMM1_Dc = (fStack_8c - fStack_ac) * (fStack_8c - fStack_ac);
            in_XMM1_Dd = ((float)auStack_a0._4_4_ - (float)auStack_c0._4_4_) *
                         ((float)auStack_a0._4_4_ - (float)auStack_c0._4_4_);
            fVar11 = in_XMM1_Db +
                     ((float)auStack_a0._4_4_ - (float)auStack_c0._4_4_) *
                     ((float)auStack_a0._4_4_ - (float)auStack_c0._4_4_) +
                     (fStack_90 - fStack_b0) * (fStack_90 - fStack_b0);
            if (fVar11 < 0.0) {
              fVar11 = sqrtf(fVar11);
            }
            else {
              fVar11 = SQRT(fVar11);
            }
            if (fVar11 <= distance) {
              b = *(System_String_o **)&(__this_05->fields).AI;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar7 = GameManagers_TeamInfo__SameTeam_446ffa0
                                ((Characters_BaseCharacter_o *)uVar6,b,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                in_XMM1_Db = g_data_00d1ca10._4_4_;
                in_XMM1_Dc = g_data_00d1ca10._8_4_;
                in_XMM1_Dd = g_data_00d1ca10._12_4_;
                color_00.fields.b = (float)(int)g_data_00d1ca10;
                color_00.fields.a = (float)(int)((ulong)g_data_00d1ca10 >> 0x20);
                color_00.fields.r = 1.0;
                color_00.fields.g = 0.0;
                Characters_BaseCharacter__AddVisibleOutlineWithColor
                          ((Characters_BaseCharacter_o *)uVar6,color_00,(MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)uVar6,(UnityEngine_Object_o *)auStack_e0._24_8_,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 == '\0') {
                  fVar11 = g_data_00d19fc0._4_4_;
                  fVar12 = g_data_00d19fc0._8_4_;
                  fVar13 = g_data_00d19fc0._12_4_;
                  uVar5 = g_data_00d19fc0;
                  color.fields.b = (float)(int)uVar5;
                  color.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
                  color.fields.r = (float)(int)uVar5;
                  color.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
                  Characters_BaseCharacter__AddVisibleOutlineWithColor
                            ((Characters_BaseCharacter_o *)uVar6,color,(MethodInfo *)0x0);
                  lVar4 = *(long *)&(__this_05->fields).Dead;
                  if (lVar4 == 0) goto label_042f3ea3;
                  pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f3ea8;
                  UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  fStack_90 = UVar15.fields.z;
                  auStack_a0._8_4_ = extraout_XMM0_Dc_01;
                  auStack_a0._0_8_ = UVar15.fields._0_8_;
                  auStack_a0._12_4_ = extraout_XMM0_Dd_01;
                  lVar4 = *(long *)&((Characters_Human_Fields *)(uVar6 + 0x10))->Dead;
                  fStack_8c = fVar11;
                  fStack_88 = fVar12;
                  fStack_84 = fVar13;
                  if (lVar4 == 0) goto label_042f3ead;
                  pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f3eb2;
                  UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  fStack_b0 = UVar15.fields.z;
                  auStack_c0._8_4_ = extraout_XMM0_Dc_02;
                  auStack_c0._0_8_ = UVar15.fields._0_8_;
                  auStack_c0._12_4_ = extraout_XMM0_Dd_02;
                  fStack_ac = fVar11;
                  fStack_a8 = fVar12;
                  fStack_a4 = fVar13;
                  if (g_data_057a68cb == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                    g_data_057a68cb = '\x01';
                    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
                  }
                  else {
                    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
                  }
                  if (iVar2 == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  fVar11 = ((float)auStack_a0._0_4_ - (float)auStack_c0._0_4_) *
                           ((float)auStack_a0._0_4_ - (float)auStack_c0._0_4_) +
                           ((float)auStack_a0._4_4_ - (float)auStack_c0._4_4_) *
                           ((float)auStack_a0._4_4_ - (float)auStack_c0._4_4_) +
                           (fStack_90 - fStack_b0) * (fStack_90 - fStack_b0);
                  if (fVar11 < 0.0) {
                    fVar11 = sqrtf(fVar11);
                    in_XMM1_Db = 0.0;
                    in_XMM1_Dc = 0.0;
                    in_XMM1_Dd = 0.0;
                    if (fVar11 < fVar10) {
                      pCStack_80 = (Characters_Human_o *)uVar6;
                      fVar10 = fVar11;
                    }
                  }
                  else {
                    in_XMM1_Db = 0.0;
                    in_XMM1_Dc = 0.0;
                    in_XMM1_Dd = 0.0;
                    if (SQRT(fVar11) < fVar10) {
                      pCStack_80 = (Characters_Human_o *)uVar6;
                      fVar10 = SQRT(fVar11);
                    }
                  }
                }
              }
            }
            else {
              Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)uVar6,(MethodInfo *)0x0);
            }
            goto label_042f3aba;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_042f3e91:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
label_042f3e96:
  do {
    il2cpp_runtime_helper_022b2c90();
    pCVar9 = __this_05;
label_042f3e9e:
    il2cpp_runtime_helper_022b2fd0(pCVar9);
label_042f3ea3:
    il2cpp_runtime_helper_022b2c90();
label_042f3ea8:
    il2cpp_runtime_helper_022b2c90();
label_042f3ead:
    il2cpp_runtime_helper_022b2c90();
label_042f3eb2:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
label_042f405c:
      __this_04.fields._8_8_ = in_stack_fffffffffffffef8;
      __this_04.fields._set = in_stack_fffffffffffffef0;
      __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff00;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)auStack_e0);
      _Unwind_Resume(auVar14._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_03.fields._set = in_stack_fffffffffffffef0;
    __this_03.fields._current = (Il2CppObject *)in_stack_ffffffffffffff00;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)auStack_e0)
    ;
    __this_05 = (Characters_Human_o *)0x0;
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_042f405c;
    }
label_042f3dc7:
    uVar6 = auStack_e0._24_8_;
    pCVar9 = (Characters_Human_o *)auStack_e0._24_8_;
    if (cStack_e9 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto label_042f3e96;
        color_01.fields.b = 0.0;
        color_01.fields.a = 1.0;
        color_01.fields.r = 1.0;
        color_01.fields.g = 0.0;
        Characters_BaseCharacter__AddVisibleOutlineWithColor
                  ((Characters_BaseCharacter_o *)uVar6,color_01,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar9 = pCStack_80;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCStack_80,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
  } while( true );
}


// Characters.CarrySpecial$$ActiveFixedUpdate
// il2cpp: void Characters_CarrySpecial__ActiveFixedUpdate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x42f3830

void Characters_CarrySpecial__ActiveFixedUpdate(Characters_CarrySpecial_o *__this,MethodInfo *method)

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
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined8 uVar6;
  bool_conflict bVar7;
  Characters_Human_o *human;
  long *plVar8;
  Characters_Human_o *pCVar9;
  Characters_Human_o *__this_05;
  float fVar10;
  float fVar11;
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
  float fVar12;
  float in_XMM1_Dd;
  float fVar13;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  undefined1 auVar14 [12];
  UnityEngine_Vector3_o UVar15;
  System_Collections_Generic_HashSet_T__o *in_stack_ffffffffffffff08;
  Il2CppMethodPointer in_stack_ffffffffffffff10;
  Characters_Human_o *in_stack_ffffffffffffff18;
  char cStack_d1;
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
  
  if (g_data_057aded6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057aded6 = '\x01';
  }
  auStack_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  auStack_c8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._16_8_ = (Characters_Human_o *)0x0;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  __this_05 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_05 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    pCVar9 = __this_05;
    if ((__this_05->klass->_2).naturalAligment < bVar1) goto label_042f3e9e;
    if ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human) goto label_042f3e9e;
    pUVar3 = (__this_05->fields).GrabHand;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 0;
      return;
    }
    distance = *(float *)(&g_data_00d1d668 +
                         (ulong)(*(char *)((long)&(__this_05->fields).Animation + 4) == '\0') * 4);
    Characters_Human__GetAimRayAfterHumanCheap((UnityEngine_Ray_o *)auStack_60,__this_05,(MethodInfo *)0x0);
    pCStack_38 = pCStack_50;
    pSStack_48 = (System_Collections_Generic_HashSet_T__o *)auStack_60._0_8_;
    pIStack_40 = (Il2CppMethodPointer)auStack_60._8_8_;
    ray.fields.m_Origin.fields.z = (float)auStack_60._8_4_;
    ray.fields.m_Direction.fields.x = (float)auStack_60._12_4_;
    ray.fields.m_Origin.fields.x = (float)auStack_60._0_4_;
    ray.fields.m_Origin.fields.y = (float)auStack_60._4_4_;
    ray.fields.m_Direction.fields._4_8_ = pCStack_50;
    in_stack_ffffffffffffff08 = (System_Collections_Generic_HashSet_T__o *)auStack_60._0_8_;
    in_stack_ffffffffffffff10 = (Il2CppMethodPointer)auStack_60._8_8_;
    in_stack_ffffffffffffff18 = pCStack_50;
    human = Characters_Human__GetHumanAlongRay(__this_05,ray,distance,(MethodInfo *)0x0);
    bVar7 = Characters_Human__IsValidCarryTarget(__this_05,human,distance,(MethodInfo *)0x0);
    pCVar9 = *(Characters_Human_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pCVar9 != (Characters_Human_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((pCVar9->klass->_2).naturalAligment < bVar1) goto label_042f3e9e;
      if ((pCVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager) goto label_042f3e9e;
      cStack_d1 = (char)bVar7;
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(pCVar9->fields).RichTextName;
      auStack_c8._24_8_ = human;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_60,__this_00,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
        auStack_c8._16_8_ = pCStack_50;
        auStack_c8._0_8_ = auStack_60._0_8_;
        auStack_c8._8_8_ = auStack_60._8_8_;
        pCStack_68 = (Characters_Human_o *)0x0;
        fVar10 = INFINITY;
label_042f3aba:
        while( true ) {
          __this_01.fields._8_8_ = in_stack_ffffffffffffff10;
          __this_01.fields._set = in_stack_ffffffffffffff08;
          __this_01.fields._current = (Il2CppObject *)in_stack_ffffffffffffff18;
          bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)auStack_c8);
          uVar6 = auStack_c8._16_8_;
          if ((char)bVar7 == '\0') {
            __this_02.fields._8_8_ = in_stack_ffffffffffffff10;
            __this_02.fields._set = in_stack_ffffffffffffff08;
            __this_02.fields._current = (Il2CppObject *)in_stack_ffffffffffffff18;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)auStack_c8);
            goto label_042f3dc7;
          }
          bVar7 = Characters_Human__IsCarryable
                            (__this_05,(Characters_Human_o *)auStack_c8._16_8_,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') break;
          if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto label_042f3e91;
          Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)uVar6,(MethodInfo *)0x0);
        }
        lVar4 = *(long *)&(__this_05->fields).Dead;
        if (lVar4 == 0) {
          il2cpp_runtime_helper_022b2c90();
label_042f3e7d:
          il2cpp_runtime_helper_022b2c90();
label_042f3e82:
          il2cpp_runtime_helper_022b2c90();
label_042f3e87:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f3e7d;
          UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          fStack_78 = UVar15.fields.z;
          auStack_88._8_4_ = extraout_XMM0_Dc;
          auStack_88._0_8_ = UVar15.fields._0_8_;
          auStack_88._12_4_ = extraout_XMM0_Dd;
          fStack_74 = in_XMM1_Db;
          fStack_70 = in_XMM1_Dc;
          fStack_6c = in_XMM1_Dd;
          if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto label_042f3e82;
          lVar4 = *(long *)&((Characters_Human_Fields *)(uVar6 + 0x10))->Dead;
          if (lVar4 == 0) goto label_042f3e87;
          pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            fStack_98 = UVar15.fields.z;
            auStack_a8._8_4_ = extraout_XMM0_Dc_00;
            auStack_a8._0_8_ = UVar15.fields._0_8_;
            auStack_a8._12_4_ = extraout_XMM0_Dd_00;
            fStack_94 = in_XMM1_Db;
            fStack_90 = in_XMM1_Dc;
            fStack_8c = in_XMM1_Dd;
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar2 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar2 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar2 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            in_XMM1_Db = ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_) *
                         ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_);
            in_XMM1_Dc = (fStack_74 - fStack_94) * (fStack_74 - fStack_94);
            in_XMM1_Dd = ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) *
                         ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_);
            fVar11 = in_XMM1_Db +
                     ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) *
                     ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) +
                     (fStack_78 - fStack_98) * (fStack_78 - fStack_98);
            if (fVar11 < 0.0) {
              fVar11 = sqrtf(fVar11);
            }
            else {
              fVar11 = SQRT(fVar11);
            }
            if (fVar11 <= distance) {
              b = *(System_String_o **)&(__this_05->fields).AI;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar7 = GameManagers_TeamInfo__SameTeam_446ffa0
                                ((Characters_BaseCharacter_o *)uVar6,b,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                in_XMM1_Db = g_data_00d1ca10._4_4_;
                in_XMM1_Dc = g_data_00d1ca10._8_4_;
                in_XMM1_Dd = g_data_00d1ca10._12_4_;
                color_00.fields.b = (float)(int)g_data_00d1ca10;
                color_00.fields.a = (float)(int)((ulong)g_data_00d1ca10 >> 0x20);
                color_00.fields.r = 1.0;
                color_00.fields.g = 0.0;
                Characters_BaseCharacter__AddVisibleOutlineWithColor
                          ((Characters_BaseCharacter_o *)uVar6,color_00,(MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)uVar6,(UnityEngine_Object_o *)auStack_c8._24_8_,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 == '\0') {
                  fVar11 = g_data_00d19fc0._4_4_;
                  fVar12 = g_data_00d19fc0._8_4_;
                  fVar13 = g_data_00d19fc0._12_4_;
                  uVar5 = g_data_00d19fc0;
                  color.fields.b = (float)(int)uVar5;
                  color.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
                  color.fields.r = (float)(int)uVar5;
                  color.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
                  Characters_BaseCharacter__AddVisibleOutlineWithColor
                            ((Characters_BaseCharacter_o *)uVar6,color,(MethodInfo *)0x0);
                  lVar4 = *(long *)&(__this_05->fields).Dead;
                  if (lVar4 == 0) goto label_042f3ea3;
                  pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f3ea8;
                  UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  fStack_78 = UVar15.fields.z;
                  auStack_88._8_4_ = extraout_XMM0_Dc_01;
                  auStack_88._0_8_ = UVar15.fields._0_8_;
                  auStack_88._12_4_ = extraout_XMM0_Dd_01;
                  lVar4 = *(long *)&((Characters_Human_Fields *)(uVar6 + 0x10))->Dead;
                  fStack_74 = fVar11;
                  fStack_70 = fVar12;
                  fStack_6c = fVar13;
                  if (lVar4 == 0) goto label_042f3ead;
                  pUVar3 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f3eb2;
                  UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  fStack_98 = UVar15.fields.z;
                  auStack_a8._8_4_ = extraout_XMM0_Dc_02;
                  auStack_a8._0_8_ = UVar15.fields._0_8_;
                  auStack_a8._12_4_ = extraout_XMM0_Dd_02;
                  fStack_94 = fVar11;
                  fStack_90 = fVar12;
                  fStack_8c = fVar13;
                  if (g_data_057a68cb == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                    g_data_057a68cb = '\x01';
                    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
                  }
                  else {
                    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
                  }
                  if (iVar2 == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  fVar11 = ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_) *
                           ((float)auStack_88._0_4_ - (float)auStack_a8._0_4_) +
                           ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) *
                           ((float)auStack_88._4_4_ - (float)auStack_a8._4_4_) +
                           (fStack_78 - fStack_98) * (fStack_78 - fStack_98);
                  if (fVar11 < 0.0) {
                    fVar11 = sqrtf(fVar11);
                    in_XMM1_Db = 0.0;
                    in_XMM1_Dc = 0.0;
                    in_XMM1_Dd = 0.0;
                    if (fVar11 < fVar10) {
                      pCStack_68 = (Characters_Human_o *)uVar6;
                      fVar10 = fVar11;
                    }
                  }
                  else {
                    in_XMM1_Db = 0.0;
                    in_XMM1_Dc = 0.0;
                    in_XMM1_Dd = 0.0;
                    if (SQRT(fVar11) < fVar10) {
                      pCStack_68 = (Characters_Human_o *)uVar6;
                      fVar10 = SQRT(fVar11);
                    }
                  }
                }
              }
            }
            else {
              Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)uVar6,(MethodInfo *)0x0);
            }
            goto label_042f3aba;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_042f3e91:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
label_042f3e96:
  do {
    il2cpp_runtime_helper_022b2c90();
    pCVar9 = __this_05;
label_042f3e9e:
    il2cpp_runtime_helper_022b2fd0(pCVar9);
label_042f3ea3:
    il2cpp_runtime_helper_022b2c90();
label_042f3ea8:
    il2cpp_runtime_helper_022b2c90();
label_042f3ead:
    il2cpp_runtime_helper_022b2c90();
label_042f3eb2:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
label_042f405c:
      __this_04.fields._8_8_ = in_stack_ffffffffffffff10;
      __this_04.fields._set = in_stack_ffffffffffffff08;
      __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff18;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)auStack_c8);
      _Unwind_Resume(auVar14._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_03.fields._set = in_stack_ffffffffffffff08;
    __this_03.fields._current = (Il2CppObject *)in_stack_ffffffffffffff18;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)auStack_c8)
    ;
    __this_05 = (Characters_Human_o *)0x0;
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_042f405c;
    }
label_042f3dc7:
    uVar6 = auStack_c8._24_8_;
    pCVar9 = (Characters_Human_o *)auStack_c8._24_8_;
    if (cStack_d1 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if ((Characters_Human_o *)uVar6 == (Characters_Human_o *)0x0) goto label_042f3e96;
        color_01.fields.b = 0.0;
        color_01.fields.a = 1.0;
        color_01.fields.r = 1.0;
        color_01.fields.g = 0.0;
        Characters_BaseCharacter__AddVisibleOutlineWithColor
                  ((Characters_BaseCharacter_o *)uVar6,color_01,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar9 = pCStack_68;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCStack_68,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
  } while( true );
}


// Characters.CarrySpecial$$Deactivate
// il2cpp: void Characters_CarrySpecial__Deactivate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x42f40a0

void Characters_CarrySpecial__Deactivate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  UnityEngine_Transform_o *x;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  Characters_Human_o *pCVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_HashSet_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Characters_BaseCharacter_o *__this_06;
  
  if (g_data_057aded7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057aded7 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_06 = (Characters_BaseCharacter_o *)0x0;
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    pCVar4 = __this_00;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      x = (__this_00->fields).GrabHand;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        Characters_Human__StopCarrySpecial(__this_00,(MethodInfo *)0x0);
        return;
      }
      pCVar4 = Characters_Human__GetCarryOption
                         (__this_00,
                          *(float *)(&g_data_00d1d668 +
                                    (ulong)(*(char *)((long)&(__this_00->fields).Animation + 4) == '\0') * 4),
                          (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        Characters_Human__StartCarrySpecial(__this_00,pCVar4,(MethodInfo *)0x0);
      }
      Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
      pCVar4 = *(Characters_Human_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_042f42df;
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((bVar1 <= (pCVar4->klass->_2).naturalAligment) &&
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
        __this_01 = (System_Collections_Generic_HashSet_object__o *)(pCVar4->fields).RichTextName;
        if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042f42df;
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_01,
                   MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
        while( true ) {
          __this_02.fields._8_8_ = pIVar8;
          __this_02.fields._set = pSVar7;
          __this_02.fields._current = (Il2CppObject *)__this_06;
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffffb8);
          if ((char)bVar3 == '\0') {
            __this_03.fields._8_8_ = pIVar8;
            __this_03.fields._set = pSVar7;
            __this_03.fields._current = (Il2CppObject *)__this_06;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
            return;
          }
          if (__this_06 == (Characters_BaseCharacter_o *)0x0) break;
          Characters_BaseCharacter__RemoveOutline(__this_06,(MethodInfo *)0x0);
        }
        il2cpp_runtime_helper_022b2c90();
        pCVar4 = __this_00;
      }
    }
    il2cpp_runtime_helper_022b2fd0(pCVar4);
  }
label_042f42df:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._set = pSVar7;
    __this_04.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar8;
  __this_05.fields._set = pSVar7;
  __this_05.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


