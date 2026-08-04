// Type: Characters.StockSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/StockSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// --------------------------------

// Characters.StockSpecial$$.ctor
// il2cpp: void Characters_StockSpecial___ctor (Characters_StockSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42f8f70

void Characters_StockSpecial___ctor
               (Characters_StockSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor
            ((Characters_BaseHoldAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  return;
}


// Characters.StockSpecial$$CanUse
// il2cpp: bool Characters_StockSpecial__CanUse (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x42f8f80

bool_conflict Characters_StockSpecial__CanUse(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  Characters_StockSpecial_o *pCVar3;
  uint uVar4;
  
  uVar4 = 0;
  pCVar3 = __this;
  bVar2 = Characters_BaseHoldAttackSpecial__CanUse
                    ((Characters_BaseHoldAttackSpecial_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)&(pCVar3->fields).IsActive = 0;
      bVar2 = (*(pCVar3->klass->vtable)._10_Deactivate.methodPtr)();
      return bVar2;
    }
    uVar4 = (uint)((pCVar1->fields).FinishSetup == 0);
  }
  return uVar4;
}


// Characters.StockSpecial$$FalseAttack
// il2cpp: void Characters_StockSpecial__FalseAttack (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x42f8fc0

void Characters_StockSpecial__FalseAttack(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  *(undefined1 *)&(__this->fields).IsActive = 0;
  vtableDispatch = (__this->klass->vtable)._10_Deactivate.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._10_Deactivate.method,in_RDX,vtableDispatch);
  return;
}


// Characters.StockSpecial$$Activate
// il2cpp: void Characters_StockSpecial__Activate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x42f8fe0

void Characters_StockSpecial__Activate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  Characters_Human_c *pCVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Action_Hashtable__o *pSVar9;
  Characters_BaseMovementSync_o *pCVar10;
  UnityEngine_Rigidbody_o *__this_00;
  System_String_c *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  Il2CppClass *pIVar13;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  bool_conflict bVar17;
  VirtualInvokeData *pVVar18;
  System_String_o *pSVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Characters_Human_o **unaff_RBX;
  MethodInfo *pMVar20;
  Characters_BaseMovementSync_c *pCVar21;
  long *plVar22;
  long lVar23;
  Characters_Human_o *pCVar24;
  Characters_Human_o *pCVar25;
  long *unaff_R12;
  float fVar26;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o force;
  undefined1 in_stack_ffffffffffffff00 [12];
  float in_stack_ffffffffffffff0c;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar32;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  Characters_Human_o *pCStack_58;
  long *plStack_50;
  
  if (g_data_057adef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef1 = '\x01';
  }
  pCVar24 = (Characters_Human_o *)(__this->fields)._owner;
  if (pCVar24 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar24->klass->_2).naturalAligment) &&
       ((pCVar24->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      plVar22 = (long *)pCVar24;
      if (g_data_057ade30 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IHumanController);
        plVar22 = &TypeInfo_Object;
        il2cpp_runtime_helper_023445d0();
        g_data_057ade30 = '\x01';
      }
      if (*(char *)((long)&(pCVar24->fields).Animation + 4) == '\0') {
        plVar22 = (long *)(pCVar24->fields).HumanCache;
        if ((Characters_Human_o *)plVar22 == (Characters_Human_o *)0x0) goto label_042da969;
        bVar17 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)plVar22,(MethodInfo *)0x0);
        if ((char)bVar17 == '\0') {
          plVar22 = (long *)(pCVar24->fields).Special;
          if ((Characters_Human_o *)plVar22 == (Characters_Human_o *)0x0) goto label_042da969;
          bVar17 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)plVar22,(MethodInfo *)0x0);
          if (((char)bVar17 == '\0') && (*(int *)&(pCVar24->fields).Weapon == 0)) goto label_042da469;
        }
        pCVar25 = (Characters_Human_o *)(pCVar24->fields).WalkAnimation;
        if (pCVar25 == (Characters_Human_o *)0x0) goto label_042da969;
        pCVar7 = pCVar25->klass;
        uVar3._0_1_ = (pCVar7->_2).rank;
        uVar3._1_1_ = (pCVar7->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar8 = (pCVar7->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IHumanController) {
              pVVar18 = &(pCVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar23);
              goto label_042da62b;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar23);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pCVar25,TypeInfo_IHumanController,0);
