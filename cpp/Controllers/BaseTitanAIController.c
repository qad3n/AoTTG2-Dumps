// Type: Controllers.BaseTitanAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/BaseTitanAIController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/BaseTitanAIController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.BaseTitanAIController$$get__scriptedAI
// il2cpp: bool Controllers_BaseTitanAIController__get__scriptedAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7ed60

bool_conflict
Controllers_BaseTitanAIController__get__scriptedAI
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return 0;
}


// Controllers.BaseTitanAIController$$get__stationaryAI
// il2cpp: bool Controllers_BaseTitanAIController__get__stationaryAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7ed70

bool_conflict
Controllers_BaseTitanAIController__get__stationaryAI
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return 0;
}


// Controllers.BaseTitanAIController$$get_AIEnabled
// il2cpp: bool Controllers_BaseTitanAIController__get_AIEnabled (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7ed80

bool_conflict
Controllers_BaseTitanAIController__get_AIEnabled
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)&(__this->fields)._waitAttackTimeLeft);
}


// Controllers.BaseTitanAIController$$set_AIEnabled
// il2cpp: void Controllers_BaseTitanAIController__set_AIEnabled (Controllers_BaseTitanAIController_o* __this, bool value, const MethodInfo* method);
// 0x3f7ed90

void Controllers_BaseTitanAIController__set_AIEnabled
               (Controllers_BaseTitanAIController_o *__this,bool_conflict value,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = (char)value;
  *(char *)&(__this->fields)._waitAttackTimeLeft = cVar2;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    *(char *)&(pCVar1->fields)._previousCoreLocalPosition.fields.y = cVar2;
    if (cVar2 == '\0') {
      (__this->fields).AIState = 0;
      *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
      *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
      fVar3 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).AttackInfos = fVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$Awake
// il2cpp: void Controllers_BaseTitanAIController__Awake (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7ee40

void Controllers_BaseTitanAIController__Awake
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o **ppCVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_AI_NavMeshHit_o __this_00;
  byte bVar4;
  bool_conflict bVar5;
  Characters_BaseCharacter_o *pCVar6;
  Characters_BaseTitan_o *pCVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Vector3_o UVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  int32_t iVar14;
  
  if (DAT_05703f5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05703f5d = '\x01';
  }
  pIVar12 = (InvokerMethod)0x0;
  pcVar13 = (char *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  iVar14 = 0;
  if (DAT_05703f54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    DAT_05703f54 = '\x01';
  }
  pCVar6 = (Characters_BaseCharacter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar6;
  il2cpp_runtime_glue(&(__this->fields)._character,pCVar6);
  pCVar7 = (Characters_BaseTitan_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppCVar1 = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar7;
  il2cpp_runtime_glue(ppCVar1,pCVar7);
  pCVar7 = (__this->fields)._titan;
  if (pCVar7 != (Characters_BaseTitan_o *)0x0) {
    pIVar8 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pCVar7,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
    *(Il2CppObject **)&(__this->fields)._usePathfinding = pIVar8;
    il2cpp_runtime_glue(&(__this->fields)._usePathfinding,pIVar8);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x50), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0xa8), lVar2 != 0)) {
      if (*(char *)(lVar2 + 0x11) == '\0') {
        *(undefined1 *)((long)&(__this->fields)._waitAttackTimeLeft + 1) = 0;
        return;
      }
      bVar4 = (*(__this->klass->vtable)._8_get__stationaryAI.methodPtr)(__this);
      *(byte *)((long)&(__this->fields)._waitAttackTimeLeft + 1) = bVar4 ^ 1;
      if (bVar4 != 0) {
        return;
      }
      if (((*ppCVar1 != (Characters_BaseTitan_o *)0x0) &&
          (lVar2 = *(long *)&((*ppCVar1)->fields).Dead, lVar2 != 0)) &&
         (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UVar9 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        bVar5 = UnityEngine_AI_NavMesh__SamplePosition
                          (UVar9,(UnityEngine_AI_NavMeshHit_o *)&stack0xffffffffffffffc8,100.0,-1,
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        if ((*ppCVar1 != (Characters_BaseTitan_o *)0x0) &&
           (lVar2 = *(long *)&((*ppCVar1)->fields).Dead, lVar2 != 0)) {
          pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
          __this_00.fields._8_8_ = pIVar11;
          __this_00.fields.m_Position.fields._0_8_ = pIVar10;
          __this_00.fields.m_Normal.fields._4_8_ = pIVar12;
          __this_00.fields._24_8_ = pcVar13;
          __this_00.fields.m_Hit = iVar14;
          UVar9 = UnityEngine_AI_NavMeshHit__get_position
                            (__this_00,(MethodInfo *)&stack0xffffffffffffffc8);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position(pUVar3,UVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$Start
// il2cpp: void Controllers_BaseTitanAIController__Start (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7f020

void Controllers_BaseTitanAIController__Start
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_AI_NavMeshAgent_o *pUVar5;
  UnityEngine_AI_NavMeshHit_o __this_00;
  UnityEngine_AI_NavMeshBuildSettings_o __this_01;
  UnityEngine_AI_NavMeshBuildSettings_o __this_02;
  UnityEngine_AI_NavMeshBuildSettings_o __this_03;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_GameObject_o *__this_04;
  Il2CppObject *pIVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  undefined1 in_stack_ffffffffffffff28 [12];
  float in_stack_ffffffffffffff34;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  float fVar14;
  _union_14 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  undefined8 local_48;
  char *pcStack_40;
  Il2CppClass *local_38;
  Il2CppType *pIStack_30;
  
  if (DAT_05703f5e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
    il2cpp_init_method_metadata();
    DAT_05703f5e = '\x01';
  }
  local_78._0_2_ = 0;
  local_78._2_1_ = '\0';
  local_78._3_1_ = '\0';
  local_78._4_4_ = 0;
  uStack_70 = 0;
  local_88.genericMethod = (void *)0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_2_ = 0;
  uStack_80._6_2_ = 0;
  local_68 = 0;
  iVar7 = 0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  (__this->fields).AIState = 0;
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 0;
    *(undefined1 *)((long)&(pCVar2->fields).State + 2) = 0;
    fVar9 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields).AttackInfos = fVar9;
    if (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) == '\0') {
      return;
    }
    pCVar2 = (__this->fields)._titan;
    if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
        (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar11 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      bVar6 = UnityEngine_AI_NavMesh__SamplePosition
                        (UVar11,(UnityEngine_AI_NavMeshHit_o *)&local_88,100.0,-1,(MethodInfo *)0x0)
      ;
      if ((char)bVar6 != '\0') {
        pCVar2 = (__this->fields)._titan;
        if ((pCVar2 == (Characters_BaseTitan_o *)0x0) ||
           (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) goto LAB_03f7f377;
        pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        __this_00.fields.m_Normal.fields.x = in_stack_ffffffffffffff34;
        __this_00.fields.m_Position.fields.x = (float)in_stack_ffffffffffffff28._0_4_;
        __this_00.fields.m_Position.fields.y = (float)in_stack_ffffffffffffff28._4_4_;
        __this_00.fields.m_Position.fields.z = (float)in_stack_ffffffffffffff28._8_4_;
        __this_00.fields.m_Normal.fields._4_8_ = pIVar12;
        __this_00.fields._24_8_ = pIVar13;
        __this_00.fields.m_Hit = iVar7;
        UVar11 = UnityEngine_AI_NavMeshHit__get_position(__this_00,(MethodInfo *)&local_88);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03f7f377;
        UnityEngine_Transform__set_position(pUVar4,UVar11,(MethodInfo *)0x0);
      }
      pCVar2 = (__this->fields)._titan;
      if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
        fVar9 = *(float *)((long)&(pCVar2->fields).TitanColliderToggler + 4);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
          in_stack_ffffffffffffff34 = fVar9;
        }
        Utility_Util__GetAgentSettingsCorrected
                  ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_58,fVar9,(MethodInfo *)0x0);
        fVar9 = (float)local_48;
        fVar14 = SUB84(local_48,4);
        __this_04 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
          pIVar8 = UnityEngine_GameObject__AddComponent<object>(__this_04,MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
          pfVar1 = &(__this->fields)._enemyDistance;
          *(Il2CppObject **)&(__this->fields)._enemyDistance = pIVar8;
          il2cpp_runtime_glue(pfVar1,pIVar8);
          pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
          __this_01.fields.m_AgentSlope = in_stack_ffffffffffffff34;
          __this_01.fields.m_AgentTypeID = in_stack_ffffffffffffff28._0_4_;
          __this_01.fields.m_AgentRadius = (float)in_stack_ffffffffffffff28._4_4_;
          __this_01.fields.m_AgentHeight = (float)in_stack_ffffffffffffff28._8_4_;
          __this_01.fields._16_8_ = local_58;
          __this_01.fields._24_8_ = pIStack_50;
          __this_01.fields.m_OverrideVoxelSize = (int32_t)fVar9;
          __this_01.fields.m_VoxelSize = fVar14;
          __this_01.fields._40_8_ = pcStack_40;
          __this_01.fields._48_8_ = local_38;
          __this_01.fields._56_8_ = pIStack_30;
          iVar7 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
          if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            UnityEngine_AI_NavMeshAgent__set_agentTypeID(pUVar5,iVar7,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._titan;
            if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
              pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
              fVar10 = Characters_BaseTitan__GetCurrentSpeed(pCVar2,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                UnityEngine_AI_NavMeshAgent__set_speed(pUVar5,fVar10,(MethodInfo *)0x0);
                if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                    (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_angularSpeed
                            (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,10.0,(MethodInfo *)0x0);
                  if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                      (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                    UnityEngine_AI_NavMeshAgent__set_acceleration
                              (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,10.0,(MethodInfo *)0x0);
                    if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      UnityEngine_AI_NavMeshAgent__set_autoRepath
                                (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,1,(MethodInfo *)0x0);
                      if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                          (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        UnityEngine_AI_NavMeshAgent__set_stoppingDistance
                                  (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,1.1,(MethodInfo *)0x0);
                        if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                            (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                          UnityEngine_AI_NavMeshAgent__set_autoBraking
                                    (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,0,(MethodInfo *)0x0);
                          pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)pfVar1;
                          __this_02.fields.m_AgentSlope = in_stack_ffffffffffffff34;
                          __this_02.fields.m_AgentTypeID = in_stack_ffffffffffffff28._0_4_;
                          __this_02.fields.m_AgentRadius = (float)in_stack_ffffffffffffff28._4_4_;
                          __this_02.fields.m_AgentHeight = (float)in_stack_ffffffffffffff28._8_4_;
                          __this_02.fields._16_8_ = local_58;
                          __this_02.fields._24_8_ = pIStack_50;
                          __this_02.fields.m_OverrideVoxelSize = (int32_t)fVar9;
                          __this_02.fields.m_VoxelSize = fVar14;
                          __this_02.fields._40_8_ = pcStack_40;
                          __this_02.fields._48_8_ = local_38;
                          __this_02.fields._56_8_ = pIStack_30;
                          fVar10 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                                             (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
                          if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            UnityEngine_AI_NavMeshAgent__set_radius(pUVar5,fVar10,(MethodInfo *)0x0)
                            ;
                            pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)pfVar1;
                            __this_03.fields.m_AgentSlope = in_stack_ffffffffffffff34;
                            __this_03.fields.m_AgentTypeID = in_stack_ffffffffffffff28._0_4_;
                            __this_03.fields.m_AgentRadius = (float)in_stack_ffffffffffffff28._4_4_;
                            __this_03.fields.m_AgentHeight = (float)in_stack_ffffffffffffff28._8_4_;
                            __this_03.fields._16_8_ = local_58;
                            __this_03.fields._24_8_ = pIStack_50;
                            __this_03.fields.m_OverrideVoxelSize = (int32_t)fVar9;
                            __this_03.fields.m_VoxelSize = fVar14;
                            __this_03.fields._40_8_ = pcStack_40;
                            __this_03.fields._48_8_ = local_38;
                            __this_03.fields._56_8_ = pIStack_30;
                            fVar9 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                                              (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
                            if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              UnityEngine_AI_NavMeshAgent__set_height
                                        (pUVar5,fVar9,(MethodInfo *)0x0);
                              if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                                  (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                UnityEngine_AI_NavMeshAgent__set_updatePosition
                                          (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,0,
                                           (MethodInfo *)0x0);
                                if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                                    (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                  UnityEngine_AI_NavMeshAgent__set_updateRotation
                                            (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,0,
                                             (MethodInfo *)0x0);
                                  if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                                      (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                    UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                                              (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,2,
                                               (MethodInfo *)0x0);
                                    if (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1 !=
                                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                      UnityEngine_AI_NavMeshAgent__set_avoidancePriority
                                                (*(UnityEngine_AI_NavMeshAgent_o **)pfVar1,0,
                                                 (MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f7f377:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$MoveTo
// il2cpp: void Controllers_BaseTitanAIController__MoveTo (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, float range, bool ignore, const MethodInfo* method);
// 0x3f7f380

void Controllers_BaseTitanAIController__MoveTo
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o position,
               float range,bool_conflict ignore,MethodInfo *method)

{
  (__this->fields).TurnAngle = (float)(int)position.fields._0_8_;
  (__this->fields)._moveToPosition.fields.x = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
  (__this->fields)._moveToPosition.fields.y = position.fields.z;
  *(undefined1 *)&(__this->fields)._moveAngle = 1;
  (__this->fields)._moveToActive = (bool_conflict)range;
  *(char *)&(__this->fields)._moveToRange = (char)ignore;
  *(undefined1 *)&(__this->fields)._moveToTimeout = 0;
  return;
}


// Controllers.BaseTitanAIController$$MoveToCallback
// il2cpp: void Controllers_BaseTitanAIController__MoveToCallback (Controllers_BaseTitanAIController_o* __this, System_Action_o* action, UnityEngine_Vector3_o position, float range, bool ignore, const MethodInfo* method);
// 0x3f7f3b0

void Controllers_BaseTitanAIController__MoveToCallback
               (Controllers_BaseTitanAIController_o *__this,System_Action_o *action,
               UnityEngine_Vector3_o position,float range,bool_conflict ignore,MethodInfo *method)

{
  (__this->fields).TurnAngle = (float)(int)position.fields._0_8_;
  (__this->fields)._moveToPosition.fields.x = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
  (__this->fields)._moveToPosition.fields.y = position.fields.z;
  *(undefined1 *)&(__this->fields)._moveAngle = 1;
  (__this->fields)._moveToActive = (bool_conflict)range;
  *(char *)&(__this->fields)._moveToRange = (char)ignore;
  *(undefined1 *)&(__this->fields)._moveToTimeout = 0;
  *(System_Action_o **)&(__this->fields)._moveToExact = action;
  il2cpp_runtime_glue(&(__this->fields)._moveToExact);
  return;
}


// Controllers.BaseTitanAIController$$MoveToExact
// il2cpp: void Controllers_BaseTitanAIController__MoveToExact (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, float range, float timeoutPadding, const MethodInfo* method);
// 0x3f7f3f0

void Controllers_BaseTitanAIController__MoveToExact
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o position,
               float range,float timeoutPadding,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  float local_18;
  float fStack_14;
  
  (__this->fields).TurnAngle = (float)(int)position.fields._0_8_;
  (__this->fields)._moveToPosition.fields.x = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
  (__this->fields)._moveToPosition.fields.y = position.fields.z;
  *(undefined1 *)&(__this->fields)._moveAngle = 1;
  (__this->fields)._moveToActive = (bool_conflict)range;
  *(undefined1 *)&(__this->fields)._moveToRange = 1;
  *(undefined1 *)&(__this->fields)._moveToTimeout = 1;
  pCVar2 = (__this->fields)._titan;
  if ((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
     (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)((long)&(pCVar2->fields).BaseTitanAnimations + 4);
      UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_18 = position.fields.x;
      fStack_14 = position.fields.y;
      local_18 = UVar5.fields.x - local_18;
      fStack_14 = UVar5.fields.y - fStack_14;
      fVar4 = UVar5.fields.z - position.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar4 = fVar4 * fVar4 + fStack_14 * fStack_14 + local_18 * local_18;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      (__this->fields)._moveToIgnoreEnemies = (bool_conflict)(fVar1 * fVar4 + timeoutPadding);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$MoveToExactCallback
// il2cpp: void Controllers_BaseTitanAIController__MoveToExactCallback (Controllers_BaseTitanAIController_o* __this, System_Action_o* action, UnityEngine_Vector3_o position, float range, float timeoutPadding, const MethodInfo* method);
// 0x3f7f550

void Controllers_BaseTitanAIController__MoveToExactCallback
               (Controllers_BaseTitanAIController_o *__this,System_Action_o *action,
               UnityEngine_Vector3_o position,float range,float timeoutPadding,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  float local_28;
  float fStack_24;
  
  (__this->fields).TurnAngle = (float)(int)position.fields._0_8_;
  (__this->fields)._moveToPosition.fields.x = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
  (__this->fields)._moveToPosition.fields.y = position.fields.z;
  *(undefined1 *)&(__this->fields)._moveAngle = 1;
  (__this->fields)._moveToActive = (bool_conflict)range;
  *(undefined1 *)&(__this->fields)._moveToRange = 1;
  *(undefined1 *)&(__this->fields)._moveToTimeout = 1;
  pCVar2 = (__this->fields)._titan;
  if ((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
     (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)((long)&(pCVar2->fields).BaseTitanAnimations + 4);
      UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_28 = position.fields.x;
      fStack_24 = position.fields.y;
      local_28 = UVar5.fields.x - local_28;
      fStack_24 = UVar5.fields.y - fStack_24;
      fVar4 = UVar5.fields.z - position.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar4 = fVar4 * fVar4 + fStack_24 * fStack_24 + local_28 * local_28;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      (__this->fields)._moveToIgnoreEnemies = (bool_conflict)(fVar1 * fVar4 + timeoutPadding);
      *(System_Action_o **)&(__this->fields)._moveToExact = action;
      il2cpp_runtime_glue(&(__this->fields)._moveToExact,action);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$CancelOrder
// il2cpp: void Controllers_BaseTitanAIController__CancelOrder (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7f6d0

void Controllers_BaseTitanAIController__CancelOrder
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  *(undefined1 *)&(__this->fields)._moveAngle = 0;
  if ((__this->fields).AIState == 7) {
    (__this->fields).AIState = 0;
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
    *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
    fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields).AttackInfos = fVar2;
  }
  (__this->fields)._rangedCooldownLeft = 0.0;
  (__this->fields)._attackRange = 0.0;
  il2cpp_runtime_glue(&(__this->fields)._rangedCooldownLeft,0);
  return;
}


// Controllers.BaseTitanAIController$$ForceIdle
// il2cpp: void Controllers_BaseTitanAIController__ForceIdle (Controllers_BaseTitanAIController_o* __this, float time, const MethodInfo* method);
// 0x3f7f740

void Controllers_BaseTitanAIController__ForceIdle
               (Controllers_BaseTitanAIController_o *__this,float time,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
    *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
    UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields).AIState = 7;
    *(float *)&(__this->fields).AttackInfos = time;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$Init
// il2cpp: void Controllers_BaseTitanAIController__Init (Controllers_BaseTitanAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x3f7f7b0

void Controllers_BaseTitanAIController__Init
               (Controllers_BaseTitanAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  SimpleJSONFixed_JSONNode_c *__this_00;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_06;
  undefined1 uVar3;
  long *plVar4;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_string__string__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *d;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  float fVar8;
  bool_conflict bVar9;
  undefined8 in_stack_fffffffffffffea8;
  Controllers_BaseTitanAIController_o *pCVar10;
  undefined4 in_stack_fffffffffffffeb8;
  float in_stack_fffffffffffffebc;
  undefined8 in_stack_fffffffffffffec0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppRGCTXData *__this_08;
  Il2CppRGCTXData *pIVar13;
  char *in_stack_fffffffffffffee0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar14;
  undefined1 local_110 [24];
  _union_231120 _Stack_f8;
  Il2CppClass *local_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *local_e0;
  _union_13 _Stack_d8;
  _union_14 local_d0;
  undefined1 local_c8 [80];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  Il2CppRGCTXData *local_68;
  _union_231120 _Stack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05703f5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Characters_TitanAttac);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&"FocusTime");
    il2cpp_init_method_metadata(&"FarAttackMaxRange");
    il2cpp_init_method_metadata(&"IsRun");
    il2cpp_init_method_metadata(&"FarAttackMinRange");
    il2cpp_init_method_metadata(&"AttackWait");
    il2cpp_init_method_metadata(&"DetectRange");
    il2cpp_init_method_metadata(&"Attacks");
    il2cpp_init_method_metadata(&"TurnAngle");
    il2cpp_init_method_metadata(&"ChaseAngleTimeMax");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"FocusRange");
    il2cpp_init_method_metadata(&"ChaseAngleMinRange");
    il2cpp_init_method_metadata(&"CloseAttackRange");
    il2cpp_init_method_metadata(&"*");
    il2cpp_init_method_metadata(&"IsTurn");
    il2cpp_init_method_metadata(&"FarAttackCooldown");
    il2cpp_init_method_metadata(&"ChaseAngleTimeMin");
    DAT_05703f5f = '\x01';
  }
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (Il2CppObject *)0x0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  __this_08 = (Il2CppRGCTXData *)0x0;
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"DetectRange",(data->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      fVar8 = (float)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
      (__this->fields).DetectRange = fVar8;
      plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"CloseAttackRange",(data->klass->vtable)._7_get_Item.method);
      if (plVar4 != (long *)0x0) {
        fVar8 = (float)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
        (__this->fields).CloseAttackRange = fVar8;
        plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"FarAttackMinRange",(data->klass->vtable)._7_get_Item.method);
        if (plVar4 != (long *)0x0) {
          fVar8 = (float)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
          (__this->fields).FarAttackMinRange = fVar8;
          plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                     (data,"FarAttackMaxRange",(data->klass->vtable)._7_get_Item.method);
          if (plVar4 != (long *)0x0) {
            fVar8 = (float)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
            (__this->fields).FarAttackMaxRange = fVar8;
            plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                       (data,"FarAttackCooldown",(data->klass->vtable)._7_get_Item.method);
            if (plVar4 != (long *)0x0) {
              fVar8 = (float)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390))
              ;
              (__this->fields).FarAttackCooldown = fVar8;
              plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                         (data,"FocusRange",(data->klass->vtable)._7_get_Item.method
                                         );
              if (plVar4 != (long *)0x0) {
                fVar8 = (float)(**(code **)(*plVar4 + 0x388))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                (__this->fields).FocusRange = fVar8;
                plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                           (data,"FocusTime",
                                            (data->klass->vtable)._7_get_Item.method);
                if (plVar4 != (long *)0x0) {
                  fVar8 = (float)(**(code **)(*plVar4 + 0x388))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                  (__this->fields).FocusTime = fVar8;
                  plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                             (data,"AttackWait",
                                              (data->klass->vtable)._7_get_Item.method);
                  if (plVar4 != (long *)0x0) {
                    fVar8 = (float)(**(code **)(*plVar4 + 0x388))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                    (__this->fields).AttackWait = fVar8;
                    plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                               (data,"ChaseAngleTimeMin",
                                                (data->klass->vtable)._7_get_Item.method);
                    if (plVar4 != (long *)0x0) {
                      fVar8 = (float)(**(code **)(*plVar4 + 0x388))
                                               (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                      (__this->fields).ChaseAngleTimeMin = fVar8;
                      plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                                 (data,"ChaseAngleTimeMax",
                                                  (data->klass->vtable)._7_get_Item.method);
                      if (plVar4 != (long *)0x0) {
                        fVar8 = (float)(**(code **)(*plVar4 + 0x388))
                                                 (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                        (__this->fields).ChaseAngleTimeMax = fVar8;
                        plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                                   (data,"ChaseAngleMinRange",
                                                    (data->klass->vtable)._7_get_Item.method);
                        if (plVar4 != (long *)0x0) {
                          fVar8 = (float)(**(code **)(*plVar4 + 0x388))
                                                   (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                          (__this->fields).ChaseAngleMinRange = fVar8;
                          plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                                     (data,"IsRun",
                                                      (data->klass->vtable)._7_get_Item.method);
                          if (plVar4 != (long *)0x0) {
                            uVar3 = (**(code **)(*plVar4 + 0x3a8))
                                              (plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
                            *(undefined1 *)&(__this->fields).IsRun = uVar3;
                            plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                                       (data,"IsTurn",
                                                        (data->klass->vtable)._7_get_Item.method);
                            if (plVar4 != (long *)0x0) {
                              uVar3 = (**(code **)(*plVar4 + 0x3a8))
                                                (plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
                              *(undefined1 *)((long)&(__this->fields).IsRun + 1) = uVar3;
                              plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                                         (data,"TurnAngle",
                                                          (data->klass->vtable)._7_get_Item.method);
                              if (plVar4 != (long *)0x0) {
                                bVar9 = (**(code **)(*plVar4 + 0x388))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                                (__this->fields).IsTurn = bVar9;
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o
                                           **)(*(long *)(TypeInfo_CharacterData + 0xb8) + 0x10);
                                plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                                           (data,"Type",
                                                            (data->klass->vtable)._7_get_Item.method
                                                           );
                                if (plVar4 != (long *)0x0) {
                                  pCVar10 = __this;
                                  key = (Il2CppObject *)
                                        (**(code **)(*plVar4 + 0x1c8))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
                                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o
                                                 *)0x0) {
                                    pSVar5 = (System_Collections_Generic_Dictionary_string__string__o
                                              *)System_Collections_Generic_Dictionary<object__object>__get_Item
                                                          (pSVar1,key,MethodInfo_Dictionary_2_System_String_Characters_TitanAttac);
                                    pSVar14 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c
                                               *)&(__this->fields).AttackGroups;
                                    (__this->fields).AttackGroups = pSVar5;
                                    il2cpp_runtime_glue(pSVar14,pSVar5);
                                    pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                                             (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                       (data,"Attacks",
                                                        (data->klass->vtable)._7_get_Item.method);
                                    if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                      SimpleJSONFixed_JSONNode__get_Keys
                                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                 local_110,pSVar6,(MethodInfo *)0x0);
                                      local_38 = local_d0;
                                      local_48 = local_e0;
                                      _Stack_40 = _Stack_d8;
                                      local_58 = local_f0;
                                      pIStack_50 = pIStack_e8;
                                      local_68 = (Il2CppRGCTXData *)local_110._16_8_;
                                      _Stack_60 = _Stack_f8;
                                      local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)local_110._0_8_;
                                      pSStack_70 = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)local_110._8_8_;
                                      __this_03.fields.m_Enumerator.fields.m_Object.fields.
                                      _dictionary = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pCVar10;
                                      __this_03.fields.m_Enumerator.fields._0_8_ =
                                           in_stack_fffffffffffffea8;
                                      __this_03.fields.m_Enumerator.fields.m_Object.fields._version
                                           = in_stack_fffffffffffffeb8;
                                      __this_03.fields.m_Enumerator.fields.m_Object.fields._index =
                                           (int32_t)in_stack_fffffffffffffebc;
                                      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.
                                      fields.key = (Il2CppObject *)in_stack_fffffffffffffec0;
                                      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.
                                      fields.value = (Il2CppObject *)pSVar11;
                                      __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                                           pSVar12;
                                      __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
                                           (System_Collections_Generic_List_T__o *)__this_08;
                                      __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                                           in_stack_fffffffffffffee0;
                                      __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
                                           (SimpleJSONFixed_JSONNode_o *)pSVar14;
                                      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                 local_110,__this_03,(MethodInfo *)&local_78);
                                      local_c8._64_8_ = local_d0;
                                      local_c8._48_8_ = local_e0;
                                      local_c8._56_8_ = _Stack_d8;
                                      local_c8._32_8_ = local_f0;
                                      local_c8._40_8_ = pIStack_e8;
                                      local_c8._16_8_ = local_110._16_8_;
                                      local_c8._24_8_ = _Stack_f8;
                                      local_c8._0_8_ = local_110._0_8_;
                                      local_c8._8_8_ = local_110._8_8_;
                                      __this_04.fields.m_Enumerator.fields.m_Object.fields.
                                      _dictionary = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pCVar10;
                                      __this_04.fields.m_Enumerator.fields._0_8_ =
                                           in_stack_fffffffffffffea8;
                                      __this_04.fields.m_Enumerator.fields.m_Object.fields._version
                                           = in_stack_fffffffffffffeb8;
                                      __this_04.fields.m_Enumerator.fields.m_Object.fields._index =
                                           (int32_t)in_stack_fffffffffffffebc;
                                      __this_04.fields.m_Enumerator.fields.m_Object.fields._current.
                                      fields.key = (Il2CppObject *)in_stack_fffffffffffffec0;
                                      __this_04.fields.m_Enumerator.fields.m_Object.fields._current.
                                      fields.value = (Il2CppObject *)pSVar11;
                                      __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                                           pSVar12;
                                      __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
                                           (System_Collections_Generic_List_T__o *)__this_08;
                                      __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                                           in_stack_fffffffffffffee0;
                                      __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
                                           (SimpleJSONFixed_JSONNode_o *)pSVar14;
                                      bVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                        (__this_04,(MethodInfo *)local_c8);
                                      if ((char)bVar9 != '\0') {
                                        pSVar6 = data;
                                        do {
                                          __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                          _dictionary = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pCVar10;
                                          __this_06.fields.m_Enumerator.fields._0_8_ =
                                               in_stack_fffffffffffffea8;
                                          __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                          _version = in_stack_fffffffffffffeb8;
                                          __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                          _index = (int32_t)in_stack_fffffffffffffebc;
                                          __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                          _current.fields.key = (Il2CppObject *)pSVar6;
                                          __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                          _current.fields.value = (Il2CppObject *)pSVar11;
                                          __this_06.fields.m_Enumerator.fields.m_Object.fields.
                                          _32_8_ = pSVar12;
                                          __this_06.fields.m_Enumerator.fields.m_Array.fields._list
                                               = (System_Collections_Generic_List_T__o *)__this_08;
                                          __this_06.fields.m_Enumerator.fields.m_Array.fields._8_8_
                                               = in_stack_fffffffffffffee0;
                                          __this_06.fields.m_Enumerator.fields.m_Array.fields.
                                          _current = (SimpleJSONFixed_JSONNode_o *)pSVar14;
                                          pSVar7 = 
                                                  SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                                            (__this_06,(MethodInfo *)local_c8);
                                          plVar4 = (long *)(*(data->klass->vtable)._7_get_Item.
                                                             methodPtr)(data,"Attacks",
                                                                        (data->klass->vtable).
                                                                        _7_get_Item.method);
                                          if (plVar4 == (long *)0x0) goto LAB_03f80134;
                                          d = (SimpleJSONFixed_JSONNode_o *)
                                              (**(code **)(*plVar4 + 0x1a8))
                                                        (plVar4,pSVar7,
                                                         *(undefined8 *)(*plVar4 + 0x1b0));
                                          __this = pCVar10;
                                          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                                            il2cpp_init_class();
                                            __this = pCVar10;
                                          }
                                          in_stack_fffffffffffffebc =
                                               SimpleJSONFixed_JSONNode__op_Implicit
                                                         (d,(MethodInfo *)0x0);
                                          if (pSVar7 == (System_String_o *)0x0) goto LAB_03f80134;
                                          bVar9 = System_String__EndsWith
                                                            (pSVar7,"*",(MethodInfo *)0x0);
                                          pCVar10 = __this;
                                          if ((char)bVar9 == '\0') {
                                            pSVar2 = (__this->fields)._moveToCallback;
                                            if (pSVar2 == (System_Action_o *)0x0) goto LAB_03f80134;
                                            System_Collections_Generic_Dictionary<object__float>__Add
                                                      ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)pSVar7,
                                                  in_stack_fffffffffffffebc,MethodInfo_Void_Add);
                                          }
                                          else {
                                            pSVar7 = System_String__Substring
                                                               (pSVar7,0,(pSVar7->fields).
                                                                         _stringLength + -1,
                                                                (MethodInfo *)0x0);
                                            __this_00 = (pSVar14->_1).image;
                                            if (__this_00 == (SimpleJSONFixed_JSONNode_c *)0x0)
                                            goto LAB_03f80134;
                                            __this_07 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Keys
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)__this_00,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
                                            if (__this_07 ==
                                                (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                                 *)0x0) goto LAB_03f80134;
                                            System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                                                      ((
                                                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                  *)local_110,__this_07,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                                            data = pSVar6;
                                            pSVar11 = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)local_110._0_8_;
                                            pSVar12 = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)local_110._8_8_;
                                            pIVar13 = (Il2CppRGCTXData *)local_110._16_8_;
                                            while( true ) {
                                              __this_08 = pIVar13;
                                              __this_02.fields._8_8_ = pCVar10;
                                              __this_02.fields._dictionary =
                                                   (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)in_stack_fffffffffffffea8;
                                              __this_02.fields._currentKey._0_4_ =
                                                   in_stack_fffffffffffffeb8;
                                              __this_02.fields._currentKey._4_4_ =
                                                   in_stack_fffffffffffffebc;
                                              bVar9 = 
                                                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                                            (__this_02,
                                                             (MethodInfo_31D0850 *)
                                                             &stack0xfffffffffffffec8);
                                              if ((char)bVar9 == '\0') break;
                                              if (__this_08 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                il2cpp_raise_exception();
                                              }
                                              pIVar13 = __this_08;
                                              bVar9 = System_String__StartsWith
                                                                ((System_String_o *)__this_08,pSVar7
                                                                 ,(MethodInfo *)0x0);
                                              if ((char)bVar9 != '\0') {
                                                pSVar2 = (__this->fields)._moveToCallback;
                                                if (pSVar2 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                  il2cpp_raise_exception();
                                                }
                                                System_Collections_Generic_Dictionary<object__float>__Add
                                                          ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)__this_08,
                                                  in_stack_fffffffffffffebc,MethodInfo_Void_Add);
                                                pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields).AttackChances;
                                                if (pSVar1 == (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                  il2cpp_raise_exception();
                                                }
                                                System_Collections_Generic_Dictionary<object__object>__Add
                                                          (pSVar1,(Il2CppObject *)__this_08,
                                                           (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
                                              }
                                            }
                                            __this_01.fields._8_8_ = pCVar10;
                                            __this_01.fields._dictionary =
                                                 (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)in_stack_fffffffffffffea8;
                                            __this_01.fields._currentKey._0_4_ =
                                                 in_stack_fffffffffffffeb8;
                                            __this_01.fields._currentKey._4_4_ =
                                                 in_stack_fffffffffffffebc;
                                            System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                                                      (__this_01,
                                                       (MethodInfo_31D0840 *)
                                                       &stack0xfffffffffffffec8);
                                            pSVar6 = data;
                                          }
                                          __this_05.fields.m_Enumerator.fields.m_Object.fields.
                                          _dictionary = (
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pCVar10;
                                          __this_05.fields.m_Enumerator.fields._0_8_ =
                                               in_stack_fffffffffffffea8;
                                          __this_05.fields.m_Enumerator.fields.m_Object.fields.
                                          _version = in_stack_fffffffffffffeb8;
                                          __this_05.fields.m_Enumerator.fields.m_Object.fields.
                                          _index = (int32_t)in_stack_fffffffffffffebc;
                                          __this_05.fields.m_Enumerator.fields.m_Object.fields.
                                          _current.fields.key = (Il2CppObject *)pSVar6;
                                          __this_05.fields.m_Enumerator.fields.m_Object.fields.
                                          _current.fields.value = (Il2CppObject *)pSVar11;
                                          __this_05.fields.m_Enumerator.fields.m_Object.fields.
                                          _32_8_ = pSVar12;
                                          __this_05.fields.m_Enumerator.fields.m_Array.fields._list
                                               = (System_Collections_Generic_List_T__o *)__this_08;
                                          __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_
                                               = in_stack_fffffffffffffee0;
                                          __this_05.fields.m_Enumerator.fields.m_Array.fields.
                                          _current = (SimpleJSONFixed_JSONNode_o *)pSVar14;
                                          bVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                            (__this_05,(MethodInfo *)local_c8);
                                        } while ((char)bVar9 != '\0');
                                      }
                                      *(float *)((long)&(__this->fields)._attack + 4) =
                                           (__this->fields).AttackWait;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f80134:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$SetDetectRange
// il2cpp: void Controllers_BaseTitanAIController__SetDetectRange (Controllers_BaseTitanAIController_o* __this, float range, const MethodInfo* method);
// 0x3f80180

void Controllers_BaseTitanAIController__SetDetectRange
               (Controllers_BaseTitanAIController_o *__this,float range,MethodInfo *method)

{
  (__this->fields).DetectRange = range;
  return;
}


// Controllers.BaseTitanAIController$$GetEnemy
// il2cpp: Characters_ITargetable_o* Controllers_BaseTitanAIController__GetEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f80190

Characters_ITargetable_o *
Controllers_BaseTitanAIController__GetEnemy
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return *(Characters_ITargetable_o **)&(__this->fields)._rangedCooldownLeft;
}


// Controllers.BaseTitanAIController$$SetEnemy
// il2cpp: void Controllers_BaseTitanAIController__SetEnemy (Controllers_BaseTitanAIController_o* __this, Characters_ITargetable_o* enemy, float focusTime, const MethodInfo* method);
// 0x3f801a0

void Controllers_BaseTitanAIController__SetEnemy
               (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,
               float focusTime,MethodInfo *method)

{
  *(Characters_ITargetable_o **)&(__this->fields)._rangedCooldownLeft = enemy;
  il2cpp_runtime_glue(&(__this->fields)._rangedCooldownLeft);
  if ((focusTime == 0.0) && (!NAN(focusTime))) {
    focusTime = (__this->fields).FocusTime;
  }
  *(float *)((long)&(__this->fields).AttackInfos + 4) = focusTime;
  return;
}


// Controllers.BaseTitanAIController$$SetAgentDestination
// il2cpp: void Controllers_BaseTitanAIController__SetAgentDestination (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x3f801f0

void Controllers_BaseTitanAIController__SetAgentDestination
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o position,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  
  if (*(char *)&(__this->fields)._agent != '\0') {
    return;
  }
  __this_00 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
  if (__this_00 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    UnityEngine_AI_NavMeshAgent__SetDestination(__this_00,position,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._agent = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$UpdateScriptedAI
// il2cpp: void Controllers_BaseTitanAIController__UpdateScriptedAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f80220

void Controllers_BaseTitanAIController__UpdateScriptedAI
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseTitanAIController$$FixedUpdate
// il2cpp: void Controllers_BaseTitanAIController__FixedUpdate (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f80230

void Controllers_BaseTitanAIController__FixedUpdate
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  bool_conflict *pbVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  UnityEngine_AI_NavMeshAgent_o *pUVar10;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *a;
  Characters_BaseCharacter_o *pCVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  char cVar13;
  uint uVar14;
  bool_conflict bVar15;
  undefined8 *puVar16;
  Characters_ITargetable_o *pCVar17;
  System_String_o *b;
  Characters_BaseTitan_o *pCVar18;
  long lVar19;
  undefined8 extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *pMVar20;
  MethodInfo *extraout_RDX_11;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_12;
  MethodInfo *method_01;
  long lVar21;
  long lVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  UnityEngine_Vector3_o target;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o target_00;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o target_01;
  UnityEngine_Vector3_o b_00;
  undefined1 auVar29 [16];
  float fStack_78;
  float fStack_74;
  
  if (DAT_05703f60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata();
    DAT_05703f60 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) != '\0') {
    *(undefined1 *)&(__this->fields)._agent = 0;
    pCVar18 = (__this->fields)._titan;
    if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
    pUVar10 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
    fVar24 = Characters_BaseTitan__GetCurrentSpeed(pCVar18,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f81675;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar10,fVar24,(MethodInfo *)0x0);
  }
  fVar24 = *(float *)((long)&(__this->fields).AttackInfos + 4);
  fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  *(float *)((long)&(__this->fields).AttackInfos + 4) = fVar24 - fVar25;
  fVar24 = *(float *)&(__this->fields).AttackInfos;
  fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  *(float *)&(__this->fields).AttackInfos = fVar24 - fVar25;
  fVar24 = (float)(__this->fields)._moveToIgnoreEnemies;
  fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar24 = fVar24 - fVar25;
  (__this->fields)._moveToIgnoreEnemies = (bool_conflict)fVar24;
  pCVar18 = (__this->fields)._titan;
  if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
  if (*(char *)&(pCVar18->fields).FeedVictimName != '\0') {
    return;
  }
  iVar9 = *(int *)&(pCVar18->fields).OutlineComponent;
  if ((iVar9 != 10) && (iVar9 != 0x17)) {
    fVar24 = (__this->fields)._stateTimeLeft;
    fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar24 - fVar25;
    fVar24 = *(float *)&(__this->fields)._attack;
    fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar24 = fVar24 - fVar25;
    *(float *)&(__this->fields)._attack = fVar24;
  }
  if ((__this->fields).AIState == 7) {
    if (0.0 < *(float *)&(__this->fields).AttackInfos) {
      return;
    }
    (__this->fields).AIState = 0;
    pCVar18 = (__this->fields)._titan;
    if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
    *(undefined1 *)((long)&(pCVar18->fields).Detection + 4) = 0;
    *(undefined1 *)((long)&(pCVar18->fields).State + 2) = 0;
    fVar24 = 8.0;
    fVar25 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields).AttackInfos = fVar25;
  }
  if (*(char *)&(__this->fields)._waitAttackTimeLeft == '\0') {
    (__this->fields)._rangedCooldownLeft = 0.0;
    (__this->fields)._attackRange = 0.0;
    method_01 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._rangedCooldownLeft);
    uVar14 = (__this->fields).AIState;
    if (uVar14 < 3) {
      if (*(char *)&(__this->fields)._moveAngle != '\0') {
        method_01 = (__this->klass->vtable)._8_get__stationaryAI.method;
        cVar13 = (*(__this->klass->vtable)._8_get__stationaryAI.methodPtr)(__this);
        if (cVar13 == '\0') {
          Controllers_BaseTitanAIController__MoveToPosition(__this,method_01);
        }
      }
      uVar14 = (__this->fields).AIState;
    }
    if (uVar14 != 4) goto switchD_03f80d38_default;
    pCVar11 = (__this->fields)._character;
    if (((pCVar11 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar19 = *(long *)&(pCVar11->fields).Dead, lVar19 == 0)) ||
       (pUVar12 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
       pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81675;
    method_01 = (MethodInfo *)0x0;
    UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
    uVar4 = (__this->fields).TurnAngle;
    uVar6 = (__this->fields)._moveToPosition.fields.x;
    fVar24 = (__this->fields)._moveToPosition.fields.y;
    pMVar20 = extraout_RDX_00;
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
      pMVar20 = extraout_RDX_01;
    }
    fVar27 = UVar28.fields.y - (float)uVar6;
    fVar24 = UVar28.fields.z - fVar24;
    fVar25 = UVar28.fields.x - (float)uVar4;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar20 = extraout_RDX_02;
    }
    fVar24 = fVar25 * fVar25 + fVar27 * fVar27 + fVar24 * fVar24;
    if (fVar24 < 0.0) {
      fVar24 = sqrtf(fVar24);
      pMVar20 = extraout_RDX_03;
      if ((float)(__this->fields)._moveToActive < fVar24) goto LAB_03f8062b;
LAB_03f8069b:
      if (*(char *)&(__this->fields)._moveToTimeout != '\0') {
        pCVar18 = (__this->fields)._titan;
        if (((pCVar18 == (Characters_BaseTitan_o *)0x0) ||
            (lVar19 = *(long *)&(pCVar18->fields).Dead, lVar19 == 0)) ||
           (pUVar12 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
           pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81675;
        UVar28.fields.x = (__this->fields).TurnAngle;
        UVar28.fields.y = (__this->fields)._moveToPosition.fields.x;
        UVar28.fields.z = (__this->fields)._moveToPosition.fields.y;
        method_01 = (MethodInfo *)0x0;
        UnityEngine_Transform__set_position(pUVar12,UVar28,(MethodInfo *)0x0);
      }
      lVar19 = *(long *)&(__this->fields)._moveToExact;
      if (lVar19 != 0) {
        (**(code **)(lVar19 + 0x18))(*(undefined8 *)(lVar19 + 0x40));
        *(undefined8 *)&(__this->fields)._moveToExact = 0;
        method_01 = (MethodInfo *)0x0;
        il2cpp_runtime_glue();
      }
      goto LAB_03f8070e;
    }
    if (SQRT(fVar24) <= (float)(__this->fields)._moveToActive) goto LAB_03f8069b;
LAB_03f8062b:
    if ((*(char *)&(__this->fields)._moveAngle == '\0') ||
       ((*(char *)&(__this->fields)._moveToTimeout != '\0' &&
        ((float)(__this->fields)._moveToIgnoreEnemies <= 0.0)))) goto LAB_03f8069b;
LAB_03f80649:
    if ((0.0 < *(float *)&(__this->fields).AttackInfos) &&
       (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) == '\0')) {
      pCVar18 = (__this->fields)._titan;
      position.fields.x = (__this->fields).TurnAngle;
      position.fields.y = (__this->fields)._moveToPosition.fields.x;
      position.fields.z = (__this->fields)._moveToPosition.fields.y;
      method_01 = (MethodInfo *)0x1;
      fVar24 = Controllers_BaseTitanAIController__GetChaseAngle(__this,position,1,pMVar20);
      if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
      *(float *)&(pCVar18->fields).Detection = fVar24;
      goto switchD_03f80d38_default;
    }
LAB_03f80fb0:
    Controllers_BaseTitanAIController__MoveToPosition(__this,method_01);
    goto switchD_03f80d38_default;
  }
  pMVar20 = (__this->klass->vtable)._7_get__scriptedAI.method;
  cVar13 = (*(__this->klass->vtable)._7_get__scriptedAI.methodPtr)();
  if (cVar13 != '\0') {
    vtable_dispatch = (__this->klass->vtable)._10_UpdateScriptedAI.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._10_UpdateScriptedAI.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
  pfVar3 = &(__this->fields)._rangedCooldownLeft;
  plVar23 = *(long **)&(__this->fields)._rangedCooldownLeft;
  if (plVar23 != (long *)0x0) {
    lVar19 = *plVar23;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
          puVar16 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar19 +
                    0x138);
          goto LAB_03f80773;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,2);
LAB_03f80773:
    pMVar20 = (MethodInfo *)puVar16[1];
    cVar13 = (*(code *)*puVar16)(plVar23);
    if (cVar13 == '\0') {
      (__this->fields)._rangedCooldownLeft = 0.0;
      (__this->fields)._attackRange = 0.0;
      pMVar20 = (MethodInfo *)0x0;
      il2cpp_runtime_glue(pfVar3);
    }
  }
  if (*(float *)((long)&(__this->fields).AttackInfos + 4) <= 0.0) {
LAB_03f807aa:
    pCVar17 = Controllers_BaseTitanAIController__FindNearestEnemy(__this,pMVar20);
    if (pCVar17 == (Characters_ITargetable_o *)0x0) {
      plVar23 = *(long **)pfVar3;
      if (plVar23 != (long *)0x0) {
        pCVar18 = (__this->fields)._titan;
        if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
        a = *(System_String_o **)&(pCVar18->fields).AI;
        lVar19 = *plVar23;
        if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
          lVar21 = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
              puVar16 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) * 0x10 + lVar19 +
                        0x138);
              goto LAB_03f8083e;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
        }
        puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,0);
LAB_03f8083e:
        b = (System_String_o *)(*(code *)*puVar16)(plVar23,puVar16[1]);
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar15 = GameManagers_TeamInfo__SameTeam(a,b,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') goto LAB_03f809c7;
        pCVar18 = (__this->fields)._titan;
        if (((pCVar18 == (Characters_BaseTitan_o *)0x0) ||
            (lVar19 = *(long *)&(pCVar18->fields).Dead, lVar19 == 0)) ||
           (pUVar12 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
           pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81675;
        UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        fVar24 = UVar28.fields.z;
        plVar23 = *(long **)pfVar3;
        if (plVar23 == (long *)0x0) goto LAB_03f81675;
        lVar19 = *plVar23;
        fVar25 = fVar24;
        if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
          lVar21 = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
              puVar16 = (undefined8 *)
                        (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 1) * 0x10
                        + 0x138);
              goto LAB_03f8090f;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
        }
        puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,1);
LAB_03f8090f:
        uVar26 = (*(code *)*puVar16)(plVar23,puVar16[1]);
        if (DAT_056fdea6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fdea6 = '\x01';
        }
        fStack_78 = UVar28.fields.x;
        fStack_74 = UVar28.fields.y;
        fStack_74 = fStack_74 - (float)((ulong)uVar26 >> 0x20);
        fStack_78 = fStack_78 - (float)uVar26;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar25 = fStack_78 * fStack_78 + fStack_74 * fStack_74 +
                 (fVar24 - fVar25) * (fVar24 - fVar25);
        fVar24 = 0.0;
        if (fVar25 < 0.0) {
          fVar25 = sqrtf(fVar25);
          pfVar1 = &(__this->fields).FocusRange;
          if (*pfVar1 <= fVar25 && fVar25 != *pfVar1) goto LAB_03f809c7;
        }
        else {
          pfVar1 = &(__this->fields).FocusRange;
          if (*pfVar1 <= SQRT(fVar25) && SQRT(fVar25) != *pfVar1) {
LAB_03f809c7:
            (__this->fields)._rangedCooldownLeft = 0.0;
            (__this->fields)._attackRange = 0.0;
            pCVar17 = (Characters_ITargetable_o *)0x0;
            goto LAB_03f809d3;
          }
        }
        goto LAB_03f809d8;
      }
    }
    else {
      *(Characters_ITargetable_o **)pfVar3 = pCVar17;
LAB_03f809d3:
      il2cpp_runtime_glue(pfVar3,pCVar17);
LAB_03f809d8:
      plVar23 = *(long **)pfVar3;
      if (plVar23 != (long *)0x0) {
        lVar19 = *plVar23;
        if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
          lVar21 = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
              puVar16 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar19
                        + 0x138);
              goto LAB_03f80a49;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
        }
        puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,2);
LAB_03f80a49:
        cVar13 = (*(code *)*puVar16)(plVar23);
        if ((cVar13 != '\0') && (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) != '\0')
           ) {
          pUVar10 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
          if (pUVar10 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f81675;
          bVar15 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar10,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            pUVar10 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
            if (pUVar10 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f81675;
            bVar15 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar10,(MethodInfo *)0x0);
            if (((char)bVar15 == '\0') &&
               ((*(char *)&(__this->fields)._moveAngle == '\0' ||
                (*(char *)&(__this->fields)._moveToRange == '\0')))) {
              plVar23 = *(long **)pfVar3;
              if (plVar23 == (long *)0x0) goto LAB_03f81675;
              lVar19 = *plVar23;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
                lVar21 = 0;
                do {
                  if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
                    puVar16 = (undefined8 *)
                              (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 1)
                                        * 0x10 + 0x138);
                    goto LAB_03f80b1b;
                  }
                  lVar21 = lVar21 + 0x10;
                } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,1);
LAB_03f80b1b:
              uVar26 = (*(code *)*puVar16)(plVar23);
              if (*(char *)&(__this->fields)._agent == '\0') {
                pUVar10 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
                if (pUVar10 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f81675;
                target.fields.z = fVar24;
                target.fields.x = (float)(int)uVar26;
                target.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
                UnityEngine_AI_NavMeshAgent__SetDestination(pUVar10,target,(MethodInfo *)0x0);
                *(undefined1 *)&(__this->fields)._agent = 1;
              }
            }
          }
        }
      }
    }
    *(float *)((long)&(__this->fields).AttackInfos + 4) = (__this->fields).FocusTime;
    method_01 = *(MethodInfo **)&(__this->fields)._rangedCooldownLeft;
  }
  else {
    method_01 = *(MethodInfo **)pfVar3;
    pMVar20 = (MethodInfo *)0x0;
    if (method_01 == (MethodInfo *)0x0) goto LAB_03f807aa;
  }
  pCVar18 = (__this->fields)._titan;
  if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
  *(MethodInfo **)&(pCVar18->fields).ActionPause = method_01;
  il2cpp_runtime_glue();
  if ((*(char *)&(__this->fields)._moveAngle != '\0') &&
     (*(char *)&(__this->fields)._moveToRange != '\0')) {
    (__this->fields)._rangedCooldownLeft = 0.0;
    (__this->fields)._attackRange = 0.0;
    method_01 = (MethodInfo *)0x0;
    il2cpp_runtime_glue();
  }
  plVar23 = *(long **)pfVar3;
  if (plVar23 != (long *)0x0) {
    lVar19 = *plVar23;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
          puVar16 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar19 +
                    0x138);
          goto LAB_03f80c19;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,2);
LAB_03f80c19:
    method_01 = (MethodInfo *)puVar16[1];
    cVar13 = (*(code *)*puVar16)();
    if (cVar13 != '\0') {
      pCVar11 = (__this->fields)._character;
      if (((pCVar11 == (Characters_BaseCharacter_o *)0x0) ||
          (lVar19 = *(long *)&(pCVar11->fields).Dead, lVar19 == 0)) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
         pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81675;
      UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      fVar24 = UVar28.fields.z;
      plVar23 = *(long **)pfVar3;
      if (plVar23 == (long *)0x0) goto LAB_03f81675;
      lVar19 = *plVar23;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
            puVar16 = (undefined8 *)
                      (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 1) * 0x10 +
                      0x138);
            goto LAB_03f80cc5;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,1);
LAB_03f80cc5:
      method_01 = (MethodInfo *)puVar16[1];
      uVar26 = (*(code *)*puVar16)(plVar23);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      b_00.fields.z = fVar24;
      b_00.fields.x = (float)(int)uVar26;
      b_00.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
      fVar24 = Utility_Util__DistanceIgnoreY(UVar28,b_00,(MethodInfo *)0x0);
      (__this->fields)._attackCooldownLeft = fVar24;
    }
  }
  switch((__this->fields).AIState) {
  case 0:
  case 1:
  case 2:
    plVar23 = *(long **)pfVar3;
    if (plVar23 != (long *)0x0) {
      lVar19 = *plVar23;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
            puVar16 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar19 +
                      0x138);
            goto LAB_03f80f98;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,2);
LAB_03f80f98:
      method_01 = (MethodInfo *)puVar16[1];
      cVar13 = (*(code *)*puVar16)();
      pMVar20 = extraout_RDX_07;
      if (cVar13 != '\0') {
LAB_03f810d6:
        pCVar18 = (__this->fields)._titan;
        if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
        (__this->fields)._focusTimeLeft =
             (__this->fields).CloseAttackRange *
             *(float *)((long)&(pCVar18->fields).TitanColliderToggler + 4);
        goto LAB_03f810fa;
      }
    }
    if (*(char *)&(__this->fields)._moveAngle != '\0') goto LAB_03f80fb0;
    if (0.0 < *(float *)&(__this->fields).AttackInfos) goto switchD_03f80d38_default;
    if ((__this->fields).AIState != 0) break;
    if (DAT_05703f63 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05703f63 = '\x01';
    }
    pCVar18 = (__this->fields)._titan;
    if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
      bVar8 = (TypeInfo_BasicTitan->_2).naturalAligment;
      method_01 = (MethodInfo *)(ulong)bVar8;
      if ((((pCVar18->klass->_2).naturalAligment < bVar8) ||
          ((pCVar18->klass->_2).typeHierarchy[(long)&method_01[-1].field_0x57] != TypeInfo_BasicTitan)) ||
         (*(char *)&(pCVar18->fields)._rootMotionAnimations == '\0')) goto LAB_03f8102d;
LAB_03f8153b:
      Controllers_BaseTitanAIController__Wander(__this,method_01);
      goto switchD_03f80d38_default;
    }
LAB_03f8102d:
    if (DAT_05703f64 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05703f64 = '\x01';
      pCVar18 = (__this->fields)._titan;
    }
    if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
      bVar8 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar8 <= (pCVar18->klass->_2).naturalAligment) &&
         ((pCVar18->klass->_2).typeHierarchy[(ulong)bVar8 - 1] == TypeInfo_BaseShifter)) goto LAB_03f8153b;
    }
    bVar15 = Utility_RandomGen__Roll(0.33,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto LAB_03f8153b;
    (__this->fields).AIState = 2;
    pCVar18 = (__this->fields)._titan;
    if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
    *(undefined1 *)((long)&(pCVar18->fields).State + 2) = 1;
    fVar24 = 8.0;
    fVar25 = 14.0;
    goto LAB_03f80746;
  case 3:
    plVar23 = *(long **)pfVar3;
    if (plVar23 != (long *)0x0) {
      lVar19 = *plVar23;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
            puVar16 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar19 +
                      0x138);
            goto LAB_03f811b6;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,2);
LAB_03f811b6:
      method_01 = (MethodInfo *)puVar16[1];
      cVar13 = (*(code *)*puVar16)();
      if (cVar13 != '\0') {
        fVar24 = (__this->fields)._attackCooldownLeft;
        if ((*(float *)&(__this->fields).AttackInfos <= 0.0) &&
           (pfVar1 = &(__this->fields).ChaseAngleMinRange, pMVar20 = extraout_RDX_09,
           *pfVar1 <= fVar24 && fVar24 != *pfVar1)) goto LAB_03f810fa;
        fVar25 = (__this->fields)._focusTimeLeft;
        vtable_dispatch = (__this->klass->vtable)._11_GetValidAttacks.methodPtr;
        if (fVar24 <= fVar25) {
          method_01 = (MethodInfo *)0x0;
          auVar29 = (*vtable_dispatch)
                              (__this,0,(__this->klass->vtable)._11_GetValidAttacks.method);
          if (auVar29._0_8_ == 0) goto LAB_03f81675;
          if (0 < *(int *)(auVar29._0_8_ + 0x18)) {
            fVar24 = (__this->fields).AttackWait;
            if (fVar24 <= 0.0) goto LAB_03f81389;
LAB_03f813f6:
            (__this->fields).AIState = 6;
            pCVar18 = (__this->fields)._titan;
            if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
            *(undefined1 *)((long)&(pCVar18->fields).Detection + 4) = 0;
            *(float *)((long)&(__this->fields)._attack + 4) = fVar24;
            goto switchD_03f80d38_default;
          }
          method_01 = *(MethodInfo **)&(__this->fields)._rangedCooldownLeft;
          fVar24 = Controllers_BaseTitanAIController__GetEnemyAngle
                             (__this,(Characters_ITargetable_o *)method_01,auVar29._8_8_);
          pbVar2 = &(__this->fields).IsTurn;
          if ((float)*pbVar2 <= fVar24 && fVar24 != (float)*pbVar2) {
            fVar24 = (__this->fields).AttackWait;
            fVar25 = 0.0;
            if (0.0 < fVar24) goto LAB_03f813f6;
          }
          plVar23 = *(long **)pfVar3;
          if (plVar23 == (long *)0x0) goto LAB_03f81675;
          lVar19 = *plVar23;
          if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
            lVar21 = *(long *)(lVar19 + 0xb0);
            lVar22 = 0;
            do {
              if (*(long *)(lVar21 + lVar22) == TypeInfo_ITargetable) goto LAB_03f81469;
              lVar22 = lVar22 + 0x10;
            } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar22);
          }
        }
        else {
          auVar29 = (*vtable_dispatch)(__this,1);
          fVar25 = (__this->fields).FarAttackMaxRange;
          fVar24 = (__this->fields)._attackCooldownLeft;
          if ((fVar24 <= fVar25) && ((__this->fields).FarAttackMinRange <= fVar24)) {
            if (auVar29._0_8_ == 0) goto LAB_03f81675;
            if (0 < *(int *)(auVar29._0_8_ + 0x18)) {
LAB_03f81389:
              method_01 = auVar29._0_8_;
              Controllers_BaseTitanAIController__Attack
                        (__this,(System_Collections_Generic_List_string__o *)method_01,auVar29._8_8_
                        );
              goto switchD_03f80d38_default;
            }
          }
          plVar23 = *(long **)pfVar3;
          if (plVar23 == (long *)0x0) goto LAB_03f81675;
          lVar19 = *plVar23;
          if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
            lVar21 = *(long *)(lVar19 + 0xb0);
            lVar22 = 0;
            do {
              if (*(long *)(lVar21 + lVar22) == TypeInfo_ITargetable) goto LAB_03f81469;
              lVar22 = lVar22 + 0x10;
            } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar22);
          }
        }
        puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,1);
        goto LAB_03f81480;
      }
    }
    break;
  case 4:
    pCVar11 = (__this->fields)._character;
    if (((pCVar11 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar19 = *(long *)&(pCVar11->fields).Dead, lVar19 == 0)) ||
       (pUVar12 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
       pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81675;
    method_01 = (MethodInfo *)0x0;
    UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
    uVar5 = (__this->fields).TurnAngle;
    uVar7 = (__this->fields)._moveToPosition.fields.x;
    fVar24 = (__this->fields)._moveToPosition.fields.y;
    pMVar20 = extraout_RDX_04;
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
      pMVar20 = extraout_RDX_05;
    }
    fVar27 = UVar28.fields.x - (float)uVar5;
    fVar25 = UVar28.fields.y - (float)uVar7;
    fVar24 = UVar28.fields.z - fVar24;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar20 = extraout_RDX_06;
    }
    fVar24 = fVar24 * fVar24 + fVar25 * fVar25 + fVar27 * fVar27;
    if (fVar24 < 0.0) {
      fVar24 = sqrtf(fVar24);
      lVar19._0_4_ = (__this->fields)._rangedCooldownLeft;
      lVar19._4_4_ = (__this->fields)._attackRange;
      pMVar20 = extraout_RDX_08;
    }
    else {
      fVar24 = SQRT(fVar24);
      lVar19._0_4_ = (__this->fields)._rangedCooldownLeft;
      lVar19._4_4_ = (__this->fields)._attackRange;
    }
    if (lVar19 != 0) goto LAB_03f810d6;
    if ((((float)(__this->fields)._moveToActive <= fVar24) &&
        (*(char *)&(__this->fields)._moveAngle != '\0')) &&
       ((*(char *)&(__this->fields)._moveToTimeout == '\0' ||
        (0.0 < (float)(__this->fields)._moveToIgnoreEnemies)))) goto LAB_03f80649;
    if (*(char *)&(__this->fields)._moveToTimeout != '\0') {
      pCVar18 = (__this->fields)._titan;
      if (((pCVar18 == (Characters_BaseTitan_o *)0x0) ||
          (lVar19 = *(long *)&(pCVar18->fields).Dead, lVar19 == 0)) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
         pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81675;
      value.fields.x = (__this->fields).TurnAngle;
      value.fields.y = (__this->fields)._moveToPosition.fields.x;
      value.fields.z = (__this->fields)._moveToPosition.fields.y;
      method_01 = (MethodInfo *)0x0;
      UnityEngine_Transform__set_position(pUVar12,value,(MethodInfo *)0x0);
    }
LAB_03f8070e:
    *(undefined1 *)&(__this->fields)._moveAngle = 0;
    break;
  case 5:
    pCVar18 = (__this->fields)._titan;
    if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
    if (*(int *)&(pCVar18->fields).OutlineComponent != 0) goto switchD_03f80d38_default;
    (__this->fields).AIState = 0;
    goto LAB_03f80728;
  case 6:
    plVar23 = *(long **)pfVar3;
    if (plVar23 != (long *)0x0) {
      lVar19 = *plVar23;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
            puVar16 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar19 +
                      0x138);
            goto LAB_03f812a3;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,2);
