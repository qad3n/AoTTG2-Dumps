// Type: Controllers.HumanAIStates.MoveTo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/MoveTo.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIStates.MoveTo$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_MoveTo__get_Name (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x429d0a0

System_String_o *
Controllers_HumanAIStates_MoveTo__get_Name(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  if (g_data_057add19 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057add19 = '\x01';
  }
  return "MoveTo";
}


// Controllers.HumanAIStates.MoveTo$$Action
// il2cpp: void Controllers_HumanAIStates_MoveTo__Action (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x429d0d0

void Controllers_HumanAIStates_MoveTo__Action(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o *pCVar1;
  char cVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *__this_01;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar3;
  Characters_Human_o *pCVar4;
  long lVar5;
  void *pvVar6;
  System_Threading_CancellationTokenSource_o *pSVar7;
  Controllers_HumanAIState_o *pCVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_HashSet_T__o *__this_03;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  float *pfVar9;
  MethodInfo *pMVar10;
  Controllers_HumanAIController_o *pCVar11;
  System_Collections_Generic_HashSet_T__o *__this_04;
  Controllers_HumanAIController_o *pCVar12;
  MethodInfo *pMVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  
  pCVar4 = (__this->fields).Human;
  pCVar12 = (Controllers_HumanAIController_o *)__this;
  if (((pCVar4 == (Characters_Human_o *)0x0) || (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 == 0)) ||
     (pCVar12 = *(Controllers_HumanAIController_o **)(lVar5 + 0x10),
     pCVar12 == (Controllers_HumanAIController_o *)0x0)) {
label_0429d248:
    il2cpp_runtime_helper_022b2c90();
    pSVar7 = (pCVar12->fields).m_CancellationTokenSource;
    if (pSVar7 != (System_Threading_CancellationTokenSource_o *)0x0) {
      lVar5 = *(long *)&pSVar7[2].fields._state;
      pCVar12 = (Controllers_HumanAIController_o *)0x0;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x28) = 0;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x28,0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    Controllers_HumanAIState___ctor((Controllers_HumanAIState_o *)pCVar12,(MethodInfo *)0x0);
    return;
  }
  UVar17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
  pCVar11 = (__this->fields).Controller;
  if (pCVar11 == (Controllers_HumanAIController_o *)0x0) goto label_0429d248;
  pCVar1 = (pCVar11->fields)._target;
  fVar15 = (pCVar11->fields).TargetPosition.fields.x;
  pMVar10 = extraout_RDX_01;
  if (g_data_057a68cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a68cb = '\x01';
    pMVar10 = extraout_RDX_02;
  }
  fVar16 = UVar17.fields.x - SUB84(pCVar1,0);
  fVar14 = UVar17.fields.y - (float)((ulong)pCVar1 >> 0x20);
  fVar15 = UVar17.fields.z - fVar15;
  if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar10 = extraout_RDX_03;
  }
  fVar15 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    pCVar12 = (__this->fields).Controller;
    pMVar10 = extraout_RDX_04;
  }
  else {
    fVar15 = SQRT(fVar15);
    pCVar12 = (__this->fields).Controller;
  }
  if (pCVar12 == (Controllers_HumanAIController_o *)0x0) goto label_0429d248;
  if (fVar15 <= (__this->fields).MoveToRange) {
    pCVar8 = (pCVar12->fields).AIState;
    if (pCVar8 != (Controllers_HumanAIState_o *)0x0) {
      pvVar6 = pCVar8[1].monitor;
      pCVar11 = pCVar12;
      if (pvVar6 != (void *)0x0) {
        (**(code **)((long)pvVar6 + 0x18))(*(undefined8 *)((long)pvVar6 + 0x40));
        pCVar11 = (__this->fields).Controller;
        pCVar12 = (Controllers_HumanAIController_o *)0x0;
        pMVar10 = extraout_RDX_05;
        if (pCVar11 == (Controllers_HumanAIController_o *)0x0) goto label_0429d248;
      }
      pCVar12 = pCVar11;
      Controllers_HumanAIController__set_Target(pCVar11,(Characters_ITargetable_o *)0x0,pMVar10);
      pCVar4 = (pCVar11->fields)._human;
      if (pCVar4 != (Characters_Human_o *)0x0) {
        *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 0;
        (pCVar4->fields).IsAttackableState = 0;
        plVar3 = *(long **)&(pCVar11->fields).TargetVelocity.fields.z;
        if (plVar3 == (long *)0x0) {
          return;
        }
        pfVar9 = &(pCVar11->fields).TargetVelocity.fields.z;
        *(undefined8 *)pfVar9 = 0;
        il2cpp_runtime_helper_022b4080(pfVar9,0);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x1b8);
        (*UNRECOVERED_JUMPTABLE_00)
                  (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adcfd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_HumanAIState);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAICallback);
        g_data_057adcfd = '\x01';
      }
      (pCVar12->fields).DetectRange = 10000.0;
      pCVar8 = (Controllers_HumanAIState_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
      System_Object___ctor((Il2CppObject *)pCVar8,(MethodInfo *)0x0);
      (pCVar12->fields).AIState = pCVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar12->fields).AIState,pCVar8);
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
      (pCVar12->fields).Callbacks = (Controllers_HumanAICallback_o *)__this_02;
      il2cpp_runtime_helper_022b4080(&(pCVar12->fields).Callbacks,__this_02);
      *(undefined1 *)&(pCVar12->fields).AIStates = 1;
      __this_03 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
      __this_04 = __this_03;
      System_Collections_Generic_HashSet_Int32Enum____ctor(__this_03,MethodInfo_HashSet_1_Characters_HumanState);
      if (__this_03 == (System_Collections_Generic_HashSet_T__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
        return;
      }
      System_Collections_Generic_HashSet_Int32Enum___Add(__this_03,7,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add(__this_03,10,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add(__this_03,8,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add(__this_03,4,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add(__this_03,9,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add(__this_03,0xf,MethodInfo_Boolean_Add);
      *(System_Collections_Generic_HashSet_T__o **)&(pCVar12->fields)._moveAngle = __this_03;
      il2cpp_runtime_helper_022b4080(&(pCVar12->fields)._moveAngle);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pCVar12,(MethodInfo *)0x0);
      return;
    }
    goto label_0429d248;
  }
  pMVar10 = (MethodInfo *)0x0;
  pCVar4 = (pCVar12->fields)._human;
  pCVar11 = pCVar12;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 1;
  if ((((char)(pCVar4->fields).IsRefillable == '\0') || (*(int *)&(pCVar4->fields).Weapon != 0)) ||
     (((pCVar4->fields).FinishSetup != 0 || (*(char *)((long)&(pCVar4->fields).Animation + 4) == '\0')))) {
    (pCVar4->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)&(pCVar12->fields).AIStates;
  }
  else {
    (pCVar4->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)&(pCVar12->fields).AIStates;
  }
  if (cVar2 == '\0') {
    fVar15 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(pCVar12->fields)._agent = fVar15;
    pCVar4 = (pCVar12->fields)._human;
    pMVar10 = (MethodInfo *)0x1;
    fVar15 = Controllers_HumanAIController__GetChaseAngle
                       (pCVar12,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)&(pCVar12->fields)._target,1,method_00);
  }
  else {
    *(undefined1 *)((long)&(pCVar12->fields)._agent + 4) = 0;
    lVar5 = *(long *)&(pCVar4->fields).Dead;
    if (lVar5 == 0) goto label_04296d95;
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar5 + 0x18);
    pCVar11 = (Controllers_HumanAIController_o *)0x0;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    __this_01 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar12->fields)._usePathfinding;
    pMVar10 = (MethodInfo *)0x0;
    UVar17 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar11 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar15 = UVar17.fields.z * UVar17.fields.z +
             UVar17.fields.y * UVar17.fields.y + UVar17.fields.x * UVar17.fields.x;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    if (__this_01 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    pMVar10 = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(__this_01,fVar15,(MethodInfo *)0x0);
    fVar15 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(pCVar12->fields)._agent = fVar15;
    pCVar4 = (pCVar12->fields)._human;
    pCVar11 = pCVar12;
    fVar15 = Controllers_HumanAIController__GetAgentNavAngle
                       (pCVar12,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)&(pCVar12->fields)._target,pMVar10);
  }
  if (pCVar4 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar4->fields).Detection = fVar15;
    Controllers_HumanAIController__RefreshAgent(pCVar12,pMVar10);
    return;
  }