label_042da62b:
        cVar15 = (*pVVar18->methodPtr)(pCVar25,pVVar18->method);
        if (cVar15 == '\0') {
          pSVar19 = (pCVar24->fields).WalkAnimation;
          unaff_RBX = (Characters_Human_o **)&TypeInfo_IHumanController;
          plVar22 = (long *)pCVar25;
          if (pSVar19 == (System_String_o *)0x0) goto label_042da969;
          pSVar11 = pSVar19->klass;
          uVar5._0_1_ = (pSVar11->_2).rank;
          uVar5._1_1_ = (pSVar11->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar8 = (pSVar11->_1).interfaceOffsets;
            lVar23 = 0;
            do {
              if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IHumanController) {
                pVVar18 = &(pSVar11->vtable)._0_Equals + (*(int *)((long)&pIVar8->offset + lVar23) + 1);
                goto label_042da7db;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar23);
          }
          pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IHumanController,1);
label_042da7db:
          cVar15 = (*pVVar18->methodPtr)(pSVar19,pVVar18->method);
          if (cVar15 == '\0') {
            cVar15 = *(char *)((long)&(pCVar24->fields).IsWalk + 2);
            uVar16 = UnityEngine_Random__Range_4df2410(0,100,(MethodInfo *)0x0);
            unaff_RBX = (Characters_Human_o **)(ulong)uVar16;
            if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar10 = (TypeInfo_HumanAnimations->fields).MovementSync;
            if (cVar15 == '\0') {
              pCVar21 = (Characters_BaseMovementSync_c *)(&pCVar10[2].fields._photonView)[(int)uVar16 < 0x32];
            }
            else {
              pCVar21 = (Characters_BaseMovementSync_c *)(&pCVar10[2].fields._transform)[(int)uVar16 < 0x32];
            }
          }
          else {
            uVar16 = UnityEngine_Random__Range_4df2410(0,100,(MethodInfo *)0x0);
            unaff_RBX = (Characters_Human_o **)(ulong)uVar16;
            if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar22 = (long *)TypeInfo_HumanAnimations;
            if (pCVar24 == (Characters_Human_o *)0x0) goto label_042da969;
            pCVar21 = (Characters_BaseMovementSync_c *)
                      (&(TypeInfo_HumanAnimations->fields).MovementSync[2].fields._photonView)[(int)uVar16 < 0x32];
          }
        }
        else {
          uVar16 = UnityEngine_Random__Range_4df2410(0,100,(MethodInfo *)0x0);
          unaff_RBX = (Characters_Human_o **)(ulong)uVar16;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar22 = (long *)TypeInfo_HumanAnimations;
          if (pCVar24 == (Characters_Human_o *)0x0) goto label_042da969;
          pCVar21 = (Characters_BaseMovementSync_c *)
                    (&(TypeInfo_HumanAnimations->fields).MovementSync[2].fields._transform)[(int)uVar16 < 0x32];
        }
label_042da897:
        plVar22 = (long *)&(pCVar24->fields)._currentVelocity;
        *(Characters_BaseMovementSync_c **)&(pCVar24->fields)._currentVelocity.fields = pCVar21;
        il2cpp_runtime_helper_022b4080();
        cVar15 = *(char *)((long)&(pCVar24->fields).Animation + 4);
      }
      else {
label_042da469:
        unaff_RBX = (Characters_Human_o **)(pCVar24->fields).WalkAnimation;
        if ((Characters_Human_o *)unaff_RBX == (Characters_Human_o *)0x0) goto label_042da969;
        unaff_R12 = &TypeInfo_IHumanController;
        pCVar7 = ((Characters_Human_o *)unaff_RBX)->klass;
        uVar2._0_1_ = (pCVar7->_2).rank;
        uVar2._1_1_ = (pCVar7->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar8 = (pCVar7->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IHumanController) {
              pVVar18 = &(pCVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar23);
              goto label_042da578;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar23);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IHumanController,0);
label_042da578:
        plVar22 = (long *)unaff_RBX;
        cVar15 = (*pVVar18->methodPtr)(unaff_RBX,pVVar18->method);
        if (cVar15 != '\0') {
          unaff_RBX = &TypeInfo_HumanAnimations;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar21 = (TypeInfo_HumanAnimations->fields).MovementSync[3].klass;
          goto label_042da897;
        }
        pSVar19 = (pCVar24->fields).WalkAnimation;
        if (pSVar19 == (System_String_o *)0x0) goto label_042da969;
        pSVar11 = pSVar19->klass;
        uVar4._0_1_ = (pSVar11->_2).rank;
        uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar11->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IHumanController) {
              pVVar18 = &(pSVar11->vtable)._0_Equals + (*(int *)((long)&pIVar8->offset + lVar23) + 1);
              goto label_042da700;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar23);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IHumanController,1);
