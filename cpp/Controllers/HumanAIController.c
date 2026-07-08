// Type: Controllers.HumanAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/HumanAIController.cs
// Prior source: NEW in this update
// --------------------------------

// Controllers.HumanAIController$$get_Target
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__get_Target (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f87020

Characters_ITargetable_o *
Controllers_HumanAIController__get_Target
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return *(Characters_ITargetable_o **)&(__this->fields)._hookingRight;
}


// Controllers.HumanAIController$$set_Target
// il2cpp: void Controllers_HumanAIController__set_Target (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* value, const MethodInfo* method);
// 0x3f87030

/* WARNING: Type propagation algorithm not settling */

void Controllers_HumanAIController__set_Target
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *value,
               MethodInfo *method)

{
  bool_conflict *pbVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  System_Nullable_Vector3__o *pSVar5;
  undefined8 *puVar6;
  MethodInfo *extraout_RDX;
  long lVar7;
  long *plVar8;
  ulong in_XMM1_Qa;
  UnityEngine_Vector3_o value_00;
  System_Nullable_Vector3__o __this_00;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_05703f7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    DAT_05703f7a = '\x01';
    method = extraout_RDX;
  }
  pbVar1 = &(__this->fields)._hookingRight;
  *(Characters_ITargetable_o **)&(__this->fields)._hookingRight = value;
  il2cpp_runtime_glue(pbVar1,value,method);
  plVar8 = *(long **)&(__this->fields)._hookingRight;
  if (plVar8 != (long *)0x0) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
      plVar8 = *(long **)pbVar1;
    }
    uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pSVar5 = &(__this->fields)._targetLastPosition;
    (pSVar5->fields).value.fields.y = (float)(int)uVar3;
    (pSVar5->fields).value.fields.z = (float)(int)((ulong)uVar3 >> 0x20);
    (__this->fields).TargetVelocity.fields.x = fVar2;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar7) == TypeInfo_ITargetable) {
          puVar6 = (undefined8 *)
                   (lVar4 + (long)(*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar7) + 1) * 0x10 + 0x138
                   );
          goto LAB_03f87135;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar7);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_ITargetable,1);
LAB_03f87135:
    uVar3 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    local_38 = 0;
    uStack_30 = 0;
    value_00.fields.z = 0.0;
    value_00.fields.x = (float)(int)in_XMM1_Qa;
    value_00.fields.y = (float)(int)(in_XMM1_Qa >> 0x20);
    __this_00.fields.value.fields.y = (float)(int)uVar3;
    __this_00.fields.value.fields.z = (float)(int)((ulong)uVar3 >> 0x20);
    __this_00.fields._0_8_ = &local_38;
    System_Nullable<Vector3>___ctor(__this_00,value_00,MethodInfo_Nullable_1_UnityEngine_Vector3);
    (__this->fields).TargetDirection.fields.y = (float)(undefined4)local_38;
    (__this->fields).TargetDirection.fields.z = (float)local_38._4_4_;
    (__this->fields)._targetLastPosition.fields.hasValue = (undefined4)uStack_30;
    (__this->fields)._targetLastPosition.fields.value.fields.x = (float)uStack_30._4_4_;
  }
  return;
}


// Controllers.HumanAIController$$Awake
// il2cpp: void Controllers_HumanAIController__Awake (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f87180