label_04296d95:
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = *(MethodInfo **)&(pCVar11->fields).TargetVelocity.fields.z;
  if (pMVar10 != pMVar13) {
    pfVar9 = &(pCVar11->fields).TargetVelocity.fields.z;
    if (pMVar10 != (MethodInfo *)0x0) {
      (**(code **)(pMVar10->methodPointer + 0x198))(pMVar10,*(undefined8 *)(pMVar10->methodPointer + 0x1a0));
      pMVar13 = *(MethodInfo **)pfVar9;
    }
    *(MethodInfo **)pfVar9 = pMVar10;
    il2cpp_runtime_helper_022b4080(pfVar9,pMVar10);
    if (pMVar13 != (MethodInfo *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar13->methodPointer + 0x1b8);
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar13,*(undefined8 *)(pMVar13->methodPointer + 0x1c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00
                );
      return;
    }
  }
  return;
}


// Controllers.HumanAIStates.MoveTo$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_MoveTo__OnStateExit (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x429d250

void Controllers_HumanAIStates_MoveTo__OnStateExit
               (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  Controllers_HumanAIState_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if ((pCVar1 != (Controllers_HumanAIController_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).AIState, __this = (Controllers_HumanAIStates_MoveTo_o *)0x0,
     pCVar2 != (Controllers_HumanAIState_o *)0x0)) {
    pCVar2[1].monitor = (void *)0x0;
    il2cpp_runtime_helper_022b4080(&pCVar2[1].monitor,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Controllers_HumanAIState___ctor((Controllers_HumanAIState_o *)__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIStates.MoveTo$$.ctor
// il2cpp: void Controllers_HumanAIStates_MoveTo___ctor (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x429d280

void Controllers_HumanAIStates_MoveTo___ctor(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Controllers_HumanAIState___ctor((Controllers_HumanAIState_o *)__this,(MethodInfo *)0x0);
  return;
}