LAB_03f812a3:
      method_01 = (MethodInfo *)puVar16[1];
      cVar13 = (*(code *)*puVar16)();
      if (cVar13 != '\0') {
        fVar24 = *(float *)((long)&(__this->fields)._attack + 4);
        fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar24 = fVar24 - fVar25;
        *(float *)((long)&(__this->fields)._attack + 4) = fVar24;
        if (0.0 < fVar24) goto switchD_03f80d38_default;
        pCVar18 = (__this->fields)._titan;
        if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
        *(undefined1 *)((long)&(pCVar18->fields).Detection + 4) = 0;
        fVar25 = (__this->fields)._attackCooldownLeft;
        pfVar1 = &(__this->fields)._focusTimeLeft;
        pMVar20 = extraout_RDX_10;
        if (fVar25 < *pfVar1 || fVar25 == *pfVar1) {
          auVar29 = (*(__this->klass->vtable)._11_GetValidAttacks.methodPtr)
                              (__this,0,(__this->klass->vtable)._11_GetValidAttacks.method);
          method_01 = auVar29._0_8_;
          if (method_01 == (MethodInfo *)0x0) goto LAB_03f81675;
          if (*(int *)&method_01->name < 1) {
            fVar25 = Controllers_BaseTitanAIController__GetEnemyAngle
                               (__this,*(Characters_ITargetable_o **)
                                        &(__this->fields)._rangedCooldownLeft,auVar29._8_8_);
            pbVar2 = &(__this->fields).IsTurn;
            if (fVar25 < (float)*pbVar2 || fVar25 == (float)*pbVar2) {
              plVar23 = *(long **)pfVar3;
              if (plVar23 == (long *)0x0) goto LAB_03f81675;
              lVar19 = *plVar23;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
                lVar21 = 0;
                do {
                  if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
                    puVar16 = (undefined8 *)
                              (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 1)
                                        * 0x10 + 0x138);
                    goto LAB_03f8161f;
                  }
                  lVar21 = lVar21 + 0x10;
                } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,1);
LAB_03f8161f:
              method_01 = (MethodInfo *)puVar16[1];
              uVar26 = (*(code *)*puVar16)(plVar23);
              target_01.fields.z = fVar24;
              target_01.fields.x = (float)(int)uVar26;
              target_01.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
              bVar15 = Controllers_BaseTitanAIController__HasClearLineOfSight
                                 (__this,target_01,method_01);
              pMVar20 = extraout_RDX_12;
              if ((char)bVar15 == '\0') goto LAB_03f8130e;
              pCVar18 = (__this->fields)._titan;
              if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
              *(undefined1 *)((long)&(pCVar18->fields).Detection + 4) = 1;
              *(byte *)&(pCVar18->fields).State = (byte)(__this->fields).IsRun ^ 1;
              (__this->fields)._moveToPosition.fields.z = 0.0;
              Controllers_BaseTitanAIController__TargetEnemy(__this,method_01);
            }
            else {
              (__this->fields)._moveToPosition.fields.z = 0.0;
              plVar23 = *(long **)&(__this->fields)._rangedCooldownLeft;
              if (plVar23 == (long *)0x0) goto LAB_03f81675;
              pCVar18 = (__this->fields)._titan;
              lVar19 = *plVar23;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
                lVar21 = 0;
                do {
                  if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
                    puVar16 = (undefined8 *)
                              (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar21) + 1)
                                        * 0x10 + 0x138);
                    goto LAB_03f815af;
                  }
                  lVar21 = lVar21 + 0x10;
                } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar23,TypeInfo_ITargetable,1);