void Controllers_HumanAIController__Awake
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o **ppCVar1;
  char cVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_AI_NavMeshHit_o __this_00;
  bool_conflict bVar5;
  Characters_BaseCharacter_o *pCVar6;
  Characters_Human_o *pCVar7;
  UnityEngine_Vector3_o UVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppMethodPointer pIVar10;
  InvokerMethod pIVar11;
  char *pcVar12;
  int32_t iVar13;
  
  if (DAT_05703f7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05703f7b = '\x01';
  }
  pIVar11 = (InvokerMethod)0x0;
  pcVar12 = (char *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  iVar13 = 0;
  if (DAT_05703f54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    DAT_05703f54 = '\x01';
  }
  pCVar6 = (Characters_BaseCharacter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar6;
  il2cpp_runtime_glue(&(__this->fields)._character,pCVar6);
  pCVar7 = (Characters_Human_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Human_GetComponent_Human);
  ppCVar1 = &(__this->fields)._human;
  (__this->fields)._human = pCVar7;
  il2cpp_runtime_glue(ppCVar1);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0xa8), lVar3 != 0)) {
    cVar2 = *(char *)(lVar3 + 0x11);
    *(char *)&(__this->fields).AIStates = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    if (((*ppCVar1 != (Characters_Human_o *)0x0) &&
        (lVar3 = *(long *)&((*ppCVar1)->fields).Dead, lVar3 != 0)) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      bVar5 = UnityEngine_AI_NavMesh__SamplePosition
                        (UVar8,(UnityEngine_AI_NavMeshHit_o *)&stack0xffffffffffffffc8,100.0,-1,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      if ((*ppCVar1 != (Characters_Human_o *)0x0) &&
         (lVar3 = *(long *)&((*ppCVar1)->fields).Dead, lVar3 != 0)) {
        pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        __this_00.fields._8_8_ = pIVar10;
        __this_00.fields.m_Position.fields._0_8_ = pIVar9;
        __this_00.fields.m_Normal.fields._4_8_ = pIVar11;
        __this_00.fields._24_8_ = pcVar12;
        __this_00.fields.m_Hit = iVar13;
        UVar8 = UnityEngine_AI_NavMeshHit__get_position
                          (__this_00,(MethodInfo *)&stack0xffffffffffffffc8);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(pUVar4,UVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$Start
// il2cpp: void Controllers_HumanAIController__Start (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f872f0

void Controllers_HumanAIController__Start
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_AI_NavMeshAgent_o *pUVar5;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_AI_NavMeshHit_o __this_02;
  UnityEngine_AI_NavMeshBuildSettings_o __this_03;
  UnityEngine_AI_NavMeshBuildSettings_o __this_04;
  UnityEngine_AI_NavMeshBuildSettings_o __this_05;
  bool_conflict bVar6;
  int32_t value;
  Controllers_HumanAIStates_MoveTo_o *__this_06;
  Il2CppObject *value_00;
  UnityEngine_GameObject_o *__this_07;
  Il2CppObject *pIVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  undefined1 in_stack_ffffffffffffff08 [12];
  float in_stack_ffffffffffffff14;
  float in_stack_ffffffffffffff18;
  float in_stack_ffffffffffffff1c;
  undefined4 in_stack_ffffffffffffff20;
  undefined4 in_stack_ffffffffffffff24;
  int32_t iVar16;
  Il2CppMethodPointer pIVar17;
  InvokerMethod pIVar18;
  char *pcVar19;
  _union_14 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  float local_68;
  float fStack_64;
  undefined1 local_58 [16];
  InvokerMethod local_48;
  char *pcStack_40;
  
  if (DAT_05703f7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
    il2cpp_init_method_metadata(&TypeInfo_MoveTo);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"MoveTo");
    DAT_05703f7c = '\x01';
  }
  local_88._0_2_ = 0;
  local_88._2_1_ = '\0';
  local_88._3_1_ = '\0';
  local_88._4_4_ = 0;
  uStack_80 = 0;
  local_98.genericMethod = (void *)0x0;
  uStack_90._0_4_ = 0;
  uStack_90._4_2_ = 0;
  uStack_90._6_2_ = 0;
  local_78 = 0;
  iVar16 = 0;
  __this_06 = (Controllers_HumanAIStates_MoveTo_o *)il2cpp_runtime_glue(TypeInfo_MoveTo);
  Controllers_HumanAIStates_MoveTo___ctor(__this_06,(MethodInfo *)0x0);
  if (__this_06 != (Controllers_HumanAIStates_MoveTo_o *)0x0) {
    value_00 = (Il2CppObject *)
               (*(__this_06->klass->vtable)._5_Init.methodPtr)
                         (__this_06,(__this->fields)._human,
                          (__this_06->klass->vtable)._5_Init.method);
    pIVar7 = "MoveTo";
    if (DAT_05703f8a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
      DAT_05703f8a = '\x01';
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).Callbacks;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this_00,pIVar7,value_00,MethodInfo_Void_set_Item);
      if (*(char *)&(__this->fields).AIStates == '\0') {
        return;
      }
      pCVar2 = (__this->fields)._human;
      if (((pCVar2 != (Characters_Human_o *)0x0) &&
          (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
         (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        UVar15 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
        bVar6 = UnityEngine_AI_NavMesh__SamplePosition
                          (UVar15,(UnityEngine_AI_NavMeshHit_o *)&local_98,100.0,-1,
                           (MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pCVar2 = (__this->fields)._human;
          if ((pCVar2 == (Characters_Human_o *)0x0) ||
             (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) goto LAB_03f87756;
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          __this_02.fields.m_Normal.fields.x = in_stack_ffffffffffffff14;
          __this_02.fields.m_Position.fields.x = (float)in_stack_ffffffffffffff08._0_4_;
          __this_02.fields.m_Position.fields.y = (float)in_stack_ffffffffffffff08._4_4_;
          __this_02.fields.m_Position.fields.z = (float)in_stack_ffffffffffffff08._8_4_;
          __this_02.fields.m_Normal.fields.y = in_stack_ffffffffffffff18;
          __this_02.fields.m_Normal.fields.z = in_stack_ffffffffffffff1c;
          __this_02.fields.m_Distance = (float)in_stack_ffffffffffffff20;
          __this_02.fields.m_Mask = in_stack_ffffffffffffff24;
          __this_02.fields.m_Hit = iVar16;
          UVar15 = UnityEngine_AI_NavMeshHit__get_position(__this_02,(MethodInfo *)&local_98);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03f87756;
          UnityEngine_Transform__set_position(pUVar4,UVar15,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_Util__GetAgentSettingsCorrected
                  ((UnityEngine_AI_NavMeshBuildSettings_o *)local_58,1.0,(MethodInfo *)0x0);
        iVar16 = (int32_t)local_58._0_8_;
        fVar8 = SUB84(local_58._0_8_,4);
        __this_07 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_07 != (UnityEngine_GameObject_o *)0x0) {
          pIVar7 = UnityEngine_GameObject__AddComponent<object>(__this_07,MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
          pbVar1 = &(__this->fields)._usePathfinding;
          *(Il2CppObject **)&(__this->fields)._usePathfinding = pIVar7;
          il2cpp_runtime_glue(pbVar1,pIVar7);
          pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
          __this_03.fields.m_AgentSlope = in_stack_ffffffffffffff14;
          __this_03.fields.m_AgentTypeID = in_stack_ffffffffffffff08._0_4_;
          __this_03.fields.m_AgentRadius = (float)in_stack_ffffffffffffff08._4_4_;
          __this_03.fields.m_AgentHeight = (float)in_stack_ffffffffffffff08._8_4_;
          __this_03.fields.m_AgentClimb = in_stack_ffffffffffffff18;
          __this_03.fields.m_LedgeDropHeight = in_stack_ffffffffffffff1c;
          __this_03.fields.m_MaxJumpAcrossDistance = (float)in_stack_ffffffffffffff20;
          __this_03.fields.m_MinRegionArea = (float)in_stack_ffffffffffffff24;
          __this_03.fields.m_OverrideVoxelSize = iVar16;
          __this_03.fields.m_VoxelSize = fVar8;
          __this_03.fields._40_8_ = local_58._8_8_;
          __this_03.fields._48_8_ = local_48;
          __this_03.fields._56_8_ = pcStack_40;
          value = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                            (__this_03,(MethodInfo *)&stack0xffffffffffffff28);
          if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            UnityEngine_AI_NavMeshAgent__set_agentTypeID(pUVar5,value,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._human;
            if (((pCVar2 != (Characters_Human_o *)0x0) &&
                (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
               (__this_01 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),
               __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
              pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
              UVar15 = UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
              fVar12 = UVar15.fields.z;
              fVar13 = UVar15.fields.x;
              fVar9 = UVar15.fields.y;
              uVar10 = extraout_XMM0_Dc;
              uVar11 = extraout_XMM0_Dd;
              pIVar17 = (Il2CppMethodPointer)local_58._8_8_;
              pIVar18 = local_48;
              pcVar19 = pcStack_40;
              if (DAT_056fde1c == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Math);
                DAT_056fde1c = '\x01';
                in_stack_ffffffffffffff14 = fVar12;
                in_stack_ffffffffffffff18 = fVar13;
                in_stack_ffffffffffffff1c = fVar9;
                in_stack_ffffffffffffff20 = uVar10;
                in_stack_ffffffffffffff24 = uVar11;
                pIVar17 = (Il2CppMethodPointer)local_58._8_8_;
                pIVar18 = local_48;
                pcVar19 = pcStack_40;
              }
              fVar14 = fVar9;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                local_68 = fVar9;
                fStack_64 = fVar9;
                il2cpp_init_class();
                fVar14 = local_68;
                in_stack_ffffffffffffff14 = fVar12;
                in_stack_ffffffffffffff18 = fVar13;
                in_stack_ffffffffffffff1c = fVar9;
                in_stack_ffffffffffffff20 = uVar10;
                in_stack_ffffffffffffff24 = uVar11;
              }
              fVar13 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
              if (fVar13 < 0.0) {
                fVar13 = sqrtf(fVar13);
              }
              else {
                fVar13 = SQRT(fVar13);
              }
              if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                UnityEngine_AI_NavMeshAgent__set_speed(pUVar5,fVar13,(MethodInfo *)0x0);
                if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                    (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_angularSpeed
                            (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,10.0,(MethodInfo *)0x0);
                  if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                      (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                    UnityEngine_AI_NavMeshAgent__set_acceleration
                              (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,100.0,(MethodInfo *)0x0);
                    if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      UnityEngine_AI_NavMeshAgent__set_autoRepath
                                (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,1,(MethodInfo *)0x0);
                      if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                          (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        UnityEngine_AI_NavMeshAgent__set_stoppingDistance
                                  (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,1.1,(MethodInfo *)0x0);
                        if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                            (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                          UnityEngine_AI_NavMeshAgent__set_autoBraking
                                    (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,(MethodInfo *)0x0);
                          pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)pbVar1;
                          __this_04.fields.m_AgentSlope = in_stack_ffffffffffffff14;
                          __this_04.fields.m_AgentTypeID = in_stack_ffffffffffffff08._0_4_;
                          __this_04.fields.m_AgentRadius = (float)in_stack_ffffffffffffff08._4_4_;
                          __this_04.fields.m_AgentHeight = (float)in_stack_ffffffffffffff08._8_4_;
                          __this_04.fields.m_AgentClimb = in_stack_ffffffffffffff18;
                          __this_04.fields.m_LedgeDropHeight = in_stack_ffffffffffffff1c;
                          __this_04.fields.m_MaxJumpAcrossDistance =
                               (float)in_stack_ffffffffffffff20;
                          __this_04.fields.m_MinRegionArea = (float)in_stack_ffffffffffffff24;
                          __this_04.fields.m_OverrideVoxelSize = iVar16;
                          __this_04.fields.m_VoxelSize = fVar8;
                          __this_04.fields._40_8_ = pIVar17;
                          __this_04.fields._48_8_ = pIVar18;
                          __this_04.fields._56_8_ = pcVar19;
                          fVar13 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                                             (__this_04,(MethodInfo *)&stack0xffffffffffffff28);
                          if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            UnityEngine_AI_NavMeshAgent__set_radius(pUVar5,fVar13,(MethodInfo *)0x0)
                            ;
                            pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)pbVar1;
                            __this_05.fields.m_AgentSlope = in_stack_ffffffffffffff14;
                            __this_05.fields.m_AgentTypeID = in_stack_ffffffffffffff08._0_4_;
                            __this_05.fields.m_AgentRadius = (float)in_stack_ffffffffffffff08._4_4_;
                            __this_05.fields.m_AgentHeight = (float)in_stack_ffffffffffffff08._8_4_;
                            __this_05.fields.m_AgentClimb = in_stack_ffffffffffffff18;
                            __this_05.fields.m_LedgeDropHeight = in_stack_ffffffffffffff1c;
                            __this_05.fields.m_MaxJumpAcrossDistance =
                                 (float)in_stack_ffffffffffffff20;
                            __this_05.fields.m_MinRegionArea = (float)in_stack_ffffffffffffff24;
                            __this_05.fields.m_OverrideVoxelSize = iVar16;
                            __this_05.fields.m_VoxelSize = fVar8;
                            __this_05.fields._40_8_ = pIVar17;
                            __this_05.fields._48_8_ = pIVar18;
                            __this_05.fields._56_8_ = pcVar19;
                            fVar8 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                                              (__this_05,(MethodInfo *)&stack0xffffffffffffff28);
                            if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              UnityEngine_AI_NavMeshAgent__set_height
                                        (pUVar5,fVar8,(MethodInfo *)0x0);
                              if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                  (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                UnityEngine_AI_NavMeshAgent__set_updatePosition
                                          (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,
                                           (MethodInfo *)0x0);
                                if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                    (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                  UnityEngine_AI_NavMeshAgent__set_updateRotation
                                            (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,
                                             (MethodInfo *)0x0);
                                  if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                      (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                    UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                                              (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,2,
                                               (MethodInfo *)0x0);
                                    if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                      UnityEngine_AI_NavMeshAgent__set_avoidancePriority
                                                (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,
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
LAB_03f87756:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$BeforeFixedUpdate
// il2cpp: void Controllers_HumanAIController__BeforeFixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f877c0

void Controllers_HumanAIController__BeforeFixedUpdate
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  Characters_Human_o *pCVar4;
  UnityEngine_Component_o *__this_00;
  undefined8 *puVar5;
  UnityEngine_Transform_o *pUVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  Characters_ITargetable_o *pCVar10;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (DAT_05703f7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata();
    DAT_05703f7d = '\x01';
  }
  plVar2 = *(long **)&(__this->fields)._hookingRight;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if ((*(byte *)(lVar3 + 0x130) < *(byte *)(TypeInfo_BaseTitan + 0x130)) ||
       (*(long *)(*(long *)(lVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseTitan + 0x130) * 8) !=
        TypeInfo_BaseTitan)) {
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar7 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar7) == TypeInfo_ITargetable) {
            puVar5 = (undefined8 *)
                     (lVar3 + (long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar7) + 1) * 0x10 +
                     0x138);
            goto LAB_03f87895;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar7);
      }
      puVar5 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_ITargetable,1);
LAB_03f87895:
      pCVar10 = (Characters_ITargetable_o *)(*(code *)*puVar5)(plVar2);
      (__this->fields)._target = pCVar10;
      (__this->fields).TargetPosition.fields.x = in_XMM1_Da;
      pCVar4 = (__this->fields)._human;
    }
    else {
      if ((plVar2[0x1f] == 0) ||
         (__this_00 = *(UnityEngine_Component_o **)(plVar2[0x1f] + 0x68),
         __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_03f87aa4;
      bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CapsuleCollider)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      pUVar6 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f87aa4;
      UVar11 = UnityEngine_Transform__get_lossyScale(pUVar6,(MethodInfo *)0x0);
      fVar8 = UnityEngine_CapsuleCollider__get_radius
                        ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f87aa4;
      UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f87aa4;
      UVar13 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f87aa4;
      local_28 = UVar11.fields.x;
      fStack_24 = UVar11.fields.y;
      if (local_28 <= fStack_24) {
        local_28 = fStack_24;
      }
      fVar9 = fVar8 * local_28 * 1.5;
      local_38 = UVar13.fields.x;
      fStack_34 = UVar13.fields.y;
      local_48 = UVar12.fields.x;
      fStack_44 = UVar12.fields.y;
      UVar11 = UnityEngine_Transform__get_up(pUVar6,(MethodInfo *)0x0);
      fVar8 = fVar8 * local_28 * 0.5;
      (__this->fields)._target =
           (Characters_ITargetable_o *)
           CONCAT44(fVar8 * UVar11.fields.y + (fStack_44 - fVar9 * fStack_34),
                    fVar8 * UVar11.fields.x + (local_48 - fVar9 * local_38));
      (__this->fields).TargetPosition.fields.x =
           fVar8 * UVar11.fields.z + (UVar12.fields.z - fVar9 * UVar13.fields.z);
      if ((Characters_TitanColliderToggler_o *)plVar2[0x20] ==
          (Characters_TitanColliderToggler_o *)0x0) goto LAB_03f87aa4;
      Characters_TitanColliderToggler__RegisterLook
                ((Characters_TitanColliderToggler_o *)plVar2[0x20],(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._target;
      in_XMM1_Da = (__this->fields).TargetPosition.fields.x;
      pCVar4 = (__this->fields)._human;
    }
    if (((pCVar4 == (Characters_Human_o *)0x0) ||
        (lVar3 = *(long *)&(pCVar4->fields).Dead, lVar3 == 0)) ||
       (pUVar6 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) {
LAB_03f87aa4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar11 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    (__this->fields).TargetPosition.fields.y = SUB84(pCVar10,0) - UVar11.fields.x;
    (__this->fields).TargetPosition.fields.z = (float)((ulong)pCVar10 >> 0x20) - UVar11.fields.y;
    (__this->fields).TargetDirection.fields.x = in_XMM1_Da - UVar11.fields.z;
  }
  return;
}


// Controllers.HumanAIController$$FindNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__FindNearestEnemy (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f87ac0

Characters_ITargetable_o *
Controllers_HumanAIController__FindNearestEnemy
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *pCVar2;
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
  
  if (DAT_05703f7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapTargetable_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapTargetable__GetEnume);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703f7e = '\x01';
  }
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_Threading_CancellationTokenSource_o *)0x0;
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 == (Characters_Human_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f87ec8;
  UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  local_68 = UVar13.fields.z;
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 == (Characters_Human_o *)0x0) ||
     (pCVar4 = (pCVar2->fields).MovementSync, pCVar4 == (Characters_BaseMovementSync_o *)0x0))
  goto LAB_03f87ec8;
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
LAB_03f87bf2:
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
joined_r0x03f87c03:
    fVar9 = INFINITY;
    x = (System_Threading_CancellationTokenSource_o *)0x0;
  }
  else {
    if (x == (System_Threading_CancellationTokenSource_o *)0x0) goto LAB_03f87ec8;
    if ((char)x[1].fields._disposed != '\0') goto LAB_03f87bf2;
    pSVar5 = x[1].fields._executingCallback;
    if ((pSVar5 == (System_Threading_CancellationCallbackInfo_o *)0x0) ||
       (__this_02 = (pSVar5->fields).Callback, __this_02 == (System_Action_object__o *)0x0))
    goto LAB_03f87ec8;
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
      goto joined_r0x03f87c03;
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
LAB_03f87c80:
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
      if (fVar7 < 0.0) goto LAB_03f87d4b;
      fVar7 = SQRT(fVar7);
    } while (fVar9 <= fVar7);
    goto LAB_03f87c70;
  }
LAB_03f87ec8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03f87d4b:
  fVar7 = sqrtf(fVar7);
  if (fVar7 < fVar9) {
LAB_03f87c70:
    if (fVar7 < (__this->fields).DetectRange) {
      x = __this_05;
      fVar9 = fVar7;
    }
  }
  goto LAB_03f87c80;
}


// Controllers.HumanAIController$$FixedUpdateTargetStatus
// il2cpp: void Controllers_HumanAIController__FixedUpdateTargetStatus (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f87f60

/* WARNING: Type propagation algorithm not settling */

void Controllers_HumanAIController__FixedUpdateTargetStatus
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  System_Nullable_Vector3__o *pSVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar10;
  ulong in_XMM1_Qa;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_00;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (DAT_05703f7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata();
    DAT_05703f7f = '\x01';
  }
  plVar3 = *(long **)&(__this->fields)._hookingRight;
  if (plVar3 == (long *)0x0) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pSVar6 = &(__this->fields)._targetLastPosition;
    (pSVar6->fields).value.fields.y = (float)(int)uVar2;
    (pSVar6->fields).value.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
    (__this->fields).TargetVelocity.fields.x = fVar10;
    (__this->fields).TargetDirection.fields.y = 0.0;
    (__this->fields).TargetDirection.fields.z = 0.0;
    (__this->fields)._targetLastPosition.fields.hasValue = 0;
    (__this->fields)._targetLastPosition.fields.value.fields.x = 0.0;
    return;
  }
  lVar4 = *plVar3;
  if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
    lVar8 = 0;
    do {
      if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar8) == TypeInfo_ITargetable) {
        puVar7 = (undefined8 *)
                 (lVar4 + (long)(*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar8) + 1) * 0x10 + 0x138);
        goto LAB_03f88066;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar8);
  }
  puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_ITargetable,1);
LAB_03f88066:
  __this_00.fields.value.fields._4_8_ = (*(code *)*puVar7)(plVar3,puVar7[1]);
  fVar10 = (float)in_XMM1_Qa;
  if (*(char *)&(__this->fields).TargetDirection.fields.y == '\0') {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      in_XMM1_Qa = in_XMM1_Qa & 0xffffffff;
      DAT_056fdd15 = '\x01';
    }
    uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pSVar6 = &(__this->fields)._targetLastPosition;
    (pSVar6->fields).value.fields.y = (float)(int)uVar2;
    (pSVar6->fields).value.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
    (__this->fields).TargetVelocity.fields.x = fVar10;
  }
  else {
    uVar2 = *(undefined8 *)&(__this->fields).TargetDirection.fields.z;
    local_28 = (float)__this_00.fields.value.fields._4_8_ - (float)uVar2;
    fStack_24 = (float)((ulong)__this_00.fields.value.fields._4_8_ >> 0x20) -
                (float)((ulong)uVar2 >> 0x20);
    fStack_20 = extraout_XMM0_Dc - 0.0;
    fStack_1c = extraout_XMM0_Dd - 0.0;
    fVar1 = (__this->fields)._targetLastPosition.fields.value.fields.x;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Qa = in_XMM1_Qa & 0xffffffff;
    auVar5._4_4_ = fStack_24;
    auVar5._0_4_ = local_28;
    auVar5._8_4_ = fStack_20;
    auVar5._12_4_ = fStack_1c;
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = fVar9;
    auVar11._8_4_ = extraout_XMM0_Dc_00;
    auVar11._12_4_ = extraout_XMM0_Dd_00;
    auVar11 = divps(auVar5,auVar11);
    pSVar6 = &(__this->fields)._targetLastPosition;
    (pSVar6->fields).value.fields.y = (float)(int)auVar11._0_8_;
    (pSVar6->fields).value.fields.z = (float)(int)((ulong)auVar11._0_8_ >> 0x20);
    (__this->fields).TargetVelocity.fields.x = (fVar10 - fVar1) / fVar9;
  }
  local_38 = 0;
  uStack_30 = 0;
  value.fields.z = (float)__this_00.fields.value.fields._4_8_;
  value.fields.x = (float)(int)in_XMM1_Qa;
  value.fields.y = (float)(int)(in_XMM1_Qa >> 0x20);
  __this_00.fields._0_8_ = &local_38;
  System_Nullable<Vector3>___ctor(__this_00,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
  (__this->fields).TargetDirection.fields.y = (float)(undefined4)local_38;
  (__this->fields).TargetDirection.fields.z = (float)local_38._4_4_;
  (__this->fields)._targetLastPosition.fields.hasValue = (undefined4)uStack_30;
  (__this->fields)._targetLastPosition.fields.value.fields.x = (float)uStack_30._4_4_;
  return;
}


// Controllers.HumanAIController$$FixedUpdate
// il2cpp: void Controllers_HumanAIController__FixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88170

void Controllers_HumanAIController__FixedUpdate
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIState_o *pCVar2;
  Controllers_HumanAIController_o *pCVar3;
  long *plVar4;
  Controllers_HumanAIState_c *pCVar5;
  code *vtable_dispatch;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar6;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((char)(pCVar1->fields).AllowHorse == '\0') {
      return;
    }
    Controllers_HumanAIController__BeforeFixedUpdate(__this,method);
    Controllers_HumanAIController__FixedUpdateTargetStatus(__this,method);
    pCVar2 = (__this->fields).AIState;
    if (pCVar2 != (Controllers_HumanAIState_o *)0x0) {
      pCVar3 = (pCVar2->fields).Controller;
      uVar6 = extraout_RDX;
      if (pCVar3 != (Controllers_HumanAIController_o *)0x0) {
        (*(code *)(pCVar3->fields).m_CancellationTokenSource)
                  (*(undefined8 *)&(pCVar3->fields).AimDirection.fields.z,(pCVar3->fields)._human);
        uVar6 = extraout_RDX_00;
      }
      plVar4 = *(long **)&(__this->fields).TargetVelocity.fields.z;
      if (plVar4 == (long *)0x0) {
        pCVar2 = (__this->fields).AIState;
        if (pCVar2 == (Controllers_HumanAIState_o *)0x0) goto LAB_03f8822f;
        pCVar1 = (pCVar2->fields).Human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          uVar6._0_4_ = (pCVar1->fields).FootstepsEnabled;
          uVar6._4_4_ = (pCVar1->fields).SoundsEnabled;
          (*(code *)(pCVar1->fields).m_CancellationTokenSource)((pCVar1->fields).RichTextName,uVar6)
          ;
          uVar6 = extraout_RDX_02;
        }
        pCVar2 = (__this->fields).AIState;
      }
      else {
        (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        pCVar2 = (__this->fields).AIState;
        uVar6 = extraout_RDX_01;
      }
      if (pCVar2 != (Controllers_HumanAIState_o *)0x0) {
        pCVar5 = pCVar2[1].klass;
        if (pCVar5 == (Controllers_HumanAIState_c *)0x0) {
          return;
        }
        vtable_dispatch = (code *)(pCVar5->_1).namespaze;
        (*vtable_dispatch)
                  ((pCVar5->_1).element_class,*(undefined8 *)&(pCVar5->_1).byval_arg.bits,uVar6,
                   vtable_dispatch);
        return;
      }
    }
  }
LAB_03f8822f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$CanMove
// il2cpp: bool Controllers_HumanAIController__CanMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88240

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Controllers_HumanAIController__CanMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  Characters_Human_o *pCVar5;
  System_Action_Hashtable__o *pSVar6;
  System_Action_Hashtable__c *pSVar7;
  Characters_AnimationHandler_o *pCVar8;
  bool_conflict bVar9;
  undefined8 unaff_RBX;
  
  if (DAT_05703f80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DownStrikeSpecial);
    il2cpp_init_method_metadata(&TypeInfo_StockSpecial);
    il2cpp_init_method_metadata(&"jump");
    il2cpp_init_method_metadata(&"dash");
    DAT_05703f80 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) {
LAB_03f883b5:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)&(pCVar5->fields).FeedVictimName != '\0') {
    return 0;
  }
  iVar4 = (pCVar5->fields).FinishSetup;
  if (iVar4 == 0xf) {
    return 0;
  }
  if (*(int *)&(pCVar5->fields).Weapon != 1) {
    cVar1 = *(char *)((long)&(pCVar5->fields).Animation + 4);
    if ((iVar4 != 0) && (cVar1 != '\0')) {
      return 0;
    }
    if (cVar1 == '\0') {
      if (iVar4 == 8) {
        return 0;
      }
      if (iVar4 == 9) {
        pSVar6 = (pCVar5->fields).OnPlayerPropertiesChanged;
        if (pSVar6 == (System_Action_Hashtable__o *)0x0) {
          return 0;
        }
        pSVar7 = pSVar6->klass;
        bVar2 = (pSVar7->_2).naturalAligment;
        bVar3 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
        if ((bVar2 < bVar3) || ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_DownStrikeSpecial)) {
          bVar3 = (TypeInfo_StockSpecial->_2).naturalAligment;
          if (bVar2 < bVar3) {
            return 0;
          }
          if ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StockSpecial) {
            return 0;
          }
        }
      }
      pCVar8 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
      if (pCVar8 != (Characters_AnimationHandler_o *)0x0) {
        bVar9 = Characters_AnimationHandler__IsPlaying(pCVar8,"dash",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return 0;
        }
        pCVar5 = (__this->fields)._human;
        if ((pCVar5 != (Characters_Human_o *)0x0) &&
           (pCVar8 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS,
           pCVar8 != (Characters_AnimationHandler_o *)0x0)) {
          bVar9 = Characters_AnimationHandler__IsPlaying(pCVar8,"jump",(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            return 0;
          }
          pCVar5 = (__this->fields)._human;
          if (pCVar5 != (Characters_Human_o *)0x0) {
            unaff_RBX = 0;
            bVar9 = Characters_Human__IsFiringThunderspear(pCVar5,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return 0;
            }
            goto LAB_03f882cc;
          }
        }
      }
      goto LAB_03f883b5;
    }
  }
LAB_03f882cc:
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
}


// Controllers.HumanAIController$$IsSpin3Special
// il2cpp: bool Controllers_HumanAIController__IsSpin3Special (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f883c0

bool_conflict
Controllers_HumanAIController__IsSpin3Special
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  System_Action_Hashtable__c *pSVar4;
  
  if (DAT_05703f81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
    DAT_05703f81 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if (((pCVar2->fields).FinishSetup == 9) &&
       (pSVar3 = (pCVar2->fields).OnPlayerPropertiesChanged,
       pSVar3 != (System_Action_Hashtable__o *)0x0)) {
      pSVar4 = pSVar3->klass;
      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if (bVar1 <= (pSVar4->_2).naturalAligment) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)TypeInfo_Spin3Special >> 8),
                        (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$MovingLeft
// il2cpp: bool Controllers_HumanAIController__MovingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88440

bool_conflict
Controllers_HumanAIController__MovingLeft
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 in_EAX;
  
  pfVar1 = &(__this->fields)._movingLeft;
  return CONCAT31((int3)((uint)in_EAX >> 8),*pfVar1 <= 0.0 && *pfVar1 != 0.0);
}


// Controllers.HumanAIController$$MovingRight
// il2cpp: bool Controllers_HumanAIController__MovingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88450

bool_conflict
Controllers_HumanAIController__MovingRight
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),0.0 < (__this->fields)._movingLeft);
}