label_042da700:
        pMVar20 = pVVar18->method;
        cVar15 = (*pVVar18->methodPtr)(pSVar19);
        if (cVar15 != '\0') {
          unaff_RBX = &TypeInfo_HumanAnimations;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar21 = *(Characters_BaseMovementSync_c **)
                     &(TypeInfo_HumanAnimations->fields).MovementSync[2].fields._timeSinceLastMessage;
          goto label_042da897;
        }
        unaff_RBX = (Characters_Human_o **)Characters_Human__FindNearestTitan(pCVar24,pMVar20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar20 = (MethodInfo *)0x0;
        plVar22 = (long *)unaff_RBX;
        bVar17 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar17 == '\0') {
          pSVar19 = Characters_Human__GetBladeAnimationMouse((Characters_Human_o *)plVar22,pMVar20);
        }
        else {
          if (((Characters_Human_o *)unaff_RBX == (Characters_Human_o *)0x0) ||
             (pSVar9 = (((Characters_Human_o *)unaff_RBX)->fields).OnPlayerPropertiesChanged,
             pSVar9 == (System_Action_Hashtable__o *)0x0)) goto label_042da969;
          pSVar19 = Characters_Human__GetBladeAnimationTarget
                              (pCVar24,(UnityEngine_Transform_o *)(pSVar9->fields).method_code,method_00);
        }
        plVar22 = (long *)&(pCVar24->fields)._currentVelocity;
        *(System_String_o **)&(pCVar24->fields)._currentVelocity.fields = pSVar19;
        il2cpp_runtime_helper_022b4080();
        cVar15 = *(char *)((long)&(pCVar24->fields).Animation + 4);
      }
      if (cVar15 != '\0') {
        lVar23 = *(long *)&(pCVar24->fields).Dead;
        if ((lVar23 != 0) &&
           (plVar22 = *(long **)(lVar23 + 0x10), (Characters_Human_o *)plVar22 != (Characters_Human_o *)0x0))
        {
          __this_00 = *(UnityEngine_Rigidbody_o **)(lVar23 + 0x18);
          UVar31 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)plVar22,(MethodInfo *)0x0);
          unaff_RBX = (Characters_Human_o **)0x0;
          if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
            force.fields.x = UVar31.fields.x * 200.0;
            force.fields.y = UVar31.fields.y * 200.0;
            force.fields.z = UVar31.fields.z * 200.0;
            UnityEngine_Rigidbody__AddForce_4e7f8d0(__this_00,force,(MethodInfo *)0x0);
            goto label_042da8fb;
          }
        }