LAB_03f815af:
              uVar26 = (*(code *)*puVar16)(plVar23);
              position_00.fields.z = fVar24;
              position_00.fields.x = (float)(int)uVar26;
              position_00.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
              fVar24 = Controllers_BaseTitanAIController__GetChaseAngle
                                 (__this,position_00,0,method_00);
              if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
              *(float *)&(pCVar18->fields).Detection = fVar24;
              pCVar18 = (__this->fields)._titan;
              if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto LAB_03f81675;
              (*(pCVar18->klass->vtable)._95_GetTargetDirection.methodPtr)
                        (pCVar18,(pCVar18->klass->vtable)._95_GetTargetDirection.method);
              method_01 = (pCVar18->klass->vtable)._143_Turn.method;
              (*(pCVar18->klass->vtable)._143_Turn.methodPtr)(pCVar18);
            }
          }
          else {
            Controllers_BaseTitanAIController__Attack
                      (__this,(System_Collections_Generic_List_string__o *)method_01,auVar29._8_8_);
          }
        }
        else {
LAB_03f8130e:
          method_01 = (MethodInfo *)0x1;
          Controllers_BaseTitanAIController__MoveToEnemy(__this,1,pMVar20);
        }
        *(float *)((long)&(__this->fields)._attack + 4) = (__this->fields).AttackWait;
        goto switchD_03f80d38_default;
      }
    }
    (__this->fields).AIState = 0;
    pCVar18 = (__this->fields)._titan;
    if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
      *(undefined1 *)((long)&(pCVar18->fields).Detection + 4) = 0;
      *(undefined1 *)((long)&(pCVar18->fields).State + 2) = 0;
      fVar24 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).AttackInfos = fVar24;
      return;
    }
    goto LAB_03f81675;
  default:
    goto switchD_03f80d38_default;
  }
  (__this->fields).AIState = 0;
  pCVar18 = (__this->fields)._titan;
  if (pCVar18 == (Characters_BaseTitan_o *)0x0) {
LAB_03f81675:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f80728:
  *(undefined1 *)((long)&(pCVar18->fields).Detection + 4) = 0;
  *(undefined1 *)((long)&(pCVar18->fields).State + 2) = 0;
  fVar24 = 4.0;
  fVar25 = 8.0;
LAB_03f80746:
  fVar24 = UnityEngine_Random__Range(fVar24,fVar25,(MethodInfo *)0x0);
  *(float *)&(__this->fields).AttackInfos = fVar24;
switchD_03f80d38_default:
  Controllers_BaseTitanAIController__RefreshAgent(__this,method_01);
  return;
LAB_03f81469:
  puVar16 = (undefined8 *)(lVar19 + (long)(*(int *)(lVar21 + 8 + lVar22) + 1) * 0x10 + 0x138);
LAB_03f81480:
  method_01 = (MethodInfo *)puVar16[1];
  uVar26 = (*(code *)*puVar16)(plVar23);
  target_00.fields.z = fVar25;
  target_00.fields.x = (float)(int)uVar26;
  target_00.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
  bVar15 = Controllers_BaseTitanAIController__HasClearLineOfSight(__this,target_00,method_01);
  if ((char)bVar15 != '\0') {
    Controllers_BaseTitanAIController__TargetEnemy(__this,method_01);
    goto switchD_03f80d38_default;
  }
  pMVar20 = extraout_RDX_11;
  if (0.0 < *(float *)&(__this->fields).AttackInfos) goto switchD_03f80d38_default;
LAB_03f810fa:
  method_01 = (MethodInfo *)0x1;
  Controllers_BaseTitanAIController__MoveToEnemy(__this,1,pMVar20);
  goto switchD_03f80d38_default;
}