// Controllers.HumanAIController$$UsingGas
// il2cpp: bool Controllers_HumanAIController__UsingGas (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88460

bool_conflict
Controllers_HumanAIController__UsingGas(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._usingGas);
}


// Controllers.HumanAIController$$HookingLeft
// il2cpp: bool Controllers_HumanAIController__HookingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88470

bool_conflict
Controllers_HumanAIController__HookingLeft
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields)._usingGas + 1));
}


// Controllers.HumanAIController$$HookingRight
// il2cpp: bool Controllers_HumanAIController__HookingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88480

bool_conflict
Controllers_HumanAIController__HookingRight
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields)._usingGas + 2));
}


// Controllers.HumanAIController$$HookingBoth
// il2cpp: bool Controllers_HumanAIController__HookingBoth (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88490

bool_conflict
Controllers_HumanAIController__HookingBoth
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return 0;
}


// Controllers.HumanAIController$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__GetAimPoint (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f884a0

UnityEngine_Vector3_o
Controllers_HumanAIController__GetAimPoint
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).AimPoint.fields;
}


// Controllers.HumanAIController$$Move
// il2cpp: void Controllers_HumanAIController__Move (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o direction, const MethodInfo* method);
// 0x3f884b0

/* WARNING: Type propagation algorithm not settling */