label_042da969:
        il2cpp_runtime_helper_022b2c90();
        auVar27._8_8_ = extraout_XMM1_Qb;
        auVar27._0_8_ = extraout_XMM1_Qa;
        pCStack_58 = (Characters_Human_o *)unaff_RBX;
        plStack_50 = unaff_R12;
        if (g_data_057ade33 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_BaseShifter_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
          il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseShifter_GetEnumera);
          auVar27._8_8_ = extraout_XMM1_Qb_00;
          auVar27._0_8_ = extraout_XMM1_Qa_00;
          g_data_057ade33 = '\x01';
        }
        auStack_d0._0_8_ = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
        auStack_d0._8_8_ = (Il2CppType *)0x0;
        auStack_d0._16_8_ = (Il2CppObject *)0x0;
        pSVar32 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
        pSVar19 = (((Characters_Human_o *)plVar22)->fields).Team;
        if ((pSVar19 != (System_String_o *)0x0) &&
           (pSVar11 = pSVar19[3].klass, pSVar11 != (System_String_c *)0x0)) {
          System_Collections_Generic_HashSet_object___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_70,
                     (System_Collections_Generic_HashSet_object__o *)pSVar11,MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
          auStack_d0._16_8_ = pIStack_60;
          auStack_d0._0_8_ = auStack_70._0_8_;
          auStack_d0._8_8_ = auStack_70._8_8_;
          in_stack_ffffffffffffff0c = INFINITY;
label_042daaa4:
          while (__this_02.fields._version = (int32_t)in_stack_ffffffffffffff0c,
                __this_02.fields._set =
                     (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_,
                __this_02.fields._index = in_stack_ffffffffffffff00._8_4_,
                __this_02.fields._current = (Il2CppObject *)pSVar32,
                bVar17 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                   (__this_02,(MethodInfo_3219C40 *)auStack_d0), uVar14 = auStack_d0._16_8_,
                (char)bVar17 != '\0') {
            lVar23 = *(long *)&(((Characters_Human_o *)plVar22)->fields).Dead;
            if (lVar23 == 0) {
              il2cpp_runtime_helper_022b2c90();
label_042dadae:
              il2cpp_runtime_helper_022b2c90();
label_042dadb3:
              il2cpp_runtime_helper_022b2c90();
label_042dadb8:
              il2cpp_runtime_helper_022b2c90();
label_042dadbd:
              il2cpp_runtime_helper_022b2c90();
              goto label_042dadc2;
            }
            pUVar12 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
            if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_042dadae;
            UVar31 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
            auVar28._4_12_ = auVar27._4_12_;
            auVar28._0_4_ = UVar31.fields.z;
            auStack_90._8_4_ = extraout_XMM0_Dc;
            auStack_90._0_8_ = UVar31.fields._0_8_;
            auStack_90._12_4_ = extraout_XMM0_Dd;
            auStack_80 = auVar28;
            if ((Il2CppObject *)uVar14 == (Il2CppObject *)0x0) goto label_042dadb3;
            pIVar13 = ((Il2CppObject *)(uVar14 + 0x70))->klass;
            if (pIVar13 == (Il2CppClass *)0x0) goto label_042dadb8;
            pUVar12 = (UnityEngine_Transform_o *)(pIVar13->_1).name;
            if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_042dadbd;
            UVar31 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
            auStack_a0._4_12_ = auVar28._4_12_;
            auStack_a0._0_4_ = UVar31.fields.z;
            auStack_d0._40_4_ = extraout_XMM0_Dc_00;
            auStack_d0._32_8_ = UVar31.fields._0_8_;
            auStack_d0._44_4_ = extraout_XMM0_Dd_00;
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar6 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar6 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar6 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar26 = ((float)auStack_90._0_4_ - (float)auStack_d0._32_4_) *
                     ((float)auStack_90._0_4_ - (float)auStack_d0._32_4_) +
                     ((float)auStack_90._4_4_ - (float)auStack_d0._36_4_) *
                     ((float)auStack_90._4_4_ - (float)auStack_d0._36_4_) +
                     ((float)auStack_80._0_4_ - (float)auStack_a0._0_4_) *
                     ((float)auStack_80._0_4_ - (float)auStack_a0._0_4_);
            if (fVar26 < 0.0) goto label_042daa90;
            fVar26 = SQRT(fVar26);
            auVar27 = ZEXT416((uint)in_stack_ffffffffffffff0c);
            if (fVar26 < in_stack_ffffffffffffff0c) goto label_042dabc2;
          }
          __this_03.fields._version = (int32_t)in_stack_ffffffffffffff0c;
          __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
          __this_03.fields._index = in_stack_ffffffffffffff00._8_4_;
          __this_03.fields._current = (Il2CppObject *)pSVar32;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_3219C30 *)auStack_d0);
          pSVar19 = (((Characters_Human_o *)plVar22)->fields).Team;
          if ((pSVar19 != (System_String_o *)0x0) &&
             (__this_01 = pSVar19[3].monitor, __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0
             )) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_70,__this_01,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseShifter_GetEnumera
                      );
            pSVar32 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_70._0_8_;