// Controllers.BaseTitanAIController$$RefreshAgent
// il2cpp: void Controllers_BaseTitanAIController__RefreshAgent (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f819b0

void Controllers_BaseTitanAIController__RefreshAgent
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Behaviour_o *pUVar4;
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float local_48;
  float local_28;
  
  *(undefined1 *)&(__this->fields).SmartAttack = 0;
  if (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) == '\0') {
    return;
  }
  pUVar1 = *(UnityEngine_Component_o **)&(__this->fields)._enemyDistance;
  if ((pUVar1 != (UnityEngine_Component_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform(pUVar1,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pUVar1 = *(UnityEngine_Component_o **)&(__this->fields)._enemyDistance;
    if ((pUVar1 != (UnityEngine_Component_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._titan;
      if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
          (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
         (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UVar9 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._titan;
        if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
            (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
           (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) != '\0') {
            if (DAT_056fdea6 == '\0') {
              il2cpp_init_method_metadata(UVar10.fields.x,&TypeInfo_Math);
              DAT_056fdea6 = '\x01';
            }
            local_48 = UVar7.fields.x;
            local_28 = UVar9.fields.x;
            fVar6 = UVar8.fields.z - UVar10.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_init_class();
            }
            fVar6 = fVar6 * fVar6 + (local_48 - local_28) * (local_48 - local_28) + 0.0;
            if (fVar6 < 0.0) {
              fVar6 = sqrtf(fVar6);
            }
            else {
              fVar6 = SQRT(fVar6);
            }
            if (0.1 < fVar6) {
              pUVar4 = *(UnityEngine_Behaviour_o **)&(__this->fields)._enemyDistance;
              if (pUVar4 == (UnityEngine_Behaviour_o *)0x0) goto LAB_03f81b95;
              UnityEngine_Behaviour__set_enabled(pUVar4,0,(MethodInfo *)0x0);
              pUVar4 = *(UnityEngine_Behaviour_o **)&(__this->fields)._enemyDistance;
              if (pUVar4 == (UnityEngine_Behaviour_o *)0x0) goto LAB_03f81b95;
              UnityEngine_Behaviour__set_enabled(pUVar4,1,(MethodInfo *)0x0);
            }
          }
          pCVar2 = (__this->fields)._titan;
          if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
              (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
             (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
             pUVar5 != (UnityEngine_Transform_o *)0x0)) {
            __this_00 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
            UVar7 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
              UnityEngine_AI_NavMeshAgent__set_nextPosition(__this_00,UVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03f81b95:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$GetEnemyAngle
// il2cpp: float Controllers_BaseTitanAIController__GetEnemyAngle (Controllers_BaseTitanAIController_o* __this, Characters_ITargetable_o* enemy, const MethodInfo* method);
// 0x3f82830

float Controllers_BaseTitanAIController__GetEnemyAngle
                (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,
                MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  Characters_ITargetable_c *pCVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Characters_BaseCharacter_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  double dVar8;
  char cVar9;
  VirtualInvokeData *pVVar10;
  long lVar11;
  MethodInfo *method_00;
  float fVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float fVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_48;
  float fStack_44;
  
  if (DAT_05703f61 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703f61 = '\x01';
  }
  if (enemy == (Characters_ITargetable_o *)0x0) {
LAB_03f82925:
    pCVar6 = (__this->fields)._character;
    if (((pCVar6 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar11 = *(long *)&(pCVar6->fields).Dead, lVar11 == 0)) ||
       (pUVar7 = *(UnityEngine_Transform_o **)(lVar11 + 0x10),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f82ca1;
    UVar22 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
    in_XMM1_Da = UVar22.fields.z;
    fStack_70 = (float)extraout_XMM0_Dc;
    local_78 = (undefined1  [8])UVar22.fields._0_8_;
    fStack_6c = (float)extraout_XMM0_Dd;
    pCVar6 = (__this->fields)._character;
  }
  else {
    pCVar4 = enemy->klass;
    uVar1._0_1_ = (pCVar4->_2).rank;
    uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pCVar4->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_ITargetable) {
          pVVar10 = pCVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 2);
          goto LAB_03f828c9;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(enemy,TypeInfo_ITargetable,2);
LAB_03f828c9:
    cVar9 = (*pVVar10->methodPtr)();
    if (cVar9 == '\0') goto LAB_03f82925;
    pCVar4 = enemy->klass;
    uVar2._0_1_ = (pCVar4->_2).rank;
    uVar2._1_1_ = (pCVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pCVar4->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_ITargetable) {
          pVVar10 = pCVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 1);
          goto LAB_03f82c41;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar11);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(enemy,TypeInfo_ITargetable,1);
LAB_03f82c41:
    uVar13 = (*pVVar10->methodPtr)(enemy);
    pCVar6 = (__this->fields)._character;
    if (((pCVar6 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar11 = *(long *)&(pCVar6->fields).Dead, lVar11 == 0)) ||
       (pUVar7 = *(UnityEngine_Transform_o **)(lVar11 + 0x10),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f82ca1;
    UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    local_78._4_4_ = (float)((ulong)uVar13 >> 0x20) - UVar22.fields.y;
    local_78._0_4_ = (float)uVar13 - UVar22.fields.x;
    fStack_70 = extraout_XMM0_Dc_01 - extraout_XMM0_Dc_02;
    fStack_6c = extraout_XMM0_Dd_01 - extraout_XMM0_Dd_02;
    in_XMM1_Da = in_XMM1_Da - UVar22.fields.z;
    pCVar6 = (__this->fields)._character;
  }
  if (((pCVar6 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar11 = *(long *)&(pCVar6->fields).Dead, lVar11 != 0)) &&
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar11 + 0x10),
     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    UVar22 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
    fVar16 = UVar22.fields.z;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar3 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    else {
      iVar3 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    uVar14 = 0;
    uVar15 = 0;
    fVar12 = in_XMM1_Da * in_XMM1_Da + (float)local_78._0_4_ * (float)local_78._0_4_ + 0.0;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
      uVar14 = extraout_XMM0_Dc_00;
      uVar15 = extraout_XMM0_Dd_00;
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (1e-05 < fVar12) {
      auVar18._4_4_ = 0;
      auVar18._0_4_ = local_78._0_4_;
      auVar18._8_4_ = fStack_70;
      auVar18._12_4_ = fStack_6c;
      in_XMM1_Da = in_XMM1_Da / fVar12;
      auVar19._4_4_ = fVar12;
      auVar19._0_4_ = fVar12;
      auVar19._8_4_ = uVar14;
      auVar19._12_4_ = uVar15;
      auVar19 = divps(auVar18,auVar19);
      uVar13 = auVar19._0_8_;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
    }
    local_48 = UVar22.fields.x;
    fStack_44 = UVar22.fields.y;
    fVar12 = fVar16 * fVar16 + fStack_44 * fStack_44 + local_48 * local_48;
    fVar17 = (float)uVar13;
    fVar20 = (float)((ulong)uVar13 >> 0x20);
    fVar21 = in_XMM1_Da * in_XMM1_Da + fVar20 * fVar20 + fVar17 * fVar17;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (0.0 <= fVar12 * fVar21) {
      fVar12 = SQRT(fVar12 * fVar21);
      method_00 = TypeInfo_Math;
    }
    else {
      fVar12 = sqrtf(fVar12 * fVar21);
      method_00 = TypeInfo_Math;
    }
    fVar21 = 0.0;
    TypeInfo_Math = method_00;
    if (1e-15 <= fVar12) {
      fVar12 = (fVar16 * in_XMM1_Da + fVar20 * fStack_44 + fVar17 * local_48) / fVar12;
      fVar16 = 1.0;
      if (fVar12 <= 1.0) {
        fVar16 = fVar12;
      }
      if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar8 = acos((double)(float)(~-(uint)(-1.0 <= fVar12) & 0xbf800000 |
                                  (uint)fVar16 & -(uint)(-1.0 <= fVar12)),method_00);
      fVar21 = (float)dVar8 * 57.29578;
    }
    return ABS(fVar21);
  }
LAB_03f82ca1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$GetChaseAngle
// il2cpp: float Controllers_BaseTitanAIController__GetChaseAngle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x3f81760

float Controllers_BaseTitanAIController__GetChaseAngle
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o position,
                bool_conflict useMoveAngle,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  Characters_BaseTitan_o *pCVar4;
  MethodInfo *method_00;
  float fVar5;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 extraout_var [12];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 uVar11;
  
  pCVar2 = (__this->fields)._character;
  if (((pCVar2 == (Characters_BaseCharacter_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f819a8;
  method_00 = (MethodInfo *)0x0;
  UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  local_48 = position.fields.x;
  fStack_44 = position.fields.y;
  fStack_40 = (float)in_XMM0_Qb;
  fStack_3c = (float)((ulong)in_XMM0_Qb >> 0x20);
  auVar12._0_4_ = local_48 - UVar13.fields.x;
  auVar12._4_4_ = fStack_44 - UVar13.fields.y;
  auVar12._8_4_ = fStack_40 - (float)extraout_XMM0_Qb;
  auVar12._12_4_ = fStack_3c - (float)((ulong)extraout_XMM0_Qb >> 0x20);
  fVar8 = position.fields.z - UVar13.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar5 = fVar8 * fVar8 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
  if (fVar5 < 0.0) {
    auVar6._0_4_ = sqrtf(fVar5);
    auVar6._4_12_ = extraout_var;
    if (1e-05 < auVar6._0_4_) goto LAB_03f818a6;
LAB_03f8184a:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar11 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar6 = ZEXT416((uint)SQRT(fVar5));
    if (SQRT(fVar5) <= 1e-05) goto LAB_03f8184a;
LAB_03f818a6:
    auVar7._0_4_ = auVar6._0_4_;
    fVar8 = fVar8 / auVar7._0_4_;
    auVar7._8_4_ = auVar6._8_4_;
    auVar7._12_4_ = auVar6._12_4_;
    auVar7._4_4_ = auVar7._0_4_;
    auVar12 = divps(auVar12,auVar7);
    uVar11 = auVar12._0_8_;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar10 = (float)uVar11 - (float)uVar1;
  fVar9 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
  fVar5 = fVar8 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (9.9999994e-11 <= fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10) {
    UVar13.fields.z = fVar8;
    UVar13.fields.x = (float)(int)uVar11;
    UVar13.fields.y = (float)(int)((ulong)uVar11 >> 0x20);
    fVar8 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,UVar13,method_00);
  }
  else {
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 == (Characters_BaseTitan_o *)0x0) {
LAB_03f819a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar8 = *(float *)&(pCVar4->fields).Detection;
  }
  if ((char)useMoveAngle != '\0') {
    fVar8 = fVar8 + (__this->fields)._moveToPosition.fields.z;
  }
  fVar8 = (float)(~-(uint)(360.0 < fVar8) & (uint)fVar8 |
                 (uint)(fVar8 + -360.0) & -(uint)(360.0 < fVar8));
  return (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar8 | (uint)(fVar8 + 360.0) & -(uint)(fVar8 < 0.0))
  ;
}


// Controllers.BaseTitanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_BaseTitanAIController__GetChaseAngleGivenDirection (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x3f830d0

float Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o direction,
                bool_conflict useMoveAngle,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_BaseTitan_o *pCVar2;
  bool_conflict bVar3;
  undefined4 in_register_00000034;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar3 = useMoveAngle;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar6 = direction.fields.y - (float)((ulong)uVar1 >> 0x20);
  fVar4 = direction.fields.z - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  fVar5 = direction.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) {
    fVar4 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,direction,
                       (MethodInfo *)CONCAT44(in_register_00000034,bVar3));
  }
  else {
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar4 = *(float *)&(pCVar2->fields).Detection;
  }
  if ((char)useMoveAngle != '\0') {
    fVar4 = fVar4 + (__this->fields)._moveToPosition.fields.z;
  }
  fVar4 = (float)(~-(uint)(360.0 < fVar4) & (uint)fVar4 |
                 (uint)(fVar4 + -360.0) & -(uint)(360.0 < fVar4));
  return (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar4 | (uint)(fVar4 + 360.0) & -(uint)(fVar4 < 0.0))
  ;
}


// Controllers.BaseTitanAIController$$GetDirectionTowardsNavMesh
// il2cpp: UnityEngine_Vector3_o Controllers_BaseTitanAIController__GetDirectionTowardsNavMesh (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f831e0

UnityEngine_Vector3_o
Controllers_BaseTitanAIController__GetDirectionTowardsNavMesh
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  undefined1 auVar5 [16];
  UnityEngine_AI_NavMeshHit_o __this_00;
  bool_conflict bVar6;
  float fVar7;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar10;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  undefined1 in_stack_ffffffffffffff88 [12];
  undefined4 in_stack_ffffffffffffff94;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffff9c;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa4;
  float fVar13;
  int32_t in_stack_ffffffffffffffa8;
  undefined1 local_48 [48];
  undefined1 local_18 [8];
  _union_13 _Stack_10;
  
  local_48._16_8_ = (InvokerMethod)0x0;
  local_48._24_8_ = (char *)0x0;
  local_48._0_8_ = (Il2CppMethodPointer)0x0;
  local_48._8_8_ = (Il2CppMethodPointer)0x0;
  local_48._32_4_ = 0;
  pCVar2 = (__this->fields)._titan;
  if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar4 != (UnityEngine_Transform_o *)0x0
     )) {
    UVar12 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    bVar6 = UnityEngine_AI_NavMesh__SamplePosition
                      (UVar12,(UnityEngine_AI_NavMeshHit_o *)local_48,100.0,-1,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      UVar12 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
      fVar10 = UVar12.fields.z;
      auVar11._0_4_ = UVar12.fields.x;
      uVar8 = extraout_XMM0_Dc_01;
      uVar9 = extraout_XMM0_Dd_01;
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        DAT_056fde20 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
      }
      fVar7 = fVar10 * fVar10 + auVar11._0_4_ * auVar11._0_4_ + 0.0;
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
        in_XMM1_Dc = extraout_XMM0_Dc_02;
        in_XMM1_Dd = extraout_XMM0_Dd_02;
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      if (fVar7 <= 1e-05) {
LAB_03f83407:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      }
      auVar11._4_4_ = 0.0;
      auVar11._8_4_ = (float)uVar8;
      auVar11._12_4_ = (float)uVar9;
LAB_03f833f3:
      UVar12.fields.z = fVar10 / fVar7;
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      auVar5._8_4_ = in_XMM1_Dc;
      auVar5._12_4_ = in_XMM1_Dd;
      auVar11 = divps(auVar11,auVar5);
      UVar12.fields.x = (float)(int)auVar11._0_8_;
      UVar12.fields.y = (float)(int)((ulong)auVar11._0_8_ >> 0x20);
      return (UnityEngine_Vector3_o)UVar12.fields;
    }
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff94;
    __this_00.fields.m_Position.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
    __this_00.fields.m_Position.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
    __this_00.fields.m_Position.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
    __this_00.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff98;
    __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff9c;
    __this_00.fields.m_Distance = (float)in_stack_ffffffffffffffa0;
    __this_00.fields.m_Mask = in_stack_ffffffffffffffa4;
    __this_00.fields.m_Hit = in_stack_ffffffffffffffa8;
    UVar12 = UnityEngine_AI_NavMeshHit__get_position(__this_00,(MethodInfo *)local_48);
    fVar10 = UVar12.fields.z;
    pCVar2 = (__this->fields)._titan;
    if ((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
       (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) {
      auVar11._0_4_ = UVar12.fields.x;
      fVar7 = UVar12.fields.y;
      pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        auVar11._12_4_ = extraout_XMM0_Dc;
        fVar13 = extraout_XMM0_Dd;
        UVar12 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
        auVar11._4_4_ = UVar12.fields.x;
        auVar11._8_4_ = UVar12.fields.y;
        uVar8 = extraout_XMM0_Dc_00;
        uVar9 = extraout_XMM0_Dd_00;
        if (DAT_056fde20 == '\0') {
          _Stack_10._0_4_ = extraout_XMM0_Dc_00;
          local_18 = UVar12.fields._0_8_;
          _Stack_10._4_4_ = extraout_XMM0_Dd_00;
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde20 = '\x01';
          auVar11._4_4_ = (float)local_18._0_4_;
          auVar11._8_4_ = (float)local_18._4_4_;
          uVar8 = _Stack_10._0_4_;
          uVar9 = _Stack_10._4_4_;
        }
        auVar11._0_4_ = auVar11._0_4_ - auVar11._4_4_;
        auVar11._4_4_ = fVar7 - auVar11._8_4_;
        auVar11._8_4_ = auVar11._12_4_ - (float)uVar8;
        auVar11._12_4_ = fVar13 - (float)uVar9;
        fVar10 = fVar10 - UVar12.fields.z;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        fVar7 = fVar10 * fVar10 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
        if (0.0 <= fVar7) {
          fVar7 = SQRT(fVar7);
        }
        else {
          uVar8 = auVar11._8_4_;
          uVar9 = auVar11._12_4_;
          fVar7 = sqrtf(fVar7);
          auVar11._8_4_ = (float)uVar8;
          auVar11._12_4_ = (float)uVar9;
          in_XMM1_Dc = extraout_XMM0_Dc_03;
          in_XMM1_Dd = extraout_XMM0_Dd_03;
        }
        if (fVar7 <= 1e-05) goto LAB_03f83407;
        goto LAB_03f833f3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$GetAgentNavAngle
// il2cpp: float Controllers_BaseTitanAIController__GetAgentNavAngle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x3f83490

float Controllers_BaseTitanAIController__GetAgentNavAngle
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o target,
                MethodInfo *method)

{
  int iVar1;
  UnityEngine_AI_NavMeshAgent_o *pUVar2;
  UnityEngine_Component_o *pUVar3;
  Characters_BaseTitan_o *pCVar4;
  long lVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *method_00;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 extraout_var [12];
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar15 [16];
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_Fields direction;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float local_28;
  float fStack_24;
  
  pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
  if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f83aad;
  UVar21 = UnityEngine_AI_NavMeshAgent__get_velocity(pUVar2,(MethodInfo *)0x0);
  fVar9 = UVar21.fields.z;
  auVar20._8_4_ = extraout_XMM0_Dc;
  auVar20._0_8_ = UVar21.fields._0_8_;
  auVar20._12_4_ = extraout_XMM0_Dd;
  fStack_80 = (float)extraout_XMM0_Dc;
  local_88 = (undefined1  [8])UVar21.fields._0_8_;
  fStack_7c = (float)extraout_XMM0_Dd;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    auVar20 = _local_88;
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    auVar20 = _local_88;
  }
  auVar10._4_4_ = in_XMM1_Db;
  auVar10._0_4_ = fVar9;
  auVar10._8_4_ = in_XMM1_Dc;
  auVar10._12_4_ = in_XMM1_Dd;
  auVar11._4_12_ = auVar10._4_12_;
  fVar8 = fVar9 * fVar9 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
  if (fVar8 < 0.0) {
    auVar11._0_4_ = sqrtf(fVar8);
    auVar11._4_12_ = extraout_var;
    if (auVar11._0_4_ <= 1e-05) goto LAB_03f83520;
LAB_03f8356f:
    auVar12._0_4_ = auVar11._0_4_;
    fVar9 = fVar9 / auVar12._0_4_;
    auVar12._8_4_ = auVar11._8_4_;
    auVar12._12_4_ = auVar11._12_4_;
    auVar12._4_4_ = auVar12._0_4_;
    auVar20 = divps(_local_88,auVar12);
    uVar18 = auVar20._0_8_;
  }
  else {
    auVar11._0_4_ = SQRT(fVar8);
    _local_88 = auVar20;
    if (1e-05 < auVar11._0_4_) goto LAB_03f8356f;
LAB_03f83520:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    in_XMM1_Db = 0.0;
  }
  direction.z = fVar9;
  direction.x = (float)(int)uVar18;
  direction.y = (float)(int)((ulong)uVar18 >> 0x20);
  pUVar3 = *(UnityEngine_Component_o **)&(__this->fields)._enemyDistance;
  if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
     (pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f83aad;
  UVar21 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pUVar3 = *(UnityEngine_Component_o **)&(__this->fields)._enemyDistance;
  if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
     (pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f83aad;
  UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._titan;
  if (((pCVar4 == (Characters_BaseTitan_o *)0x0) ||
      (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0)) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar7 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03f83aad;
  fVar9 = in_XMM1_Db;
  UVar23 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._titan;
  if (((pCVar4 == (Characters_BaseTitan_o *)0x0) ||
      (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0)) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar7 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03f83aad;
  UVar24 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
  if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f83aad;
  bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
LAB_03f836df:
    pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
    if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f83aad;
    bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
      if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f83aad;
      method_00 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(char *)&(__this->fields)._agent == '\0') {
          pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
          if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f83aad;
          method_00 = (MethodInfo *)0x0;
          UnityEngine_AI_NavMeshAgent__SetDestination(pUVar2,target,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields)._agent = 1;
        }
        goto joined_r0x03f83a62;
      }
    }
    pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._enemyDistance;
    if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f83aad;
    method_00 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      direction = (UnityEngine_Vector3_Fields)
                  Controllers_BaseTitanAIController__GetDirectionTowardsNavMesh(__this,method_00);
    }
  }
  else {
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
    }
    local_68 = UVar21.fields.x;
    fStack_64 = UVar21.fields.y;
    local_28 = UVar23.fields.x;
    fStack_24 = UVar23.fields.y;
    fVar8 = UVar22.fields.z - UVar24.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar8 = fVar8 * fVar8;
    fVar16 = (fStack_64 - fStack_24) * (fStack_64 - fStack_24);
    fVar17 = (in_XMM1_Db - fVar9) * (in_XMM1_Db - fVar9);
    fVar9 = fVar8 + (local_68 - local_28) * (local_68 - local_28) + 0.0;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
      if (1.0 < fVar9) goto LAB_03f83866;
      goto LAB_03f836df;
    }
    if (SQRT(fVar9) <= 1.0) goto LAB_03f836df;
LAB_03f83866:
    pUVar3 = *(UnityEngine_Component_o **)&(__this->fields)._enemyDistance;
    if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f83aad;
    UVar21 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    pCVar4 = (__this->fields)._titan;
    if ((pCVar4 == (Characters_BaseTitan_o *)0x0) ||
       ((lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0 ||
        (pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
        pUVar7 == (UnityEngine_Transform_o *)0x0)))) goto LAB_03f83aad;
    method_00 = (MethodInfo *)0x0;
    UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    local_88._0_4_ = UVar21.fields.x;
    local_88._4_4_ = UVar21.fields.y;
    fStack_80 = (float)extraout_XMM0_Qb;
    fStack_7c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
    auVar19._0_4_ = (float)local_88._0_4_ - UVar22.fields.x;
    auVar19._4_4_ = (float)local_88._4_4_ - UVar22.fields.y;
    auVar19._8_4_ = fStack_80 - (float)extraout_XMM0_Qb_00;
    auVar19._12_4_ = fStack_7c - (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
    fVar9 = UVar21.fields.z - UVar22.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    auVar13._4_4_ = fVar8;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar16;
    auVar13._12_4_ = fVar17;
    auVar14._4_12_ = auVar13._4_12_;
    fVar8 = fVar9 * fVar9 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
    if (fVar8 < 0.0) {
      auVar14._0_4_ = sqrtf(fVar8);
      auVar14._4_12_ = extraout_var_00;
      if (auVar14._0_4_ <= 1e-05) goto LAB_03f83968;
LAB_03f83a50:
      auVar15._0_4_ = auVar14._0_4_;
      auVar15._8_4_ = auVar14._8_4_;
      auVar15._12_4_ = auVar14._12_4_;
      auVar15._4_4_ = auVar15._0_4_;
      auVar20 = divps(auVar19,auVar15);
      direction.z = fVar9 / auVar15._0_4_;
      direction.x = (float)(int)auVar20._0_8_;
      direction.y = (float)(int)((ulong)auVar20._0_8_ >> 0x20);
    }
    else {
      auVar14._0_4_ = SQRT(fVar8);
      if (1e-05 < auVar14._0_4_) goto LAB_03f83a50;
LAB_03f83968:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      direction = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    }
  }
joined_r0x03f83a62:
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar16 = direction.y - (float)((ulong)uVar18 >> 0x20);
  fVar9 = direction.z - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  fVar8 = direction.x - (float)uVar18;
  fVar9 = fVar8 * fVar8 + fVar16 * fVar16 + fVar9 * fVar9;
  if (9.9999994e-11 <= fVar9) {
    if (9.9999994e-11 <= fVar9) {
      fVar9 = Controllers_BaseAIController__GetTargetAngle
                        ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o)direction,
                         method_00);
    }
    else {
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto LAB_03f83aad;
      fVar9 = *(float *)&(pCVar4->fields).Detection;
    }
    fVar9 = fVar9 + (__this->fields)._moveToPosition.fields.z;
    fVar9 = (float)(~-(uint)(360.0 < fVar9) & (uint)fVar9 |
                   (uint)(fVar9 + -360.0) & -(uint)(360.0 < fVar9));
    return (float)(~-(uint)(fVar9 < 0.0) & (uint)fVar9 |
                  (uint)(fVar9 + 360.0) & -(uint)(fVar9 < 0.0));
  }
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
    return *(float *)&(pCVar4->fields).Detection;
  }
LAB_03f83aad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$HasClearLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasClearLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x3f82cb0

bool_conflict
Controllers_BaseTitanAIController__HasClearLineOfSight
          (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o target,
          MethodInfo *method)

{
  UnityEngine_CapsuleCollider_o *pUVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  bool_conflict bVar5;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  undefined8 local_68;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) == '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  pUVar1 = *(UnityEngine_CapsuleCollider_o **)&(__this->fields)._usePathfinding;
  if (pUVar1 != (UnityEngine_CapsuleCollider_o *)0x0) {
    fVar6 = UnityEngine_CapsuleCollider__get_radius(pUVar1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._titan;
    if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
        (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._titan;
      if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
          (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
         (pUVar1 = *(UnityEngine_CapsuleCollider_o **)&(__this->fields)._usePathfinding,
         pUVar1 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        UVar8 = UnityEngine_CapsuleCollider__get_center(pUVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__TransformPoint(pUVar4,UVar8,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._titan;
          if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
              (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
             (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._titan;
            if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
               (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UVar10 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
              pCVar2 = (__this->fields)._titan;
              if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                  (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
                 (pUVar1 = *(UnityEngine_CapsuleCollider_o **)&(__this->fields)._usePathfinding,
                 pUVar1 != (UnityEngine_CapsuleCollider_o *)0x0)) {
                pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
                UVar11 = UnityEngine_CapsuleCollider__get_center(pUVar1,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UVar11 = UnityEngine_Transform__TransformPoint(pUVar4,UVar11,(MethodInfo *)0x0);
                  pCVar2 = (__this->fields)._titan;
                  if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
                     (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
                     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    UVar12 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
                    pCVar2 = (__this->fields)._titan;
                    if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                        (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
                       (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      local_88 = UVar7.fields.x;
                      fVar6 = fVar6 * local_88 * 0.5;
                      local_28 = UVar9.fields.x;
                      fStack_24 = UVar9.fields.y;
                      local_a8 = UVar8.fields.x;
                      fStack_a4 = UVar8.fields.y;
                      local_68._0_4_ = UVar10.fields.x;
                      local_68._4_4_ = UVar10.fields.y;
                      method_00 = (MethodInfo *)0x0;
                      UVar7 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
                      UVar8.fields.z =
                           UVar10.fields.z * -1.1 * fVar6 +
                           (UVar8.fields.z - UVar9.fields.z * fVar6);
                      UVar8.fields.x =
                           (float)local_68 * -1.1 * fVar6 + (local_a8 - local_28 * fVar6);
                      UVar8.fields.y =
                           local_68._4_4_ * -1.1 * fVar6 + (fStack_a4 - fStack_24 * fVar6);
                      bVar5 = Controllers_BaseTitanAIController__HasLineOfSight
                                        (__this,UVar8,target,method_00);
                      if ((char)bVar5 == '\0') {
                        return 0;
                      }
                      local_48 = UVar12.fields.x;
                      fStack_44 = UVar12.fields.y;
                      local_38 = UVar11.fields.x;
                      fStack_34 = UVar11.fields.y;
                      local_98 = UVar7.fields.x;
                      fStack_94 = UVar7.fields.y;
                      UVar9.fields.x = local_98 * 1.1 * fVar6 + (local_38 - local_48 * fVar6);
                      UVar9.fields.y = fStack_94 * 1.1 * fVar6 + (fStack_34 - fStack_44 * fVar6);
                      UVar9.fields.z =
                           UVar7.fields.z * 1.1 * fVar6 +
                           (UVar11.fields.z - UVar12.fields.z * fVar6);
                      bVar5 = Controllers_BaseTitanAIController__HasLineOfSight
                                        (__this,UVar9,target,method_00);
                      return bVar5;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$HasLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x3f83ac0

bool_conflict
Controllers_BaseTitanAIController__HasLineOfSight
          (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o start,
          UnityEngine_Vector3_o target,MethodInfo *method)

{
  int iVar1;
  int32_t layerMask;
  uint uVar2;
  float fVar3;
  float in_XMM0_Dc;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Dc;
  float in_XMM0_Dd;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM2_Qb;
  undefined1 auVar6 [16];
  float fVar7;
  UnityEngine_Vector3_o direction;
  float local_84;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_58;
  float fStack_54;
  UnityEngine_RaycastHit_o local_48;
  
  if (DAT_05703f62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703f62 = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider = 0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  local_58 = start.fields.x;
  fStack_54 = start.fields.y;
  local_78._0_4_ = target.fields.x - local_58;
  local_78._4_4_ = target.fields.y - fStack_54;
  local_84 = target.fields.z - start.fields.z;
  fStack_70 = (float)in_XMM2_Qb - in_XMM0_Dc;
  fStack_6c = (float)((ulong)in_XMM2_Qb >> 0x20) - in_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = local_84 * local_84 +
          (float)local_78._4_4_ * (float)local_78._4_4_ +
          (float)local_78._0_4_ * (float)local_78._0_4_;
  if (fVar7 < 0.0) {
    fVar3 = sqrtf(fVar7);
  }
  else {
    fVar3 = SQRT(fVar7);
  }
  if (1000.0 < fVar3 + -0.2) {
    return 0;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    uVar4 = extraout_XMM0_Dc;
    uVar5 = extraout_XMM0_Dd;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    fVar7 = SQRT(fVar7);
  }
  if (1e-05 < fVar7) {
    local_84 = local_84 / fVar7;
    auVar6._4_4_ = fVar7;
    auVar6._0_4_ = fVar7;
    auVar6._8_4_ = uVar4;
    auVar6._12_4_ = uVar5;
    auVar6 = divps(_local_78,auVar6);
    local_78 = auVar6._0_8_;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_78 = (undefined1  [8])**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_84 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  layerMask = UnityEngine_LayerMask__get_value
                        ((UnityEngine_LayerMask_o)((int)__this + 0xf4),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  direction.fields.z = local_84;
  direction.fields.x = (float)local_78._0_4_;
  direction.fields.y = (float)local_78._4_4_;
  uVar2 = UnityEngine_Physics__Raycast
                    (start,direction,&local_48,fVar3 + -0.2,layerMask,(MethodInfo *)0x0);
  return uVar2 ^ 1;
}


// Controllers.BaseTitanAIController$$IsCrawler
// il2cpp: bool Controllers_BaseTitanAIController__IsCrawler (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f82040

bool_conflict
Controllers_BaseTitanAIController__IsCrawler
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  
  if (DAT_05703f63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    DAT_05703f63 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)pCVar2 >> 8),
                      *(char *)&(pCVar2->fields)._rootMotionAnimations != '\0');
    }
  }
  return 0;
}


// Controllers.BaseTitanAIController$$IsShifter
// il2cpp: bool Controllers_BaseTitanAIController__IsShifter (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f820b0

bool_conflict
Controllers_BaseTitanAIController__IsShifter
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  Characters_BaseTitan_c *pCVar3;
  
  if (DAT_05703f64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    DAT_05703f64 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if (bVar1 <= (pCVar3->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_BaseShifter >> 8),
                      (pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter);
    }
  }
  return 0;
}


// Controllers.BaseTitanAIController$$Idle
// il2cpp: void Controllers_BaseTitanAIController__Idle (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f7edf0

void Controllers_BaseTitanAIController__Idle
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
    *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
    fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields).AttackInfos = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$Wander
// il2cpp: void Controllers_BaseTitanAIController__Wander (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f82160

void Controllers_BaseTitanAIController__Wander
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  double dVar3;
  Characters_BaseTitan_o *pCVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  float local_38;
  float fStack_24;
  undefined8 uVar7;
  
  (__this->fields).AIState = 1;
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto LAB_03f824bd;
  *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 1;
  fVar5 = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
  *(float *)&(pCVar4->fields).Detection = fVar5;
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto LAB_03f824bd;
  *(undefined1 *)&(pCVar4->fields).State = 1;
  *(undefined1 *)((long)&(pCVar4->fields).State + 2) = 0;
  if (DAT_05703f63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    DAT_05703f63 = '\x01';
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 != (Characters_BaseTitan_o *)0x0) goto LAB_03f821df;
  }
  else {
LAB_03f821df:
    bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if (((bVar1 <= (pCVar4->klass->_2).naturalAligment) &&
        ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) &&
       (*(char *)&(pCVar4->fields)._rootMotionAnimations != '\0')) {
      if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto LAB_03f824bd;
      *(undefined1 *)&(pCVar4->fields).State = 0;
    }
  }
  if (((pCVar4 == (Characters_BaseTitan_o *)0x0) ||
      (lVar2 = *(long *)&(pCVar4->fields).Dead, lVar2 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f824bd;
  UVar12 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
  fVar5 = UVar12.fields.z;
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto LAB_03f824bd;
  fVar9 = fVar5;
  uVar7 = (*(pCVar4->klass->vtable)._95_GetTargetDirection.methodPtr)
                    (pCVar4,(pCVar4->klass->vtable)._95_GetTargetDirection.method);
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar6 = (float)uVar7;
  if (DAT_0570266a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_0570266a = '\x01';
  }
  fStack_24 = UVar12.fields.y;
  local_38 = UVar12.fields.x;
  fVar10 = fVar5 * fVar5 + fStack_24 * fStack_24 + local_38 * local_38;
  fVar11 = fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (0.0 <= fVar10 * fVar11) goto LAB_03f82333;
LAB_03f823d9:
    fVar10 = sqrtf(fVar10 * fVar11);
    method_00 = TypeInfo_Math;
  }
  else {
    if (fVar10 * fVar11 < 0.0) goto LAB_03f823d9;
LAB_03f82333:
    fVar10 = SQRT(fVar10 * fVar11);
    method_00 = TypeInfo_Math;
  }
  TypeInfo_Math = method_00;
  if (1e-15 <= fVar10) {
    fVar10 = (fVar5 * fVar9 + fVar8 * fStack_24 + fVar6 * local_38) / fVar10;
    fVar5 = 1.0;
    if (fVar10 <= 1.0) {
      fVar5 = fVar10;
    }
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar10) & 0xbf800000 |
                                (uint)fVar5 & -(uint)(-1.0 <= fVar10)),method_00);
    if (60.0 < ABS((float)dVar3 * 57.29578)) {
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 == (Characters_BaseTitan_o *)0x0) {
LAB_03f824bd:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pCVar4->klass->vtable)._95_GetTargetDirection.methodPtr)
                (pCVar4,(pCVar4->klass->vtable)._95_GetTargetDirection.method);
      (*(pCVar4->klass->vtable)._143_Turn.methodPtr)
                (pCVar4,(pCVar4->klass->vtable)._143_Turn.method);
    }
  }
  fVar5 = UnityEngine_Random__Range(2.0,6.0,(MethodInfo *)0x0);
  *(float *)&(__this->fields).AttackInfos = fVar5;
  return;
}


// Controllers.BaseTitanAIController$$Sit
// il2cpp: void Controllers_BaseTitanAIController__Sit (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f82110

void Controllers_BaseTitanAIController__Sit
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields).AIState = 2;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 1;
    fVar2 = UnityEngine_Random__Range(8.0,14.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields).AttackInfos = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$MoveToEnemy
// il2cpp: void Controllers_BaseTitanAIController__MoveToEnemy (Controllers_BaseTitanAIController_o* __this, bool avoidCollisions, const MethodInfo* method);
// 0x3f824d0

void Controllers_BaseTitanAIController__MoveToEnemy
               (Controllers_BaseTitanAIController_o *__this,bool_conflict avoidCollisions,
               MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 in_register_00000034;
  MethodInfo *pMVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o target;
  
  pMVar6 = (MethodInfo *)CONCAT44(in_register_00000034,avoidCollisions);
  if (DAT_05703f65 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703f65 = '\x01';
  }
  (__this->fields).AIState = 3;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto LAB_03f82691;
  *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 1;
  *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
  *(byte *)&(pCVar1->fields).State = (byte)(__this->fields).IsRun ^ 1;
  fVar9 = 45.0;
  fVar8 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
  (__this->fields)._moveToPosition.fields.z = fVar8;
  if ((((uint)*(byte *)((long)&(__this->fields)._waitAttackTimeLeft + 1) & avoidCollisions & 0xffU)
       != 0) && (plVar2 = *(long **)&(__this->fields)._rangedCooldownLeft, plVar2 != (long *)0x0)) {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar7) == TypeInfo_ITargetable) {
          puVar5 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar7) + 2) * 0x10 + lVar3 + 0x138
                   );
          goto LAB_03f825c9;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar7);
    }
    puVar5 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_ITargetable,2);
LAB_03f825c9:
    pMVar6 = (MethodInfo *)puVar5[1];
    cVar4 = (*(code *)*puVar5)();
    if (cVar4 != '\0') {
      plVar2 = *(long **)&(__this->fields)._rangedCooldownLeft;
      if (plVar2 == (long *)0x0) {
LAB_03f82691:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar1 = (__this->fields)._titan;
      lVar3 = *plVar2;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar7 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar7) == TypeInfo_ITargetable) {
            puVar5 = (undefined8 *)
                     (lVar3 + (long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar7) + 1) * 0x10 +
                     0x138);
            goto LAB_03f82671;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar7);
      }
      puVar5 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_ITargetable,1);
LAB_03f82671:
      pMVar6 = (MethodInfo *)puVar5[1];
      target.fields._0_8_ = (*(code *)*puVar5)(plVar2);
      target.fields.z = fVar9;
      fVar8 = Controllers_BaseTitanAIController__GetAgentNavAngle(__this,target,pMVar6);
      if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto LAB_03f82691;
      *(float *)&(pCVar1->fields).Detection = fVar8;
      goto LAB_03f82636;
    }
  }
  Controllers_BaseTitanAIController__TargetEnemy(__this,pMVar6);
LAB_03f82636:
  fVar8 = UnityEngine_Random__Range
                    ((__this->fields).ChaseAngleTimeMin,(__this->fields).ChaseAngleTimeMax,
                     (MethodInfo *)0x0);
  *(float *)&(__this->fields).AttackInfos = fVar8;
  return;
}


// Controllers.BaseTitanAIController$$TargetEnemy
// il2cpp: void Controllers_BaseTitanAIController__TargetEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f82ff0

void Controllers_BaseTitanAIController__TargetEnemy
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  long *plVar2;
  Characters_BaseTitan_o *pCVar3;
  long lVar4;
  undefined8 *puVar5;
  MethodInfo *method_00;
  long lVar6;
  float fVar7;
  float in_XMM1_Da;
  UnityEngine_Vector3_o position;
  
  if (DAT_05703f66 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703f66 = '\x01';
  }
  plVar2 = *(long **)&(__this->fields)._rangedCooldownLeft;
  if (plVar2 != (long *)0x0) {
    pCVar3 = (__this->fields)._titan;
    lVar4 = *plVar2;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar6 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar6) == TypeInfo_ITargetable) {
          puVar5 = (undefined8 *)
                   (lVar4 + (long)(*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar6) + 1) * 0x10 + 0x138
                   );
          goto LAB_03f83085;
        }
        lVar6 = lVar6 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar6);
    }
    puVar5 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_ITargetable,1);