void Controllers_HumanAIController__Move
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o direction,
               MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool_conflict bVar3;
  Characters_Human_o *pCVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_44;
  float fStack_34;
  
  method_00 = direction.fields._0_8_;
  fStack_34 = direction.fields.value.fields.x;
  if (DAT_05703f82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05703f82 = '\x01';
  }
  bVar3 = Controllers_HumanAIController__CanMove(__this,method_00);
  if ((char)bVar3 == '\0') {
    return;
  }
  if ((char)direction.fields.hasValue == '\0') {
    pCVar2 = (__this->fields)._character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f887d5;
    *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 0;
    pCVar4 = (__this->fields)._human;
    fVar5 = 0.0;
    if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03f887d5;
    goto LAB_03f886a1;
  }
  fStack_44 = direction.fields.value.fields.z;
  (__this->fields)._movingLeft =
       (__this->fields).AimDirection.fields.x * fStack_44 -
       (__this->fields).AimDirection.fields.z * fStack_34;
  pCVar2 = (__this->fields)._character;
  fVar5 = Controllers_BaseAIController__GetTargetAngle
                    ((Controllers_BaseAIController_o *)__this,direction.fields.value.fields,
                     method_00);
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f887d5;
  *(float *)&(pCVar2->fields).Detection = fVar5;
  pCVar2 = (__this->fields)._character;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f887d5;
  *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 1;
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  fVar7 = fStack_44 * fStack_44 + fStack_34 * fStack_34 + 0.0;
  if (fVar7 < 0.0) {
    fVar5 = sqrtf(fVar7);
    if (fVar5 <= 0.95) goto LAB_03f885d6;
LAB_03f886ce:
    fVar5 = 1.0;
LAB_03f886d6:
    pCVar4 = (__this->fields)._human;
  }
  else {
    if (0.95 < SQRT(fVar7)) goto LAB_03f886ce;
LAB_03f885d6:
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_03f885f3;
LAB_03f8874b:
      il2cpp_init_class();
      if (0.0 <= fVar7) goto LAB_03f885ff;
LAB_03f88760:
      fVar6 = sqrtf(fVar7);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_03f8874b;
LAB_03f885f3:
      if (fVar7 < 0.0) goto LAB_03f88760;
LAB_03f885ff:
      fVar6 = SQRT(fVar7);
    }
    fVar5 = 0.0;
    if (fVar6 < 0.25) goto LAB_03f886d6;
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if (fVar7 < 0.0) {
      fVar5 = sqrtf(fVar7);
      pCVar4 = (__this->fields)._human;
    }
    else {
      fVar5 = SQRT(fVar7);
      pCVar4 = (__this->fields)._human;
    }
  }
  if (pCVar4 == (Characters_Human_o *)0x0) {
LAB_03f887d5:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((((char)(pCVar4->fields).IsRefillable == '\0') || (*(int *)&(pCVar4->fields).Weapon != 0)) ||
      ((pCVar4->fields).FinishSetup != 0)) ||
     (*(char *)((long)&(pCVar4->fields).Animation + 4) == '\0')) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 0.25;
  }
  fVar5 = fVar5 * fVar7;
LAB_03f886a1:
  (pCVar4->fields).IsAttackableState = (bool_conflict)fVar5;
  return;
}


// Controllers.HumanAIController$$GetMovementScale
// il2cpp: float Controllers_HumanAIController__GetMovementScale (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88800

float Controllers_HumanAIController__GetMovementScale
                (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((((char)(pCVar1->fields).IsRefillable != '\0') && (*(int *)&(pCVar1->fields).Weapon == 0)) &&
      ((pCVar1->fields).FinishSetup == 0)) &&
     (*(char *)((long)&(pCVar1->fields).Animation + 4) != '\0')) {
    return 0.25;
  }
  return 1.0;
}


// Controllers.HumanAIController$$AimAt
// il2cpp: void Controllers_HumanAIController__AimAt (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o position, const MethodInfo* method);
// 0x3f88850

void Controllers_HumanAIController__AimAt
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o position,
               MethodInfo *method)