label_042dac54:
            while( true ) {
              __this_04.fields._version = (int32_t)in_stack_ffffffffffffff0c;
              __this_04.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
              __this_04.fields._index = in_stack_ffffffffffffff00._8_4_;
              __this_04.fields._current = (Il2CppObject *)pSVar32;
              bVar17 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                 (__this_04,(MethodInfo_3219C40 *)&stack0xffffffffffffff10);
              if ((char)bVar17 == '\0') {
                __this_05.fields._version = (int32_t)in_stack_ffffffffffffff0c;
                __this_05.fields._set =
                     (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
                __this_05.fields._index = in_stack_ffffffffffffff00._8_4_;
                __this_05.fields._current = (Il2CppObject *)pSVar32;
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff10);
                return;
              }
              lVar23 = *(long *)&(((Characters_Human_o *)plVar22)->fields).Dead;
              if (lVar23 == 0) break;
              pUVar12 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
              if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_042dadc7;
              UVar31 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
              auVar29._4_12_ = auVar27._4_12_;
              auVar29._0_4_ = UVar31.fields.z;
              auStack_90._8_4_ = extraout_XMM0_Dc_01;
              auStack_90._0_8_ = UVar31.fields._0_8_;
              auStack_90._12_4_ = extraout_XMM0_Dd_01;
              auStack_80 = auVar29;
              if (pIStack_60 == (Il2CppObject *)0x0) goto label_042dadcc;
              if (pIStack_60[7].klass == (Il2CppClass *)0x0) goto label_042dadd1;
              pUVar12 = (UnityEngine_Transform_o *)((pIStack_60[7].klass)->_1).name;
              if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_042dadd6;
              UVar31 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
              auStack_a0._4_12_ = auVar29._4_12_;
              auStack_a0._0_4_ = UVar31.fields.z;
              auStack_d0._40_4_ = extraout_XMM0_Dc_02;
              auStack_d0._32_8_ = UVar31.fields._0_8_;
              auStack_d0._44_4_ = extraout_XMM0_Dd_02;
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
                iVar6 = *(int *)(TypeInfo_Math + 0xe4);
              }
              else {
                iVar6 = *(int *)(TypeInfo_Math + 0xe4);
              }
              if (iVar6 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar26 = ((float)auStack_90._0_4_ - (float)auStack_d0._32_4_) *
                       ((float)auStack_90._0_4_ - (float)auStack_d0._32_4_) +
                       ((float)auStack_90._4_4_ - (float)auStack_d0._36_4_) *
                       ((float)auStack_90._4_4_ - (float)auStack_d0._36_4_) +
                       ((float)auStack_80._0_4_ - (float)auStack_a0._0_4_) *
                       ((float)auStack_80._0_4_ - (float)auStack_a0._0_4_);
              if (fVar26 < 0.0) goto label_042dac40;
              fVar26 = SQRT(fVar26);
              auVar27 = ZEXT416((uint)in_stack_ffffffffffffff0c);
              if (fVar26 < in_stack_ffffffffffffff0c) goto label_042dad72;
            }
label_042dadc2:
            il2cpp_runtime_helper_022b2c90();
label_042dadc7:
            il2cpp_runtime_helper_022b2c90();
label_042dadcc:
            il2cpp_runtime_helper_022b2c90();
label_042dadd1:
            il2cpp_runtime_helper_022b2c90();
label_042dadd6:
            il2cpp_runtime_helper_022b2c90();
          }
        }
        auVar30 = il2cpp_runtime_helper_022b2c90();
        if (auVar30._8_4_ == 1) {
          plVar22 = (long *)__cxa_begin_catch(auVar30._0_8_);
          lVar23 = *plVar22;
          __cxa_end_catch();
          __this_06.fields._version = (int32_t)in_stack_ffffffffffffff0c;
          __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
          __this_06.fields._index = in_stack_ffffffffffffff00._8_4_;
          __this_06.fields._current = (Il2CppObject *)pSVar32;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_06,(MethodInfo_3219C30 *)&stack0xffffffffffffff10);
          if (lVar23 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar23);
        }
        __this_07.fields._version = (int32_t)in_stack_ffffffffffffff0c;
        __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
        __this_07.fields._index = in_stack_ffffffffffffff00._8_4_;
        __this_07.fields._current = (Il2CppObject *)pSVar32;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_3219C30 *)&stack0xffffffffffffff10);
        _Unwind_Resume(auVar30._0_8_);
      }