LAB_03f83085:
    position.fields._0_8_ = (*(code *)*puVar5)(plVar2,puVar5[1]);
    fVar7 = (__this->fields)._attackCooldownLeft;
    pfVar1 = &(__this->fields).ChaseAngleMinRange;
    position.fields.z = in_XMM1_Da;
    fVar7 = Controllers_BaseTitanAIController__GetChaseAngle
                      (__this,position,(uint)(*pfVar1 <= fVar7 && fVar7 != *pfVar1),method_00);
    if (pCVar3 != (Characters_BaseTitan_o *)0x0) {
      *(float *)&(pCVar3->fields).Detection = fVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$MoveToPosition
// il2cpp: void Controllers_BaseTitanAIController__MoveToPosition (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f81680

void Controllers_BaseTitanAIController__MoveToPosition
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  UnityEngine_Vector3_o target;
  UnityEngine_Vector3_o position;
  MethodInfo *method_00;
  float fVar2;
  
  (__this->fields).AIState = 4;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 1;
    *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
    *(byte *)&(pCVar1->fields).State = (byte)(__this->fields).IsRun ^ 1;
    if (*(char *)((long)&(__this->fields)._waitAttackTimeLeft + 1) == '\0') {
      fVar2 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
      (__this->fields)._moveToPosition.fields.z = fVar2;
      pCVar1 = (__this->fields)._titan;
      position.fields.x = (__this->fields).TurnAngle;
      position.fields.y = (__this->fields)._moveToPosition.fields.x;
      position.fields.z = (__this->fields)._moveToPosition.fields.y;
      fVar2 = Controllers_BaseTitanAIController__GetChaseAngle(__this,position,1,method_00);
    }
    else {
      fVar2 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
      (__this->fields)._moveToPosition.fields.z = fVar2;
      pCVar1 = (__this->fields)._titan;
      target.fields.x = (__this->fields).TurnAngle;
      target.fields.y = (__this->fields)._moveToPosition.fields.x;
      target.fields.z = (__this->fields)._moveToPosition.fields.y;
      fVar2 = Controllers_BaseTitanAIController__GetAgentNavAngle(__this,target,method);
    }
    if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
      *(float *)&(pCVar1->fields).Detection = fVar2;
      fVar2 = UnityEngine_Random__Range
                        ((__this->fields).ChaseAngleTimeMin,(__this->fields).ChaseAngleTimeMax,
                         (MethodInfo *)0x0);
      *(float *)&(__this->fields).AttackInfos = fVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$Attack
// il2cpp: void Controllers_BaseTitanAIController__Attack (Controllers_BaseTitanAIController_o* __this, System_Collections_Generic_List_string__o* validAttacks, const MethodInfo* method);
// 0x3f826a0

void Controllers_BaseTitanAIController__Attack
               (Controllers_BaseTitanAIController_o *__this,
               System_Collections_Generic_List_string__o *validAttacks,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *a;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  float fVar5;
  
  if (DAT_05703f67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TitanAttackInfo_get_Item);
    il2cpp_init_method_metadata(&"");
    DAT_05703f67 = '\x01';
    method = extraout_RDX;
  }
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto LAB_03f827f4;
  *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
  a = Controllers_BaseTitanAIController__GetRandomAttack(__this,validAttacks,method);
  bVar3 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto LAB_03f827f4;
    cVar2 = (*(pCVar1->klass->vtable)._129_CanAttack.methodPtr)
                      (pCVar1,(pCVar1->klass->vtable)._129_CanAttack.method);
    if (cVar2 != '\0') {
      (__this->fields)._enemy = (Characters_ITargetable_o *)a;
      il2cpp_runtime_glue(&(__this->fields)._enemy,a);
      (__this->fields).AIState = 5;
      pCVar1 = (__this->fields)._titan;
      if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto LAB_03f827f4;
      (*(pCVar1->klass->vtable)._128_Attack.methodPtr)
                (pCVar1,(__this->fields)._enemy,(pCVar1->klass->vtable)._128_Attack.method);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).AttackGroups;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f827f4;
      pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (__this_00,(Il2CppObject *)a,MethodInfo_TitanAttackInfo_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03f827f4;
      if (*(char *)((long)&pIVar4[1].klass + 2) != '\0') {
        (__this->fields)._stateTimeLeft = (__this->fields).FarAttackCooldown;
      }
      goto LAB_03f827e3;
    }
  }
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
LAB_03f827f4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
  *(undefined1 *)((long)&(pCVar1->fields).State + 2) = 0;
  fVar5 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  *(float *)&(__this->fields).AttackInfos = fVar5;