{
  float fVar1;
  Characters_Human_o *__this_00;
  undefined8 uVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  float fStack_34;
  float local_30;
  
  fStack_34 = position.fields.value.fields.x;
  local_30 = position.fields.value.fields.y;
  if (DAT_05703f83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05703f83 = '\x01';
  }
  if ((char)position.fields.hasValue != '\0') {
    (__this->fields).AimPoint.fields.x = (float)(int)position.fields.value.fields._0_8_;
    (__this->fields).AimPoint.fields.y =
         (float)(int)((ulong)position.fields.value.fields._0_8_ >> 0x20);
    (__this->fields).AimPoint.fields.z = position.fields.value.fields.z;
    __this_00 = (__this->fields)._human;
    if (__this_00 != (Characters_Human_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        (__this->fields).AimDirection.fields.x = fStack_34 - UVar3.fields.x;
        (__this->fields).AimDirection.fields.y = local_30 - UVar3.fields.y;
        (__this->fields).AimDirection.fields.z = position.fields.value.fields.z - UVar3.fields.z;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields).AimDirection.fields.x = (float)(int)uVar2;
  (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).AimDirection.fields.z = fVar1;
  return;
}


// Controllers.HumanAIController$$Jump
// il2cpp: void Controllers_HumanAIController__Jump (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88950

void Controllers_HumanAIController__Jump(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *pCVar2;
  Characters_Horse_o *__this_00;
  bool_conflict bVar3;
  
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03f889ad:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((*(char *)&(pCVar2->fields).FeedVictimName == '\0') && ((pCVar2->fields).FinishSetup != 0xf))
  {
    iVar1 = *(int *)&(pCVar2->fields).Weapon;
    if (iVar1 == 1) {
      __this_00 = (Characters_Horse_o *)(pCVar2->fields).HookLeft;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        Characters_Horse__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03f889ad;
    }
    if (iVar1 == 0) {
      bVar3 = Characters_Human__CanJump(pCVar2,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pCVar2 = (__this->fields)._human;
        if (pCVar2 != (Characters_Human_o *)0x0) {
          Characters_Human__Jump(pCVar2,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03f889ad;
      }
    }
  }
  return;
}


// Controllers.HumanAIController$$HorseMount
// il2cpp: void Controllers_HumanAIController__HorseMount (Controllers_HumanAIController_o* __this, bool mount, const MethodInfo* method);
// 0x3f889c0

void Controllers_HumanAIController__HorseMount
               (Controllers_HumanAIController_o *__this,bool_conflict mount,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_HookUseable_o *pCVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  Photon_Pun_PhotonView_o *__this_00;
  bool_conflict bVar7;
  System_Object_array *parameters;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float local_58;
  float fStack_54;
  
  if (DAT_05703f84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"UncarryRPC");
    DAT_05703f84 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f88c62;
  if ((*(char *)&(pCVar3->fields).FeedVictimName != '\0') ||
     (iVar1 = (pCVar3->fields).FinishSetup, iVar1 == 0xf)) {
    return;
  }
  iVar2 = *(int *)&(pCVar3->fields).Weapon;
  if ((iVar2 != 0) || ((char)mount == '\0')) {
    if (iVar1 != 0) {
      return;
    }
    if (iVar2 != 1) {
      return;
    }
    if ((char)mount != '\0') {
      return;
    }
    Characters_Human__Unmount(pCVar3,0,(MethodInfo *)0x0);
    return;
  }
  bVar7 = Characters_Human__CanJump(pCVar3,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pCVar3 = (__this->fields)._human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f88c62;
    pCVar4 = (pCVar3->fields).HookLeft;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 != '\0') {
      pCVar3 = (__this->fields)._human;
      if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f88c62;
      if (*(int *)&(pCVar3->fields).Weapon == 0) {
        pCVar4 = (pCVar3->fields).HookLeft;
        if (((pCVar4 == (Characters_HookUseable_o *)0x0) ||
            (lVar5 = *(long *)&pCVar4[1].fields, lVar5 == 0)) ||
           (pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
           pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f88c62;
        UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._human;
        if (((pCVar3 == (Characters_Human_o *)0x0) ||
            (lVar5 = *(long *)&(pCVar3->fields).Dead, lVar5 == 0)) ||
           (pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
           pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f88c62;
        UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        if (DAT_056fdea6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fdea6 = '\x01';
        }
        local_58 = UVar9.fields.x;
        fStack_54 = UVar9.fields.y;
        fStack_54 = fStack_54 - UVar10.fields.y;
        fVar8 = UVar9.fields.z - UVar10.fields.z;
        local_58 = local_58 - UVar10.fields.x;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar8 = local_58 * local_58 + fStack_54 * fStack_54 + fVar8 * fVar8;
        if (fVar8 < 0.0) {
          fVar8 = sqrtf(fVar8);
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        if (fVar8 < 15.0) {
          pCVar3 = (__this->fields)._human;
          if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f88c62;
          if (*(char *)((long)&(pCVar3->fields).Detection + 4) == '\0') {
            Characters_Human__MountHorse(pCVar3,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if (*(int *)((long)&(pCVar3->fields).Weapon + 4) != 1) {
      return;
    }
    lVar5 = *(long *)&(pCVar3->fields).Dead;
    if (lVar5 != 0) {
      __this_00 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03f88c62:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$Dodge
// il2cpp: void Controllers_HumanAIController__Dodge (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88c70

void Controllers_HumanAIController__Dodge
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  float targetAngle;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
LAB_03f88cc3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((*(char *)&(pCVar1->fields).FeedVictimName == '\0') && ((pCVar1->fields).FinishSetup != 0xf))
  {
    bVar2 = Characters_Human__CanJump(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        targetAngle = *(float *)&(pCVar1->fields).Detection;
        if (*(char *)((long)&(pCVar1->fields).Detection + 4) != '\0') {
          targetAngle = targetAngle + 180.0;
        }
        Characters_Human__Dodge(pCVar1,targetAngle,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03f88cc3;
    }
  }
  return;
}


// Controllers.HumanAIController$$Reload
// il2cpp: void Controllers_HumanAIController__Reload (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88cd0

void Controllers_HumanAIController__Reload
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((*(char *)&(__this_00->fields).FeedVictimName == '\0') &&
     (iVar1 = (__this_00->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(__this_00->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) &&
         (*(char *)((long)&(__this_00->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto LAB_03f88cfe;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
LAB_03f88cfe:
      Characters_Human__Reload(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$UseGas
// il2cpp: void Controllers_HumanAIController__UseGas (Controllers_HumanAIController_o* __this, bool useGas, const MethodInfo* method);
// 0x3f88d20

void Controllers_HumanAIController__UseGas
               (Controllers_HumanAIController_o *__this,bool_conflict useGas,MethodInfo *method)

{
  *(char *)&(__this->fields)._usingGas = (char)useGas;
  return;
}


// Controllers.HumanAIController$$HorseWalk
// il2cpp: void Controllers_HumanAIController__HorseWalk (Controllers_HumanAIController_o* __this, bool isWalk, const MethodInfo* method);
// 0x3f88d30

void Controllers_HumanAIController__HorseWalk
               (Controllers_HumanAIController_o *__this,bool_conflict isWalk,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    *(char *)&(pCVar1->fields).IsRefillable = (char)isWalk;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$Dash
// il2cpp: void Controllers_HumanAIController__Dash (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x3f88d50

void Controllers_HumanAIController__Dash
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o direction,
               MethodInfo *method)

{
  uint uVar1;
  Characters_Human_o *__this_00;
  float targetAngle;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((((*(char *)((long)&(__this_00->fields).Animation + 4) == '\0') &&
       (uVar1 = (__this_00->fields).FinishSetup, uVar1 != 3)) && (uVar1 != 7)) &&
     ((((*(int *)&(__this_00->fields).Weapon == 0 &&
        (*(int *)((long)&(__this_00->fields).Weapon + 4) != 1)) &&
       ((0xf < uVar1 || ((0x8500U >> (uVar1 & 0x1f) & 1) == 0)))) &&
      (*(char *)&(__this_00->fields).FeedVictimName == '\0')))) {
    targetAngle = Controllers_BaseAIController__GetTargetAngle
                            ((Controllers_BaseAIController_o *)__this,direction,method);
    Characters_Human__DashVertical
              (__this_00,targetAngle,direction,(System_Nullable_Vector3__o)ZEXT816(0),
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.HumanAIController$$Reel
// il2cpp: void Controllers_HumanAIController__Reel (Controllers_HumanAIController_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x3f88de0

void Controllers_HumanAIController__Reel
               (Controllers_HumanAIController_o *__this,int32_t reelAxis,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (reelAxis < 0) {
    if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03f88e24;
    (pCVar1->fields).InvincibleTimeLeft = -1.0;
  }
  else if (pCVar1 == (Characters_Human_o *)0x0) {
LAB_03f88e24:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (0 < reelAxis) {
    (pCVar1->fields).CanMountedAttack = 0x3f800000;
    return;
  }
  (pCVar1->fields).CanMountedAttack = 0;
  return;
}


// Controllers.HumanAIController$$LaunchHookLeft
// il2cpp: void Controllers_HumanAIController__LaunchHookLeft (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x3f88e30

void Controllers_HumanAIController__LaunchHookLeft
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o aimPoint,
               MethodInfo *method)

{
  Characters_Human_o *__this_00;
  undefined8 uVar1;
  char cVar2;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Db;
  UnityEngine_Vector3_o UVar5;
  System_Nullable_Vector3__o __this_02;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 uStack_1c;
  float fStack_18;
  
  UVar5.fields.x = aimPoint.fields.z;
  fVar4 = aimPoint.fields.x;
  fVar3 = aimPoint.fields.y;
  if (DAT_05703f85 == '\0') {
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = aimPoint.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    DAT_05703f85 = '\x01';
    fVar4 = (float)local_38._0_4_;
    fVar3 = (float)local_38._4_4_;
  }
  *(undefined1 *)((long)&(__this->fields)._usingGas + 1) = 1;
  local_48 = 0;
  uStack_40 = 0;
  UVar5.fields.y = (float)in_XMM1_Db;
  UVar5.fields.z = 0.0;
  __this_02.fields.value.fields.z = fVar3;
  __this_02.fields.value.fields.y = fVar4;
  __this_02.fields._0_8_ = &local_48;
  method_00 = MethodInfo_Nullable_1_UnityEngine_Vector3;
  System_Nullable<Vector3>___ctor(__this_02,UVar5,(MethodInfo_3760630 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar2 = (char)local_48;
  fVar4 = (float)((ulong)uStack_40 >> 0x20);
  local_20 = local_48._4_4_;
  uStack_1c = (undefined4)uStack_40;
  fStack_18 = fVar4;
  if (DAT_05703f83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05703f83 = '\x01';
  }
  if (cVar2 != '\0') {
    local_38._8_8_ = 0;
    local_38._0_8_ = CONCAT44(uStack_1c,local_20);
    (__this->fields).AimPoint.fields.x = (float)local_20;
    (__this->fields).AimPoint.fields.y = (float)uStack_1c;
    (__this->fields).AimPoint.fields.z = fVar4;
    __this_00 = (__this->fields)._human;
    if (__this_00 != (Characters_Human_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UVar5 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        (__this->fields).AimDirection.fields.x = (float)local_38._0_4_ - UVar5.fields.x;
        (__this->fields).AimDirection.fields.y = (float)local_38._4_4_ - UVar5.fields.y;
        (__this->fields).AimDirection.fields.z = fVar4 - UVar5.fields.z;
        goto LAB_03f88f68;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields).AimDirection.fields.x = (float)(int)uVar1;
  (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields).AimDirection.fields.z = fVar4;
LAB_03f88f68:
  Controllers_HumanAIController__UpdateHookInput(__this,method_00);
  return;
}


// Controllers.HumanAIController$$ReleaseHookLeft
// il2cpp: void Controllers_HumanAIController__ReleaseHookLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f892e0

void Controllers_HumanAIController__ReleaseHookLeft
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._usingGas + 1) = 0;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$LaunchHookRight
// il2cpp: void Controllers_HumanAIController__LaunchHookRight (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x3f892f0

void Controllers_HumanAIController__LaunchHookRight
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o aimPoint,
               MethodInfo *method)

{
  Characters_Human_o *__this_00;
  undefined8 uVar1;
  char cVar2;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Db;
  UnityEngine_Vector3_o UVar5;
  System_Nullable_Vector3__o __this_02;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 uStack_1c;
  float fStack_18;
  
  UVar5.fields.x = aimPoint.fields.z;
  fVar4 = aimPoint.fields.x;
  fVar3 = aimPoint.fields.y;
  if (DAT_05703f86 == '\0') {
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = aimPoint.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    DAT_05703f86 = '\x01';
    fVar4 = (float)local_38._0_4_;
    fVar3 = (float)local_38._4_4_;
  }
  *(undefined1 *)((long)&(__this->fields)._usingGas + 2) = 1;
  local_48 = 0;
  uStack_40 = 0;
  UVar5.fields.y = (float)in_XMM1_Db;
  UVar5.fields.z = 0.0;
  __this_02.fields.value.fields.z = fVar3;
  __this_02.fields.value.fields.y = fVar4;
  __this_02.fields._0_8_ = &local_48;
  method_00 = MethodInfo_Nullable_1_UnityEngine_Vector3;
  System_Nullable<Vector3>___ctor(__this_02,UVar5,(MethodInfo_3760630 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar2 = (char)local_48;
  fVar4 = (float)((ulong)uStack_40 >> 0x20);
  local_20 = local_48._4_4_;
  uStack_1c = (undefined4)uStack_40;
  fStack_18 = fVar4;
  if (DAT_05703f83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05703f83 = '\x01';
  }
  if (cVar2 != '\0') {
    local_38._8_8_ = 0;
    local_38._0_8_ = CONCAT44(uStack_1c,local_20);
    (__this->fields).AimPoint.fields.x = (float)local_20;
    (__this->fields).AimPoint.fields.y = (float)uStack_1c;
    (__this->fields).AimPoint.fields.z = fVar4;
    __this_00 = (__this->fields)._human;
    if (__this_00 != (Characters_Human_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UVar5 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        (__this->fields).AimDirection.fields.x = (float)local_38._0_4_ - UVar5.fields.x;
        (__this->fields).AimDirection.fields.y = (float)local_38._4_4_ - UVar5.fields.y;
        (__this->fields).AimDirection.fields.z = fVar4 - UVar5.fields.z;
        goto LAB_03f89428;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields).AimDirection.fields.x = (float)(int)uVar1;
  (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields).AimDirection.fields.z = fVar4;
LAB_03f89428:
  Controllers_HumanAIController__UpdateHookInput(__this,method_00);
  return;
}


// Controllers.HumanAIController$$ReleaseHookRight
// il2cpp: void Controllers_HumanAIController__ReleaseHookRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f89440

void Controllers_HumanAIController__ReleaseHookRight
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._usingGas + 2) = 0;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$ReleaseHookAll
// il2cpp: void Controllers_HumanAIController__ReleaseHookAll (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f89450

void Controllers_HumanAIController__ReleaseHookAll
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  *(undefined2 *)((long)&(__this->fields)._usingGas + 1) = 0;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$UpdateHookInput
// il2cpp: void Controllers_HumanAIController__UpdateHookInput (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f88f80

void Controllers_HumanAIController__UpdateHookInput
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *pCVar2;
  Characters_HumanComponentCache_o *pCVar3;
  Characters_HookUseable_o *__this_00;
  Characters_BaseUseable_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  System_Action_Hashtable__c *pSVar6;
  undefined8 uVar7;
  bool_conflict bVar8;
  Characters_Human_o *pCVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  Photon_Pun_PhotonMessageInfo_o local_40;
  
  if (DAT_05703f87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05703f87 = '\x01';
  }
  pCVar9 = (__this->fields)._human;
  if (pCVar9 == (Characters_Human_o *)0x0) goto LAB_03f892cc;
  cVar12 = *(char *)((long)&(__this->fields)._usingGas + 1);
  cVar11 = *(char *)((long)&(__this->fields)._usingGas + 2);
  bVar10 = 0;
  if (((pCVar9->fields).FinishSetup | 8U) != 0xf) {
    pCVar2 = (pCVar9->fields).Horse;
    if (pCVar2 == (Characters_Horse_o *)0x0) goto LAB_03f892cc;
    bVar10 = 0;
    if ((0.0 < (float)(pCVar2->fields).FootstepsEnabled) &&
       ((*(int *)&(pCVar9->fields).Weapon != 2 ||
        (*(char *)&(pCVar9->fields)._mountedVelocity.fields.x != '\0')))) {
      bVar10 = *(byte *)&(pCVar9->fields).FeedVictimName ^ 1;
    }
  }
  pCVar3 = (pCVar9->fields).HumanCache;
  if (pCVar3 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03f892cc;
  bVar8 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)pCVar3,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pCVar9 = (__this->fields)._human;
    if ((pCVar9 == (Characters_Human_o *)0x0) ||
       (__this_00 = (Characters_HookUseable_o *)(pCVar9->fields).Special,
       __this_00 == (Characters_HookUseable_o *)0x0)) goto LAB_03f892cc;
    Characters_HookUseable__HasHook(__this_00,(MethodInfo *)0x0);
  }
  pCVar9 = (__this->fields)._human;
  if (pCVar9 == (Characters_Human_o *)0x0) goto LAB_03f892cc;
  if (*(char *)((long)&(pCVar9->fields)._lastMountedPosition.fields.x + 2) != '\0') {
    *(undefined1 *)((long)&(pCVar9->fields)._lastMountedPosition.fields.x + 2) = 0;
  }
  if (*(char *)&(pCVar9->fields)._lastMountedPosition.fields.x != '\0') {
    *(undefined1 *)&(pCVar9->fields)._lastMountedPosition.fields.x = 0;
    cVar12 = '\0';
  }
  if (*(char *)((long)&(pCVar9->fields)._lastMountedPosition.fields.x + 1) != '\0') {
    *(undefined1 *)((long)&(pCVar9->fields)._lastMountedPosition.fields.x + 1) = 0;
    cVar11 = '\0';
  }
  pCVar3 = (pCVar9->fields).HumanCache;
  if (pCVar3 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03f892cc;
  *(undefined1 *)&(pCVar3->fields).Head = 0;
  pCVar4 = (pCVar9->fields).Special;
  if (pCVar4 == (Characters_BaseUseable_o *)0x0) goto LAB_03f892cc;
  *(undefined1 *)&pCVar4[1].fields.Cooldown = 0;
  if (bVar10 == 0) {
LAB_03f89137:
    bVar13 = false;
  }
  else {
    if (DAT_05703f81 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
      DAT_05703f81 = '\x01';
      pCVar9 = (__this->fields)._human;
      if (pCVar9 == (Characters_Human_o *)0x0) goto LAB_03f892cc;
    }
    if (((pCVar9->fields).FinishSetup == 9) &&
       (pSVar5 = (pCVar9->fields).OnPlayerPropertiesChanged,
       pSVar5 != (System_Action_Hashtable__o *)0x0)) {
      pSVar6 = pSVar5->klass;
      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if ((bVar1 <= (pSVar6->_2).naturalAligment) &&
         ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto LAB_03f89137;
    }
    bVar13 = cVar12 != '\0';
    if (bVar10 == 0) goto LAB_03f892cc;
  }
  (*pCVar3->klass[1]._1.fields)(pCVar3,bVar13,pCVar3->klass[1]._1.events);
  pCVar9 = (__this->fields)._human;
  if (pCVar9 == (Characters_Human_o *)0x0) goto LAB_03f892cc;
  pCVar4 = (pCVar9->fields).Special;
  if (bVar10 == 0) {
LAB_03f891df:
    bVar13 = false;
  }
  else {
    if (DAT_05703f81 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
      DAT_05703f81 = '\x01';
      pCVar9 = (__this->fields)._human;
      if (pCVar9 == (Characters_Human_o *)0x0) goto LAB_03f892cc;
    }
    if (((pCVar9->fields).FinishSetup == 9) &&
       (pSVar5 = (pCVar9->fields).OnPlayerPropertiesChanged,
       pSVar5 != (System_Action_Hashtable__o *)0x0)) {
      pSVar6 = pSVar5->klass;
      bVar10 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if ((bVar10 <= (pSVar6->_2).naturalAligment) &&
         ((pSVar6->_2).typeHierarchy[(ulong)bVar10 - 1] == TypeInfo_Spin3Special)) goto LAB_03f891df;
    }
    bVar13 = cVar11 != '\0';
  }
  if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
    (*(pCVar4->klass->vtable)._12_SetInput.methodPtr)
              (pCVar4,(ulong)bVar13,(pCVar4->klass->vtable)._12_SetInput.method);
    pCVar9 = (__this->fields)._human;
    if ((pCVar9 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar9->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
      if ((cVar11 != '\0' || cVar12 != '\0') && ((float)(pCVar2->fields).FootstepsEnabled <= 0.0)) {
        if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar7 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_Util__CreateLocalPhotonInfo(&local_40,(MethodInfo *)0x0);
        (*(pCVar9->klass->vtable)._76_PlaySoundRPC.methodPtr)
                  (pCVar9,uVar7,(pCVar9->klass->vtable)._76_PlaySoundRPC.method);
      }
      return;
    }
  }
LAB_03f892cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$Attack
// il2cpp: void Controllers_HumanAIController__Attack (Controllers_HumanAIController_o* __this, bool attackOn, const MethodInfo* method);
// 0x3f89460

void Controllers_HumanAIController__Attack
               (Controllers_HumanAIController_o *__this,bool_conflict attackOn,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_T__o *__this_00;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  Characters_Human_o *pCVar5;
  bool bVar6;
  undefined1 uVar7;
  
  if (DAT_05703f88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSWeapon);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05703f88 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8959e;
  if (*(char *)((long)&(pCVar5->fields)._mountedVelocity.fields.x + 2) == '\0') {
LAB_03f894dc:
    bVar6 = false;
    *(undefined1 *)&(pCVar5->fields)._currentVelocity.fields.z = 0;
    pSVar2 = (pCVar5->fields).crossfadeCache;
  }
  else {
    __this_00 = *(System_Collections_Generic_HashSet_T__o **)&(__this->fields)._moveAngle;
    if (__this_00 == (System_Collections_Generic_HashSet_T__o *)0x0) goto LAB_03f8959e;
    bVar4 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      (__this_00,(pCVar5->fields).FinishSetup,MethodInfo_Boolean_Contains);
    pCVar5 = (__this->fields)._human;
    if ((char)bVar4 != '\0') {
      if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8959e;
      goto LAB_03f894dc;
    }
    if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8959e;
    bVar6 = *(char *)&(pCVar5->fields).FeedVictimName == '\0';
    *(undefined1 *)&(pCVar5->fields)._currentVelocity.fields.z = 0;
    pSVar2 = (pCVar5->fields).crossfadeCache;
  }
  if (pSVar2 == (System_Object_array *)0x0) {
LAB_03f8959e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar3 = (pSVar2->obj).klass;
  vtable_dispatch = pIVar3->vtable[0xc].methodPtr;
  if (!bVar6) {
    (*vtable_dispatch)(pSVar2,0,pIVar3->vtable[0xc].method);
    return;
  }
  (*vtable_dispatch)(pSVar2,(ulong)(uint)attackOn & 0xff);
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8959e;
  pSVar2 = (pCVar5->fields).crossfadeCache;
  if (pSVar2 != (System_Object_array *)0x0) {
    pIVar3 = (pSVar2->obj).klass;
    bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if (bVar1 <= (pIVar3->_2).naturalAligment) {
      uVar7 = (pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon;
      if (((bool)uVar7) && ((char)attackOn == '\0')) {
        uVar7 = *(undefined1 *)((long)&pSVar2->max_length + 4);
      }
      goto LAB_03f8956c;
    }
  }
  uVar7 = 0;
LAB_03f8956c:
  *(undefined1 *)&(pCVar5->fields)._currentVelocity.fields.z = uVar7;
  return;
}


// Controllers.HumanAIController$$ActivateSpecial
// il2cpp: void Controllers_HumanAIController__ActivateSpecial (Controllers_HumanAIController_o* __this, bool activate, const MethodInfo* method);
// 0x3f895b0

void Controllers_HumanAIController__ActivateSpecial
               (Controllers_HumanAIController_o *__this,bool_conflict activate,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  Characters_Human_o *pCVar6;
  System_Action_Hashtable__o *pSVar7;
  System_Action_Hashtable__c *pSVar8;
  Il2CppClass **ppIVar9;
  Il2CppMethodPointer vtable_dispatch;
  byte bVar10;
  byte bVar11;
  
  if (DAT_05703f89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseHoldAttackSpecial);
    il2cpp_init_method_metadata(&TypeInfo_EscapeSpecial);
    il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
    il2cpp_init_method_metadata(&TypeInfo_StockSpecial);
    DAT_05703f89 = '\x01';
  }
  pCVar6 = (__this->fields)._human;
  if (pCVar6 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = (pCVar6->fields).OnPlayerPropertiesChanged;
  if (pSVar7 == (System_Action_Hashtable__o *)0x0) {
    return;
  }
  cVar1 = *(char *)((long)&(pCVar6->fields)._mountedVelocity.fields.x + 2);
  bVar10 = 0;
  if (cVar1 != '\0') {
    pSVar8 = pSVar7->klass;
    bVar10 = (pSVar8->_2).naturalAligment;
    bVar2 = (TypeInfo_EscapeSpecial->_2).naturalAligment;
    if (((((bVar2 <= bVar10) && ((pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_EscapeSpecial)) ||
         ((bVar2 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment, bVar2 <= bVar10 &&
          ((pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ShifterTransformSpecial)))) ||
        (bVar10 = 0, (pCVar6->fields).FinishSetup != 7)) &&
       ((bVar10 = 0, *(int *)((long)&(pCVar6->fields).Weapon + 4) != 1 &&
        ((uVar4 = (pCVar6->fields).FinishSetup, 9 < uVar4 ||
         (bVar10 = 0, (0x302U >> (uVar4 & 0x1f) & 1) == 0)))))) {
      bVar10 = *(byte *)&(pCVar6->fields).FeedVictimName ^ 1;
    }
  }
  pSVar8 = pSVar7->klass;
  bVar2 = (pSVar8->_2).naturalAligment;
  bVar11 = (TypeInfo_BaseHoldAttackSpecial->_2).naturalAligment;
  if (((bVar11 <= bVar2) &&
      (ppIVar9 = (pSVar8->_2).typeHierarchy, ppIVar9[(ulong)bVar11 - 1] == TypeInfo_BaseHoldAttackSpecial)) &&
     (cVar1 != '\0')) {
    iVar5 = (pCVar6->fields).FinishSetup;
    bVar11 = 0;
    if (iVar5 != 7) {
      if ((iVar5 != 8) &&
         (((iVar5 != 1 ||
           ((bVar3 = (TypeInfo_StockSpecial->_2).naturalAligment, bVar3 <= bVar2 &&
            (ppIVar9[(ulong)bVar3 - 1] == TypeInfo_StockSpecial)))) &&
          (*(int *)((long)&(pCVar6->fields).Weapon + 4) != 1)))) {
        bVar11 = *(byte *)&(pCVar6->fields).FeedVictimName ^ 1;
      }
      goto LAB_03f896eb;
    }
  }
  bVar11 = 0;
LAB_03f896eb:
  vtable_dispatch = (pSVar8->vtable)._12_Invoke.methodPtr;
  (*vtable_dispatch)
            (pSVar7,(ulong)((bVar10 != 0 || bVar11 != 0) & (byte)activate),
             (pSVar8->vtable)._12_Invoke.method,vtable_dispatch);
  return;
}


// Controllers.HumanAIController$$GetAgentNavAngle
// il2cpp: float Controllers_HumanAIController__GetAgentNavAngle (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x3f89790

float Controllers_HumanAIController__GetAgentNavAngle
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o target,
                MethodInfo *method)

{
  int iVar1;
  UnityEngine_AI_NavMeshAgent_o *pUVar2;
  UnityEngine_Component_o *pUVar3;
  Characters_Human_o *pCVar4;
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
  
  pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
  if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f89db0;
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
    if (auVar11._0_4_ <= 1e-05) goto LAB_03f89820;
LAB_03f8986f:
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
    if (1e-05 < auVar11._0_4_) goto LAB_03f8986f;
LAB_03f89820:
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
  pUVar3 = *(UnityEngine_Component_o **)&(__this->fields)._usePathfinding;
  if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
     (pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f89db0;
  UVar21 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pUVar3 = *(UnityEngine_Component_o **)&(__this->fields)._usePathfinding;
  if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
     (pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f89db0;
  UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._human;
  if (((pCVar4 == (Characters_Human_o *)0x0) ||
      (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0)) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar7 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03f89db0;
  fVar9 = in_XMM1_Db;
  UVar23 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._human;
  if (((pCVar4 == (Characters_Human_o *)0x0) ||
      (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0)) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar7 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03f89db0;
  UVar24 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
  if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f89db0;
  bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
LAB_03f899df:
    pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
    if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f89db0;
    bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
      if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f89db0;
      method_00 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(char *)((long)&(__this->fields)._agent + 4) == '\0') {
          pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
          if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f89db0;
          method_00 = (MethodInfo *)0x0;
          UnityEngine_AI_NavMeshAgent__SetDestination(pUVar2,target,(MethodInfo *)0x0);
          *(undefined1 *)((long)&(__this->fields)._agent + 4) = 1;
        }
        goto joined_r0x03f89d65;
      }
    }
    pUVar2 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
    if (pUVar2 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f89db0;
    method_00 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      direction = (UnityEngine_Vector3_Fields)
                  Controllers_HumanAIController__GetDirectionTowardsNavMesh(__this,method_00);
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
      if (1.0 < fVar9) goto LAB_03f89b66;
      goto LAB_03f899df;
    }
    if (SQRT(fVar9) <= 1.0) goto LAB_03f899df;
LAB_03f89b66:
    pUVar3 = *(UnityEngine_Component_o **)&(__this->fields)._usePathfinding;
    if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f89db0;
    UVar21 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    pCVar4 = (__this->fields)._human;
    if ((pCVar4 == (Characters_Human_o *)0x0) ||
       ((lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0 ||
        (pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
        pUVar7 == (UnityEngine_Transform_o *)0x0)))) goto LAB_03f89db0;
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
      if (auVar14._0_4_ <= 1e-05) goto LAB_03f89c68;
LAB_03f89d53:
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
      if (1e-05 < auVar14._0_4_) goto LAB_03f89d53;
LAB_03f89c68:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      direction = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    }
  }
joined_r0x03f89d65:
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
      pCVar4 = (__this->fields)._human;
      if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03f89db0;
      fVar9 = *(float *)&(pCVar4->fields).Detection;
    }
    fVar9 = fVar9 + *(float *)&(__this->fields)._agent;
    fVar9 = (float)(~-(uint)(360.0 < fVar9) & (uint)fVar9 |
                   (uint)(fVar9 + -360.0) & -(uint)(360.0 < fVar9));
    return (float)(~-(uint)(fVar9 < 0.0) & (uint)fVar9 |
                  (uint)(fVar9 + 360.0) & -(uint)(fVar9 < 0.0));
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    return *(float *)&(pCVar4->fields).Detection;
  }
LAB_03f89db0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$GetDirectionTowardsNavMesh
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__GetDirectionTowardsNavMesh (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f89df0

UnityEngine_Vector3_o
Controllers_HumanAIController__GetDirectionTowardsNavMesh
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *pCVar2;
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
  pCVar2 = (__this->fields)._human;
  if (((pCVar2 != (Characters_Human_o *)0x0) &&
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
LAB_03f8a017:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      }
      auVar11._4_4_ = 0.0;
      auVar11._8_4_ = (float)uVar8;
      auVar11._12_4_ = (float)uVar9;
LAB_03f8a003:
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
    pCVar2 = (__this->fields)._human;
    if ((pCVar2 != (Characters_Human_o *)0x0) &&
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
        if (fVar7 <= 1e-05) goto LAB_03f8a017;
        goto LAB_03f8a003;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_HumanAIController__GetChaseAngleGivenDirection (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x3f8a0a0

float Controllers_HumanAIController__GetChaseAngleGivenDirection
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o direction,
                bool_conflict useMoveAngle,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_Human_o *pCVar2;
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
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar4 = *(float *)&(pCVar2->fields).Detection;
  }
  if ((char)useMoveAngle != '\0') {
    fVar4 = fVar4 + *(float *)&(__this->fields)._agent;
  }
  fVar4 = (float)(~-(uint)(360.0 < fVar4) & (uint)fVar4 |
                 (uint)(fVar4 + -360.0) & -(uint)(360.0 < fVar4));
  return (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar4 | (uint)(fVar4 + 360.0) & -(uint)(fVar4 < 0.0))
  ;
}


// Controllers.HumanAIController$$SetAgentDestination
// il2cpp: void Controllers_HumanAIController__SetAgentDestination (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x3f89dc0

void Controllers_HumanAIController__SetAgentDestination
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  
  if (*(char *)((long)&(__this->fields)._agent + 4) != '\0') {
    return;
  }
  __this_00 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
  if (__this_00 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    UnityEngine_AI_NavMeshAgent__SetDestination(__this_00,position,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._agent + 4) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$RefreshAgent
// il2cpp: void Controllers_HumanAIController__RefreshAgent (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f8a1b0

void Controllers_HumanAIController__RefreshAgent
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  Characters_Human_o *pCVar2;
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
  
  if (*(char *)&(__this->fields).AIStates == '\0') {
    return;
  }
  pUVar1 = *(UnityEngine_Component_o **)&(__this->fields)._usePathfinding;
  if ((pUVar1 != (UnityEngine_Component_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform(pUVar1,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pUVar1 = *(UnityEngine_Component_o **)&(__this->fields)._usePathfinding;
    if ((pUVar1 != (UnityEngine_Component_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._human;
      if (((pCVar2 != (Characters_Human_o *)0x0) &&
          (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
         (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UVar9 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._human;
        if (((pCVar2 != (Characters_Human_o *)0x0) &&
            (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
           (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (*(char *)&(__this->fields).AIStates != '\0') {
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
              pUVar4 = *(UnityEngine_Behaviour_o **)&(__this->fields)._usePathfinding;
              if (pUVar4 == (UnityEngine_Behaviour_o *)0x0) goto LAB_03f8a391;
              UnityEngine_Behaviour__set_enabled(pUVar4,0,(MethodInfo *)0x0);
              pUVar4 = *(UnityEngine_Behaviour_o **)&(__this->fields)._usePathfinding;
              if (pUVar4 == (UnityEngine_Behaviour_o *)0x0) goto LAB_03f8a391;
              UnityEngine_Behaviour__set_enabled(pUVar4,1,(MethodInfo *)0x0);
            }
          }
          pCVar2 = (__this->fields)._human;
          if (((pCVar2 != (Characters_Human_o *)0x0) &&
              (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
             (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
             pUVar5 != (UnityEngine_Transform_o *)0x0)) {
            __this_00 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
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
LAB_03f8a391:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$GetChaseAngle
// il2cpp: float Controllers_HumanAIController__GetChaseAngle (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x3f8a3a0

float Controllers_HumanAIController__GetChaseAngle
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,
                bool_conflict useMoveAngle,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  Characters_Human_o *pCVar4;
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
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8a5eb;
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
    if (1e-05 < auVar6._0_4_) goto LAB_03f8a4e6;
LAB_03f8a48a:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar11 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar6 = ZEXT416((uint)SQRT(fVar5));
    if (SQRT(fVar5) <= 1e-05) goto LAB_03f8a48a;
LAB_03f8a4e6:
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
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) {
LAB_03f8a5eb:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar8 = *(float *)&(pCVar4->fields).Detection;
  }
  if ((char)useMoveAngle != '\0') {
    fVar8 = fVar8 + *(float *)&(__this->fields)._agent;
  }
  fVar8 = (float)(~-(uint)(360.0 < fVar8) & (uint)fVar8 |
                 (uint)(fVar8 + -360.0) & -(uint)(360.0 < fVar8));
  return (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar8 | (uint)(fVar8 + 360.0) & -(uint)(fVar8 < 0.0))
  ;
}


// Controllers.HumanAIController$$MoveToPosition
// il2cpp: void Controllers_HumanAIController__MoveToPosition (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f8a5f0

void Controllers_HumanAIController__MoveToPosition
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  char cVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto LAB_03f8a7f5;
  *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 1;
  if (((((char)(pCVar2->fields).IsRefillable == '\0') || (*(int *)&(pCVar2->fields).Weapon != 0)) ||
      ((pCVar2->fields).FinishSetup != 0)) ||
     (*(char *)((long)&(pCVar2->fields).Animation + 4) == '\0')) {
    (pCVar2->fields).IsAttackableState = 0x3f800000;
    cVar1 = *(char *)&(__this->fields).AIStates;
  }
  else {
    (pCVar2->fields).IsAttackableState = 0x3e800000;
    cVar1 = *(char *)&(__this->fields).AIStates;
  }
  if (cVar1 == '\0') {
    fVar4 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields)._agent = fVar4;
    pCVar2 = (__this->fields)._human;
    method_01 = (MethodInfo *)0x1;
    fVar4 = Controllers_HumanAIController__GetChaseAngle
                      (__this,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)&(__this->fields)._target,1,method_00);
  }
  else {
    *(undefined1 *)((long)&(__this->fields)._agent + 4) = 0;
    lVar3 = *(long *)&(pCVar2->fields).Dead;
    if ((lVar3 == 0) ||
       (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),
       __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03f8a7f5;
    __this_01 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
    UVar5 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar4 = UVar5.fields.z * UVar5.fields.z +
            UVar5.fields.y * UVar5.fields.y + UVar5.fields.x * UVar5.fields.x;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    if (__this_01 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto LAB_03f8a7f5;
    method_01 = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(__this_01,fVar4,(MethodInfo *)0x0);
    fVar4 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields)._agent = fVar4;
    pCVar2 = (__this->fields)._human;
    fVar4 = Controllers_HumanAIController__GetAgentNavAngle
                      (__this,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)&(__this->fields)._target,method_01);
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar2->fields).Detection = fVar4;
    Controllers_HumanAIController__RefreshAgent(__this,method_01);
    return;
  }
LAB_03f8a7f5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$SwitchAIState
// il2cpp: void Controllers_HumanAIController__SwitchAIState (Controllers_HumanAIController_o* __this, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x3f8a800

void Controllers_HumanAIController__SwitchAIState
               (Controllers_HumanAIController_o *__this,Controllers_HumanAIState_o *aiState,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  float *pfVar1;
  Controllers_HumanAIState_o *pCVar2;
  
  pCVar2 = *(Controllers_HumanAIState_o **)&(__this->fields).TargetVelocity.fields.z;
  if (aiState != pCVar2) {
    pfVar1 = &(__this->fields).TargetVelocity.fields.z;
    if (aiState != (Controllers_HumanAIState_o *)0x0) {
      (*(aiState->klass->vtable)._6_OnStateEntry.methodPtr)
                (aiState,(aiState->klass->vtable)._6_OnStateEntry.method);
      pCVar2 = *(Controllers_HumanAIState_o **)pfVar1;
      method = extraout_RDX;
    }
    *(Controllers_HumanAIState_o **)pfVar1 = aiState;
    il2cpp_runtime_glue(pfVar1,aiState,method);
    if (pCVar2 != (Controllers_HumanAIState_o *)0x0) {
      vtable_dispatch = (pCVar2->klass->vtable)._8_OnStateExit.methodPtr;
      (*vtable_dispatch)
                (pCVar2,(pCVar2->klass->vtable)._8_OnStateExit.method,extraout_RDX_00,
                 vtable_dispatch);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$SetAIState
// il2cpp: void Controllers_HumanAIController__SetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x3f87760

void Controllers_HumanAIController__SetAIState
               (Controllers_HumanAIController_o *__this,System_String_o *name,
               Controllers_HumanAIState_o *aiState,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05703f8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703f8a = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,(Il2CppObject *)name,(Il2CppObject *)aiState,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$HasAIState
// il2cpp: bool Controllers_HumanAIController__HasAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f8a870

bool_conflict
Controllers_HumanAIController__HasAIState
          (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703f8b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05703f8b = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$GetAIState
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIController__GetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f8a8c0

Controllers_HumanAIState_o *
Controllers_HumanAIController__GetAIState
          (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Controllers_HumanAIState_o *pCVar1;
  
  if (DAT_05703f8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanAIState_get_Item);
    DAT_05703f8c = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar1 = (Controllers_HumanAIState_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,(Il2CppObject *)name,MethodInfo_HumanAIState_get_Item);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$MoveTo
// il2cpp: void Controllers_HumanAIController__MoveTo (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, float range, const MethodInfo* method);
// 0x3f8a910

void Controllers_HumanAIController__MoveTo
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,float range,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *pIVar2;
  long *plVar3;
  code *vtable_dispatch;
  Il2CppObject *pIVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  float *pfVar5;
  
  if (DAT_05703f8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanAIState_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MoveTo);
    il2cpp_init_method_metadata(&"MoveTo");
    DAT_05703f8d = '\x01';
    in_RDX = extraout_RDX;
  }
  Controllers_HumanAIController__set_Target(__this,(Characters_ITargetable_o *)0x0,in_RDX);
  (__this->fields)._target = position.fields._0_8_;
  (__this->fields).TargetPosition.fields.x = position.fields.z;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar4->klass;
      bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
      if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MoveTo)) {
        *(float *)&pIVar4[2].klass = range;
        if (pIVar4 != *(Il2CppObject **)&(__this->fields).TargetVelocity.fields.z) {
          pfVar5 = &(__this->fields).TargetVelocity.fields.z;
          (*pIVar2->vtable[6].methodPtr)(pIVar4,pIVar2->vtable[6].method);
          plVar3 = *(long **)pfVar5;
          *(Il2CppObject **)pfVar5 = pIVar4;
          il2cpp_runtime_glue(pfVar5,pIVar4);
          if (plVar3 != (long *)0x0) {
            vtable_dispatch = *(code **)(*plVar3 + 0x1b8);
            (*vtable_dispatch)
                      (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX_00,vtable_dispatch
                      );
            return;
          }
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$MoveToTarget
// il2cpp: void Controllers_HumanAIController__MoveToTarget (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* targetable, float range, const MethodInfo* method);
// 0x3f8aa60

void Controllers_HumanAIController__MoveToTarget
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *targetable,
               float range,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *pIVar2;
  long *plVar3;
  code *vtable_dispatch;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  float *pfVar5;
  
  if (DAT_05703f8e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanAIState_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MoveTo);
    il2cpp_init_method_metadata(&"MoveTo");
    DAT_05703f8e = '\x01';
    method = extraout_RDX;
  }
  Controllers_HumanAIController__set_Target(__this,targetable,method);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar4->klass;
      bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
      if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MoveTo)) {
        *(float *)&pIVar4[2].klass = range;
        if (pIVar4 != *(Il2CppObject **)&(__this->fields).TargetVelocity.fields.z) {
          pfVar5 = &(__this->fields).TargetVelocity.fields.z;
          (*pIVar2->vtable[6].methodPtr)(pIVar4,pIVar2->vtable[6].method);
          plVar3 = *(long **)pfVar5;
          *(Il2CppObject **)pfVar5 = pIVar4;
          il2cpp_runtime_glue(pfVar5,pIVar4);
          if (plVar3 != (long *)0x0) {
            vtable_dispatch = *(code **)(*plVar3 + 0x1b8);
            (*vtable_dispatch)
                      (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX_00,vtable_dispatch
                      );
            return;
          }
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$Idle
// il2cpp: void Controllers_HumanAIController__Idle (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f8ab90

void Controllers_HumanAIController__Idle(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long *plVar2;
  code *vtable_dispatch;
  MethodInfo *in_RDX;
  undefined8 extraout_RDX;
  float *pfVar3;
  
  Controllers_HumanAIController__set_Target(__this,(Characters_ITargetable_o *)0x0,in_RDX);
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
  (pCVar1->fields).IsAttackableState = 0;
  plVar2 = *(long **)&(__this->fields).TargetVelocity.fields.z;
  if (plVar2 != (long *)0x0) {
    pfVar3 = &(__this->fields).TargetVelocity.fields.z;
    *(undefined8 *)pfVar3 = 0;
    il2cpp_runtime_glue(pfVar3,0);
    vtable_dispatch = *(code **)(*plVar2 + 0x1b8);
    (*vtable_dispatch)
              (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtable_dispatch);
    return;
  }
  return;
}


// Controllers.HumanAIController$$.ctor
// il2cpp: void Controllers_HumanAIController___ctor (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x3f8ac10

void Controllers_HumanAIController___ctor
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Controllers_HumanAIState_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_HashSet_T__o *__this_02;
  
  if (DAT_05703f8f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Controllers_HumanAISt);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__HumanAIState);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_HumanState);
    il2cpp_init_method_metadata(&TypeInfo_HumanAICallback);
    DAT_05703f8f = '\x01';
  }
  (__this->fields).DetectRange = 10000.0;
  __this_00 = (Controllers_HumanAIState_o *)il2cpp_runtime_glue(TypeInfo_HumanAICallback);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).AIState = __this_00;
  il2cpp_runtime_glue(&(__this->fields).AIState,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__HumanAIState);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_String_Controllers_HumanAISt);
  (__this->fields).Callbacks = (Controllers_HumanAICallback_o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields).Callbacks,__this_01);
  *(undefined1 *)&(__this->fields).AIStates = 1;
  __this_02 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_glue(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet<Int32Enum>___ctor(__this_02,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_02 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add(__this_02,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add(__this_02,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add(__this_02,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add(__this_02,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add(__this_02,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add(__this_02,0xf,MethodInfo_Boolean_Add);
    *(System_Collections_Generic_HashSet_T__o **)&(__this->fields)._moveAngle = __this_02;
    il2cpp_runtime_glue(&(__this->fields)._moveAngle);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIController$$.cctor
// il2cpp: void Controllers_HumanAIController___cctor (const MethodInfo* method);
// 0x3f8adc0

/* WARNING: Type propagation algorithm not settling */

void Controllers_HumanAIController___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (DAT_05703f90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAIController);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05703f90 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanAIController + 0xb8))->m_Mask =
                   (int32_t)UVar3.fields.m_Mask;
              return;
            }
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