label_042da8fb:
      Characters_BaseCharacter__PlayAnimationReset
                ((Characters_BaseCharacter_o *)pCVar24,
                 *(System_String_o **)&(pCVar24->fields)._currentVelocity.fields,(MethodInfo *)0x0);
      *(undefined1 *)((long)&(pCVar24->fields).LastGoodHeadAngle.fields.x + 1) = 0;
      if (((pCVar24->fields).FinishSetup & 0xfffffffeU) == 2) {
        (pCVar24->fields).LateUpdateHeadRotation.fields.hasValue = 0;
      }
      (pCVar24->fields).FinishSetup = 1;
      if (*(char *)((long)&(pCVar24->fields).Animation + 4) == '\0') {
        *(undefined1 *)&(pCVar24->fields).LastGoodHeadAngle.fields.x = 0;
      }
      else {
        *(undefined2 *)&(pCVar24->fields).LastGoodHeadAngle.fields.x = 0x101;
      }
      Characters_Human__ToggleSparks(pCVar24,0,method_01);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar25 = pCVar24;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)pCVar24,(MethodInfo *)0x0);
  pSVar19 = (pCVar24->fields).RichTextName;
  if ((pSVar19 != (System_String_o *)0x0) &&
     (pCVar25 = pSVar19[7].monitor, pCVar25 != (Characters_Human_o *)0x0)) {
    fVar26 = Characters_AnimationHandler__GetNormalizedTime
                       ((Characters_AnimationHandler_o *)pCVar25,(System_String_o *)pSVar19[0x1e].klass,
                        (MethodInfo *)0x0);
    if (0.32 <= fVar26) {
      pCVar25 = (Characters_Human_o *)(pCVar24->fields).RichTextName;
      if (pCVar25 == (Characters_Human_o *)0x0) goto label_042f90c6;
      Characters_Human__PauseAnimation(pCVar25,(MethodInfo *)0x0);
    }
    pSVar19 = (pCVar24->fields).RichTextName;
    if (pSVar19 != (System_String_o *)0x0) {
      if (*(char *)((long)&pSVar19[8].klass + 4) != '\0') {
        *(undefined1 *)((long)&(pCVar24->fields).m_CancellationTokenSource + 4) = 0;
        (*(pCVar24->klass->vtable)._10_unknown.methodPtr)(pCVar24,(pCVar24->klass->vtable)._10_unknown.method)
        ;
        return;
      }
      return;
    }
  }
label_042f90c6:
  il2cpp_runtime_helper_022b2c90();
  pCVar24 = (Characters_Human_o *)(pCVar25->fields).RichTextName;
  if (pCVar24 != (Characters_Human_o *)0x0) {
    Characters_Human__ContinueAnimation(pCVar24,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
label_042daa90:
  fVar26 = sqrtf(fVar26);
  auVar27 = ZEXT416((uint)in_stack_ffffffffffffff0c);
  if (fVar26 < in_stack_ffffffffffffff0c) {
label_042dabc2:
    in_stack_ffffffffffffff0c = fVar26;
  }
  goto label_042daaa4;
label_042dac40:
  fVar26 = sqrtf(fVar26);
  auVar27 = ZEXT416((uint)in_stack_ffffffffffffff0c);
  if (fVar26 < in_stack_ffffffffffffff0c) {
label_042dad72:
    in_stack_ffffffffffffff0c = fVar26;
  }
  goto label_042dac54;
}


// Characters.StockSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_StockSpecial__ActiveFixedUpdate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x42f9050

void Characters_StockSpecial__ActiveFixedUpdate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Human_o *__this_00;
  float fVar2;
  
  __this_00 = (Characters_Human_o *)__this;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = *(Characters_Human_o **)&(pCVar1->fields)._cameraFPS, __this_00 != (Characters_Human_o *)0x0
     )) {
    fVar2 = Characters_AnimationHandler__GetNormalizedTime
                      ((Characters_AnimationHandler_o *)__this_00,
                       *(System_String_o **)&(pCVar1->fields)._currentVelocity.fields,(MethodInfo *)0x0);
    if (0.32 <= fVar2) {
      __this_00 = (__this->fields)._human;
      if (__this_00 == (Characters_Human_o *)0x0) goto label_042f90c6;
      Characters_Human__PauseAnimation(__this_00,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if (*(char *)((long)&(pCVar1->fields).Animation + 4) != '\0') {
        *(undefined1 *)&(__this->fields).IsActive = 0;
        (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                  (__this,(__this->klass->vtable)._10_Deactivate.method);
        return;
      }
      return;
    }
  }
label_042f90c6:
  il2cpp_runtime_helper_022b2c90();
  pCVar1 = (Characters_Human_o *)(__this_00->fields).RichTextName;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    Characters_Human__ContinueAnimation(pCVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.StockSpecial$$Deactivate
// il2cpp: void Characters_StockSpecial__Deactivate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x42f90d0

void Characters_StockSpecial__Deactivate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__ContinueAnimation(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