LAB_03f827e3:
  *(float *)((long)&(__this->fields)._attack + 4) = (__this->fields).AttackWait;
  return;
}


// Controllers.BaseTitanAIController$$WaitAttack
// il2cpp: void Controllers_BaseTitanAIController__WaitAttack (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f82800

void Controllers_BaseTitanAIController__WaitAttack
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  
  (__this->fields).AIState = 6;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
    *(float *)((long)&(__this->fields)._attack + 4) = (__this->fields).AttackWait;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BaseTitanAIController$$FindNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_BaseTitanAIController__FindNearestEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f81ba0

Characters_ITargetable_o *
Controllers_BaseTitanAIController__FindNearestEnemy
          (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  Characters_BaseMovementSync_o *pCVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationCallbackInfo_o *pSVar5;
  System_Action_object__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Threading_CancellationTokenSource_o *__this_05;
  bool_conflict bVar6;
  System_Threading_CancellationTokenSource_o *x;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  float fVar8;
  float in_XMM1_Db;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  UnityEngine_Vector3_o UVar13;
  float in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  float local_98;
  float fStack_94;
  _union_247328 local_88;
  undefined8 uStack_80;
  System_Threading_CancellationTokenSource_o *local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  _union_247328 local_48;
  undefined8 uStack_40;
  System_Threading_CancellationTokenSource_o *local_38;
  
  if (DAT_05703f68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapTargetable_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapTargetable__GetEnume);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703f68 = '\x01';
  }
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_Threading_CancellationTokenSource_o *)0x0;
  pCVar2 = (__this->fields)._titan;
  if (((pCVar2 == (Characters_BaseTitan_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f81fa8;
  UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  local_68 = UVar13.fields.z;
  pCVar2 = (__this->fields)._titan;
  if ((pCVar2 == (Characters_BaseTitan_o *)0x0) ||
     (pCVar4 = (pCVar2->fields).MovementSync, pCVar4 == (Characters_BaseMovementSync_o *)0x0))
  goto LAB_03f81fa8;
  x = (pCVar4->fields).m_CancellationTokenSource;
  fStack_64 = in_XMM1_Db;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fStack_94 = UVar13.fields.y;
  local_58 = fStack_94;
  fStack_54 = fStack_94;
  local_98 = UVar13.fields.x;
  if ((char)bVar6 == '\0') {
LAB_03f81cd2:
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
joined_r0x03f81ce3:
    fVar9 = INFINITY;
    x = (System_Threading_CancellationTokenSource_o *)0x0;
  }
  else {
    if (x == (System_Threading_CancellationTokenSource_o *)0x0) goto LAB_03f81fa8;
    if ((char)x[1].fields._disposed != '\0') goto LAB_03f81cd2;
    pSVar5 = x[1].fields._executingCallback;
    if ((pSVar5 == (System_Threading_CancellationCallbackInfo_o *)0x0) ||
       (__this_02 = (pSVar5->fields).Callback, __this_02 == (System_Action_object__o *)0x0))
    goto LAB_03f81fa8;
    UVar13 = UnityEngine_Transform__get_position
                       ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
    fVar8 = UVar13.fields.z;
    fVar9 = UVar13.fields.x;
    fVar7 = UVar13.fields.y;
    uVar11 = extraout_XMM0_Dc;
    uVar12 = extraout_XMM0_Dd;
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
      in_stack_ffffffffffffff4c = fVar7;
      in_stack_ffffffffffffff50 = uVar11;
      in_stack_ffffffffffffff54 = uVar12;
      in_stack_ffffffffffffff58 = fVar8;
      in_stack_ffffffffffffff5c = in_XMM1_Db;
    }
    fVar10 = fVar7 - local_58;
    fVar8 = fVar8 - local_68;
    fVar9 = fVar9 - local_98;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
      in_stack_ffffffffffffff4c = fVar7;
      in_stack_ffffffffffffff50 = uVar11;
      in_stack_ffffffffffffff54 = uVar12;
      in_stack_ffffffffffffff58 = fVar8;
      in_stack_ffffffffffffff5c = fVar9;
    }
    fVar9 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    if ((INFINITY <= fVar9) || ((__this->fields).DetectRange <= fVar9)) {
      iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
      goto joined_r0x03f81ce3;
    }
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38)
  ;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this_01,MethodInfo_List_1_T__Enumerator_Map_MapTargetable__GetEnume);
    fStack_60 = fStack_64;
    local_78 = local_38;
    local_88 = local_48;
    uStack_80 = uStack_40;
    fStack_64 = local_98;
    fStack_5c = fStack_94;
LAB_03f81d60:
    do {
      do {
        __this_03.fields._list._4_4_ = in_stack_ffffffffffffff4c;
        __this_03.fields._list._0_4_ = fVar9;
        __this_03.fields._index = in_stack_ffffffffffffff50;
        __this_03.fields._version = in_stack_ffffffffffffff54;
        __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
        __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
        bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185E20 *)&local_88);
        __this_05 = local_78;
        if ((char)bVar6 == '\0') {
          __this_04.fields._list._4_4_ = in_stack_ffffffffffffff4c;
          __this_04.fields._list._0_4_ = fVar9;
          __this_04.fields._index = in_stack_ffffffffffffff50;
          __this_04.fields._version = in_stack_ffffffffffffff54;
          __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58;
          __this_04.fields._current._4_4_ = in_stack_ffffffffffffff5c;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_04,(MethodInfo_3185E10 *)&local_88);
          return (Characters_ITargetable_o *)x;
        }
      } while ((local_78 == (System_Threading_CancellationTokenSource_o *)0x0) ||
              (bVar6 = Map_MapTargetable__ValidTarget
                                 ((Map_MapTargetable_o *)local_78,(MethodInfo *)0x0),
              (char)bVar6 == '\0'));
      UVar13 = Map_MapTargetable__GetPosition((Map_MapTargetable_o *)__this_05,(MethodInfo *)0x0);
      in_stack_ffffffffffffff58 = UVar13.fields.x;
      in_stack_ffffffffffffff5c = UVar13.fields.y;
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      fVar7 = UVar13.fields.z - local_68;
      fVar7 = (in_stack_ffffffffffffff58 - fStack_64) * (in_stack_ffffffffffffff58 - fStack_64) +
              (in_stack_ffffffffffffff5c - local_58) * (in_stack_ffffffffffffff5c - local_58) +
              fVar7 * fVar7;
      if (fVar7 < 0.0) goto LAB_03f81e2b;
      fVar7 = SQRT(fVar7);
    } while (fVar9 <= fVar7);
    goto LAB_03f81d50;
  }
LAB_03f81fa8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03f81e2b:
  fVar7 = sqrtf(fVar7);
  if (fVar7 < fVar9) {
LAB_03f81d50:
    if (fVar7 < (__this->fields).DetectRange) {
      x = __this_05;
      fVar9 = fVar7;
    }
  }
  goto LAB_03f81d60;
}


// Controllers.BaseTitanAIController$$GetRandomAttack
// il2cpp: System_String_o* Controllers_BaseTitanAIController__GetRandomAttack (Controllers_BaseTitanAIController_o* __this, System_Collections_Generic_List_string__o* validAttacks, const MethodInfo* method);
// 0x3f83d70

System_String_o *
Controllers_BaseTitanAIController__GetRandomAttack
          (Controllers_BaseTitanAIController_o *__this,
          System_Collections_Generic_List_string__o *validAttacks,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_T__c *__this_07;
  bool_conflict bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_object__int__o *__this_08;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  _union_247328 _Var7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_stack_ffffffffffffff68 [12];
  float maxInclusive;
  Controllers_BaseTitanAIController_o *pCVar11;
  undefined4 uVar12;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_247328 local_68;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  float local_4c;
  undefined1 local_48 [16];
  _union_247328 local_38;
  
  if (DAT_05703f69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_TitanAttackInfo_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_05703f69 = '\x01';
  }
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  local_68 = (_union_247328)0x0;
  __this_08 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this_08,MethodInfo_Dictionary_2_System_String_System_Int32);
  if (validAttacks == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)validAttacks;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)validAttacks,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  local_68 = local_38;
  local_78 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  pIStack_70 = (Il2CppRGCTXData *)local_48._8_8_;
  if (__this_08 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    maxInclusive = 0.0;
    pCVar11 = __this;
    while (__this_01.fields._version = (int32_t)maxInclusive,
          __this_01.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_,
          __this_01.fields._index = in_stack_ffffffffffffff68._8_4_,
          __this_01.fields._current._0_4_ = (int)pCVar11,
          __this_01.fields._current._4_4_ = (int)((ulong)pCVar11 >> 0x20),
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&local_78), _Var7 = local_68,
          (char)bVar3 != '\0') {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).AttackGroups;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f8439d;
      System_Collections_Generic_Dictionary<object__object>__get_Item
                (pSVar1,local_68.genericMethod,MethodInfo_TitanAttackInfo_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).AttackChances;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f843a2;
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar1,_Var7.genericMethod,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 != '\0') {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).AttackChances;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__get_Item
                    (pSVar1,_Var7.genericMethod,MethodInfo_String_get_Item);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_03f843b8;
      }
      pSVar2 = (__this->fields)._moveToCallback;
      if (pSVar2 == (System_Action_o *)0x0) goto LAB_03f843a7;
      fVar8 = System_Collections_Generic_Dictionary<object__float>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         _Var7.genericMethod,MethodInfo_Single_get_Item);
      maxInclusive = maxInclusive + fVar8;
    }
  }
  else {
    maxInclusive = 0.0;
    while (__this_00.fields._version = (int32_t)maxInclusive,
          __this_00.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_,
          __this_00.fields._index = in_stack_ffffffffffffff68._8_4_,
          __this_00.fields._current._0_4_ = (int)__this,
          __this_00.fields._current._4_4_ = (int)((ulong)__this >> 0x20),
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&local_78), _Var7 = local_68,
          pCVar11 = __this, (char)bVar3 != '\0') {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).AttackGroups;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f8439d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__get_Item
                (pSVar1,local_68.genericMethod,MethodInfo_TitanAttackInfo_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).AttackChances;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f843a2:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar1,_Var7.genericMethod,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        pSVar2 = (__this->fields)._moveToCallback;
        if (pSVar2 == (System_Action_o *)0x0) {
LAB_03f843a7:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this = pCVar11;
        fVar8 = System_Collections_Generic_Dictionary<object__float>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           _Var7.genericMethod,MethodInfo_Single_get_Item);
        maxInclusive = maxInclusive + fVar8;
      }
      else {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).AttackChances;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f843b8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar1,_Var7.genericMethod,MethodInfo_String_get_Item);
        bVar3 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                          (__this_08,pIVar5,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') {
          System_Collections_Generic_Dictionary<object__int>__Add(__this_08,pIVar5,0,MethodInfo_Void_Add);
          pSVar2 = (pCVar11->fields)._moveToCallback;
          if (pSVar2 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fVar8 = System_Collections_Generic_Dictionary<object__float>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                             _Var7.genericMethod,MethodInfo_Single_get_Item);
          maxInclusive = maxInclusive + fVar8;
        }
        iVar4 = System_Collections_Generic_Dictionary<object__int>__get_Item
                          (__this_08,pIVar5,MethodInfo_Int32_get_Item);
        __this = pCVar11;
        System_Collections_Generic_Dictionary<object__int>__set_Item
                  (__this_08,pIVar5,iVar4 + 1,MethodInfo_Void_set_Item);
      }
    }
  }
  __this_02.fields._version = (int32_t)maxInclusive;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff68._8_4_;
  __this_02.fields._current._0_4_ = (int)pCVar11;
  __this_02.fields._current._4_4_ = (int)((ulong)pCVar11 >> 0x20);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&local_78);
  __this_07 = local_58;
  uVar12 = (undefined4)((ulong)pCVar11 >> 0x20);
  if ((maxInclusive != 0.0) || (NAN(maxInclusive))) {
    fVar8 = UnityEngine_Random__Range(0.0,maxInclusive,(MethodInfo *)0x0);
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_07,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    local_68 = local_38;
    local_78 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    pIStack_70 = (Il2CppRGCTXData *)local_48._8_8_;
    if (__this_08 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      fVar9 = 0.0;
      do {
        __this_04.fields._version = (int32_t)fVar9;
        __this_04.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
        __this_04.fields._index = in_stack_ffffffffffffff68._8_4_;
        __this_04.fields._current._0_4_ = fVar8;
        __this_04.fields._current._4_4_ = uVar12;
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_04,(MethodInfo_3185E20 *)&local_78);
        _Var7 = local_68;
        if ((char)bVar3 == '\0') goto LAB_03f8435e;
        pSVar2 = (__this->fields)._moveToCallback;
        if (pSVar2 == (System_Action_o *)0x0) goto LAB_03f843bd;
        fVar10 = System_Collections_Generic_Dictionary<object__float>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                            local_68.genericMethod,MethodInfo_Single_get_Item);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).AttackChances;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03f843c2;
        maxInclusive = fVar9;
        bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar1,_Var7.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AttackChances;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar1,_Var7.genericMethod,MethodInfo_String_get_Item);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_03f843ef;
        }
        fVar9 = maxInclusive + fVar10;
      } while ((fVar8 < maxInclusive) || (fVar9 <= fVar8));
    }
    else {
      fVar9 = 0.0;
      do {
        __this_03.fields._version = (int32_t)maxInclusive;
        __this_03.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
        __this_03.fields._index = in_stack_ffffffffffffff68._8_4_;
        __this_03.fields._current._0_4_ = fVar8;
        __this_03.fields._current._4_4_ = uVar12;
        local_4c = fVar9;
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185E20 *)&local_78);
        _Var7 = local_68;
        fVar9 = maxInclusive;
        if ((char)bVar3 == '\0') {
LAB_03f8435e:
          __this_06.fields._version = (int32_t)fVar9;
          __this_06.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
          __this_06.fields._index = in_stack_ffffffffffffff68._8_4_;
          __this_06.fields._current._0_4_ = fVar8;
          __this_06.fields._current._4_4_ = uVar12;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_06,(MethodInfo_3185E10 *)&local_78);
          pSVar6 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)local_58,0,MethodInfo_String_get_Item);
          return pSVar6;
        }
        pSVar2 = (__this->fields)._moveToCallback;
        if (pSVar2 == (System_Action_o *)0x0) {
LAB_03f843bd:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        maxInclusive = System_Collections_Generic_Dictionary<object__float>__get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                  local_68.genericMethod,MethodInfo_Single_get_Item);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).AttackChances;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f843c2:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar1,_Var7.genericMethod,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AttackChances;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f843ef:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,_Var7.genericMethod,MethodInfo_String_get_Item);
          iVar4 = System_Collections_Generic_Dictionary<object__int>__get_Item
                            (__this_08,pIVar5,MethodInfo_Int32_get_Item);
          maxInclusive = maxInclusive / (float)iVar4;
        }
        fVar9 = local_4c + maxInclusive;
      } while ((fVar8 < local_4c) || (fVar9 <= fVar8));
    }
    __this_05.fields._version = (int32_t)maxInclusive;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_
    ;
    __this_05.fields._index = in_stack_ffffffffffffff68._8_4_;
    __this_05.fields._current._0_4_ = fVar8;
    __this_05.fields._current._4_4_ = uVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)&local_78);
  }
  else {
    _Var7 = (_union_247328)(*(_union_247328 **)(DAT_057110b0 + 0xb8))->genericMethod;
  }
  return _Var7.genericMethod;
}


// Controllers.BaseTitanAIController$$GetValidAttacks
// il2cpp: System_Collections_Generic_List_string__o* Controllers_BaseTitanAIController__GetValidAttacks (Controllers_BaseTitanAIController_o* __this, bool farOnly, const MethodInfo* method);
// 0x3f84700

System_Collections_Generic_List_string__o *
Controllers_BaseTitanAIController__GetValidAttacks
          (Controllers_BaseTitanAIController_o *__this,bool_conflict farOnly,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  long *plVar6;
  Characters_BaseTitan_o *pCVar7;
  Characters_BaseCharacter_o *pCVar8;
  Characters_BaseCharacter_c *pCVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Action_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_array *pSVar11;
  System_Action_Hashtable__o *pSVar12;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool bVar13;
  undefined1 auVar14 [16];
  char cVar15;
  bool_conflict bVar16;
  System_Collections_Generic_List_string__o *__this_05;
  undefined8 *puVar17;
  Il2CppMethodPointer *ppIVar18;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Characters_TitanAttackInfo_o *__this_07;
  byte bVar19;
  byte bVar20;
  long lVar21;
  Characters_BaseCharacter_o *pCVar22;
  long lVar23;
  UnityEngine_Transform_o *pUVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o worldPosition;
  UnityEngine_Vector3_o relativePosition;
  UnityEngine_Vector3_o velocity;
  undefined1 in_stack_ffffffffffffff38 [15];
  bool_conflict bVar28;
  float fVar29;
  undefined1 auStack_98 [48];
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  System_String_o *pSStack_38;
  
  if (DAT_05703f6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_TitanAttackInfo_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapTargetable);
    DAT_05703f6a = '\x01';
  }
  auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_98._16_8_ = (InvokerMethod)0x0;
  __this_05 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
  plVar6 = *(long **)&(__this->fields)._rangedCooldownLeft;
  if (plVar6 == (long *)0x0) {
    return __this_05;
  }
  lVar23 = *plVar6;
  if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
    lVar21 = 0;
    do {
      if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
        puVar17 = (undefined8 *)
                  ((long)(*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar21) + 2) * 0x10 + lVar23 +
                  0x138);
        goto LAB_03f84879;
      }
      lVar21 = lVar21 + 0x10;
    } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar21);
  }
  puVar17 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_ITargetable,2);
LAB_03f84879:
  cVar15 = (*(code *)*puVar17)(plVar6,puVar17[1]);
  if (cVar15 == '\0') {
    return __this_05;
  }
  pCVar7 = (__this->fields)._titan;
  if (pCVar7 == (Characters_BaseTitan_o *)0x0) goto LAB_03f84f1a;
  cVar15 = (*(pCVar7->klass->vtable)._129_CanAttack.methodPtr)
                     (pCVar7,(pCVar7->klass->vtable)._129_CanAttack.method);
  if (cVar15 == '\0') {
    return __this_05;
  }
  plVar6 = *(long **)&(__this->fields)._rangedCooldownLeft;
  if (plVar6 == (long *)0x0) goto LAB_03f84f1a;
  lVar23 = *plVar6;
  if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
    lVar21 = 0;
    do {
      if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
        puVar17 = (undefined8 *)
                  (lVar23 + (long)(*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar21) + 1) * 0x10 +
                  0x138);
        goto LAB_03f84915;
      }
      lVar21 = lVar21 + 0x10;
    } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar21);
  }
  puVar17 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_ITargetable,1);
LAB_03f84915:
  uStack_68 = (Il2CppType **)(*(code *)*puVar17)(plVar6,puVar17[1]);
  fVar25 = in_XMM1_Da;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fdd15 = '\x01';
  }
  auStack_98._40_8_ = 0;
  auStack_98._32_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
  fVar29 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  pCVar8 = *(Characters_BaseCharacter_o **)&(__this->fields)._rangedCooldownLeft;
  bVar28 = farOnly;
  if (pCVar8 == (Characters_BaseCharacter_o *)0x0) {
    cVar15 = true;
    pCVar22 = (__this->fields)._character;
joined_r0x03f849aa:
    if (((pCVar22 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar23 = *(long *)&(pCVar22->fields).Dead, lVar23 == 0)) ||
       (pCVar8 == (Characters_BaseCharacter_o *)0x0)) goto LAB_03f84f1a;
    pUVar24 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
    pCVar9 = pCVar8->klass;
    uVar4._0_1_ = (pCVar9->_2).rank;
    uVar4._1_1_ = (pCVar9->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar10 = (pCVar9->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_ITargetable) {
          ppIVar18 = &(&(pCVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar23) + 1].
                      methodPtr;
          goto LAB_03f84b55;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar23);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pCVar8,TypeInfo_ITargetable,1);
LAB_03f84b55:
    uVar26 = (**ppIVar18)(pCVar8);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto LAB_03f84f1a;
    bVar13 = false;
  }
  else {
    pCVar9 = pCVar8->klass;
    bVar20 = (pCVar9->_2).naturalAligment;
    bVar19 = (TypeInfo_Human->_2).naturalAligment;
    if (bVar20 < bVar19) {
      pCVar22 = (Characters_BaseCharacter_o *)0x0;
    }
    else {
      pCVar22 = (Characters_BaseCharacter_o *)0x0;
      if ((pCVar9->_2).typeHierarchy[(ulong)bVar19 - 1] == TypeInfo_Human) {
        pCVar22 = pCVar8;
      }
    }
    bVar2 = (TypeInfo_MapTargetable->_2).naturalAligment;
    if (bVar20 < bVar2) {
      cVar15 = true;
    }
    else {
      cVar15 = (pCVar9->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapTargetable;
    }
    if (pCVar22 == (Characters_BaseCharacter_o *)0x0) {
      bVar19 = (TypeInfo_BaseTitan->_2).naturalAligment;
      if ((bVar20 < bVar19) || ((pCVar9->_2).typeHierarchy[(ulong)bVar19 - 1] != TypeInfo_BaseTitan)) {
        pCVar22 = (__this->fields)._character;
        goto joined_r0x03f849aa;
      }
      pCVar22 = (__this->fields)._character;
      if (((pCVar22 == (Characters_BaseCharacter_o *)0x0) ||
          (lVar23 = *(long *)&(pCVar22->fields).Dead, lVar23 == 0)) ||
         ((pSVar12 = (pCVar8->fields).OnPlayerPropertiesChanged,
          pSVar12 == (System_Action_Hashtable__o *)0x0 ||
          (__this_02 = (UnityEngine_Transform_o *)(pSVar12->fields).interp_invoke_impl,
          __this_02 == (UnityEngine_Transform_o *)0x0)))) goto LAB_03f84f1a;
      pUVar24 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
      bVar13 = false;
      UVar27 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      fVar25 = UVar27.fields.z;
      uVar26 = UVar27.fields._0_8_;
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto LAB_03f84f1a;
    }
    else {
      if ((bVar20 < bVar19) || ((pCVar9->_2).typeHierarchy[(ulong)bVar19 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pCVar8);
      }
      UVar27 = Characters_BaseCharacter__GetVelocity(pCVar8,(MethodInfo *)0x0);
      fVar25 = UVar27.fields.z;
      auStack_98._40_4_ = extraout_XMM0_Dc;
      auStack_98._32_8_ = UVar27.fields._0_8_;
      auStack_98._44_4_ = extraout_XMM0_Dd;
      pCVar8 = (__this->fields)._character;
      if (((pCVar8 == (Characters_BaseCharacter_o *)0x0) ||
          (lVar23 = *(long *)&(pCVar8->fields).Dead, lVar23 == 0)) ||
         (plVar6 = *(long **)&(__this->fields)._rangedCooldownLeft, plVar6 == (long *)0x0))
      goto LAB_03f84f1a;
      pUVar24 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
      lVar23 = *plVar6;
      bVar28 = farOnly;
      fVar29 = fVar25;
      if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
        lVar21 = 0;
        do {
          if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
            puVar17 = (undefined8 *)
                      (lVar23 + (long)(*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar21) + 1) * 0x10 +
                      0x138);
            goto LAB_03f84b82;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar21);
      }
      puVar17 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_ITargetable,1);
LAB_03f84b82:
      uVar26 = (*(code *)*puVar17)(plVar6);
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto LAB_03f84f1a;
      bVar13 = true;
    }
  }
  UVar27.fields.z = fVar25;
  UVar27.fields.x = (float)(int)uVar26;
  UVar27.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
  UVar27 = UnityEngine_Transform__InverseTransformPoint(pUVar24,UVar27,(MethodInfo *)0x0);
  relativePosition.fields.z = UVar27.fields.z;
  auStack_58._8_4_ = extraout_XMM0_Dc_00;
  auStack_58._0_8_ = UVar27.fields._0_8_;
  auStack_58._12_4_ = extraout_XMM0_Dd_00;
  __this_00 = (__this->fields)._moveToCallback;
  if (__this_00 != (System_Action_o *)0x0) {
    __this_06 = System_Collections_Generic_Dictionary<object__float>__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    if (__this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection<object__float>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 auStack_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      auStack_98._16_8_ = pSStack_38;
      auStack_98._0_8_ = auStack_48._0_8_;
      auStack_98._8_8_ = auStack_48._8_8_;
LAB_03f84c20:
      do {
        __this_03.fields._version._3_1_ = cVar15;
        __this_03.fields._0_15_ = in_stack_ffffffffffffff38;
        __this_03.fields._currentKey._0_4_ = bVar28;
        __this_03.fields._currentKey._4_4_ = fVar29;
        bVar16 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__float>__MoveNext
                           (__this_03,(MethodInfo_31D1960 *)auStack_98);
        uVar26 = auStack_98._16_8_;
        if ((char)bVar16 == '\0') {
          __this_04.fields._version._3_1_ = cVar15;
          __this_04.fields._0_15_ = in_stack_ffffffffffffff38;
          __this_04.fields._currentKey._0_4_ = bVar28;
          __this_04.fields._currentKey._4_4_ = fVar29;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__float>__Dispose
                    (__this_04,(MethodInfo_31D1950 *)auStack_98);
          return __this_05;
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).AttackGroups;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_07 = (Characters_TitanAttackInfo_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (__this_01,(Il2CppObject *)auStack_98._16_8_,MethodInfo_TitanAttackInfo_get_Item);
        auVar14 = auStack_58;
        if (cVar15 == '\0') goto LAB_03f84c90;
        if (__this_07 == (Characters_TitanAttackInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while ((char)(__this_07->fields).HumanOnly != '\0' && !bVar13);
      goto LAB_03f84c7a;
    }
  }
LAB_03f84f1a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03f84c90:
  if (__this_07 == (Characters_TitanAttackInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)((long)&(__this_07->fields).HumanOnly + 1) == '\0') goto LAB_03f84c20;
LAB_03f84c7a:
  cVar3 = *(char *)((long)&(__this_07->fields).HumanOnly + 2);
  if ((char)farOnly == '\0') {
    if (cVar3 == '\0') {
      bVar19 = 1;
      bVar20 = 1;
      cVar3 = *(char *)((long)&(__this_07->fields).HumanOnly + 3);
      goto joined_r0x03f84cf4;
    }
  }
  else if (cVar3 == '\0') goto LAB_03f84c20;
  bVar19 = 0;
  bVar20 = 0;
  if (0.0 < (__this->fields)._stateTimeLeft) goto LAB_03f84c20;
  cVar3 = *(char *)((long)&(__this_07->fields).HumanOnly + 3);
joined_r0x03f84cf4:
  if (cVar3 != '\0') {
    pCVar7 = (__this->fields)._titan;
    if (pCVar7 == (Characters_BaseTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar20 = bVar19;
    if (*(char *)((long)&(pCVar7->fields).AttackSpeeds + 4) != '\0') goto LAB_03f84c20;
  }
  if ((char)(__this_07->fields).MapObject != '\0') {
    pCVar7 = (__this->fields)._titan;
    if (pCVar7 == (Characters_BaseTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)((long)&(pCVar7->fields).AttackSpeeds + 5) != '\0') goto LAB_03f84c20;
  }
  if ((((bool)(bVar20 & bVar13)) && ((char)(__this->fields).SmartAttack != '\0')) &&
     (*(char *)&(__this_07->fields).MaxRange.fields.x != '\0')) {
    pCVar7 = (__this->fields)._titan;
    if (pCVar7 == (Characters_BaseTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar23 = *(long *)&(pCVar7->fields).Dead;
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar24 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
    fVar25 = Characters_BaseTitan__GetAttackSpeed
                       (pCVar7,(System_String_o *)uVar26,(MethodInfo *)0x0);
    auVar14 = auStack_98._32_16_;
    pCVar7 = (__this->fields)._titan;
    if (pCVar7 == (Characters_BaseTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    worldPosition.fields.z = in_XMM1_Da;
    worldPosition.fields._0_8_ = uStack_68;
    velocity.fields.z = fVar29;
    velocity.fields.x = (float)auStack_98._32_4_;
    velocity.fields.y = (float)auStack_98._36_4_;
    farOnly = bVar28;
    auStack_98._32_16_ = auVar14;
    bVar16 = Characters_TitanAttackInfo__CheckSmartAttack
                       (__this_07,pUVar24,worldPosition,velocity,fVar25,
                        *(float *)((long)&(pCVar7->fields).TitanColliderToggler + 4),
                        (MethodInfo *)0x0);
    lVar23 = MethodInfo_Void_Add;
    bVar28 = farOnly;
    if ((char)bVar16 != '\0') {
      if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar11 = (__this_05->fields)._items;
      if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = (__this_05->fields)._size;
      if (uVar5 < (uint)pSVar11->max_length) {
        (__this_05->fields)._size = uVar5 + 1;
        pSVar11->m_Items[(int)uVar5] = (System_String_o *)uVar26;
        il2cpp_runtime_glue(pSVar11->m_Items + (int)uVar5,uVar26);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)uVar26,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  else {
    relativePosition.fields.x = (float)auStack_58._0_4_;
    relativePosition.fields.y = (float)auStack_58._4_4_;
    auStack_58 = auVar14;
    bVar16 = Characters_TitanAttackInfo__CheckSimpleAttack
                       (__this_07,relativePosition,(MethodInfo *)0x0);
    lVar23 = MethodInfo_Void_Add;
    if ((char)bVar16 != '\0') {
      if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar11 = (__this_05->fields)._items;
      if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = (__this_05->fields)._size;
      if (uVar5 < (uint)pSVar11->max_length) {
        (__this_05->fields)._size = uVar5 + 1;
        pSVar11->m_Items[(int)uVar5] = (System_String_o *)uVar26;
        il2cpp_runtime_glue(pSVar11->m_Items + (int)uVar5,uVar26);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)uVar26,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_03f84c20;
}


// Controllers.BaseTitanAIController$$.ctor
// il2cpp: void Controllers_BaseTitanAIController___ctor (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x3f850b0

/* WARNING: Type propagation algorithm not settling */

void Controllers_BaseTitanAIController___ctor
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Action_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Int32_array *layers;
  
  if (DAT_05703f6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05703f6b = '\x01';
  }
  __this_00 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._moveToCallback = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._moveToCallback,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields).AttackChances =
       (System_Collections_Generic_Dictionary_string__float__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields).AttackChances,__this_01);
  *(undefined2 *)&(__this->fields)._waitAttackTimeLeft = 0x101;
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x38);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x34);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x50);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x3c);
            UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
            ((UnityEngine_LayerMask_Fields *)((long)&(__this->fields)._agent + 4))->m_Mask =
                 (int32_t)UVar3.fields.m_Mask;
            UnityEngine_MonoBehaviour___ctor
                      ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


