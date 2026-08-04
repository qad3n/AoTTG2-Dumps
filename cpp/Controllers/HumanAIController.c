// Type: Controllers.HumanAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/HumanAIController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIController$$get_Target
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__get_Target (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42935c0

Characters_ITargetable_o *
Controllers_HumanAIController__get_Target(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return *(Characters_ITargetable_o **)&(__this->fields)._hookingRight;
}


// Controllers.HumanAIController$$set_Target
// il2cpp: void Controllers_HumanAIController__set_Target (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* value, const MethodInfo* method);
// 0x42935d0

void Controllers_HumanAIController__set_Target
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *value,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_Component_Fields *pUVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  void *pvVar7;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar8;
  UnityEngine_Object_c *pUVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Characters_TitanColliderToggler_o *__this_01;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_02;
  undefined1 auVar11 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  UnityEngine_AI_NavMeshHit_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o __this_08;
  UnityEngine_AI_NavMeshBuildSettings_o __this_09;
  UnityEngine_AI_NavMeshBuildSettings_o __this_10;
  UnityEngine_AI_NavMeshHit_o __this_11;
  System_Nullable_Vector3__o *pSVar12;
  Map_MapTargetable_o *__this_12;
  bool_conflict bVar13;
  uint value_00;
  undefined8 *puVar14;
  Il2CppObject *pIVar15;
  _union_14 *p_Var16;
  UnityEngine_GameObject_o *__this_13;
  Il2CppMethodPointer *ppIVar17;
  UnityEngine_Transform_o *pUVar18;
  long *plVar19;
  undefined8 uVar20;
  MethodInfo *extraout_RDX;
  Il2CppObject *value_01;
  UnityEngine_Component_o *key;
  UnityEngine_Component_o *__this_14;
  long *__this_15;
  long lVar21;
  _union_14 *__this_16;
  _union_14 *p_Var22;
  _union_14 *__this_17;
  System_Collections_Generic_Dictionary_object__object__o *__this_18;
  long lVar23;
  long lVar24;
  UnityEngine_Object_o *pUVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  System_Int32_array *pSVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float fVar32;
  float fVar33;
  float fVar34;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  undefined1 auVar43 [12];
  System_Nullable_Vector3__o __this_19;
  System_Nullable_Vector3__o __this_20;
  undefined8 uStackY_2d8;
  undefined8 uStackY_2d0;
  float fStackY_2c8;
  float fStackY_2c4;
  float fStackY_2c0;
  float fStackY_2bc;
  long lStackY_2b0;
  UnityEngine_Object_o *pUStackY_2a8;
  float in_stack_fffffffffffffd60;
  float in_stack_fffffffffffffd64;
  undefined4 in_stack_fffffffffffffd68;
  undefined4 in_stack_fffffffffffffd6c;
  float in_stack_fffffffffffffd70;
  float in_stack_fffffffffffffd74;
  float fStack_280;
  float fStack_27c;
  _union_249689 _Stack_270;
  undefined8 uStack_268;
  Map_MapTargetable_o *pMStack_260;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  _union_249689 _Stack_230;
  undefined8 uStack_228;
  Map_MapTargetable_o *pMStack_220;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_218;
  bool_conflict *pbStack_210;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 in_stack_fffffffffffffe98 [12];
  float in_stack_fffffffffffffea4;
  float in_stack_fffffffffffffea8;
  float in_stack_fffffffffffffeac;
  undefined4 in_stack_fffffffffffffeb0;
  undefined4 in_stack_fffffffffffffeb4;
  _union_14 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  float local_d8;
  float fStack_d4;
  UnityEngine_AI_NavMeshBuildSettings_o local_c8;
  UnityEngine_Component_o *pUStack_88;
  UnityEngine_Component_Fields *pUStack_80;
  code *pcStack_78;
  _union_14 _Var44;
  Il2CppMethodPointer pIVar45;
  InvokerMethod pIVar46;
  char *pcVar47;
  int32_t iVar48;
  _union_13 local_38;
  _union_14 _Stack_30;
  
  if (g_data_057adce8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    g_data_057adce8 = '\x01';
    method = extraout_RDX;
  }
  pbVar1 = &(__this->fields)._hookingRight;
  *(Characters_ITargetable_o **)&(__this->fields)._hookingRight = value;
  __this_15 = (long *)pbVar1;
  il2cpp_runtime_helper_022b4080(pbVar1,value,method);
  plVar19 = *(long **)&(__this->fields)._hookingRight;
  if (plVar19 == (long *)0x0) {
    return;
  }
  if (g_data_057a65d5 == '\0') {
    __this_15 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
    plVar19 = *(long **)pbVar1;
  }
  uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar33 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  pSVar12 = &(__this->fields)._targetLastPosition;
  (pSVar12->fields).value.fields.y = (float)(int)uVar20;
  (pSVar12->fields).value.fields.z = (float)(int)((ulong)uVar20 >> 0x20);
  (__this->fields).TargetVelocity.fields.x = fVar33;
  if (plVar19 != (long *)0x0) {
    lVar23 = *plVar19;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
          puVar14 = (undefined8 *)
                    (lVar23 + (long)(*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar21) + 1) * 0x10 + 0x138);
          goto label_042936d5;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar21);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,TypeInfo_ITargetable,1);
label_042936d5:
    uVar20 = (*(code *)*puVar14)(plVar19,puVar14[1]);
    local_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_30.genericMethod = (void *)0x0;
    UVar40.fields.y = in_XMM1_Db;
    UVar40.fields.x = in_XMM1_Da;
    UVar40.fields.z = 0.0;
    __this_19.fields.value.fields.y = (float)(int)uVar20;
    __this_19.fields.value.fields.z = (float)(int)((ulong)uVar20 >> 0x20);
    __this_19.fields._0_8_ = &local_38;
    System_Nullable_Vector3____ctor(__this_19,UVar40,MethodInfo_Nullable_1_UnityEngine_Vector3);
    *(_union_13 *)&(__this->fields).TargetDirection.fields.y = (Il2CppRGCTXData *)local_38;
    *(_union_14 *)&(__this->fields)._targetLastPosition.fields = (void *)_Stack_30;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  p_Var22 = (_union_14 *)&stack0xffffffffffffff90;
  p_Var16 = (_union_14 *)&stack0xffffffffffffff90;
  if (g_data_057adce9 == '\0') {
    pcStack_78 = (code *)0x429373f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    pcStack_78 = (code *)0x429374b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pcStack_78 = (code *)0x4293757;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adce9 = '\x01';
  }
  pIVar46 = (InvokerMethod)0x0;
  pcVar47 = (char *)0x0;
  _Var44.genericMethod = (void *)0x0;
  pIVar45 = (Il2CppMethodPointer)0x0;
  iVar48 = 0;
  if (g_data_057adcc2 == '\0') {
    pcStack_78 = (code *)0x4293787;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    g_data_057adcc2 = '\x01';
  }
  pcStack_78 = (code *)0x42937a0;
  pIVar15 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_15,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  ((UnityEngine_Component_o *)((long)__this_15 + 0x18))->monitor = pIVar15;
  pcStack_78 = (code *)0x42937b0;
  il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)((long)__this_15 + 0x18))->monitor,pIVar15);
  pcStack_78 = (code *)0x42937c2;
  pIVar15 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_15,MethodInfo_Human_GetComponent_Human);
  pUVar2 = &((UnityEngine_Component_o *)((long)__this_15 + 0x18))->fields;
  (((UnityEngine_Component_o *)((long)__this_15 + 0x18))->fields).m_CachedPtr = (intptr_t)pIVar15;
  pcStack_78 = (code *)0x42937d5;
  __this_16 = (_union_14 *)pUVar2;
  il2cpp_runtime_helper_022b4080();
  lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x50), lVar23 != 0)) &&
     (lVar23 = *(long *)(lVar23 + 0xa8), lVar23 != 0)) {
    cVar3 = *(char *)(lVar23 + 0x11);
    *(char *)&((UnityEngine_Component_o *)((long)__this_15 + 0xa8))->monitor = cVar3;
    if (cVar3 == '\0') {
      return;
    }
    if ((pUVar2->m_CachedPtr != 0) && (lVar23 = *(long *)(pUVar2->m_CachedPtr + 0x70), lVar23 != 0)) {
      pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
      __this_16 = (_union_14 *)0x0;
      if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
        pcStack_78 = (code *)0x429383a;
        UVar40 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
        in_XMM1_Da = UVar40.fields.z;
        pcStack_78 = (code *)0x4293851;
        bVar13 = UnityEngine_AI_NavMesh__SamplePosition
                           (UVar40,(UnityEngine_AI_NavMeshHit_o *)&stack0xffffffffffffff90,100.0,-1,
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        __this_16 = p_Var22;
        if ((pUVar2->m_CachedPtr != 0) && (lVar23 = *(long *)(pUVar2->m_CachedPtr + 0x70), lVar23 != 0)) {
          pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
          pcStack_78 = (code *)0x4293874;
          __this_11.fields._8_8_ = pIVar45;
          __this_11.fields.m_Position.fields._0_8_ = _Var44.genericMethod;
          __this_11.fields.m_Normal.fields._4_8_ = pIVar46;
          __this_11.fields._24_8_ = pcVar47;
          __this_11.fields.m_Hit = iVar48;
          UVar40 = UnityEngine_AI_NavMeshHit__get_position(__this_11,(MethodInfo *)&stack0xffffffffffffff90);
          in_XMM1_Da = UVar40.fields.z;
          __this_15 = (long *)0x0;
          __this_16 = p_Var16;
          if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
            pcStack_78 = (code *)0x4293883;
            UnityEngine_Transform__set_position(pUVar18,UVar40,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pcStack_78 = Controllers_HumanAIController__Start;
  il2cpp_runtime_helper_022b2c90();
  pUStack_88 = (UnityEngine_Component_o *)__this_15;
  pUStack_80 = pUVar2;
  pcStack_78 = (code *)plVar19;
  if (g_data_057adcea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcea = '\x01';
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108.genericMethod = (void *)0x0;
  uStack_100 = 0;
  local_e8 = 0;
  uVar37 = 0;
  p_Var16 = (_union_14 *)il2cpp_runtime_helper_023052d0(TypeInfo_MoveTo);
  __this_14 = (UnityEngine_Component_o *)0x0;
  p_Var22 = p_Var16;
  Controllers_HumanAIStates_MoveTo___ctor((Controllers_HumanAIStates_MoveTo_o *)p_Var16,(MethodInfo *)0x0);
  if (p_Var16 != (_union_14 *)0x0) {
    __this_14 = __this_16[5].genericMethod;
    pIVar15 = (Il2CppObject *)
              (**(code **)((long)p_Var16->genericMethod + 0x188))
                        (p_Var16,__this_14,*(undefined8 *)((long)p_Var16->genericMethod + 400));
    key = "MoveTo";
    if (g_data_057adcf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057adcf8 = '\x01';
    }
    p_Var22 = __this_16[0x15].genericMethod;
    if (p_Var22 != (_union_14 *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)p_Var22,(Il2CppObject *)key,
                 pIVar15,MethodInfo_Void_set_Item);
      if (*(char *)(__this_16 + 0x16) == '\0') {
        return;
      }
      __this_14 = key;
      if ((__this_16[5].genericMethod != (Il2CppType *)0x0) &&
         (pvVar7 = __this_16[5].genericMethod[7].data, pvVar7 != (void *)0x0)) {
        pUVar18 = *(UnityEngine_Transform_o **)((long)pvVar7 + 0x10);
        p_Var22 = (_union_14 *)0x0;
        if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
          UVar40 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
          in_XMM1_Da = UVar40.fields.z;
          p_Var22 = &local_108;
          __this_14 = (UnityEngine_Component_o *)&g_data_ffffffff;
          bVar13 = UnityEngine_AI_NavMesh__SamplePosition
                             (UVar40,(UnityEngine_AI_NavMeshHit_o *)p_Var22,100.0,-1,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
label_04293a2b:
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Utility_Util__GetAgentSettingsCorrected(&local_c8,1.0,(MethodInfo *)0x0);
            uVar37 = local_c8.fields.m_AgentTypeID;
            uVar38 = local_c8.fields.m_AgentRadius;
            __this_14 = (UnityEngine_Component_o *)0x0;
            p_Var22 = __this_16;
            fVar33 = local_c8.fields.m_AgentClimb;
            fVar27 = local_c8.fields.m_LedgeDropHeight;
            fVar34 = local_c8.fields.m_MaxJumpAcrossDistance;
            fVar36 = local_c8.fields.m_MinRegionArea;
            __this_13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_16,(MethodInfo *)0x0);
            in_XMM1_Da = local_c8.fields.m_AgentClimb;
            in_XMM1_Db = local_c8.fields.m_LedgeDropHeight;
            in_XMM1_Dc = local_c8.fields.m_MaxJumpAcrossDistance;
            in_XMM1_Dd = local_c8.fields.m_MinRegionArea;
            if (__this_13 != (UnityEngine_GameObject_o *)0x0) {
              pIVar15 = UnityEngine_GameObject__AddComponent_object_(__this_13,MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
              p_Var16 = __this_16 + 0x17;
              __this_16[0x17].genericMethod = pIVar15;
              il2cpp_runtime_helper_022b4080(p_Var16);
              __this_17 = __this_16[0x17].genericMethod;
              p_Var22 = (_union_14 *)&stack0xfffffffffffffeb8;
              __this_14 = (UnityEngine_Component_o *)0x0;
              __this_08.fields.m_AgentSlope = in_stack_fffffffffffffea4;
              __this_08.fields.m_AgentTypeID = in_stack_fffffffffffffe98._0_4_;
              __this_08.fields.m_AgentRadius = (float)in_stack_fffffffffffffe98._4_4_;
              __this_08.fields.m_AgentHeight = (float)in_stack_fffffffffffffe98._8_4_;
              __this_08.fields.m_AgentClimb = in_stack_fffffffffffffea8;
              __this_08.fields.m_LedgeDropHeight = in_stack_fffffffffffffeac;
              __this_08.fields.m_MaxJumpAcrossDistance = (float)in_stack_fffffffffffffeb0;
              __this_08.fields.m_MinRegionArea = (float)in_stack_fffffffffffffeb4;
              __this_08.fields.m_OverrideVoxelSize = uVar37;
              __this_08.fields.m_VoxelSize = (float)uVar38;
              __this_08.fields.m_OverrideTileSize = (int32_t)local_c8.fields.m_AgentHeight;
              __this_08.fields.m_TileSize = (int32_t)local_c8.fields.m_AgentSlope;
              __this_08.fields.m_BuildHeightMesh = (int32_t)fVar33;
              __this_08.fields.m_MaxJobWorkers = (uint32_t)fVar27;
              __this_08.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar34;
              __this_08.fields._60_4_ = fVar36;
              value_00 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID(__this_08,(MethodInfo *)p_Var22)
              ;
              in_XMM1_Da = local_c8.fields.m_AgentClimb;
              in_XMM1_Db = local_c8.fields.m_LedgeDropHeight;
              in_XMM1_Dc = local_c8.fields.m_MaxJumpAcrossDistance;
              in_XMM1_Dd = local_c8.fields.m_MinRegionArea;
              if (__this_17 != (_union_14 *)0x0) {
                __this_14 = (UnityEngine_Component_o *)(ulong)value_00;
                UnityEngine_AI_NavMeshAgent__set_agentTypeID
                          ((UnityEngine_AI_NavMeshAgent_o *)__this_17,value_00,(MethodInfo *)0x0);
                p_Var22 = __this_17;
                in_XMM1_Da = local_c8.fields.m_AgentClimb;
                in_XMM1_Db = local_c8.fields.m_LedgeDropHeight;
                in_XMM1_Dc = local_c8.fields.m_MaxJumpAcrossDistance;
                in_XMM1_Dd = local_c8.fields.m_MinRegionArea;
                if ((__this_16[5].genericMethod != (Il2CppType *)0x0) &&
                   (pvVar7 = __this_16[5].genericMethod[7].data, pvVar7 != (void *)0x0)) {
                  __this_00 = *(UnityEngine_Rigidbody_o **)((long)pvVar7 + 0x18);
                  p_Var22 = (_union_14 *)0x0;
                  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
                    pUVar8 = __this_16[0x17].genericMethod;
                    __this_14 = (UnityEngine_Component_o *)0x0;
                    UVar40 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
                    fVar32 = UVar40.fields.z;
                    fVar26 = UVar40.fields.x;
                    fVar29 = UVar40.fields.y;
                    uVar30 = extraout_XMM0_Dc;
                    uVar31 = extraout_XMM0_Dd;
                    uVar20 = local_c8.fields._8_8_;
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      local_c8.fields.m_LedgeDropHeight = 0.0;
                      local_c8.fields.m_MaxJumpAcrossDistance = 0.0;
                      local_c8.fields.m_MinRegionArea = 0.0;
                      g_data_057a6841 = '\x01';
                      in_stack_fffffffffffffea4 = fVar32;
                      in_stack_fffffffffffffea8 = fVar26;
                      in_stack_fffffffffffffeac = fVar29;
                      in_stack_fffffffffffffeb0 = uVar30;
                      in_stack_fffffffffffffeb4 = uVar31;
                      uVar20 = local_c8.fields._8_8_;
                    }
                    p_Var22 = TypeInfo_Math;
                    fVar35 = fVar29;
                    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                      local_d8 = fVar29;
                      fStack_d4 = fVar29;
                      il2cpp_runtime_helper_02337ed0();
                      local_c8.fields.m_LedgeDropHeight = 0.0;
                      local_c8.fields.m_MaxJumpAcrossDistance = 0.0;
                      local_c8.fields.m_MinRegionArea = 0.0;
                      fVar35 = local_d8;
                      in_stack_fffffffffffffea4 = fVar32;
                      in_stack_fffffffffffffea8 = fVar26;
                      in_stack_fffffffffffffeac = fVar29;
                      in_stack_fffffffffffffeb0 = uVar30;
                      in_stack_fffffffffffffeb4 = uVar31;
                    }
                    in_XMM1_Da = fVar32 * fVar32 + fVar35 * fVar35 + fVar26 * fVar26;
                    if (in_XMM1_Da < 0.0) {
                      fVar26 = sqrtf(in_XMM1_Da);
                      in_XMM1_Db = local_c8.fields.m_LedgeDropHeight;
                      in_XMM1_Dc = local_c8.fields.m_MaxJumpAcrossDistance;
                      in_XMM1_Dd = local_c8.fields.m_MinRegionArea;
                    }
                    else {
                      fVar26 = SQRT(in_XMM1_Da);
                      in_XMM1_Db = local_c8.fields.m_LedgeDropHeight;
                      in_XMM1_Dc = local_c8.fields.m_MaxJumpAcrossDistance;
                      in_XMM1_Dd = local_c8.fields.m_MinRegionArea;
                    }
                    if (pUVar8 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      __this_14 = (UnityEngine_Component_o *)0x0;
                      UnityEngine_AI_NavMeshAgent__set_speed(pUVar8,fVar26,(MethodInfo *)0x0);
                      p_Var22 = (_union_14 *)0x0;
                      if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        __this_14 = (UnityEngine_Component_o *)0x0;
                        UnityEngine_AI_NavMeshAgent__set_angularSpeed
                                  (p_Var16->genericMethod,10.0,(MethodInfo *)0x0);
                        p_Var22 = (_union_14 *)0x0;
                        if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                          __this_14 = (UnityEngine_Component_o *)0x0;
                          UnityEngine_AI_NavMeshAgent__set_acceleration
                                    (p_Var16->genericMethod,100.0,(MethodInfo *)0x0);
                          p_Var22 = (_union_14 *)0x0;
                          if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            __this_14 = (UnityEngine_Component_o *)0x1;
                            UnityEngine_AI_NavMeshAgent__set_autoRepath
                                      (p_Var16->genericMethod,1,(MethodInfo *)0x0);
                            p_Var22 = (_union_14 *)0x0;
                            if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              __this_14 = (UnityEngine_Component_o *)0x0;
                              UnityEngine_AI_NavMeshAgent__set_stoppingDistance
                                        (p_Var16->genericMethod,1.1,(MethodInfo *)0x0);
                              p_Var22 = (_union_14 *)0x0;
                              if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                UnityEngine_AI_NavMeshAgent__set_autoBraking
                                          (p_Var16->genericMethod,0,(MethodInfo *)0x0);
                                pUVar8 = p_Var16->genericMethod;
                                p_Var22 = (_union_14 *)&stack0xfffffffffffffeb8;
                                __this_14 = (UnityEngine_Component_o *)0x0;
                                __this_09.fields.m_AgentSlope = in_stack_fffffffffffffea4;
                                __this_09.fields.m_AgentTypeID = in_stack_fffffffffffffe98._0_4_;
                                __this_09.fields.m_AgentRadius = (float)in_stack_fffffffffffffe98._4_4_;
                                __this_09.fields.m_AgentHeight = (float)in_stack_fffffffffffffe98._8_4_;
                                __this_09.fields.m_AgentClimb = in_stack_fffffffffffffea8;
                                __this_09.fields.m_LedgeDropHeight = in_stack_fffffffffffffeac;
                                __this_09.fields.m_MaxJumpAcrossDistance = (float)in_stack_fffffffffffffeb0;
                                __this_09.fields.m_MinRegionArea = (float)in_stack_fffffffffffffeb4;
                                __this_09.fields.m_OverrideVoxelSize = uVar37;
                                __this_09.fields.m_VoxelSize = (float)uVar38;
                                __this_09.fields.m_OverrideTileSize = (int32_t)(float)uVar20;
                                __this_09.fields.m_TileSize = (int32_t)SUB84(uVar20,4);
                                __this_09.fields.m_BuildHeightMesh = (int32_t)fVar33;
                                __this_09.fields.m_MaxJobWorkers = (uint32_t)fVar27;
                                __this_09.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar34;
                                __this_09.fields._60_4_ = fVar36;
                                fVar26 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                                                   (__this_09,(MethodInfo *)p_Var22);
                                if (pUVar8 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                  UnityEngine_AI_NavMeshAgent__set_radius(pUVar8,fVar26,(MethodInfo *)0x0);
                                  pUVar8 = p_Var16->genericMethod;
                                  p_Var22 = (_union_14 *)&stack0xfffffffffffffeb8;
                                  __this_14 = (UnityEngine_Component_o *)0x0;
                                  __this_10.fields.m_AgentSlope = in_stack_fffffffffffffea4;
                                  __this_10.fields.m_AgentTypeID = in_stack_fffffffffffffe98._0_4_;
                                  __this_10.fields.m_AgentRadius = (float)in_stack_fffffffffffffe98._4_4_;
                                  __this_10.fields.m_AgentHeight = (float)in_stack_fffffffffffffe98._8_4_;
                                  __this_10.fields.m_AgentClimb = in_stack_fffffffffffffea8;
                                  __this_10.fields.m_LedgeDropHeight = in_stack_fffffffffffffeac;
                                  __this_10.fields.m_MaxJumpAcrossDistance = (float)in_stack_fffffffffffffeb0;
                                  __this_10.fields.m_MinRegionArea = (float)in_stack_fffffffffffffeb4;
                                  __this_10.fields.m_OverrideVoxelSize = uVar37;
                                  __this_10.fields.m_VoxelSize = (float)uVar38;
                                  __this_10.fields.m_OverrideTileSize = (int32_t)(float)uVar20;
                                  __this_10.fields.m_TileSize = (int32_t)SUB84(uVar20,4);
                                  __this_10.fields.m_BuildHeightMesh = (int32_t)fVar33;
                                  __this_10.fields.m_MaxJobWorkers = (uint32_t)fVar27;
                                  __this_10.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar34;
                                  __this_10.fields._60_4_ = fVar36;
                                  fVar33 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                                                     (__this_10,(MethodInfo *)p_Var22);
                                  if (pUVar8 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                    __this_14 = (UnityEngine_Component_o *)0x0;
                                    UnityEngine_AI_NavMeshAgent__set_height(pUVar8,fVar33,(MethodInfo *)0x0);
                                    p_Var22 = (_union_14 *)0x0;
                                    if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                      __this_14 = (UnityEngine_Component_o *)0x0;
                                      UnityEngine_AI_NavMeshAgent__set_updatePosition
                                                (p_Var16->genericMethod,0,(MethodInfo *)0x0);
                                      p_Var22 = (_union_14 *)0x0;
                                      if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                        __this_14 = (UnityEngine_Component_o *)0x0;
                                        UnityEngine_AI_NavMeshAgent__set_updateRotation
                                                  (p_Var16->genericMethod,0,(MethodInfo *)0x0);
                                        p_Var22 = (_union_14 *)0x0;
                                        if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                          __this_14 = (UnityEngine_Component_o *)0x2;
                                          UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                                                    (p_Var16->genericMethod,2,(MethodInfo *)0x0);
                                          p_Var22 = (_union_14 *)0x0;
                                          if (p_Var16->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0)
                                          {
                                            UnityEngine_AI_NavMeshAgent__set_avoidancePriority
                                                      (p_Var16->genericMethod,0,(MethodInfo *)0x0);
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
          else if ((__this_16[5].genericMethod != (Il2CppType *)0x0) &&
                  (pvVar7 = __this_16[5].genericMethod[7].data, pvVar7 != (void *)0x0)) {
            pUVar18 = *(UnityEngine_Transform_o **)((long)pvVar7 + 0x10);
            p_Var22 = &local_108;
            __this_14 = (UnityEngine_Component_o *)0x0;
            __this_07.fields.m_Normal.fields.x = in_stack_fffffffffffffea4;
            __this_07.fields.m_Position.fields.x = (float)in_stack_fffffffffffffe98._0_4_;
            __this_07.fields.m_Position.fields.y = (float)in_stack_fffffffffffffe98._4_4_;
            __this_07.fields.m_Position.fields.z = (float)in_stack_fffffffffffffe98._8_4_;
            __this_07.fields.m_Normal.fields.y = in_stack_fffffffffffffea8;
            __this_07.fields.m_Normal.fields.z = in_stack_fffffffffffffeac;
            __this_07.fields.m_Distance = (float)in_stack_fffffffffffffeb0;
            __this_07.fields.m_Mask = in_stack_fffffffffffffeb4;
            __this_07.fields.m_Hit = uVar37;
            UVar40 = UnityEngine_AI_NavMeshHit__get_position(__this_07,(MethodInfo *)p_Var22);
            in_XMM1_Da = UVar40.fields.z;
            if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position(pUVar18,UVar40,(MethodInfo *)0x0);
              goto label_04293a2b;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adcf8 = '\x01';
  }
  __this_18 = p_Var22[0x15].genericMethod;
  if (__this_18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_18,(Il2CppObject *)__this_14,value_01,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0();
    g_data_057adceb = '\x01';
  }
  pUVar25 = __this_18[1].monitor;
  if (pUVar25 == (UnityEngine_Object_o *)0x0) {
    return;
  }
  pUVar9 = pUVar25->klass;
  bVar4 = (TypeInfo_BaseTitan->_2).naturalAligment;
  if (((pUVar9->_2).naturalAligment < bVar4) || ((pUVar9->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseTitan)
     ) {
    uVar5._0_1_ = (pUVar9->_2).rank;
    uVar5._1_1_ = (pUVar9->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar10 = (pUVar9->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_ITargetable) {
          ppIVar17 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar23) + 1].methodPtr;
          goto label_04293e35;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar23);
    }
    ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar25,TypeInfo_ITargetable,1);
label_04293e35:
    pSVar28 = (System_Int32_array *)(**ppIVar17)(pUVar25);
    __this_18[1].fields._buckets = pSVar28;
    *(float *)&__this_18[1].fields._entries = in_XMM1_Da;
    lVar23._0_4_ = (__this_18->fields)._freeCount;
    lVar23._4_4_ = (__this_18->fields)._version;
joined_r0x0429403e:
    if (((lVar23 != 0) && (*(long *)(lVar23 + 0x70) != 0)) &&
       (pUVar18 = *(UnityEngine_Transform_o **)(*(long *)(lVar23 + 0x70) + 0x10),
       pUVar18 != (UnityEngine_Transform_o *)0x0)) {
      UVar40 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      *(ulong *)((long)&__this_18[1].fields._entries + 4) =
           CONCAT44((float)((ulong)pSVar28 >> 0x20) - UVar40.fields.y,SUB84(pSVar28,0) - UVar40.fields.x);
      __this_18[1].fields._freeList = (int32_t)(in_XMM1_Da - UVar40.fields.z);
      return;
    }
label_04294044:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pUVar25[10].monitor == (void *)0x0) ||
       (__this_14 = *(UnityEngine_Component_o **)((long)pUVar25[10].monitor + 0x68),
       __this_14 == (UnityEngine_Component_o *)0x0)) goto label_04294044;
    bVar4 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if ((bVar4 <= (__this_14->klass->_2).naturalAligment) &&
       ((__this_14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_CapsuleCollider)) {
      pUVar18 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
      if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
        UVar40 = UnityEngine_Transform__get_lossyScale(pUVar18,(MethodInfo *)0x0);
        in_XMM1_Da = UVar40.fields.z;
        fVar33 = UnityEngine_CapsuleCollider__get_radius
                           ((UnityEngine_CapsuleCollider_o *)__this_14,(MethodInfo *)0x0);
        pUVar18 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
        if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
          UVar41 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
          in_XMM1_Da = UVar41.fields.z;
          pUVar18 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
          if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
            UVar42 = UnityEngine_Transform__get_forward(pUVar18,(MethodInfo *)0x0);
            in_XMM1_Da = UVar42.fields.z;
            pUVar18 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
              fStack_1a8 = UVar40.fields.x;
              fStack_1a4 = UVar40.fields.y;
              if (fStack_1a8 <= fStack_1a4) {
                fStack_1a8 = fStack_1a4;
              }
              fVar27 = fVar33 * fStack_1a8 * 1.5;
              fStack_1b8 = UVar42.fields.x;
              fStack_1b4 = UVar42.fields.y;
              fStack_1c8 = UVar41.fields.x;
              fStack_1c4 = UVar41.fields.y;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0.0;
              in_XMM1_Dd = 0.0;
              UVar40 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
              in_XMM1_Da = UVar40.fields.z;
              fVar33 = fVar33 * fStack_1a8 * 0.5;
              __this_18[1].fields._buckets =
                   (System_Int32_array *)
                   CONCAT44(fVar33 * UVar40.fields.y + (fStack_1c4 - fVar27 * fStack_1b4),
                            fVar33 * UVar40.fields.x + (fStack_1c8 - fVar27 * fStack_1b8));
              *(float *)&__this_18[1].fields._entries =
                   fVar33 * in_XMM1_Da + (UVar41.fields.z - fVar27 * UVar42.fields.z);
              __this_01 = (Characters_TitanColliderToggler_o *)pUVar25[10].fields.m_CachedPtr;
              if (__this_01 != (Characters_TitanColliderToggler_o *)0x0) {
                Characters_TitanColliderToggler__RegisterLook(__this_01,(MethodInfo *)0x0);
                pSVar28 = __this_18[1].fields._buckets;
                in_XMM1_Da = *(float *)&__this_18[1].fields._entries;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0.0;
                in_XMM1_Dd = 0.0;
                lVar23._0_4_ = (__this_18->fields)._freeCount;
                lVar23._4_4_ = (__this_18->fields)._version;
                goto joined_r0x0429403e;
              }
            }
          }
        }
      }
      goto label_04294044;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pSStack_218 = __this_18;
  pbStack_210 = pbVar1;
  if (g_data_057adcec == '\0') {
    pUStackY_2a8 = (UnityEngine_Object_o *)0x4294089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pUStackY_2a8 = (UnityEngine_Object_o *)0x4294095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42940a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTargetable_get_Current);
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42940ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42940b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42940c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adcec = '\x01';
  }
  _Stack_270.genericMethod = (void *)0x0;
  uStack_268 = 0;
  pMStack_260 = (Map_MapTargetable_o *)0x0;
  lVar23 = __this_14[1].fields.m_CachedPtr;
  if (((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x70), lVar23 == 0)) ||
     (pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar18 == (UnityEngine_Transform_o *)0x0))
  goto label_04294468;
  pUStackY_2a8 = (UnityEngine_Object_o *)0x429410b;
  UVar40 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
  in_XMM1_Da = UVar40.fields.z;
  lVar23 = __this_14[1].fields.m_CachedPtr;
  fStack_250 = in_XMM1_Da;
  fStack_24c = in_XMM1_Db;
  fStack_248 = in_XMM1_Dc;
  fStack_244 = in_XMM1_Dd;
  if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0xb8), lVar23 == 0)) goto label_04294468;
  x = *(UnityEngine_Object_o **)(lVar23 + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStackY_2a8 = (UnityEngine_Object_o *)0x429414e;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar25 = (UnityEngine_Object_o *)0x0;
  pUStackY_2a8 = (UnityEngine_Object_o *)0x429415d;
  bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_stack_fffffffffffffd60 = INFINITY;
  fStack_27c = UVar40.fields.y;
  fStack_240 = fStack_27c;
  fStack_23c = fStack_27c;
  fStack_280 = UVar40.fields.x;
  if ((char)bVar13 == '\0') {
label_04294192:
    iVar6 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar25 = (UnityEngine_Object_o *)0x0;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto label_04294468;
    if (*(char *)&x[4].monitor != '\0') goto label_04294192;
    lVar23 = x[4].fields.m_CachedPtr;
    if ((lVar23 == 0) ||
       (pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar18 == (UnityEngine_Transform_o *)0x0))
    goto label_04294468;
    pUStackY_2a8 = (UnityEngine_Object_o *)0x429435a;
    UVar40 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
    fVar34 = UVar40.fields.z;
    fVar33 = UVar40.fields.x;
    fVar27 = UVar40.fields.y;
    uVar37 = extraout_XMM0_Dc_00;
    uVar38 = extraout_XMM0_Dd_00;
    if (g_data_057a68cb == '\0') {
      pUStackY_2a8 = (UnityEngine_Object_o *)0x429437b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      in_stack_fffffffffffffd64 = fVar27;
      in_stack_fffffffffffffd68 = uVar37;
      in_stack_fffffffffffffd6c = uVar38;
      in_stack_fffffffffffffd70 = fVar34;
      in_stack_fffffffffffffd74 = in_XMM1_Db;
    }
    fVar36 = fVar27 - fStack_240;
    fVar34 = fVar34 - fStack_250;
    fVar33 = fVar33 - fStack_280;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      pUStackY_2a8 = (UnityEngine_Object_o *)0x42943c6;
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffd64 = fVar27;
      in_stack_fffffffffffffd68 = uVar37;
      in_stack_fffffffffffffd6c = uVar38;
      in_stack_fffffffffffffd70 = fVar34;
      in_stack_fffffffffffffd74 = fVar33;
    }
    in_stack_fffffffffffffd60 = fVar33 * fVar33 + fVar36 * fVar36 + fVar34 * fVar34;
    if (in_stack_fffffffffffffd60 < 0.0) {
      pUStackY_2a8 = (UnityEngine_Object_o *)0x4294437;
      in_stack_fffffffffffffd60 = sqrtf(in_stack_fffffffffffffd60);
    }
    else {
      in_stack_fffffffffffffd60 = SQRT(in_stack_fffffffffffffd60);
    }
    in_XMM1_Da = INFINITY;
    if (in_stack_fffffffffffffd60 < INFINITY) {
      in_XMM1_Da = *(float *)&__this_14[2].klass;
      in_XMM1_Db = 0.0;
      if (in_stack_fffffffffffffd60 < in_XMM1_Da) {
        iVar6 = *(int *)(TypeInfo_MapLoader + 0xe4);
        pUVar25 = x;
        goto joined_r0x042941a3;
      }
    }
    in_stack_fffffffffffffd60 = INFINITY;
    in_XMM1_Db = 0.0;
    iVar6 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar25 = (UnityEngine_Object_o *)0x0;
  }
joined_r0x042941a3:
  if (iVar6 == 0) {
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42941aa;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42941d5;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_230,__this_02,MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    fStack_248 = fStack_24c;
    pMStack_260 = pMStack_220;
    _Stack_270 = _Stack_230;
    uStack_268 = uStack_228;
    fStack_24c = fStack_280;
    fStack_244 = fStack_27c;
label_04294220:
    do {
      do {
        do {
          pUStackY_2a8 = (UnityEngine_Object_o *)0x429422c;
          __this_03.fields._list._4_4_ = in_stack_fffffffffffffd64;
          __this_03.fields._list._0_4_ = in_stack_fffffffffffffd60;
          __this_03.fields._index = in_stack_fffffffffffffd68;
          __this_03.fields._version = in_stack_fffffffffffffd6c;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffd70;
          __this_03.fields._current._4_4_ = in_stack_fffffffffffffd74;
          bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_03,(MethodInfo_321A1D0 *)&_Stack_270);
          __this_12 = pMStack_260;
          if ((char)bVar13 == '\0') {
            pUStackY_2a8 = (UnityEngine_Object_o *)0x4294324;
            __this_04.fields._list._4_4_ = in_stack_fffffffffffffd64;
            __this_04.fields._list._0_4_ = in_stack_fffffffffffffd60;
            __this_04.fields._index = in_stack_fffffffffffffd68;
            __this_04.fields._version = in_stack_fffffffffffffd6c;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffd70;
            __this_04.fields._current._4_4_ = in_stack_fffffffffffffd74;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&_Stack_270);
            return;
          }
        } while (pMStack_260 == (Map_MapTargetable_o *)0x0);
        pUStackY_2a8 = (UnityEngine_Object_o *)0x4294248;
        bVar13 = Map_MapTargetable__ValidTarget(pMStack_260,(MethodInfo *)0x0);
      } while ((char)bVar13 == '\0');
      pUStackY_2a8 = (UnityEngine_Object_o *)0x4294256;
      UVar40 = Map_MapTargetable__GetPosition(__this_12,(MethodInfo *)0x0);
      in_stack_fffffffffffffd70 = UVar40.fields.x;
      in_stack_fffffffffffffd74 = UVar40.fields.y;
      if (g_data_057a68cb == '\0') {
        pUStackY_2a8 = (UnityEngine_Object_o *)0x4294280;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
        iVar6 = *(int *)((long)TypeInfo_Math + 0xe4);
      }
      else {
        iVar6 = *(int *)((long)TypeInfo_Math + 0xe4);
      }
      if (iVar6 == 0) {
        pUStackY_2a8 = (UnityEngine_Object_o *)0x4294299;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar33 = UVar40.fields.z - fStack_250;
      fVar33 = (in_stack_fffffffffffffd70 - fStack_24c) * (in_stack_fffffffffffffd70 - fStack_24c) +
               (in_stack_fffffffffffffd74 - fStack_240) * (in_stack_fffffffffffffd74 - fStack_240) +
               fVar33 * fVar33;
      if (fVar33 < 0.0) goto label_042942eb;
      fVar33 = SQRT(fVar33);
    } while (in_stack_fffffffffffffd60 <= fVar33);
    goto label_04294210;
  }
label_04294468:
  pUStackY_2a8 = (UnityEngine_Object_o *)0x429446d;
  auVar43 = il2cpp_runtime_helper_022b2c90();
  uVar20 = auVar43._0_8_;
  if (auVar43._8_4_ == 1) {
    pUStackY_2a8 = (UnityEngine_Object_o *)0x429449d;
    plVar19 = (long *)__cxa_begin_catch(uVar20);
    lVar23 = *plVar19;
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42944a5;
    __cxa_end_catch();
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42944b9;
    __this_05.fields._list._4_4_ = in_stack_fffffffffffffd64;
    __this_05.fields._list._0_4_ = in_stack_fffffffffffffd60;
    __this_05.fields._index = in_stack_fffffffffffffd68;
    __this_05.fields._version = in_stack_fffffffffffffd6c;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffd70;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffd74;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_270);
    if (lVar23 == 0) {
      return;
    }
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42944ca;
    uVar20 = il2cpp_runtime_helper_022fefe0(lVar23);
  }
  else {
    lVar23 = 0;
  }
  pUStackY_2a8 = (UnityEngine_Object_o *)0x42944e1;
  __this_06.fields._list._4_4_ = in_stack_fffffffffffffd64;
  __this_06.fields._list._0_4_ = in_stack_fffffffffffffd60;
  __this_06.fields._index = in_stack_fffffffffffffd68;
  __this_06.fields._version = in_stack_fffffffffffffd6c;
  __this_06.fields._current._0_4_ = in_stack_fffffffffffffd70;
  __this_06.fields._current._4_4_ = in_stack_fffffffffffffd74;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&_Stack_270);
  if (lVar23 == 0) {
    pUStackY_2a8 = (UnityEngine_Object_o *)0x42944ee;
    _Unwind_Resume(uVar20);
  }
  pUStackY_2a8 = (UnityEngine_Object_o *)0x42944f6;
  lVar21 = il2cpp_runtime_helper_022fefe0(lVar23);
  pUStackY_2a8 = (UnityEngine_Object_o *)0x42944fe;
  il2cpp_runtime_helper_01f66400();
  lStackY_2b0 = lVar23;
  pUStackY_2a8 = pUVar25;
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar19 = *(long **)(lVar21 + 0x58);
  if (plVar19 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar37 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar21 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar21 + 0x90) = uVar37;
    *(undefined8 *)(lVar21 + 0x78) = 0;
    *(undefined8 *)(lVar21 + 0x80) = 0;
    return;
  }
  lVar23 = *plVar19;
  if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
    lVar24 = 0;
    do {
      if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_ITargetable) {
        puVar14 = (undefined8 *)
                  (lVar23 + (long)(*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) + 1) * 0x10 + 0x138);
        goto label_04294606;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
  }
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,TypeInfo_ITargetable,1);
label_04294606:
  __this_20.fields.value.fields._4_8_ = (*(code *)*puVar14)(plVar19,puVar14[1]);
  if (*(char *)(lVar21 + 0x78) == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Db = 0.0;
      g_data_057a65d5 = '\x01';
    }
    uVar37 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar21 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar21 + 0x90) = uVar37;
  }
  else {
    fStackY_2c8 = (float)__this_20.fields.value.fields._4_8_ - (float)*(undefined8 *)(lVar21 + 0x7c);
    fStackY_2c4 = (float)((ulong)__this_20.fields.value.fields._4_8_ >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar21 + 0x7c) >> 0x20);
    fStackY_2c0 = extraout_XMM0_Dc_01 - 0.0;
    fStackY_2bc = extraout_XMM0_Dd_01 - 0.0;
    fVar33 = *(float *)(lVar21 + 0x84);
    fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Db = 0.0;
    auVar11._4_4_ = fStackY_2c4;
    auVar11._0_4_ = fStackY_2c8;
    auVar11._8_4_ = fStackY_2c0;
    auVar11._12_4_ = fStackY_2bc;
    auVar39._4_4_ = fVar27;
    auVar39._0_4_ = fVar27;
    auVar39._8_4_ = extraout_XMM0_Dc_02;
    auVar39._12_4_ = extraout_XMM0_Dd_02;
    auVar39 = divps(auVar11,auVar39);
    *(long *)(lVar21 + 0x88) = auVar39._0_8_;
    *(float *)(lVar21 + 0x90) = (in_XMM1_Da - fVar33) / fVar27;
  }
  uStackY_2d8 = 0;
  uStackY_2d0 = 0;
  UVar41.fields.y = in_XMM1_Db;
  UVar41.fields.x = in_XMM1_Da;
  UVar41.fields.z = (float)__this_20.fields.value.fields._4_8_;
  __this_20.fields._0_8_ = &uStackY_2d8;
  System_Nullable_Vector3____ctor(__this_20,UVar41,MethodInfo_Nullable_1_UnityEngine_Vector3);
  *(undefined8 *)(lVar21 + 0x78) = uStackY_2d8;
  *(undefined8 *)(lVar21 + 0x80) = uStackY_2d0;
  return;
label_042942eb:
  pUStackY_2a8 = (UnityEngine_Object_o *)0x42942f0;
  fVar33 = sqrtf(fVar33);
  if (fVar33 < in_stack_fffffffffffffd60) {
label_04294210:
    if (fVar33 < *(float *)&__this_14[2].klass) {
      in_stack_fffffffffffffd60 = fVar33;
    }
  }
  goto label_04294220;
}


// Controllers.HumanAIController$$Awake
// il2cpp: void Controllers_HumanAIController__Awake (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4293720

void Controllers_HumanAIController__Awake(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o **ppCVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar7;
  UnityEngine_Object_c *pUVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Characters_TitanColliderToggler_o *__this_01;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_02;
  undefined1 auVar10 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  UnityEngine_AI_NavMeshHit_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o __this_08;
  UnityEngine_AI_NavMeshBuildSettings_o __this_09;
  UnityEngine_AI_NavMeshBuildSettings_o __this_10;
  UnityEngine_AI_NavMeshHit_o __this_11;
  Map_MapTargetable_o *__this_12;
  bool_conflict bVar11;
  uint value;
  Characters_BaseCharacter_o *pCVar12;
  Characters_Human_o *pCVar13;
  _union_14 *p_Var14;
  Il2CppObject *pIVar15;
  UnityEngine_GameObject_o *__this_13;
  VirtualInvokeData *pVVar16;
  UnityEngine_Transform_o *pUVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  Il2CppObject *value_00;
  UnityEngine_Component_o *key;
  UnityEngine_Component_o *__this_14;
  _union_14 *__this_15;
  _union_14 *p_Var22;
  _union_14 *__this_16;
  System_Collections_Generic_Dictionary_object__object__o *__this_17;
  long lVar23;
  long lVar24;
  UnityEngine_Object_o *pUVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  System_Int32_array *pSVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float fVar32;
  float fVar33;
  float fVar34;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  undefined1 auVar43 [12];
  System_Nullable_Vector3__o __this_18;
  undefined8 uStackY_2a0;
  undefined8 uStackY_298;
  float fStackY_290;
  float fStackY_28c;
  float fStackY_288;
  float fStackY_284;
  long lStackY_278;
  UnityEngine_Object_o *pUStackY_270;
  float in_stack_fffffffffffffd98;
  float in_stack_fffffffffffffd9c;
  undefined4 in_stack_fffffffffffffda0;
  undefined4 in_stack_fffffffffffffda4;
  float in_stack_fffffffffffffda8;
  float in_stack_fffffffffffffdac;
  float fStack_248;
  float fStack_244;
  _union_249689 _Stack_238;
  undefined8 uStack_230;
  Map_MapTargetable_o *pMStack_228;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  _union_249689 _Stack_1f8;
  undefined8 uStack_1f0;
  Map_MapTargetable_o *pMStack_1e8;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_1e0;
  float fStack_190;
  float fStack_18c;
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  undefined1 in_stack_fffffffffffffed0 [12];
  float in_stack_fffffffffffffedc;
  float in_stack_fffffffffffffee0;
  float in_stack_fffffffffffffee4;
  undefined4 in_stack_fffffffffffffee8;
  undefined4 in_stack_fffffffffffffeec;
  _union_14 _Stack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  float fStack_a0;
  float fStack_9c;
  UnityEngine_AI_NavMeshBuildSettings_o UStack_90;
  Controllers_HumanAIController_o *pCStack_50;
  Characters_Human_o **ppCStack_48;
  _union_14 _Var44;
  Il2CppMethodPointer pIVar45;
  InvokerMethod pIVar46;
  char *pcVar47;
  int32_t iVar48;
  
  p_Var22 = (_union_14 *)&stack0xffffffffffffffc8;
  p_Var14 = (_union_14 *)&stack0xffffffffffffffc8;
  if (g_data_057adce9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adce9 = '\x01';
  }
  pIVar46 = (InvokerMethod)0x0;
  pcVar47 = (char *)0x0;
  _Var44.genericMethod = (void *)0x0;
  pIVar45 = (Il2CppMethodPointer)0x0;
  iVar48 = 0;
  if (g_data_057adcc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    g_data_057adcc2 = '\x01';
  }
  pCVar12 = (Characters_BaseCharacter_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar12;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._character,pCVar12);
  pCVar13 = (Characters_Human_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Human_GetComponent_Human);
  ppCVar1 = &(__this->fields)._human;
  (__this->fields)._human = pCVar13;
  __this_15 = (_union_14 *)ppCVar1;
  il2cpp_runtime_helper_022b4080();
  lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x50), lVar23 != 0)) &&
     (lVar23 = *(long *)(lVar23 + 0xa8), lVar23 != 0)) {
    cVar2 = *(char *)(lVar23 + 0x11);
    *(char *)&(__this->fields).AIStates = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    if ((*ppCVar1 != (Characters_Human_o *)0x0) && (lVar23 = *(long *)&((*ppCVar1)->fields).Dead, lVar23 != 0)
       ) {
      pUVar17 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
      __this_15 = (_union_14 *)0x0;
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        in_XMM1_Da = UVar40.fields.z;
        bVar11 = UnityEngine_AI_NavMesh__SamplePosition
                           (UVar40,(UnityEngine_AI_NavMeshHit_o *)&stack0xffffffffffffffc8,100.0,-1,
                            (MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        __this_15 = p_Var22;
        if ((*ppCVar1 != (Characters_Human_o *)0x0) &&
           (lVar23 = *(long *)&((*ppCVar1)->fields).Dead, lVar23 != 0)) {
          pUVar17 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
          __this_11.fields._8_8_ = pIVar45;
          __this_11.fields.m_Position.fields._0_8_ = _Var44.genericMethod;
          __this_11.fields.m_Normal.fields._4_8_ = pIVar46;
          __this_11.fields._24_8_ = pcVar47;
          __this_11.fields.m_Hit = iVar48;
          UVar40 = UnityEngine_AI_NavMeshHit__get_position(__this_11,(MethodInfo *)&stack0xffffffffffffffc8);
          in_XMM1_Da = UVar40.fields.z;
          __this = (Controllers_HumanAIController_o *)0x0;
          __this_15 = p_Var14;
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position(pUVar17,UVar40,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_50 = __this;
  ppCStack_48 = ppCVar1;
  if (g_data_057adcea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcea = '\x01';
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  _Stack_d0.genericMethod = (void *)0x0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uVar37 = 0;
  p_Var14 = (_union_14 *)il2cpp_runtime_helper_023052d0(TypeInfo_MoveTo);
  __this_14 = (UnityEngine_Component_o *)0x0;
  p_Var22 = p_Var14;
  Controllers_HumanAIStates_MoveTo___ctor((Controllers_HumanAIStates_MoveTo_o *)p_Var14,(MethodInfo *)0x0);
  if (p_Var14 != (_union_14 *)0x0) {
    __this_14 = __this_15[5].genericMethod;
    pIVar15 = (Il2CppObject *)
              (**(code **)((long)p_Var14->genericMethod + 0x188))
                        (p_Var14,__this_14,*(undefined8 *)((long)p_Var14->genericMethod + 400));
    key = "MoveTo";
    if (g_data_057adcf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057adcf8 = '\x01';
    }
    p_Var22 = __this_15[0x15].genericMethod;
    if (p_Var22 != (_union_14 *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)p_Var22,(Il2CppObject *)key,
                 pIVar15,MethodInfo_Void_set_Item);
      if (*(char *)(__this_15 + 0x16) == '\0') {
        return;
      }
      __this_14 = key;
      if ((__this_15[5].genericMethod != (Il2CppType *)0x0) &&
         (pvVar6 = __this_15[5].genericMethod[7].data, pvVar6 != (void *)0x0)) {
        pUVar17 = *(UnityEngine_Transform_o **)((long)pvVar6 + 0x10);
        p_Var22 = (_union_14 *)0x0;
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
          in_XMM1_Da = UVar40.fields.z;
          p_Var22 = &_Stack_d0;
          __this_14 = (UnityEngine_Component_o *)&g_data_ffffffff;
          bVar11 = UnityEngine_AI_NavMesh__SamplePosition
                             (UVar40,(UnityEngine_AI_NavMeshHit_o *)p_Var22,100.0,-1,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
label_04293a2b:
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Utility_Util__GetAgentSettingsCorrected(&UStack_90,1.0,(MethodInfo *)0x0);
            uVar37 = UStack_90.fields.m_AgentTypeID;
            uVar38 = UStack_90.fields.m_AgentRadius;
            __this_14 = (UnityEngine_Component_o *)0x0;
            p_Var22 = __this_15;
            fVar33 = UStack_90.fields.m_AgentClimb;
            fVar27 = UStack_90.fields.m_LedgeDropHeight;
            fVar34 = UStack_90.fields.m_MaxJumpAcrossDistance;
            fVar36 = UStack_90.fields.m_MinRegionArea;
            __this_13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_15,(MethodInfo *)0x0);
            in_XMM1_Da = UStack_90.fields.m_AgentClimb;
            in_XMM1_Db = UStack_90.fields.m_LedgeDropHeight;
            in_XMM1_Dc = UStack_90.fields.m_MaxJumpAcrossDistance;
            in_XMM1_Dd = UStack_90.fields.m_MinRegionArea;
            if (__this_13 != (UnityEngine_GameObject_o *)0x0) {
              pIVar15 = UnityEngine_GameObject__AddComponent_object_(__this_13,MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
              p_Var14 = __this_15 + 0x17;
              __this_15[0x17].genericMethod = pIVar15;
              il2cpp_runtime_helper_022b4080(p_Var14);
              __this_16 = __this_15[0x17].genericMethod;
              p_Var22 = (_union_14 *)&stack0xfffffffffffffef0;
              __this_14 = (UnityEngine_Component_o *)0x0;
              __this_08.fields.m_AgentSlope = in_stack_fffffffffffffedc;
              __this_08.fields.m_AgentTypeID = in_stack_fffffffffffffed0._0_4_;
              __this_08.fields.m_AgentRadius = (float)in_stack_fffffffffffffed0._4_4_;
              __this_08.fields.m_AgentHeight = (float)in_stack_fffffffffffffed0._8_4_;
              __this_08.fields.m_AgentClimb = in_stack_fffffffffffffee0;
              __this_08.fields.m_LedgeDropHeight = in_stack_fffffffffffffee4;
              __this_08.fields.m_MaxJumpAcrossDistance = (float)in_stack_fffffffffffffee8;
              __this_08.fields.m_MinRegionArea = (float)in_stack_fffffffffffffeec;
              __this_08.fields.m_OverrideVoxelSize = uVar37;
              __this_08.fields.m_VoxelSize = (float)uVar38;
              __this_08.fields.m_OverrideTileSize = (int32_t)UStack_90.fields.m_AgentHeight;
              __this_08.fields.m_TileSize = (int32_t)UStack_90.fields.m_AgentSlope;
              __this_08.fields.m_BuildHeightMesh = (int32_t)fVar33;
              __this_08.fields.m_MaxJobWorkers = (uint32_t)fVar27;
              __this_08.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar34;
              __this_08.fields._60_4_ = fVar36;
              value = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID(__this_08,(MethodInfo *)p_Var22);
              in_XMM1_Da = UStack_90.fields.m_AgentClimb;
              in_XMM1_Db = UStack_90.fields.m_LedgeDropHeight;
              in_XMM1_Dc = UStack_90.fields.m_MaxJumpAcrossDistance;
              in_XMM1_Dd = UStack_90.fields.m_MinRegionArea;
              if (__this_16 != (_union_14 *)0x0) {
                __this_14 = (UnityEngine_Component_o *)(ulong)value;
                UnityEngine_AI_NavMeshAgent__set_agentTypeID
                          ((UnityEngine_AI_NavMeshAgent_o *)__this_16,value,(MethodInfo *)0x0);
                p_Var22 = __this_16;
                in_XMM1_Da = UStack_90.fields.m_AgentClimb;
                in_XMM1_Db = UStack_90.fields.m_LedgeDropHeight;
                in_XMM1_Dc = UStack_90.fields.m_MaxJumpAcrossDistance;
                in_XMM1_Dd = UStack_90.fields.m_MinRegionArea;
                if ((__this_15[5].genericMethod != (Il2CppType *)0x0) &&
                   (pvVar6 = __this_15[5].genericMethod[7].data, pvVar6 != (void *)0x0)) {
                  __this_00 = *(UnityEngine_Rigidbody_o **)((long)pvVar6 + 0x18);
                  p_Var22 = (_union_14 *)0x0;
                  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
                    pUVar7 = __this_15[0x17].genericMethod;
                    __this_14 = (UnityEngine_Component_o *)0x0;
                    UVar40 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
                    fVar32 = UVar40.fields.z;
                    fVar26 = UVar40.fields.x;
                    fVar29 = UVar40.fields.y;
                    uVar30 = extraout_XMM0_Dc;
                    uVar31 = extraout_XMM0_Dd;
                    uVar19 = UStack_90.fields._8_8_;
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      UStack_90.fields.m_LedgeDropHeight = 0.0;
                      UStack_90.fields.m_MaxJumpAcrossDistance = 0.0;
                      UStack_90.fields.m_MinRegionArea = 0.0;
                      g_data_057a6841 = '\x01';
                      in_stack_fffffffffffffedc = fVar32;
                      in_stack_fffffffffffffee0 = fVar26;
                      in_stack_fffffffffffffee4 = fVar29;
                      in_stack_fffffffffffffee8 = uVar30;
                      in_stack_fffffffffffffeec = uVar31;
                      uVar19 = UStack_90.fields._8_8_;
                    }
                    p_Var22 = TypeInfo_Math;
                    fVar35 = fVar29;
                    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                      fStack_a0 = fVar29;
                      fStack_9c = fVar29;
                      il2cpp_runtime_helper_02337ed0();
                      UStack_90.fields.m_LedgeDropHeight = 0.0;
                      UStack_90.fields.m_MaxJumpAcrossDistance = 0.0;
                      UStack_90.fields.m_MinRegionArea = 0.0;
                      fVar35 = fStack_a0;
                      in_stack_fffffffffffffedc = fVar32;
                      in_stack_fffffffffffffee0 = fVar26;
                      in_stack_fffffffffffffee4 = fVar29;
                      in_stack_fffffffffffffee8 = uVar30;
                      in_stack_fffffffffffffeec = uVar31;
                    }
                    in_XMM1_Da = fVar32 * fVar32 + fVar35 * fVar35 + fVar26 * fVar26;
                    if (in_XMM1_Da < 0.0) {
                      fVar26 = sqrtf(in_XMM1_Da);
                      in_XMM1_Db = UStack_90.fields.m_LedgeDropHeight;
                      in_XMM1_Dc = UStack_90.fields.m_MaxJumpAcrossDistance;
                      in_XMM1_Dd = UStack_90.fields.m_MinRegionArea;
                    }
                    else {
                      fVar26 = SQRT(in_XMM1_Da);
                      in_XMM1_Db = UStack_90.fields.m_LedgeDropHeight;
                      in_XMM1_Dc = UStack_90.fields.m_MaxJumpAcrossDistance;
                      in_XMM1_Dd = UStack_90.fields.m_MinRegionArea;
                    }
                    if (pUVar7 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      __this_14 = (UnityEngine_Component_o *)0x0;
                      UnityEngine_AI_NavMeshAgent__set_speed(pUVar7,fVar26,(MethodInfo *)0x0);
                      p_Var22 = (_union_14 *)0x0;
                      if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        __this_14 = (UnityEngine_Component_o *)0x0;
                        UnityEngine_AI_NavMeshAgent__set_angularSpeed
                                  (p_Var14->genericMethod,10.0,(MethodInfo *)0x0);
                        p_Var22 = (_union_14 *)0x0;
                        if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                          __this_14 = (UnityEngine_Component_o *)0x0;
                          UnityEngine_AI_NavMeshAgent__set_acceleration
                                    (p_Var14->genericMethod,100.0,(MethodInfo *)0x0);
                          p_Var22 = (_union_14 *)0x0;
                          if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            __this_14 = (UnityEngine_Component_o *)0x1;
                            UnityEngine_AI_NavMeshAgent__set_autoRepath
                                      (p_Var14->genericMethod,1,(MethodInfo *)0x0);
                            p_Var22 = (_union_14 *)0x0;
                            if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              __this_14 = (UnityEngine_Component_o *)0x0;
                              UnityEngine_AI_NavMeshAgent__set_stoppingDistance
                                        (p_Var14->genericMethod,1.1,(MethodInfo *)0x0);
                              p_Var22 = (_union_14 *)0x0;
                              if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                UnityEngine_AI_NavMeshAgent__set_autoBraking
                                          (p_Var14->genericMethod,0,(MethodInfo *)0x0);
                                pUVar7 = p_Var14->genericMethod;
                                p_Var22 = (_union_14 *)&stack0xfffffffffffffef0;
                                __this_14 = (UnityEngine_Component_o *)0x0;
                                __this_09.fields.m_AgentSlope = in_stack_fffffffffffffedc;
                                __this_09.fields.m_AgentTypeID = in_stack_fffffffffffffed0._0_4_;
                                __this_09.fields.m_AgentRadius = (float)in_stack_fffffffffffffed0._4_4_;
                                __this_09.fields.m_AgentHeight = (float)in_stack_fffffffffffffed0._8_4_;
                                __this_09.fields.m_AgentClimb = in_stack_fffffffffffffee0;
                                __this_09.fields.m_LedgeDropHeight = in_stack_fffffffffffffee4;
                                __this_09.fields.m_MaxJumpAcrossDistance = (float)in_stack_fffffffffffffee8;
                                __this_09.fields.m_MinRegionArea = (float)in_stack_fffffffffffffeec;
                                __this_09.fields.m_OverrideVoxelSize = uVar37;
                                __this_09.fields.m_VoxelSize = (float)uVar38;
                                __this_09.fields.m_OverrideTileSize = (int32_t)(float)uVar19;
                                __this_09.fields.m_TileSize = (int32_t)SUB84(uVar19,4);
                                __this_09.fields.m_BuildHeightMesh = (int32_t)fVar33;
                                __this_09.fields.m_MaxJobWorkers = (uint32_t)fVar27;
                                __this_09.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar34;
                                __this_09.fields._60_4_ = fVar36;
                                fVar26 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                                                   (__this_09,(MethodInfo *)p_Var22);
                                if (pUVar7 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                  UnityEngine_AI_NavMeshAgent__set_radius(pUVar7,fVar26,(MethodInfo *)0x0);
                                  pUVar7 = p_Var14->genericMethod;
                                  p_Var22 = (_union_14 *)&stack0xfffffffffffffef0;
                                  __this_14 = (UnityEngine_Component_o *)0x0;
                                  __this_10.fields.m_AgentSlope = in_stack_fffffffffffffedc;
                                  __this_10.fields.m_AgentTypeID = in_stack_fffffffffffffed0._0_4_;
                                  __this_10.fields.m_AgentRadius = (float)in_stack_fffffffffffffed0._4_4_;
                                  __this_10.fields.m_AgentHeight = (float)in_stack_fffffffffffffed0._8_4_;
                                  __this_10.fields.m_AgentClimb = in_stack_fffffffffffffee0;
                                  __this_10.fields.m_LedgeDropHeight = in_stack_fffffffffffffee4;
                                  __this_10.fields.m_MaxJumpAcrossDistance = (float)in_stack_fffffffffffffee8;
                                  __this_10.fields.m_MinRegionArea = (float)in_stack_fffffffffffffeec;
                                  __this_10.fields.m_OverrideVoxelSize = uVar37;
                                  __this_10.fields.m_VoxelSize = (float)uVar38;
                                  __this_10.fields.m_OverrideTileSize = (int32_t)(float)uVar19;
                                  __this_10.fields.m_TileSize = (int32_t)SUB84(uVar19,4);
                                  __this_10.fields.m_BuildHeightMesh = (int32_t)fVar33;
                                  __this_10.fields.m_MaxJobWorkers = (uint32_t)fVar27;
                                  __this_10.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar34;
                                  __this_10.fields._60_4_ = fVar36;
                                  fVar33 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                                                     (__this_10,(MethodInfo *)p_Var22);
                                  if (pUVar7 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                    __this_14 = (UnityEngine_Component_o *)0x0;
                                    UnityEngine_AI_NavMeshAgent__set_height(pUVar7,fVar33,(MethodInfo *)0x0);
                                    p_Var22 = (_union_14 *)0x0;
                                    if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                      __this_14 = (UnityEngine_Component_o *)0x0;
                                      UnityEngine_AI_NavMeshAgent__set_updatePosition
                                                (p_Var14->genericMethod,0,(MethodInfo *)0x0);
                                      p_Var22 = (_union_14 *)0x0;
                                      if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                        __this_14 = (UnityEngine_Component_o *)0x0;
                                        UnityEngine_AI_NavMeshAgent__set_updateRotation
                                                  (p_Var14->genericMethod,0,(MethodInfo *)0x0);
                                        p_Var22 = (_union_14 *)0x0;
                                        if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                          __this_14 = (UnityEngine_Component_o *)0x2;
                                          UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                                                    (p_Var14->genericMethod,2,(MethodInfo *)0x0);
                                          p_Var22 = (_union_14 *)0x0;
                                          if (p_Var14->genericMethod != (UnityEngine_AI_NavMeshAgent_o *)0x0)
                                          {
                                            UnityEngine_AI_NavMeshAgent__set_avoidancePriority
                                                      (p_Var14->genericMethod,0,(MethodInfo *)0x0);
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
          else if ((__this_15[5].genericMethod != (Il2CppType *)0x0) &&
                  (pvVar6 = __this_15[5].genericMethod[7].data, pvVar6 != (void *)0x0)) {
            pUVar17 = *(UnityEngine_Transform_o **)((long)pvVar6 + 0x10);
            p_Var22 = &_Stack_d0;
            __this_14 = (UnityEngine_Component_o *)0x0;
            __this_07.fields.m_Normal.fields.x = in_stack_fffffffffffffedc;
            __this_07.fields.m_Position.fields.x = (float)in_stack_fffffffffffffed0._0_4_;
            __this_07.fields.m_Position.fields.y = (float)in_stack_fffffffffffffed0._4_4_;
            __this_07.fields.m_Position.fields.z = (float)in_stack_fffffffffffffed0._8_4_;
            __this_07.fields.m_Normal.fields.y = in_stack_fffffffffffffee0;
            __this_07.fields.m_Normal.fields.z = in_stack_fffffffffffffee4;
            __this_07.fields.m_Distance = (float)in_stack_fffffffffffffee8;
            __this_07.fields.m_Mask = in_stack_fffffffffffffeec;
            __this_07.fields.m_Hit = uVar37;
            UVar40 = UnityEngine_AI_NavMeshHit__get_position(__this_07,(MethodInfo *)p_Var22);
            in_XMM1_Da = UVar40.fields.z;
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position(pUVar17,UVar40,(MethodInfo *)0x0);
              goto label_04293a2b;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adcf8 = '\x01';
  }
  __this_17 = p_Var22[0x15].genericMethod;
  if (__this_17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_17,(Il2CppObject *)__this_14,value_00,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0();
    g_data_057adceb = '\x01';
  }
  pUVar25 = __this_17[1].monitor;
  if (pUVar25 == (UnityEngine_Object_o *)0x0) {
    return;
  }
  pUVar8 = pUVar25->klass;
  bVar3 = (TypeInfo_BaseTitan->_2).naturalAligment;
  if (((pUVar8->_2).naturalAligment < bVar3) || ((pUVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BaseTitan)
     ) {
    uVar4._0_1_ = (pUVar8->_2).rank;
    uVar4._1_1_ = (pUVar8->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar9 = (pUVar8->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_ITargetable) {
          pVVar16 = &(pUVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar23) + 1);
          goto label_04293e35;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar23);
    }
    pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar25,TypeInfo_ITargetable,1);
label_04293e35:
    pSVar28 = (System_Int32_array *)(*pVVar16->methodPtr)(pUVar25);
    __this_17[1].fields._buckets = pSVar28;
    *(float *)&__this_17[1].fields._entries = in_XMM1_Da;
    lVar23._0_4_ = (__this_17->fields)._freeCount;
    lVar23._4_4_ = (__this_17->fields)._version;
joined_r0x0429403e:
    if (((lVar23 != 0) && (*(long *)(lVar23 + 0x70) != 0)) &&
       (pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar23 + 0x70) + 0x10),
       pUVar17 != (UnityEngine_Transform_o *)0x0)) {
      UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      *(ulong *)((long)&__this_17[1].fields._entries + 4) =
           CONCAT44((float)((ulong)pSVar28 >> 0x20) - UVar40.fields.y,SUB84(pSVar28,0) - UVar40.fields.x);
      __this_17[1].fields._freeList = (int32_t)(in_XMM1_Da - UVar40.fields.z);
      return;
    }
label_04294044:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pUVar25[10].monitor == (void *)0x0) ||
       (__this_14 = *(UnityEngine_Component_o **)((long)pUVar25[10].monitor + 0x68),
       __this_14 == (UnityEngine_Component_o *)0x0)) goto label_04294044;
    bVar3 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if ((bVar3 <= (__this_14->klass->_2).naturalAligment) &&
       ((__this_14->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CapsuleCollider)) {
      pUVar17 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        UVar40 = UnityEngine_Transform__get_lossyScale(pUVar17,(MethodInfo *)0x0);
        in_XMM1_Da = UVar40.fields.z;
        fVar33 = UnityEngine_CapsuleCollider__get_radius
                           ((UnityEngine_CapsuleCollider_o *)__this_14,(MethodInfo *)0x0);
        pUVar17 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          UVar41 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
          in_XMM1_Da = UVar41.fields.z;
          pUVar17 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            UVar42 = UnityEngine_Transform__get_forward(pUVar17,(MethodInfo *)0x0);
            in_XMM1_Da = UVar42.fields.z;
            pUVar17 = UnityEngine_Component__get_transform(__this_14,(MethodInfo *)0x0);
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              fStack_170 = UVar40.fields.x;
              fStack_16c = UVar40.fields.y;
              if (fStack_170 <= fStack_16c) {
                fStack_170 = fStack_16c;
              }
              fVar27 = fVar33 * fStack_170 * 1.5;
              fStack_180 = UVar42.fields.x;
              fStack_17c = UVar42.fields.y;
              fStack_190 = UVar41.fields.x;
              fStack_18c = UVar41.fields.y;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0.0;
              in_XMM1_Dd = 0.0;
              UVar40 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
              in_XMM1_Da = UVar40.fields.z;
              fVar33 = fVar33 * fStack_170 * 0.5;
              __this_17[1].fields._buckets =
                   (System_Int32_array *)
                   CONCAT44(fVar33 * UVar40.fields.y + (fStack_18c - fVar27 * fStack_17c),
                            fVar33 * UVar40.fields.x + (fStack_190 - fVar27 * fStack_180));
              *(float *)&__this_17[1].fields._entries =
                   fVar33 * in_XMM1_Da + (UVar41.fields.z - fVar27 * UVar42.fields.z);
              __this_01 = (Characters_TitanColliderToggler_o *)pUVar25[10].fields.m_CachedPtr;
              if (__this_01 != (Characters_TitanColliderToggler_o *)0x0) {
                Characters_TitanColliderToggler__RegisterLook(__this_01,(MethodInfo *)0x0);
                pSVar28 = __this_17[1].fields._buckets;
                in_XMM1_Da = *(float *)&__this_17[1].fields._entries;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0.0;
                in_XMM1_Dd = 0.0;
                lVar23._0_4_ = (__this_17->fields)._freeCount;
                lVar23._4_4_ = (__this_17->fields)._version;
                goto joined_r0x0429403e;
              }
            }
          }
        }
      }
      goto label_04294044;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pSStack_1e0 = __this_17;
  if (g_data_057adcec == '\0') {
    pUStackY_270 = (UnityEngine_Object_o *)0x4294089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pUStackY_270 = (UnityEngine_Object_o *)0x4294095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pUStackY_270 = (UnityEngine_Object_o *)0x42940a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTargetable_get_Current);
    pUStackY_270 = (UnityEngine_Object_o *)0x42940ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    pUStackY_270 = (UnityEngine_Object_o *)0x42940b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pUStackY_270 = (UnityEngine_Object_o *)0x42940c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adcec = '\x01';
  }
  _Stack_238.genericMethod = (void *)0x0;
  uStack_230 = 0;
  pMStack_228 = (Map_MapTargetable_o *)0x0;
  lVar23 = __this_14[1].fields.m_CachedPtr;
  if (((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x70), lVar23 == 0)) ||
     (pUVar17 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
  goto label_04294468;
  pUStackY_270 = (UnityEngine_Object_o *)0x429410b;
  UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  in_XMM1_Da = UVar40.fields.z;
  lVar23 = __this_14[1].fields.m_CachedPtr;
  fStack_218 = in_XMM1_Da;
  fStack_214 = in_XMM1_Db;
  fStack_210 = in_XMM1_Dc;
  fStack_20c = in_XMM1_Dd;
  if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0xb8), lVar23 == 0)) goto label_04294468;
  x = *(UnityEngine_Object_o **)(lVar23 + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStackY_270 = (UnityEngine_Object_o *)0x429414e;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar25 = (UnityEngine_Object_o *)0x0;
  pUStackY_270 = (UnityEngine_Object_o *)0x429415d;
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_stack_fffffffffffffd98 = INFINITY;
  fStack_244 = UVar40.fields.y;
  fStack_208 = fStack_244;
  fStack_204 = fStack_244;
  fStack_248 = UVar40.fields.x;
  if ((char)bVar11 == '\0') {
label_04294192:
    iVar5 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar25 = (UnityEngine_Object_o *)0x0;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto label_04294468;
    if (*(char *)&x[4].monitor != '\0') goto label_04294192;
    lVar23 = x[4].fields.m_CachedPtr;
    if ((lVar23 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_04294468;
    pUStackY_270 = (UnityEngine_Object_o *)0x429435a;
    UVar40 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    fVar34 = UVar40.fields.z;
    fVar33 = UVar40.fields.x;
    fVar27 = UVar40.fields.y;
    uVar37 = extraout_XMM0_Dc_00;
    uVar38 = extraout_XMM0_Dd_00;
    if (g_data_057a68cb == '\0') {
      pUStackY_270 = (UnityEngine_Object_o *)0x429437b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      in_stack_fffffffffffffd9c = fVar27;
      in_stack_fffffffffffffda0 = uVar37;
      in_stack_fffffffffffffda4 = uVar38;
      in_stack_fffffffffffffda8 = fVar34;
      in_stack_fffffffffffffdac = in_XMM1_Db;
    }
    fVar36 = fVar27 - fStack_208;
    fVar34 = fVar34 - fStack_218;
    fVar33 = fVar33 - fStack_248;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      pUStackY_270 = (UnityEngine_Object_o *)0x42943c6;
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffd9c = fVar27;
      in_stack_fffffffffffffda0 = uVar37;
      in_stack_fffffffffffffda4 = uVar38;
      in_stack_fffffffffffffda8 = fVar34;
      in_stack_fffffffffffffdac = fVar33;
    }
    in_stack_fffffffffffffd98 = fVar33 * fVar33 + fVar36 * fVar36 + fVar34 * fVar34;
    if (in_stack_fffffffffffffd98 < 0.0) {
      pUStackY_270 = (UnityEngine_Object_o *)0x4294437;
      in_stack_fffffffffffffd98 = sqrtf(in_stack_fffffffffffffd98);
    }
    else {
      in_stack_fffffffffffffd98 = SQRT(in_stack_fffffffffffffd98);
    }
    in_XMM1_Da = INFINITY;
    if (in_stack_fffffffffffffd98 < INFINITY) {
      in_XMM1_Da = *(float *)&__this_14[2].klass;
      in_XMM1_Db = 0.0;
      if (in_stack_fffffffffffffd98 < in_XMM1_Da) {
        iVar5 = *(int *)(TypeInfo_MapLoader + 0xe4);
        pUVar25 = x;
        goto joined_r0x042941a3;
      }
    }
    in_stack_fffffffffffffd98 = INFINITY;
    in_XMM1_Db = 0.0;
    iVar5 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar25 = (UnityEngine_Object_o *)0x0;
  }
joined_r0x042941a3:
  if (iVar5 == 0) {
    pUStackY_270 = (UnityEngine_Object_o *)0x42941aa;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    pUStackY_270 = (UnityEngine_Object_o *)0x42941d5;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_1f8,__this_02,MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    fStack_210 = fStack_214;
    pMStack_228 = pMStack_1e8;
    _Stack_238 = _Stack_1f8;
    uStack_230 = uStack_1f0;
    fStack_214 = fStack_248;
    fStack_20c = fStack_244;
label_04294220:
    do {
      do {
        do {
          pUStackY_270 = (UnityEngine_Object_o *)0x429422c;
          __this_03.fields._list._4_4_ = in_stack_fffffffffffffd9c;
          __this_03.fields._list._0_4_ = in_stack_fffffffffffffd98;
          __this_03.fields._index = in_stack_fffffffffffffda0;
          __this_03.fields._version = in_stack_fffffffffffffda4;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffda8;
          __this_03.fields._current._4_4_ = in_stack_fffffffffffffdac;
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_03,(MethodInfo_321A1D0 *)&_Stack_238);
          __this_12 = pMStack_228;
          if ((char)bVar11 == '\0') {
            pUStackY_270 = (UnityEngine_Object_o *)0x4294324;
            __this_04.fields._list._4_4_ = in_stack_fffffffffffffd9c;
            __this_04.fields._list._0_4_ = in_stack_fffffffffffffd98;
            __this_04.fields._index = in_stack_fffffffffffffda0;
            __this_04.fields._version = in_stack_fffffffffffffda4;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffda8;
            __this_04.fields._current._4_4_ = in_stack_fffffffffffffdac;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&_Stack_238);
            return;
          }
        } while (pMStack_228 == (Map_MapTargetable_o *)0x0);
        pUStackY_270 = (UnityEngine_Object_o *)0x4294248;
        bVar11 = Map_MapTargetable__ValidTarget(pMStack_228,(MethodInfo *)0x0);
      } while ((char)bVar11 == '\0');
      pUStackY_270 = (UnityEngine_Object_o *)0x4294256;
      UVar40 = Map_MapTargetable__GetPosition(__this_12,(MethodInfo *)0x0);
      in_stack_fffffffffffffda8 = UVar40.fields.x;
      in_stack_fffffffffffffdac = UVar40.fields.y;
      if (g_data_057a68cb == '\0') {
        pUStackY_270 = (UnityEngine_Object_o *)0x4294280;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
        iVar5 = *(int *)((long)TypeInfo_Math + 0xe4);
      }
      else {
        iVar5 = *(int *)((long)TypeInfo_Math + 0xe4);
      }
      if (iVar5 == 0) {
        pUStackY_270 = (UnityEngine_Object_o *)0x4294299;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar33 = UVar40.fields.z - fStack_218;
      fVar33 = (in_stack_fffffffffffffda8 - fStack_214) * (in_stack_fffffffffffffda8 - fStack_214) +
               (in_stack_fffffffffffffdac - fStack_208) * (in_stack_fffffffffffffdac - fStack_208) +
               fVar33 * fVar33;
      if (fVar33 < 0.0) goto label_042942eb;
      fVar33 = SQRT(fVar33);
    } while (in_stack_fffffffffffffd98 <= fVar33);
    goto label_04294210;
  }
label_04294468:
  pUStackY_270 = (UnityEngine_Object_o *)0x429446d;
  auVar43 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar43._0_8_;
  if (auVar43._8_4_ == 1) {
    pUStackY_270 = (UnityEngine_Object_o *)0x429449d;
    plVar18 = (long *)__cxa_begin_catch(uVar19);
    lVar23 = *plVar18;
    pUStackY_270 = (UnityEngine_Object_o *)0x42944a5;
    __cxa_end_catch();
    pUStackY_270 = (UnityEngine_Object_o *)0x42944b9;
    __this_05.fields._list._4_4_ = in_stack_fffffffffffffd9c;
    __this_05.fields._list._0_4_ = in_stack_fffffffffffffd98;
    __this_05.fields._index = in_stack_fffffffffffffda0;
    __this_05.fields._version = in_stack_fffffffffffffda4;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffda8;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffdac;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_238);
    if (lVar23 == 0) {
      return;
    }
    pUStackY_270 = (UnityEngine_Object_o *)0x42944ca;
    uVar19 = il2cpp_runtime_helper_022fefe0(lVar23);
  }
  else {
    lVar23 = 0;
  }
  pUStackY_270 = (UnityEngine_Object_o *)0x42944e1;
  __this_06.fields._list._4_4_ = in_stack_fffffffffffffd9c;
  __this_06.fields._list._0_4_ = in_stack_fffffffffffffd98;
  __this_06.fields._index = in_stack_fffffffffffffda0;
  __this_06.fields._version = in_stack_fffffffffffffda4;
  __this_06.fields._current._0_4_ = in_stack_fffffffffffffda8;
  __this_06.fields._current._4_4_ = in_stack_fffffffffffffdac;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&_Stack_238);
  if (lVar23 == 0) {
    pUStackY_270 = (UnityEngine_Object_o *)0x42944ee;
    _Unwind_Resume(uVar19);
  }
  pUStackY_270 = (UnityEngine_Object_o *)0x42944f6;
  lVar20 = il2cpp_runtime_helper_022fefe0(lVar23);
  pUStackY_270 = (UnityEngine_Object_o *)0x42944fe;
  il2cpp_runtime_helper_01f66400();
  lStackY_278 = lVar23;
  pUStackY_270 = pUVar25;
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar18 = *(long **)(lVar20 + 0x58);
  if (plVar18 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar37 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar20 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar20 + 0x90) = uVar37;
    *(undefined8 *)(lVar20 + 0x78) = 0;
    *(undefined8 *)(lVar20 + 0x80) = 0;
    return;
  }
  lVar23 = *plVar18;
  if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
    lVar24 = 0;
    do {
      if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_ITargetable) {
        puVar21 = (undefined8 *)
                  (lVar23 + (long)(*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) + 1) * 0x10 + 0x138);
        goto label_04294606;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
  }
  puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_ITargetable,1);
label_04294606:
  __this_18.fields.value.fields._4_8_ = (*(code *)*puVar21)(plVar18,puVar21[1]);
  if (*(char *)(lVar20 + 0x78) == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Db = 0.0;
      g_data_057a65d5 = '\x01';
    }
    uVar37 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar20 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar20 + 0x90) = uVar37;
  }
  else {
    fStackY_290 = (float)__this_18.fields.value.fields._4_8_ - (float)*(undefined8 *)(lVar20 + 0x7c);
    fStackY_28c = (float)((ulong)__this_18.fields.value.fields._4_8_ >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar20 + 0x7c) >> 0x20);
    fStackY_288 = extraout_XMM0_Dc_01 - 0.0;
    fStackY_284 = extraout_XMM0_Dd_01 - 0.0;
    fVar33 = *(float *)(lVar20 + 0x84);
    fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Db = 0.0;
    auVar10._4_4_ = fStackY_28c;
    auVar10._0_4_ = fStackY_290;
    auVar10._8_4_ = fStackY_288;
    auVar10._12_4_ = fStackY_284;
    auVar39._4_4_ = fVar27;
    auVar39._0_4_ = fVar27;
    auVar39._8_4_ = extraout_XMM0_Dc_02;
    auVar39._12_4_ = extraout_XMM0_Dd_02;
    auVar39 = divps(auVar10,auVar39);
    *(long *)(lVar20 + 0x88) = auVar39._0_8_;
    *(float *)(lVar20 + 0x90) = (in_XMM1_Da - fVar33) / fVar27;
  }
  uStackY_2a0 = 0;
  uStackY_298 = 0;
  UVar40.fields.y = in_XMM1_Db;
  UVar40.fields.x = in_XMM1_Da;
  UVar40.fields.z = (float)__this_18.fields.value.fields._4_8_;
  __this_18.fields._0_8_ = &uStackY_2a0;
  System_Nullable_Vector3____ctor(__this_18,UVar40,MethodInfo_Nullable_1_UnityEngine_Vector3);
  *(undefined8 *)(lVar20 + 0x78) = uStackY_2a0;
  *(undefined8 *)(lVar20 + 0x80) = uStackY_298;
  return;
label_042942eb:
  pUStackY_270 = (UnityEngine_Object_o *)0x42942f0;
  fVar33 = sqrtf(fVar33);
  if (fVar33 < in_stack_fffffffffffffd98) {
label_04294210:
    if (fVar33 < *(float *)&__this_14[2].klass) {
      in_stack_fffffffffffffd98 = fVar33;
    }
  }
  goto label_04294220;
}


// Controllers.HumanAIController$$Start
// il2cpp: void Controllers_HumanAIController__Start (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4293890

void Controllers_HumanAIController__Start(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  Characters_Human_o *pCVar5;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar6;
  UnityEngine_Object_c *pUVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  Characters_TitanColliderToggler_o *__this_01;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_02;
  undefined1 auVar9 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  UnityEngine_AI_NavMeshHit_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o __this_08;
  UnityEngine_AI_NavMeshBuildSettings_o __this_09;
  UnityEngine_AI_NavMeshBuildSettings_o __this_10;
  Map_MapTargetable_o *__this_11;
  bool_conflict bVar10;
  uint value;
  Controllers_HumanAIController_o *pCVar11;
  Il2CppObject *pIVar12;
  UnityEngine_GameObject_o *__this_12;
  VirtualInvokeData *pVVar13;
  UnityEngine_Transform_o *pUVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  Il2CppObject *value_00;
  Characters_Human_o *pCVar19;
  Characters_Human_o *__this_13;
  Controllers_HumanAIController_o *method_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_14;
  long lVar20;
  long lVar21;
  UnityEngine_Object_o *pUVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  System_Int32_array *pSVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float fVar29;
  float fVar30;
  float fVar31;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o UVar37;
  UnityEngine_Vector3_o UVar38;
  undefined1 auVar39 [12];
  System_Nullable_Vector3__o __this_15;
  undefined8 uStackY_268;
  undefined8 uStackY_260;
  float fStackY_258;
  float fStackY_254;
  float fStackY_250;
  float fStackY_24c;
  long lStackY_240;
  UnityEngine_Object_o *pUStackY_238;
  float in_stack_fffffffffffffdd0;
  float in_stack_fffffffffffffdd4;
  undefined4 in_stack_fffffffffffffdd8;
  undefined4 in_stack_fffffffffffffddc;
  float in_stack_fffffffffffffde0;
  float in_stack_fffffffffffffde4;
  float fStack_210;
  float fStack_20c;
  _union_249689 _Stack_200;
  undefined8 uStack_1f8;
  Map_MapTargetable_o *pMStack_1f0;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  _union_249689 _Stack_1c0;
  undefined8 uStack_1b8;
  Map_MapTargetable_o *pMStack_1b0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_1a8;
  float fStack_158;
  float fStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_138;
  float fStack_134;
  undefined1 in_stack_ffffffffffffff08 [12];
  float in_stack_ffffffffffffff14;
  float in_stack_ffffffffffffff18;
  float in_stack_ffffffffffffff1c;
  undefined4 in_stack_ffffffffffffff20;
  undefined4 in_stack_ffffffffffffff24;
  int32_t iVar40;
  void *pvVar41;
  float fVar42;
  undefined1 auStack_98 [72];
  void *pvStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057adcea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcea = '\x01';
  }
  auStack_98._16_8_ = 0;
  auStack_98._24_8_ = (System_Threading_CancellationTokenSource_o *)0x0;
  auStack_98._0_8_ = (Controllers_HumanAIController_c *)0x0;
  auStack_98._8_8_ = (void *)0x0;
  auStack_98._32_4_ = 0;
  iVar40 = 0;
  pCVar11 = (Controllers_HumanAIController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MoveTo);
  __this_13 = (Characters_Human_o *)0x0;
  method_00 = pCVar11;
  Controllers_HumanAIStates_MoveTo___ctor((Controllers_HumanAIStates_MoveTo_o *)pCVar11,(MethodInfo *)0x0);
  if (pCVar11 != (Controllers_HumanAIController_o *)0x0) {
    __this_13 = (__this->fields)._human;
    pIVar12 = (Il2CppObject *)
              (*(pCVar11->klass->vtable)._5_Start.methodPtr)
                        (pCVar11,__this_13,(pCVar11->klass->vtable)._5_Start.method);
    pCVar19 = "MoveTo";
    if (g_data_057adcf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057adcf8 = '\x01';
    }
    method_00 = (Controllers_HumanAIController_o *)(__this->fields).Callbacks;
    if (method_00 != (Controllers_HumanAIController_o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)method_00,(Il2CppObject *)pCVar19,
                 pIVar12,MethodInfo_Void_set_Item);
      if (*(char *)&(__this->fields).AIStates == '\0') {
        return;
      }
      pCVar5 = (__this->fields)._human;
      __this_13 = pCVar19;
      if ((pCVar5 != (Characters_Human_o *)0x0) && (lVar20 = *(long *)&(pCVar5->fields).Dead, lVar20 != 0)) {
        pUVar14 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
        method_00 = (Controllers_HumanAIController_o *)0x0;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          UVar36 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
          in_XMM1_Da = UVar36.fields.z;
          method_00 = (Controllers_HumanAIController_o *)auStack_98;
          __this_13 = (Characters_Human_o *)&g_data_ffffffff;
          bVar10 = UnityEngine_AI_NavMesh__SamplePosition
                             (UVar36,(UnityEngine_AI_NavMeshHit_o *)method_00,100.0,-1,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
label_04293a2b:
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Utility_Util__GetAgentSettingsCorrected
                      ((UnityEngine_AI_NavMeshBuildSettings_o *)(auStack_98 + 0x40),1.0,(MethodInfo *)0x0);
            fVar30 = (float)auStack_98._64_8_;
            fVar24 = SUB84(auStack_98._64_8_,4);
            __this_13 = (Characters_Human_o *)0x0;
            method_00 = __this;
            fVar31 = fStack_48;
            fVar33 = fStack_44;
            fVar42 = fStack_40;
            uVar34 = uStack_3c;
            __this_12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            in_XMM1_Da = fStack_48;
            in_XMM1_Db = fStack_44;
            in_XMM1_Dc = fStack_40;
            in_XMM1_Dd = uStack_3c;
            if (__this_12 != (UnityEngine_GameObject_o *)0x0) {
              pIVar12 = UnityEngine_GameObject__AddComponent_object_(__this_12,MethodInfo_NavMeshAgent_AddComponent_NavMeshAgent);
              pbVar1 = &(__this->fields)._usePathfinding;
              *(Il2CppObject **)&(__this->fields)._usePathfinding = pIVar12;
              il2cpp_runtime_helper_022b4080(pbVar1);
              pCVar11 = *(Controllers_HumanAIController_o **)&(__this->fields)._usePathfinding;
              method_00 = (Controllers_HumanAIController_o *)&stack0xffffffffffffff28;
              __this_13 = (Characters_Human_o *)0x0;
              __this_08.fields.m_AgentSlope = in_stack_ffffffffffffff14;
              __this_08.fields.m_AgentTypeID = in_stack_ffffffffffffff08._0_4_;
              __this_08.fields.m_AgentRadius = (float)in_stack_ffffffffffffff08._4_4_;
              __this_08.fields.m_AgentHeight = (float)in_stack_ffffffffffffff08._8_4_;
              __this_08.fields.m_AgentClimb = in_stack_ffffffffffffff18;
              __this_08.fields.m_LedgeDropHeight = in_stack_ffffffffffffff1c;
              __this_08.fields.m_MaxJumpAcrossDistance = (float)in_stack_ffffffffffffff20;
              __this_08.fields.m_MinRegionArea = (float)in_stack_ffffffffffffff24;
              __this_08.fields.m_OverrideVoxelSize = (int32_t)fVar30;
              __this_08.fields.m_VoxelSize = fVar24;
              __this_08.fields._40_8_ = pvStack_50;
              __this_08.fields.m_BuildHeightMesh = (int32_t)fVar31;
              __this_08.fields.m_MaxJobWorkers = (uint32_t)fVar33;
              __this_08.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar42;
              __this_08.fields.m_Debug.fields.m_Flags =
                   (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
                   (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)uVar34;
              __this_08.fields._61_3_ = SUB43(uVar34,1);
              value = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID(__this_08,(MethodInfo *)method_00);
              in_XMM1_Da = fStack_48;
              in_XMM1_Db = fStack_44;
              in_XMM1_Dc = fStack_40;
              in_XMM1_Dd = uStack_3c;
              if (pCVar11 != (Controllers_HumanAIController_o *)0x0) {
                __this_13 = (Characters_Human_o *)(ulong)value;
                UnityEngine_AI_NavMeshAgent__set_agentTypeID
                          ((UnityEngine_AI_NavMeshAgent_o *)pCVar11,value,(MethodInfo *)0x0);
                pCVar19 = (__this->fields)._human;
                method_00 = pCVar11;
                in_XMM1_Da = fStack_48;
                in_XMM1_Db = fStack_44;
                in_XMM1_Dc = fStack_40;
                in_XMM1_Dd = uStack_3c;
                if ((pCVar19 != (Characters_Human_o *)0x0) &&
                   (lVar20 = *(long *)&(pCVar19->fields).Dead, lVar20 != 0)) {
                  __this_00 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                  method_00 = (Controllers_HumanAIController_o *)0x0;
                  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
                    pUVar6 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
                    __this_13 = (Characters_Human_o *)0x0;
                    UVar36 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
                    fVar29 = UVar36.fields.z;
                    fVar23 = UVar36.fields.x;
                    fVar26 = UVar36.fields.y;
                    uVar27 = extraout_XMM0_Dc;
                    uVar28 = extraout_XMM0_Dd;
                    pvVar41 = pvStack_50;
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      fStack_44 = 0.0;
                      fStack_40 = 0.0;
                      uStack_3c = 0;
                      g_data_057a6841 = '\x01';
                      in_stack_ffffffffffffff14 = fVar29;
                      in_stack_ffffffffffffff18 = fVar23;
                      in_stack_ffffffffffffff1c = fVar26;
                      in_stack_ffffffffffffff20 = uVar27;
                      in_stack_ffffffffffffff24 = uVar28;
                      pvVar41 = pvStack_50;
                    }
                    method_00 = TypeInfo_Math;
                    fVar32 = fVar26;
                    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
                      auStack_98._48_4_ = fVar26;
                      auStack_98._52_4_ = fVar26;
                      il2cpp_runtime_helper_02337ed0();
                      fStack_44 = 0.0;
                      fStack_40 = 0.0;
                      uStack_3c = 0;
                      fVar32 = (float)auStack_98._48_4_;
                      in_stack_ffffffffffffff14 = fVar29;
                      in_stack_ffffffffffffff18 = fVar23;
                      in_stack_ffffffffffffff1c = fVar26;
                      in_stack_ffffffffffffff20 = uVar27;
                      in_stack_ffffffffffffff24 = uVar28;
                    }
                    in_XMM1_Da = fVar29 * fVar29 + fVar32 * fVar32 + fVar23 * fVar23;
                    if (in_XMM1_Da < 0.0) {
                      fVar23 = sqrtf(in_XMM1_Da);
                      in_XMM1_Db = fStack_44;
                      in_XMM1_Dc = fStack_40;
                      in_XMM1_Dd = uStack_3c;
                    }
                    else {
                      fVar23 = SQRT(in_XMM1_Da);
                      in_XMM1_Db = fStack_44;
                      in_XMM1_Dc = fStack_40;
                      in_XMM1_Dd = uStack_3c;
                    }
                    if (pUVar6 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      __this_13 = (Characters_Human_o *)0x0;
                      UnityEngine_AI_NavMeshAgent__set_speed(pUVar6,fVar23,(MethodInfo *)0x0);
                      method_00 = (Controllers_HumanAIController_o *)0x0;
                      if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        __this_13 = (Characters_Human_o *)0x0;
                        UnityEngine_AI_NavMeshAgent__set_angularSpeed
                                  (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,10.0,(MethodInfo *)0x0);
                        method_00 = (Controllers_HumanAIController_o *)0x0;
                        if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0)
                        {
                          __this_13 = (Characters_Human_o *)0x0;
                          UnityEngine_AI_NavMeshAgent__set_acceleration
                                    (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,100.0,(MethodInfo *)0x0);
                          method_00 = (Controllers_HumanAIController_o *)0x0;
                          if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                              (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            __this_13 = (Characters_Human_o *)0x1;
                            UnityEngine_AI_NavMeshAgent__set_autoRepath
                                      (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,1,(MethodInfo *)0x0);
                            method_00 = (Controllers_HumanAIController_o *)0x0;
                            if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              __this_13 = (Characters_Human_o *)0x0;
                              UnityEngine_AI_NavMeshAgent__set_stoppingDistance
                                        (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,1.1,(MethodInfo *)0x0);
                              method_00 = (Controllers_HumanAIController_o *)0x0;
                              if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                  (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                UnityEngine_AI_NavMeshAgent__set_autoBraking
                                          (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,(MethodInfo *)0x0);
                                pUVar6 = *(UnityEngine_AI_NavMeshAgent_o **)pbVar1;
                                method_00 = (Controllers_HumanAIController_o *)&stack0xffffffffffffff28;
                                __this_13 = (Characters_Human_o *)0x0;
                                __this_09.fields.m_AgentSlope = in_stack_ffffffffffffff14;
                                __this_09.fields.m_AgentTypeID = in_stack_ffffffffffffff08._0_4_;
                                __this_09.fields.m_AgentRadius = (float)in_stack_ffffffffffffff08._4_4_;
                                __this_09.fields.m_AgentHeight = (float)in_stack_ffffffffffffff08._8_4_;
                                __this_09.fields.m_AgentClimb = in_stack_ffffffffffffff18;
                                __this_09.fields.m_LedgeDropHeight = in_stack_ffffffffffffff1c;
                                __this_09.fields.m_MaxJumpAcrossDistance = (float)in_stack_ffffffffffffff20;
                                __this_09.fields.m_MinRegionArea = (float)in_stack_ffffffffffffff24;
                                __this_09.fields.m_OverrideVoxelSize = (int32_t)fVar30;
                                __this_09.fields.m_VoxelSize = fVar24;
                                __this_09.fields._40_8_ = pvVar41;
                                __this_09.fields.m_BuildHeightMesh = (int32_t)fVar31;
                                __this_09.fields.m_MaxJobWorkers = (uint32_t)fVar33;
                                __this_09.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar42;
                                __this_09.fields.m_Debug.fields.m_Flags =
                                     (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
                                     (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)uVar34;
                                __this_09.fields._61_3_ = SUB43(uVar34,1);
                                fVar23 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                                                   (__this_09,(MethodInfo *)method_00);
                                if (pUVar6 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                  UnityEngine_AI_NavMeshAgent__set_radius(pUVar6,fVar23,(MethodInfo *)0x0);
                                  pUVar6 = *(UnityEngine_AI_NavMeshAgent_o **)pbVar1;
                                  method_00 = (Controllers_HumanAIController_o *)&stack0xffffffffffffff28;
                                  __this_13 = (Characters_Human_o *)0x0;
                                  __this_10.fields.m_AgentSlope = in_stack_ffffffffffffff14;
                                  __this_10.fields.m_AgentTypeID = in_stack_ffffffffffffff08._0_4_;
                                  __this_10.fields.m_AgentRadius = (float)in_stack_ffffffffffffff08._4_4_;
                                  __this_10.fields.m_AgentHeight = (float)in_stack_ffffffffffffff08._8_4_;
                                  __this_10.fields.m_AgentClimb = in_stack_ffffffffffffff18;
                                  __this_10.fields.m_LedgeDropHeight = in_stack_ffffffffffffff1c;
                                  __this_10.fields.m_MaxJumpAcrossDistance = (float)in_stack_ffffffffffffff20;
                                  __this_10.fields.m_MinRegionArea = (float)in_stack_ffffffffffffff24;
                                  __this_10.fields.m_OverrideVoxelSize = (int32_t)fVar30;
                                  __this_10.fields.m_VoxelSize = fVar24;
                                  __this_10.fields._40_8_ = pvVar41;
                                  __this_10.fields.m_BuildHeightMesh = (int32_t)fVar31;
                                  __this_10.fields.m_MaxJobWorkers = (uint32_t)fVar33;
                                  __this_10.fields.m_PreserveTilesOutsideBounds = (int32_t)fVar42;
                                  __this_10.fields.m_Debug.fields.m_Flags =
                                       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
                                       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)uVar34;
                                  __this_10.fields._61_3_ = SUB43(uVar34,1);
                                  fVar30 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                                                     (__this_10,(MethodInfo *)method_00);
                                  if (pUVar6 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                    __this_13 = (Characters_Human_o *)0x0;
                                    UnityEngine_AI_NavMeshAgent__set_height(pUVar6,fVar30,(MethodInfo *)0x0);
                                    method_00 = (Controllers_HumanAIController_o *)0x0;
                                    if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                      __this_13 = (Characters_Human_o *)0x0;
                                      UnityEngine_AI_NavMeshAgent__set_updatePosition
                                                (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,(MethodInfo *)0x0
                                                );
                                      method_00 = (Controllers_HumanAIController_o *)0x0;
                                      if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                          (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                        __this_13 = (Characters_Human_o *)0x0;
                                        UnityEngine_AI_NavMeshAgent__set_updateRotation
                                                  (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,0,
                                                   (MethodInfo *)0x0);
                                        method_00 = (Controllers_HumanAIController_o *)0x0;
                                        if (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1 !=
                                            (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                                          __this_13 = (Characters_Human_o *)0x2;
                                          UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                                                    (*(UnityEngine_AI_NavMeshAgent_o **)pbVar1,2,
                                                     (MethodInfo *)0x0);
                                          method_00 = (Controllers_HumanAIController_o *)0x0;
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
          else {
            pCVar19 = (__this->fields)._human;
            if ((pCVar19 != (Characters_Human_o *)0x0) &&
               (lVar20 = *(long *)&(pCVar19->fields).Dead, lVar20 != 0)) {
              pUVar14 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
              method_00 = (Controllers_HumanAIController_o *)auStack_98;
              __this_13 = (Characters_Human_o *)0x0;
              __this_07.fields.m_Normal.fields.x = in_stack_ffffffffffffff14;
              __this_07.fields.m_Position.fields.x = (float)in_stack_ffffffffffffff08._0_4_;
              __this_07.fields.m_Position.fields.y = (float)in_stack_ffffffffffffff08._4_4_;
              __this_07.fields.m_Position.fields.z = (float)in_stack_ffffffffffffff08._8_4_;
              __this_07.fields.m_Normal.fields.y = in_stack_ffffffffffffff18;
              __this_07.fields.m_Normal.fields.z = in_stack_ffffffffffffff1c;
              __this_07.fields.m_Distance = (float)in_stack_ffffffffffffff20;
              __this_07.fields.m_Mask = in_stack_ffffffffffffff24;
              __this_07.fields.m_Hit = iVar40;
              UVar36 = UnityEngine_AI_NavMeshHit__get_position(__this_07,(MethodInfo *)method_00);
              in_XMM1_Da = UVar36.fields.z;
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_position(pUVar14,UVar36,(MethodInfo *)0x0);
                goto label_04293a2b;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adcf8 = '\x01';
  }
  __this_14 = (System_Collections_Generic_Dictionary_object__object__o *)(method_00->fields).Callbacks;
  if (__this_14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_14,(Il2CppObject *)__this_13,value_00,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0();
    g_data_057adceb = '\x01';
  }
  pUVar22 = __this_14[1].monitor;
  if (pUVar22 == (UnityEngine_Object_o *)0x0) {
    return;
  }
  pUVar7 = pUVar22->klass;
  bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
  if (((pUVar7->_2).naturalAligment < bVar2) || ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseTitan)
     ) {
    uVar3._0_1_ = (pUVar7->_2).rank;
    uVar3._1_1_ = (pUVar7->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pUVar7->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_ITargetable) {
          pVVar13 = &(pUVar7->vtable)._0_Equals + (*(int *)((long)&pIVar8->offset + lVar20) + 1);
          goto label_04293e35;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar20);
    }
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_ITargetable,1);
label_04293e35:
    pSVar25 = (System_Int32_array *)(*pVVar13->methodPtr)(pUVar22);
    __this_14[1].fields._buckets = pSVar25;
    *(float *)&__this_14[1].fields._entries = in_XMM1_Da;
    lVar20._0_4_ = (__this_14->fields)._freeCount;
    lVar20._4_4_ = (__this_14->fields)._version;
joined_r0x0429403e:
    if (((lVar20 != 0) && (*(long *)(lVar20 + 0x70) != 0)) &&
       (pUVar14 = *(UnityEngine_Transform_o **)(*(long *)(lVar20 + 0x70) + 0x10),
       pUVar14 != (UnityEngine_Transform_o *)0x0)) {
      UVar36 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
      *(ulong *)((long)&__this_14[1].fields._entries + 4) =
           CONCAT44((float)((ulong)pSVar25 >> 0x20) - UVar36.fields.y,SUB84(pSVar25,0) - UVar36.fields.x);
      __this_14[1].fields._freeList = (int32_t)(in_XMM1_Da - UVar36.fields.z);
      return;
    }
label_04294044:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pUVar22[10].monitor == (void *)0x0) ||
       (__this_13 = *(Characters_Human_o **)((long)pUVar22[10].monitor + 0x68),
       __this_13 == (Characters_Human_o *)0x0)) goto label_04294044;
    bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if ((bVar2 <= (__this_13->klass->_2).naturalAligment) &&
       ((__this_13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CapsuleCollider)) {
      pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        UVar36 = UnityEngine_Transform__get_lossyScale(pUVar14,(MethodInfo *)0x0);
        in_XMM1_Da = UVar36.fields.z;
        fVar30 = UnityEngine_CapsuleCollider__get_radius
                           ((UnityEngine_CapsuleCollider_o *)__this_13,(MethodInfo *)0x0);
        pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0)
        ;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          UVar37 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
          in_XMM1_Da = UVar37.fields.z;
          pUVar14 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            UVar38 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
            in_XMM1_Da = UVar38.fields.z;
            pUVar14 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0);
            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
              fStack_138 = UVar36.fields.x;
              fStack_134 = UVar36.fields.y;
              if (fStack_138 <= fStack_134) {
                fStack_138 = fStack_134;
              }
              fVar24 = fVar30 * fStack_138 * 1.5;
              fStack_148 = UVar38.fields.x;
              fStack_144 = UVar38.fields.y;
              fStack_158 = UVar37.fields.x;
              fStack_154 = UVar37.fields.y;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0.0;
              in_XMM1_Dd = 0;
              UVar36 = UnityEngine_Transform__get_up(pUVar14,(MethodInfo *)0x0);
              in_XMM1_Da = UVar36.fields.z;
              fVar30 = fVar30 * fStack_138 * 0.5;
              __this_14[1].fields._buckets =
                   (System_Int32_array *)
                   CONCAT44(fVar30 * UVar36.fields.y + (fStack_154 - fVar24 * fStack_144),
                            fVar30 * UVar36.fields.x + (fStack_158 - fVar24 * fStack_148));
              *(float *)&__this_14[1].fields._entries =
                   fVar30 * in_XMM1_Da + (UVar37.fields.z - fVar24 * UVar38.fields.z);
              __this_01 = (Characters_TitanColliderToggler_o *)pUVar22[10].fields.m_CachedPtr;
              if (__this_01 != (Characters_TitanColliderToggler_o *)0x0) {
                Characters_TitanColliderToggler__RegisterLook(__this_01,(MethodInfo *)0x0);
                pSVar25 = __this_14[1].fields._buckets;
                in_XMM1_Da = *(float *)&__this_14[1].fields._entries;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0.0;
                in_XMM1_Dd = 0;
                lVar20._0_4_ = (__this_14->fields)._freeCount;
                lVar20._4_4_ = (__this_14->fields)._version;
                goto joined_r0x0429403e;
              }
            }
          }
        }
      }
      goto label_04294044;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pSStack_1a8 = __this_14;
  if (g_data_057adcec == '\0') {
    pUStackY_238 = (UnityEngine_Object_o *)0x4294089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pUStackY_238 = (UnityEngine_Object_o *)0x4294095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pUStackY_238 = (UnityEngine_Object_o *)0x42940a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTargetable_get_Current);
    pUStackY_238 = (UnityEngine_Object_o *)0x42940ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    pUStackY_238 = (UnityEngine_Object_o *)0x42940b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pUStackY_238 = (UnityEngine_Object_o *)0x42940c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adcec = '\x01';
  }
  _Stack_200.genericMethod = (void *)0x0;
  uStack_1f8 = 0;
  pMStack_1f0 = (Map_MapTargetable_o *)0x0;
  lVar20 = *(long *)&(__this_13->fields).FootstepsEnabled;
  if (((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x70), lVar20 == 0)) ||
     (pUVar14 = *(UnityEngine_Transform_o **)(lVar20 + 0x10), pUVar14 == (UnityEngine_Transform_o *)0x0))
  goto label_04294468;
  pUStackY_238 = (UnityEngine_Object_o *)0x429410b;
  UVar36 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  in_XMM1_Da = UVar36.fields.z;
  lVar20 = *(long *)&(__this_13->fields).FootstepsEnabled;
  fStack_1e0 = in_XMM1_Da;
  fStack_1dc = in_XMM1_Db;
  fStack_1d8 = in_XMM1_Dc;
  fStack_1d4 = (float)in_XMM1_Dd;
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0xb8), lVar20 == 0)) goto label_04294468;
  x = *(UnityEngine_Object_o **)(lVar20 + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStackY_238 = (UnityEngine_Object_o *)0x429414e;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar22 = (UnityEngine_Object_o *)0x0;
  pUStackY_238 = (UnityEngine_Object_o *)0x429415d;
  bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_stack_fffffffffffffdd0 = INFINITY;
  fStack_20c = UVar36.fields.y;
  fStack_1d0 = fStack_20c;
  fStack_1cc = fStack_20c;
  fStack_210 = UVar36.fields.x;
  if ((char)bVar10 == '\0') {
label_04294192:
    iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar22 = (UnityEngine_Object_o *)0x0;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto label_04294468;
    if (*(char *)&x[4].monitor != '\0') goto label_04294192;
    lVar20 = x[4].fields.m_CachedPtr;
    if ((lVar20 == 0) ||
       (pUVar14 = *(UnityEngine_Transform_o **)(lVar20 + 0x10), pUVar14 == (UnityEngine_Transform_o *)0x0))
    goto label_04294468;
    pUStackY_238 = (UnityEngine_Object_o *)0x429435a;
    UVar36 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    fVar31 = UVar36.fields.z;
    fVar30 = UVar36.fields.x;
    fVar24 = UVar36.fields.y;
    uVar34 = extraout_XMM0_Dc_00;
    uVar27 = extraout_XMM0_Dd_00;
    if (g_data_057a68cb == '\0') {
      pUStackY_238 = (UnityEngine_Object_o *)0x429437b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      in_stack_fffffffffffffdd4 = fVar24;
      in_stack_fffffffffffffdd8 = uVar34;
      in_stack_fffffffffffffddc = uVar27;
      in_stack_fffffffffffffde0 = fVar31;
      in_stack_fffffffffffffde4 = in_XMM1_Db;
    }
    fVar33 = fVar24 - fStack_1d0;
    fVar31 = fVar31 - fStack_1e0;
    fVar30 = fVar30 - fStack_210;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      pUStackY_238 = (UnityEngine_Object_o *)0x42943c6;
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffdd4 = fVar24;
      in_stack_fffffffffffffdd8 = uVar34;
      in_stack_fffffffffffffddc = uVar27;
      in_stack_fffffffffffffde0 = fVar31;
      in_stack_fffffffffffffde4 = fVar30;
    }
    in_stack_fffffffffffffdd0 = fVar30 * fVar30 + fVar33 * fVar33 + fVar31 * fVar31;
    if (in_stack_fffffffffffffdd0 < 0.0) {
      pUStackY_238 = (UnityEngine_Object_o *)0x4294437;
      in_stack_fffffffffffffdd0 = sqrtf(in_stack_fffffffffffffdd0);
    }
    else {
      in_stack_fffffffffffffdd0 = SQRT(in_stack_fffffffffffffdd0);
    }
    in_XMM1_Da = INFINITY;
    if (in_stack_fffffffffffffdd0 < INFINITY) {
      in_XMM1_Da = (__this_13->fields).MaxFootstepDistance;
      in_XMM1_Db = 0.0;
      if (in_stack_fffffffffffffdd0 < in_XMM1_Da) {
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
        pUVar22 = x;
        goto joined_r0x042941a3;
      }
    }
    in_stack_fffffffffffffdd0 = INFINITY;
    in_XMM1_Db = 0.0;
    iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar22 = (UnityEngine_Object_o *)0x0;
  }
joined_r0x042941a3:
  if (iVar4 == 0) {
    pUStackY_238 = (UnityEngine_Object_o *)0x42941aa;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    pUStackY_238 = (UnityEngine_Object_o *)0x42941d5;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_1c0,__this_02,MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    fStack_1d8 = fStack_1dc;
    pMStack_1f0 = pMStack_1b0;
    _Stack_200 = _Stack_1c0;
    uStack_1f8 = uStack_1b8;
    fStack_1dc = fStack_210;
    fStack_1d4 = fStack_20c;
label_04294220:
    do {
      do {
        do {
          pUStackY_238 = (UnityEngine_Object_o *)0x429422c;
          __this_03.fields._list._4_4_ = in_stack_fffffffffffffdd4;
          __this_03.fields._list._0_4_ = in_stack_fffffffffffffdd0;
          __this_03.fields._index = in_stack_fffffffffffffdd8;
          __this_03.fields._version = in_stack_fffffffffffffddc;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffde0;
          __this_03.fields._current._4_4_ = in_stack_fffffffffffffde4;
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_03,(MethodInfo_321A1D0 *)&_Stack_200);
          __this_11 = pMStack_1f0;
          if ((char)bVar10 == '\0') {
            pUStackY_238 = (UnityEngine_Object_o *)0x4294324;
            __this_04.fields._list._4_4_ = in_stack_fffffffffffffdd4;
            __this_04.fields._list._0_4_ = in_stack_fffffffffffffdd0;
            __this_04.fields._index = in_stack_fffffffffffffdd8;
            __this_04.fields._version = in_stack_fffffffffffffddc;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffde0;
            __this_04.fields._current._4_4_ = in_stack_fffffffffffffde4;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&_Stack_200);
            return;
          }
        } while (pMStack_1f0 == (Map_MapTargetable_o *)0x0);
        pUStackY_238 = (UnityEngine_Object_o *)0x4294248;
        bVar10 = Map_MapTargetable__ValidTarget(pMStack_1f0,(MethodInfo *)0x0);
      } while ((char)bVar10 == '\0');
      pUStackY_238 = (UnityEngine_Object_o *)0x4294256;
      UVar36 = Map_MapTargetable__GetPosition(__this_11,(MethodInfo *)0x0);
      in_stack_fffffffffffffde0 = UVar36.fields.x;
      in_stack_fffffffffffffde4 = UVar36.fields.y;
      if (g_data_057a68cb == '\0') {
        pUStackY_238 = (UnityEngine_Object_o *)0x4294280;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
        iVar4 = *(int *)((long)&TypeInfo_Math[1].monitor + 4);
      }
      else {
        iVar4 = *(int *)((long)&TypeInfo_Math[1].monitor + 4);
      }
      if (iVar4 == 0) {
        pUStackY_238 = (UnityEngine_Object_o *)0x4294299;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar30 = UVar36.fields.z - fStack_1e0;
      fVar30 = (in_stack_fffffffffffffde0 - fStack_1dc) * (in_stack_fffffffffffffde0 - fStack_1dc) +
               (in_stack_fffffffffffffde4 - fStack_1d0) * (in_stack_fffffffffffffde4 - fStack_1d0) +
               fVar30 * fVar30;
      if (fVar30 < 0.0) goto label_042942eb;
      fVar30 = SQRT(fVar30);
    } while (in_stack_fffffffffffffdd0 <= fVar30);
    goto label_04294210;
  }
label_04294468:
  pUStackY_238 = (UnityEngine_Object_o *)0x429446d;
  auVar39 = il2cpp_runtime_helper_022b2c90();
  uVar16 = auVar39._0_8_;
  if (auVar39._8_4_ == 1) {
    pUStackY_238 = (UnityEngine_Object_o *)0x429449d;
    plVar15 = (long *)__cxa_begin_catch(uVar16);
    lVar20 = *plVar15;
    pUStackY_238 = (UnityEngine_Object_o *)0x42944a5;
    __cxa_end_catch();
    pUStackY_238 = (UnityEngine_Object_o *)0x42944b9;
    __this_05.fields._list._4_4_ = in_stack_fffffffffffffdd4;
    __this_05.fields._list._0_4_ = in_stack_fffffffffffffdd0;
    __this_05.fields._index = in_stack_fffffffffffffdd8;
    __this_05.fields._version = in_stack_fffffffffffffddc;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffde0;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffde4;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_200);
    if (lVar20 == 0) {
      return;
    }
    pUStackY_238 = (UnityEngine_Object_o *)0x42944ca;
    uVar16 = il2cpp_runtime_helper_022fefe0(lVar20);
  }
  else {
    lVar20 = 0;
  }
  pUStackY_238 = (UnityEngine_Object_o *)0x42944e1;
  __this_06.fields._list._4_4_ = in_stack_fffffffffffffdd4;
  __this_06.fields._list._0_4_ = in_stack_fffffffffffffdd0;
  __this_06.fields._index = in_stack_fffffffffffffdd8;
  __this_06.fields._version = in_stack_fffffffffffffddc;
  __this_06.fields._current._0_4_ = in_stack_fffffffffffffde0;
  __this_06.fields._current._4_4_ = in_stack_fffffffffffffde4;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&_Stack_200);
  if (lVar20 == 0) {
    pUStackY_238 = (UnityEngine_Object_o *)0x42944ee;
    _Unwind_Resume(uVar16);
  }
  pUStackY_238 = (UnityEngine_Object_o *)0x42944f6;
  lVar17 = il2cpp_runtime_helper_022fefe0(lVar20);
  pUStackY_238 = (UnityEngine_Object_o *)0x42944fe;
  il2cpp_runtime_helper_01f66400();
  lStackY_240 = lVar20;
  pUStackY_238 = pUVar22;
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar15 = *(long **)(lVar17 + 0x58);
  if (plVar15 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar34 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar17 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar17 + 0x90) = uVar34;
    *(undefined8 *)(lVar17 + 0x78) = 0;
    *(undefined8 *)(lVar17 + 0x80) = 0;
    return;
  }
  lVar20 = *plVar15;
  if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
    lVar21 = 0;
    do {
      if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_ITargetable) {
        puVar18 = (undefined8 *)
                  (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) + 1) * 0x10 + 0x138);
        goto label_04294606;
      }
      lVar21 = lVar21 + 0x10;
    } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
  }
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_ITargetable,1);
label_04294606:
  __this_15.fields.value.fields._4_8_ = (*(code *)*puVar18)(plVar15,puVar18[1]);
  if (*(char *)(lVar17 + 0x78) == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Db = 0.0;
      g_data_057a65d5 = '\x01';
    }
    uVar34 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar17 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar17 + 0x90) = uVar34;
  }
  else {
    fStackY_258 = (float)__this_15.fields.value.fields._4_8_ - (float)*(undefined8 *)(lVar17 + 0x7c);
    fStackY_254 = (float)((ulong)__this_15.fields.value.fields._4_8_ >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar17 + 0x7c) >> 0x20);
    fStackY_250 = extraout_XMM0_Dc_01 - 0.0;
    fStackY_24c = extraout_XMM0_Dd_01 - 0.0;
    fVar30 = *(float *)(lVar17 + 0x84);
    fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Db = 0.0;
    auVar9._4_4_ = fStackY_254;
    auVar9._0_4_ = fStackY_258;
    auVar9._8_4_ = fStackY_250;
    auVar9._12_4_ = fStackY_24c;
    auVar35._4_4_ = fVar24;
    auVar35._0_4_ = fVar24;
    auVar35._8_4_ = extraout_XMM0_Dc_02;
    auVar35._12_4_ = extraout_XMM0_Dd_02;
    auVar35 = divps(auVar9,auVar35);
    *(long *)(lVar17 + 0x88) = auVar35._0_8_;
    *(float *)(lVar17 + 0x90) = (in_XMM1_Da - fVar30) / fVar24;
  }
  uStackY_268 = 0;
  uStackY_260 = 0;
  UVar36.fields.y = in_XMM1_Db;
  UVar36.fields.x = in_XMM1_Da;
  UVar36.fields.z = (float)__this_15.fields.value.fields._4_8_;
  __this_15.fields._0_8_ = &uStackY_268;
  System_Nullable_Vector3____ctor(__this_15,UVar36,MethodInfo_Nullable_1_UnityEngine_Vector3);
  *(undefined8 *)(lVar17 + 0x78) = uStackY_268;
  *(undefined8 *)(lVar17 + 0x80) = uStackY_260;
  return;
label_042942eb:
  pUStackY_238 = (UnityEngine_Object_o *)0x42942f0;
  fVar30 = sqrtf(fVar30);
  if (fVar30 < in_stack_fffffffffffffdd0) {
label_04294210:
    if (fVar30 < (__this_13->fields).MaxFootstepDistance) {
      in_stack_fffffffffffffdd0 = fVar30;
    }
  }
  goto label_04294220;
}


// Controllers.HumanAIController$$BeforeFixedUpdate
// il2cpp: void Controllers_HumanAIController__BeforeFixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4293d60

void Controllers_HumanAIController__BeforeFixedUpdate
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  UnityEngine_Object_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Characters_Human_o *pCVar6;
  Characters_TitanColliderToggler_o *__this_00;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_01;
  undefined1 auVar7 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  Map_MapTargetable_o *__this_06;
  bool_conflict bVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Transform_o *pUVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  UnityEngine_Object_o *pUVar17;
  UnityEngine_Component_o *unaff_R15;
  float fVar18;
  Characters_ITargetable_o *pCVar19;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar20;
  float fVar21;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  undefined1 auVar29 [12];
  System_Nullable_Vector3__o __this_07;
  undefined8 uStackY_158;
  undefined8 uStackY_150;
  float fStackY_148;
  float fStackY_144;
  float fStackY_140;
  float fStackY_13c;
  long lStackY_130;
  UnityEngine_Object_o *pUStackY_128;
  float in_stack_fffffffffffffee0;
  float in_stack_fffffffffffffee4;
  undefined4 in_stack_fffffffffffffee8;
  undefined4 in_stack_fffffffffffffeec;
  float in_stack_fffffffffffffef0;
  float in_stack_fffffffffffffef4;
  float fStack_100;
  float fStack_fc;
  _union_249689 _Stack_f0;
  undefined8 uStack_e8;
  Map_MapTargetable_o *pMStack_e0;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  _union_249689 _Stack_b0;
  undefined8 uStack_a8;
  Map_MapTargetable_o *pMStack_a0;
  Controllers_HumanAIController_o *pCStack_98;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (g_data_057adceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0();
    g_data_057adceb = '\x01';
  }
  pUVar17 = *(UnityEngine_Object_o **)&(__this->fields)._hookingRight;
  if (pUVar17 == (UnityEngine_Object_o *)0x0) {
    return;
  }
  pUVar4 = pUVar17->klass;
  bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
  if (((pUVar4->_2).naturalAligment < bVar1) || ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseTitan)
     ) {
    uVar2._0_1_ = (pUVar4->_2).rank;
    uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_ITargetable) {
          pVVar9 = &(pUVar4->vtable)._0_Equals + (*(int *)((long)&pIVar5->offset + lVar15) + 1);
          goto label_04293e35;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar15);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_ITargetable,1);
label_04293e35:
    pCVar19 = (Characters_ITargetable_o *)(*pVVar9->methodPtr)(pUVar17);
    (__this->fields)._target = pCVar19;
    (__this->fields).TargetPosition.fields.x = in_XMM1_Da;
    pCVar6 = (__this->fields)._human;
joined_r0x0429403e:
    if (((pCVar6 != (Characters_Human_o *)0x0) && (lVar15 = *(long *)&(pCVar6->fields).Dead, lVar15 != 0)) &&
       (pUVar10 = *(UnityEngine_Transform_o **)(lVar15 + 0x10), pUVar10 != (UnityEngine_Transform_o *)0x0)) {
      UVar26 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      (__this->fields).TargetPosition.fields.y = SUB84(pCVar19,0) - UVar26.fields.x;
      (__this->fields).TargetPosition.fields.z = (float)((ulong)pCVar19 >> 0x20) - UVar26.fields.y;
      (__this->fields).TargetDirection.fields.x = in_XMM1_Da - UVar26.fields.z;
      return;
    }
label_04294044:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pUVar17[10].monitor == (void *)0x0) ||
       (unaff_R15 = *(UnityEngine_Component_o **)((long)pUVar17[10].monitor + 0x68),
       unaff_R15 == (UnityEngine_Component_o *)0x0)) goto label_04294044;
    bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if ((bVar1 <= (unaff_R15->klass->_2).naturalAligment) &&
       ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
      pUVar10 = UnityEngine_Component__get_transform(unaff_R15,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        UVar26 = UnityEngine_Transform__get_lossyScale(pUVar10,(MethodInfo *)0x0);
        in_XMM1_Da = UVar26.fields.z;
        fVar20 = UnityEngine_CapsuleCollider__get_radius
                           ((UnityEngine_CapsuleCollider_o *)unaff_R15,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Component__get_transform(unaff_R15,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
          in_XMM1_Da = UVar27.fields.z;
          pUVar10 = UnityEngine_Component__get_transform(unaff_R15,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UVar28 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
            in_XMM1_Da = UVar28.fields.z;
            pUVar10 = UnityEngine_Component__get_transform(unaff_R15,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              local_28 = UVar26.fields.x;
              fStack_24 = UVar26.fields.y;
              if (local_28 <= fStack_24) {
                local_28 = fStack_24;
              }
              fVar18 = fVar20 * local_28 * 1.5;
              local_38 = UVar28.fields.x;
              fStack_34 = UVar28.fields.y;
              local_48 = UVar27.fields.x;
              fStack_44 = UVar27.fields.y;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              UVar26 = UnityEngine_Transform__get_up(pUVar10,(MethodInfo *)0x0);
              in_XMM1_Da = UVar26.fields.z;
              fVar20 = fVar20 * local_28 * 0.5;
              (__this->fields)._target =
                   (Characters_ITargetable_o *)
                   CONCAT44(fVar20 * UVar26.fields.y + (fStack_44 - fVar18 * fStack_34),
                            fVar20 * UVar26.fields.x + (local_48 - fVar18 * local_38));
              (__this->fields).TargetPosition.fields.x =
                   fVar20 * in_XMM1_Da + (UVar27.fields.z - fVar18 * UVar28.fields.z);
              __this_00 = (Characters_TitanColliderToggler_o *)pUVar17[10].fields.m_CachedPtr;
              if (__this_00 != (Characters_TitanColliderToggler_o *)0x0) {
                Characters_TitanColliderToggler__RegisterLook(__this_00,(MethodInfo *)0x0);
                pCVar19 = (__this->fields)._target;
                in_XMM1_Da = (__this->fields).TargetPosition.fields.x;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                pCVar6 = (__this->fields)._human;
                goto joined_r0x0429403e;
              }
            }
          }
        }
      }
      goto label_04294044;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pCStack_98 = __this;
  if (g_data_057adcec == '\0') {
    pUStackY_128 = (UnityEngine_Object_o *)0x4294089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pUStackY_128 = (UnityEngine_Object_o *)0x4294095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pUStackY_128 = (UnityEngine_Object_o *)0x42940a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTargetable_get_Current);
    pUStackY_128 = (UnityEngine_Object_o *)0x42940ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    pUStackY_128 = (UnityEngine_Object_o *)0x42940b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pUStackY_128 = (UnityEngine_Object_o *)0x42940c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adcec = '\x01';
  }
  _Stack_f0.genericMethod = (void *)0x0;
  uStack_e8 = 0;
  pMStack_e0 = (Map_MapTargetable_o *)0x0;
  lVar15 = unaff_R15[1].fields.m_CachedPtr;
  if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x70), lVar15 == 0)) ||
     (pUVar10 = *(UnityEngine_Transform_o **)(lVar15 + 0x10), pUVar10 == (UnityEngine_Transform_o *)0x0))
  goto label_04294468;
  pUStackY_128 = (UnityEngine_Object_o *)0x429410b;
  UVar26 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
  in_XMM1_Da = UVar26.fields.z;
  lVar15 = unaff_R15[1].fields.m_CachedPtr;
  fStack_d0 = in_XMM1_Da;
  fStack_cc = in_XMM1_Db;
  fStack_c8 = (float)in_XMM1_Dc;
  fStack_c4 = (float)in_XMM1_Dd;
  if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0xb8), lVar15 == 0)) goto label_04294468;
  x = *(UnityEngine_Object_o **)(lVar15 + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStackY_128 = (UnityEngine_Object_o *)0x429414e;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar17 = (UnityEngine_Object_o *)0x0;
  pUStackY_128 = (UnityEngine_Object_o *)0x429415d;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_stack_fffffffffffffee0 = INFINITY;
  fStack_fc = UVar26.fields.y;
  fStack_c0 = fStack_fc;
  fStack_bc = fStack_fc;
  fStack_100 = UVar26.fields.x;
  if ((char)bVar8 == '\0') {
label_04294192:
    iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar17 = (UnityEngine_Object_o *)0x0;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto label_04294468;
    if (*(char *)&x[4].monitor != '\0') goto label_04294192;
    lVar15 = x[4].fields.m_CachedPtr;
    if ((lVar15 == 0) ||
       (pUVar10 = *(UnityEngine_Transform_o **)(lVar15 + 0x10), pUVar10 == (UnityEngine_Transform_o *)0x0))
    goto label_04294468;
    pUStackY_128 = (UnityEngine_Object_o *)0x429435a;
    UVar26 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    fVar21 = UVar26.fields.z;
    fVar20 = UVar26.fields.x;
    fVar18 = UVar26.fields.y;
    uVar23 = extraout_XMM0_Dc;
    uVar24 = extraout_XMM0_Dd;
    if (g_data_057a68cb == '\0') {
      pUStackY_128 = (UnityEngine_Object_o *)0x429437b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      in_stack_fffffffffffffee4 = fVar18;
      in_stack_fffffffffffffee8 = uVar23;
      in_stack_fffffffffffffeec = uVar24;
      in_stack_fffffffffffffef0 = fVar21;
      in_stack_fffffffffffffef4 = in_XMM1_Db;
    }
    fVar22 = fVar18 - fStack_c0;
    fVar21 = fVar21 - fStack_d0;
    fVar20 = fVar20 - fStack_100;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      pUStackY_128 = (UnityEngine_Object_o *)0x42943c6;
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffee4 = fVar18;
      in_stack_fffffffffffffee8 = uVar23;
      in_stack_fffffffffffffeec = uVar24;
      in_stack_fffffffffffffef0 = fVar21;
      in_stack_fffffffffffffef4 = fVar20;
    }
    in_stack_fffffffffffffee0 = fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21;
    if (in_stack_fffffffffffffee0 < 0.0) {
      pUStackY_128 = (UnityEngine_Object_o *)0x4294437;
      in_stack_fffffffffffffee0 = sqrtf(in_stack_fffffffffffffee0);
    }
    else {
      in_stack_fffffffffffffee0 = SQRT(in_stack_fffffffffffffee0);
    }
    in_XMM1_Da = INFINITY;
    if (in_stack_fffffffffffffee0 < INFINITY) {
      in_XMM1_Da = *(float *)&unaff_R15[2].klass;
      in_XMM1_Db = 0.0;
      if (in_stack_fffffffffffffee0 < in_XMM1_Da) {
        iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
        pUVar17 = x;
        goto joined_r0x042941a3;
      }
    }
    in_stack_fffffffffffffee0 = INFINITY;
    in_XMM1_Db = 0.0;
    iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar17 = (UnityEngine_Object_o *)0x0;
  }
joined_r0x042941a3:
  if (iVar3 == 0) {
    pUStackY_128 = (UnityEngine_Object_o *)0x42941aa;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    pUStackY_128 = (UnityEngine_Object_o *)0x42941d5;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_b0,__this_01,MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    fStack_c8 = fStack_cc;
    pMStack_e0 = pMStack_a0;
    _Stack_f0 = _Stack_b0;
    uStack_e8 = uStack_a8;
    fStack_cc = fStack_100;
    fStack_c4 = fStack_fc;
label_04294220:
    do {
      do {
        do {
          pUStackY_128 = (UnityEngine_Object_o *)0x429422c;
          __this_02.fields._list._4_4_ = in_stack_fffffffffffffee4;
          __this_02.fields._list._0_4_ = in_stack_fffffffffffffee0;
          __this_02.fields._index = in_stack_fffffffffffffee8;
          __this_02.fields._version = in_stack_fffffffffffffeec;
          __this_02.fields._current._0_4_ = in_stack_fffffffffffffef0;
          __this_02.fields._current._4_4_ = in_stack_fffffffffffffef4;
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&_Stack_f0);
          __this_06 = pMStack_e0;
          if ((char)bVar8 == '\0') {
            pUStackY_128 = (UnityEngine_Object_o *)0x4294324;
            __this_03.fields._list._4_4_ = in_stack_fffffffffffffee4;
            __this_03.fields._list._0_4_ = in_stack_fffffffffffffee0;
            __this_03.fields._index = in_stack_fffffffffffffee8;
            __this_03.fields._version = in_stack_fffffffffffffeec;
            __this_03.fields._current._0_4_ = in_stack_fffffffffffffef0;
            __this_03.fields._current._4_4_ = in_stack_fffffffffffffef4;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&_Stack_f0);
            return;
          }
        } while (pMStack_e0 == (Map_MapTargetable_o *)0x0);
        pUStackY_128 = (UnityEngine_Object_o *)0x4294248;
        bVar8 = Map_MapTargetable__ValidTarget(pMStack_e0,(MethodInfo *)0x0);
      } while ((char)bVar8 == '\0');
      pUStackY_128 = (UnityEngine_Object_o *)0x4294256;
      UVar26 = Map_MapTargetable__GetPosition(__this_06,(MethodInfo *)0x0);
      in_stack_fffffffffffffef0 = UVar26.fields.x;
      in_stack_fffffffffffffef4 = UVar26.fields.y;
      if (g_data_057a68cb == '\0') {
        pUStackY_128 = (UnityEngine_Object_o *)0x4294280;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar3 == 0) {
        pUStackY_128 = (UnityEngine_Object_o *)0x4294299;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar20 = UVar26.fields.z - fStack_d0;
      fVar20 = (in_stack_fffffffffffffef0 - fStack_cc) * (in_stack_fffffffffffffef0 - fStack_cc) +
               (in_stack_fffffffffffffef4 - fStack_c0) * (in_stack_fffffffffffffef4 - fStack_c0) +
               fVar20 * fVar20;
      if (fVar20 < 0.0) goto label_042942eb;
      fVar20 = SQRT(fVar20);
    } while (in_stack_fffffffffffffee0 <= fVar20);
    goto label_04294210;
  }
label_04294468:
  pUStackY_128 = (UnityEngine_Object_o *)0x429446d;
  auVar29 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar29._0_8_;
  if (auVar29._8_4_ == 1) {
    pUStackY_128 = (UnityEngine_Object_o *)0x429449d;
    plVar11 = (long *)__cxa_begin_catch(uVar12);
    lVar15 = *plVar11;
    pUStackY_128 = (UnityEngine_Object_o *)0x42944a5;
    __cxa_end_catch();
    pUStackY_128 = (UnityEngine_Object_o *)0x42944b9;
    __this_04.fields._list._4_4_ = in_stack_fffffffffffffee4;
    __this_04.fields._list._0_4_ = in_stack_fffffffffffffee0;
    __this_04.fields._index = in_stack_fffffffffffffee8;
    __this_04.fields._version = in_stack_fffffffffffffeec;
    __this_04.fields._current._0_4_ = in_stack_fffffffffffffef0;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffef4;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_f0);
    if (lVar15 == 0) {
      return;
    }
    pUStackY_128 = (UnityEngine_Object_o *)0x42944ca;
    uVar12 = il2cpp_runtime_helper_022fefe0(lVar15);
  }
  else {
    lVar15 = 0;
  }
  pUStackY_128 = (UnityEngine_Object_o *)0x42944e1;
  __this_05.fields._list._4_4_ = in_stack_fffffffffffffee4;
  __this_05.fields._list._0_4_ = in_stack_fffffffffffffee0;
  __this_05.fields._index = in_stack_fffffffffffffee8;
  __this_05.fields._version = in_stack_fffffffffffffeec;
  __this_05.fields._current._0_4_ = in_stack_fffffffffffffef0;
  __this_05.fields._current._4_4_ = in_stack_fffffffffffffef4;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_f0);
  if (lVar15 == 0) {
    pUStackY_128 = (UnityEngine_Object_o *)0x42944ee;
    _Unwind_Resume(uVar12);
  }
  pUStackY_128 = (UnityEngine_Object_o *)0x42944f6;
  lVar13 = il2cpp_runtime_helper_022fefe0(lVar15);
  pUStackY_128 = (UnityEngine_Object_o *)0x42944fe;
  il2cpp_runtime_helper_01f66400();
  lStackY_130 = lVar15;
  pUStackY_128 = pUVar17;
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar11 = *(long **)(lVar13 + 0x58);
  if (plVar11 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar23 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar13 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar13 + 0x90) = uVar23;
    *(undefined8 *)(lVar13 + 0x78) = 0;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    return;
  }
  lVar15 = *plVar11;
  if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
    lVar16 = 0;
    do {
      if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ITargetable) {
        puVar14 = (undefined8 *)
                  (lVar15 + (long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 1) * 0x10 + 0x138);
        goto label_04294606;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
  }
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_ITargetable,1);
label_04294606:
  __this_07.fields.value.fields._4_8_ = (*(code *)*puVar14)(plVar11,puVar14[1]);
  if (*(char *)(lVar13 + 0x78) == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Db = 0.0;
      g_data_057a65d5 = '\x01';
    }
    uVar23 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar13 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar13 + 0x90) = uVar23;
  }
  else {
    fStackY_148 = (float)__this_07.fields.value.fields._4_8_ - (float)*(undefined8 *)(lVar13 + 0x7c);
    fStackY_144 = (float)((ulong)__this_07.fields.value.fields._4_8_ >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar13 + 0x7c) >> 0x20);
    fStackY_140 = extraout_XMM0_Dc_00 - 0.0;
    fStackY_13c = extraout_XMM0_Dd_00 - 0.0;
    fVar20 = *(float *)(lVar13 + 0x84);
    fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Db = 0.0;
    auVar7._4_4_ = fStackY_144;
    auVar7._0_4_ = fStackY_148;
    auVar7._8_4_ = fStackY_140;
    auVar7._12_4_ = fStackY_13c;
    auVar25._4_4_ = fVar18;
    auVar25._0_4_ = fVar18;
    auVar25._8_4_ = extraout_XMM0_Dc_01;
    auVar25._12_4_ = extraout_XMM0_Dd_01;
    auVar25 = divps(auVar7,auVar25);
    *(long *)(lVar13 + 0x88) = auVar25._0_8_;
    *(float *)(lVar13 + 0x90) = (in_XMM1_Da - fVar20) / fVar18;
  }
  uStackY_158 = 0;
  uStackY_150 = 0;
  UVar26.fields.y = in_XMM1_Db;
  UVar26.fields.x = in_XMM1_Da;
  UVar26.fields.z = (float)__this_07.fields.value.fields._4_8_;
  __this_07.fields._0_8_ = &uStackY_158;
  System_Nullable_Vector3____ctor(__this_07,UVar26,MethodInfo_Nullable_1_UnityEngine_Vector3);
  *(undefined8 *)(lVar13 + 0x78) = uStackY_158;
  *(undefined8 *)(lVar13 + 0x80) = uStackY_150;
  return;
label_042942eb:
  pUStackY_128 = (UnityEngine_Object_o *)0x42942f0;
  fVar20 = sqrtf(fVar20);
  if (fVar20 < in_stack_fffffffffffffee0) {
label_04294210:
    if (fVar20 < *(float *)&unaff_R15[2].klass) {
      in_stack_fffffffffffffee0 = fVar20;
    }
  }
  goto label_04294220;
}


// Controllers.HumanAIController$$FindNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__FindNearestEnemy (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294060

Characters_ITargetable_o *
Controllers_HumanAIController__FindNearestEnemy(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Characters_Human_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  Characters_BaseMovementSync_o *pCVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationCallbackInfo_o *pSVar6;
  System_Action_object__o *__this_02;
  undefined1 auVar7 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  Characters_ITargetable_o *extraout_RAX;
  long lVar13;
  long lVar14;
  System_Threading_CancellationTokenSource_o *unaff_R14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar16;
  float fVar17;
  float in_XMM1_Db;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  UnityEngine_Vector3_o UVar22;
  undefined1 auVar23 [12];
  System_Nullable_Vector3__o __this_07;
  undefined8 uStackY_f0;
  undefined8 uStackY_e8;
  float fStackY_e0;
  float fStackY_dc;
  float fStackY_d8;
  float fStackY_d4;
  long lStackY_c8;
  System_Threading_CancellationTokenSource_o *pSStackY_c0;
  float in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  float local_98;
  float fStack_94;
  _union_249689 local_88;
  undefined8 uStack_80;
  System_Threading_CancellationTokenSource_o *local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  _union_249689 local_48;
  undefined8 uStack_40;
  System_Threading_CancellationTokenSource_o *local_38;
  
  if (g_data_057adcec == '\0') {
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42940a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTargetable_get_Current);
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42940ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42940b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42940c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adcec = '\x01';
  }
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_Threading_CancellationTokenSource_o *)0x0;
  pCVar3 = (__this->fields)._human;
  if (((pCVar3 == (Characters_Human_o *)0x0) || (lVar13 = *(long *)&(pCVar3->fields).Dead, lVar13 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar13 + 0x10), __this_00 == (UnityEngine_Transform_o *)0x0))
  goto label_04294468;
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429410b;
  UVar22 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  in_XMM1_Da = UVar22.fields.z;
  pCVar3 = (__this->fields)._human;
  local_68 = in_XMM1_Da;
  if ((pCVar3 == (Characters_Human_o *)0x0) ||
     (pCVar4 = (pCVar3->fields).MovementSync, pCVar4 == (Characters_BaseMovementSync_o *)0x0))
  goto label_04294468;
  pSVar5 = (pCVar4->fields).m_CancellationTokenSource;
  fStack_64 = in_XMM1_Db;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429414e;
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_R14 = (System_Threading_CancellationTokenSource_o *)0x0;
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429415d;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_stack_ffffffffffffff48 = INFINITY;
  fStack_94 = UVar22.fields.y;
  local_58 = fStack_94;
  fStack_54 = fStack_94;
  local_98 = UVar22.fields.x;
  if ((char)bVar8 == '\0') {
label_04294192:
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
    unaff_R14 = (System_Threading_CancellationTokenSource_o *)0x0;
  }
  else {
    if (pSVar5 == (System_Threading_CancellationTokenSource_o *)0x0) goto label_04294468;
    if ((char)pSVar5[1].fields._disposed != '\0') goto label_04294192;
    pSVar6 = pSVar5[1].fields._executingCallback;
    if ((pSVar6 == (System_Threading_CancellationCallbackInfo_o *)0x0) ||
       (__this_02 = (pSVar6->fields).Callback, __this_02 == (System_Action_object__o *)0x0))
    goto label_04294468;
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429435a;
    UVar22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
    fVar17 = UVar22.fields.z;
    fVar16 = UVar22.fields.x;
    fVar15 = UVar22.fields.y;
    uVar19 = extraout_XMM0_Dc;
    uVar20 = extraout_XMM0_Dd;
    if (g_data_057a68cb == '\0') {
      pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429437b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      in_stack_ffffffffffffff4c = fVar15;
      in_stack_ffffffffffffff50 = uVar19;
      in_stack_ffffffffffffff54 = uVar20;
      in_stack_ffffffffffffff58 = fVar17;
      in_stack_ffffffffffffff5c = in_XMM1_Db;
    }
    fVar18 = fVar15 - local_58;
    fVar17 = fVar17 - local_68;
    fVar16 = fVar16 - local_98;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42943c6;
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff4c = fVar15;
      in_stack_ffffffffffffff50 = uVar19;
      in_stack_ffffffffffffff54 = uVar20;
      in_stack_ffffffffffffff58 = fVar17;
      in_stack_ffffffffffffff5c = fVar16;
    }
    in_stack_ffffffffffffff48 = fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17;
    if (in_stack_ffffffffffffff48 < 0.0) {
      pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294437;
      in_stack_ffffffffffffff48 = sqrtf(in_stack_ffffffffffffff48);
    }
    else {
      in_stack_ffffffffffffff48 = SQRT(in_stack_ffffffffffffff48);
    }
    in_XMM1_Da = INFINITY;
    if (in_stack_ffffffffffffff48 < INFINITY) {
      in_XMM1_Da = (__this->fields).DetectRange;
      in_XMM1_Db = 0.0;
      if (in_stack_ffffffffffffff48 < in_XMM1_Da) {
        iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
        unaff_R14 = pSVar5;
        goto joined_r0x042941a3;
      }
    }
    in_stack_ffffffffffffff48 = INFINITY;
    in_XMM1_Db = 0.0;
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
    unaff_R14 = (System_Threading_CancellationTokenSource_o *)0x0;
  }
joined_r0x042941a3:
  if (iVar1 == 0) {
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42941aa;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42941d5;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this_01,MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    fStack_60 = fStack_64;
    local_78 = local_38;
    local_88 = local_48;
    uStack_80 = uStack_40;
    fStack_64 = local_98;
    fStack_5c = fStack_94;
label_04294220:
    do {
      do {
        do {
          pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429422c;
          __this_03.fields._list._4_4_ = in_stack_ffffffffffffff4c;
          __this_03.fields._list._0_4_ = in_stack_ffffffffffffff48;
          __this_03.fields._index = in_stack_ffffffffffffff50;
          __this_03.fields._version = in_stack_ffffffffffffff54;
          __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
          __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&local_88);
          pSVar5 = local_78;
          if ((char)bVar8 == '\0') {
            pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294324;
            __this_04.fields._list._4_4_ = in_stack_ffffffffffffff4c;
            __this_04.fields._list._0_4_ = in_stack_ffffffffffffff48;
            __this_04.fields._index = in_stack_ffffffffffffff50;
            __this_04.fields._version = in_stack_ffffffffffffff54;
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58;
            __this_04.fields._current._4_4_ = in_stack_ffffffffffffff5c;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&local_88);
            return (Characters_ITargetable_o *)unaff_R14;
          }
        } while (local_78 == (System_Threading_CancellationTokenSource_o *)0x0);
        pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294248;
        bVar8 = Map_MapTargetable__ValidTarget((Map_MapTargetable_o *)local_78,(MethodInfo *)0x0);
      } while ((char)bVar8 == '\0');
      pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294256;
      UVar22 = Map_MapTargetable__GetPosition((Map_MapTargetable_o *)pSVar5,(MethodInfo *)0x0);
      in_stack_ffffffffffffff58 = UVar22.fields.x;
      in_stack_ffffffffffffff5c = UVar22.fields.y;
      if (g_data_057a68cb == '\0') {
        pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294280;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x4294299;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar16 = UVar22.fields.z - local_68;
      fVar16 = (in_stack_ffffffffffffff58 - fStack_64) * (in_stack_ffffffffffffff58 - fStack_64) +
               (in_stack_ffffffffffffff5c - local_58) * (in_stack_ffffffffffffff5c - local_58) +
               fVar16 * fVar16;
      if (fVar16 < 0.0) goto label_042942eb;
      fVar16 = SQRT(fVar16);
    } while (in_stack_ffffffffffffff48 <= fVar16);
    goto label_04294210;
  }
label_04294468:
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429446d;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar10 = auVar23._0_8_;
  if (auVar23._8_4_ == 1) {
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x429449d;
    plVar9 = (long *)__cxa_begin_catch(uVar10);
    lVar13 = *plVar9;
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944a5;
    __cxa_end_catch();
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944b9;
    __this_05.fields._list._4_4_ = in_stack_ffffffffffffff4c;
    __this_05.fields._list._0_4_ = in_stack_ffffffffffffff48;
    __this_05.fields._index = in_stack_ffffffffffffff50;
    __this_05.fields._version = in_stack_ffffffffffffff54;
    __this_05.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_05.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&local_88);
    if (lVar13 == 0) {
      return (Characters_ITargetable_o *)unaff_R14;
    }
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944ca;
    uVar10 = il2cpp_runtime_helper_022fefe0(lVar13);
  }
  else {
    lVar13 = 0;
  }
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944e1;
  __this_06.fields._list._4_4_ = in_stack_ffffffffffffff4c;
  __this_06.fields._list._0_4_ = in_stack_ffffffffffffff48;
  __this_06.fields._index = in_stack_ffffffffffffff50;
  __this_06.fields._version = in_stack_ffffffffffffff54;
  __this_06.fields._current._0_4_ = in_stack_ffffffffffffff58;
  __this_06.fields._current._4_4_ = in_stack_ffffffffffffff5c;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&local_88);
  if (lVar13 == 0) {
    pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944ee;
    _Unwind_Resume(uVar10);
  }
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944f6;
  lVar11 = il2cpp_runtime_helper_022fefe0(lVar13);
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42944fe;
  il2cpp_runtime_helper_01f66400();
  lStackY_c8 = lVar13;
  pSStackY_c0 = unaff_R14;
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar9 = *(long **)(lVar11 + 0x58);
  if (plVar9 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar2 = *(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar11 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(uint *)(lVar11 + 0x90) = uVar2;
    *(undefined8 *)(lVar11 + 0x78) = 0;
    *(undefined8 *)(lVar11 + 0x80) = 0;
    return (Characters_ITargetable_o *)(ulong)uVar2;
  }
  lVar13 = *plVar9;
  if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
    lVar14 = 0;
    do {
      if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_ITargetable) {
        puVar12 = (undefined8 *)
                  (lVar13 + (long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) + 1) * 0x10 + 0x138);
        goto label_04294606;
      }
      lVar14 = lVar14 + 0x10;
    } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
  }
  puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_ITargetable,1);
label_04294606:
  __this_07.fields.value.fields._4_8_ = (*(code *)*puVar12)(plVar9,puVar12[1]);
  if (*(char *)(lVar11 + 0x78) == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Db = 0.0;
      g_data_057a65d5 = '\x01';
    }
    uVar19 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar11 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar11 + 0x90) = uVar19;
  }
  else {
    fStackY_e0 = (float)__this_07.fields.value.fields._4_8_ - (float)*(undefined8 *)(lVar11 + 0x7c);
    fStackY_dc = (float)((ulong)__this_07.fields.value.fields._4_8_ >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar11 + 0x7c) >> 0x20);
    fStackY_d8 = extraout_XMM0_Dc_00 - 0.0;
    fStackY_d4 = extraout_XMM0_Dd_00 - 0.0;
    fVar16 = *(float *)(lVar11 + 0x84);
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Db = 0.0;
    auVar7._4_4_ = fStackY_dc;
    auVar7._0_4_ = fStackY_e0;
    auVar7._8_4_ = fStackY_d8;
    auVar7._12_4_ = fStackY_d4;
    auVar21._4_4_ = fVar15;
    auVar21._0_4_ = fVar15;
    auVar21._8_4_ = extraout_XMM0_Dc_01;
    auVar21._12_4_ = extraout_XMM0_Dd_01;
    auVar21 = divps(auVar7,auVar21);
    *(long *)(lVar11 + 0x88) = auVar21._0_8_;
    *(float *)(lVar11 + 0x90) = (in_XMM1_Da - fVar16) / fVar15;
  }
  uStackY_f0 = 0;
  uStackY_e8 = 0;
  UVar22.fields.y = in_XMM1_Db;
  UVar22.fields.x = in_XMM1_Da;
  UVar22.fields.z = (float)__this_07.fields.value.fields._4_8_;
  __this_07.fields._0_8_ = &uStackY_f0;
  System_Nullable_Vector3____ctor(__this_07,UVar22,MethodInfo_Nullable_1_UnityEngine_Vector3);
  *(undefined8 *)(lVar11 + 0x78) = uStackY_f0;
  *(undefined8 *)(lVar11 + 0x80) = uStackY_e8;
  return extraout_RAX;
label_042942eb:
  pSStackY_c0 = (System_Threading_CancellationTokenSource_o *)0x42942f0;
  fVar16 = sqrtf(fVar16);
  if (fVar16 < in_stack_ffffffffffffff48) {
label_04294210:
    if (fVar16 < (__this->fields).DetectRange) {
      unaff_R14 = pSVar5;
      in_stack_ffffffffffffff48 = fVar16;
    }
  }
  goto label_04294220;
}


// Controllers.HumanAIController$$FixedUpdateTargetStatus
// il2cpp: void Controllers_HumanAIController__FixedUpdateTargetStatus (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294500

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
  
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar3 = *(long **)&(__this->fields)._hookingRight;
  if (plVar3 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
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
        goto label_04294606;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar8);
  }
  puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_ITargetable,1);
label_04294606:
  __this_00.fields.value.fields._4_8_ = (*(code *)*puVar7)(plVar3,puVar7[1]);
  fVar10 = (float)in_XMM1_Qa;
  if (*(char *)&(__this->fields).TargetDirection.fields.y == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Qa = in_XMM1_Qa & 0xffffffff;
      g_data_057a65d5 = '\x01';
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
    fStack_24 = (float)((ulong)__this_00.fields.value.fields._4_8_ >> 0x20) - (float)((ulong)uVar2 >> 0x20);
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
  System_Nullable_Vector3____ctor(__this_00,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
  (__this->fields).TargetDirection.fields.y = (float)(undefined4)local_38;
  (__this->fields).TargetDirection.fields.z = (float)local_38._4_4_;
  (__this->fields)._targetLastPosition.fields.hasValue = (undefined4)uStack_30;
  (__this->fields)._targetLastPosition.fields.value.fields.x = (float)uStack_30._4_4_;
  return;
}


// Controllers.HumanAIController$$FixedUpdate
// il2cpp: void Controllers_HumanAIController__FixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294710

void Controllers_HumanAIController__FixedUpdate(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  Characters_Human_o *pCVar5;
  Controllers_HumanAIState_o *pCVar6;
  undefined8 uVar7;
  Controllers_HumanAIState_c *pCVar8;
  System_Action_Hashtable__o *pSVar9;
  System_Action_Hashtable__c *pSVar10;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar11;
  Controllers_HumanAIController_o *pCVar12;
  System_String_o **__this_01;
  
  pCVar5 = (__this->fields)._human;
  pCVar12 = __this;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    if ((char)(pCVar5->fields).AllowHorse == '\0') {
      return;
    }
    Controllers_HumanAIController__BeforeFixedUpdate(__this,method);
    Controllers_HumanAIController__FixedUpdateTargetStatus(__this,method);
    pCVar6 = (__this->fields).AIState;
    if (pCVar6 != (Controllers_HumanAIState_o *)0x0) {
      pCVar12 = (pCVar6->fields).Controller;
      if (pCVar12 != (Controllers_HumanAIController_o *)0x0) {
        (*(code *)(pCVar12->fields).m_CancellationTokenSource)
                  (*(undefined8 *)&(pCVar12->fields).AimDirection.fields.z,(pCVar12->fields)._human);
      }
      pCVar12 = *(Controllers_HumanAIController_o **)&(__this->fields).TargetVelocity.fields.z;
      if (pCVar12 == (Controllers_HumanAIController_o *)0x0) {
        pCVar6 = (__this->fields).AIState;
        if (pCVar6 == (Controllers_HumanAIState_o *)0x0) goto label_042947cf;
        pCVar5 = (pCVar6->fields).Human;
        if (pCVar5 != (Characters_Human_o *)0x0) {
          uVar7._0_4_ = (pCVar5->fields).FootstepsEnabled;
          uVar7._4_4_ = (pCVar5->fields).SoundsEnabled;
          pCVar12 = (Controllers_HumanAIController_o *)(pCVar5->fields).RichTextName;
          (*(code *)(pCVar5->fields).m_CancellationTokenSource)(pCVar12,uVar7);
        }
        pCVar6 = (__this->fields).AIState;
      }
      else {
        (*(pCVar12->klass->vtable)._7_MovingLeft.methodPtr)
                  (pCVar12,(pCVar12->klass->vtable)._7_MovingLeft.method);
        pCVar6 = (__this->fields).AIState;
      }
      if (pCVar6 != (Controllers_HumanAIState_o *)0x0) {
        pCVar8 = pCVar6[1].klass;
        if (pCVar8 == (Controllers_HumanAIState_c *)0x0) {
          return;
        }
        (*(code *)(pCVar8->_1).namespaze)
                  ((pCVar8->_1).element_class,*(undefined8 *)&(pCVar8->_1).byval_arg.bits);
        return;
      }
    }
  }
label_042947cf:
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (System_String_o **)pCVar12;
  if (g_data_057adcee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&"jump");
    __this_01 = &"dash";
    il2cpp_runtime_helper_023445d0();
    g_data_057adcee = '\x01';
  }
  pCVar5 = (pCVar12->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar5->fields).FeedVictimName != '\0') {
      return;
    }
    iVar4 = (pCVar5->fields).FinishSetup;
    if (iVar4 == 0xf) {
      return;
    }
    if (*(int *)&(pCVar5->fields).Weapon == 1) {
      return;
    }
    cVar1 = *(char *)((long)&(pCVar5->fields).Animation + 4);
    if ((iVar4 != 0) && (cVar1 != '\0')) {
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (iVar4 == 8) {
      return;
    }
    if (iVar4 == 9) {
      pSVar9 = (pCVar5->fields).OnPlayerPropertiesChanged;
      if (pSVar9 == (System_Action_Hashtable__o *)0x0) {
        return;
      }
      pSVar10 = pSVar9->klass;
      bVar2 = (pSVar10->_2).naturalAligment;
      bVar3 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_DownStrikeSpecial)) {
        bVar3 = (TypeInfo_StockSpecial->_2).naturalAligment;
        if (bVar2 < bVar3) {
          return;
        }
        if ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StockSpecial) {
          return;
        }
      }
    }
    __this_01 = *(System_String_o ***)&(pCVar5->fields)._cameraFPS;
    if ((Controllers_HumanAIController_o *)__this_01 != (Controllers_HumanAIController_o *)0x0) {
      bVar11 = Characters_AnimationHandler__IsPlaying
                         ((Characters_AnimationHandler_o *)__this_01,"dash",(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return;
      }
      pCVar5 = (pCVar12->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        __this_00 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
        __this_01 = (System_String_o **)0x0;
        if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
          bVar11 = Characters_AnimationHandler__IsPlaying(__this_00,"jump",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            pCVar5 = (pCVar12->fields)._human;
            __this_01 = (System_String_o **)0x0;
            if (pCVar5 == (Characters_Human_o *)0x0) goto label_04294955;
            Characters_Human__IsFiringThunderspear(pCVar5,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_04294955:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcef == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057adcef = '\x01';
  }
  pCVar5 = (((Controllers_HumanAIController_o *)__this_01)->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if ((((pCVar5->fields).FinishSetup == 9) &&
      (pSVar9 = (pCVar5->fields).OnPlayerPropertiesChanged, pSVar9 != (System_Action_Hashtable__o *)0x0)) &&
     (*(byte *)(TypeInfo_Spin3Special + 0x130) <= (pSVar9->klass->_2).naturalAligment)) {
    return;
  }
  return;
}


// Controllers.HumanAIController$$CanMove
// il2cpp: bool Controllers_HumanAIController__CanMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42947e0

bool_conflict
Controllers_HumanAIController__CanMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  Characters_Human_o *pCVar6;
  System_Action_Hashtable__o *pSVar7;
  System_Action_Hashtable__c *pSVar8;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar9;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  Controllers_HumanAIController_o *__this_01;
  Controllers_HumanAIController_o *pCVar11;
  
  __this_01 = __this;
  if (g_data_057adcee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&"jump");
    __this_01 = (Controllers_HumanAIController_o *)&"dash";
    il2cpp_runtime_helper_023445d0();
    g_data_057adcee = '\x01';
  }
  pCVar6 = (__this->fields)._human;
  if (pCVar6 == (Characters_Human_o *)0x0) {
label_04294955:
    il2cpp_runtime_helper_022b2c90();
    pCVar11 = __this_01;
    if (g_data_057adcef == '\0') {
      pCVar11 = (Controllers_HumanAIController_o *)&TypeInfo_Spin3Special;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcef = '\x01';
    }
    pCVar6 = (__this_01->fields)._human;
    if (pCVar6 == (Characters_Human_o *)0x0) {
      uVar10 = il2cpp_runtime_helper_022b2c90();
      pfVar1 = &(pCVar11->fields)._movingLeft;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),*pfVar1 <= 0.0 && *pfVar1 != 0.0);
    }
    if (((pCVar6->fields).FinishSetup == 9) &&
       (pSVar7 = (pCVar6->fields).OnPlayerPropertiesChanged, pSVar7 != (System_Action_Hashtable__o *)0x0)) {
      pSVar8 = pSVar7->klass;
      bVar3 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if (bVar3 <= (pSVar8->_2).naturalAligment) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)TypeInfo_Spin3Special >> 8),
                        (pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_Spin3Special);
      }
    }
    return 0;
  }
  if (*(char *)&(pCVar6->fields).FeedVictimName != '\0') {
    return 0;
  }
  iVar5 = (pCVar6->fields).FinishSetup;
  if (iVar5 == 0xf) {
    return 0;
  }
  if (*(int *)&(pCVar6->fields).Weapon != 1) {
    cVar2 = *(char *)((long)&(pCVar6->fields).Animation + 4);
    if ((iVar5 != 0) && (cVar2 != '\0')) {
      return 0;
    }
    if (cVar2 == '\0') {
      if (iVar5 == 8) {
        return 0;
      }
      if (iVar5 == 9) {
        pSVar7 = (pCVar6->fields).OnPlayerPropertiesChanged;
        if (pSVar7 == (System_Action_Hashtable__o *)0x0) {
          return 0;
        }
        pSVar8 = pSVar7->klass;
        bVar3 = (pSVar8->_2).naturalAligment;
        bVar4 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
        if ((bVar3 < bVar4) || ((pSVar8->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_DownStrikeSpecial)) {
          bVar4 = (TypeInfo_StockSpecial->_2).naturalAligment;
          if (bVar3 < bVar4) {
            return 0;
          }
          if ((pSVar8->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StockSpecial) {
            return 0;
          }
        }
      }
      __this_01 = *(Controllers_HumanAIController_o **)&(pCVar6->fields)._cameraFPS;
      if (__this_01 != (Controllers_HumanAIController_o *)0x0) {
        bVar9 = Characters_AnimationHandler__IsPlaying
                          ((Characters_AnimationHandler_o *)__this_01,"dash",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return 0;
        }
        pCVar6 = (__this->fields)._human;
        if (pCVar6 != (Characters_Human_o *)0x0) {
          __this_00 = *(Characters_AnimationHandler_o **)&(pCVar6->fields)._cameraFPS;
          __this_01 = (Controllers_HumanAIController_o *)0x0;
          if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
            bVar9 = Characters_AnimationHandler__IsPlaying(__this_00,"jump",(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return 0;
            }
            pCVar6 = (__this->fields)._human;
            __this_01 = (Controllers_HumanAIController_o *)0x0;
            if (pCVar6 != (Characters_Human_o *)0x0) {
              unaff_RBX = 0;
              bVar9 = Characters_Human__IsFiringThunderspear(pCVar6,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') {
                return 0;
              }
              goto label_0429486c;
            }
          }
        }
      }
      goto label_04294955;
    }
  }
label_0429486c:
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
}


// Controllers.HumanAIController$$IsSpin3Special
// il2cpp: bool Controllers_HumanAIController__IsSpin3Special (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294960

bool_conflict
Controllers_HumanAIController__IsSpin3Special(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  System_Action_Hashtable__c *pSVar5;
  undefined8 uVar6;
  Controllers_HumanAIController_o *pCVar7;
  
  pCVar7 = __this;
  if (g_data_057adcef == '\0') {
    pCVar7 = (Controllers_HumanAIController_o *)&TypeInfo_Spin3Special;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcef = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if (((pCVar3->fields).FinishSetup == 9) &&
       (pSVar4 = (pCVar3->fields).OnPlayerPropertiesChanged, pSVar4 != (System_Action_Hashtable__o *)0x0)) {
      pSVar5 = pSVar4->klass;
      bVar2 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if (bVar2 <= (pSVar5->_2).naturalAligment) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)TypeInfo_Spin3Special >> 8),
                        (pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Spin3Special);
      }
    }
    return 0;
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
  pfVar1 = &(pCVar7->fields)._movingLeft;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),*pfVar1 <= 0.0 && *pfVar1 != 0.0);
}


// Controllers.HumanAIController$$MovingLeft
// il2cpp: bool Controllers_HumanAIController__MovingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42949e0

bool_conflict
Controllers_HumanAIController__MovingLeft(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 in_EAX;
  
  pfVar1 = &(__this->fields)._movingLeft;
  return CONCAT31((int3)((uint)in_EAX >> 8),*pfVar1 <= 0.0 && *pfVar1 != 0.0);
}


// Controllers.HumanAIController$$MovingRight
// il2cpp: bool Controllers_HumanAIController__MovingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42949f0

bool_conflict
Controllers_HumanAIController__MovingRight(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),0.0 < (__this->fields)._movingLeft);
}


// Controllers.HumanAIController$$UsingGas
// il2cpp: bool Controllers_HumanAIController__UsingGas (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294a00

bool_conflict
Controllers_HumanAIController__UsingGas(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._usingGas);
}


// Controllers.HumanAIController$$HookingLeft
// il2cpp: bool Controllers_HumanAIController__HookingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294a10

bool_conflict
Controllers_HumanAIController__HookingLeft(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields)._usingGas + 1));
}


// Controllers.HumanAIController$$HookingRight
// il2cpp: bool Controllers_HumanAIController__HookingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294a20

bool_conflict
Controllers_HumanAIController__HookingRight(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields)._usingGas + 2));
}


// Controllers.HumanAIController$$HookingBoth
// il2cpp: bool Controllers_HumanAIController__HookingBoth (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294a30

bool_conflict
Controllers_HumanAIController__HookingBoth(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return 0;
}


// Controllers.HumanAIController$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__GetAimPoint (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294a40

UnityEngine_Vector3_o
Controllers_HumanAIController__GetAimPoint(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).AimPoint.fields;
}


// Controllers.HumanAIController$$Move
// il2cpp: void Controllers_HumanAIController__Move (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o direction, const MethodInfo* method);
// 0x4294a50

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
  float in_XMM1_Da;
  float fStack_44;
  float fStack_34;
  
  method_00 = direction.fields._0_8_;
  fStack_34 = direction.fields.value.fields.x;
  if (g_data_057adcf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf0 = '\x01';
  }
  bVar3 = Controllers_HumanAIController__CanMove(__this,method_00);
  if ((char)bVar3 == '\0') {
    return;
  }
  if ((char)direction.fields.hasValue == '\0') {
    pCVar2 = (__this->fields)._character;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 0;
      pCVar4 = (__this->fields)._human;
      in_XMM1_Da = 0.0;
      if (pCVar4 != (Characters_Human_o *)0x0) goto label_04294c41;
    }
label_04294d75:
    pCVar4 = (Characters_Human_o *)il2cpp_runtime_helper_022b2c90();
label_04294d7a:
    if (*(char *)((long)&(pCVar4->fields).Animation + 4) == '\0') goto label_04294c0f;
    fVar5 = 0.25;
  }
  else {
    fStack_44 = direction.fields.value.fields.z;
    (__this->fields)._movingLeft =
         (__this->fields).AimDirection.fields.x * fStack_44 -
         (__this->fields).AimDirection.fields.z * fStack_34;
    pCVar2 = (__this->fields)._character;
    in_XMM1_Da = fStack_44;
    fVar5 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,direction.fields.value.fields,method_00);
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_04294d75;
    *(float *)&(pCVar2->fields).Detection = fVar5;
    pCVar2 = (__this->fields)._character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_04294d75;
    *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 1;
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar5 = fStack_44 * fStack_44 + fStack_34 * fStack_34 + 0.0;
    if (fVar5 < 0.0) {
      fVar6 = sqrtf(fVar5);
      if (fVar6 <= 0.95) goto label_04294b76;
label_04294c6e:
      in_XMM1_Da = 1.0;
label_04294c76:
      pCVar4 = (__this->fields)._human;
    }
    else {
      if (0.95 < SQRT(fVar5)) goto label_04294c6e;
label_04294b76:
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_04294b93;
label_04294ceb:
        il2cpp_runtime_helper_02337ed0();
        if (0.0 <= fVar5) goto label_04294b9f;
label_04294d00:
        fVar6 = sqrtf(fVar5);
      }
      else {
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_04294ceb;
label_04294b93:
        if (fVar5 < 0.0) goto label_04294d00;
label_04294b9f:
        fVar6 = SQRT(fVar5);
      }
      in_XMM1_Da = 0.0;
      if (fVar6 < 0.25) goto label_04294c76;
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (fVar5 < 0.0) {
        in_XMM1_Da = sqrtf(fVar5);
        pCVar4 = (__this->fields)._human;
      }
      else {
        in_XMM1_Da = SQRT(fVar5);
        pCVar4 = (__this->fields)._human;
      }
    }
    if (pCVar4 == (Characters_Human_o *)0x0) goto label_04294d75;
    if ((((char)(pCVar4->fields).IsRefillable != '\0') && (*(int *)&(pCVar4->fields).Weapon == 0)) &&
       ((pCVar4->fields).FinishSetup == 0)) goto label_04294d7a;
label_04294c0f:
    fVar5 = 1.0;
  }
  in_XMM1_Da = in_XMM1_Da * fVar5;
label_04294c41:
  (pCVar4->fields).IsAttackableState = (bool_conflict)in_XMM1_Da;
  return;
}


// Controllers.HumanAIController$$GetMovementScale
// il2cpp: float Controllers_HumanAIController__GetMovementScale (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294da0

float Controllers_HumanAIController__GetMovementScale
                (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_Horse_o *__this_00;
  long lVar4;
  Photon_Pun_PhotonView_o *__this_01;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Object_array *parameters;
  char cVar7;
  char cVar8;
  MethodInfo *pMVar9;
  Characters_Human_o *pCVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  undefined8 uVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  float fStack_b0;
  float fStack_ac;
  float fStack_3c;
  
  pCVar10 = (__this->fields)._human;
  if (pCVar10 != (Characters_Human_o *)0x0) {
    if (((((char)(pCVar10->fields).IsRefillable != '\0') && (*(int *)&(pCVar10->fields).Weapon == 0)) &&
        ((pCVar10->fields).FinishSetup == 0)) && (*(char *)((long)&(pCVar10->fields).Animation + 4) != '\0'))
    {
      return 0.25;
    }
    return 1.0;
  }
  uVar14 = il2cpp_runtime_helper_022b2c90();
  fVar12 = (float)((ulong)uVar14 >> 0x20);
  fVar13 = (float)uVar14;
  fStack_3c = (float)((ulong)method >> 0x20);
  pMVar9 = method;
  if (g_data_057adcf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
  }
  cVar7 = (char)pMVar9;
  if ((char)method == '\0') {
    if (g_data_057a65d5 == '\0') {
      fVar13 = (float)il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).AimDirection.fields.x = (float)(int)uVar14;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar12;
    return fVar13;
  }
  (__this->fields).AimPoint.fields.x = fStack_3c;
  (__this->fields).AimPoint.fields.y = fVar13;
  (__this->fields).AimPoint.fields.z = fVar12;
  pCVar10 = (__this->fields)._human;
  if (pCVar10 != (Characters_Human_o *)0x0) {
    cVar7 = '\0';
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar15 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      fVar12 = fVar12 - UVar15.fields.z;
      (__this->fields).AimDirection.fields.x = fStack_3c - UVar15.fields.x;
      (__this->fields).AimDirection.fields.y = fVar13 - UVar15.fields.y;
      (__this->fields).AimDirection.fields.z = fVar12;
      return fVar12;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar3 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar3->fields).FeedVictimName != '\0') {
      return fVar12;
    }
    if ((pCVar3->fields).FinishSetup == 0xf) {
      return fVar12;
    }
    iVar1 = *(int *)&(pCVar3->fields).Weapon;
    if (iVar1 == 1) {
      __this_00 = (Characters_Horse_o *)(pCVar3->fields).HookLeft;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        Characters_Horse__Jump(__this_00,(MethodInfo *)0x0);
        return extraout_XMM0_Da_01;
      }
    }
    else {
      if (iVar1 != 0) {
        return fVar12;
      }
      cVar7 = '\0';
      bVar5 = Characters_Human__CanJump(pCVar3,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return extraout_XMM0_Da;
      }
      pCVar10 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
      if (pCVar10 != (Characters_Human_o *)0x0) {
        Characters_Human__Jump(pCVar10,(MethodInfo *)0x0);
        return extraout_XMM0_Da_00;
      }
    }
  }
  lVar11 = 0;
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  cVar8 = cVar7;
  if (g_data_057adcf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    fVar12 = (float)il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    g_data_057adcf2 = '\x01';
  }
  pCVar10 = *(Characters_Human_o **)(lVar11 + 0x28);
  if (pCVar10 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar10->fields).FeedVictimName != '\0') {
      return fVar12;
    }
    iVar1 = (pCVar10->fields).FinishSetup;
    if (iVar1 == 0xf) {
      return fVar12;
    }
    iVar2 = *(int *)&(pCVar10->fields).Weapon;
    if ((iVar2 != 0) || (cVar7 == '\0')) {
      if (iVar1 != 0) {
        return fVar12;
      }
      if (iVar2 != 1) {
        return fVar12;
      }
      if (cVar7 != '\0') {
        return fVar12;
      }
      Characters_Human__Unmount(pCVar10,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_04;
    }
    cVar8 = '\0';
    bVar5 = Characters_Human__CanJump(pCVar10,(MethodInfo *)0x0);
    fVar12 = extraout_XMM0_Da_02;
    if ((char)bVar5 == '\0') {
label_042951a9:
      lVar11 = *(long *)(lVar11 + 0x28);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x11c) != 1) {
          return fVar12;
        }
        if (*(long *)(lVar11 + 0x70) != 0) {
          __this_01 = *(Photon_Pun_PhotonView_o **)(*(long *)(lVar11 + 0x70) + 0x20);
          cVar8 = '\0';
          pCVar10 = TypeInfo_object;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return extraout_XMM0_Da_06;
          }
        }
      }
    }
    else if (*(long *)(lVar11 + 0x28) != 0) {
      pCVar10 = *(Characters_Human_o **)(*(long *)(lVar11 + 0x28) + 0x120);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar8 = '\0';
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar12 = extraout_XMM0_Da_03;
      if ((char)bVar5 == '\0') goto label_042951a9;
      lVar4 = *(long *)(lVar11 + 0x28);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x118) != 0) goto label_042951a9;
        if (((*(long *)(lVar4 + 0x120) != 0) &&
            (lVar4 = *(long *)(*(long *)(lVar4 + 0x120) + 0x70), lVar4 != 0)) &&
           (pCVar10 = *(Characters_Human_o **)(lVar4 + 0x10), pCVar10 != (Characters_Human_o *)0x0)) {
          cVar8 = '\0';
          UVar15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
          if ((*(long *)(lVar11 + 0x28) != 0) &&
             (lVar4 = *(long *)(*(long *)(lVar11 + 0x28) + 0x70), lVar4 != 0)) {
            pUVar6 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
            pCVar10 = (Characters_Human_o *)0x0;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              cVar8 = '\0';
              UVar16 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              fStack_b0 = UVar15.fields.x;
              fStack_ac = UVar15.fields.y;
              fStack_ac = fStack_ac - UVar16.fields.y;
              fVar12 = UVar15.fields.z - UVar16.fields.z;
              fStack_b0 = fStack_b0 - UVar16.fields.x;
              pCVar10 = TypeInfo_Math;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar12 = fStack_b0 * fStack_b0 + fStack_ac * fStack_ac + fVar12 * fVar12;
              if (fVar12 < 0.0) {
                fVar12 = sqrtf(fVar12);
              }
              else {
                fVar12 = SQRT(fVar12);
              }
              if (fVar12 < 15.0) {
                pCVar10 = *(Characters_Human_o **)(lVar11 + 0x28);
                if (pCVar10 == (Characters_Human_o *)0x0) goto label_04295202;
                if (*(char *)((long)&(pCVar10->fields).Detection + 4) == '\0') {
                  cVar8 = '\0';
                  Characters_Human__MountHorse(pCVar10,(MethodInfo *)0x0);
                  fVar12 = extraout_XMM0_Da_05;
                }
              }
              goto label_042951a9;
            }
          }
        }
      }
    }
  }
label_04295202:
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar3 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((*(char *)&(pCVar3->fields).FeedVictimName != '\0') || ((pCVar3->fields).FinishSetup == 0xf)) {
      return fVar12;
    }
    cVar8 = '\0';
    bVar5 = Characters_Human__CanJump(pCVar3,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return extraout_XMM0_Da_07;
    }
    pCVar10 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
    if (pCVar10 != (Characters_Human_o *)0x0) {
      fVar12 = *(float *)&(pCVar10->fields).Detection;
      if (*(char *)((long)&(pCVar10->fields).Detection + 4) != '\0') {
        fVar12 = fVar12 + 180.0;
      }
      Characters_Human__Dodge(pCVar10,fVar12,(MethodInfo *)0x0);
      return extraout_XMM0_Da_08;
    }
  }
  lVar11 = 0;
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar10 = *(Characters_Human_o **)(lVar11 + 0x28);
  if (pCVar10 == (Characters_Human_o *)0x0) {
    fVar12 = (float)il2cpp_runtime_helper_022b2c90();
    *(char *)&(pCVar10->fields).HasExplicitNameTag = cVar8;
    return fVar12;
  }
  if ((*(char *)&(pCVar10->fields).FeedVictimName == '\0') &&
     (iVar1 = (pCVar10->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(pCVar10->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && (*(char *)((long)&(pCVar10->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto label_0429529e;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_0429529e:
      Characters_Human__Reload(pCVar10,(MethodInfo *)0x0);
      return extraout_XMM0_Da_09;
    }
  }
  return fVar12;
}


// Controllers.HumanAIController$$AimAt
// il2cpp: void Controllers_HumanAIController__AimAt (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o position, const MethodInfo* method);
// 0x4294df0

void Controllers_HumanAIController__AimAt
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o position,MethodInfo *method
               )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Characters_Human_o *pCVar4;
  Characters_Horse_o *__this_00;
  long lVar5;
  Photon_Pun_PhotonView_o *__this_01;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Object_array *parameters;
  char cVar8;
  char cVar9;
  Characters_Human_o *pCVar10;
  long lVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  float fStack_a8;
  float fStack_a4;
  float fStack_34;
  float local_30;
  
  cVar9 = (char)position.fields.hasValue;
  fStack_34 = position.fields.value.fields.x;
  local_30 = position.fields.value.fields.y;
  cVar8 = cVar9;
  if (g_data_057adcf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
  }
  if (cVar9 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).AimDirection.fields.x = (float)(int)uVar3;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar12;
    return;
  }
  (__this->fields).AimPoint.fields.x = (float)(int)position.fields.value.fields._0_8_;
  (__this->fields).AimPoint.fields.y = (float)(int)((ulong)position.fields.value.fields._0_8_ >> 0x20);
  (__this->fields).AimPoint.fields.z = position.fields.value.fields.z;
  pCVar10 = (__this->fields)._human;
  if (pCVar10 != (Characters_Human_o *)0x0) {
    cVar8 = '\0';
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UVar13 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      (__this->fields).AimDirection.fields.x = fStack_34 - UVar13.fields.x;
      (__this->fields).AimDirection.fields.y = local_30 - UVar13.fields.y;
      (__this->fields).AimDirection.fields.z = position.fields.value.fields.z - UVar13.fields.z;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar4->fields).FeedVictimName != '\0') {
      return;
    }
    if ((pCVar4->fields).FinishSetup == 0xf) {
      return;
    }
    iVar1 = *(int *)&(pCVar4->fields).Weapon;
    if (iVar1 == 1) {
      __this_00 = (Characters_Horse_o *)(pCVar4->fields).HookLeft;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        Characters_Horse__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      cVar8 = '\0';
      bVar6 = Characters_Human__CanJump(pCVar4,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pCVar10 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
      if (pCVar10 != (Characters_Human_o *)0x0) {
        Characters_Human__Jump(pCVar10,(MethodInfo *)0x0);
        return;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  cVar9 = cVar8;
  if (g_data_057adcf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    g_data_057adcf2 = '\x01';
  }
  pCVar10 = *(Characters_Human_o **)(lVar11 + 0x28);
  if (pCVar10 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar10->fields).FeedVictimName != '\0') {
      return;
    }
    iVar1 = (pCVar10->fields).FinishSetup;
    if (iVar1 == 0xf) {
      return;
    }
    iVar2 = *(int *)&(pCVar10->fields).Weapon;
    if ((iVar2 != 0) || (cVar8 == '\0')) {
      if (iVar1 != 0) {
        return;
      }
      if (iVar2 != 1) {
        return;
      }
      if (cVar8 != '\0') {
        return;
      }
      Characters_Human__Unmount(pCVar10,0,(MethodInfo *)0x0);
      return;
    }
    cVar9 = '\0';
    bVar6 = Characters_Human__CanJump(pCVar10,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_042951a9:
      lVar11 = *(long *)(lVar11 + 0x28);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x11c) != 1) {
          return;
        }
        if (*(long *)(lVar11 + 0x70) != 0) {
          __this_01 = *(Photon_Pun_PhotonView_o **)(*(long *)(lVar11 + 0x70) + 0x20);
          cVar9 = '\0';
          pCVar10 = TypeInfo_object;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (*(long *)(lVar11 + 0x28) != 0) {
      pCVar10 = *(Characters_Human_o **)(*(long *)(lVar11 + 0x28) + 0x120);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar9 = '\0';
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') goto label_042951a9;
      lVar5 = *(long *)(lVar11 + 0x28);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x118) != 0) goto label_042951a9;
        if (((*(long *)(lVar5 + 0x120) != 0) &&
            (lVar5 = *(long *)(*(long *)(lVar5 + 0x120) + 0x70), lVar5 != 0)) &&
           (pCVar10 = *(Characters_Human_o **)(lVar5 + 0x10), pCVar10 != (Characters_Human_o *)0x0)) {
          cVar9 = '\0';
          UVar13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
          if ((*(long *)(lVar11 + 0x28) != 0) &&
             (lVar5 = *(long *)(*(long *)(lVar11 + 0x28) + 0x70), lVar5 != 0)) {
            pUVar7 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
            pCVar10 = (Characters_Human_o *)0x0;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              cVar9 = '\0';
              UVar14 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              fStack_a8 = UVar13.fields.x;
              fStack_a4 = UVar13.fields.y;
              fStack_a4 = fStack_a4 - UVar14.fields.y;
              fVar12 = UVar13.fields.z - UVar14.fields.z;
              fStack_a8 = fStack_a8 - UVar14.fields.x;
              pCVar10 = TypeInfo_Math;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar12 = fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4 + fVar12 * fVar12;
              if (fVar12 < 0.0) {
                fVar12 = sqrtf(fVar12);
              }
              else {
                fVar12 = SQRT(fVar12);
              }
              if (fVar12 < 15.0) {
                pCVar10 = *(Characters_Human_o **)(lVar11 + 0x28);
                if (pCVar10 == (Characters_Human_o *)0x0) goto label_04295202;
                if (*(char *)((long)&(pCVar10->fields).Detection + 4) == '\0') {
                  cVar9 = '\0';
                  Characters_Human__MountHorse(pCVar10,(MethodInfo *)0x0);
                }
              }
              goto label_042951a9;
            }
          }
        }
      }
    }
  }
label_04295202:
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    if ((*(char *)&(pCVar4->fields).FeedVictimName != '\0') || ((pCVar4->fields).FinishSetup == 0xf)) {
      return;
    }
    cVar9 = '\0';
    bVar6 = Characters_Human__CanJump(pCVar4,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pCVar10 = *(Characters_Human_o **)&(pCVar10->fields).FootstepsEnabled;
    if (pCVar10 != (Characters_Human_o *)0x0) {
      fVar12 = *(float *)&(pCVar10->fields).Detection;
      if (*(char *)((long)&(pCVar10->fields).Detection + 4) != '\0') {
        fVar12 = fVar12 + 180.0;
      }
      Characters_Human__Dodge(pCVar10,fVar12,(MethodInfo *)0x0);
      return;
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar10 = *(Characters_Human_o **)(lVar11 + 0x28);
  if (pCVar10 == (Characters_Human_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(char *)&(pCVar10->fields).HasExplicitNameTag = cVar9;
    return;
  }
  if ((*(char *)&(pCVar10->fields).FeedVictimName == '\0') &&
     (iVar1 = (pCVar10->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(pCVar10->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && (*(char *)((long)&(pCVar10->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto label_0429529e;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_0429529e:
      Characters_Human__Reload(pCVar10,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$Jump
// il2cpp: void Controllers_HumanAIController__Jump (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4294ef0

void Controllers_HumanAIController__Jump(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Horse_o *__this_00;
  long lVar3;
  UnityEngine_Transform_o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  Characters_Human_o *__this_03;
  bool_conflict bVar4;
  System_Object_array *parameters;
  char cVar5;
  char cVar6;
  long lVar7;
  Characters_Human_o *pCVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  float local_60;
  float fStack_5c;
  
  cVar5 = (char)method;
  pCVar8 = (__this->fields)._human;
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar8->fields).FeedVictimName != '\0') {
      return;
    }
    if ((pCVar8->fields).FinishSetup == 0xf) {
      return;
    }
    iVar1 = *(int *)&(pCVar8->fields).Weapon;
    if (iVar1 == 1) {
      __this_00 = (Characters_Horse_o *)(pCVar8->fields).HookLeft;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        Characters_Horse__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      cVar5 = '\0';
      bVar4 = Characters_Human__CanJump(pCVar8,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      pCVar8 = (__this->fields)._human;
      if (pCVar8 != (Characters_Human_o *)0x0) {
        Characters_Human__Jump(pCVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  cVar6 = cVar5;
  if (g_data_057adcf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    g_data_057adcf2 = '\x01';
  }
  pCVar8 = *(Characters_Human_o **)(lVar7 + 0x28);
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar8->fields).FeedVictimName != '\0') {
      return;
    }
    iVar1 = (pCVar8->fields).FinishSetup;
    if (iVar1 == 0xf) {
      return;
    }
    iVar2 = *(int *)&(pCVar8->fields).Weapon;
    if ((iVar2 != 0) || (cVar5 == '\0')) {
      if (iVar1 != 0) {
        return;
      }
      if (iVar2 != 1) {
        return;
      }
      if (cVar5 != '\0') {
        return;
      }
      Characters_Human__Unmount(pCVar8,0,(MethodInfo *)0x0);
      return;
    }
    cVar6 = '\0';
    bVar4 = Characters_Human__CanJump(pCVar8,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_042951a9:
      lVar7 = *(long *)(lVar7 + 0x28);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x11c) != 1) {
          return;
        }
        if (*(long *)(lVar7 + 0x70) != 0) {
          __this_02 = *(Photon_Pun_PhotonView_o **)(*(long *)(lVar7 + 0x70) + 0x20);
          cVar6 = '\0';
          pCVar8 = TypeInfo_object;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_02,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x28) != 0) {
      pCVar8 = *(Characters_Human_o **)(*(long *)(lVar7 + 0x28) + 0x120);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar6 = '\0';
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto label_042951a9;
      lVar3 = *(long *)(lVar7 + 0x28);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x118) != 0) goto label_042951a9;
        if (((*(long *)(lVar3 + 0x120) != 0) &&
            (lVar3 = *(long *)(*(long *)(lVar3 + 0x120) + 0x70), lVar3 != 0)) &&
           (pCVar8 = *(Characters_Human_o **)(lVar3 + 0x10), pCVar8 != (Characters_Human_o *)0x0)) {
          cVar6 = '\0';
          UVar10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0);
          if ((*(long *)(lVar7 + 0x28) != 0) &&
             (lVar3 = *(long *)(*(long *)(lVar7 + 0x28) + 0x70), lVar3 != 0)) {
            __this_01 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
            pCVar8 = (Characters_Human_o *)0x0;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              cVar6 = '\0';
              UVar11 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              local_60 = UVar10.fields.x;
              fStack_5c = UVar10.fields.y;
              fStack_5c = fStack_5c - UVar11.fields.y;
              fVar9 = UVar10.fields.z - UVar11.fields.z;
              local_60 = local_60 - UVar11.fields.x;
              pCVar8 = TypeInfo_Math;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar9 = local_60 * local_60 + fStack_5c * fStack_5c + fVar9 * fVar9;
              if (fVar9 < 0.0) {
                fVar9 = sqrtf(fVar9);
              }
              else {
                fVar9 = SQRT(fVar9);
              }
              if (fVar9 < 15.0) {
                pCVar8 = *(Characters_Human_o **)(lVar7 + 0x28);
                if (pCVar8 == (Characters_Human_o *)0x0) goto label_04295202;
                if (*(char *)((long)&(pCVar8->fields).Detection + 4) == '\0') {
                  cVar6 = '\0';
                  Characters_Human__MountHorse(pCVar8,(MethodInfo *)0x0);
                }
              }
              goto label_042951a9;
            }
          }
        }
      }
    }
  }
label_04295202:
  il2cpp_runtime_helper_022b2c90();
  __this_03 = *(Characters_Human_o **)&(pCVar8->fields).FootstepsEnabled;
  if (__this_03 != (Characters_Human_o *)0x0) {
    if ((*(char *)&(__this_03->fields).FeedVictimName != '\0') || ((__this_03->fields).FinishSetup == 0xf)) {
      return;
    }
    cVar6 = '\0';
    bVar4 = Characters_Human__CanJump(__this_03,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pCVar8 = *(Characters_Human_o **)&(pCVar8->fields).FootstepsEnabled;
    if (pCVar8 != (Characters_Human_o *)0x0) {
      fVar9 = *(float *)&(pCVar8->fields).Detection;
      if (*(char *)((long)&(pCVar8->fields).Detection + 4) != '\0') {
        fVar9 = fVar9 + 180.0;
      }
      Characters_Human__Dodge(pCVar8,fVar9,(MethodInfo *)0x0);
      return;
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar8 = *(Characters_Human_o **)(lVar7 + 0x28);
  if (pCVar8 == (Characters_Human_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(char *)&(pCVar8->fields).HasExplicitNameTag = cVar6;
    return;
  }
  if ((*(char *)&(pCVar8->fields).FeedVictimName == '\0') &&
     (iVar1 = (pCVar8->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(pCVar8->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && (*(char *)((long)&(pCVar8->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto label_0429529e;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_0429529e:
      Characters_Human__Reload(pCVar8,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$HorseMount
// il2cpp: void Controllers_HumanAIController__HorseMount (Controllers_HumanAIController_o* __this, bool mount, const MethodInfo* method);
// 0x4294f60

void Controllers_HumanAIController__HorseMount
               (Controllers_HumanAIController_o *__this,bool_conflict mount,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_HookUseable_o *pCVar4;
  UnityEngine_Transform_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool_conflict bVar5;
  System_Object_array *parameters;
  char cVar6;
  char cVar7;
  Characters_Human_o *pCVar8;
  long lVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float fStack_58;
  float fStack_54;
  
  cVar6 = (char)mount;
  cVar7 = cVar6;
  if (g_data_057adcf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    g_data_057adcf2 = '\x01';
  }
  pCVar8 = (__this->fields)._human;
  if (pCVar8 != (Characters_Human_o *)0x0) {
    if (*(char *)&(pCVar8->fields).FeedVictimName != '\0') {
      return;
    }
    iVar1 = (pCVar8->fields).FinishSetup;
    if (iVar1 == 0xf) {
      return;
    }
    iVar2 = *(int *)&(pCVar8->fields).Weapon;
    if ((iVar2 != 0) || (cVar6 == '\0')) {
      if (iVar1 != 0) {
        return;
      }
      if (iVar2 != 1) {
        return;
      }
      if (cVar6 != '\0') {
        return;
      }
      Characters_Human__Unmount(pCVar8,0,(MethodInfo *)0x0);
      return;
    }
    cVar7 = '\0';
    bVar5 = Characters_Human__CanJump(pCVar8,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_042951a9:
      pCVar3 = (__this->fields)._human;
      if (pCVar3 != (Characters_Human_o *)0x0) {
        if (*(int *)((long)&(pCVar3->fields).Weapon + 4) != 1) {
          return;
        }
        lVar9 = *(long *)&(pCVar3->fields).Dead;
        if (lVar9 != 0) {
          __this_01 = *(Photon_Pun_PhotonView_o **)(lVar9 + 0x20);
          cVar7 = '\0';
          pCVar8 = TypeInfo_object;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pCVar3 = (__this->fields)._human;
      if (pCVar3 != (Characters_Human_o *)0x0) {
        pCVar8 = (Characters_Human_o *)(pCVar3->fields).HookLeft;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        cVar7 = '\0';
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') goto label_042951a9;
        pCVar3 = (__this->fields)._human;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          if (*(int *)&(pCVar3->fields).Weapon != 0) goto label_042951a9;
          pCVar4 = (pCVar3->fields).HookLeft;
          if (((pCVar4 != (Characters_HookUseable_o *)0x0) && (lVar9 = *(long *)&pCVar4[1].fields, lVar9 != 0)
              ) && (pCVar8 = *(Characters_Human_o **)(lVar9 + 0x10), pCVar8 != (Characters_Human_o *)0x0)) {
            cVar7 = '\0';
            UVar11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0);
            pCVar3 = (__this->fields)._human;
            if ((pCVar3 != (Characters_Human_o *)0x0) && (lVar9 = *(long *)&(pCVar3->fields).Dead, lVar9 != 0)
               ) {
              __this_00 = *(UnityEngine_Transform_o **)(lVar9 + 0x10);
              pCVar8 = (Characters_Human_o *)0x0;
              if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                cVar7 = '\0';
                UVar12 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStack_58 = UVar11.fields.x;
                fStack_54 = UVar11.fields.y;
                fStack_54 = fStack_54 - UVar12.fields.y;
                fVar10 = UVar11.fields.z - UVar12.fields.z;
                fStack_58 = fStack_58 - UVar12.fields.x;
                pCVar8 = TypeInfo_Math;
                if ((TypeInfo_Math->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar10 = fStack_58 * fStack_58 + fStack_54 * fStack_54 + fVar10 * fVar10;
                if (fVar10 < 0.0) {
                  fVar10 = sqrtf(fVar10);
                }
                else {
                  fVar10 = SQRT(fVar10);
                }
                if (fVar10 < 15.0) {
                  pCVar8 = (__this->fields)._human;
                  if (pCVar8 == (Characters_Human_o *)0x0) goto label_04295202;
                  if (*(char *)((long)&(pCVar8->fields).Detection + 4) == '\0') {
                    cVar7 = '\0';
                    Characters_Human__MountHorse(pCVar8,(MethodInfo *)0x0);
                  }
                }
                goto label_042951a9;
              }
            }
          }
        }
      }
    }
  }
label_04295202:
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = *(Characters_Human_o **)&(pCVar8->fields).FootstepsEnabled;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((*(char *)&(pCVar3->fields).FeedVictimName != '\0') || ((pCVar3->fields).FinishSetup == 0xf)) {
      return;
    }
    cVar7 = '\0';
    bVar5 = Characters_Human__CanJump(pCVar3,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pCVar8 = *(Characters_Human_o **)&(pCVar8->fields).FootstepsEnabled;
    if (pCVar8 != (Characters_Human_o *)0x0) {
      fVar10 = *(float *)&(pCVar8->fields).Detection;
      if (*(char *)((long)&(pCVar8->fields).Detection + 4) != '\0') {
        fVar10 = fVar10 + 180.0;
      }
      Characters_Human__Dodge(pCVar8,fVar10,(MethodInfo *)0x0);
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar8 = *(Characters_Human_o **)(lVar9 + 0x28);
  if (pCVar8 == (Characters_Human_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(char *)&(pCVar8->fields).HasExplicitNameTag = cVar7;
    return;
  }
  if ((*(char *)&(pCVar8->fields).FeedVictimName == '\0') &&
     (iVar1 = (pCVar8->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(pCVar8->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && (*(char *)((long)&(pCVar8->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto label_0429529e;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_0429529e:
      Characters_Human__Reload(pCVar8,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$Dodge
// il2cpp: void Controllers_HumanAIController__Dodge (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4295210

void Controllers_HumanAIController__Dodge(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool_conflict bVar3;
  undefined1 uVar4;
  long lVar5;
  Characters_Human_o *pCVar6;
  float targetAngle;
  
  uVar4 = SUB81(method,0);
  pCVar6 = (__this->fields)._human;
  if (pCVar6 != (Characters_Human_o *)0x0) {
    if ((*(char *)&(pCVar6->fields).FeedVictimName != '\0') || ((pCVar6->fields).FinishSetup == 0xf)) {
      return;
    }
    uVar4 = 0;
    bVar3 = Characters_Human__CanJump(pCVar6,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar6 = (__this->fields)._human;
    if (pCVar6 != (Characters_Human_o *)0x0) {
      targetAngle = *(float *)&(pCVar6->fields).Detection;
      if (*(char *)((long)&(pCVar6->fields).Detection + 4) != '\0') {
        targetAngle = targetAngle + 180.0;
      }
      Characters_Human__Dodge(pCVar6,targetAngle,(MethodInfo *)0x0);
      return;
    }
  }
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = *(Characters_Human_o **)(lVar5 + 0x28);
  if (pCVar6 == (Characters_Human_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(pCVar6->fields).HasExplicitNameTag = uVar4;
    return;
  }
  if ((*(char *)&(pCVar6->fields).FeedVictimName == '\0') &&
     (iVar1 = (pCVar6->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(pCVar6->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && (*(char *)((long)&(pCVar6->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto label_0429529e;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_0429529e:
      Characters_Human__Reload(pCVar6,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$Reload
// il2cpp: void Controllers_HumanAIController__Reload (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4295270

void Controllers_HumanAIController__Reload(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  Characters_Human_o *__this_00;
  
  uVar3 = SUB81(method,0);
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(__this_00->fields).HasExplicitNameTag = uVar3;
    return;
  }
  if ((*(char *)&(__this_00->fields).FeedVictimName == '\0') &&
     (iVar1 = (__this_00->fields).FinishSetup, iVar1 != 0xf)) {
    iVar2 = *(int *)&(__this_00->fields).Weapon;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && (*(char *)((long)&(__this_00->fields)._mountedVelocity.fields.x + 2) != '\0'))
      goto label_0429529e;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_0429529e:
      Characters_Human__Reload(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$UseGas
// il2cpp: void Controllers_HumanAIController__UseGas (Controllers_HumanAIController_o* __this, bool useGas, const MethodInfo* method);
// 0x42952c0

void Controllers_HumanAIController__UseGas
               (Controllers_HumanAIController_o *__this,bool_conflict useGas,MethodInfo *method)

{
  *(char *)&(__this->fields)._usingGas = (char)useGas;
  return;
}


// Controllers.HumanAIController$$HorseWalk
// il2cpp: void Controllers_HumanAIController__HorseWalk (Controllers_HumanAIController_o* __this, bool isWalk, const MethodInfo* method);
// 0x42952d0

void Controllers_HumanAIController__HorseWalk
               (Controllers_HumanAIController_o *__this,bool_conflict isWalk,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Characters_Horse_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  System_Action_Hashtable__c *pSVar6;
  Il2CppMethodPointer pIVar7;
  Characters_Human_c *pCVar8;
  char cVar9;
  bool_conflict bVar10;
  UnityEngine_Transform_o *__this_00;
  Characters_Human_o *pCVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ulong uVar14;
  undefined4 in_register_00000034;
  MethodInfo *pMVar15;
  Characters_Human_o *pCVar16;
  long *plVar17;
  Il2CppClass **__this_01;
  undefined8 unaff_R12;
  Characters_Human_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar22;
  float in_XMM1_Da;
  undefined4 in_XMM1_Db;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_02;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  Characters_Human_o *pCStack_48;
  
  pMVar15 = (MethodInfo *)CONCAT44(in_register_00000034,isWalk);
  pCVar16 = (__this->fields)._human;
  if (pCVar16 != (Characters_Human_o *)0x0) {
    *(char *)&(pCVar16->fields).IsRefillable = (char)isWalk;
    return;
  }
  UVar23.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  pCVar16 = (__this->fields)._human;
  if (pCVar16 != (Characters_Human_o *)0x0) {
    if ((((((*(char *)((long)&(pCVar16->fields).Animation + 4) == '\0') &&
           (uVar2 = (pCVar16->fields).FinishSetup, uVar2 != 3)) && (uVar2 != 7)) &&
         ((*(int *)&(pCVar16->fields).Weapon == 0 && (*(int *)((long)&(pCVar16->fields).Weapon + 4) != 1))))
        && ((0xf < uVar2 || ((0x8500U >> (uVar2 & 0x1f) & 1) == 0)))) &&
       (*(char *)&(pCVar16->fields).FeedVictimName == '\0')) {
      UVar23.fields.z = in_XMM1_Da;
      fVar19 = Controllers_BaseAIController__GetTargetAngle
                         ((Controllers_BaseAIController_o *)__this,UVar23,pMVar15);
      direction.fields.z = in_XMM1_Da;
      direction.fields.x = (float)(int)UVar23.fields._0_8_;
      direction.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
      Characters_Human__DashVertical
                (pCVar16,fVar19,direction,(System_Nullable_Vector3__o)ZEXT816(0),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar11 = (__this->fields)._human;
  if ((int)pMVar15 < 0) {
    if (pCVar11 != (Characters_Human_o *)0x0) {
      (pCVar11->fields).InvincibleTimeLeft = -1.0;
      goto joined_r0x042953b0;
    }
  }
  else if (pCVar11 != (Characters_Human_o *)0x0) {
joined_r0x042953b0:
    if ((int)pMVar15 < 1) {
      (pCVar11->fields).CanMountedAttack = 0;
      return;
    }
    (pCVar11->fields).CanMountedAttack = 0x3f800000;
    return;
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  pCStack_48 = pCVar16;
  if (g_data_057adcf3 == '\0') {
    uStack_90 = CONCAT44(uStack_90._4_4_,in_XMM1_Da);
    uStack_68 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    uStack_70 = uVar20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    g_data_057adcf3 = '\x01';
    in_XMM1_Da = (float)uStack_90;
    uVar20 = uStack_70;
  }
  *(undefined1 *)((long)&(__this->fields)._usingGas + 1) = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  value.fields.y = (float)in_XMM1_Db;
  value.fields.x = in_XMM1_Da;
  value.fields.z = 0.0;
  __this_02.fields.value.fields.y = (float)(int)uVar20;
  __this_02.fields.value.fields.z = (float)(int)((ulong)uVar20 >> 0x20);
  __this_02.fields._0_8_ = &uStack_80;
  pMVar15 = MethodInfo_Nullable_1_UnityEngine_Vector3;
  System_Nullable_Vector3____ctor(__this_02,value,(MethodInfo_37EDDE0 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar9 = (char)uStack_80;
  uVar14 = CONCAT71((int7)((ulong)unaff_RBP >> 8),(char)uStack_80);
  fStack_50 = (float)((ulong)uStack_78 >> 0x20);
  uStack_58 = uStack_80._4_4_;
  uStack_54 = (undefined4)uStack_78;
  fVar19 = fStack_50;
  uVar21 = 0;
  uVar22 = 0;
  if (g_data_057adcf1 == '\0') {
    uStack_90 = uStack_78;
    uStack_88 = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
    fVar19 = uStack_90._4_4_;
    uVar21 = (undefined4)uStack_88;
    uVar22 = uStack_88._4_4_;
  }
  if (cVar9 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).AimDirection.fields.x = (float)(int)uVar20;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar20 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar19;
  }
  else {
    uStack_70 = CONCAT44(uStack_54,uStack_58);
    uStack_68 = 0;
    (__this->fields).AimPoint.fields.x = (float)uStack_58;
    (__this->fields).AimPoint.fields.y = (float)uStack_54;
    uStack_90 = CONCAT44(fVar19,fVar19);
    uStack_88 = CONCAT44(uVar22,uVar21);
    (__this->fields).AimPoint.fields.z = fVar19;
    __this_01 = (Il2CppClass **)(__this->fields)._human;
    if (((Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      puVar12 = &uStack_90;
      do {
        pCVar16 = (Characters_Human_o *)__this_01;
        *(ulong *)((long)puVar12 + -8) = uVar14;
        *(undefined8 *)((long)puVar12 + -0x10) = unaff_R15;
        *(Characters_Human_o **)((long)puVar12 + -0x18) = unaff_R14;
        *(undefined8 *)((long)puVar12 + -0x20) = unaff_R12;
        *(Controllers_HumanAIController_o **)((long)puVar12 + -0x28) = __this;
        __this_01 = (Il2CppClass **)pCVar16;
        if (g_data_057adcf5 == '\0') {
          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295544;
          il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
          plVar17 = &TypeInfo_Util;
          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295550;
          il2cpp_runtime_helper_023445d0();
          g_data_057adcf5 = '\x01';
          __this_01 = (Il2CppClass **)plVar17;
        }
        pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
        if (pCVar11 != (Characters_Human_o *)0x0) {
          unaff_R15 = CONCAT71((int7)((ulong)unaff_R15 >> 8),
                               *(undefined1 *)((long)&(pCVar16->fields).HasExplicitNameTag + 1));
          unaff_R12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),
                               *(undefined1 *)((long)&(pCVar16->fields).HasExplicitNameTag + 2));
          uVar14 = 0;
          if (((pCVar11->fields).FinishSetup | 8U) != 0xf) {
            pCVar3 = (pCVar11->fields).Horse;
            if (pCVar3 == (Characters_Horse_o *)0x0) goto label_0429586c;
            if ((0.0 < (float)(pCVar3->fields).FootstepsEnabled) &&
               ((*(int *)&(pCVar11->fields).Weapon != 2 ||
                (*(char *)&(pCVar11->fields)._mountedVelocity.fields.x != '\0')))) {
              uVar14 = (ulong)(*(byte *)&(pCVar11->fields).FeedVictimName ^ 1);
            }
          }
          __this_01 = (Il2CppClass **)(pCVar11->fields).HumanCache;
          if ((Characters_Human_o *)__this_01 != (Characters_Human_o *)0x0) {
            *(undefined8 *)((long)puVar12 + -0x80) = 0x42955c9;
            bVar10 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
              if ((pCVar11 == (Characters_Human_o *)0x0) ||
                 (__this_01 = (Il2CppClass **)(pCVar11->fields).Special,
                 (Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0)) goto label_0429586c;
              *(undefined8 *)((long)puVar12 + -0x80) = 0x42955f1;
              Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            }
            pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
            if (pCVar11 != (Characters_Human_o *)0x0) {
              if (*(char *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 2) != '\0') {
                *(undefined1 *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 2) = 0;
              }
              if (*(char *)&(pCVar11->fields)._lastMountedPosition.fields.x != '\0') {
                *(undefined1 *)&(pCVar11->fields)._lastMountedPosition.fields.x = 0;
                unaff_R15 = 0;
              }
              if (*(char *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 1) != '\0') {
                *(undefined1 *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 1) = 0;
                unaff_R12 = 0;
              }
              __this = (Controllers_HumanAIController_o *)(pCVar11->fields).HumanCache;
              if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                *(undefined1 *)&(((Characters_Human_o *)__this)->fields).VisibleName = 0;
                pCVar4 = (pCVar11->fields).Special;
                if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
                  *(undefined1 *)&pCVar4[1].fields.Cooldown = 0;
                  iVar13 = (int)uVar14;
                  if (iVar13 == 0) {
label_042956d7:
                    bVar18 = false;
                  }
                  else {
                    if (g_data_057adcef == '\0') {
                      __this_01 = &TypeInfo_Spin3Special;
                      *(undefined8 *)((long)puVar12 + -0x80) = 0x4295675;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057adcef = '\x01';
                      pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                      if (pCVar11 == (Characters_Human_o *)0x0) goto label_0429586c;
                    }
                    if (((pCVar11->fields).FinishSetup == 9) &&
                       (pSVar5 = (pCVar11->fields).OnPlayerPropertiesChanged,
                       pSVar5 != (System_Action_Hashtable__o *)0x0)) {
                      pSVar6 = pSVar5->klass;
                      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                      if ((bVar1 <= (pSVar6->_2).naturalAligment) &&
                         ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_042956d7;
                    }
                    bVar18 = (char)unaff_R15 != '\0';
                    if (iVar13 == 0) goto label_0429586c;
                  }
                  pMVar15 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                  pIVar7 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                  *(undefined8 *)((long)puVar12 + -0x80) = 0x42956ef;
                  __this_01 = (Il2CppClass **)__this;
                  (*pIVar7)(__this,(ulong)bVar18,pMVar15);
                  pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                  if (pCVar11 != (Characters_Human_o *)0x0) {
                    __this = (Controllers_HumanAIController_o *)(pCVar11->fields).Special;
                    if (iVar13 == 0) {
label_0429577f:
                      bVar18 = false;
                    }
                    else {
                      if (g_data_057adcef == '\0') {
                        __this_01 = &TypeInfo_Spin3Special;
                        *(undefined8 *)((long)puVar12 + -0x80) = 0x429571c;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcef = '\x01';
                        pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                        if (pCVar11 == (Characters_Human_o *)0x0) goto label_0429586c;
                      }
                      if (((pCVar11->fields).FinishSetup == 9) &&
                         (pSVar5 = (pCVar11->fields).OnPlayerPropertiesChanged,
                         pSVar5 != (System_Action_Hashtable__o *)0x0)) {
                        pSVar6 = pSVar5->klass;
                        bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                        if ((bVar1 <= (pSVar6->_2).naturalAligment) &&
                           ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_0429577f;
                      }
                      bVar18 = (char)unaff_R12 != '\0';
                    }
                    if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                      pMVar15 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                      pIVar7 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                      *(undefined8 *)((long)puVar12 + -0x80) = 0x42957a0;
                      __this_01 = (Il2CppClass **)__this;
                      (*pIVar7)(__this,(ulong)bVar18,pMVar15);
                      __this = *(Controllers_HumanAIController_o **)&(pCVar16->fields).FootstepsEnabled;
                      if (((Characters_Human_o *)__this != (Characters_Human_o *)0x0) &&
                         (pCVar3 = (((Characters_Human_o *)__this)->fields).Horse,
                         pCVar3 != (Characters_Horse_o *)0x0)) {
                        if (((char)unaff_R12 != '\0' || (char)unaff_R15 != '\0') &&
                           ((float)(pCVar3->fields).FootstepsEnabled <= 0.0)) {
                          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar12 + -0x80) = 0x42957ec;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uVar20 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
                          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar12 + -0x80) = 0x4295816;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295822;
                          Utility_Util__CreateLocalPhotonInfo
                                    ((Photon_Pun_PhotonMessageInfo_o *)((long)puVar12 + -0x40),
                                     (MethodInfo *)0x0);
                          *(undefined8 *)((long)puVar12 + -0x48) = *(undefined8 *)((long)puVar12 + -0x30);
                          *(undefined8 *)((long)puVar12 + -0x58) = *(undefined8 *)((long)puVar12 + -0x40);
                          *(undefined8 *)((long)puVar12 + -0x50) = *(undefined8 *)((long)puVar12 + -0x38);
                          pCVar8 = ((Characters_Human_o *)__this)->klass;
                          pMVar15 = (pCVar8->vtable)._76_PlaySoundRPC.method;
                          *(undefined8 *)((long)puVar12 + -0x68) = *(undefined8 *)((long)puVar12 + -0x48);
                          *(undefined4 *)((long)puVar12 + -0x78) = *(undefined4 *)((long)puVar12 + -0x58);
                          *(undefined4 *)((long)puVar12 + -0x74) = *(undefined4 *)((long)puVar12 + -0x54);
                          *(undefined4 *)((long)puVar12 + -0x70) = *(undefined4 *)((long)puVar12 + -0x50);
                          *(undefined4 *)((long)puVar12 + -0x6c) = *(undefined4 *)((long)puVar12 + -0x4c);
                          pIVar7 = (pCVar8->vtable)._76_PlaySoundRPC.methodPtr;
                          *(undefined8 *)((long)puVar12 + -0x80) = 0x429585f;
                          (*pIVar7)(__this,uVar20,pMVar15);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
label_0429586c:
        *(undefined8 *)((long)puVar12 + -0x80) = 0x4295871;
        il2cpp_runtime_helper_022b2c90();
        *(undefined1 *)((long)&(((Characters_Human_o *)__this_01)->fields).HasExplicitNameTag + 1) = 0;
        puVar12 = (undefined8 *)((long)puVar12 + -0x78);
        unaff_R14 = pCVar16;
      } while( true );
    }
    pMVar15 = (MethodInfo *)0x0;
    UVar23 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    (__this->fields).AimDirection.fields.x = (float)uStack_70 - UVar23.fields.x;
    (__this->fields).AimDirection.fields.y = uStack_70._4_4_ - UVar23.fields.y;
    (__this->fields).AimDirection.fields.z = (float)uStack_90 - UVar23.fields.z;
  }
  Controllers_HumanAIController__UpdateHookInput(__this,pMVar15);
  return;
}


// Controllers.HumanAIController$$Dash
// il2cpp: void Controllers_HumanAIController__Dash (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x42952f0

void Controllers_HumanAIController__Dash
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Characters_Horse_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  System_Action_Hashtable__c *pSVar6;
  Il2CppMethodPointer pIVar7;
  Characters_Human_c *pCVar8;
  char cVar9;
  bool_conflict bVar10;
  UnityEngine_Transform_o *__this_00;
  Characters_Human_o *pCVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ulong uVar14;
  MethodInfo *pMVar15;
  Characters_Human_o *pCVar16;
  long *plVar17;
  Il2CppClass **__this_01;
  undefined8 unaff_R12;
  Characters_Human_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar22;
  undefined4 in_XMM1_Db;
  UnityEngine_Vector3_o UVar23;
  System_Nullable_Vector3__o __this_02;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  float fStack_48;
  Characters_Human_o *pCStack_40;
  
  fVar19 = direction.fields.z;
  pCVar16 = (__this->fields)._human;
  if (pCVar16 != (Characters_Human_o *)0x0) {
    if ((((((*(char *)((long)&(pCVar16->fields).Animation + 4) == '\0') &&
           (uVar2 = (pCVar16->fields).FinishSetup, uVar2 != 3)) && (uVar2 != 7)) &&
         ((*(int *)&(pCVar16->fields).Weapon == 0 && (*(int *)((long)&(pCVar16->fields).Weapon + 4) != 1))))
        && ((0xf < uVar2 || ((0x8500U >> (uVar2 & 0x1f) & 1) == 0)))) &&
       (*(char *)&(pCVar16->fields).FeedVictimName == '\0')) {
      fVar19 = Controllers_BaseAIController__GetTargetAngle
                         ((Controllers_BaseAIController_o *)__this,direction,method);
      Characters_Human__DashVertical
                (pCVar16,fVar19,direction,(System_Nullable_Vector3__o)ZEXT816(0),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar11 = (__this->fields)._human;
  if ((int)method < 0) {
    if (pCVar11 != (Characters_Human_o *)0x0) {
      (pCVar11->fields).InvincibleTimeLeft = -1.0;
      goto joined_r0x042953b0;
    }
  }
  else if (pCVar11 != (Characters_Human_o *)0x0) {
joined_r0x042953b0:
    if ((int)method < 1) {
      (pCVar11->fields).CanMountedAttack = 0;
      return;
    }
    (pCVar11->fields).CanMountedAttack = 0x3f800000;
    return;
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = pCVar16;
  if (g_data_057adcf3 == '\0') {
    local_88 = CONCAT44(local_88._4_4_,fVar19);
    uStack_60 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    local_68 = uVar20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    g_data_057adcf3 = '\x01';
    fVar19 = (float)local_88;
    uVar20 = local_68;
  }
  *(undefined1 *)((long)&(__this->fields)._usingGas + 1) = 1;
  local_78 = 0;
  uStack_70 = 0;
  UVar23.fields.y = (float)in_XMM1_Db;
  UVar23.fields.x = fVar19;
  UVar23.fields.z = 0.0;
  __this_02.fields.value.fields.y = (float)(int)uVar20;
  __this_02.fields.value.fields.z = (float)(int)((ulong)uVar20 >> 0x20);
  __this_02.fields._0_8_ = &local_78;
  pMVar15 = MethodInfo_Nullable_1_UnityEngine_Vector3;
  System_Nullable_Vector3____ctor(__this_02,UVar23,(MethodInfo_37EDDE0 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar9 = (char)local_78;
  uVar14 = CONCAT71((int7)((ulong)unaff_RBP >> 8),(char)local_78);
  fStack_48 = (float)((ulong)uStack_70 >> 0x20);
  local_50 = local_78._4_4_;
  uStack_4c = (undefined4)uStack_70;
  fVar19 = fStack_48;
  uVar21 = 0;
  uVar22 = 0;
  if (g_data_057adcf1 == '\0') {
    local_88 = uStack_70;
    uStack_80 = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
    fVar19 = local_88._4_4_;
    uVar21 = (undefined4)uStack_80;
    uVar22 = uStack_80._4_4_;
  }
  if (cVar9 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).AimDirection.fields.x = (float)(int)uVar20;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar20 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar19;
  }
  else {
    local_68 = CONCAT44(uStack_4c,local_50);
    uStack_60 = 0;
    (__this->fields).AimPoint.fields.x = (float)local_50;
    (__this->fields).AimPoint.fields.y = (float)uStack_4c;
    local_88 = CONCAT44(fVar19,fVar19);
    uStack_80 = CONCAT44(uVar22,uVar21);
    (__this->fields).AimPoint.fields.z = fVar19;
    __this_01 = (Il2CppClass **)(__this->fields)._human;
    if (((Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      puVar12 = &local_88;
      do {
        pCVar16 = (Characters_Human_o *)__this_01;
        *(ulong *)((long)puVar12 + -8) = uVar14;
        *(undefined8 *)((long)puVar12 + -0x10) = unaff_R15;
        *(Characters_Human_o **)((long)puVar12 + -0x18) = unaff_R14;
        *(undefined8 *)((long)puVar12 + -0x20) = unaff_R12;
        *(Controllers_HumanAIController_o **)((long)puVar12 + -0x28) = __this;
        __this_01 = (Il2CppClass **)pCVar16;
        if (g_data_057adcf5 == '\0') {
          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295544;
          il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
          plVar17 = &TypeInfo_Util;
          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295550;
          il2cpp_runtime_helper_023445d0();
          g_data_057adcf5 = '\x01';
          __this_01 = (Il2CppClass **)plVar17;
        }
        pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
        if (pCVar11 != (Characters_Human_o *)0x0) {
          unaff_R15 = CONCAT71((int7)((ulong)unaff_R15 >> 8),
                               *(undefined1 *)((long)&(pCVar16->fields).HasExplicitNameTag + 1));
          unaff_R12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),
                               *(undefined1 *)((long)&(pCVar16->fields).HasExplicitNameTag + 2));
          uVar14 = 0;
          if (((pCVar11->fields).FinishSetup | 8U) != 0xf) {
            pCVar3 = (pCVar11->fields).Horse;
            if (pCVar3 == (Characters_Horse_o *)0x0) goto label_0429586c;
            if ((0.0 < (float)(pCVar3->fields).FootstepsEnabled) &&
               ((*(int *)&(pCVar11->fields).Weapon != 2 ||
                (*(char *)&(pCVar11->fields)._mountedVelocity.fields.x != '\0')))) {
              uVar14 = (ulong)(*(byte *)&(pCVar11->fields).FeedVictimName ^ 1);
            }
          }
          __this_01 = (Il2CppClass **)(pCVar11->fields).HumanCache;
          if ((Characters_Human_o *)__this_01 != (Characters_Human_o *)0x0) {
            *(undefined8 *)((long)puVar12 + -0x80) = 0x42955c9;
            bVar10 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
              if ((pCVar11 == (Characters_Human_o *)0x0) ||
                 (__this_01 = (Il2CppClass **)(pCVar11->fields).Special,
                 (Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0)) goto label_0429586c;
              *(undefined8 *)((long)puVar12 + -0x80) = 0x42955f1;
              Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            }
            pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
            if (pCVar11 != (Characters_Human_o *)0x0) {
              if (*(char *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 2) != '\0') {
                *(undefined1 *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 2) = 0;
              }
              if (*(char *)&(pCVar11->fields)._lastMountedPosition.fields.x != '\0') {
                *(undefined1 *)&(pCVar11->fields)._lastMountedPosition.fields.x = 0;
                unaff_R15 = 0;
              }
              if (*(char *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 1) != '\0') {
                *(undefined1 *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 1) = 0;
                unaff_R12 = 0;
              }
              __this = (Controllers_HumanAIController_o *)(pCVar11->fields).HumanCache;
              if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                *(undefined1 *)&(((Characters_Human_o *)__this)->fields).VisibleName = 0;
                pCVar4 = (pCVar11->fields).Special;
                if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
                  *(undefined1 *)&pCVar4[1].fields.Cooldown = 0;
                  iVar13 = (int)uVar14;
                  if (iVar13 == 0) {
label_042956d7:
                    bVar18 = false;
                  }
                  else {
                    if (g_data_057adcef == '\0') {
                      __this_01 = &TypeInfo_Spin3Special;
                      *(undefined8 *)((long)puVar12 + -0x80) = 0x4295675;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057adcef = '\x01';
                      pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                      if (pCVar11 == (Characters_Human_o *)0x0) goto label_0429586c;
                    }
                    if (((pCVar11->fields).FinishSetup == 9) &&
                       (pSVar5 = (pCVar11->fields).OnPlayerPropertiesChanged,
                       pSVar5 != (System_Action_Hashtable__o *)0x0)) {
                      pSVar6 = pSVar5->klass;
                      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                      if ((bVar1 <= (pSVar6->_2).naturalAligment) &&
                         ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_042956d7;
                    }
                    bVar18 = (char)unaff_R15 != '\0';
                    if (iVar13 == 0) goto label_0429586c;
                  }
                  pMVar15 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                  pIVar7 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                  *(undefined8 *)((long)puVar12 + -0x80) = 0x42956ef;
                  __this_01 = (Il2CppClass **)__this;
                  (*pIVar7)(__this,(ulong)bVar18,pMVar15);
                  pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                  if (pCVar11 != (Characters_Human_o *)0x0) {
                    __this = (Controllers_HumanAIController_o *)(pCVar11->fields).Special;
                    if (iVar13 == 0) {
label_0429577f:
                      bVar18 = false;
                    }
                    else {
                      if (g_data_057adcef == '\0') {
                        __this_01 = &TypeInfo_Spin3Special;
                        *(undefined8 *)((long)puVar12 + -0x80) = 0x429571c;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcef = '\x01';
                        pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                        if (pCVar11 == (Characters_Human_o *)0x0) goto label_0429586c;
                      }
                      if (((pCVar11->fields).FinishSetup == 9) &&
                         (pSVar5 = (pCVar11->fields).OnPlayerPropertiesChanged,
                         pSVar5 != (System_Action_Hashtable__o *)0x0)) {
                        pSVar6 = pSVar5->klass;
                        bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                        if ((bVar1 <= (pSVar6->_2).naturalAligment) &&
                           ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_0429577f;
                      }
                      bVar18 = (char)unaff_R12 != '\0';
                    }
                    if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                      pMVar15 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                      pIVar7 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                      *(undefined8 *)((long)puVar12 + -0x80) = 0x42957a0;
                      __this_01 = (Il2CppClass **)__this;
                      (*pIVar7)(__this,(ulong)bVar18,pMVar15);
                      __this = *(Controllers_HumanAIController_o **)&(pCVar16->fields).FootstepsEnabled;
                      if (((Characters_Human_o *)__this != (Characters_Human_o *)0x0) &&
                         (pCVar3 = (((Characters_Human_o *)__this)->fields).Horse,
                         pCVar3 != (Characters_Horse_o *)0x0)) {
                        if (((char)unaff_R12 != '\0' || (char)unaff_R15 != '\0') &&
                           ((float)(pCVar3->fields).FootstepsEnabled <= 0.0)) {
                          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar12 + -0x80) = 0x42957ec;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uVar20 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
                          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar12 + -0x80) = 0x4295816;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295822;
                          Utility_Util__CreateLocalPhotonInfo
                                    ((Photon_Pun_PhotonMessageInfo_o *)((long)puVar12 + -0x40),
                                     (MethodInfo *)0x0);
                          *(undefined8 *)((long)puVar12 + -0x48) = *(undefined8 *)((long)puVar12 + -0x30);
                          *(undefined8 *)((long)puVar12 + -0x58) = *(undefined8 *)((long)puVar12 + -0x40);
                          *(undefined8 *)((long)puVar12 + -0x50) = *(undefined8 *)((long)puVar12 + -0x38);
                          pCVar8 = ((Characters_Human_o *)__this)->klass;
                          pMVar15 = (pCVar8->vtable)._76_PlaySoundRPC.method;
                          *(undefined8 *)((long)puVar12 + -0x68) = *(undefined8 *)((long)puVar12 + -0x48);
                          *(undefined4 *)((long)puVar12 + -0x78) = *(undefined4 *)((long)puVar12 + -0x58);
                          *(undefined4 *)((long)puVar12 + -0x74) = *(undefined4 *)((long)puVar12 + -0x54);
                          *(undefined4 *)((long)puVar12 + -0x70) = *(undefined4 *)((long)puVar12 + -0x50);
                          *(undefined4 *)((long)puVar12 + -0x6c) = *(undefined4 *)((long)puVar12 + -0x4c);
                          pIVar7 = (pCVar8->vtable)._76_PlaySoundRPC.methodPtr;
                          *(undefined8 *)((long)puVar12 + -0x80) = 0x429585f;
                          (*pIVar7)(__this,uVar20,pMVar15);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
label_0429586c:
        *(undefined8 *)((long)puVar12 + -0x80) = 0x4295871;
        il2cpp_runtime_helper_022b2c90();
        *(undefined1 *)((long)&(((Characters_Human_o *)__this_01)->fields).HasExplicitNameTag + 1) = 0;
        puVar12 = (undefined8 *)((long)puVar12 + -0x78);
        unaff_R14 = pCVar16;
      } while( true );
    }
    pMVar15 = (MethodInfo *)0x0;
    UVar23 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    (__this->fields).AimDirection.fields.x = (float)local_68 - UVar23.fields.x;
    (__this->fields).AimDirection.fields.y = local_68._4_4_ - UVar23.fields.y;
    (__this->fields).AimDirection.fields.z = (float)local_88 - UVar23.fields.z;
  }
  Controllers_HumanAIController__UpdateHookInput(__this,pMVar15);
  return;
}


// Controllers.HumanAIController$$Reel
// il2cpp: void Controllers_HumanAIController__Reel (Controllers_HumanAIController_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x4295380

void Controllers_HumanAIController__Reel
               (Controllers_HumanAIController_o *__this,int32_t reelAxis,MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  System_Action_Hashtable__c *pSVar5;
  Il2CppMethodPointer pIVar6;
  Characters_Human_c *pCVar7;
  char cVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *__this_00;
  Characters_Human_o *pCVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 unaff_RBP;
  ulong uVar13;
  MethodInfo *pMVar14;
  Characters_Human_o *pCVar15;
  long *plVar16;
  Il2CppClass **__this_01;
  undefined8 unaff_R12;
  Characters_Human_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar21;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  UnityEngine_Vector3_o UVar22;
  System_Nullable_Vector3__o __this_02;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  
  pCVar15 = (__this->fields)._human;
  if (reelAxis < 0) {
    if (pCVar15 != (Characters_Human_o *)0x0) {
      (pCVar15->fields).InvincibleTimeLeft = -1.0;
      goto joined_r0x042953b0;
    }
  }
  else if (pCVar15 != (Characters_Human_o *)0x0) {
joined_r0x042953b0:
    if (reelAxis < 1) {
      (pCVar15->fields).CanMountedAttack = 0;
      return;
    }
    (pCVar15->fields).CanMountedAttack = 0x3f800000;
    return;
  }
  uVar18 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcf3 == '\0') {
    uStack_60 = CONCAT44(uStack_60._4_4_,in_XMM1_Da);
    uStack_38 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    uStack_40 = uVar18;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    g_data_057adcf3 = '\x01';
    in_XMM1_Da = (float)uStack_60;
    uVar18 = uStack_40;
  }
  *(undefined1 *)((long)&(__this->fields)._usingGas + 1) = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  UVar22.fields.y = (float)in_XMM1_Db;
  UVar22.fields.x = (float)in_XMM1_Da;
  UVar22.fields.z = 0.0;
  __this_02.fields.value.fields.y = (float)(int)uVar18;
  __this_02.fields.value.fields.z = (float)(int)((ulong)uVar18 >> 0x20);
  __this_02.fields._0_8_ = &uStack_50;
  pMVar14 = MethodInfo_Nullable_1_UnityEngine_Vector3;
  System_Nullable_Vector3____ctor(__this_02,UVar22,(MethodInfo_37EDDE0 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar8 = (char)uStack_50;
  uVar13 = CONCAT71((int7)((ulong)unaff_RBP >> 8),(char)uStack_50);
  fStack_20 = (float)((ulong)uStack_48 >> 0x20);
  uStack_28 = uStack_50._4_4_;
  uStack_24 = (undefined4)uStack_48;
  fVar19 = fStack_20;
  uVar20 = 0;
  uVar21 = 0;
  if (g_data_057adcf1 == '\0') {
    uStack_60 = uStack_48;
    uStack_58 = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
    fVar19 = uStack_60._4_4_;
    uVar20 = (undefined4)uStack_58;
    uVar21 = uStack_58._4_4_;
  }
  if (cVar8 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).AimDirection.fields.x = (float)(int)uVar18;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar18 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar19;
  }
  else {
    uStack_40 = CONCAT44(uStack_24,uStack_28);
    uStack_38 = 0;
    (__this->fields).AimPoint.fields.x = (float)uStack_28;
    (__this->fields).AimPoint.fields.y = (float)uStack_24;
    uStack_60 = CONCAT44(fVar19,fVar19);
    uStack_58 = CONCAT44(uVar21,uVar20);
    (__this->fields).AimPoint.fields.z = fVar19;
    __this_01 = (Il2CppClass **)(__this->fields)._human;
    if (((Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      puVar11 = &uStack_60;
      do {
        pCVar15 = (Characters_Human_o *)__this_01;
        *(ulong *)((long)puVar11 + -8) = uVar13;
        *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
        *(Characters_Human_o **)((long)puVar11 + -0x18) = unaff_R14;
        *(undefined8 *)((long)puVar11 + -0x20) = unaff_R12;
        *(Controllers_HumanAIController_o **)((long)puVar11 + -0x28) = __this;
        __this_01 = (Il2CppClass **)pCVar15;
        if (g_data_057adcf5 == '\0') {
          *(undefined8 *)((long)puVar11 + -0x80) = 0x4295544;
          il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
          plVar16 = &TypeInfo_Util;
          *(undefined8 *)((long)puVar11 + -0x80) = 0x4295550;
          il2cpp_runtime_helper_023445d0();
          g_data_057adcf5 = '\x01';
          __this_01 = (Il2CppClass **)plVar16;
        }
        pCVar10 = *(Characters_Human_o **)&(pCVar15->fields).FootstepsEnabled;
        if (pCVar10 != (Characters_Human_o *)0x0) {
          unaff_R15 = CONCAT71((int7)((ulong)unaff_R15 >> 8),
                               *(undefined1 *)((long)&(pCVar15->fields).HasExplicitNameTag + 1));
          unaff_R12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),
                               *(undefined1 *)((long)&(pCVar15->fields).HasExplicitNameTag + 2));
          uVar13 = 0;
          if (((pCVar10->fields).FinishSetup | 8U) != 0xf) {
            pCVar2 = (pCVar10->fields).Horse;
            if (pCVar2 == (Characters_Horse_o *)0x0) goto label_0429586c;
            if ((0.0 < (float)(pCVar2->fields).FootstepsEnabled) &&
               ((*(int *)&(pCVar10->fields).Weapon != 2 ||
                (*(char *)&(pCVar10->fields)._mountedVelocity.fields.x != '\0')))) {
              uVar13 = (ulong)(*(byte *)&(pCVar10->fields).FeedVictimName ^ 1);
            }
          }
          __this_01 = (Il2CppClass **)(pCVar10->fields).HumanCache;
          if ((Characters_Human_o *)__this_01 != (Characters_Human_o *)0x0) {
            *(undefined8 *)((long)puVar11 + -0x80) = 0x42955c9;
            bVar9 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              pCVar10 = *(Characters_Human_o **)&(pCVar15->fields).FootstepsEnabled;
              if ((pCVar10 == (Characters_Human_o *)0x0) ||
                 (__this_01 = (Il2CppClass **)(pCVar10->fields).Special,
                 (Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0)) goto label_0429586c;
              *(undefined8 *)((long)puVar11 + -0x80) = 0x42955f1;
              Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            }
            pCVar10 = *(Characters_Human_o **)&(pCVar15->fields).FootstepsEnabled;
            if (pCVar10 != (Characters_Human_o *)0x0) {
              if (*(char *)((long)&(pCVar10->fields)._lastMountedPosition.fields.x + 2) != '\0') {
                *(undefined1 *)((long)&(pCVar10->fields)._lastMountedPosition.fields.x + 2) = 0;
              }
              if (*(char *)&(pCVar10->fields)._lastMountedPosition.fields.x != '\0') {
                *(undefined1 *)&(pCVar10->fields)._lastMountedPosition.fields.x = 0;
                unaff_R15 = 0;
              }
              if (*(char *)((long)&(pCVar10->fields)._lastMountedPosition.fields.x + 1) != '\0') {
                *(undefined1 *)((long)&(pCVar10->fields)._lastMountedPosition.fields.x + 1) = 0;
                unaff_R12 = 0;
              }
              __this = (Controllers_HumanAIController_o *)(pCVar10->fields).HumanCache;
              if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                *(undefined1 *)&(((Characters_Human_o *)__this)->fields).VisibleName = 0;
                pCVar3 = (pCVar10->fields).Special;
                if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
                  *(undefined1 *)&pCVar3[1].fields.Cooldown = 0;
                  iVar12 = (int)uVar13;
                  if (iVar12 == 0) {
label_042956d7:
                    bVar17 = false;
                  }
                  else {
                    if (g_data_057adcef == '\0') {
                      __this_01 = &TypeInfo_Spin3Special;
                      *(undefined8 *)((long)puVar11 + -0x80) = 0x4295675;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057adcef = '\x01';
                      pCVar10 = *(Characters_Human_o **)&(pCVar15->fields).FootstepsEnabled;
                      if (pCVar10 == (Characters_Human_o *)0x0) goto label_0429586c;
                    }
                    if (((pCVar10->fields).FinishSetup == 9) &&
                       (pSVar4 = (pCVar10->fields).OnPlayerPropertiesChanged,
                       pSVar4 != (System_Action_Hashtable__o *)0x0)) {
                      pSVar5 = pSVar4->klass;
                      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                      if ((bVar1 <= (pSVar5->_2).naturalAligment) &&
                         ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_042956d7;
                    }
                    bVar17 = (char)unaff_R15 != '\0';
                    if (iVar12 == 0) goto label_0429586c;
                  }
                  pMVar14 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                  pIVar6 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                  *(undefined8 *)((long)puVar11 + -0x80) = 0x42956ef;
                  __this_01 = (Il2CppClass **)__this;
                  (*pIVar6)(__this,(ulong)bVar17,pMVar14);
                  pCVar10 = *(Characters_Human_o **)&(pCVar15->fields).FootstepsEnabled;
                  if (pCVar10 != (Characters_Human_o *)0x0) {
                    __this = (Controllers_HumanAIController_o *)(pCVar10->fields).Special;
                    if (iVar12 == 0) {
label_0429577f:
                      bVar17 = false;
                    }
                    else {
                      if (g_data_057adcef == '\0') {
                        __this_01 = &TypeInfo_Spin3Special;
                        *(undefined8 *)((long)puVar11 + -0x80) = 0x429571c;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcef = '\x01';
                        pCVar10 = *(Characters_Human_o **)&(pCVar15->fields).FootstepsEnabled;
                        if (pCVar10 == (Characters_Human_o *)0x0) goto label_0429586c;
                      }
                      if (((pCVar10->fields).FinishSetup == 9) &&
                         (pSVar4 = (pCVar10->fields).OnPlayerPropertiesChanged,
                         pSVar4 != (System_Action_Hashtable__o *)0x0)) {
                        pSVar5 = pSVar4->klass;
                        bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                        if ((bVar1 <= (pSVar5->_2).naturalAligment) &&
                           ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_0429577f;
                      }
                      bVar17 = (char)unaff_R12 != '\0';
                    }
                    if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                      pMVar14 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                      pIVar6 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                      *(undefined8 *)((long)puVar11 + -0x80) = 0x42957a0;
                      __this_01 = (Il2CppClass **)__this;
                      (*pIVar6)(__this,(ulong)bVar17,pMVar14);
                      __this = *(Controllers_HumanAIController_o **)&(pCVar15->fields).FootstepsEnabled;
                      if (((Characters_Human_o *)__this != (Characters_Human_o *)0x0) &&
                         (pCVar2 = (((Characters_Human_o *)__this)->fields).Horse,
                         pCVar2 != (Characters_Horse_o *)0x0)) {
                        if (((char)unaff_R12 != '\0' || (char)unaff_R15 != '\0') &&
                           ((float)(pCVar2->fields).FootstepsEnabled <= 0.0)) {
                          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar11 + -0x80) = 0x42957ec;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uVar18 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
                          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar11 + -0x80) = 0x4295816;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)puVar11 + -0x80) = 0x4295822;
                          Utility_Util__CreateLocalPhotonInfo
                                    ((Photon_Pun_PhotonMessageInfo_o *)((long)puVar11 + -0x40),
                                     (MethodInfo *)0x0);
                          *(undefined8 *)((long)puVar11 + -0x48) = *(undefined8 *)((long)puVar11 + -0x30);
                          *(undefined8 *)((long)puVar11 + -0x58) = *(undefined8 *)((long)puVar11 + -0x40);
                          *(undefined8 *)((long)puVar11 + -0x50) = *(undefined8 *)((long)puVar11 + -0x38);
                          pCVar7 = ((Characters_Human_o *)__this)->klass;
                          pMVar14 = (pCVar7->vtable)._76_PlaySoundRPC.method;
                          *(undefined8 *)((long)puVar11 + -0x68) = *(undefined8 *)((long)puVar11 + -0x48);
                          *(undefined4 *)((long)puVar11 + -0x78) = *(undefined4 *)((long)puVar11 + -0x58);
                          *(undefined4 *)((long)puVar11 + -0x74) = *(undefined4 *)((long)puVar11 + -0x54);
                          *(undefined4 *)((long)puVar11 + -0x70) = *(undefined4 *)((long)puVar11 + -0x50);
                          *(undefined4 *)((long)puVar11 + -0x6c) = *(undefined4 *)((long)puVar11 + -0x4c);
                          pIVar6 = (pCVar7->vtable)._76_PlaySoundRPC.methodPtr;
                          *(undefined8 *)((long)puVar11 + -0x80) = 0x429585f;
                          (*pIVar6)(__this,uVar18,pMVar14);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
label_0429586c:
        *(undefined8 *)((long)puVar11 + -0x80) = 0x4295871;
        il2cpp_runtime_helper_022b2c90();
        *(undefined1 *)((long)&(((Characters_Human_o *)__this_01)->fields).HasExplicitNameTag + 1) = 0;
        puVar11 = (undefined8 *)((long)puVar11 + -0x78);
        unaff_R14 = pCVar15;
      } while( true );
    }
    pMVar14 = (MethodInfo *)0x0;
    UVar22 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    (__this->fields).AimDirection.fields.x = (float)uStack_40 - UVar22.fields.x;
    (__this->fields).AimDirection.fields.y = uStack_40._4_4_ - UVar22.fields.y;
    (__this->fields).AimDirection.fields.z = (float)uStack_60 - UVar22.fields.z;
  }
  Controllers_HumanAIController__UpdateHookInput(__this,pMVar14);
  return;
}


// Controllers.HumanAIController$$LaunchHookLeft
// il2cpp: void Controllers_HumanAIController__LaunchHookLeft (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x42953d0

void Controllers_HumanAIController__LaunchHookLeft
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o aimPoint,MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  System_Action_Hashtable__c *pSVar5;
  Il2CppMethodPointer pIVar6;
  undefined8 uVar7;
  Characters_Human_c *pCVar8;
  char cVar9;
  bool_conflict bVar10;
  UnityEngine_Transform_o *__this_00;
  Characters_Human_o *pCVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ulong uVar14;
  MethodInfo *pMVar15;
  Characters_Human_o *pCVar16;
  long *plVar17;
  Il2CppClass **__this_01;
  undefined8 unaff_R12;
  Characters_Human_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined4 in_XMM0_Dc;
  undefined4 uVar21;
  undefined4 in_XMM0_Dd;
  undefined4 uVar22;
  float fVar23;
  undefined4 in_XMM1_Db;
  UnityEngine_Vector3_o UVar24;
  System_Nullable_Vector3__o __this_02;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  
  fVar19 = aimPoint.fields.x;
  fVar20 = aimPoint.fields.y;
  fVar23 = aimPoint.fields.z;
  if (g_data_057adcf3 == '\0') {
    uStack_58 = CONCAT44(uStack_58._4_4_,aimPoint.fields.z);
    auStack_38._8_4_ = in_XMM0_Dc;
    auStack_38._0_8_ = aimPoint.fields._0_8_;
    auStack_38._12_4_ = in_XMM0_Dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    g_data_057adcf3 = '\x01';
    fVar19 = (float)auStack_38._0_4_;
    fVar20 = (float)auStack_38._4_4_;
    fVar23 = (float)uStack_58;
  }
  *(undefined1 *)((long)&(__this->fields)._usingGas + 1) = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  UVar24.fields.y = (float)in_XMM1_Db;
  UVar24.fields.x = fVar23;
  UVar24.fields.z = 0.0;
  __this_02.fields.value.fields.z = fVar20;
  __this_02.fields.value.fields.y = fVar19;
  __this_02.fields._0_8_ = &uStack_48;
  pMVar15 = MethodInfo_Nullable_1_UnityEngine_Vector3;
  System_Nullable_Vector3____ctor(__this_02,UVar24,(MethodInfo_37EDDE0 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar9 = (char)uStack_48;
  uVar14 = CONCAT71((int7)((ulong)unaff_RBP >> 8),(char)uStack_48);
  fStack_18 = (float)((ulong)uStack_40 >> 0x20);
  uStack_20 = uStack_48._4_4_;
  uStack_1c = (undefined4)uStack_40;
  fVar19 = fStack_18;
  uVar21 = 0;
  uVar22 = 0;
  if (g_data_057adcf1 == '\0') {
    uStack_58 = uStack_40;
    uStack_50 = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
    fVar19 = uStack_58._4_4_;
    uVar21 = (undefined4)uStack_50;
    uVar22 = uStack_50._4_4_;
  }
  if (cVar9 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields).AimDirection.fields.x = (float)(int)uVar7;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar19;
  }
  else {
    auStack_38._8_8_ = 0;
    auStack_38._0_8_ = CONCAT44(uStack_1c,uStack_20);
    (__this->fields).AimPoint.fields.x = (float)uStack_20;
    (__this->fields).AimPoint.fields.y = (float)uStack_1c;
    uStack_58 = CONCAT44(fVar19,fVar19);
    uStack_50 = CONCAT44(uVar22,uVar21);
    (__this->fields).AimPoint.fields.z = fVar19;
    __this_01 = (Il2CppClass **)(__this->fields)._human;
    if (((Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      puVar12 = &uStack_58;
      do {
        pCVar16 = (Characters_Human_o *)__this_01;
        *(ulong *)((long)puVar12 + -8) = uVar14;
        *(undefined8 *)((long)puVar12 + -0x10) = unaff_R15;
        *(Characters_Human_o **)((long)puVar12 + -0x18) = unaff_R14;
        *(undefined8 *)((long)puVar12 + -0x20) = unaff_R12;
        *(Controllers_HumanAIController_o **)((long)puVar12 + -0x28) = __this;
        __this_01 = (Il2CppClass **)pCVar16;
        if (g_data_057adcf5 == '\0') {
          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295544;
          il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
          plVar17 = &TypeInfo_Util;
          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295550;
          il2cpp_runtime_helper_023445d0();
          g_data_057adcf5 = '\x01';
          __this_01 = (Il2CppClass **)plVar17;
        }
        pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
        if (pCVar11 != (Characters_Human_o *)0x0) {
          unaff_R15 = CONCAT71((int7)((ulong)unaff_R15 >> 8),
                               *(undefined1 *)((long)&(pCVar16->fields).HasExplicitNameTag + 1));
          unaff_R12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),
                               *(undefined1 *)((long)&(pCVar16->fields).HasExplicitNameTag + 2));
          uVar14 = 0;
          if (((pCVar11->fields).FinishSetup | 8U) != 0xf) {
            pCVar2 = (pCVar11->fields).Horse;
            if (pCVar2 == (Characters_Horse_o *)0x0) goto label_0429586c;
            if ((0.0 < (float)(pCVar2->fields).FootstepsEnabled) &&
               ((*(int *)&(pCVar11->fields).Weapon != 2 ||
                (*(char *)&(pCVar11->fields)._mountedVelocity.fields.x != '\0')))) {
              uVar14 = (ulong)(*(byte *)&(pCVar11->fields).FeedVictimName ^ 1);
            }
          }
          __this_01 = (Il2CppClass **)(pCVar11->fields).HumanCache;
          if ((Characters_Human_o *)__this_01 != (Characters_Human_o *)0x0) {
            *(undefined8 *)((long)puVar12 + -0x80) = 0x42955c9;
            bVar10 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
              if ((pCVar11 == (Characters_Human_o *)0x0) ||
                 (__this_01 = (Il2CppClass **)(pCVar11->fields).Special,
                 (Characters_Human_o *)__this_01 == (Characters_Human_o *)0x0)) goto label_0429586c;
              *(undefined8 *)((long)puVar12 + -0x80) = 0x42955f1;
              Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
            }
            pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
            if (pCVar11 != (Characters_Human_o *)0x0) {
              if (*(char *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 2) != '\0') {
                *(undefined1 *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 2) = 0;
              }
              if (*(char *)&(pCVar11->fields)._lastMountedPosition.fields.x != '\0') {
                *(undefined1 *)&(pCVar11->fields)._lastMountedPosition.fields.x = 0;
                unaff_R15 = 0;
              }
              if (*(char *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 1) != '\0') {
                *(undefined1 *)((long)&(pCVar11->fields)._lastMountedPosition.fields.x + 1) = 0;
                unaff_R12 = 0;
              }
              __this = (Controllers_HumanAIController_o *)(pCVar11->fields).HumanCache;
              if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                *(undefined1 *)&(((Characters_Human_o *)__this)->fields).VisibleName = 0;
                pCVar3 = (pCVar11->fields).Special;
                if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
                  *(undefined1 *)&pCVar3[1].fields.Cooldown = 0;
                  iVar13 = (int)uVar14;
                  if (iVar13 == 0) {
label_042956d7:
                    bVar18 = false;
                  }
                  else {
                    if (g_data_057adcef == '\0') {
                      __this_01 = &TypeInfo_Spin3Special;
                      *(undefined8 *)((long)puVar12 + -0x80) = 0x4295675;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057adcef = '\x01';
                      pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                      if (pCVar11 == (Characters_Human_o *)0x0) goto label_0429586c;
                    }
                    if (((pCVar11->fields).FinishSetup == 9) &&
                       (pSVar4 = (pCVar11->fields).OnPlayerPropertiesChanged,
                       pSVar4 != (System_Action_Hashtable__o *)0x0)) {
                      pSVar5 = pSVar4->klass;
                      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                      if ((bVar1 <= (pSVar5->_2).naturalAligment) &&
                         ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_042956d7;
                    }
                    bVar18 = (char)unaff_R15 != '\0';
                    if (iVar13 == 0) goto label_0429586c;
                  }
                  pMVar15 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                  pIVar6 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                  *(undefined8 *)((long)puVar12 + -0x80) = 0x42956ef;
                  __this_01 = (Il2CppClass **)__this;
                  (*pIVar6)(__this,(ulong)bVar18,pMVar15);
                  pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                  if (pCVar11 != (Characters_Human_o *)0x0) {
                    __this = (Controllers_HumanAIController_o *)(pCVar11->fields).Special;
                    if (iVar13 == 0) {
label_0429577f:
                      bVar18 = false;
                    }
                    else {
                      if (g_data_057adcef == '\0') {
                        __this_01 = &TypeInfo_Spin3Special;
                        *(undefined8 *)((long)puVar12 + -0x80) = 0x429571c;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcef = '\x01';
                        pCVar11 = *(Characters_Human_o **)&(pCVar16->fields).FootstepsEnabled;
                        if (pCVar11 == (Characters_Human_o *)0x0) goto label_0429586c;
                      }
                      if (((pCVar11->fields).FinishSetup == 9) &&
                         (pSVar4 = (pCVar11->fields).OnPlayerPropertiesChanged,
                         pSVar4 != (System_Action_Hashtable__o *)0x0)) {
                        pSVar5 = pSVar4->klass;
                        bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
                        if ((bVar1 <= (pSVar5->_2).naturalAligment) &&
                           ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special)) goto label_0429577f;
                      }
                      bVar18 = (char)unaff_R12 != '\0';
                    }
                    if ((Characters_Human_o *)__this != (Characters_Human_o *)0x0) {
                      pMVar15 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.method;
                      pIVar6 = (((Characters_Human_o *)__this)->klass->vtable)._12_unknown.methodPtr;
                      *(undefined8 *)((long)puVar12 + -0x80) = 0x42957a0;
                      __this_01 = (Il2CppClass **)__this;
                      (*pIVar6)(__this,(ulong)bVar18,pMVar15);
                      __this = *(Controllers_HumanAIController_o **)&(pCVar16->fields).FootstepsEnabled;
                      if (((Characters_Human_o *)__this != (Characters_Human_o *)0x0) &&
                         (pCVar2 = (((Characters_Human_o *)__this)->fields).Horse,
                         pCVar2 != (Characters_Horse_o *)0x0)) {
                        if (((char)unaff_R12 != '\0' || (char)unaff_R15 != '\0') &&
                           ((float)(pCVar2->fields).FootstepsEnabled <= 0.0)) {
                          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar12 + -0x80) = 0x42957ec;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uVar7 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
                          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar12 + -0x80) = 0x4295816;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)puVar12 + -0x80) = 0x4295822;
                          Utility_Util__CreateLocalPhotonInfo
                                    ((Photon_Pun_PhotonMessageInfo_o *)((long)puVar12 + -0x40),
                                     (MethodInfo *)0x0);
                          *(undefined8 *)((long)puVar12 + -0x48) = *(undefined8 *)((long)puVar12 + -0x30);
                          *(undefined8 *)((long)puVar12 + -0x58) = *(undefined8 *)((long)puVar12 + -0x40);
                          *(undefined8 *)((long)puVar12 + -0x50) = *(undefined8 *)((long)puVar12 + -0x38);
                          pCVar8 = ((Characters_Human_o *)__this)->klass;
                          pMVar15 = (pCVar8->vtable)._76_PlaySoundRPC.method;
                          *(undefined8 *)((long)puVar12 + -0x68) = *(undefined8 *)((long)puVar12 + -0x48);
                          *(undefined4 *)((long)puVar12 + -0x78) = *(undefined4 *)((long)puVar12 + -0x58);
                          *(undefined4 *)((long)puVar12 + -0x74) = *(undefined4 *)((long)puVar12 + -0x54);
                          *(undefined4 *)((long)puVar12 + -0x70) = *(undefined4 *)((long)puVar12 + -0x50);
                          *(undefined4 *)((long)puVar12 + -0x6c) = *(undefined4 *)((long)puVar12 + -0x4c);
                          pIVar6 = (pCVar8->vtable)._76_PlaySoundRPC.methodPtr;
                          *(undefined8 *)((long)puVar12 + -0x80) = 0x429585f;
                          (*pIVar6)(__this,uVar7,pMVar15);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
label_0429586c:
        *(undefined8 *)((long)puVar12 + -0x80) = 0x4295871;
        il2cpp_runtime_helper_022b2c90();
        *(undefined1 *)((long)&(((Characters_Human_o *)__this_01)->fields).HasExplicitNameTag + 1) = 0;
        puVar12 = (undefined8 *)((long)puVar12 + -0x78);
        unaff_R14 = pCVar16;
      } while( true );
    }
    pMVar15 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    (__this->fields).AimDirection.fields.x = (float)auStack_38._0_4_ - UVar24.fields.x;
    (__this->fields).AimDirection.fields.y = (float)auStack_38._4_4_ - UVar24.fields.y;
    (__this->fields).AimDirection.fields.z = (float)uStack_58 - UVar24.fields.z;
  }
  Controllers_HumanAIController__UpdateHookInput(__this,pMVar15);
  return;
}


// Controllers.HumanAIController$$ReleaseHookLeft
// il2cpp: void Controllers_HumanAIController__ReleaseHookLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4295880

void Controllers_HumanAIController__ReleaseHookLeft
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  MethodInfo *pMVar5;
  Il2CppMethodPointer pIVar6;
  undefined8 uVar7;
  Characters_HookUseable_c *pCVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_Collider__o *pSVar10;
  Characters_HumanComponentCache_o *unaff_RBX;
  int iVar11;
  ulong unaff_RBP;
  long *__this_00;
  Characters_HumanComponentCache_o *pCVar12;
  undefined8 unaff_R12;
  Characters_HumanComponentCache_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar13;
  
  __this_00 = (long *)__this;
  do {
    pCVar12 = (Characters_HumanComponentCache_o *)__this_00;
    *(undefined1 *)((long)&(pCVar12->fields).Neck + 1) = 0;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(Characters_HumanComponentCache_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(Characters_HumanComponentCache_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
    __this_00 = (long *)pCVar12;
    if (g_data_057adcf5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295544;
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
      __this_00 = &TypeInfo_Util;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295550;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcf5 = '\x01';
    }
    pCVar1 = (Characters_Human_o *)(pCVar12->fields).Colliders;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      unaff_R15 = CONCAT71((int7)((ulong)unaff_R15 >> 8),*(undefined1 *)((long)&(pCVar12->fields).Neck + 1));
      unaff_R12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),*(undefined1 *)((long)&(pCVar12->fields).Neck + 2));
      unaff_RBP = 0;
      if (((pCVar1->fields).FinishSetup | 8U) != 0xf) {
        pCVar2 = (pCVar1->fields).Horse;
        if (pCVar2 == (Characters_Horse_o *)0x0) goto label_0429586c;
        if ((0.0 < (float)(pCVar2->fields).FootstepsEnabled) &&
           ((*(int *)&(pCVar1->fields).Weapon != 2 ||
            (*(char *)&(pCVar1->fields)._mountedVelocity.fields.x != '\0')))) {
          unaff_RBP = (ulong)(*(byte *)&(pCVar1->fields).FeedVictimName ^ 1);
        }
      }
      __this_00 = (long *)(pCVar1->fields).HumanCache;
      if ((Characters_HumanComponentCache_o *)__this_00 != (Characters_HumanComponentCache_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42955c9;
        bVar9 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          pSVar10 = (pCVar12->fields).Colliders;
          if ((pSVar10 == (System_Collections_Generic_List_Collider__o *)0x0) ||
             (__this_00 = (long *)pSVar10[6].fields._syncRoot,
             (Characters_HumanComponentCache_o *)__this_00 == (Characters_HumanComponentCache_o *)0x0))
          goto label_0429586c;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42955f1;
          Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
        }
        pSVar10 = (pCVar12->fields).Colliders;
        if (pSVar10 != (System_Collections_Generic_List_Collider__o *)0x0) {
          if (*(char *)((long)&pSVar10[0xc].klass + 2) != '\0') {
            *(undefined1 *)((long)&pSVar10[0xc].klass + 2) = 0;
          }
          if (*(char *)&pSVar10[0xc].klass != '\0') {
            *(undefined1 *)&pSVar10[0xc].klass = 0;
            unaff_R15 = 0;
          }
          if (*(char *)((long)&pSVar10[0xc].klass + 1) != '\0') {
            *(undefined1 *)((long)&pSVar10[0xc].klass + 1) = 0;
            unaff_R12 = 0;
          }
          unaff_RBX = *(Characters_HumanComponentCache_o **)&pSVar10[6].fields._size;
          if (unaff_RBX != (Characters_HumanComponentCache_o *)0x0) {
            *(undefined1 *)&(unaff_RBX->fields).Head = 0;
            pIVar3 = pSVar10[6].fields._syncRoot;
            if (pIVar3 != (Il2CppObject *)0x0) {
              *(undefined1 *)&pIVar3[4].monitor = 0;
              iVar11 = (int)unaff_RBP;
              if (iVar11 == 0) {
label_042956d7:
                bVar13 = false;
              }
              else {
                if (g_data_057adcef == '\0') {
                  __this_00 = &TypeInfo_Spin3Special;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295675;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057adcef = '\x01';
                  pSVar10 = (pCVar12->fields).Colliders;
                  if (pSVar10 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_0429586c;
                }
                if ((pSVar10[8].fields._size == 9) && (pSVar10[6].monitor != (long *)0x0)) {
                  lVar4 = *(long *)pSVar10[6].monitor;
                  if ((*(byte *)(TypeInfo_Spin3Special + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
                     (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Spin3Special + 0x130) * 8) ==
                      TypeInfo_Spin3Special)) goto label_042956d7;
                }
                bVar13 = (char)unaff_R15 != '\0';
                if (iVar11 == 0) goto label_0429586c;
              }
              pMVar5 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.method;
              pIVar6 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42956ef;
              __this_00 = (long *)unaff_RBX;
              (*pIVar6)(unaff_RBX,(ulong)bVar13,pMVar5);
              pSVar10 = (pCVar12->fields).Colliders;
              if (pSVar10 != (System_Collections_Generic_List_Collider__o *)0x0) {
                unaff_RBX = (Characters_HumanComponentCache_o *)pSVar10[6].fields._syncRoot;
                if (iVar11 == 0) {
label_0429577f:
                  bVar13 = false;
                }
                else {
                  if (g_data_057adcef == '\0') {
                    __this_00 = &TypeInfo_Spin3Special;
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x429571c;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057adcef = '\x01';
                    pSVar10 = (pCVar12->fields).Colliders;
                    if (pSVar10 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_0429586c;
                  }
                  if ((pSVar10[8].fields._size == 9) && (pSVar10[6].monitor != (long *)0x0)) {
                    lVar4 = *(long *)pSVar10[6].monitor;
                    if ((*(byte *)(TypeInfo_Spin3Special + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
                       (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Spin3Special + 0x130) * 8) ==
                        TypeInfo_Spin3Special)) goto label_0429577f;
                  }
                  bVar13 = (char)unaff_R12 != '\0';
                }
                if (unaff_RBX != (Characters_HumanComponentCache_o *)0x0) {
                  pMVar5 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.method;
                  pIVar6 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.methodPtr;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42957a0;
                  __this_00 = (long *)unaff_RBX;
                  (*pIVar6)(unaff_RBX,(ulong)bVar13,pMVar5);
                  unaff_RBX = (Characters_HumanComponentCache_o *)(pCVar12->fields).Colliders;
                  if ((unaff_RBX != (Characters_HumanComponentCache_o *)0x0) &&
                     (pSVar10 = unaff_RBX[1].fields.Colliders,
                     pSVar10 != (System_Collections_Generic_List_Collider__o *)0x0)) {
                    if (((char)unaff_R12 != '\0' || (char)unaff_R15 != '\0') &&
                       (*(float *)&pSVar10[1].klass <= 0.0)) {
                      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42957ec;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      uVar7 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
                      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295816;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295822;
                      Utility_Util__CreateLocalPhotonInfo
                                ((Photon_Pun_PhotonMessageInfo_o *)((long)register0x00000020 + -0x40),
                                 (MethodInfo *)0x0);
                      *(undefined8 *)((long)register0x00000020 + -0x48) =
                           *(undefined8 *)((long)register0x00000020 + -0x30);
                      *(undefined8 *)((long)register0x00000020 + -0x58) =
                           *(undefined8 *)((long)register0x00000020 + -0x40);
                      *(undefined8 *)((long)register0x00000020 + -0x50) =
                           *(undefined8 *)((long)register0x00000020 + -0x38);
                      pCVar8 = (Characters_HookUseable_c *)unaff_RBX->klass;
                      pMVar5 = pCVar8[2].vtable._3_ToString.method;
                      *(undefined8 *)((long)register0x00000020 + -0x68) =
                           *(undefined8 *)((long)register0x00000020 + -0x48);
                      *(undefined4 *)((long)register0x00000020 + -0x78) =
                           *(undefined4 *)((long)register0x00000020 + -0x58);
                      *(undefined4 *)((long)register0x00000020 + -0x74) =
                           *(undefined4 *)((long)register0x00000020 + -0x54);
                      *(undefined4 *)((long)register0x00000020 + -0x70) =
                           *(undefined4 *)((long)register0x00000020 + -0x50);
                      *(undefined4 *)((long)register0x00000020 + -0x6c) =
                           *(undefined4 *)((long)register0x00000020 + -0x4c);
                      pIVar6 = pCVar8[2].vtable._3_ToString.methodPtr;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x429585f;
                      (*pIVar6)(unaff_RBX,uVar7,pMVar5);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0429586c:
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295871;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x78);
    unaff_R14 = pCVar12;
  } while( true );
}


// Controllers.HumanAIController$$LaunchHookRight
// il2cpp: void Controllers_HumanAIController__LaunchHookRight (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x4295890

void Controllers_HumanAIController__LaunchHookRight
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o aimPoint,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  Characters_Human_o *__this_01;
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
  if (g_data_057adcf4 == '\0') {
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = aimPoint.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    g_data_057adcf4 = '\x01';
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
  System_Nullable_Vector3____ctor(__this_02,UVar5,(MethodInfo_37EDDE0 *)MethodInfo_Nullable_1_UnityEngine_Vector3);
  cVar2 = (char)local_48;
  fVar4 = (float)((ulong)uStack_40 >> 0x20);
  local_20 = local_48._4_4_;
  uStack_1c = (undefined4)uStack_40;
  fStack_18 = fVar4;
  if (g_data_057adcf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057adcf1 = '\x01';
  }
  if (cVar2 != '\0') {
    local_38._8_8_ = 0;
    local_38._0_8_ = CONCAT44(uStack_1c,local_20);
    (__this->fields).AimPoint.fields.x = (float)local_20;
    (__this->fields).AimPoint.fields.y = (float)uStack_1c;
    (__this->fields).AimPoint.fields.z = fVar4;
    __this_01 = (__this->fields)._human;
    if (__this_01 != (Characters_Human_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
      ;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        (__this->fields).AimDirection.fields.x = (float)local_38._0_4_ - UVar5.fields.x;
        (__this->fields).AimDirection.fields.y = (float)local_38._4_4_ - UVar5.fields.y;
        (__this->fields).AimDirection.fields.z = fVar4 - UVar5.fields.z;
        goto label_042959c8;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)((long)&(__this_01->fields).HasExplicitNameTag + 2) = 0;
    Controllers_HumanAIController__UpdateHookInput((Controllers_HumanAIController_o *)__this_01,method_00);
    return;
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields).AimDirection.fields.x = (float)(int)uVar1;
  (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields).AimDirection.fields.z = fVar4;
label_042959c8:
  Controllers_HumanAIController__UpdateHookInput(__this,method_00);
  return;
}


// Controllers.HumanAIController$$ReleaseHookRight
// il2cpp: void Controllers_HumanAIController__ReleaseHookRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42959e0

void Controllers_HumanAIController__ReleaseHookRight
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._usingGas + 2) = 0;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$ReleaseHookAll
// il2cpp: void Controllers_HumanAIController__ReleaseHookAll (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42959f0

void Controllers_HumanAIController__ReleaseHookAll(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  *(undefined2 *)((long)&(__this->fields)._usingGas + 1) = 0;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$UpdateHookInput
// il2cpp: void Controllers_HumanAIController__UpdateHookInput (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4295520

void Controllers_HumanAIController__UpdateHookInput
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  MethodInfo *pMVar5;
  Il2CppMethodPointer pIVar6;
  undefined8 uVar7;
  Characters_HookUseable_c *pCVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_Collider__o *pSVar10;
  Characters_HumanComponentCache_o *unaff_RBX;
  int iVar11;
  ulong unaff_RBP;
  Characters_HumanComponentCache_o *pCVar12;
  long *__this_00;
  undefined8 unaff_R12;
  Characters_HumanComponentCache_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar13;
  
  __this_00 = (long *)__this;
  do {
    pCVar12 = (Characters_HumanComponentCache_o *)__this_00;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(Characters_HumanComponentCache_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(Characters_HumanComponentCache_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
    __this_00 = (long *)pCVar12;
    if (g_data_057adcf5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295544;
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
      __this_00 = &TypeInfo_Util;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295550;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcf5 = '\x01';
    }
    pCVar1 = (Characters_Human_o *)(pCVar12->fields).Colliders;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      unaff_R15 = CONCAT71((int7)((ulong)unaff_R15 >> 8),*(undefined1 *)((long)&(pCVar12->fields).Neck + 1));
      unaff_R12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),*(undefined1 *)((long)&(pCVar12->fields).Neck + 2));
      unaff_RBP = 0;
      if (((pCVar1->fields).FinishSetup | 8U) != 0xf) {
        pCVar2 = (pCVar1->fields).Horse;
        if (pCVar2 == (Characters_Horse_o *)0x0) goto label_0429586c;
        if ((0.0 < (float)(pCVar2->fields).FootstepsEnabled) &&
           ((*(int *)&(pCVar1->fields).Weapon != 2 ||
            (*(char *)&(pCVar1->fields)._mountedVelocity.fields.x != '\0')))) {
          unaff_RBP = (ulong)(*(byte *)&(pCVar1->fields).FeedVictimName ^ 1);
        }
      }
      __this_00 = (long *)(pCVar1->fields).HumanCache;
      if ((Characters_HumanComponentCache_o *)__this_00 != (Characters_HumanComponentCache_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42955c9;
        bVar9 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          pSVar10 = (pCVar12->fields).Colliders;
          if ((pSVar10 == (System_Collections_Generic_List_Collider__o *)0x0) ||
             (__this_00 = (long *)pSVar10[6].fields._syncRoot,
             (Characters_HumanComponentCache_o *)__this_00 == (Characters_HumanComponentCache_o *)0x0))
          goto label_0429586c;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42955f1;
          Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
        }
        pSVar10 = (pCVar12->fields).Colliders;
        if (pSVar10 != (System_Collections_Generic_List_Collider__o *)0x0) {
          if (*(char *)((long)&pSVar10[0xc].klass + 2) != '\0') {
            *(undefined1 *)((long)&pSVar10[0xc].klass + 2) = 0;
          }
          if (*(char *)&pSVar10[0xc].klass != '\0') {
            *(undefined1 *)&pSVar10[0xc].klass = 0;
            unaff_R15 = 0;
          }
          if (*(char *)((long)&pSVar10[0xc].klass + 1) != '\0') {
            *(undefined1 *)((long)&pSVar10[0xc].klass + 1) = 0;
            unaff_R12 = 0;
          }
          unaff_RBX = *(Characters_HumanComponentCache_o **)&pSVar10[6].fields._size;
          if (unaff_RBX != (Characters_HumanComponentCache_o *)0x0) {
            *(undefined1 *)&(unaff_RBX->fields).Head = 0;
            pIVar3 = pSVar10[6].fields._syncRoot;
            if (pIVar3 != (Il2CppObject *)0x0) {
              *(undefined1 *)&pIVar3[4].monitor = 0;
              iVar11 = (int)unaff_RBP;
              if (iVar11 == 0) {
label_042956d7:
                bVar13 = false;
              }
              else {
                if (g_data_057adcef == '\0') {
                  __this_00 = &TypeInfo_Spin3Special;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295675;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057adcef = '\x01';
                  pSVar10 = (pCVar12->fields).Colliders;
                  if (pSVar10 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_0429586c;
                }
                if ((pSVar10[8].fields._size == 9) && (pSVar10[6].monitor != (long *)0x0)) {
                  lVar4 = *(long *)pSVar10[6].monitor;
                  if ((*(byte *)(TypeInfo_Spin3Special + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
                     (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Spin3Special + 0x130) * 8) ==
                      TypeInfo_Spin3Special)) goto label_042956d7;
                }
                bVar13 = (char)unaff_R15 != '\0';
                if (iVar11 == 0) goto label_0429586c;
              }
              pMVar5 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.method;
              pIVar6 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42956ef;
              __this_00 = (long *)unaff_RBX;
              (*pIVar6)(unaff_RBX,(ulong)bVar13,pMVar5);
              pSVar10 = (pCVar12->fields).Colliders;
              if (pSVar10 != (System_Collections_Generic_List_Collider__o *)0x0) {
                unaff_RBX = (Characters_HumanComponentCache_o *)pSVar10[6].fields._syncRoot;
                if (iVar11 == 0) {
label_0429577f:
                  bVar13 = false;
                }
                else {
                  if (g_data_057adcef == '\0') {
                    __this_00 = &TypeInfo_Spin3Special;
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x429571c;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057adcef = '\x01';
                    pSVar10 = (pCVar12->fields).Colliders;
                    if (pSVar10 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_0429586c;
                  }
                  if ((pSVar10[8].fields._size == 9) && (pSVar10[6].monitor != (long *)0x0)) {
                    lVar4 = *(long *)pSVar10[6].monitor;
                    if ((*(byte *)(TypeInfo_Spin3Special + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
                       (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Spin3Special + 0x130) * 8) ==
                        TypeInfo_Spin3Special)) goto label_0429577f;
                  }
                  bVar13 = (char)unaff_R12 != '\0';
                }
                if (unaff_RBX != (Characters_HumanComponentCache_o *)0x0) {
                  pMVar5 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.method;
                  pIVar6 = (((Characters_HookUseable_c *)unaff_RBX->klass)->vtable)._12_SetInput.methodPtr;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42957a0;
                  __this_00 = (long *)unaff_RBX;
                  (*pIVar6)(unaff_RBX,(ulong)bVar13,pMVar5);
                  unaff_RBX = (Characters_HumanComponentCache_o *)(pCVar12->fields).Colliders;
                  if ((unaff_RBX != (Characters_HumanComponentCache_o *)0x0) &&
                     (pSVar10 = unaff_RBX[1].fields.Colliders,
                     pSVar10 != (System_Collections_Generic_List_Collider__o *)0x0)) {
                    if (((char)unaff_R12 != '\0' || (char)unaff_R15 != '\0') &&
                       (*(float *)&pSVar10[1].klass <= 0.0)) {
                      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x42957ec;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      uVar7 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
                      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295816;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295822;
                      Utility_Util__CreateLocalPhotonInfo
                                ((Photon_Pun_PhotonMessageInfo_o *)((long)register0x00000020 + -0x40),
                                 (MethodInfo *)0x0);
                      *(undefined8 *)((long)register0x00000020 + -0x48) =
                           *(undefined8 *)((long)register0x00000020 + -0x30);
                      *(undefined8 *)((long)register0x00000020 + -0x58) =
                           *(undefined8 *)((long)register0x00000020 + -0x40);
                      *(undefined8 *)((long)register0x00000020 + -0x50) =
                           *(undefined8 *)((long)register0x00000020 + -0x38);
                      pCVar8 = (Characters_HookUseable_c *)unaff_RBX->klass;
                      pMVar5 = pCVar8[2].vtable._3_ToString.method;
                      *(undefined8 *)((long)register0x00000020 + -0x68) =
                           *(undefined8 *)((long)register0x00000020 + -0x48);
                      *(undefined4 *)((long)register0x00000020 + -0x78) =
                           *(undefined4 *)((long)register0x00000020 + -0x58);
                      *(undefined4 *)((long)register0x00000020 + -0x74) =
                           *(undefined4 *)((long)register0x00000020 + -0x54);
                      *(undefined4 *)((long)register0x00000020 + -0x70) =
                           *(undefined4 *)((long)register0x00000020 + -0x50);
                      *(undefined4 *)((long)register0x00000020 + -0x6c) =
                           *(undefined4 *)((long)register0x00000020 + -0x4c);
                      pIVar6 = pCVar8[2].vtable._3_ToString.methodPtr;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x429585f;
                      (*pIVar6)(unaff_RBX,uVar7,pMVar5);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_0429586c:
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4295871;
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)((long)&(((Characters_HumanComponentCache_o *)__this_00)->fields).Neck + 1) = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x78);
    unaff_R14 = pCVar12;
  } while( true );
}


// Controllers.HumanAIController$$Attack
// il2cpp: void Controllers_HumanAIController__Attack (Controllers_HumanAIController_o* __this, bool attackOn, const MethodInfo* method);
// 0x4295a00

void Controllers_HumanAIController__Attack
               (Controllers_HumanAIController_o *__this,bool_conflict attackOn,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  uint item;
  int iVar4;
  System_Object_array *pSVar5;
  Il2CppClass *pIVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  UnityEngine_AI_NavMeshAgent_o *pUVar10;
  UnityEngine_Rigidbody_o *__this_00;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_AI_NavMeshHit_o __this_01;
  UnityEngine_Vector3_Fields UVar11;
  UnityEngine_Vector3_Fields UVar12;
  UnityEngine_Vector3_Fields UVar13;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Vector3_Fields UVar15;
  UnityEngine_Vector3_Fields UVar16;
  UnityEngine_Vector3_Fields UVar17;
  bool_conflict bVar18;
  UnityEngine_Transform_o *pUVar19;
  _union_14 _Var20;
  _union_14 __this_02;
  Characters_Human_o *pCVar21;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 *puVar22;
  byte bVar23;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  MethodInfo_33DAE10 **__this_03;
  Il2CppClass **__this_04;
  long *plVar24;
  MethodInfo *pMVar25;
  MethodInfo *method_02;
  byte bVar26;
  ulong uVar27;
  bool bVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 extraout_var [12];
  undefined1 auVar35 [16];
  undefined4 extraout_XMM0_Dc_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar42 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  undefined1 auVar43 [16];
  undefined8 uVar32;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar44 [16];
  undefined1 extraout_var_03 [12];
  undefined1 auVar45 [16];
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar46;
  float in_XMM1_Dd;
  float fVar47;
  undefined1 auVar48 [8];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  UnityEngine_Vector3_o UVar54;
  UnityEngine_Vector3_Fields UVar55;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o UVar56;
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o direction_00;
  float fStackY_210;
  float fStackY_20c;
  float fStackY_208;
  float fStackY_204;
  float fStackY_1c8;
  float fStackY_1a8;
  undefined1 in_stack_fffffffffffffeb8 [12];
  undefined4 in_stack_fffffffffffffec4;
  undefined4 in_stack_fffffffffffffec8;
  undefined4 in_stack_fffffffffffffecc;
  undefined4 in_stack_fffffffffffffed0;
  undefined4 uVar58;
  undefined4 in_stack_fffffffffffffed4;
  undefined4 uVar59;
  int32_t in_stack_fffffffffffffed8;
  undefined1 auStack_118 [64];
  _union_14 _Stack_d8;
  _union_14 _Stack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  _union_14 _Stack_40;
  ulong uStack_38;
  Controllers_HumanAIController_o *pCStack_30;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,attackOn);
  __this_03 = (MethodInfo_33DAE10 **)__this;
  if (g_data_057adcf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    __this_03 = &MethodInfo_Boolean_Contains;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcf6 = '\x01';
  }
  pCVar21 = (__this->fields)._human;
  if (pCVar21 != (Characters_Human_o *)0x0) {
    if (*(char *)((long)&(pCVar21->fields)._mountedVelocity.fields.x + 2) == '\0') {
label_04295a7c:
      bVar28 = false;
      *(undefined1 *)&(pCVar21->fields)._currentVelocity.fields.z = 0;
      __this_03 = (MethodInfo_33DAE10 **)(pCVar21->fields).crossfadeCache;
joined_r0x04295ab7:
      if ((System_Collections_Generic_HashSet_T__o *)__this_03 !=
          (System_Collections_Generic_HashSet_T__o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)((long)*__this_03 + 0x1f8);
        if (!bVar28) {
          (*UNRECOVERED_JUMPTABLE_00)(__this_03,0,*(undefined8 *)((long)*__this_03 + 0x200));
          return;
        }
        method_01 = (MethodInfo *)((ulong)(uint)attackOn & 0xff);
        (*UNRECOVERED_JUMPTABLE_00)();
        pCVar21 = (__this->fields)._human;
        if (pCVar21 != (Characters_Human_o *)0x0) {
          pSVar5 = (pCVar21->fields).crossfadeCache;
          if (pSVar5 != (System_Object_array *)0x0) {
            pIVar6 = (pSVar5->obj).klass;
            bVar23 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
            if (bVar23 <= (pIVar6->_2).naturalAligment) {
              uVar29 = (pIVar6->_2).typeHierarchy[(ulong)bVar23 - 1] == TypeInfo_AHSSWeapon;
              if (((bool)uVar29) && ((char)attackOn == '\0')) {
                uVar29 = *(undefined1 *)((long)&pSVar5->max_length + 4);
              }
              goto label_04295b0c;
            }
          }
          uVar29 = 0;
label_04295b0c:
          *(undefined1 *)&(pCVar21->fields)._currentVelocity.fields.z = uVar29;
          return;
        }
      }
    }
    else {
      __this_03 = *(MethodInfo_33DAE10 ***)&(__this->fields)._moveAngle;
      if ((System_Collections_Generic_HashSet_T__o *)__this_03 !=
          (System_Collections_Generic_HashSet_T__o *)0x0) {
        item = (pCVar21->fields).FinishSetup;
        method_01 = (MethodInfo *)(ulong)item;
        bVar18 = System_Collections_Generic_HashSet_Int32Enum___Contains
                           ((System_Collections_Generic_HashSet_T__o *)__this_03,item,MethodInfo_Boolean_Contains);
        pCVar21 = (__this->fields)._human;
        if ((char)bVar18 == '\0') {
          if (pCVar21 != (Characters_Human_o *)0x0) {
            bVar28 = *(char *)&(pCVar21->fields).FeedVictimName == '\0';
            *(undefined1 *)&(pCVar21->fields)._currentVelocity.fields.z = 0;
            __this_03 = (MethodInfo_33DAE10 **)(pCVar21->fields).crossfadeCache;
            goto joined_r0x04295ab7;
          }
        }
        else if (pCVar21 != (Characters_Human_o *)0x0) goto label_04295a7c;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar27 = (ulong)method_01 & 0xffffffff;
  __this_04 = (Il2CppClass **)__this_03;
  pCStack_30 = __this;
  if (g_data_057adcf7 == '\0') {
    uStack_38 = 0x4295b6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseHoldAttackSpecial);
    uStack_38 = 0x4295b7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    uStack_38 = 0x4295b87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    __this_04 = &TypeInfo_StockSpecial;
    uStack_38 = 0x4295b93;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcf7 = '\x01';
  }
  lVar7 = *(long *)((long)__this_03 + 0x28);
  if (lVar7 != 0) {
    plVar24 = *(long **)(lVar7 + 0xf8);
    if (plVar24 == (long *)0x0) {
      return;
    }
    bVar23 = 0;
    if (*(char *)(lVar7 + 0x1ee) != '\0') {
      lVar8 = *plVar24;
      bVar23 = (TypeInfo_EscapeSpecial->_2).naturalAligment;
      if (((((bVar23 <= *(byte *)(lVar8 + 0x130)) &&
            (*(Il2CppClass **)(*(long *)(lVar8 + 200) + -8 + (ulong)bVar23 * 8) == TypeInfo_EscapeSpecial)) ||
           ((bVar23 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment, bVar23 <= *(byte *)(lVar8 + 0x130) &&
            (*(Il2CppClass **)(*(long *)(lVar8 + 200) + -8 + (ulong)bVar23 * 8) == TypeInfo_ShifterTransformSpecial)))) ||
          (bVar23 = 0, *(int *)(lVar7 + 0x158) != 7)) &&
         ((bVar23 = 0, *(int *)(lVar7 + 0x11c) != 1 &&
          ((9 < *(uint *)(lVar7 + 0x158) ||
           (bVar23 = 0, (0x302U >> (*(uint *)(lVar7 + 0x158) & 0x1f) & 1) == 0)))))) {
        bVar23 = *(byte *)(lVar7 + 0x68) ^ 1;
      }
    }
    lVar8 = *plVar24;
    bVar26 = (TypeInfo_BaseHoldAttackSpecial->_2).naturalAligment;
    if (((bVar26 <= *(byte *)(lVar8 + 0x130)) &&
        (*(Il2CppClass **)(*(long *)(lVar8 + 200) + -8 + (ulong)bVar26 * 8) == TypeInfo_BaseHoldAttackSpecial)) &&
       (*(char *)(lVar7 + 0x1ee) != '\0')) {
      iVar4 = *(int *)(lVar7 + 0x158);
      bVar26 = 0;
      if (iVar4 != 7) {
        if ((iVar4 != 8) &&
           (((iVar4 != 1 ||
             ((bVar2 = (TypeInfo_StockSpecial->_2).naturalAligment, bVar2 <= *(byte *)(lVar8 + 0x130) &&
              (*(Il2CppClass **)(*(long *)(lVar8 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_StockSpecial)))) &&
            (*(int *)(lVar7 + 0x11c) != 1)))) {
          bVar26 = *(byte *)(lVar7 + 0x68) ^ 1;
        }
        goto label_04295c8b;
      }
    }
    bVar26 = 0;
label_04295c8b:
    (**(code **)(lVar8 + 0x1f8))
              (plVar24,(ulong)((bVar23 != 0 || bVar26 != 0) & (byte)uVar27),*(undefined8 *)(lVar8 + 0x200),
               *(code **)(lVar8 + 0x1f8));
    return;
  }
  uStack_38 = 0x4295d23;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  UVar55.z = in_XMM1_Da;
  UVar55.x = (float)uStack_98;
  UVar55.y = uStack_98._4_4_;
  plVar24 = (long *)(UnityEngine_Transform_o *)0x0;
  _Stack_40 = (_union_14)__this_03;
  uStack_38 = uVar27;
  if (*(UnityEngine_AI_NavMeshAgent_o **)((long)__this_04 + 0xb8) != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    _Stack_d0 = (_union_14)0x4295d5f;
    fStack_9c = in_XMM1_Da;
    UVar54 = UnityEngine_AI_NavMeshAgent__get_velocity
                       (*(UnityEngine_AI_NavMeshAgent_o **)((long)__this_04 + 0xb8),(MethodInfo *)0x0);
    fStack_c8 = UVar54.fields.z;
    auVar53._8_4_ = extraout_XMM0_Dc;
    auVar53._0_8_ = UVar54.fields._0_8_;
    auVar53._12_4_ = extraout_XMM0_Dd;
    uStack_b0._0_4_ = (float)extraout_XMM0_Dc;
    auStack_b8 = (undefined1  [8])UVar54.fields._0_8_;
    uStack_b0._4_4_ = (float)extraout_XMM0_Dd;
    fStack_c4 = in_XMM1_Db;
    fStack_c0 = in_XMM1_Dc;
    fStack_bc = in_XMM1_Dd;
    if (g_data_057a6845 == '\0') {
      _Stack_d0 = (_union_14)0x42960ba;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar4 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
      auVar53 = _auStack_b8;
    }
    else {
      iVar4 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
    }
    if (iVar4 == 0) {
      _Stack_d0 = (_union_14)0x42960e6;
      il2cpp_runtime_helper_02337ed0();
      auVar53 = _auStack_b8;
    }
    auVar33._4_4_ = fStack_c4;
    auVar33._0_4_ = fStack_c8;
    auVar33._8_4_ = fStack_c0;
    auVar33._12_4_ = fStack_bc;
    auVar34._4_12_ = auVar33._4_12_;
    fVar30 = fStack_c8 * fStack_c8 + auVar53._4_4_ * auVar53._4_4_ + auVar53._0_4_ * auVar53._0_4_;
    if (fVar30 < 0.0) {
      _Stack_d0 = (_union_14)0x4295dfd;
      auVar34._0_4_ = sqrtf(fVar30);
      auVar34._4_12_ = extraout_var;
      in_XMM1_Db = fStack_c4;
      in_XMM1_Dc = fStack_c0;
      in_XMM1_Dd = fStack_bc;
      auVar53 = _auStack_b8;
      if (auVar34._0_4_ <= 1e-05) goto label_04295dc0;
label_04295e0f:
      auVar35._0_4_ = auVar34._0_4_;
      fVar30 = fStack_c8 / auVar35._0_4_;
      auVar35._8_4_ = auVar34._8_4_;
      auVar35._12_4_ = auVar34._12_4_;
      auVar35._4_4_ = auVar35._0_4_;
      _auStack_b8 = divps(auVar53,auVar35);
    }
    else {
      auVar34._0_4_ = SQRT(fVar30);
      in_XMM1_Db = fStack_c4;
      in_XMM1_Dc = fStack_c0;
      in_XMM1_Dd = fStack_bc;
      if (1e-05 < auVar34._0_4_) goto label_04295e0f;
label_04295dc0:
      if (g_data_057a65d5 == '\0') {
        _Stack_d0 = (_union_14)0x4295dd5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_b0 = 0;
      auStack_b8 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar30 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      in_XMM1_Db = 0.0;
      in_XMM1_Dc = 0.0;
      in_XMM1_Dd = 0.0;
    }
    UVar55.z = fVar30;
    UVar55.x = (float)uStack_98;
    UVar55.y = uStack_98._4_4_;
    plVar24 = ((_union_14 *)((long)__this_04 + 0xb8))->genericMethod;
    fStack_c8 = fVar30;
    fStack_c4 = in_XMM1_Db;
    fStack_c0 = in_XMM1_Dc;
    fStack_bc = in_XMM1_Dd;
    if ((UnityEngine_Transform_o *)plVar24 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      _Stack_d0 = (_union_14)0x4295e3a;
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
      UVar55.z = fVar30;
      UVar55.x = (float)uStack_98;
      UVar55.y = uStack_98._4_4_;
      if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        _Stack_d0 = (_union_14)0x4295e4d;
        UVar55 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        fVar30 = UVar55.z;
        uStack_98 = UVar55._0_8_;
        plVar24 = ((_union_14 *)((long)__this_04 + 0xb8))->genericMethod;
        uStack_90 = extraout_XMM0_Qb;
        if ((UnityEngine_Transform_o *)plVar24 != (UnityEngine_Transform_o *)0x0) {
          method_01 = (MethodInfo *)0x0;
          _Stack_d0 = (_union_14)0x4295e69;
          _Var20.genericMethod =
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
          UVar55.z = fVar30;
          UVar55.x = (float)uStack_98;
          UVar55.y = uStack_98._4_4_;
          if (_Var20.genericMethod != (void *)0x0) {
            method_01 = (MethodInfo *)0x0;
            _Stack_d0 = (_union_14)0x4295e7c;
            UVar54 = UnityEngine_Transform__get_position(_Var20.genericMethod,(MethodInfo *)0x0);
            fVar30 = UVar54.fields.z;
            UVar12.z = fVar30;
            UVar12.x = (float)uStack_98;
            UVar12.y = uStack_98._4_4_;
            UVar11.z = fVar30;
            UVar11.x = (float)uStack_98;
            UVar11.y = uStack_98._4_4_;
            UVar55.z = fVar30;
            UVar55.x = (float)uStack_98;
            UVar55.y = uStack_98._4_4_;
            plVar24 = (long *)_Var20;
            if ((*(long *)((long)__this_04 + 0x28) != 0) &&
               (lVar7 = *(long *)(*(long *)((long)__this_04 + 0x28) + 0x70), UVar55 = UVar11, lVar7 != 0)) {
              auStack_88._4_4_ = in_XMM1_Db;
              auStack_88._0_4_ = fVar30;
              fStack_80 = in_XMM1_Dc;
              fStack_7c = in_XMM1_Dd;
              plVar24 = ((_union_14 *)(lVar7 + 0x10))->genericMethod;
              UVar55 = UVar12;
              if ((UnityEngine_Transform_o *)plVar24 != (UnityEngine_Transform_o *)0x0) {
                method_01 = (MethodInfo *)0x0;
                _Stack_d0 = (_union_14)0x4295eaf;
                UVar54 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)plVar24,(MethodInfo *)0x0);
                fVar30 = UVar54.fields.z;
                UVar14.z = fVar30;
                UVar14.x = (float)uStack_98;
                UVar14.y = uStack_98._4_4_;
                UVar13.z = fVar30;
                UVar13.x = (float)uStack_98;
                UVar13.y = uStack_98._4_4_;
                UVar55.z = fVar30;
                UVar55.x = (float)uStack_98;
                UVar55.y = uStack_98._4_4_;
                if ((*(long *)((long)__this_04 + 0x28) != 0) &&
                   (lVar7 = *(long *)(*(long *)((long)__this_04 + 0x28) + 0x70), UVar55 = UVar13, lVar7 != 0))
                {
                  pUVar19 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
                  plVar24 = (long *)(UnityEngine_Transform_o *)0x0;
                  uStack_58 = UVar54.fields._0_8_;
                  UVar55 = UVar14;
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    method_01 = (MethodInfo *)0x0;
                    _Stack_d0 = (_union_14)0x4295ee2;
                    UVar54 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                    fVar30 = UVar54.fields.z;
                    UVar55.z = fVar30;
                    UVar55.x = (float)uStack_98;
                    UVar55.y = uStack_98._4_4_;
                    plVar24 = (long *)(UnityEngine_Transform_o *)0x0;
                    fStack_68 = fVar30;
                    fStack_64 = in_XMM1_Db;
                    fStack_60 = in_XMM1_Dc;
                    fStack_5c = in_XMM1_Dd;
                    if (*(UnityEngine_AI_NavMeshAgent_o **)((long)__this_04 + 0xb8) !=
                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      method_01 = (MethodInfo *)0x0;
                      _Stack_d0 = (_union_14)0x4295efe;
                      bVar18 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                         (*(UnityEngine_AI_NavMeshAgent_o **)((long)__this_04 + 0xb8),
                                          (MethodInfo *)0x0);
                      if ((char)bVar18 != '\0') {
                        if (g_data_057a68cb == '\0') {
                          _Stack_d0 = (_union_14)0x4295f17;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a68cb = '\x01';
                        }
                        in_XMM1_Dc = uStack_98._4_4_ - uStack_58._4_4_;
                        fVar30 = (float)uStack_98 - (float)uStack_58;
                        in_XMM1_Db = (float)auStack_88._0_4_ - fStack_68;
                        in_XMM1_Dd = (float)auStack_88._4_4_ - fStack_64;
                        if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                          uStack_98 = CONCAT44((float)auStack_88._0_4_ - fStack_68,
                                               (float)uStack_98 - (float)uStack_58);
                          uStack_90 = CONCAT44((float)auStack_88._4_4_ - fStack_64,in_XMM1_Dc);
                          _Stack_d0 = (_union_14)0x4295f4b;
                          il2cpp_runtime_helper_02337ed0();
                          fVar30 = (float)uStack_98;
                          in_XMM1_Db = uStack_98._4_4_;
                          in_XMM1_Dc = (float)uStack_90;
                          in_XMM1_Dd = uStack_90._4_4_;
                        }
                        in_XMM1_Db = in_XMM1_Db * in_XMM1_Db;
                        in_XMM1_Dc = in_XMM1_Dc * in_XMM1_Dc;
                        in_XMM1_Dd = in_XMM1_Dd * in_XMM1_Dd;
                        fVar30 = fVar30 * fVar30 + 0.0;
                        auVar51._0_4_ = in_XMM1_Db + fVar30;
                        if (auVar51._0_4_ < 0.0) {
                          _Stack_d0 = (_union_14)0x42960f9;
                          auVar51._0_4_ = sqrtf(auVar51._0_4_);
                          if (1.0 < auVar51._0_4_) goto label_04296106;
                          goto label_04295f7f;
                        }
                        if (SQRT(auVar51._0_4_) <= 1.0) goto label_04295f7f;
label_04296106:
                        UVar55.z = fVar30;
                        UVar55.x = (float)uStack_98;
                        UVar55.y = uStack_98._4_4_;
                        plVar24 = ((_union_14 *)((long)__this_04 + 0xb8))->genericMethod;
                        if ((UnityEngine_Transform_o *)plVar24 == (UnityEngine_Transform_o *)0x0)
                        goto label_04296350;
                        method_01 = (MethodInfo *)0x0;
                        _Stack_d0 = (_union_14)0x429611d;
                        _Var20.genericMethod =
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
                        UVar55.z = fVar30;
                        UVar55.x = (float)uStack_98;
                        UVar55.y = uStack_98._4_4_;
                        if (_Var20.genericMethod == (void *)0x0) goto label_04296350;
                        method_01 = (MethodInfo *)0x0;
                        _Stack_d0 = (_union_14)0x4296130;
                        UVar54 = UnityEngine_Transform__get_position(_Var20.genericMethod,(MethodInfo *)0x0);
                        fVar30 = UVar54.fields.z;
                        UVar17.z = fVar30;
                        UVar17.x = (float)uStack_98;
                        UVar17.y = uStack_98._4_4_;
                        UVar16.z = fVar30;
                        UVar16.x = (float)uStack_98;
                        UVar16.y = uStack_98._4_4_;
                        UVar55.z = fVar30;
                        UVar55.x = (float)uStack_98;
                        UVar55.y = uStack_98._4_4_;
                        plVar24 = (long *)_Var20;
                        if ((*(long *)((long)__this_04 + 0x28) == 0) ||
                           (lVar7 = *(long *)(*(long *)((long)__this_04 + 0x28) + 0x70), UVar55 = UVar16,
                           lVar7 == 0)) goto label_04296350;
                        uStack_b0 = extraout_XMM0_Qb_00;
                        auStack_b8 = (undefined1  [8])UVar54.fields._0_8_;
                        pUVar19 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
                        plVar24 = (long *)0x0;
                        fStack_c8 = fVar30;
                        fStack_c4 = in_XMM1_Db;
                        fStack_c0 = in_XMM1_Dc;
                        fStack_bc = in_XMM1_Dd;
                        UVar55 = UVar17;
                        if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_04296350;
                        method_01 = (MethodInfo *)0x0;
                        _Stack_d0 = (_union_14)0x4296167;
                        UVar54 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                        auVar36._0_8_ = UVar54.fields._0_8_;
                        auVar36._8_8_ = extraout_XMM0_Qb_01;
                        fVar30 = UVar54.fields.z;
                        if (g_data_057a6845 == '\0') {
                          uStack_98 = CONCAT44(uStack_98._4_4_,UVar54.fields.z);
                          _Stack_d0 = (_union_14)0x429618a;
                          _auStack_88 = auVar36;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6845 = '\x01';
                          auVar36 = _auStack_88;
                          fVar30 = (float)uStack_98;
                        }
                        auVar49._0_4_ = (float)auStack_b8._0_4_ - auVar36._0_4_;
                        auVar49._4_4_ = (float)auStack_b8._4_4_ - auVar36._4_4_;
                        auVar49._8_4_ = (float)uStack_b0 - auVar36._8_4_;
                        auVar49._12_4_ = uStack_b0._4_4_ - auVar36._12_4_;
                        plVar24 = (long *)TypeInfo_Math;
                        auVar51._0_4_ = fStack_c8 - fVar30;
                        if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                          _Stack_d0 = (_union_14)0x42961c6;
                          fStack_c8 = fStack_c8 - fVar30;
                          _auStack_b8 = auVar49;
                          il2cpp_runtime_helper_02337ed0();
                          auVar51._0_4_ = fStack_c8;
                          auVar49 = _auStack_b8;
                        }
                        auVar37._4_4_ = fStack_c4;
                        auVar37._0_4_ = auVar51._0_4_;
                        auVar37._8_4_ = fStack_c0;
                        auVar37._12_4_ = fStack_bc;
                        auVar38._4_12_ = auVar37._4_12_;
                        fVar30 = auVar51._0_4_ * auVar51._0_4_ +
                                 auVar49._4_4_ * auVar49._4_4_ + auVar49._0_4_ * auVar49._0_4_;
                        if (0.0 <= fVar30) {
                          auVar38._0_4_ = SQRT(fVar30);
                          if (1e-05 < auVar38._0_4_) goto label_042962f3;
label_04296208:
                          if (g_data_057a65d5 == '\0') {
                            plVar24 = &TypeInfo_Vector3;
                            _Stack_d0 = (_union_14)0x429621d;
                            il2cpp_runtime_helper_023445d0();
                            g_data_057a65d5 = '\x01';
                          }
                          auVar48 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
                          auVar50._8_8_ = 0;
                          auVar50._0_8_ = auVar48;
                          auVar51._12_4_ = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
                          fVar30 = fStack_c8;
                          fVar31 = 0.0;
                          auVar51._0_4_ = fStack_c4;
                          fVar46 = 0.0;
                          auVar51._4_4_ = fStack_c0;
                          fVar47 = 0.0;
                          auVar51._8_4_ = fStack_bc;
                          auVar53 = _auStack_b8;
                        }
                        else {
                          _Stack_d0 = (_union_14)0x42962dd;
                          fStack_c8 = auVar51._0_4_;
                          _auStack_b8 = auVar49;
                          auVar38._0_4_ = sqrtf(fVar30);
                          auVar38._4_12_ = extraout_var_00;
                          auVar51._0_4_ = fStack_c8;
                          auVar49 = _auStack_b8;
                          if (auVar38._0_4_ <= 1e-05) goto label_04296208;
label_042962f3:
                          auVar39._0_4_ = auVar38._0_4_;
                          auVar39._8_4_ = auVar38._8_4_;
                          auVar39._12_4_ = auVar38._12_4_;
                          auVar39._4_4_ = auVar39._0_4_;
                          auVar50 = divps(auVar49,auVar39);
                          auVar48 = auVar50._0_8_;
                          auVar51._12_4_ = auVar51._0_4_ / auVar39._0_4_;
                          fVar30 = fStack_c8;
                          fVar31 = fStack_c4;
                          auVar51._0_4_ = fStack_c4;
                          fVar46 = fStack_c0;
                          auVar51._4_4_ = fStack_c0;
                          fVar47 = fStack_bc;
                          auVar51._8_4_ = fStack_bc;
                          auVar53 = _auStack_b8;
                        }
                        goto joined_r0x04296305;
                      }
label_04295f7f:
                      UVar55.z = fVar30;
                      UVar55.x = (float)uStack_98;
                      UVar55.y = uStack_98._4_4_;
                      plVar24 = (long *)(UnityEngine_Transform_o *)0x0;
                      if (*(UnityEngine_AI_NavMeshAgent_o **)((long)__this_04 + 0xb8) !=
                          (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        method_01 = (MethodInfo *)0x0;
                        _Stack_d0 = (_union_14)0x4295f96;
                        bVar18 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                           (*(UnityEngine_AI_NavMeshAgent_o **)((long)__this_04 + 0xb8),
                                            (MethodInfo *)0x0);
                        UVar55.z = fVar30;
                        UVar55.x = (float)uStack_98;
                        UVar55.y = uStack_98._4_4_;
                        if ((char)bVar18 == '\0') {
label_04295fb9:
                          UVar55.z = fVar30;
                          UVar55.x = (float)uStack_98;
                          UVar55.y = uStack_98._4_4_;
                          plVar24 = ((_union_14 *)((long)__this_04 + 0xb8))->genericMethod;
                          if ((UnityEngine_Transform_o *)plVar24 != (UnityEngine_Transform_o *)0x0) {
                            method_01 = (MethodInfo *)0x0;
                            _Stack_d0 = (_union_14)0x4295fd0;
                            bVar18 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                               ((UnityEngine_AI_NavMeshAgent_o *)plVar24,(MethodInfo *)0x0);
                            auVar51._12_4_ = fStack_c8;
                            fVar31 = fStack_c4;
                            fVar46 = fStack_c0;
                            fVar47 = fStack_bc;
                            auVar50 = _auStack_b8;
                            if ((char)bVar18 == '\0') {
                              _Stack_d0 = (_union_14)0x4295fe5;
                              plVar24 = (long *)__this_04;
                              UVar54 = Controllers_HumanAIController__GetDirectionTowardsNavMesh
                                                 ((Controllers_HumanAIController_o *)__this_04,method_01);
                              auVar51._12_4_ = UVar54.fields.z;
                              auVar50._8_4_ = extraout_XMM0_Dc_00;
                              auVar50._0_8_ = UVar54.fields._0_8_;
                              auVar50._12_4_ = extraout_XMM0_Dd_00;
                            }
                            auVar48 = auVar50._0_8_;
                            fVar30 = fStack_c8;
                            auVar51._0_4_ = fStack_c4;
                            auVar51._4_4_ = fStack_c0;
                            auVar51._8_4_ = fStack_bc;
                            auVar53 = _auStack_b8;
joined_r0x04296305:
                            fStack_bc = fVar47;
                            fStack_c0 = fVar46;
                            fStack_c4 = fVar31;
                            _auStack_b8 = auVar50;
                            fStack_c8 = auVar51._12_4_;
                            auVar51._12_4_ = fStack_c8;
                            in_XMM1_Db = fStack_c4;
                            in_XMM1_Dc = fStack_c0;
                            in_XMM1_Dd = fStack_bc;
                            if (g_data_057a65d5 == '\0') {
                              plVar24 = &TypeInfo_Vector3;
                              _Stack_d0 = (_union_14)0x4296006;
                              il2cpp_runtime_helper_023445d0();
                              g_data_057a65d5 = '\x01';
                              auVar51._12_4_ = fStack_c8;
                              in_XMM1_Db = fStack_c4;
                              in_XMM1_Dc = fStack_c0;
                              in_XMM1_Dd = fStack_bc;
                              auVar48 = auStack_b8;
                              fVar30 = fStack_c8;
                              auVar51._0_4_ = fStack_c4;
                              auVar51._4_4_ = fStack_c0;
                              auVar51._8_4_ = fStack_bc;
                              auVar53 = _auStack_b8;
                            }
                            _auStack_b8 = auVar53;
                            fStack_bc = auVar51._8_4_;
                            fStack_c0 = auVar51._4_4_;
                            fStack_c4 = auVar51._0_4_;
                            fStack_c8 = fVar30;
                            UVar55.z = auVar51._12_4_;
                            UVar55.x = (float)uStack_98;
                            UVar55.y = uStack_98._4_4_;
                            UVar15.z = auVar51._12_4_;
                            UVar15.x = (float)uStack_98;
                            UVar15.y = uStack_98._4_4_;
                            uVar32 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            auVar51._4_4_ = (float)((ulong)auVar48 >> 0x20) - (float)((ulong)uVar32 >> 0x20);
                            fVar30 = auVar51._12_4_ - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                            auVar51._0_4_ = SUB84(auVar48,0) - (float)uVar32;
                            fVar30 = auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_ +
                                     fVar30 * fVar30;
                            if (9.9999994e-11 <= fVar30) {
                              if (9.9999994e-11 <= fVar30) {
                                _Stack_d0 = (_union_14)0x429625b;
                                UVar56.fields.z = auVar51._12_4_;
                                UVar56.fields.x = (float)SUB84(auVar48,0);
                                UVar56.fields.y = (float)(int)((ulong)auVar48 >> 0x20);
                                Controllers_BaseAIController__GetTargetAngle
                                          ((Controllers_BaseAIController_o *)__this_04,UVar56,method_01);
                                return;
                              }
                              if (*(long *)((long)__this_04 + 0x28) != 0) {
                                return;
                              }
                            }
                            else {
                              UVar55 = UVar15;
                              if (*(long *)((long)__this_04 + 0x28) != 0) {
                                return;
                              }
                            }
                          }
                        }
                        else {
                          plVar24 = ((_union_14 *)((long)__this_04 + 0xb8))->genericMethod;
                          if ((UnityEngine_Transform_o *)plVar24 != (UnityEngine_Transform_o *)0x0) {
                            method_01 = (MethodInfo *)0x0;
                            _Stack_d0 = (_union_14)0x4295fb1;
                            bVar18 = UnityEngine_AI_NavMeshAgent__get_pathPending
                                               ((UnityEngine_AI_NavMeshAgent_o *)plVar24,(MethodInfo *)0x0);
                            UVar55.z = fVar30;
                            UVar55.x = (float)uStack_98;
                            UVar55.y = uStack_98._4_4_;
                            if ((char)bVar18 != '\0') goto label_04295fb9;
                            if (*(char *)((long)__this_04 + 0xc4) == '\0') {
                              plVar24 = ((_union_14 *)((long)__this_04 + 0xb8))->genericMethod;
                              if ((UnityEngine_Transform_o *)plVar24 == (UnityEngine_Transform_o *)0x0)
                              goto label_04296350;
                              method_01 = (MethodInfo *)0x0;
                              _Stack_d0 = (_union_14)0x429632e;
                              UVar54.fields.z = fStack_9c;
                              UVar54.fields.x = (float)(undefined4)uStack_78;
                              UVar54.fields.y = (float)uStack_78._4_4_;
                              UnityEngine_AI_NavMeshAgent__SetDestination
                                        ((UnityEngine_AI_NavMeshAgent_o *)plVar24,UVar54,(MethodInfo *)0x0);
                              *(undefined1 *)((long)__this_04 + 0xc4) = 1;
                              auVar48 = auStack_b8;
                              auVar51._12_4_ = fStack_c8;
                              auVar50 = _auStack_b8;
                              fVar30 = fStack_c8;
                              fVar31 = fStack_c4;
                              auVar51._0_4_ = fStack_c4;
                              fVar46 = fStack_c0;
                              auVar51._4_4_ = fStack_c0;
                              fVar47 = fStack_bc;
                              auVar51._8_4_ = fStack_bc;
                              auVar53 = _auStack_b8;
                            }
                            else {
                              auVar48 = auStack_b8;
                              auVar51._12_4_ = fStack_c8;
                              auVar50 = _auStack_b8;
                              fVar30 = fStack_c8;
                              fVar31 = fStack_c4;
                              auVar51._0_4_ = fStack_c4;
                              fVar46 = fStack_c0;
                              auVar51._4_4_ = fStack_c0;
                              fVar47 = fStack_bc;
                              auVar51._8_4_ = fStack_bc;
                              auVar53 = _auStack_b8;
                            }
                            goto joined_r0x04296305;
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
label_04296350:
  fVar30 = UVar55.z;
  uStack_98 = UVar55._0_8_;
  _Stack_d0 = (_union_14)0x4296355;
  UVar57.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)plVar24 + 0xc4) != '\0') {
    return;
  }
  pMVar25 = (MethodInfo *)((UnityEngine_Component_Fields *)((long)plVar24 + 0xb8))->m_CachedPtr;
  _Stack_d0 = (_union_14)__this_04;
  if (pMVar25 != (MethodInfo *)0x0) {
    _Stack_d8.genericMethod = (void *)0x4296382;
    UVar57.fields.z = fVar30;
    UnityEngine_AI_NavMeshAgent__SetDestination
              ((UnityEngine_AI_NavMeshAgent_o *)pMVar25,UVar57,(MethodInfo *)0x0);
    *(undefined1 *)((long)plVar24 + 0xc4) = 1;
    return;
  }
  _Stack_d8.genericMethod = Controllers_HumanAIController__GetDirectionTowardsNavMesh;
  il2cpp_runtime_helper_022b2c90();
  auStack_118._16_8_ = (InvokerMethod)0x0;
  auStack_118._24_8_ = (char *)0x0;
  auStack_118._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_118._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_118._32_4_ = 0;
  method_02 = pMVar25;
  _Stack_d8 = (_union_14)plVar24;
  if ((pMVar25->return_type != (Il2CppType *)0x0) &&
     (pvVar9 = pMVar25->return_type[7].data, pvVar9 != (void *)0x0)) {
    pUVar19 = *(UnityEngine_Transform_o **)((long)pvVar9 + 0x10);
    method_02 = (MethodInfo *)0x0;
    if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
      UVar54 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      bVar18 = UnityEngine_AI_NavMesh__SamplePosition
                         (UVar54,(UnityEngine_AI_NavMeshHit_o *)auStack_118,100.0,-1,(MethodInfo *)0x0);
      if ((char)bVar18 == '\0') {
        UVar54 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
        fVar30 = UVar54.fields.z;
        auVar51._0_4_ = UVar54.fields.x;
        uVar58 = (undefined4)extraout_XMM0_Qb_04;
        uVar59 = (undefined4)((ulong)extraout_XMM0_Qb_04 >> 0x20);
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
          g_data_057a6845 = '\x01';
          iVar4 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
        }
        else {
          iVar4 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
        }
        if (iVar4 == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
        }
        auVar42._4_4_ = in_XMM1_Db;
        auVar42._0_4_ = fVar30;
        auVar42._8_4_ = in_XMM1_Dc;
        auVar42._12_4_ = in_XMM1_Dd;
        auVar41._4_12_ = auVar42._4_12_;
        auVar51._4_4_ = fVar30 * fVar30 + auVar51._0_4_ * auVar51._0_4_ + 0.0;
        if (auVar51._4_4_ < 0.0) {
          auVar41._0_4_ = sqrtf(auVar51._4_4_);
          auVar41._4_12_ = extraout_var_01;
          uVar27 = auVar41._0_8_;
          auVar51._4_4_ = auVar41._0_4_;
        }
        else {
          auVar41._0_4_ = SQRT(auVar51._4_4_);
          uVar27 = auVar41._0_8_;
          auVar51._4_4_ = auVar41._0_4_;
        }
        if (1e-05 < auVar51._4_4_) {
          auVar51._4_4_ = 0.0;
          auVar51._8_4_ = (float)uVar58;
          auVar51._12_4_ = (float)uVar59;
label_042965a3:
          auVar43._0_4_ = auVar41._0_4_;
          auVar43._8_4_ = auVar41._8_4_;
          auVar43._12_4_ = auVar41._12_4_;
          auVar43._4_4_ = auVar43._0_4_;
          divps(auVar51,auVar43);
          return;
        }
label_042965b7:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(uVar27,fVar30,&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        return;
      }
      method_02 = (MethodInfo *)auStack_118;
      method_01 = (MethodInfo *)0x0;
      __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffec4;
      __this_01.fields.m_Position.fields.x = (float)in_stack_fffffffffffffeb8._0_4_;
      __this_01.fields.m_Position.fields.y = (float)in_stack_fffffffffffffeb8._4_4_;
      __this_01.fields.m_Position.fields.z = (float)in_stack_fffffffffffffeb8._8_4_;
      __this_01.fields.m_Normal.fields.y = (float)in_stack_fffffffffffffec8;
      __this_01.fields.m_Normal.fields.z = (float)in_stack_fffffffffffffecc;
      __this_01.fields.m_Distance = (float)in_stack_fffffffffffffed0;
      __this_01.fields.m_Mask = in_stack_fffffffffffffed4;
      __this_01.fields.m_Hit = in_stack_fffffffffffffed8;
      UVar54 = UnityEngine_AI_NavMeshHit__get_position(__this_01,method_02);
      fVar30 = UVar54.fields.z;
      if ((pMVar25->return_type != (Il2CppType *)0x0) &&
         (pvVar9 = pMVar25->return_type[7].data, pvVar9 != (void *)0x0)) {
        auVar51._0_4_ = UVar54.fields.x;
        auVar51._4_4_ = UVar54.fields.y;
        auVar51._8_4_ = (float)extraout_XMM0_Qb_02;
        auVar51._12_4_ = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
        pUVar19 = *(UnityEngine_Transform_o **)((long)pvVar9 + 0x10);
        method_02 = (MethodInfo *)0x0;
        if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
          UVar54 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
          auVar40._0_8_ = UVar54.fields._0_8_;
          auVar40._8_8_ = extraout_XMM0_Qb_03;
          if (g_data_057a6845 == '\0') {
            auStack_118._48_16_ = auVar40;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            auVar40 = auStack_118._48_16_;
          }
          auVar51._0_4_ = auVar51._0_4_ - auVar40._0_4_;
          auVar51._4_4_ = auVar51._4_4_ - auVar40._4_4_;
          auVar51._8_4_ = auVar51._8_4_ - auVar40._8_4_;
          auVar51._12_4_ = auVar51._12_4_ - auVar40._12_4_;
          fVar30 = fVar30 - UVar54.fields.z;
          if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar31 = fVar30 * fVar30 + auVar51._4_4_ * auVar51._4_4_ + auVar51._0_4_ * auVar51._0_4_;
          if (fVar31 < 0.0) {
            uVar58 = auVar51._8_4_;
            uVar59 = auVar51._12_4_;
            auVar41._0_4_ = sqrtf(fVar31);
            auVar41._4_12_ = extraout_var_02;
            uVar27 = auVar41._0_8_;
            auVar51._8_4_ = (float)uVar58;
            auVar51._12_4_ = (float)uVar59;
            fVar31 = auVar41._0_4_;
          }
          else {
            fVar31 = SQRT(fVar31);
            auVar41 = ZEXT416((uint)fVar31);
            uVar27 = (ulong)(uint)fVar31;
          }
          if (1e-05 < fVar31) goto label_042965a3;
          goto label_042965b7;
        }
      }
    }
  }
  direction.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  plVar24 = (long *)method_02;
  if (g_data_057a65d5 == '\0') {
    plVar24 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar32 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  auVar51._8_4_ = (float)((ulong)direction.fields._0_8_ >> 0x20) - (float)((ulong)uVar32 >> 0x20);
  auVar51._0_4_ = fVar30 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  auVar51._4_4_ = (float)direction.fields._0_8_ - (float)uVar32;
  if (9.9999994e-11 <=
      auVar51._4_4_ * auVar51._4_4_ + auVar51._8_4_ * auVar51._8_4_ + auVar51._0_4_ * auVar51._0_4_) {
    direction.fields.z = fVar30;
    Controllers_BaseAIController__GetTargetAngle
              ((Controllers_BaseAIController_o *)method_02,direction,method_01);
    return;
  }
  if (method_02->return_type != (Il2CppType *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&((MethodInfo *)((long)plVar24 + 0xb0))->methodPointer == '\0') {
    return;
  }
  _Var20 = (_union_14)((MethodInfo *)((long)plVar24 + 0xb0))->virtualMethodPointer;
  if (_Var20.genericMethod != (UnityEngine_Transform_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    pUVar19 = UnityEngine_Component__get_transform(_Var20.genericMethod,(MethodInfo *)0x0);
    if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      UVar54 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      fVar30 = UVar54.fields.z;
      _Var20 = (_union_14)((MethodInfo *)((long)plVar24 + 0xb0))->virtualMethodPointer;
      if (_Var20.genericMethod != (UnityEngine_Transform_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        __this_02.genericMethod = UnityEngine_Component__get_transform(_Var20.genericMethod,(MethodInfo *)0x0)
        ;
        if (__this_02.genericMethod != (void *)0x0) {
          method_01 = (MethodInfo *)0x0;
          UVar56 = UnityEngine_Transform__get_position(__this_02.genericMethod,(MethodInfo *)0x0);
          auVar51._0_4_ = UVar56.fields.z;
          _Var20 = __this_02;
          fVar30 = auVar51._0_4_;
          if (((((MethodInfo *)plVar24)->return_type != (Il2CppType *)0x0) &&
              (pvVar9 = ((MethodInfo *)plVar24)->return_type[7].data, pvVar9 != (void *)0x0)) &&
             (_Var20 = (_union_14)((_union_14 *)((long)pvVar9 + 0x10))->genericMethod,
             _Var20.genericMethod != (UnityEngine_Transform_o *)0x0)) {
            method_01 = (MethodInfo *)0x0;
            UVar56 = UnityEngine_Transform__get_position(_Var20.genericMethod,(MethodInfo *)0x0);
            fVar30 = UVar56.fields.z;
            if (((((MethodInfo *)plVar24)->return_type != (Il2CppType *)0x0) &&
                (pvVar9 = ((MethodInfo *)plVar24)->return_type[7].data, pvVar9 != (void *)0x0)) &&
               (_Var20 = (_union_14)((_union_14 *)((long)pvVar9 + 0x10))->genericMethod,
               _Var20.genericMethod != (UnityEngine_Transform_o *)0x0)) {
              method_01 = (MethodInfo *)0x0;
              UVar57 = UnityEngine_Transform__get_position(_Var20.genericMethod,(MethodInfo *)0x0);
              fVar30 = UVar57.fields.z;
              if (*(char *)&((MethodInfo *)((long)plVar24 + 0xb0))->methodPointer != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStackY_1c8 = UVar54.fields.x;
                fStackY_1a8 = UVar56.fields.x;
                auVar51._0_4_ = auVar51._0_4_ - fVar30;
                _Var20 = TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar30 = (fStackY_1c8 - fStackY_1a8) * (fStackY_1c8 - fStackY_1a8) + 0.0;
                auVar51._0_4_ = auVar51._0_4_ * auVar51._0_4_ + fVar30;
                if (auVar51._0_4_ < 0.0) {
                  auVar51._0_4_ = sqrtf(auVar51._0_4_);
                }
                else {
                  auVar51._0_4_ = SQRT(auVar51._0_4_);
                }
                if (0.1 < auVar51._0_4_) {
                  _Var20.genericMethod = (UnityEngine_Transform_o *)0x0;
                  if ((UnityEngine_Behaviour_o *)((MethodInfo *)((long)plVar24 + 0xb0))->virtualMethodPointer
                      != (UnityEngine_Behaviour_o *)0x0) {
                    method_01 = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)
                               ((MethodInfo *)((long)plVar24 + 0xb0))->virtualMethodPointer,0,
                               (MethodInfo *)0x0);
                    _Var20 = (_union_14)((MethodInfo *)((long)plVar24 + 0xb0))->virtualMethodPointer;
                    if (_Var20.genericMethod != (UnityEngine_Transform_o *)0x0) {
                      method_01 = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled(_Var20.genericMethod,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              if (((((MethodInfo *)plVar24)->return_type != (Il2CppType *)0x0) &&
                  (pvVar9 = ((MethodInfo *)plVar24)->return_type[7].data, pvVar9 != (void *)0x0)) &&
                 (_Var20 = (_union_14)((_union_14 *)((long)pvVar9 + 0x10))->genericMethod,
                 _Var20.genericMethod != (UnityEngine_Transform_o *)0x0)) {
                pUVar10 = (UnityEngine_AI_NavMeshAgent_o *)
                          ((MethodInfo *)((long)plVar24 + 0xb0))->virtualMethodPointer;
                method_01 = (MethodInfo *)0x0;
                UVar54 = UnityEngine_Transform__get_position(_Var20.genericMethod,(MethodInfo *)0x0);
                fVar30 = UVar54.fields.z;
                if (pUVar10 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar10,UVar54,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar32 = il2cpp_runtime_helper_022b2c90();
  plVar24 = (long *)_Var20;
  if ((*(long *)((long)_Var20.genericMethod + 0x20) != 0) &&
     (lVar7 = *(long *)(*(long *)((long)_Var20.genericMethod + 0x20) + 0x70), lVar7 != 0)) {
    pUVar19 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
    plVar24 = (void *)0x0;
    if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      UVar54 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStackY_210 = (float)uVar32;
      fStackY_20c = (float)((ulong)uVar32 >> 0x20);
      fStackY_208 = (float)extraout_XMM0_Qb_05;
      fStackY_204 = (float)((ulong)extraout_XMM0_Qb_05 >> 0x20);
      auVar52._0_4_ = fStackY_210 - UVar54.fields.x;
      auVar52._4_4_ = fStackY_20c - UVar54.fields.y;
      auVar52._8_4_ = fStackY_208 - (float)extraout_XMM0_Qb_06;
      auVar52._12_4_ = fStackY_204 - (float)((ulong)extraout_XMM0_Qb_06 >> 0x20);
      fVar30 = fVar30 - UVar54.fields.z;
      plVar24 = (long *)TypeInfo_Math;
      if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar51._0_4_ = fVar30 * fVar30 + auVar52._4_4_ * auVar52._4_4_ + auVar52._0_4_ * auVar52._0_4_;
      if (auVar51._0_4_ < 0.0) {
        auVar44._0_4_ = sqrtf(auVar51._0_4_);
        auVar44._4_12_ = extraout_var_03;
        if (auVar44._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar45._0_4_ = auVar44._0_4_;
        fVar30 = fVar30 / auVar45._0_4_;
        auVar45._8_4_ = auVar44._8_4_;
        auVar45._12_4_ = auVar44._12_4_;
        auVar45._4_4_ = auVar45._0_4_;
        auVar53 = divps(auVar52,auVar45);
        uVar32 = auVar53._0_8_;
        if (g_data_057a65d5 == '\0') {
          plVar24 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar44 = ZEXT416((uint)SQRT(auVar51._0_4_));
        if (1e-05 < SQRT(auVar51._0_4_)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          plVar24 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar32 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar30 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar51._8_4_ = (float)uVar32 - (float)uVar1;
      auVar51._4_4_ = (float)((ulong)uVar32 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      auVar51._0_4_ = fVar30 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <=
          auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_ + auVar51._8_4_ * auVar51._8_4_) {
        direction_00.fields.z = fVar30;
        direction_00.fields.x = (float)(int)uVar32;
        direction_00.fields.y = (float)(int)((ulong)uVar32 >> 0x20);
        Controllers_BaseAIController__GetTargetAngle(_Var20.genericMethod,direction_00,method_01);
        return;
      }
      if (*(long *)((long)_Var20.genericMethod + 0x28) != 0) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar7 = *(long *)((long)plVar24 + 0x28);
  _Var20 = (_union_14)plVar24;
  if (lVar7 == 0) goto label_04296d95;
  *(undefined1 *)(lVar7 + 0xcc) = 1;
  if ((((*(char *)(lVar7 + 0x21c) == '\0') || (*(int *)(lVar7 + 0x118) != 0)) ||
      (*(int *)(lVar7 + 0x158) != 0)) || (*(char *)(lVar7 + 0xc4) == '\0')) {
    *(undefined4 *)(lVar7 + 0x218) = 0x3f800000;
    cVar3 = *(char *)((long)plVar24 + 0xb0);
  }
  else {
    *(undefined4 *)(lVar7 + 0x218) = 0x3e800000;
    cVar3 = *(char *)((long)plVar24 + 0xb0);
  }
  if (cVar3 == '\0') {
    fVar30 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)((long)plVar24 + 0xc0) = fVar30;
    lVar7 = *(long *)((long)plVar24 + 0x28);
    method_01 = (MethodInfo *)0x1;
    fVar30 = Controllers_HumanAIController__GetChaseAngle
                       ((Controllers_HumanAIController_o *)plVar24,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)plVar24 + 0x60),1,
                        method_00);
  }
  else {
    *(undefined1 *)((long)plVar24 + 0xc4) = 0;
    if (*(long *)(lVar7 + 0x70) == 0) goto label_04296d95;
    __this_00 = *(UnityEngine_Rigidbody_o **)(*(long *)(lVar7 + 0x70) + 0x18);
    _Var20.genericMethod = (void *)0x0;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar10 = *(UnityEngine_AI_NavMeshAgent_o **)((long)plVar24 + 0xb8);
    method_01 = (MethodInfo *)0x0;
    UVar54 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    _Var20 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar30 = UVar54.fields.z * UVar54.fields.z +
             UVar54.fields.y * UVar54.fields.y + UVar54.fields.x * UVar54.fields.x;
    if (fVar30 < 0.0) {
      fVar30 = sqrtf(fVar30);
    }
    else {
      fVar30 = SQRT(fVar30);
    }
    if (pUVar10 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method_01 = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar10,fVar30,(MethodInfo *)0x0);
    fVar30 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)((long)plVar24 + 0xc0) = fVar30;
    lVar7 = *(long *)((long)plVar24 + 0x28);
    _Var20 = (_union_14)plVar24;
    fVar30 = Controllers_HumanAIController__GetAgentNavAngle
                       ((Controllers_HumanAIController_o *)plVar24,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)plVar24 + 0x60),method_01
                       );
  }
  if (lVar7 != 0) {
    *(float *)(lVar7 + 200) = fVar30;
    Controllers_HumanAIController__RefreshAgent((Controllers_HumanAIController_o *)plVar24,method_01);
    return;
  }
label_04296d95:
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = *(MethodInfo **)((long)_Var20.genericMethod + 0x98);
  if (method_01 != pMVar25) {
    puVar22 = (undefined8 *)((long)_Var20.genericMethod + 0x98);
    if (method_01 != (MethodInfo *)0x0) {
      (**(code **)(method_01->methodPointer + 0x198))
                (method_01,*(undefined8 *)(method_01->methodPointer + 0x1a0));
      pMVar25 = (MethodInfo *)*puVar22;
    }
    *puVar22 = method_01;
    il2cpp_runtime_helper_022b4080(puVar22,method_01);
    if (pMVar25 != (MethodInfo *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar25->methodPointer + 0x1b8);
      (*UNRECOVERED_JUMPTABLE_00)
                (pMVar25,*(undefined8 *)(pMVar25->methodPointer + 0x1c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00
                );
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$ActivateSpecial
// il2cpp: void Controllers_HumanAIController__ActivateSpecial (Controllers_HumanAIController_o* __this, bool activate, const MethodInfo* method);
// 0x4295b50

void Controllers_HumanAIController__ActivateSpecial
               (Controllers_HumanAIController_o *__this,bool_conflict activate,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  Characters_Human_o *pCVar7;
  System_Action_Hashtable__o *pSVar8;
  System_Action_Hashtable__c *pSVar9;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar10;
  void *pvVar11;
  UnityEngine_AI_NavMeshAgent_o *pUVar12;
  UnityEngine_Rigidbody_o *__this_00;
  code *vtableDispatch;
  UnityEngine_AI_NavMeshHit_o __this_01;
  UnityEngine_Vector3_Fields UVar13;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Vector3_Fields UVar15;
  UnityEngine_Vector3_Fields UVar16;
  UnityEngine_Vector3_Fields UVar17;
  UnityEngine_Vector3_Fields UVar18;
  UnityEngine_Vector3_Fields UVar19;
  bool_conflict bVar20;
  UnityEngine_Transform_o *pUVar21;
  _union_14 _Var22;
  _union_14 __this_02;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 *puVar23;
  byte bVar24;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  Il2CppClass **ppIVar25;
  long *plVar26;
  MethodInfo *pMVar27;
  MethodInfo *method_02;
  byte bVar28;
  float fVar29;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 extraout_var [12];
  undefined1 auVar35 [16];
  undefined4 extraout_XMM0_Dc_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar42 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  undefined1 auVar43 [16];
  undefined8 uVar32;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar44 [16];
  undefined1 extraout_var_03 [12];
  undefined1 auVar45 [16];
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar46;
  float in_XMM1_Dd;
  float fVar47;
  undefined1 auVar48 [8];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  UnityEngine_Vector3_o UVar54;
  UnityEngine_Vector3_Fields UVar55;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o UVar56;
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o direction_00;
  float fStackY_1f8;
  float fStackY_1f4;
  float fStackY_1f0;
  float fStackY_1ec;
  float fStackY_1b0;
  float fStackY_190;
  undefined1 in_stack_fffffffffffffed0 [12];
  undefined4 in_stack_fffffffffffffedc;
  undefined4 in_stack_fffffffffffffee0;
  undefined4 in_stack_fffffffffffffee4;
  undefined4 in_stack_fffffffffffffee8;
  undefined4 uVar58;
  undefined4 in_stack_fffffffffffffeec;
  undefined4 uVar59;
  int32_t in_stack_fffffffffffffef0;
  undefined1 auStack_100 [64];
  _union_14 _Stack_c0;
  _union_14 _Stack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  Controllers_HumanAIController_o *pCStack_28;
  ulong uStack_20;
  ulong uVar31;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,activate);
  ppIVar25 = (Il2CppClass **)__this;
  if (g_data_057adcf7 == '\0') {
    uStack_20 = 0x4295b6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseHoldAttackSpecial);
    uStack_20 = 0x4295b7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    uStack_20 = 0x4295b87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    ppIVar25 = &TypeInfo_StockSpecial;
    uStack_20 = 0x4295b93;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcf7 = '\x01';
  }
  pCVar7 = (__this->fields)._human;
  if (pCVar7 != (Characters_Human_o *)0x0) {
    pSVar8 = (pCVar7->fields).OnPlayerPropertiesChanged;
    if (pSVar8 == (System_Action_Hashtable__o *)0x0) {
      return;
    }
    cVar2 = *(char *)((long)&(pCVar7->fields)._mountedVelocity.fields.x + 2);
    bVar24 = 0;
    if (cVar2 != '\0') {
      pSVar9 = pSVar8->klass;
      bVar24 = (pSVar9->_2).naturalAligment;
      bVar3 = (TypeInfo_EscapeSpecial->_2).naturalAligment;
      if (((((bVar3 <= bVar24) && ((pSVar9->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_EscapeSpecial)) ||
           ((bVar3 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment, bVar3 <= bVar24 &&
            ((pSVar9->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_ShifterTransformSpecial)))) ||
          (bVar24 = 0, (pCVar7->fields).FinishSetup != 7)) &&
         ((bVar24 = 0, *(int *)((long)&(pCVar7->fields).Weapon + 4) != 1 &&
          ((uVar5 = (pCVar7->fields).FinishSetup, 9 < uVar5 ||
           (bVar24 = 0, (0x302U >> (uVar5 & 0x1f) & 1) == 0)))))) {
        bVar24 = *(byte *)&(pCVar7->fields).FeedVictimName ^ 1;
      }
    }
    pSVar9 = pSVar8->klass;
    bVar3 = (pSVar9->_2).naturalAligment;
    bVar28 = (TypeInfo_BaseHoldAttackSpecial->_2).naturalAligment;
    if (((bVar28 <= bVar3) &&
        (ppIVar25 = (pSVar9->_2).typeHierarchy, ppIVar25[(ulong)bVar28 - 1] == TypeInfo_BaseHoldAttackSpecial)) &&
       (cVar2 != '\0')) {
      iVar6 = (pCVar7->fields).FinishSetup;
      bVar28 = 0;
      if (iVar6 != 7) {
        if ((iVar6 != 8) &&
           (((iVar6 != 1 ||
             ((bVar4 = (TypeInfo_StockSpecial->_2).naturalAligment, bVar4 <= bVar3 &&
              (ppIVar25[(ulong)bVar4 - 1] == TypeInfo_StockSpecial)))) &&
            (*(int *)((long)&(pCVar7->fields).Weapon + 4) != 1)))) {
          bVar28 = *(byte *)&(pCVar7->fields).FeedVictimName ^ 1;
        }
        goto label_04295c8b;
      }
    }
    bVar28 = 0;
label_04295c8b:
    UNRECOVERED_JUMPTABLE_00 = (pSVar9->vtable)._12_Invoke.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar8,(ulong)((bVar24 != 0 || bVar28 != 0) & (byte)activate),
               (pSVar9->vtable)._12_Invoke.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uStack_20 = 0x4295d23;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  UVar55.z = in_XMM1_Da;
  UVar55.x = (float)uStack_80;
  UVar55.y = uStack_80._4_4_;
  plVar26 = (long *)(UnityEngine_Transform_o *)0x0;
  pCStack_28 = __this;
  uStack_20 = (ulong)(uint)activate;
  if (*(UnityEngine_AI_NavMeshAgent_o **)((long)ppIVar25 + 0xb8) != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    _Stack_b8 = (_union_14)0x4295d5f;
    fStack_84 = in_XMM1_Da;
    UVar54 = UnityEngine_AI_NavMeshAgent__get_velocity
                       (*(UnityEngine_AI_NavMeshAgent_o **)((long)ppIVar25 + 0xb8),(MethodInfo *)0x0);
    fStack_b0 = UVar54.fields.z;
    auVar53._8_4_ = extraout_XMM0_Dc;
    auVar53._0_8_ = UVar54.fields._0_8_;
    auVar53._12_4_ = extraout_XMM0_Dd;
    uStack_98._0_4_ = (float)extraout_XMM0_Dc;
    auStack_a0 = (undefined1  [8])UVar54.fields._0_8_;
    uStack_98._4_4_ = (float)extraout_XMM0_Dd;
    fStack_ac = in_XMM1_Db;
    fStack_a8 = in_XMM1_Dc;
    fStack_a4 = in_XMM1_Dd;
    if (g_data_057a6845 == '\0') {
      _Stack_b8 = (_union_14)0x42960ba;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar6 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
      auVar53 = _auStack_a0;
    }
    else {
      iVar6 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
    }
    if (iVar6 == 0) {
      _Stack_b8 = (_union_14)0x42960e6;
      il2cpp_runtime_helper_02337ed0();
      auVar53 = _auStack_a0;
    }
    auVar33._4_4_ = fStack_ac;
    auVar33._0_4_ = fStack_b0;
    auVar33._8_4_ = fStack_a8;
    auVar33._12_4_ = fStack_a4;
    auVar34._4_12_ = auVar33._4_12_;
    fVar29 = fStack_b0 * fStack_b0 + auVar53._4_4_ * auVar53._4_4_ + auVar53._0_4_ * auVar53._0_4_;
    if (fVar29 < 0.0) {
      _Stack_b8 = (_union_14)0x4295dfd;
      auVar34._0_4_ = sqrtf(fVar29);
      auVar34._4_12_ = extraout_var;
      in_XMM1_Db = fStack_ac;
      in_XMM1_Dc = fStack_a8;
      in_XMM1_Dd = fStack_a4;
      auVar53 = _auStack_a0;
      if (auVar34._0_4_ <= 1e-05) goto label_04295dc0;
label_04295e0f:
      auVar35._0_4_ = auVar34._0_4_;
      fVar29 = fStack_b0 / auVar35._0_4_;
      auVar35._8_4_ = auVar34._8_4_;
      auVar35._12_4_ = auVar34._12_4_;
      auVar35._4_4_ = auVar35._0_4_;
      _auStack_a0 = divps(auVar53,auVar35);
    }
    else {
      auVar34._0_4_ = SQRT(fVar29);
      in_XMM1_Db = fStack_ac;
      in_XMM1_Dc = fStack_a8;
      in_XMM1_Dd = fStack_a4;
      if (1e-05 < auVar34._0_4_) goto label_04295e0f;
label_04295dc0:
      if (g_data_057a65d5 == '\0') {
        _Stack_b8 = (_union_14)0x4295dd5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_98 = 0;
      auStack_a0 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar29 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      in_XMM1_Db = 0.0;
      in_XMM1_Dc = 0.0;
      in_XMM1_Dd = 0.0;
    }
    UVar55.z = fVar29;
    UVar55.x = (float)uStack_80;
    UVar55.y = uStack_80._4_4_;
    plVar26 = ((_union_14 *)((long)ppIVar25 + 0xb8))->genericMethod;
    fStack_b0 = fVar29;
    fStack_ac = in_XMM1_Db;
    fStack_a8 = in_XMM1_Dc;
    fStack_a4 = in_XMM1_Dd;
    if ((UnityEngine_Transform_o *)plVar26 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      _Stack_b8 = (_union_14)0x4295e3a;
      pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)plVar26,(MethodInfo *)0x0);
      UVar55.z = fVar29;
      UVar55.x = (float)uStack_80;
      UVar55.y = uStack_80._4_4_;
      if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        _Stack_b8 = (_union_14)0x4295e4d;
        UVar55 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
        fVar29 = UVar55.z;
        uStack_80 = UVar55._0_8_;
        plVar26 = ((_union_14 *)((long)ppIVar25 + 0xb8))->genericMethod;
        uStack_78 = extraout_XMM0_Qb;
        if ((UnityEngine_Transform_o *)plVar26 != (UnityEngine_Transform_o *)0x0) {
          method_01 = (MethodInfo *)0x0;
          _Stack_b8 = (_union_14)0x4295e69;
          _Var22.genericMethod =
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)plVar26,(MethodInfo *)0x0);
          UVar55.z = fVar29;
          UVar55.x = (float)uStack_80;
          UVar55.y = uStack_80._4_4_;
          if (_Var22.genericMethod != (void *)0x0) {
            method_01 = (MethodInfo *)0x0;
            _Stack_b8 = (_union_14)0x4295e7c;
            UVar54 = UnityEngine_Transform__get_position(_Var22.genericMethod,(MethodInfo *)0x0);
            fVar29 = UVar54.fields.z;
            UVar14.z = fVar29;
            UVar14.x = (float)uStack_80;
            UVar14.y = uStack_80._4_4_;
            UVar13.z = fVar29;
            UVar13.x = (float)uStack_80;
            UVar13.y = uStack_80._4_4_;
            UVar55.z = fVar29;
            UVar55.x = (float)uStack_80;
            UVar55.y = uStack_80._4_4_;
            plVar26 = (long *)_Var22;
            if ((*(long *)((long)ppIVar25 + 0x28) != 0) &&
               (lVar10 = *(long *)(*(long *)((long)ppIVar25 + 0x28) + 0x70), UVar55 = UVar13, lVar10 != 0)) {
              auStack_70._4_4_ = in_XMM1_Db;
              auStack_70._0_4_ = fVar29;
              fStack_68 = in_XMM1_Dc;
              fStack_64 = in_XMM1_Dd;
              plVar26 = ((_union_14 *)(lVar10 + 0x10))->genericMethod;
              UVar55 = UVar14;
              if ((UnityEngine_Transform_o *)plVar26 != (UnityEngine_Transform_o *)0x0) {
                method_01 = (MethodInfo *)0x0;
                _Stack_b8 = (_union_14)0x4295eaf;
                UVar54 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)plVar26,(MethodInfo *)0x0);
                fVar29 = UVar54.fields.z;
                UVar16.z = fVar29;
                UVar16.x = (float)uStack_80;
                UVar16.y = uStack_80._4_4_;
                UVar15.z = fVar29;
                UVar15.x = (float)uStack_80;
                UVar15.y = uStack_80._4_4_;
                UVar55.z = fVar29;
                UVar55.x = (float)uStack_80;
                UVar55.y = uStack_80._4_4_;
                if ((*(long *)((long)ppIVar25 + 0x28) != 0) &&
                   (lVar10 = *(long *)(*(long *)((long)ppIVar25 + 0x28) + 0x70), UVar55 = UVar15, lVar10 != 0)
                   ) {
                  pUVar21 = *(UnityEngine_Transform_o **)(lVar10 + 0x10);
                  plVar26 = (long *)(UnityEngine_Transform_o *)0x0;
                  uStack_40 = UVar54.fields._0_8_;
                  UVar55 = UVar16;
                  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                    method_01 = (MethodInfo *)0x0;
                    _Stack_b8 = (_union_14)0x4295ee2;
                    UVar54 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
                    fVar29 = UVar54.fields.z;
                    UVar55.z = fVar29;
                    UVar55.x = (float)uStack_80;
                    UVar55.y = uStack_80._4_4_;
                    plVar26 = (long *)(UnityEngine_Transform_o *)0x0;
                    fStack_50 = fVar29;
                    fStack_4c = in_XMM1_Db;
                    fStack_48 = in_XMM1_Dc;
                    fStack_44 = in_XMM1_Dd;
                    if (*(UnityEngine_AI_NavMeshAgent_o **)((long)ppIVar25 + 0xb8) !=
                        (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      method_01 = (MethodInfo *)0x0;
                      _Stack_b8 = (_union_14)0x4295efe;
                      bVar20 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                         (*(UnityEngine_AI_NavMeshAgent_o **)((long)ppIVar25 + 0xb8),
                                          (MethodInfo *)0x0);
                      if ((char)bVar20 != '\0') {
                        if (g_data_057a68cb == '\0') {
                          _Stack_b8 = (_union_14)0x4295f17;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a68cb = '\x01';
                        }
                        in_XMM1_Dc = uStack_80._4_4_ - uStack_40._4_4_;
                        fVar29 = (float)uStack_80 - (float)uStack_40;
                        in_XMM1_Db = (float)auStack_70._0_4_ - fStack_50;
                        in_XMM1_Dd = (float)auStack_70._4_4_ - fStack_4c;
                        if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                          uStack_80 = CONCAT44((float)auStack_70._0_4_ - fStack_50,
                                               (float)uStack_80 - (float)uStack_40);
                          uStack_78 = CONCAT44((float)auStack_70._4_4_ - fStack_4c,in_XMM1_Dc);
                          _Stack_b8 = (_union_14)0x4295f4b;
                          il2cpp_runtime_helper_02337ed0();
                          fVar29 = (float)uStack_80;
                          in_XMM1_Db = uStack_80._4_4_;
                          in_XMM1_Dc = (float)uStack_78;
                          in_XMM1_Dd = uStack_78._4_4_;
                        }
                        in_XMM1_Db = in_XMM1_Db * in_XMM1_Db;
                        in_XMM1_Dc = in_XMM1_Dc * in_XMM1_Dc;
                        in_XMM1_Dd = in_XMM1_Dd * in_XMM1_Dd;
                        fVar29 = fVar29 * fVar29 + 0.0;
                        auVar51._0_4_ = in_XMM1_Db + fVar29;
                        if (auVar51._0_4_ < 0.0) {
                          _Stack_b8 = (_union_14)0x42960f9;
                          auVar51._0_4_ = sqrtf(auVar51._0_4_);
                          if (1.0 < auVar51._0_4_) goto label_04296106;
                          goto label_04295f7f;
                        }
                        if (SQRT(auVar51._0_4_) <= 1.0) goto label_04295f7f;
label_04296106:
                        UVar55.z = fVar29;
                        UVar55.x = (float)uStack_80;
                        UVar55.y = uStack_80._4_4_;
                        plVar26 = ((_union_14 *)((long)ppIVar25 + 0xb8))->genericMethod;
                        if ((UnityEngine_Transform_o *)plVar26 == (UnityEngine_Transform_o *)0x0)
                        goto label_04296350;
                        method_01 = (MethodInfo *)0x0;
                        _Stack_b8 = (_union_14)0x429611d;
                        _Var22.genericMethod =
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)plVar26,(MethodInfo *)0x0);
                        UVar55.z = fVar29;
                        UVar55.x = (float)uStack_80;
                        UVar55.y = uStack_80._4_4_;
                        if (_Var22.genericMethod == (void *)0x0) goto label_04296350;
                        method_01 = (MethodInfo *)0x0;
                        _Stack_b8 = (_union_14)0x4296130;
                        UVar54 = UnityEngine_Transform__get_position(_Var22.genericMethod,(MethodInfo *)0x0);
                        fVar29 = UVar54.fields.z;
                        UVar19.z = fVar29;
                        UVar19.x = (float)uStack_80;
                        UVar19.y = uStack_80._4_4_;
                        UVar18.z = fVar29;
                        UVar18.x = (float)uStack_80;
                        UVar18.y = uStack_80._4_4_;
                        UVar55.z = fVar29;
                        UVar55.x = (float)uStack_80;
                        UVar55.y = uStack_80._4_4_;
                        plVar26 = (long *)_Var22;
                        if ((*(long *)((long)ppIVar25 + 0x28) == 0) ||
                           (lVar10 = *(long *)(*(long *)((long)ppIVar25 + 0x28) + 0x70), UVar55 = UVar18,
                           lVar10 == 0)) goto label_04296350;
                        uStack_98 = extraout_XMM0_Qb_00;
                        auStack_a0 = (undefined1  [8])UVar54.fields._0_8_;
                        pUVar21 = *(UnityEngine_Transform_o **)(lVar10 + 0x10);
                        plVar26 = (long *)0x0;
                        fStack_b0 = fVar29;
                        fStack_ac = in_XMM1_Db;
                        fStack_a8 = in_XMM1_Dc;
                        fStack_a4 = in_XMM1_Dd;
                        UVar55 = UVar19;
                        if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_04296350;
                        method_01 = (MethodInfo *)0x0;
                        _Stack_b8 = (_union_14)0x4296167;
                        UVar54 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
                        auVar36._0_8_ = UVar54.fields._0_8_;
                        auVar36._8_8_ = extraout_XMM0_Qb_01;
                        fVar29 = UVar54.fields.z;
                        if (g_data_057a6845 == '\0') {
                          uStack_80 = CONCAT44(uStack_80._4_4_,UVar54.fields.z);
                          _Stack_b8 = (_union_14)0x429618a;
                          _auStack_70 = auVar36;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6845 = '\x01';
                          auVar36 = _auStack_70;
                          fVar29 = (float)uStack_80;
                        }
                        auVar49._0_4_ = (float)auStack_a0._0_4_ - auVar36._0_4_;
                        auVar49._4_4_ = (float)auStack_a0._4_4_ - auVar36._4_4_;
                        auVar49._8_4_ = (float)uStack_98 - auVar36._8_4_;
                        auVar49._12_4_ = uStack_98._4_4_ - auVar36._12_4_;
                        plVar26 = (long *)TypeInfo_Math;
                        auVar51._0_4_ = fStack_b0 - fVar29;
                        if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                          _Stack_b8 = (_union_14)0x42961c6;
                          fStack_b0 = fStack_b0 - fVar29;
                          _auStack_a0 = auVar49;
                          il2cpp_runtime_helper_02337ed0();
                          auVar51._0_4_ = fStack_b0;
                          auVar49 = _auStack_a0;
                        }
                        auVar37._4_4_ = fStack_ac;
                        auVar37._0_4_ = auVar51._0_4_;
                        auVar37._8_4_ = fStack_a8;
                        auVar37._12_4_ = fStack_a4;
                        auVar38._4_12_ = auVar37._4_12_;
                        fVar29 = auVar51._0_4_ * auVar51._0_4_ +
                                 auVar49._4_4_ * auVar49._4_4_ + auVar49._0_4_ * auVar49._0_4_;
                        if (0.0 <= fVar29) {
                          auVar38._0_4_ = SQRT(fVar29);
                          if (1e-05 < auVar38._0_4_) goto label_042962f3;
label_04296208:
                          if (g_data_057a65d5 == '\0') {
                            plVar26 = &TypeInfo_Vector3;
                            _Stack_b8 = (_union_14)0x429621d;
                            il2cpp_runtime_helper_023445d0();
                            g_data_057a65d5 = '\x01';
                          }
                          auVar48 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
                          auVar50._8_8_ = 0;
                          auVar50._0_8_ = auVar48;
                          auVar51._12_4_ = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
                          fVar29 = fStack_b0;
                          fVar30 = 0.0;
                          auVar51._0_4_ = fStack_ac;
                          fVar46 = 0.0;
                          auVar51._4_4_ = fStack_a8;
                          fVar47 = 0.0;
                          auVar51._8_4_ = fStack_a4;
                          auVar53 = _auStack_a0;
                        }
                        else {
                          _Stack_b8 = (_union_14)0x42962dd;
                          fStack_b0 = auVar51._0_4_;
                          _auStack_a0 = auVar49;
                          auVar38._0_4_ = sqrtf(fVar29);
                          auVar38._4_12_ = extraout_var_00;
                          auVar51._0_4_ = fStack_b0;
                          auVar49 = _auStack_a0;
                          if (auVar38._0_4_ <= 1e-05) goto label_04296208;
label_042962f3:
                          auVar39._0_4_ = auVar38._0_4_;
                          auVar39._8_4_ = auVar38._8_4_;
                          auVar39._12_4_ = auVar38._12_4_;
                          auVar39._4_4_ = auVar39._0_4_;
                          auVar50 = divps(auVar49,auVar39);
                          auVar48 = auVar50._0_8_;
                          auVar51._12_4_ = auVar51._0_4_ / auVar39._0_4_;
                          fVar29 = fStack_b0;
                          fVar30 = fStack_ac;
                          auVar51._0_4_ = fStack_ac;
                          fVar46 = fStack_a8;
                          auVar51._4_4_ = fStack_a8;
                          fVar47 = fStack_a4;
                          auVar51._8_4_ = fStack_a4;
                          auVar53 = _auStack_a0;
                        }
                        goto joined_r0x04296305;
                      }
label_04295f7f:
                      UVar55.z = fVar29;
                      UVar55.x = (float)uStack_80;
                      UVar55.y = uStack_80._4_4_;
                      plVar26 = (long *)(UnityEngine_Transform_o *)0x0;
                      if (*(UnityEngine_AI_NavMeshAgent_o **)((long)ppIVar25 + 0xb8) !=
                          (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        method_01 = (MethodInfo *)0x0;
                        _Stack_b8 = (_union_14)0x4295f96;
                        bVar20 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                           (*(UnityEngine_AI_NavMeshAgent_o **)((long)ppIVar25 + 0xb8),
                                            (MethodInfo *)0x0);
                        UVar55.z = fVar29;
                        UVar55.x = (float)uStack_80;
                        UVar55.y = uStack_80._4_4_;
                        if ((char)bVar20 == '\0') {
label_04295fb9:
                          UVar55.z = fVar29;
                          UVar55.x = (float)uStack_80;
                          UVar55.y = uStack_80._4_4_;
                          plVar26 = ((_union_14 *)((long)ppIVar25 + 0xb8))->genericMethod;
                          if ((UnityEngine_Transform_o *)plVar26 != (UnityEngine_Transform_o *)0x0) {
                            method_01 = (MethodInfo *)0x0;
                            _Stack_b8 = (_union_14)0x4295fd0;
                            bVar20 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                               ((UnityEngine_AI_NavMeshAgent_o *)plVar26,(MethodInfo *)0x0);
                            auVar51._12_4_ = fStack_b0;
                            fVar30 = fStack_ac;
                            fVar46 = fStack_a8;
                            fVar47 = fStack_a4;
                            auVar50 = _auStack_a0;
                            if ((char)bVar20 == '\0') {
                              _Stack_b8 = (_union_14)0x4295fe5;
                              plVar26 = (long *)ppIVar25;
                              UVar54 = Controllers_HumanAIController__GetDirectionTowardsNavMesh
                                                 ((Controllers_HumanAIController_o *)ppIVar25,method_01);
                              auVar51._12_4_ = UVar54.fields.z;
                              auVar50._8_4_ = extraout_XMM0_Dc_00;
                              auVar50._0_8_ = UVar54.fields._0_8_;
                              auVar50._12_4_ = extraout_XMM0_Dd_00;
                            }
                            auVar48 = auVar50._0_8_;
                            fVar29 = fStack_b0;
                            auVar51._0_4_ = fStack_ac;
                            auVar51._4_4_ = fStack_a8;
                            auVar51._8_4_ = fStack_a4;
                            auVar53 = _auStack_a0;
joined_r0x04296305:
                            fStack_a4 = fVar47;
                            fStack_a8 = fVar46;
                            fStack_ac = fVar30;
                            _auStack_a0 = auVar50;
                            fStack_b0 = auVar51._12_4_;
                            auVar51._12_4_ = fStack_b0;
                            in_XMM1_Db = fStack_ac;
                            in_XMM1_Dc = fStack_a8;
                            in_XMM1_Dd = fStack_a4;
                            if (g_data_057a65d5 == '\0') {
                              plVar26 = &TypeInfo_Vector3;
                              _Stack_b8 = (_union_14)0x4296006;
                              il2cpp_runtime_helper_023445d0();
                              g_data_057a65d5 = '\x01';
                              auVar51._12_4_ = fStack_b0;
                              in_XMM1_Db = fStack_ac;
                              in_XMM1_Dc = fStack_a8;
                              in_XMM1_Dd = fStack_a4;
                              auVar48 = auStack_a0;
                              fVar29 = fStack_b0;
                              auVar51._0_4_ = fStack_ac;
                              auVar51._4_4_ = fStack_a8;
                              auVar51._8_4_ = fStack_a4;
                              auVar53 = _auStack_a0;
                            }
                            _auStack_a0 = auVar53;
                            fStack_a4 = auVar51._8_4_;
                            fStack_a8 = auVar51._4_4_;
                            fStack_ac = auVar51._0_4_;
                            fStack_b0 = fVar29;
                            UVar55.z = auVar51._12_4_;
                            UVar55.x = (float)uStack_80;
                            UVar55.y = uStack_80._4_4_;
                            UVar17.z = auVar51._12_4_;
                            UVar17.x = (float)uStack_80;
                            UVar17.y = uStack_80._4_4_;
                            uVar32 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            auVar51._4_4_ = (float)((ulong)auVar48 >> 0x20) - (float)((ulong)uVar32 >> 0x20);
                            fVar29 = auVar51._12_4_ - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                            auVar51._0_4_ = SUB84(auVar48,0) - (float)uVar32;
                            fVar29 = auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_ +
                                     fVar29 * fVar29;
                            if (9.9999994e-11 <= fVar29) {
                              if (9.9999994e-11 <= fVar29) {
                                _Stack_b8 = (_union_14)0x429625b;
                                UVar56.fields.z = auVar51._12_4_;
                                UVar56.fields.x = (float)SUB84(auVar48,0);
                                UVar56.fields.y = (float)(int)((ulong)auVar48 >> 0x20);
                                Controllers_BaseAIController__GetTargetAngle
                                          ((Controllers_BaseAIController_o *)ppIVar25,UVar56,method_01);
                                return;
                              }
                              if (*(long *)((long)ppIVar25 + 0x28) != 0) {
                                return;
                              }
                            }
                            else {
                              UVar55 = UVar17;
                              if (*(long *)((long)ppIVar25 + 0x28) != 0) {
                                return;
                              }
                            }
                          }
                        }
                        else {
                          plVar26 = ((_union_14 *)((long)ppIVar25 + 0xb8))->genericMethod;
                          if ((UnityEngine_Transform_o *)plVar26 != (UnityEngine_Transform_o *)0x0) {
                            method_01 = (MethodInfo *)0x0;
                            _Stack_b8 = (_union_14)0x4295fb1;
                            bVar20 = UnityEngine_AI_NavMeshAgent__get_pathPending
                                               ((UnityEngine_AI_NavMeshAgent_o *)plVar26,(MethodInfo *)0x0);
                            UVar55.z = fVar29;
                            UVar55.x = (float)uStack_80;
                            UVar55.y = uStack_80._4_4_;
                            if ((char)bVar20 != '\0') goto label_04295fb9;
                            if (*(char *)((long)ppIVar25 + 0xc4) == '\0') {
                              plVar26 = ((_union_14 *)((long)ppIVar25 + 0xb8))->genericMethod;
                              if ((UnityEngine_Transform_o *)plVar26 == (UnityEngine_Transform_o *)0x0)
                              goto label_04296350;
                              method_01 = (MethodInfo *)0x0;
                              _Stack_b8 = (_union_14)0x429632e;
                              UVar54.fields.z = fStack_84;
                              UVar54.fields.x = (float)(undefined4)uStack_60;
                              UVar54.fields.y = (float)uStack_60._4_4_;
                              UnityEngine_AI_NavMeshAgent__SetDestination
                                        ((UnityEngine_AI_NavMeshAgent_o *)plVar26,UVar54,(MethodInfo *)0x0);
                              *(undefined1 *)((long)ppIVar25 + 0xc4) = 1;
                              auVar48 = auStack_a0;
                              auVar51._12_4_ = fStack_b0;
                              auVar50 = _auStack_a0;
                              fVar29 = fStack_b0;
                              fVar30 = fStack_ac;
                              auVar51._0_4_ = fStack_ac;
                              fVar46 = fStack_a8;
                              auVar51._4_4_ = fStack_a8;
                              fVar47 = fStack_a4;
                              auVar51._8_4_ = fStack_a4;
                              auVar53 = _auStack_a0;
                            }
                            else {
                              auVar48 = auStack_a0;
                              auVar51._12_4_ = fStack_b0;
                              auVar50 = _auStack_a0;
                              fVar29 = fStack_b0;
                              fVar30 = fStack_ac;
                              auVar51._0_4_ = fStack_ac;
                              fVar46 = fStack_a8;
                              auVar51._4_4_ = fStack_a8;
                              fVar47 = fStack_a4;
                              auVar51._8_4_ = fStack_a4;
                              auVar53 = _auStack_a0;
                            }
                            goto joined_r0x04296305;
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
label_04296350:
  fVar29 = UVar55.z;
  uStack_80 = UVar55._0_8_;
  _Stack_b8 = (_union_14)0x4296355;
  UVar57.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)plVar26 + 0xc4) != '\0') {
    return;
  }
  pMVar27 = (MethodInfo *)((UnityEngine_Component_Fields *)((long)plVar26 + 0xb8))->m_CachedPtr;
  _Stack_b8 = (_union_14)ppIVar25;
  if (pMVar27 != (MethodInfo *)0x0) {
    _Stack_c0.genericMethod = (void *)0x4296382;
    UVar57.fields.z = fVar29;
    UnityEngine_AI_NavMeshAgent__SetDestination
              ((UnityEngine_AI_NavMeshAgent_o *)pMVar27,UVar57,(MethodInfo *)0x0);
    *(undefined1 *)((long)plVar26 + 0xc4) = 1;
    return;
  }
  _Stack_c0.genericMethod = Controllers_HumanAIController__GetDirectionTowardsNavMesh;
  il2cpp_runtime_helper_022b2c90();
  auStack_100._16_8_ = (InvokerMethod)0x0;
  auStack_100._24_8_ = (char *)0x0;
  auStack_100._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_100._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_100._32_4_ = 0;
  method_02 = pMVar27;
  _Stack_c0 = (_union_14)plVar26;
  if ((pMVar27->return_type != (Il2CppType *)0x0) &&
     (pvVar11 = pMVar27->return_type[7].data, pvVar11 != (void *)0x0)) {
    pUVar21 = *(UnityEngine_Transform_o **)((long)pvVar11 + 0x10);
    method_02 = (MethodInfo *)0x0;
    if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
      UVar54 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
      bVar20 = UnityEngine_AI_NavMesh__SamplePosition
                         (UVar54,(UnityEngine_AI_NavMeshHit_o *)auStack_100,100.0,-1,(MethodInfo *)0x0);
      if ((char)bVar20 == '\0') {
        UVar54 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
        fVar29 = UVar54.fields.z;
        auVar51._0_4_ = UVar54.fields.x;
        uVar58 = (undefined4)extraout_XMM0_Qb_04;
        uVar59 = (undefined4)((ulong)extraout_XMM0_Qb_04 >> 0x20);
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
          g_data_057a6845 = '\x01';
          iVar6 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
        }
        else {
          iVar6 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
        }
        if (iVar6 == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
        }
        auVar42._4_4_ = in_XMM1_Db;
        auVar42._0_4_ = fVar29;
        auVar42._8_4_ = in_XMM1_Dc;
        auVar42._12_4_ = in_XMM1_Dd;
        auVar41._4_12_ = auVar42._4_12_;
        auVar51._4_4_ = fVar29 * fVar29 + auVar51._0_4_ * auVar51._0_4_ + 0.0;
        if (auVar51._4_4_ < 0.0) {
          auVar41._0_4_ = sqrtf(auVar51._4_4_);
          auVar41._4_12_ = extraout_var_01;
          uVar31 = auVar41._0_8_;
          auVar51._4_4_ = auVar41._0_4_;
        }
        else {
          auVar41._0_4_ = SQRT(auVar51._4_4_);
          uVar31 = auVar41._0_8_;
          auVar51._4_4_ = auVar41._0_4_;
        }
        if (1e-05 < auVar51._4_4_) {
          auVar51._4_4_ = 0.0;
          auVar51._8_4_ = (float)uVar58;
          auVar51._12_4_ = (float)uVar59;
label_042965a3:
          auVar43._0_4_ = auVar41._0_4_;
          auVar43._8_4_ = auVar41._8_4_;
          auVar43._12_4_ = auVar41._12_4_;
          auVar43._4_4_ = auVar43._0_4_;
          divps(auVar51,auVar43);
          return;
        }
label_042965b7:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(uVar31,fVar29,&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        return;
      }
      method_02 = (MethodInfo *)auStack_100;
      method_01 = (MethodInfo *)0x0;
      __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffedc;
      __this_01.fields.m_Position.fields.x = (float)in_stack_fffffffffffffed0._0_4_;
      __this_01.fields.m_Position.fields.y = (float)in_stack_fffffffffffffed0._4_4_;
      __this_01.fields.m_Position.fields.z = (float)in_stack_fffffffffffffed0._8_4_;
      __this_01.fields.m_Normal.fields.y = (float)in_stack_fffffffffffffee0;
      __this_01.fields.m_Normal.fields.z = (float)in_stack_fffffffffffffee4;
      __this_01.fields.m_Distance = (float)in_stack_fffffffffffffee8;
      __this_01.fields.m_Mask = in_stack_fffffffffffffeec;
      __this_01.fields.m_Hit = in_stack_fffffffffffffef0;
      UVar54 = UnityEngine_AI_NavMeshHit__get_position(__this_01,method_02);
      fVar29 = UVar54.fields.z;
      if ((pMVar27->return_type != (Il2CppType *)0x0) &&
         (pvVar11 = pMVar27->return_type[7].data, pvVar11 != (void *)0x0)) {
        auVar51._0_4_ = UVar54.fields.x;
        auVar51._4_4_ = UVar54.fields.y;
        auVar51._8_4_ = (float)extraout_XMM0_Qb_02;
        auVar51._12_4_ = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
        pUVar21 = *(UnityEngine_Transform_o **)((long)pvVar11 + 0x10);
        method_02 = (MethodInfo *)0x0;
        if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
          UVar54 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
          auVar40._0_8_ = UVar54.fields._0_8_;
          auVar40._8_8_ = extraout_XMM0_Qb_03;
          if (g_data_057a6845 == '\0') {
            auStack_100._48_16_ = auVar40;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            auVar40 = auStack_100._48_16_;
          }
          auVar51._0_4_ = auVar51._0_4_ - auVar40._0_4_;
          auVar51._4_4_ = auVar51._4_4_ - auVar40._4_4_;
          auVar51._8_4_ = auVar51._8_4_ - auVar40._8_4_;
          auVar51._12_4_ = auVar51._12_4_ - auVar40._12_4_;
          fVar29 = fVar29 - UVar54.fields.z;
          if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar30 = fVar29 * fVar29 + auVar51._4_4_ * auVar51._4_4_ + auVar51._0_4_ * auVar51._0_4_;
          if (fVar30 < 0.0) {
            uVar58 = auVar51._8_4_;
            uVar59 = auVar51._12_4_;
            auVar41._0_4_ = sqrtf(fVar30);
            auVar41._4_12_ = extraout_var_02;
            uVar31 = auVar41._0_8_;
            auVar51._8_4_ = (float)uVar58;
            auVar51._12_4_ = (float)uVar59;
            fVar30 = auVar41._0_4_;
          }
          else {
            fVar30 = SQRT(fVar30);
            auVar41 = ZEXT416((uint)fVar30);
            uVar31 = (ulong)(uint)fVar30;
          }
          if (1e-05 < fVar30) goto label_042965a3;
          goto label_042965b7;
        }
      }
    }
  }
  direction.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  plVar26 = (long *)method_02;
  if (g_data_057a65d5 == '\0') {
    plVar26 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar32 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  auVar51._8_4_ = (float)((ulong)direction.fields._0_8_ >> 0x20) - (float)((ulong)uVar32 >> 0x20);
  auVar51._0_4_ = fVar29 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  auVar51._4_4_ = (float)direction.fields._0_8_ - (float)uVar32;
  if (9.9999994e-11 <=
      auVar51._4_4_ * auVar51._4_4_ + auVar51._8_4_ * auVar51._8_4_ + auVar51._0_4_ * auVar51._0_4_) {
    direction.fields.z = fVar29;
    Controllers_BaseAIController__GetTargetAngle
              ((Controllers_BaseAIController_o *)method_02,direction,method_01);
    return;
  }
  if (method_02->return_type != (Il2CppType *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&((MethodInfo *)((long)plVar26 + 0xb0))->methodPointer == '\0') {
    return;
  }
  _Var22 = (_union_14)((MethodInfo *)((long)plVar26 + 0xb0))->virtualMethodPointer;
  if (_Var22.genericMethod != (UnityEngine_Transform_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    pUVar21 = UnityEngine_Component__get_transform(_Var22.genericMethod,(MethodInfo *)0x0);
    if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      UVar54 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
      fVar29 = UVar54.fields.z;
      _Var22 = (_union_14)((MethodInfo *)((long)plVar26 + 0xb0))->virtualMethodPointer;
      if (_Var22.genericMethod != (UnityEngine_Transform_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        __this_02.genericMethod = UnityEngine_Component__get_transform(_Var22.genericMethod,(MethodInfo *)0x0)
        ;
        if (__this_02.genericMethod != (void *)0x0) {
          method_01 = (MethodInfo *)0x0;
          UVar56 = UnityEngine_Transform__get_position(__this_02.genericMethod,(MethodInfo *)0x0);
          auVar51._0_4_ = UVar56.fields.z;
          _Var22 = __this_02;
          fVar29 = auVar51._0_4_;
          if (((((MethodInfo *)plVar26)->return_type != (Il2CppType *)0x0) &&
              (pvVar11 = ((MethodInfo *)plVar26)->return_type[7].data, pvVar11 != (void *)0x0)) &&
             (_Var22 = (_union_14)((_union_14 *)((long)pvVar11 + 0x10))->genericMethod,
             _Var22.genericMethod != (UnityEngine_Transform_o *)0x0)) {
            method_01 = (MethodInfo *)0x0;
            UVar56 = UnityEngine_Transform__get_position(_Var22.genericMethod,(MethodInfo *)0x0);
            fVar29 = UVar56.fields.z;
            if (((((MethodInfo *)plVar26)->return_type != (Il2CppType *)0x0) &&
                (pvVar11 = ((MethodInfo *)plVar26)->return_type[7].data, pvVar11 != (void *)0x0)) &&
               (_Var22 = (_union_14)((_union_14 *)((long)pvVar11 + 0x10))->genericMethod,
               _Var22.genericMethod != (UnityEngine_Transform_o *)0x0)) {
              method_01 = (MethodInfo *)0x0;
              UVar57 = UnityEngine_Transform__get_position(_Var22.genericMethod,(MethodInfo *)0x0);
              fVar29 = UVar57.fields.z;
              if (*(char *)&((MethodInfo *)((long)plVar26 + 0xb0))->methodPointer != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStackY_1b0 = UVar54.fields.x;
                fStackY_190 = UVar56.fields.x;
                auVar51._0_4_ = auVar51._0_4_ - fVar29;
                _Var22 = TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar29 = (fStackY_1b0 - fStackY_190) * (fStackY_1b0 - fStackY_190) + 0.0;
                auVar51._0_4_ = auVar51._0_4_ * auVar51._0_4_ + fVar29;
                if (auVar51._0_4_ < 0.0) {
                  auVar51._0_4_ = sqrtf(auVar51._0_4_);
                }
                else {
                  auVar51._0_4_ = SQRT(auVar51._0_4_);
                }
                if (0.1 < auVar51._0_4_) {
                  _Var22.genericMethod = (UnityEngine_Transform_o *)0x0;
                  if ((UnityEngine_Behaviour_o *)((MethodInfo *)((long)plVar26 + 0xb0))->virtualMethodPointer
                      != (UnityEngine_Behaviour_o *)0x0) {
                    method_01 = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)
                               ((MethodInfo *)((long)plVar26 + 0xb0))->virtualMethodPointer,0,
                               (MethodInfo *)0x0);
                    _Var22 = (_union_14)((MethodInfo *)((long)plVar26 + 0xb0))->virtualMethodPointer;
                    if (_Var22.genericMethod != (UnityEngine_Transform_o *)0x0) {
                      method_01 = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled(_Var22.genericMethod,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              if (((((MethodInfo *)plVar26)->return_type != (Il2CppType *)0x0) &&
                  (pvVar11 = ((MethodInfo *)plVar26)->return_type[7].data, pvVar11 != (void *)0x0)) &&
                 (_Var22 = (_union_14)((_union_14 *)((long)pvVar11 + 0x10))->genericMethod,
                 _Var22.genericMethod != (UnityEngine_Transform_o *)0x0)) {
                pUVar12 = (UnityEngine_AI_NavMeshAgent_o *)
                          ((MethodInfo *)((long)plVar26 + 0xb0))->virtualMethodPointer;
                method_01 = (MethodInfo *)0x0;
                UVar54 = UnityEngine_Transform__get_position(_Var22.genericMethod,(MethodInfo *)0x0);
                fVar29 = UVar54.fields.z;
                if (pUVar12 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar12,UVar54,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar32 = il2cpp_runtime_helper_022b2c90();
  plVar26 = (long *)_Var22;
  if ((*(long *)((long)_Var22.genericMethod + 0x20) != 0) &&
     (lVar10 = *(long *)(*(long *)((long)_Var22.genericMethod + 0x20) + 0x70), lVar10 != 0)) {
    pUVar21 = *(UnityEngine_Transform_o **)(lVar10 + 0x10);
    plVar26 = (void *)0x0;
    if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      UVar54 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStackY_1f8 = (float)uVar32;
      fStackY_1f4 = (float)((ulong)uVar32 >> 0x20);
      fStackY_1f0 = (float)extraout_XMM0_Qb_05;
      fStackY_1ec = (float)((ulong)extraout_XMM0_Qb_05 >> 0x20);
      auVar52._0_4_ = fStackY_1f8 - UVar54.fields.x;
      auVar52._4_4_ = fStackY_1f4 - UVar54.fields.y;
      auVar52._8_4_ = fStackY_1f0 - (float)extraout_XMM0_Qb_06;
      auVar52._12_4_ = fStackY_1ec - (float)((ulong)extraout_XMM0_Qb_06 >> 0x20);
      fVar29 = fVar29 - UVar54.fields.z;
      plVar26 = (long *)TypeInfo_Math;
      if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar51._0_4_ = fVar29 * fVar29 + auVar52._4_4_ * auVar52._4_4_ + auVar52._0_4_ * auVar52._0_4_;
      if (auVar51._0_4_ < 0.0) {
        auVar44._0_4_ = sqrtf(auVar51._0_4_);
        auVar44._4_12_ = extraout_var_03;
        if (auVar44._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar45._0_4_ = auVar44._0_4_;
        fVar29 = fVar29 / auVar45._0_4_;
        auVar45._8_4_ = auVar44._8_4_;
        auVar45._12_4_ = auVar44._12_4_;
        auVar45._4_4_ = auVar45._0_4_;
        auVar53 = divps(auVar52,auVar45);
        uVar32 = auVar53._0_8_;
        if (g_data_057a65d5 == '\0') {
          plVar26 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar44 = ZEXT416((uint)SQRT(auVar51._0_4_));
        if (1e-05 < SQRT(auVar51._0_4_)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          plVar26 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar32 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar51._8_4_ = (float)uVar32 - (float)uVar1;
      auVar51._4_4_ = (float)((ulong)uVar32 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      auVar51._0_4_ = fVar29 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <=
          auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_ + auVar51._8_4_ * auVar51._8_4_) {
        direction_00.fields.z = fVar29;
        direction_00.fields.x = (float)(int)uVar32;
        direction_00.fields.y = (float)(int)((ulong)uVar32 >> 0x20);
        Controllers_BaseAIController__GetTargetAngle(_Var22.genericMethod,direction_00,method_01);
        return;
      }
      if (*(long *)((long)_Var22.genericMethod + 0x28) != 0) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)((long)plVar26 + 0x28);
  _Var22 = (_union_14)plVar26;
  if (lVar10 == 0) goto label_04296d95;
  *(undefined1 *)(lVar10 + 0xcc) = 1;
  if ((((*(char *)(lVar10 + 0x21c) == '\0') || (*(int *)(lVar10 + 0x118) != 0)) ||
      (*(int *)(lVar10 + 0x158) != 0)) || (*(char *)(lVar10 + 0xc4) == '\0')) {
    *(undefined4 *)(lVar10 + 0x218) = 0x3f800000;
    cVar2 = *(char *)((long)plVar26 + 0xb0);
  }
  else {
    *(undefined4 *)(lVar10 + 0x218) = 0x3e800000;
    cVar2 = *(char *)((long)plVar26 + 0xb0);
  }
  if (cVar2 == '\0') {
    fVar29 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)((long)plVar26 + 0xc0) = fVar29;
    lVar10 = *(long *)((long)plVar26 + 0x28);
    method_01 = (MethodInfo *)0x1;
    fVar29 = Controllers_HumanAIController__GetChaseAngle
                       ((Controllers_HumanAIController_o *)plVar26,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)plVar26 + 0x60),1,
                        method_00);
  }
  else {
    *(undefined1 *)((long)plVar26 + 0xc4) = 0;
    if (*(long *)(lVar10 + 0x70) == 0) goto label_04296d95;
    __this_00 = *(UnityEngine_Rigidbody_o **)(*(long *)(lVar10 + 0x70) + 0x18);
    _Var22.genericMethod = (void *)0x0;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar12 = *(UnityEngine_AI_NavMeshAgent_o **)((long)plVar26 + 0xb8);
    method_01 = (MethodInfo *)0x0;
    UVar54 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    _Var22 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar29 = UVar54.fields.z * UVar54.fields.z +
             UVar54.fields.y * UVar54.fields.y + UVar54.fields.x * UVar54.fields.x;
    if (fVar29 < 0.0) {
      fVar29 = sqrtf(fVar29);
    }
    else {
      fVar29 = SQRT(fVar29);
    }
    if (pUVar12 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method_01 = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar12,fVar29,(MethodInfo *)0x0);
    fVar29 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)((long)plVar26 + 0xc0) = fVar29;
    lVar10 = *(long *)((long)plVar26 + 0x28);
    _Var22 = (_union_14)plVar26;
    fVar29 = Controllers_HumanAIController__GetAgentNavAngle
                       ((Controllers_HumanAIController_o *)plVar26,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)plVar26 + 0x60),method_01
                       );
  }
  if (lVar10 != 0) {
    *(float *)(lVar10 + 200) = fVar29;
    Controllers_HumanAIController__RefreshAgent((Controllers_HumanAIController_o *)plVar26,method_01);
    return;
  }
label_04296d95:
  il2cpp_runtime_helper_022b2c90();
  pMVar27 = *(MethodInfo **)((long)_Var22.genericMethod + 0x98);
  if (method_01 != pMVar27) {
    puVar23 = (undefined8 *)((long)_Var22.genericMethod + 0x98);
    if (method_01 != (MethodInfo *)0x0) {
      (**(code **)(method_01->methodPointer + 0x198))
                (method_01,*(undefined8 *)(method_01->methodPointer + 0x1a0));
      pMVar27 = (MethodInfo *)*puVar23;
    }
    *puVar23 = method_01;
    il2cpp_runtime_helper_022b4080(puVar23,method_01);
    if (pMVar27 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar27->methodPointer + 0x1b8);
      (*vtableDispatch)
                (pMVar27,*(undefined8 *)(pMVar27->methodPointer + 0x1c0),extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$GetAgentNavAngle
// il2cpp: float Controllers_HumanAIController__GetAgentNavAngle (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x4295d30

float Controllers_HumanAIController__GetAgentNavAngle
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o target,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  UnityEngine_AI_NavMeshAgent_o *pUVar4;
  Characters_Human_o *pCVar5;
  long lVar6;
  void *pvVar7;
  UnityEngine_Rigidbody_o *__this_00;
  code *vtableDispatch;
  UnityEngine_AI_NavMeshHit_o __this_01;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  _union_14 _Var10;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  void **ppvVar11;
  _union_14 _Var12;
  MethodInfo *method_01;
  MethodInfo *pMVar13;
  float fVar14;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_var [12];
  undefined1 auVar20 [16];
  undefined4 extraout_XMM0_Dc_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar27 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  undefined1 auVar28 [16];
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar29 [16];
  undefined1 extraout_var_03 [12];
  undefined1 auVar30 [16];
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar31;
  float in_XMM1_Dd;
  float fVar32;
  undefined1 auVar33 [8];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o direction_00;
  float fStackY_1e0;
  float fStackY_1dc;
  float fStackY_1d8;
  float fStackY_1d4;
  float fStackY_198;
  float fStackY_178;
  undefined1 in_stack_fffffffffffffee8 [12];
  undefined4 in_stack_fffffffffffffef4;
  undefined4 in_stack_fffffffffffffef8;
  undefined4 in_stack_fffffffffffffefc;
  undefined4 in_stack_ffffffffffffff00;
  undefined4 uVar42;
  undefined4 in_stack_ffffffffffffff04;
  undefined4 uVar43;
  int32_t in_stack_ffffffffffffff08;
  undefined1 auStack_e8 [64];
  _union_14 _Stack_a8;
  Controllers_HumanAIController_o *pCStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  ulong uVar16;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  
  fVar14 = target.fields.z;
  local_48 = target.fields._0_8_;
  pUVar4 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
  _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
  local_6c = fVar14;
  if (pUVar4 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    method = (MethodInfo *)0x0;
    pCStack_a0 = (Controllers_HumanAIController_o *)0x4295d5f;
    UVar39 = UnityEngine_AI_NavMeshAgent__get_velocity(pUVar4,(MethodInfo *)0x0);
    local_98 = UVar39.fields.z;
    auVar37._8_4_ = extraout_XMM0_Dc;
    auVar37._0_8_ = UVar39.fields._0_8_;
    auVar37._12_4_ = extraout_XMM0_Dd;
    uStack_80._0_4_ = (float)extraout_XMM0_Dc;
    local_88 = (undefined1  [8])UVar39.fields._0_8_;
    uStack_80._4_4_ = (float)extraout_XMM0_Dd;
    fStack_94 = in_XMM1_Db;
    fStack_90 = in_XMM1_Dc;
    fStack_8c = in_XMM1_Dd;
    if (g_data_057a6845 == '\0') {
      pCStack_a0 = (Controllers_HumanAIController_o *)0x42960ba;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar3 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
      auVar37 = _local_88;
    }
    else {
      iVar3 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
    }
    if (iVar3 == 0) {
      pCStack_a0 = (Controllers_HumanAIController_o *)0x42960e6;
      il2cpp_runtime_helper_02337ed0();
      auVar37 = _local_88;
    }
    auVar18._4_4_ = fStack_94;
    auVar18._0_4_ = local_98;
    auVar18._8_4_ = fStack_90;
    auVar18._12_4_ = fStack_8c;
    auVar19._4_12_ = auVar18._4_12_;
    fVar14 = local_98 * local_98 + auVar37._4_4_ * auVar37._4_4_ + auVar37._0_4_ * auVar37._0_4_;
    if (fVar14 < 0.0) {
      pCStack_a0 = (Controllers_HumanAIController_o *)0x4295dfd;
      auVar19._0_4_ = sqrtf(fVar14);
      auVar19._4_12_ = extraout_var;
      in_XMM1_Db = fStack_94;
      in_XMM1_Dc = fStack_90;
      in_XMM1_Dd = fStack_8c;
      auVar37 = _local_88;
      if (auVar19._0_4_ <= 1e-05) goto label_04295dc0;
label_04295e0f:
      auVar20._0_4_ = auVar19._0_4_;
      fVar14 = local_98 / auVar20._0_4_;
      auVar20._8_4_ = auVar19._8_4_;
      auVar20._12_4_ = auVar19._12_4_;
      auVar20._4_4_ = auVar20._0_4_;
      _local_88 = divps(auVar37,auVar20);
    }
    else {
      auVar19._0_4_ = SQRT(fVar14);
      in_XMM1_Db = fStack_94;
      in_XMM1_Dc = fStack_90;
      in_XMM1_Dd = fStack_8c;
      if (1e-05 < auVar19._0_4_) goto label_04295e0f;
label_04295dc0:
      if (g_data_057a65d5 == '\0') {
        pCStack_a0 = (Controllers_HumanAIController_o *)0x4295dd5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_80 = 0;
      local_88 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar14 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      in_XMM1_Db = 0.0;
      in_XMM1_Dc = 0.0;
      in_XMM1_Dd = 0.0;
    }
    _Var12 = (_union_14)*(_union_14 *)&(__this->fields)._usePathfinding;
    local_98 = fVar14;
    fStack_94 = in_XMM1_Db;
    fStack_90 = in_XMM1_Dc;
    fStack_8c = in_XMM1_Dd;
    if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
      method = (MethodInfo *)0x0;
      pCStack_a0 = (Controllers_HumanAIController_o *)0x4295e3a;
      pUVar9 = UnityEngine_Component__get_transform(_Var12.genericMethod,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        method = (MethodInfo *)0x0;
        pCStack_a0 = (Controllers_HumanAIController_o *)0x4295e4d;
        UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        fVar14 = UVar39.fields.z;
        local_68 = UVar39.fields._0_8_;
        _Var12 = (_union_14)*(_union_14 *)&(__this->fields)._usePathfinding;
        uStack_60 = extraout_XMM0_Qb;
        if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
          method = (MethodInfo *)0x0;
          pCStack_a0 = (Controllers_HumanAIController_o *)0x4295e69;
          _Var10.genericMethod = UnityEngine_Component__get_transform(_Var12.genericMethod,(MethodInfo *)0x0);
          if (_Var10.genericMethod != (Controllers_HumanAIController_o *)0x0) {
            method = (MethodInfo *)0x0;
            pCStack_a0 = (Controllers_HumanAIController_o *)0x4295e7c;
            UVar39 = UnityEngine_Transform__get_position(_Var10.genericMethod,(MethodInfo *)0x0);
            fVar14 = UVar39.fields.z;
            pCVar5 = (__this->fields)._human;
            _Var12 = _Var10;
            if ((pCVar5 != (Characters_Human_o *)0x0) && (lVar6 = *(long *)&(pCVar5->fields).Dead, lVar6 != 0)
               ) {
              local_58._4_4_ = in_XMM1_Db;
              local_58._0_4_ = fVar14;
              fStack_50 = in_XMM1_Dc;
              fStack_4c = in_XMM1_Dd;
              _Var12 = (_union_14)((_union_14 *)(lVar6 + 0x10))->genericMethod;
              if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
                method = (MethodInfo *)0x0;
                pCStack_a0 = (Controllers_HumanAIController_o *)0x4295eaf;
                UVar39 = UnityEngine_Transform__get_position(_Var12.genericMethod,(MethodInfo *)0x0);
                fVar14 = UVar39.fields.z;
                pCVar5 = (__this->fields)._human;
                if ((pCVar5 != (Characters_Human_o *)0x0) &&
                   (lVar6 = *(long *)&(pCVar5->fields).Dead, lVar6 != 0)) {
                  pUVar9 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                  _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
                  local_28 = UVar39.fields._0_8_;
                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                    method = (MethodInfo *)0x0;
                    pCStack_a0 = (Controllers_HumanAIController_o *)0x4295ee2;
                    UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                    fVar14 = UVar39.fields.z;
                    pUVar4 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
                    _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
                    local_38 = fVar14;
                    fStack_34 = in_XMM1_Db;
                    fStack_30 = in_XMM1_Dc;
                    fStack_2c = in_XMM1_Dd;
                    if (pUVar4 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      method = (MethodInfo *)0x0;
                      pCStack_a0 = (Controllers_HumanAIController_o *)0x4295efe;
                      bVar8 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar4,(MethodInfo *)0x0);
                      if ((char)bVar8 != '\0') {
                        if (g_data_057a68cb == '\0') {
                          pCStack_a0 = (Controllers_HumanAIController_o *)0x4295f17;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a68cb = '\x01';
                        }
                        in_XMM1_Dc = local_68._4_4_ - local_28._4_4_;
                        fVar14 = (float)local_68 - (float)local_28;
                        in_XMM1_Db = (float)local_58._0_4_ - local_38;
                        in_XMM1_Dd = (float)local_58._4_4_ - fStack_34;
                        if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                          local_68 = CONCAT44((float)local_58._0_4_ - local_38,
                                              (float)local_68 - (float)local_28);
                          uStack_60 = CONCAT44((float)local_58._4_4_ - fStack_34,in_XMM1_Dc);
                          pCStack_a0 = (Controllers_HumanAIController_o *)0x4295f4b;
                          il2cpp_runtime_helper_02337ed0();
                          fVar14 = (float)local_68;
                          in_XMM1_Db = local_68._4_4_;
                          in_XMM1_Dc = (float)uStack_60;
                          in_XMM1_Dd = uStack_60._4_4_;
                        }
                        in_XMM1_Db = in_XMM1_Db * in_XMM1_Db;
                        in_XMM1_Dc = in_XMM1_Dc * in_XMM1_Dc;
                        in_XMM1_Dd = in_XMM1_Dd * in_XMM1_Dd;
                        fVar14 = fVar14 * fVar14 + 0.0;
                        auVar36._0_4_ = in_XMM1_Db + fVar14;
                        if (auVar36._0_4_ < 0.0) {
                          pCStack_a0 = (Controllers_HumanAIController_o *)0x42960f9;
                          auVar36._0_4_ = sqrtf(auVar36._0_4_);
                          if (1.0 < auVar36._0_4_) goto label_04296106;
                          goto label_04295f7f;
                        }
                        if (SQRT(auVar36._0_4_) <= 1.0) goto label_04295f7f;
label_04296106:
                        _Var12 = (_union_14)*(_union_14 *)&(__this->fields)._usePathfinding;
                        if (_Var12.genericMethod == (Controllers_HumanAIController_o *)0x0) goto label_04296350;
                        method = (MethodInfo *)0x0;
                        pCStack_a0 = (Controllers_HumanAIController_o *)0x429611d;
                        _Var10.genericMethod =
                             UnityEngine_Component__get_transform(_Var12.genericMethod,(MethodInfo *)0x0);
                        if (_Var10.genericMethod == (Controllers_HumanAIController_o *)0x0) goto label_04296350;
                        method = (MethodInfo *)0x0;
                        pCStack_a0 = (Controllers_HumanAIController_o *)0x4296130;
                        UVar39 = UnityEngine_Transform__get_position(_Var10.genericMethod,(MethodInfo *)0x0);
                        fVar14 = UVar39.fields.z;
                        pCVar5 = (__this->fields)._human;
                        _Var12 = _Var10;
                        if ((pCVar5 == (Characters_Human_o *)0x0) ||
                           (lVar6 = *(long *)&(pCVar5->fields).Dead, lVar6 == 0)) goto label_04296350;
                        uStack_80 = extraout_XMM0_Qb_00;
                        local_88 = (undefined1  [8])UVar39.fields._0_8_;
                        pUVar9 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                        _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
                        local_98 = fVar14;
                        fStack_94 = in_XMM1_Db;
                        fStack_90 = in_XMM1_Dc;
                        fStack_8c = in_XMM1_Dd;
                        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04296350;
                        method = (MethodInfo *)0x0;
                        pCStack_a0 = (Controllers_HumanAIController_o *)0x4296167;
                        UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                        auVar21._0_8_ = UVar39.fields._0_8_;
                        auVar21._8_8_ = extraout_XMM0_Qb_01;
                        fVar14 = UVar39.fields.z;
                        if (g_data_057a6845 == '\0') {
                          local_68 = CONCAT44(local_68._4_4_,UVar39.fields.z);
                          pCStack_a0 = (Controllers_HumanAIController_o *)0x429618a;
                          _local_58 = auVar21;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6845 = '\x01';
                          auVar21 = _local_58;
                          fVar14 = (float)local_68;
                        }
                        auVar34._0_4_ = (float)local_88._0_4_ - auVar21._0_4_;
                        auVar34._4_4_ = (float)local_88._4_4_ - auVar21._4_4_;
                        auVar34._8_4_ = (float)uStack_80 - auVar21._8_4_;
                        auVar34._12_4_ = uStack_80._4_4_ - auVar21._12_4_;
                        _Var12 = TypeInfo_Math;
                        auVar36._0_4_ = local_98 - fVar14;
                        if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                          pCStack_a0 = (Controllers_HumanAIController_o *)0x42961c6;
                          local_98 = local_98 - fVar14;
                          _local_88 = auVar34;
                          il2cpp_runtime_helper_02337ed0();
                          auVar36._0_4_ = local_98;
                          auVar34 = _local_88;
                        }
                        auVar22._4_4_ = fStack_94;
                        auVar22._0_4_ = auVar36._0_4_;
                        auVar22._8_4_ = fStack_90;
                        auVar22._12_4_ = fStack_8c;
                        auVar23._4_12_ = auVar22._4_12_;
                        fVar14 = auVar36._0_4_ * auVar36._0_4_ +
                                 auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
                        if (0.0 <= fVar14) {
                          auVar23._0_4_ = SQRT(fVar14);
                          if (1e-05 < auVar23._0_4_) goto label_042962f3;
label_04296208:
                          if (g_data_057a65d5 == '\0') {
                            _Var12.genericMethod = &TypeInfo_Vector3;
                            pCStack_a0 = (Controllers_HumanAIController_o *)0x429621d;
                            il2cpp_runtime_helper_023445d0();
                            g_data_057a65d5 = '\x01';
                          }
                          auVar33 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
                          auVar35._8_8_ = 0;
                          auVar35._0_8_ = auVar33;
                          fVar14 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
                          fVar15 = 0.0;
                          fVar31 = 0.0;
                          fVar32 = 0.0;
                          auVar36._0_4_ = local_98;
                          auVar36._4_4_ = fStack_94;
                          auVar36._8_4_ = fStack_90;
                          auVar36._12_4_ = fStack_8c;
                          auVar37 = _local_88;
                        }
                        else {
                          pCStack_a0 = (Controllers_HumanAIController_o *)0x42962dd;
                          local_98 = auVar36._0_4_;
                          _local_88 = auVar34;
                          auVar23._0_4_ = sqrtf(fVar14);
                          auVar23._4_12_ = extraout_var_00;
                          auVar36._0_4_ = local_98;
                          auVar34 = _local_88;
                          if (auVar23._0_4_ <= 1e-05) goto label_04296208;
label_042962f3:
                          auVar24._0_4_ = auVar23._0_4_;
                          auVar24._8_4_ = auVar23._8_4_;
                          auVar24._12_4_ = auVar23._12_4_;
                          auVar24._4_4_ = auVar24._0_4_;
                          auVar35 = divps(auVar34,auVar24);
                          auVar33 = auVar35._0_8_;
                          fVar14 = auVar36._0_4_ / auVar24._0_4_;
                          fVar15 = fStack_94;
                          fVar31 = fStack_90;
                          fVar32 = fStack_8c;
                          auVar36._0_4_ = local_98;
                          auVar36._4_4_ = fStack_94;
                          auVar36._8_4_ = fStack_90;
                          auVar36._12_4_ = fStack_8c;
                          auVar37 = _local_88;
                        }
                        goto joined_r0x04296245;
                      }
label_04295f7f:
                      pUVar4 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
                      _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
                      if (pUVar4 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        method = (MethodInfo *)0x0;
                        pCStack_a0 = (Controllers_HumanAIController_o *)0x4295f96;
                        bVar8 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar4,(MethodInfo *)0x0);
                        if ((char)bVar8 == '\0') {
label_04295fb9:
                          _Var12 = (_union_14)*(_union_14 *)&(__this->fields)._usePathfinding;
                          if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
                            method = (MethodInfo *)0x0;
                            pCStack_a0 = (Controllers_HumanAIController_o *)0x4295fd0;
                            bVar8 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh
                                              (_Var12.genericMethod,(MethodInfo *)0x0);
                            fVar14 = local_98;
                            fVar15 = fStack_94;
                            fVar31 = fStack_90;
                            fVar32 = fStack_8c;
                            auVar35 = _local_88;
                            if ((char)bVar8 == '\0') {
                              pCStack_a0 = (Controllers_HumanAIController_o *)0x4295fe5;
                              _Var12 = (_union_14)__this;
                              UVar39 = Controllers_HumanAIController__GetDirectionTowardsNavMesh
                                                 (__this,method);
                              fVar14 = UVar39.fields.z;
                              auVar35._8_4_ = extraout_XMM0_Dc_00;
                              auVar35._0_8_ = UVar39.fields._0_8_;
                              auVar35._12_4_ = extraout_XMM0_Dd_00;
                            }
                            auVar33 = auVar35._0_8_;
                            auVar36._0_4_ = local_98;
                            auVar36._4_4_ = fStack_94;
                            auVar36._8_4_ = fStack_90;
                            auVar36._12_4_ = fStack_8c;
                            auVar37 = _local_88;
joined_r0x04296245:
                            _local_88 = auVar35;
                            fStack_8c = fVar32;
                            fStack_90 = fVar31;
                            fStack_94 = fVar15;
                            local_98 = fVar14;
                            fVar14 = local_98;
                            in_XMM1_Db = fStack_94;
                            in_XMM1_Dc = fStack_90;
                            in_XMM1_Dd = fStack_8c;
                            if (g_data_057a65d5 == '\0') {
                              _Var12.genericMethod = &TypeInfo_Vector3;
                              pCStack_a0 = (Controllers_HumanAIController_o *)0x4296006;
                              il2cpp_runtime_helper_023445d0();
                              g_data_057a65d5 = '\x01';
                              fVar14 = local_98;
                              in_XMM1_Db = fStack_94;
                              in_XMM1_Dc = fStack_90;
                              in_XMM1_Dd = fStack_8c;
                              auVar33 = local_88;
                              auVar36._0_4_ = local_98;
                              auVar36._4_4_ = fStack_94;
                              auVar36._8_4_ = fStack_90;
                              auVar36._12_4_ = fStack_8c;
                              auVar37 = _local_88;
                            }
                            _local_88 = auVar37;
                            fStack_8c = auVar36._12_4_;
                            fStack_90 = auVar36._8_4_;
                            fStack_94 = auVar36._4_4_;
                            local_98 = auVar36._0_4_;
                            uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            auVar36._8_4_ = (float)((ulong)auVar33 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
                            auVar36._0_4_ = fVar14 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                            auVar36._4_4_ = SUB84(auVar33,0) - (float)uVar17;
                            auVar36._0_4_ =
                                 auVar36._4_4_ * auVar36._4_4_ + auVar36._8_4_ * auVar36._8_4_ +
                                 auVar36._0_4_ * auVar36._0_4_;
                            if (9.9999994e-11 <= auVar36._0_4_) {
                              if (9.9999994e-11 <= auVar36._0_4_) {
                                pCStack_a0 = (Controllers_HumanAIController_o *)0x429625b;
                                UVar40.fields.z = fVar14;
                                UVar40.fields.x = (float)SUB84(auVar33,0);
                                UVar40.fields.y = (float)(int)((ulong)auVar33 >> 0x20);
                                fVar14 = Controllers_BaseAIController__GetTargetAngle
                                                   ((Controllers_BaseAIController_o *)__this,UVar40,method);
label_0429625b:
                                fVar14 = fVar14 + *(float *)&(__this->fields)._agent;
                                fVar14 = (float)(~-(uint)(360.0 < fVar14) & (uint)fVar14 |
                                                (uint)(fVar14 + -360.0) & -(uint)(360.0 < fVar14));
                                return (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 |
                                              (uint)(fVar14 + 360.0) & -(uint)(fVar14 < 0.0));
                              }
                              pCVar5 = (__this->fields)._human;
                              if (pCVar5 != (Characters_Human_o *)0x0) {
                                fVar14 = *(float *)&(pCVar5->fields).Detection;
                                goto label_0429625b;
                              }
                            }
                            else {
                              pCVar5 = (__this->fields)._human;
                              if (pCVar5 != (Characters_Human_o *)0x0) {
                                return *(float *)&(pCVar5->fields).Detection;
                              }
                            }
                          }
                        }
                        else {
                          _Var12 = (_union_14)*(_union_14 *)&(__this->fields)._usePathfinding;
                          if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
                            method = (MethodInfo *)0x0;
                            pCStack_a0 = (Controllers_HumanAIController_o *)0x4295fb1;
                            bVar8 = UnityEngine_AI_NavMeshAgent__get_pathPending
                                              (_Var12.genericMethod,(MethodInfo *)0x0);
                            if ((char)bVar8 != '\0') goto label_04295fb9;
                            if (*(char *)((long)&(__this->fields)._agent + 4) == '\0') {
                              _Var12 = (_union_14)*(_union_14 *)&(__this->fields)._usePathfinding;
                              if (_Var12.genericMethod == (Controllers_HumanAIController_o *)0x0)
                              goto label_04296350;
                              method = (MethodInfo *)0x0;
                              pCStack_a0 = (Controllers_HumanAIController_o *)0x429632e;
                              UVar39.fields.z = local_6c;
                              UVar39.fields.x = (float)(undefined4)local_48;
                              UVar39.fields.y = (float)local_48._4_4_;
                              UnityEngine_AI_NavMeshAgent__SetDestination
                                        (_Var12.genericMethod,UVar39,(MethodInfo *)0x0);
                              *(undefined1 *)((long)&(__this->fields)._agent + 4) = 1;
                              auVar33 = local_88;
                              fVar14 = local_98;
                              fVar15 = fStack_94;
                              fVar31 = fStack_90;
                              fVar32 = fStack_8c;
                              auVar35 = _local_88;
                              auVar36._0_4_ = local_98;
                              auVar36._4_4_ = fStack_94;
                              auVar36._8_4_ = fStack_90;
                              auVar36._12_4_ = fStack_8c;
                              auVar37 = _local_88;
                            }
                            else {
                              auVar33 = local_88;
                              fVar14 = local_98;
                              fVar15 = fStack_94;
                              fVar31 = fStack_90;
                              fVar32 = fStack_8c;
                              auVar35 = _local_88;
                              auVar36._0_4_ = local_98;
                              auVar36._4_4_ = fStack_94;
                              auVar36._8_4_ = fStack_90;
                              auVar36._12_4_ = fStack_8c;
                              auVar37 = _local_88;
                            }
                            goto joined_r0x04296245;
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
label_04296350:
  pCStack_a0 = (Controllers_HumanAIController_o *)0x4296355;
  UVar41.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)_Var12.genericMethod + 0xc4) != '\0') {
    return (float)UVar41.fields._0_8_;
  }
  pMVar13 = (MethodInfo *)((UnityEngine_Component_Fields *)((long)_Var12.genericMethod + 0xb8))->m_CachedPtr;
  pCStack_a0 = __this;
  if (pMVar13 != (MethodInfo *)0x0) {
    _Stack_a8.genericMethod = (void *)0x4296382;
    UVar41.fields.z = fVar14;
    UnityEngine_AI_NavMeshAgent__SetDestination
              ((UnityEngine_AI_NavMeshAgent_o *)pMVar13,UVar41,(MethodInfo *)0x0);
    *(undefined1 *)((long)_Var12.genericMethod + 0xc4) = 1;
    return extraout_XMM0_Da;
  }
  _Stack_a8.genericMethod = Controllers_HumanAIController__GetDirectionTowardsNavMesh;
  il2cpp_runtime_helper_022b2c90();
  auStack_e8._16_8_ = (InvokerMethod)0x0;
  auStack_e8._24_8_ = (char *)0x0;
  auStack_e8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_e8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_e8._32_4_ = 0;
  method_01 = pMVar13;
  _Stack_a8 = _Var12;
  if ((pMVar13->return_type != (Il2CppType *)0x0) &&
     (pvVar7 = pMVar13->return_type[7].data, pvVar7 != (void *)0x0)) {
    pUVar9 = *(UnityEngine_Transform_o **)((long)pvVar7 + 0x10);
    method_01 = (MethodInfo *)0x0;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      bVar8 = UnityEngine_AI_NavMesh__SamplePosition
                        (UVar39,(UnityEngine_AI_NavMeshHit_o *)auStack_e8,100.0,-1,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        UVar39 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
        fVar14 = UVar39.fields.z;
        auVar36._0_4_ = UVar39.fields.x;
        uVar42 = (undefined4)extraout_XMM0_Qb_04;
        uVar43 = (undefined4)((ulong)extraout_XMM0_Qb_04 >> 0x20);
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
          g_data_057a6845 = '\x01';
          iVar3 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
        }
        else {
          iVar3 = *(int *)((long)TypeInfo_Math.genericMethod + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
        }
        auVar27._4_4_ = in_XMM1_Db;
        auVar27._0_4_ = fVar14;
        auVar27._8_4_ = in_XMM1_Dc;
        auVar27._12_4_ = in_XMM1_Dd;
        auVar26._4_12_ = auVar27._4_12_;
        auVar36._4_4_ = fVar14 * fVar14 + auVar36._0_4_ * auVar36._0_4_ + 0.0;
        if (auVar36._4_4_ < 0.0) {
          auVar26._0_4_ = sqrtf(auVar36._4_4_);
          auVar26._4_12_ = extraout_var_01;
          uVar16 = auVar26._0_8_;
          auVar36._4_4_ = auVar26._0_4_;
        }
        else {
          auVar26._0_4_ = SQRT(auVar36._4_4_);
          uVar16 = auVar26._0_8_;
          auVar36._4_4_ = auVar26._0_4_;
        }
        if (1e-05 < auVar36._4_4_) {
          auVar36._4_4_ = 0.0;
          auVar36._8_4_ = (float)uVar42;
          auVar36._12_4_ = (float)uVar43;
label_042965a3:
          auVar28._0_4_ = auVar26._0_4_;
          auVar28._8_4_ = auVar26._8_4_;
          auVar28._12_4_ = auVar26._12_4_;
          auVar28._4_4_ = auVar28._0_4_;
          auVar37 = divps(auVar36,auVar28);
          return auVar37._0_4_;
        }
label_042965b7:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(uVar16,fVar14,&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        return (float)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      method_01 = (MethodInfo *)auStack_e8;
      method = (MethodInfo *)0x0;
      __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffef4;
      __this_01.fields.m_Position.fields.x = (float)in_stack_fffffffffffffee8._0_4_;
      __this_01.fields.m_Position.fields.y = (float)in_stack_fffffffffffffee8._4_4_;
      __this_01.fields.m_Position.fields.z = (float)in_stack_fffffffffffffee8._8_4_;
      __this_01.fields.m_Normal.fields.y = (float)in_stack_fffffffffffffef8;
      __this_01.fields.m_Normal.fields.z = (float)in_stack_fffffffffffffefc;
      __this_01.fields.m_Distance = (float)in_stack_ffffffffffffff00;
      __this_01.fields.m_Mask = in_stack_ffffffffffffff04;
      __this_01.fields.m_Hit = in_stack_ffffffffffffff08;
      UVar39 = UnityEngine_AI_NavMeshHit__get_position(__this_01,method_01);
      fVar14 = UVar39.fields.z;
      if ((pMVar13->return_type != (Il2CppType *)0x0) &&
         (pvVar7 = pMVar13->return_type[7].data, pvVar7 != (void *)0x0)) {
        auVar36._0_4_ = UVar39.fields.x;
        auVar36._4_4_ = UVar39.fields.y;
        auVar36._8_4_ = (float)extraout_XMM0_Qb_02;
        auVar36._12_4_ = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
        pUVar9 = *(UnityEngine_Transform_o **)((long)pvVar7 + 0x10);
        method_01 = (MethodInfo *)0x0;
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          auVar25._0_8_ = UVar39.fields._0_8_;
          auVar25._8_8_ = extraout_XMM0_Qb_03;
          if (g_data_057a6845 == '\0') {
            auStack_e8._48_16_ = auVar25;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            auVar25 = auStack_e8._48_16_;
          }
          auVar36._0_4_ = auVar36._0_4_ - auVar25._0_4_;
          auVar36._4_4_ = auVar36._4_4_ - auVar25._4_4_;
          auVar36._8_4_ = auVar36._8_4_ - auVar25._8_4_;
          auVar36._12_4_ = auVar36._12_4_ - auVar25._12_4_;
          fVar14 = fVar14 - UVar39.fields.z;
          if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar15 = fVar14 * fVar14 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
          if (0.0 <= fVar15) {
            fVar15 = SQRT(fVar15);
            auVar26 = ZEXT416((uint)fVar15);
            uVar16 = (ulong)(uint)fVar15;
          }
          else {
            uVar42 = auVar36._8_4_;
            uVar43 = auVar36._12_4_;
            auVar26._0_4_ = sqrtf(fVar15);
            auVar26._4_12_ = extraout_var_02;
            uVar16 = auVar26._0_8_;
            auVar36._8_4_ = (float)uVar42;
            auVar36._12_4_ = (float)uVar43;
            fVar15 = auVar26._0_4_;
          }
          if (1e-05 < fVar15) goto label_042965a3;
          goto label_042965b7;
        }
      }
    }
  }
  direction.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  cVar2 = (char)method;
  pMVar13 = method_01;
  if (g_data_057a65d5 == '\0') {
    pMVar13 = (MethodInfo *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  auVar36._8_4_ = (float)((ulong)direction.fields._0_8_ >> 0x20) - (float)((ulong)uVar17 >> 0x20);
  auVar36._0_4_ = fVar14 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  auVar36._4_4_ = (float)direction.fields._0_8_ - (float)uVar17;
  if (9.9999994e-11 <=
      auVar36._4_4_ * auVar36._4_4_ + auVar36._8_4_ * auVar36._8_4_ + auVar36._0_4_ * auVar36._0_4_) {
    direction.fields.z = fVar14;
    fVar14 = Controllers_BaseAIController__GetTargetAngle
                       ((Controllers_BaseAIController_o *)method_01,direction,method);
joined_r0x042966fa:
    if (cVar2 != '\0') {
      fVar14 = fVar14 + *(float *)&method_01[2].invoker_method;
    }
    fVar14 = (float)(~-(uint)(360.0 < fVar14) & (uint)fVar14 |
                    (uint)(fVar14 + -360.0) & -(uint)(360.0 < fVar14));
    return (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)(fVar14 + 360.0) & -(uint)(fVar14 < 0.0));
  }
  if (method_01->return_type != (Il2CppType *)0x0) {
    fVar14 = (float)method_01->return_type[0xc].bits;
    goto joined_r0x042966fa;
  }
  auVar36._0_4_ = (float)il2cpp_runtime_helper_022b2c90();
  if (*(char *)&pMVar13[2].methodPointer == '\0') {
    return auVar36._0_4_;
  }
  _Var12 = (_union_14)pMVar13[2].virtualMethodPointer;
  if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
    method = (MethodInfo *)0x0;
    pUVar9 = UnityEngine_Component__get_transform(_Var12.genericMethod,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      method = (MethodInfo *)0x0;
      UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      fVar14 = UVar39.fields.z;
      _Var12 = (_union_14)pMVar13[2].virtualMethodPointer;
      if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
        method = (MethodInfo *)0x0;
        _Var10.genericMethod = UnityEngine_Component__get_transform(_Var12.genericMethod,(MethodInfo *)0x0);
        if (_Var10.genericMethod != (Controllers_HumanAIController_o *)0x0) {
          method = (MethodInfo *)0x0;
          UVar40 = UnityEngine_Transform__get_position(_Var10.genericMethod,(MethodInfo *)0x0);
          auVar36._0_4_ = UVar40.fields.z;
          _Var12 = _Var10;
          fVar14 = auVar36._0_4_;
          if (((pMVar13->return_type != (Il2CppType *)0x0) &&
              (pvVar7 = pMVar13->return_type[7].data, pvVar7 != (void *)0x0)) &&
             (_Var12 = (_union_14)((_union_14 *)((long)pvVar7 + 0x10))->genericMethod,
             _Var12.genericMethod != (Controllers_HumanAIController_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar40 = UnityEngine_Transform__get_position(_Var12.genericMethod,(MethodInfo *)0x0);
            fVar14 = UVar40.fields.z;
            if (((pMVar13->return_type != (Il2CppType *)0x0) &&
                (pvVar7 = pMVar13->return_type[7].data, pvVar7 != (void *)0x0)) &&
               (_Var12 = (_union_14)((_union_14 *)((long)pvVar7 + 0x10))->genericMethod,
               _Var12.genericMethod != (Controllers_HumanAIController_o *)0x0)) {
              method = (MethodInfo *)0x0;
              UVar41 = UnityEngine_Transform__get_position(_Var12.genericMethod,(MethodInfo *)0x0);
              fVar14 = UVar41.fields.z;
              if (*(char *)&pMVar13[2].methodPointer != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStackY_198 = UVar39.fields.x;
                fStackY_178 = UVar40.fields.x;
                auVar36._0_4_ = auVar36._0_4_ - fVar14;
                _Var12 = TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar14 = (fStackY_198 - fStackY_178) * (fStackY_198 - fStackY_178) + 0.0;
                auVar36._0_4_ = auVar36._0_4_ * auVar36._0_4_ + fVar14;
                if (auVar36._0_4_ < 0.0) {
                  auVar36._0_4_ = sqrtf(auVar36._0_4_);
                }
                else {
                  auVar36._0_4_ = SQRT(auVar36._0_4_);
                }
                if (0.1 < auVar36._0_4_) {
                  _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
                  if ((UnityEngine_Behaviour_o *)pMVar13[2].virtualMethodPointer !=
                      (UnityEngine_Behaviour_o *)0x0) {
                    method = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)pMVar13[2].virtualMethodPointer,0,(MethodInfo *)0x0)
                    ;
                    _Var12 = (_union_14)pMVar13[2].virtualMethodPointer;
                    if (_Var12.genericMethod != (Controllers_HumanAIController_o *)0x0) {
                      method = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled(_Var12.genericMethod,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              if (((pMVar13->return_type != (Il2CppType *)0x0) &&
                  (pvVar7 = pMVar13->return_type[7].data, pvVar7 != (void *)0x0)) &&
                 (_Var12 = (_union_14)((_union_14 *)((long)pvVar7 + 0x10))->genericMethod,
                 _Var12.genericMethod != (Controllers_HumanAIController_o *)0x0)) {
                pUVar4 = (UnityEngine_AI_NavMeshAgent_o *)pMVar13[2].virtualMethodPointer;
                method = (MethodInfo *)0x0;
                UVar39 = UnityEngine_Transform__get_position(_Var12.genericMethod,(MethodInfo *)0x0);
                fVar14 = UVar39.fields.z;
                if (pUVar4 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar4,UVar39,(MethodInfo *)0x0);
                  return extraout_XMM0_Da_00;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar17 = il2cpp_runtime_helper_022b2c90();
  _Var10 = _Var12;
  if ((*(Characters_BaseCharacter_o **)((long)_Var12.genericMethod + 0x20) !=
       (Characters_BaseCharacter_o *)0x0) &&
     (lVar6 = *(long *)&((*(Characters_BaseCharacter_o **)((long)_Var12.genericMethod + 0x20))->fields).Dead,
     lVar6 != 0)) {
    pUVar9 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
    _Var10.genericMethod = (Controllers_HumanAIController_o *)0x0;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      cVar2 = (char)method;
      method = (MethodInfo *)0x0;
      UVar39 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStackY_1e0 = (float)uVar17;
      fStackY_1dc = (float)((ulong)uVar17 >> 0x20);
      fStackY_1d8 = (float)extraout_XMM0_Qb_05;
      fStackY_1d4 = (float)((ulong)extraout_XMM0_Qb_05 >> 0x20);
      auVar38._0_4_ = fStackY_1e0 - UVar39.fields.x;
      auVar38._4_4_ = fStackY_1dc - UVar39.fields.y;
      auVar38._8_4_ = fStackY_1d8 - (float)extraout_XMM0_Qb_06;
      auVar38._12_4_ = fStackY_1d4 - (float)((ulong)extraout_XMM0_Qb_06 >> 0x20);
      fVar14 = fVar14 - UVar39.fields.z;
      _Var10 = TypeInfo_Math;
      if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar36._0_4_ = fVar14 * fVar14 + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_;
      if (auVar36._0_4_ < 0.0) {
        auVar29._0_4_ = sqrtf(auVar36._0_4_);
        auVar29._4_12_ = extraout_var_03;
        if (auVar29._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar30._0_4_ = auVar29._0_4_;
        fVar14 = fVar14 / auVar30._0_4_;
        auVar30._8_4_ = auVar29._8_4_;
        auVar30._12_4_ = auVar29._12_4_;
        auVar30._4_4_ = auVar30._0_4_;
        auVar37 = divps(auVar38,auVar30);
        uVar17 = auVar37._0_8_;
        if (g_data_057a65d5 == '\0') {
          _Var10.genericMethod = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar29 = ZEXT416((uint)SQRT(auVar36._0_4_));
        if (1e-05 < SQRT(auVar36._0_4_)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          _Var10.genericMethod = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar36._8_4_ = (float)uVar17 - (float)uVar1;
      auVar36._4_4_ = (float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      auVar36._0_4_ = fVar14 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <=
          auVar36._0_4_ * auVar36._0_4_ + auVar36._4_4_ * auVar36._4_4_ + auVar36._8_4_ * auVar36._8_4_) {
        direction_00.fields.z = fVar14;
        direction_00.fields.x = (float)(int)uVar17;
        direction_00.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
        fVar14 = Controllers_BaseAIController__GetTargetAngle(_Var12.genericMethod,direction_00,method);
joined_r0x04296b3d:
        if (cVar2 != '\0') {
          fVar14 = fVar14 + *(float *)((long)_Var12.genericMethod + 0xc0);
        }
        fVar14 = (float)(~-(uint)(360.0 < fVar14) & (uint)fVar14 |
                        (uint)(fVar14 + -360.0) & -(uint)(360.0 < fVar14));
        return (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)(fVar14 + 360.0) & -(uint)(fVar14 < 0.0))
        ;
      }
      if (*(Characters_Human_o **)((long)_Var12.genericMethod + 0x28) != (Characters_Human_o *)0x0) {
        fVar14 = *(float *)&((*(Characters_Human_o **)((long)_Var12.genericMethod + 0x28))->fields).Detection;
        goto joined_r0x04296b3d;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = *(Characters_Human_o **)((long)_Var10.genericMethod + 0x28);
  _Var12 = _Var10;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar5->fields).Detection + 4) = 1;
  if (((((char)(pCVar5->fields).IsRefillable == '\0') || (*(int *)&(pCVar5->fields).Weapon != 0)) ||
      ((pCVar5->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar5->fields).Animation + 4) == '\0')) {
    (pCVar5->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)((long)_Var10.genericMethod + 0xb0);
  }
  else {
    (pCVar5->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)((long)_Var10.genericMethod + 0xb0);
  }
  if (cVar2 == '\0') {
    fVar14 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)((long)_Var10.genericMethod + 0xc0) = fVar14;
    pCVar5 = *(Characters_Human_o **)((long)_Var10.genericMethod + 0x28);
    method = (MethodInfo *)0x1;
    fVar14 = Controllers_HumanAIController__GetChaseAngle
                       (_Var10.genericMethod,
                        (UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)((long)_Var10.genericMethod + 0x60),1,method_00);
  }
  else {
    *(undefined1 *)((long)_Var10.genericMethod + 0xc4) = 0;
    lVar6 = *(long *)&(pCVar5->fields).Dead;
    if (lVar6 == 0) goto label_04296d95;
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar6 + 0x18);
    _Var12.genericMethod = (Controllers_HumanAIController_o *)0x0;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar4 = *(UnityEngine_AI_NavMeshAgent_o **)((long)_Var10.genericMethod + 0xb8);
    method = (MethodInfo *)0x0;
    UVar39 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    _Var12 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar14 = UVar39.fields.z * UVar39.fields.z +
             UVar39.fields.y * UVar39.fields.y + UVar39.fields.x * UVar39.fields.x;
    if (fVar14 < 0.0) {
      fVar14 = sqrtf(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (pUVar4 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar4,fVar14,(MethodInfo *)0x0);
    fVar14 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)((long)_Var10.genericMethod + 0xc0) = fVar14;
    pCVar5 = *(Characters_Human_o **)((long)_Var10.genericMethod + 0x28);
    _Var12 = _Var10;
    fVar14 = Controllers_HumanAIController__GetAgentNavAngle
                       (_Var10.genericMethod,
                        (UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)((long)_Var10.genericMethod + 0x60),method);
  }
  if (pCVar5 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar5->fields).Detection = fVar14;
    Controllers_HumanAIController__RefreshAgent(_Var10.genericMethod,method);
    return extraout_XMM0_Da_01;
  }
label_04296d95:
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar13 = *(void **)((long)_Var12.genericMethod + 0x98);
  if (method != pMVar13) {
    ppvVar11 = (void **)((long)_Var12.genericMethod + 0x98);
    if (method != (MethodInfo *)0x0) {
      (**(code **)(method->methodPointer + 0x198))(method,*(undefined8 *)(method->methodPointer + 0x1a0));
      pMVar13 = *ppvVar11;
    }
    *ppvVar11 = method;
    fVar14 = (float)il2cpp_runtime_helper_022b4080(ppvVar11,method);
    if (pMVar13 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar13->methodPointer + 0x1b8);
      fVar14 = (float)(*vtableDispatch)
                                (pMVar13,*(undefined8 *)(pMVar13->methodPointer + 0x1c0),extraout_RDX,
                                 vtableDispatch);
      return fVar14;
    }
  }
  return fVar14;
}


// Controllers.HumanAIController$$GetDirectionTowardsNavMesh
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__GetDirectionTowardsNavMesh (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4296390

UnityEngine_Vector3_o
Controllers_HumanAIController__GetDirectionTowardsNavMesh
          (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  Characters_Human_o *pCVar4;
  long lVar5;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar6;
  Characters_BaseCharacter_o *pCVar7;
  UnityEngine_Rigidbody_o *__this_01;
  code *vtableDispatch;
  UnityEngine_AI_NavMeshHit_o __this_02;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  Controllers_HumanAIController_o *__this_03;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  float *pfVar10;
  Controllers_HumanAIController_o *pCVar11;
  Controllers_HumanAIController_o *pCVar12;
  MethodInfo *pMVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar18 [16];
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar19 [16];
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar20 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar21 [16];
  float in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  float fStackY_140;
  float fStackY_13c;
  float fStackY_138;
  float fStackY_134;
  float fStackY_f8;
  float fStackY_d8;
  undefined1 in_stack_ffffffffffffff88 [12];
  undefined4 in_stack_ffffffffffffff94;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffff9c;
  undefined4 in_stack_ffffffffffffffa0;
  undefined4 uVar33;
  undefined4 in_stack_ffffffffffffffa4;
  undefined4 uVar34;
  int32_t in_stack_ffffffffffffffa8;
  undefined1 local_48 [64];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb_00;
  
  local_48._16_8_ = 0;
  local_48._24_8_ = (System_Threading_CancellationTokenSource_o *)0x0;
  local_48._0_8_ = (Controllers_HumanAIController_c *)0x0;
  local_48._8_8_ = (void *)0x0;
  local_48._32_4_ = 0;
  pCVar4 = (__this->fields)._human;
  pCVar11 = __this;
  if ((pCVar4 != (Characters_Human_o *)0x0) && (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 != 0)) {
    pUVar9 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
    pCVar11 = (Controllers_HumanAIController_o *)0x0;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar24 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      bVar8 = UnityEngine_AI_NavMesh__SamplePosition
                        (UVar24,(UnityEngine_AI_NavMeshHit_o *)local_48,100.0,-1,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        UVar24 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
        in_XMM1_Da = UVar24.fields.z;
        auVar22._0_4_ = UVar24.fields.x;
        uVar33 = (undefined4)extraout_XMM0_Qb_01;
        uVar34 = (undefined4)((ulong)extraout_XMM0_Qb_01 >> 0x20);
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          g_data_057a6845 = '\x01';
          iVar3 = *(int *)((long)&TypeInfo_Math[1].monitor + 4);
        }
        else {
          iVar3 = *(int *)((long)&TypeInfo_Math[1].monitor + 4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        }
        auVar18._4_4_ = in_XMM1_Db;
        auVar18._0_4_ = in_XMM1_Da;
        auVar18._8_4_ = in_XMM1_Dc;
        auVar18._12_4_ = in_XMM1_Dd;
        auVar17._4_12_ = auVar18._4_12_;
        auVar22._4_4_ = in_XMM1_Da * in_XMM1_Da + auVar22._0_4_ * auVar22._0_4_ + 0.0;
        if (auVar22._4_4_ < 0.0) {
          auVar17._0_4_ = sqrtf(auVar22._4_4_);
          auVar17._4_12_ = extraout_var;
          auVar22._4_4_ = auVar17._0_4_;
        }
        else {
          auVar17._0_4_ = SQRT(auVar22._4_4_);
          auVar22._4_4_ = auVar17._0_4_;
        }
        if (1e-05 < auVar22._4_4_) {
          auVar22._4_4_ = 0.0;
          auVar22._8_4_ = (float)uVar33;
          auVar22._12_4_ = (float)uVar34;
label_042965a3:
          auVar19._0_4_ = auVar17._0_4_;
          UVar24.fields.z = in_XMM1_Da / auVar19._0_4_;
          auVar19._8_4_ = auVar17._8_4_;
          auVar19._12_4_ = auVar17._12_4_;
          auVar19._4_4_ = auVar19._0_4_;
          auVar22 = divps(auVar22,auVar19);
          UVar24.fields._0_8_ = auVar22._0_8_;
          return (UnityEngine_Vector3_o)UVar24.fields;
        }
label_042965b7:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
      }
      pCVar11 = (Controllers_HumanAIController_o *)local_48;
      method = (MethodInfo *)0x0;
      __this_02.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff94;
      __this_02.fields.m_Position.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
      __this_02.fields.m_Position.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
      __this_02.fields.m_Position.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
      __this_02.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff98;
      __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff9c;
      __this_02.fields.m_Distance = (float)in_stack_ffffffffffffffa0;
      __this_02.fields.m_Mask = in_stack_ffffffffffffffa4;
      __this_02.fields.m_Hit = in_stack_ffffffffffffffa8;
      UVar24 = UnityEngine_AI_NavMeshHit__get_position(__this_02,(MethodInfo *)pCVar11);
      in_XMM1_Da = UVar24.fields.z;
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 != (Characters_Human_o *)0x0) && (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 != 0)) {
        auVar22._0_4_ = UVar24.fields.x;
        auVar22._4_4_ = UVar24.fields.y;
        auVar22._8_4_ = (float)extraout_XMM0_Qb;
        auVar22._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20);
        pUVar9 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
        pCVar11 = (Controllers_HumanAIController_o *)0x0;
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar24 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          auVar16._0_8_ = UVar24.fields._0_8_;
          auVar16._8_8_ = extraout_XMM0_Qb_00;
          if (g_data_057a6845 == '\0') {
            local_48._48_16_ = auVar16;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            auVar16 = local_48._48_16_;
          }
          auVar22._0_4_ = auVar22._0_4_ - auVar16._0_4_;
          auVar22._4_4_ = auVar22._4_4_ - auVar16._4_4_;
          auVar22._8_4_ = auVar22._8_4_ - auVar16._8_4_;
          auVar22._12_4_ = auVar22._12_4_ - auVar16._12_4_;
          in_XMM1_Da = in_XMM1_Da - UVar24.fields.z;
          if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar14 = in_XMM1_Da * in_XMM1_Da + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
          if (0.0 <= fVar14) {
            auVar17 = ZEXT416((uint)SQRT(fVar14));
            fVar14 = SQRT(fVar14);
          }
          else {
            uVar33 = auVar22._8_4_;
            uVar34 = auVar22._12_4_;
            auVar17._0_4_ = sqrtf(fVar14);
            auVar17._4_12_ = extraout_var_00;
            auVar22._8_4_ = (float)uVar33;
            auVar22._12_4_ = (float)uVar34;
            fVar14 = auVar17._0_4_;
          }
          if (1e-05 < fVar14) goto label_042965a3;
          goto label_042965b7;
        }
      }
    }
  }
  UVar26.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  cVar2 = (char)method;
  pCVar12 = pCVar11;
  if (g_data_057a65d5 == '\0') {
    pCVar12 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  auVar22._8_4_ = (float)((ulong)UVar26.fields._0_8_ >> 0x20) - (float)((ulong)uVar15 >> 0x20);
  auVar22._0_4_ = in_XMM1_Da - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  auVar22._4_4_ = (float)UVar26.fields._0_8_ - (float)uVar15;
  if (9.9999994e-11 <=
      auVar22._4_4_ * auVar22._4_4_ + auVar22._8_4_ * auVar22._8_4_ + auVar22._0_4_ * auVar22._0_4_) {
    UVar26.fields.z = in_XMM1_Da;
    auVar22._0_4_ =
         Controllers_BaseAIController__GetTargetAngle((Controllers_BaseAIController_o *)pCVar11,UVar26,method)
    ;
joined_r0x042966fa:
    if (cVar2 != '\0') {
      auVar22._0_4_ = auVar22._0_4_ + *(float *)&(pCVar11->fields)._agent;
    }
    auVar22._0_4_ =
         (float)(~-(uint)(360.0 < auVar22._0_4_) & (uint)auVar22._0_4_ |
                (uint)(auVar22._0_4_ + -360.0) & -(uint)(360.0 < auVar22._0_4_));
    UVar25.fields.y = 0.0;
    UVar25.fields.z = 0.0;
    UVar25.fields.x =
         (float)(~-(uint)(auVar22._0_4_ < 0.0) & (uint)auVar22._0_4_ |
                (uint)(auVar22._0_4_ + 360.0) & -(uint)(auVar22._0_4_ < 0.0));
    return (UnityEngine_Vector3_o)UVar25.fields;
  }
  pCVar4 = (pCVar11->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    auVar22._0_4_ = *(float *)&(pCVar4->fields).Detection;
    goto joined_r0x042966fa;
  }
  UVar27.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(pCVar12->fields).AIStates == '\0') {
    UVar27.fields.z = in_XMM1_Da;
    return (UnityEngine_Vector3_o)UVar27.fields;
  }
  pCVar11 = *(Controllers_HumanAIController_o **)&(pCVar12->fields)._usePathfinding;
  if (pCVar11 != (Controllers_HumanAIController_o *)0x0) {
    method = (MethodInfo *)0x0;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      method = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      in_XMM1_Da = UVar24.fields.z;
      pCVar11 = *(Controllers_HumanAIController_o **)&(pCVar12->fields)._usePathfinding;
      if (pCVar11 != (Controllers_HumanAIController_o *)0x0) {
        method = (MethodInfo *)0x0;
        __this_03 = (Controllers_HumanAIController_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0)
        ;
        if (__this_03 != (Controllers_HumanAIController_o *)0x0) {
          method = (MethodInfo *)0x0;
          UVar26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0)
          ;
          auVar22._0_4_ = UVar26.fields.z;
          pCVar4 = (pCVar12->fields)._human;
          pCVar11 = __this_03;
          in_XMM1_Da = auVar22._0_4_;
          if (((pCVar4 != (Characters_Human_o *)0x0) && (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 != 0))
             && (pCVar11 = *(Controllers_HumanAIController_o **)(lVar5 + 0x10),
                pCVar11 != (Controllers_HumanAIController_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar11,(MethodInfo *)0x0)
            ;
            in_XMM1_Da = UVar26.fields.z;
            pCVar4 = (pCVar12->fields)._human;
            if (((pCVar4 != (Characters_Human_o *)0x0) &&
                (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 != 0)) &&
               (pCVar11 = *(Controllers_HumanAIController_o **)(lVar5 + 0x10),
               pCVar11 != (Controllers_HumanAIController_o *)0x0)) {
              method = (MethodInfo *)0x0;
              UVar27 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar11,(MethodInfo *)0x0);
              in_XMM1_Da = UVar27.fields.z;
              if (*(char *)&(pCVar12->fields).AIStates != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStackY_f8 = UVar24.fields.x;
                fStackY_d8 = UVar26.fields.x;
                auVar22._0_4_ = auVar22._0_4_ - in_XMM1_Da;
                pCVar11 = TypeInfo_Math;
                if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_XMM1_Da = (fStackY_f8 - fStackY_d8) * (fStackY_f8 - fStackY_d8) + 0.0;
                auVar22._0_4_ = auVar22._0_4_ * auVar22._0_4_ + in_XMM1_Da;
                if (auVar22._0_4_ < 0.0) {
                  auVar22._0_4_ = sqrtf(auVar22._0_4_);
                }
                else {
                  auVar22._0_4_ = SQRT(auVar22._0_4_);
                }
                if (0.1 < auVar22._0_4_) {
                  __this_00 = *(UnityEngine_Behaviour_o **)&(pCVar12->fields)._usePathfinding;
                  pCVar11 = (Controllers_HumanAIController_o *)0x0;
                  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
                    method = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
                    pCVar11 = *(Controllers_HumanAIController_o **)&(pCVar12->fields)._usePathfinding;
                    if (pCVar11 != (Controllers_HumanAIController_o *)0x0) {
                      method = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pCVar11,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              pCVar4 = (pCVar12->fields)._human;
              if (((pCVar4 != (Characters_Human_o *)0x0) &&
                  (lVar5 = *(long *)&(pCVar4->fields).Dead, lVar5 != 0)) &&
                 (pCVar11 = *(Controllers_HumanAIController_o **)(lVar5 + 0x10),
                 pCVar11 != (Controllers_HumanAIController_o *)0x0)) {
                pUVar6 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar12->fields)._usePathfinding;
                method = (MethodInfo *)0x0;
                UVar24 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar11,(MethodInfo *)0x0);
                in_XMM1_Da = UVar24.fields.z;
                if (pUVar6 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar6,UVar24,(MethodInfo *)0x0);
                  UVar28.fields.z = in_XMM1_Da;
                  UVar28.fields.x = (float)(int)extraout_XMM0_Qa;
                  UVar28.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
                  return (UnityEngine_Vector3_o)UVar28.fields;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar15 = il2cpp_runtime_helper_022b2c90();
  pCVar7 = (pCVar11->fields)._character;
  pCVar12 = pCVar11;
  if ((pCVar7 != (Characters_BaseCharacter_o *)0x0) && (lVar5 = *(long *)&(pCVar7->fields).Dead, lVar5 != 0))
  {
    pUVar9 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
    pCVar12 = (Controllers_HumanAIController_o *)0x0;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      cVar2 = (char)method;
      method = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStackY_140 = (float)uVar15;
      fStackY_13c = (float)((ulong)uVar15 >> 0x20);
      fStackY_138 = (float)extraout_XMM0_Qb_02;
      fStackY_134 = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
      auVar23._0_4_ = fStackY_140 - UVar24.fields.x;
      auVar23._4_4_ = fStackY_13c - UVar24.fields.y;
      auVar23._8_4_ = fStackY_138 - (float)extraout_XMM0_Qb_03;
      auVar23._12_4_ = fStackY_134 - (float)((ulong)extraout_XMM0_Qb_03 >> 0x20);
      in_XMM1_Da = in_XMM1_Da - UVar24.fields.z;
      pCVar12 = TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar22._0_4_ = in_XMM1_Da * in_XMM1_Da + auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_;
      if (auVar22._0_4_ < 0.0) {
        auVar20._0_4_ = sqrtf(auVar22._0_4_);
        auVar20._4_12_ = extraout_var_01;
        if (auVar20._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar21._0_4_ = auVar20._0_4_;
        in_XMM1_Da = in_XMM1_Da / auVar21._0_4_;
        auVar21._8_4_ = auVar20._8_4_;
        auVar21._12_4_ = auVar20._12_4_;
        auVar21._4_4_ = auVar21._0_4_;
        auVar22 = divps(auVar23,auVar21);
        uVar15 = auVar22._0_8_;
        if (g_data_057a65d5 == '\0') {
          pCVar12 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar20 = ZEXT416((uint)SQRT(auVar22._0_4_));
        if (1e-05 < SQRT(auVar22._0_4_)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          pCVar12 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar22._8_4_ = (float)uVar15 - (float)uVar1;
      auVar22._4_4_ = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      auVar22._0_4_ = in_XMM1_Da - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <=
          auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ + auVar22._8_4_ * auVar22._8_4_) {
        direction.fields.z = in_XMM1_Da;
        direction.fields.x = (float)(int)uVar15;
        direction.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
        auVar22._0_4_ =
             Controllers_BaseAIController__GetTargetAngle
                       ((Controllers_BaseAIController_o *)pCVar11,direction,method);
joined_r0x04296b3d:
        if (cVar2 != '\0') {
          auVar22._0_4_ = auVar22._0_4_ + *(float *)&(pCVar11->fields)._agent;
        }
        auVar22._0_4_ =
             (float)(~-(uint)(360.0 < auVar22._0_4_) & (uint)auVar22._0_4_ |
                    (uint)(auVar22._0_4_ + -360.0) & -(uint)(360.0 < auVar22._0_4_));
        UVar29.fields.y = 0.0;
        UVar29.fields.z = 0.0;
        UVar29.fields.x =
             (float)(~-(uint)(auVar22._0_4_ < 0.0) & (uint)auVar22._0_4_ |
                    (uint)(auVar22._0_4_ + 360.0) & -(uint)(auVar22._0_4_ < 0.0));
        return (UnityEngine_Vector3_o)UVar29.fields;
      }
      pCVar4 = (pCVar11->fields)._human;
      if (pCVar4 != (Characters_Human_o *)0x0) {
        auVar22._0_4_ = *(float *)&(pCVar4->fields).Detection;
        goto joined_r0x04296b3d;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = (pCVar12->fields)._human;
  pCVar11 = pCVar12;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 1;
  if (((((char)(pCVar4->fields).IsRefillable == '\0') || (*(int *)&(pCVar4->fields).Weapon != 0)) ||
      ((pCVar4->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar4->fields).Animation + 4) == '\0')) {
    (pCVar4->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)&(pCVar12->fields).AIStates;
  }
  else {
    (pCVar4->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)&(pCVar12->fields).AIStates;
  }
  if (cVar2 == '\0') {
    auVar22._0_4_ = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(pCVar12->fields)._agent = auVar22._0_4_;
    pCVar4 = (pCVar12->fields)._human;
    in_XMM1_Da = (pCVar12->fields).TargetPosition.fields.x;
    method = (MethodInfo *)0x1;
    auVar22._0_4_ =
         Controllers_HumanAIController__GetChaseAngle
                   (pCVar12,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar12->fields)._target,1
                    ,method_00);
  }
  else {
    *(undefined1 *)((long)&(pCVar12->fields)._agent + 4) = 0;
    lVar5 = *(long *)&(pCVar4->fields).Dead;
    if (lVar5 == 0) goto label_04296d95;
    __this_01 = *(UnityEngine_Rigidbody_o **)(lVar5 + 0x18);
    pCVar11 = (Controllers_HumanAIController_o *)0x0;
    if (__this_01 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar6 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar12->fields)._usePathfinding;
    method = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar11 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    in_XMM1_Da = UVar24.fields.z * UVar24.fields.z +
                 UVar24.fields.y * UVar24.fields.y + UVar24.fields.x * UVar24.fields.x;
    if (in_XMM1_Da < 0.0) {
      auVar22._0_4_ = sqrtf(in_XMM1_Da);
    }
    else {
      auVar22._0_4_ = SQRT(in_XMM1_Da);
    }
    if (pUVar6 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar6,auVar22._0_4_,(MethodInfo *)0x0);
    auVar22._0_4_ = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(pCVar12->fields)._agent = auVar22._0_4_;
    pCVar4 = (pCVar12->fields)._human;
    in_XMM1_Da = (pCVar12->fields).TargetPosition.fields.x;
    pCVar11 = pCVar12;
    auVar22._0_4_ =
         Controllers_HumanAIController__GetAgentNavAngle
                   (pCVar12,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar12->fields)._target,
                    method);
  }
  if (pCVar4 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar4->fields).Detection = auVar22._0_4_;
    Controllers_HumanAIController__RefreshAgent(pCVar12,method);
    UVar30.fields.z = in_XMM1_Da;
    UVar30.fields.x = (float)(int)extraout_XMM0_Qa_00;
    UVar30.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_00 >> 0x20);
    return (UnityEngine_Vector3_o)UVar30.fields;
  }
label_04296d95:
  uVar15 = il2cpp_runtime_helper_022b2c90();
  pMVar13 = *(MethodInfo **)&(pCVar11->fields).TargetVelocity.fields.z;
  if (method != pMVar13) {
    pfVar10 = &(pCVar11->fields).TargetVelocity.fields.z;
    if (method != (MethodInfo *)0x0) {
      (**(code **)(method->methodPointer + 0x198))(method,*(undefined8 *)(method->methodPointer + 0x1a0));
      pMVar13 = *(MethodInfo **)pfVar10;
    }
    *(MethodInfo **)pfVar10 = method;
    uVar15 = il2cpp_runtime_helper_022b4080(pfVar10,method);
    if (pMVar13 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar13->methodPointer + 0x1b8);
      UVar31.fields._0_8_ =
           (*vtableDispatch)
                     (pMVar13,*(undefined8 *)(pMVar13->methodPointer + 0x1c0),extraout_RDX,
                      vtableDispatch);
      UVar31.fields.z = in_XMM1_Da;
      return (UnityEngine_Vector3_o)UVar31.fields;
    }
  }
  UVar32.fields.z = in_XMM1_Da;
  UVar32.fields.x = (float)(int)uVar15;
  UVar32.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
  return (UnityEngine_Vector3_o)UVar32.fields;
}


// Controllers.HumanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_HumanAIController__GetChaseAngleGivenDirection (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x4296640

float Controllers_HumanAIController__GetChaseAngleGivenDirection
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o direction,
                bool_conflict useMoveAngle,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Characters_Human_o *pCVar3;
  long lVar4;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  UnityEngine_Rigidbody_o *__this_01;
  code *vtableDispatch;
  UnityEngine_Transform_o *pUVar7;
  Controllers_HumanAIController_o *__this_02;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  float *pfVar8;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  Controllers_HumanAIController_o *pCVar9;
  Controllers_HumanAIController_o *pCVar10;
  MethodInfo *pMVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar16;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 extraout_var [12];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_80;
  float fStack_60;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,useMoveAngle);
  fVar18 = direction.fields.z;
  pCVar9 = __this;
  if (g_data_057a65d5 == '\0') {
    pCVar9 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar17 = direction.fields.y - (float)((ulong)uVar13 >> 0x20);
  fVar12 = fVar18 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  fVar16 = direction.fields.x - (float)uVar13;
  if (9.9999994e-11 <= fVar16 * fVar16 + fVar17 * fVar17 + fVar12 * fVar12) {
    fVar18 = Controllers_BaseAIController__GetTargetAngle
                       ((Controllers_BaseAIController_o *)__this,direction,method_01);
joined_r0x042966fa:
    if ((char)useMoveAngle != '\0') {
      fVar18 = fVar18 + *(float *)&(__this->fields)._agent;
    }
    fVar18 = (float)(~-(uint)(360.0 < fVar18) & (uint)fVar18 |
                    (uint)(fVar18 + -360.0) & -(uint)(360.0 < fVar18));
    return (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 | (uint)(fVar18 + 360.0) & -(uint)(fVar18 < 0.0));
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    fVar18 = *(float *)&(pCVar3->fields).Detection;
    goto joined_r0x042966fa;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(pCVar9->fields).AIStates == '\0') {
    return fVar12;
  }
  pCVar10 = *(Controllers_HumanAIController_o **)&(pCVar9->fields)._usePathfinding;
  if (pCVar10 != (Controllers_HumanAIController_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      UVar20 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      fVar18 = UVar20.fields.z;
      pCVar10 = *(Controllers_HumanAIController_o **)&(pCVar9->fields)._usePathfinding;
      if (pCVar10 != (Controllers_HumanAIController_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        __this_02 = (Controllers_HumanAIController_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0)
        ;
        if (__this_02 != (Controllers_HumanAIController_o *)0x0) {
          method_01 = (MethodInfo *)0x0;
          UVar21 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0)
          ;
          fVar12 = UVar21.fields.z;
          pCVar3 = (pCVar9->fields)._human;
          pCVar10 = __this_02;
          fVar18 = fVar12;
          if (((pCVar3 != (Characters_Human_o *)0x0) && (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0))
             && (pCVar10 = *(Controllers_HumanAIController_o **)(lVar4 + 0x10),
                pCVar10 != (Controllers_HumanAIController_o *)0x0)) {
            method_01 = (MethodInfo *)0x0;
            UVar21 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0)
            ;
            fVar18 = UVar21.fields.z;
            pCVar3 = (pCVar9->fields)._human;
            if (((pCVar3 != (Characters_Human_o *)0x0) &&
                (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
               (pCVar10 = *(Controllers_HumanAIController_o **)(lVar4 + 0x10),
               pCVar10 != (Controllers_HumanAIController_o *)0x0)) {
              method_01 = (MethodInfo *)0x0;
              UVar22 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
              fVar18 = UVar22.fields.z;
              if (*(char *)&(pCVar9->fields).AIStates != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStack_80 = UVar20.fields.x;
                fStack_60 = UVar21.fields.x;
                fVar12 = fVar12 - fVar18;
                pCVar10 = TypeInfo_Math;
                if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar18 = (fStack_80 - fStack_60) * (fStack_80 - fStack_60) + 0.0;
                fVar12 = fVar12 * fVar12 + fVar18;
                if (fVar12 < 0.0) {
                  fVar12 = sqrtf(fVar12);
                }
                else {
                  fVar12 = SQRT(fVar12);
                }
                if (0.1 < fVar12) {
                  __this_00 = *(UnityEngine_Behaviour_o **)&(pCVar9->fields)._usePathfinding;
                  pCVar10 = (Controllers_HumanAIController_o *)0x0;
                  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
                    method_01 = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
                    pCVar10 = *(Controllers_HumanAIController_o **)&(pCVar9->fields)._usePathfinding;
                    if (pCVar10 != (Controllers_HumanAIController_o *)0x0) {
                      method_01 = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pCVar10,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              pCVar3 = (pCVar9->fields)._human;
              if (((pCVar3 != (Characters_Human_o *)0x0) &&
                  (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
                 (pCVar10 = *(Controllers_HumanAIController_o **)(lVar4 + 0x10),
                 pCVar10 != (Controllers_HumanAIController_o *)0x0)) {
                pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar9->fields)._usePathfinding;
                method_01 = (MethodInfo *)0x0;
                UVar20 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
                fVar18 = UVar20.fields.z;
                if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar5,UVar20,(MethodInfo *)0x0);
                  return extraout_XMM0_Da;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar13 = il2cpp_runtime_helper_022b2c90();
  pCVar6 = (pCVar10->fields)._character;
  pCVar9 = pCVar10;
  if ((pCVar6 != (Characters_BaseCharacter_o *)0x0) && (lVar4 = *(long *)&(pCVar6->fields).Dead, lVar4 != 0))
  {
    pUVar7 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
    pCVar9 = (Controllers_HumanAIController_o *)0x0;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      cVar2 = (char)method_01;
      method_01 = (MethodInfo *)0x0;
      UVar20 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStack_c8 = (float)uVar13;
      fStack_c4 = (float)((ulong)uVar13 >> 0x20);
      fStack_c0 = (float)extraout_XMM0_Qb;
      fStack_bc = (float)((ulong)extraout_XMM0_Qb >> 0x20);
      auVar19._0_4_ = fStack_c8 - UVar20.fields.x;
      auVar19._4_4_ = fStack_c4 - UVar20.fields.y;
      auVar19._8_4_ = fStack_c0 - (float)extraout_XMM0_Qb_00;
      auVar19._12_4_ = fStack_bc - (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
      fVar18 = fVar18 - UVar20.fields.z;
      pCVar9 = TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar12 = fVar18 * fVar18 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
      if (fVar12 < 0.0) {
        auVar14._0_4_ = sqrtf(fVar12);
        auVar14._4_12_ = extraout_var;
        if (auVar14._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar15._0_4_ = auVar14._0_4_;
        fVar18 = fVar18 / auVar15._0_4_;
        auVar15._8_4_ = auVar14._8_4_;
        auVar15._12_4_ = auVar14._12_4_;
        auVar15._4_4_ = auVar15._0_4_;
        auVar19 = divps(auVar19,auVar15);
        uVar13 = auVar19._0_8_;
        if (g_data_057a65d5 == '\0') {
          pCVar9 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar14 = ZEXT416((uint)SQRT(fVar12));
        if (1e-05 < SQRT(fVar12)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          pCVar9 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar17 = (float)uVar13 - (float)uVar1;
      fVar16 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      fVar12 = fVar18 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <= fVar12 * fVar12 + fVar16 * fVar16 + fVar17 * fVar17) {
        UVar20.fields.z = fVar18;
        UVar20.fields.x = (float)(int)uVar13;
        UVar20.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
        fVar18 = Controllers_BaseAIController__GetTargetAngle
                           ((Controllers_BaseAIController_o *)pCVar10,UVar20,method_01);
joined_r0x04296b3d:
        if (cVar2 != '\0') {
          fVar18 = fVar18 + *(float *)&(pCVar10->fields)._agent;
        }
        fVar18 = (float)(~-(uint)(360.0 < fVar18) & (uint)fVar18 |
                        (uint)(fVar18 + -360.0) & -(uint)(360.0 < fVar18));
        return (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 | (uint)(fVar18 + 360.0) & -(uint)(fVar18 < 0.0))
        ;
      }
      pCVar3 = (pCVar10->fields)._human;
      if (pCVar3 != (Characters_Human_o *)0x0) {
        fVar18 = *(float *)&(pCVar3->fields).Detection;
        goto joined_r0x04296b3d;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = (pCVar9->fields)._human;
  pCVar10 = pCVar9;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar3->fields).Detection + 4) = 1;
  if (((((char)(pCVar3->fields).IsRefillable == '\0') || (*(int *)&(pCVar3->fields).Weapon != 0)) ||
      ((pCVar3->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar3->fields).Animation + 4) == '\0')) {
    (pCVar3->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)&(pCVar9->fields).AIStates;
  }
  else {
    (pCVar3->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)&(pCVar9->fields).AIStates;
  }
  if (cVar2 == '\0') {
    fVar18 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(pCVar9->fields)._agent = fVar18;
    pCVar3 = (pCVar9->fields)._human;
    method_01 = (MethodInfo *)0x1;
    fVar18 = Controllers_HumanAIController__GetChaseAngle
                       (pCVar9,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar9->fields)._target
                        ,1,method_00);
  }
  else {
    *(undefined1 *)((long)&(pCVar9->fields)._agent + 4) = 0;
    lVar4 = *(long *)&(pCVar3->fields).Dead;
    if (lVar4 == 0) goto label_04296d95;
    __this_01 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18);
    pCVar10 = (Controllers_HumanAIController_o *)0x0;
    if (__this_01 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar9->fields)._usePathfinding;
    method_01 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar10 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar18 = UVar20.fields.z * UVar20.fields.z +
             UVar20.fields.y * UVar20.fields.y + UVar20.fields.x * UVar20.fields.x;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    if (pUVar5 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method_01 = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar5,fVar18,(MethodInfo *)0x0);
    fVar18 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(pCVar9->fields)._agent = fVar18;
    pCVar3 = (pCVar9->fields)._human;
    pCVar10 = pCVar9;
    fVar18 = Controllers_HumanAIController__GetAgentNavAngle
                       (pCVar9,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar9->fields)._target
                        ,method_01);
  }
  if (pCVar3 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar3->fields).Detection = fVar18;
    Controllers_HumanAIController__RefreshAgent(pCVar9,method_01);
    return extraout_XMM0_Da_00;
  }
label_04296d95:
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar11 = *(MethodInfo **)&(pCVar10->fields).TargetVelocity.fields.z;
  if (method_01 != pMVar11) {
    pfVar8 = &(pCVar10->fields).TargetVelocity.fields.z;
    if (method_01 != (MethodInfo *)0x0) {
      (**(code **)(method_01->methodPointer + 0x198))
                (method_01,*(undefined8 *)(method_01->methodPointer + 0x1a0));
      pMVar11 = *(MethodInfo **)pfVar8;
    }
    *(MethodInfo **)pfVar8 = method_01;
    fVar18 = (float)il2cpp_runtime_helper_022b4080(pfVar8,method_01);
    if (pMVar11 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar11->methodPointer + 0x1b8);
      fVar18 = (float)(*vtableDispatch)
                                (pMVar11,*(undefined8 *)(pMVar11->methodPointer + 0x1c0),extraout_RDX,
                                 vtableDispatch);
      return fVar18;
    }
  }
  return fVar18;
}


// Controllers.HumanAIController$$SetAgentDestination
// il2cpp: void Controllers_HumanAIController__SetAgentDestination (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4296360

void Controllers_HumanAIController__SetAgentDestination
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  UnityEngine_AI_NavMeshAgent_o *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  long lVar7;
  Characters_Human_o *pCVar8;
  UnityEngine_Rigidbody_o *__this_00;
  code *vtableDispatch;
  UnityEngine_AI_NavMeshHit_o __this_01;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  Controllers_HumanAIController_o *pCVar11;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  float *pfVar12;
  MethodInfo *method_01;
  MethodInfo *pMVar13;
  Controllers_HumanAIController_o *pCVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar20 [16];
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar21 [16];
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar22 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar23 [16];
  float fVar24;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o UVar29;
  float fStackY_148;
  float fStackY_144;
  float fStackY_140;
  float fStackY_13c;
  float fStackY_100;
  float fStackY_e0;
  undefined1 in_stack_ffffffffffffff80 [12];
  undefined4 in_stack_ffffffffffffff8c;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 uVar30;
  undefined4 in_stack_ffffffffffffff9c;
  undefined4 uVar31;
  int32_t in_stack_ffffffffffffffa0;
  undefined1 auStack_50 [64];
  _union_14 _Stack_10;
  ulong uVar16;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar24 = position.fields.z;
  if (*(char *)((long)&(__this->fields)._agent + 4) != '\0') {
    return;
  }
  pMVar13 = *(MethodInfo **)&(__this->fields)._usePathfinding;
  if (pMVar13 != (MethodInfo *)0x0) {
    _Stack_10.genericMethod = (void *)0x4296382;
    UnityEngine_AI_NavMeshAgent__SetDestination
              ((UnityEngine_AI_NavMeshAgent_o *)pMVar13,position,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._agent + 4) = 1;
    return;
  }
  _Stack_10.genericMethod = Controllers_HumanAIController__GetDirectionTowardsNavMesh;
  il2cpp_runtime_helper_022b2c90();
  auStack_50._16_8_ = (InvokerMethod)0x0;
  auStack_50._24_8_ = (char *)0x0;
  auStack_50._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_50._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_50._32_4_ = 0;
  method_01 = pMVar13;
  _Stack_10 = (_union_14)__this;
  if ((pMVar13->return_type != (Il2CppType *)0x0) &&
     (pvVar4 = pMVar13->return_type[7].data, pvVar4 != (void *)0x0)) {
    pUVar10 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x10);
    method_01 = (MethodInfo *)0x0;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      bVar9 = UnityEngine_AI_NavMesh__SamplePosition
                        (UVar27,(UnityEngine_AI_NavMeshHit_o *)auStack_50,100.0,-1,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        UVar27 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
        fVar24 = UVar27.fields.z;
        auVar26._0_4_ = UVar27.fields.x;
        uVar30 = (undefined4)extraout_XMM0_Qb_01;
        uVar31 = (undefined4)((ulong)extraout_XMM0_Qb_01 >> 0x20);
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          g_data_057a6845 = '\x01';
          iVar3 = *(int *)((long)&TypeInfo_Math[1].monitor + 4);
        }
        else {
          iVar3 = *(int *)((long)&TypeInfo_Math[1].monitor + 4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        }
        auVar20._4_4_ = in_XMM1_Db;
        auVar20._0_4_ = fVar24;
        auVar20._8_4_ = in_XMM1_Dc;
        auVar20._12_4_ = in_XMM1_Dd;
        auVar19._4_12_ = auVar20._4_12_;
        auVar26._4_4_ = fVar24 * fVar24 + auVar26._0_4_ * auVar26._0_4_ + 0.0;
        if (auVar26._4_4_ < 0.0) {
          auVar19._0_4_ = sqrtf(auVar26._4_4_);
          auVar19._4_12_ = extraout_var;
          uVar16 = auVar19._0_8_;
          auVar26._4_4_ = auVar19._0_4_;
        }
        else {
          auVar19._0_4_ = SQRT(auVar26._4_4_);
          uVar16 = auVar19._0_8_;
          auVar26._4_4_ = auVar19._0_4_;
        }
        if (1e-05 < auVar26._4_4_) {
          auVar26._4_4_ = 0.0;
          auVar26._8_4_ = (float)uVar30;
          auVar26._12_4_ = (float)uVar31;
label_042965a3:
          auVar21._0_4_ = auVar19._0_4_;
          auVar21._8_4_ = auVar19._8_4_;
          auVar21._12_4_ = auVar19._12_4_;
          auVar21._4_4_ = auVar21._0_4_;
          divps(auVar26,auVar21);
          return;
        }
label_042965b7:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(uVar16,fVar24,&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        return;
      }
      method_01 = (MethodInfo *)auStack_50;
      method = (MethodInfo *)0x0;
      __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff8c;
      __this_01.fields.m_Position.fields.x = (float)in_stack_ffffffffffffff80._0_4_;
      __this_01.fields.m_Position.fields.y = (float)in_stack_ffffffffffffff80._4_4_;
      __this_01.fields.m_Position.fields.z = (float)in_stack_ffffffffffffff80._8_4_;
      __this_01.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff90;
      __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff94;
      __this_01.fields.m_Distance = (float)in_stack_ffffffffffffff98;
      __this_01.fields.m_Mask = in_stack_ffffffffffffff9c;
      __this_01.fields.m_Hit = in_stack_ffffffffffffffa0;
      UVar27 = UnityEngine_AI_NavMeshHit__get_position(__this_01,method_01);
      fVar24 = UVar27.fields.z;
      if ((pMVar13->return_type != (Il2CppType *)0x0) &&
         (pvVar4 = pMVar13->return_type[7].data, pvVar4 != (void *)0x0)) {
        auVar26._0_4_ = UVar27.fields.x;
        auVar26._4_4_ = UVar27.fields.y;
        auVar26._8_4_ = (float)extraout_XMM0_Qb;
        auVar26._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20);
        pUVar10 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x10);
        method_01 = (MethodInfo *)0x0;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
          auVar18._0_8_ = UVar27.fields._0_8_;
          auVar18._8_8_ = extraout_XMM0_Qb_00;
          if (g_data_057a6845 == '\0') {
            auStack_50._48_16_ = auVar18;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            auVar18 = auStack_50._48_16_;
          }
          auVar26._0_4_ = auVar26._0_4_ - auVar18._0_4_;
          auVar26._4_4_ = auVar26._4_4_ - auVar18._4_4_;
          auVar26._8_4_ = auVar26._8_4_ - auVar18._8_4_;
          auVar26._12_4_ = auVar26._12_4_ - auVar18._12_4_;
          fVar24 = fVar24 - UVar27.fields.z;
          if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar15 = fVar24 * fVar24 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
          if (0.0 <= fVar15) {
            fVar15 = SQRT(fVar15);
            auVar19 = ZEXT416((uint)fVar15);
            uVar16 = (ulong)(uint)fVar15;
          }
          else {
            uVar30 = auVar26._8_4_;
            uVar31 = auVar26._12_4_;
            auVar19._0_4_ = sqrtf(fVar15);
            auVar19._4_12_ = extraout_var_00;
            uVar16 = auVar19._0_8_;
            auVar26._8_4_ = (float)uVar30;
            auVar26._12_4_ = (float)uVar31;
            fVar15 = auVar19._0_4_;
          }
          if (1e-05 < fVar15) goto label_042965a3;
          goto label_042965b7;
        }
      }
    }
  }
  UVar27.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  pMVar13 = method_01;
  if (g_data_057a65d5 == '\0') {
    pMVar13 = (MethodInfo *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  auVar26._8_4_ = (float)((ulong)UVar27.fields._0_8_ >> 0x20) - (float)((ulong)uVar17 >> 0x20);
  auVar26._0_4_ = fVar24 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  auVar26._4_4_ = (float)UVar27.fields._0_8_ - (float)uVar17;
  if (9.9999994e-11 <=
      auVar26._4_4_ * auVar26._4_4_ + auVar26._8_4_ * auVar26._8_4_ + auVar26._0_4_ * auVar26._0_4_) {
    UVar27.fields.z = fVar24;
    Controllers_BaseAIController__GetTargetAngle((Controllers_BaseAIController_o *)method_01,UVar27,method);
    return;
  }
  if (method_01->return_type != (Il2CppType *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&pMVar13[2].methodPointer == '\0') {
    return;
  }
  pCVar14 = (Controllers_HumanAIController_o *)pMVar13[2].virtualMethodPointer;
  if (pCVar14 != (Controllers_HumanAIController_o *)0x0) {
    method = (MethodInfo *)0x0;
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar14,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      method = (MethodInfo *)0x0;
      UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      fVar24 = UVar27.fields.z;
      pCVar14 = (Controllers_HumanAIController_o *)pMVar13[2].virtualMethodPointer;
      if (pCVar14 != (Controllers_HumanAIController_o *)0x0) {
        method = (MethodInfo *)0x0;
        pCVar11 = (Controllers_HumanAIController_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar14,(MethodInfo *)0x0);
        if (pCVar11 != (Controllers_HumanAIController_o *)0x0) {
          method = (MethodInfo *)0x0;
          UVar28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar11,(MethodInfo *)0x0);
          auVar26._0_4_ = UVar28.fields.z;
          pCVar14 = pCVar11;
          fVar24 = auVar26._0_4_;
          if (((pMVar13->return_type != (Il2CppType *)0x0) &&
              (pvVar4 = pMVar13->return_type[7].data, pvVar4 != (void *)0x0)) &&
             (pCVar14 = *(Controllers_HumanAIController_o **)((long)pvVar4 + 0x10),
             pCVar14 != (Controllers_HumanAIController_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar14,(MethodInfo *)0x0)
            ;
            fVar24 = UVar28.fields.z;
            if (((pMVar13->return_type != (Il2CppType *)0x0) &&
                (pvVar4 = pMVar13->return_type[7].data, pvVar4 != (void *)0x0)) &&
               (pCVar14 = *(Controllers_HumanAIController_o **)((long)pvVar4 + 0x10),
               pCVar14 != (Controllers_HumanAIController_o *)0x0)) {
              method = (MethodInfo *)0x0;
              UVar29 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar14,(MethodInfo *)0x0);
              fVar24 = UVar29.fields.z;
              if (*(char *)&pMVar13[2].methodPointer != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                fStackY_100 = UVar27.fields.x;
                fStackY_e0 = UVar28.fields.x;
                auVar26._0_4_ = auVar26._0_4_ - fVar24;
                pCVar14 = TypeInfo_Math;
                if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar24 = (fStackY_100 - fStackY_e0) * (fStackY_100 - fStackY_e0) + 0.0;
                auVar26._0_4_ = auVar26._0_4_ * auVar26._0_4_ + fVar24;
                if (auVar26._0_4_ < 0.0) {
                  auVar26._0_4_ = sqrtf(auVar26._0_4_);
                }
                else {
                  auVar26._0_4_ = SQRT(auVar26._0_4_);
                }
                if (0.1 < auVar26._0_4_) {
                  pCVar14 = (Controllers_HumanAIController_o *)0x0;
                  if ((UnityEngine_Behaviour_o *)pMVar13[2].virtualMethodPointer !=
                      (UnityEngine_Behaviour_o *)0x0) {
                    method = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)pMVar13[2].virtualMethodPointer,0,(MethodInfo *)0x0)
                    ;
                    pCVar14 = (Controllers_HumanAIController_o *)pMVar13[2].virtualMethodPointer;
                    if (pCVar14 != (Controllers_HumanAIController_o *)0x0) {
                      method = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pCVar14,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              if (((pMVar13->return_type != (Il2CppType *)0x0) &&
                  (pvVar4 = pMVar13->return_type[7].data, pvVar4 != (void *)0x0)) &&
                 (pCVar14 = *(Controllers_HumanAIController_o **)((long)pvVar4 + 0x10),
                 pCVar14 != (Controllers_HumanAIController_o *)0x0)) {
                pUVar5 = (UnityEngine_AI_NavMeshAgent_o *)pMVar13[2].virtualMethodPointer;
                method = (MethodInfo *)0x0;
                UVar27 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar14,(MethodInfo *)0x0);
                fVar24 = UVar27.fields.z;
                if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar5,UVar27,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar17 = il2cpp_runtime_helper_022b2c90();
  pCVar6 = (pCVar14->fields)._character;
  pCVar11 = pCVar14;
  if ((pCVar6 != (Characters_BaseCharacter_o *)0x0) && (lVar7 = *(long *)&(pCVar6->fields).Dead, lVar7 != 0))
  {
    pUVar10 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
    pCVar11 = (Controllers_HumanAIController_o *)0x0;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      method = (MethodInfo *)0x0;
      UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStackY_148 = (float)uVar17;
      fStackY_144 = (float)((ulong)uVar17 >> 0x20);
      fStackY_140 = (float)extraout_XMM0_Qb_02;
      fStackY_13c = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
      auVar25._0_4_ = fStackY_148 - UVar27.fields.x;
      auVar25._4_4_ = fStackY_144 - UVar27.fields.y;
      auVar25._8_4_ = fStackY_140 - (float)extraout_XMM0_Qb_03;
      auVar25._12_4_ = fStackY_13c - (float)((ulong)extraout_XMM0_Qb_03 >> 0x20);
      fVar24 = fVar24 - UVar27.fields.z;
      pCVar11 = TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar26._0_4_ = fVar24 * fVar24 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
      if (auVar26._0_4_ < 0.0) {
        auVar22._0_4_ = sqrtf(auVar26._0_4_);
        auVar22._4_12_ = extraout_var_01;
        if (auVar22._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar23._0_4_ = auVar22._0_4_;
        fVar24 = fVar24 / auVar23._0_4_;
        auVar23._8_4_ = auVar22._8_4_;
        auVar23._12_4_ = auVar22._12_4_;
        auVar23._4_4_ = auVar23._0_4_;
        auVar26 = divps(auVar25,auVar23);
        uVar17 = auVar26._0_8_;
        if (g_data_057a65d5 == '\0') {
          pCVar11 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar22 = ZEXT416((uint)SQRT(auVar26._0_4_));
        if (1e-05 < SQRT(auVar26._0_4_)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          pCVar11 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar26._8_4_ = (float)uVar17 - (float)uVar1;
      auVar26._4_4_ = (float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      auVar26._0_4_ = fVar24 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <=
          auVar26._0_4_ * auVar26._0_4_ + auVar26._4_4_ * auVar26._4_4_ + auVar26._8_4_ * auVar26._8_4_) {
        UVar28.fields.z = fVar24;
        UVar28.fields.x = (float)(int)uVar17;
        UVar28.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
        Controllers_BaseAIController__GetTargetAngle((Controllers_BaseAIController_o *)pCVar14,UVar28,method);
        return;
      }
      if ((pCVar14->fields)._human != (Characters_Human_o *)0x0) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar8 = (pCVar11->fields)._human;
  pCVar14 = pCVar11;
  if (pCVar8 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar8->fields).Detection + 4) = 1;
  if (((((char)(pCVar8->fields).IsRefillable == '\0') || (*(int *)&(pCVar8->fields).Weapon != 0)) ||
      ((pCVar8->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar8->fields).Animation + 4) == '\0')) {
    (pCVar8->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)&(pCVar11->fields).AIStates;
  }
  else {
    (pCVar8->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)&(pCVar11->fields).AIStates;
  }
  if (cVar2 == '\0') {
    fVar24 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(pCVar11->fields)._agent = fVar24;
    pCVar8 = (pCVar11->fields)._human;
    method = (MethodInfo *)0x1;
    fVar24 = Controllers_HumanAIController__GetChaseAngle
                       (pCVar11,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)&(pCVar11->fields)._target,1,method_00);
  }
  else {
    *(undefined1 *)((long)&(pCVar11->fields)._agent + 4) = 0;
    lVar7 = *(long *)&(pCVar8->fields).Dead;
    if (lVar7 == 0) goto label_04296d95;
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar7 + 0x18);
    pCVar14 = (Controllers_HumanAIController_o *)0x0;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar11->fields)._usePathfinding;
    method = (MethodInfo *)0x0;
    UVar27 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar14 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar24 = UVar27.fields.z * UVar27.fields.z +
             UVar27.fields.y * UVar27.fields.y + UVar27.fields.x * UVar27.fields.x;
    if (fVar24 < 0.0) {
      fVar24 = sqrtf(fVar24);
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    if (pUVar5 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar5,fVar24,(MethodInfo *)0x0);
    fVar24 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(pCVar11->fields)._agent = fVar24;
    pCVar8 = (pCVar11->fields)._human;
    pCVar14 = pCVar11;
    fVar24 = Controllers_HumanAIController__GetAgentNavAngle
                       (pCVar11,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)&(pCVar11->fields)._target,method);
  }
  if (pCVar8 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar8->fields).Detection = fVar24;
    Controllers_HumanAIController__RefreshAgent(pCVar11,method);
    return;
  }
label_04296d95:
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = *(MethodInfo **)&(pCVar14->fields).TargetVelocity.fields.z;
  if (method != pMVar13) {
    pfVar12 = &(pCVar14->fields).TargetVelocity.fields.z;
    if (method != (MethodInfo *)0x0) {
      (**(code **)(method->methodPointer + 0x198))(method,*(undefined8 *)(method->methodPointer + 0x1a0));
      pMVar13 = *(MethodInfo **)pfVar12;
    }
    *(MethodInfo **)pfVar12 = method;
    il2cpp_runtime_helper_022b4080(pfVar12,method);
    if (pMVar13 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar13->methodPointer + 0x1b8);
      (*vtableDispatch)
                (pMVar13,*(undefined8 *)(pMVar13->methodPointer + 0x1c0),extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$RefreshAgent
// il2cpp: void Controllers_HumanAIController__RefreshAgent (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4296750

void Controllers_HumanAIController__RefreshAgent(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Characters_Human_o *pCVar3;
  long lVar4;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  UnityEngine_Rigidbody_o *__this_01;
  code *vtableDispatch;
  UnityEngine_Transform_o *pUVar7;
  Controllers_HumanAIController_o *pCVar8;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  float *pfVar9;
  Controllers_HumanAIController_o *pCVar10;
  MethodInfo *pMVar11;
  float fVar12;
  float fVar16;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 extraout_var [12];
  undefined1 auVar15 [16];
  float in_XMM1_Da;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_48;
  float local_28;
  
  if (*(char *)&(__this->fields).AIStates == '\0') {
    return;
  }
  pCVar10 = *(Controllers_HumanAIController_o **)&(__this->fields)._usePathfinding;
  if (pCVar10 != (Controllers_HumanAIController_o *)0x0) {
    method = (MethodInfo *)0x0;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      method = (MethodInfo *)0x0;
      UVar20 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      in_XMM1_Da = UVar20.fields.z;
      pCVar10 = *(Controllers_HumanAIController_o **)&(__this->fields)._usePathfinding;
      if (pCVar10 != (Controllers_HumanAIController_o *)0x0) {
        method = (MethodInfo *)0x0;
        pCVar8 = (Controllers_HumanAIController_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
        if (pCVar8 != (Controllers_HumanAIController_o *)0x0) {
          method = (MethodInfo *)0x0;
          UVar21 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0);
          fVar16 = UVar21.fields.z;
          pCVar3 = (__this->fields)._human;
          pCVar10 = pCVar8;
          in_XMM1_Da = fVar16;
          if (((pCVar3 != (Characters_Human_o *)0x0) && (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0))
             && (pCVar10 = *(Controllers_HumanAIController_o **)(lVar4 + 0x10),
                pCVar10 != (Controllers_HumanAIController_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar21 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0)
            ;
            in_XMM1_Da = UVar21.fields.z;
            pCVar3 = (__this->fields)._human;
            if (((pCVar3 != (Characters_Human_o *)0x0) &&
                (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
               (pCVar10 = *(Controllers_HumanAIController_o **)(lVar4 + 0x10),
               pCVar10 != (Controllers_HumanAIController_o *)0x0)) {
              method = (MethodInfo *)0x0;
              UVar22 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
              in_XMM1_Da = UVar22.fields.z;
              if (*(char *)&(__this->fields).AIStates != '\0') {
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                }
                local_48 = UVar20.fields.x;
                local_28 = UVar21.fields.x;
                fVar16 = fVar16 - in_XMM1_Da;
                pCVar10 = TypeInfo_Math;
                if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_XMM1_Da = (local_48 - local_28) * (local_48 - local_28) + 0.0;
                fVar16 = fVar16 * fVar16 + in_XMM1_Da;
                if (fVar16 < 0.0) {
                  fVar16 = sqrtf(fVar16);
                }
                else {
                  fVar16 = SQRT(fVar16);
                }
                if (0.1 < fVar16) {
                  __this_00 = *(UnityEngine_Behaviour_o **)&(__this->fields)._usePathfinding;
                  pCVar10 = (Controllers_HumanAIController_o *)0x0;
                  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
                    method = (MethodInfo *)0x0;
                    UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
                    pCVar10 = *(Controllers_HumanAIController_o **)&(__this->fields)._usePathfinding;
                    if (pCVar10 != (Controllers_HumanAIController_o *)0x0) {
                      method = (MethodInfo *)0x1;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pCVar10,1,(MethodInfo *)0x0);
                      goto label_042968f4;
                    }
                  }
                  goto label_04296931;
                }
              }
label_042968f4:
              pCVar3 = (__this->fields)._human;
              if (((pCVar3 != (Characters_Human_o *)0x0) &&
                  (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
                 (pCVar10 = *(Controllers_HumanAIController_o **)(lVar4 + 0x10),
                 pCVar10 != (Controllers_HumanAIController_o *)0x0)) {
                pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
                method = (MethodInfo *)0x0;
                UVar20 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
                in_XMM1_Da = UVar20.fields.z;
                if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar5,UVar20,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04296931:
  uVar13 = il2cpp_runtime_helper_022b2c90();
  pCVar6 = (pCVar10->fields)._character;
  pCVar8 = pCVar10;
  if ((pCVar6 != (Characters_BaseCharacter_o *)0x0) && (lVar4 = *(long *)&(pCVar6->fields).Dead, lVar4 != 0))
  {
    pUVar7 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
    pCVar8 = (Controllers_HumanAIController_o *)0x0;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      method = (MethodInfo *)0x0;
      UVar20 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      fStack_90 = (float)uVar13;
      fStack_8c = (float)((ulong)uVar13 >> 0x20);
      fStack_88 = (float)extraout_XMM0_Qb;
      fStack_84 = (float)((ulong)extraout_XMM0_Qb >> 0x20);
      auVar19._0_4_ = fStack_90 - UVar20.fields.x;
      auVar19._4_4_ = fStack_8c - UVar20.fields.y;
      auVar19._8_4_ = fStack_88 - (float)extraout_XMM0_Qb_00;
      auVar19._12_4_ = fStack_84 - (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
      fVar16 = in_XMM1_Da - UVar20.fields.z;
      pCVar8 = TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar12 = fVar16 * fVar16 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
      if (fVar12 < 0.0) {
        auVar14._0_4_ = sqrtf(fVar12);
        auVar14._4_12_ = extraout_var;
        if (auVar14._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar15._0_4_ = auVar14._0_4_;
        fVar16 = fVar16 / auVar15._0_4_;
        auVar15._8_4_ = auVar14._8_4_;
        auVar15._12_4_ = auVar14._12_4_;
        auVar15._4_4_ = auVar15._0_4_;
        auVar19 = divps(auVar19,auVar15);
        uVar13 = auVar19._0_8_;
        if (g_data_057a65d5 == '\0') {
          pCVar8 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar14 = ZEXT416((uint)SQRT(fVar12));
        if (1e-05 < SQRT(fVar12)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          pCVar8 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar18 = (float)uVar13 - (float)uVar1;
      fVar17 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      fVar12 = fVar16 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <= fVar12 * fVar12 + fVar17 * fVar17 + fVar18 * fVar18) {
        UVar20.fields.z = fVar16;
        UVar20.fields.x = (float)(int)uVar13;
        UVar20.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
        Controllers_BaseAIController__GetTargetAngle((Controllers_BaseAIController_o *)pCVar10,UVar20,method);
        return;
      }
      if ((pCVar10->fields)._human != (Characters_Human_o *)0x0) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = (pCVar8->fields)._human;
  pCVar10 = pCVar8;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar3->fields).Detection + 4) = 1;
  if (((((char)(pCVar3->fields).IsRefillable == '\0') || (*(int *)&(pCVar3->fields).Weapon != 0)) ||
      ((pCVar3->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar3->fields).Animation + 4) == '\0')) {
    (pCVar3->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)&(pCVar8->fields).AIStates;
  }
  else {
    (pCVar3->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)&(pCVar8->fields).AIStates;
  }
  if (cVar2 == '\0') {
    fVar16 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(pCVar8->fields)._agent = fVar16;
    pCVar3 = (pCVar8->fields)._human;
    method = (MethodInfo *)0x1;
    fVar16 = Controllers_HumanAIController__GetChaseAngle
                       (pCVar8,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar8->fields)._target
                        ,1,method_00);
  }
  else {
    *(undefined1 *)((long)&(pCVar8->fields)._agent + 4) = 0;
    lVar4 = *(long *)&(pCVar3->fields).Dead;
    if (lVar4 == 0) goto label_04296d95;
    __this_01 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18);
    pCVar10 = (Controllers_HumanAIController_o *)0x0;
    if (__this_01 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    pUVar5 = *(UnityEngine_AI_NavMeshAgent_o **)&(pCVar8->fields)._usePathfinding;
    method = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar10 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar16 = UVar20.fields.z * UVar20.fields.z +
             UVar20.fields.y * UVar20.fields.y + UVar20.fields.x * UVar20.fields.x;
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    if (pUVar5 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(pUVar5,fVar16,(MethodInfo *)0x0);
    fVar16 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(pCVar8->fields)._agent = fVar16;
    pCVar3 = (pCVar8->fields)._human;
    pCVar10 = pCVar8;
    fVar16 = Controllers_HumanAIController__GetAgentNavAngle
                       (pCVar8,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pCVar8->fields)._target
                        ,method);
  }
  if (pCVar3 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar3->fields).Detection = fVar16;
    Controllers_HumanAIController__RefreshAgent(pCVar8,method);
    return;
  }
label_04296d95:
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = *(MethodInfo **)&(pCVar10->fields).TargetVelocity.fields.z;
  if (method != pMVar11) {
    pfVar9 = &(pCVar10->fields).TargetVelocity.fields.z;
    if (method != (MethodInfo *)0x0) {
      (**(code **)(method->methodPointer + 0x198))(method,*(undefined8 *)(method->methodPointer + 0x1a0));
      pMVar11 = *(MethodInfo **)pfVar9;
    }
    *(MethodInfo **)pfVar9 = method;
    il2cpp_runtime_helper_022b4080(pfVar9,method);
    if (pMVar11 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar11->methodPointer + 0x1b8);
      (*vtableDispatch)
                (pMVar11,*(undefined8 *)(pMVar11->methodPointer + 0x1c0),extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$GetChaseAngle
// il2cpp: float Controllers_HumanAIController__GetChaseAngle (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x4296940

float Controllers_HumanAIController__GetChaseAngle
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,
                bool_conflict useMoveAngle,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Characters_BaseCharacter_o *pCVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_00;
  Characters_Human_o *pCVar5;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_AI_NavMeshAgent_o *__this_02;
  code *vtableDispatch;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  float *pfVar6;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  Controllers_HumanAIController_o *__this_03;
  Controllers_HumanAIController_o *pCVar7;
  MethodInfo *pMVar8;
  float fVar9;
  float extraout_XMM0_Da;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 extraout_var [12];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o UVar17;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 uVar15;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,useMoveAngle);
  pCVar3 = (__this->fields)._character;
  __this_03 = __this;
  if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) && (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0))
  {
    __this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
    __this_03 = (Controllers_HumanAIController_o *)0x0;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      UVar17 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      local_48 = position.fields.x;
      fStack_44 = position.fields.y;
      fStack_40 = (float)in_XMM0_Qb;
      fStack_3c = (float)((ulong)in_XMM0_Qb >> 0x20);
      auVar16._0_4_ = local_48 - UVar17.fields.x;
      auVar16._4_4_ = fStack_44 - UVar17.fields.y;
      auVar16._8_4_ = fStack_40 - (float)extraout_XMM0_Qb;
      auVar16._12_4_ = fStack_3c - (float)((ulong)extraout_XMM0_Qb >> 0x20);
      fVar12 = position.fields.z - UVar17.fields.z;
      __this_03 = TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar9 = fVar12 * fVar12 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
      if (fVar9 < 0.0) {
        auVar10._0_4_ = sqrtf(fVar9);
        auVar10._4_12_ = extraout_var;
        if (auVar10._0_4_ <= 1e-05) goto label_04296a2a;
label_04296a86:
        auVar11._0_4_ = auVar10._0_4_;
        fVar12 = fVar12 / auVar11._0_4_;
        auVar11._8_4_ = auVar10._8_4_;
        auVar11._12_4_ = auVar10._12_4_;
        auVar11._4_4_ = auVar11._0_4_;
        auVar16 = divps(auVar16,auVar11);
        uVar15 = auVar16._0_8_;
        if (g_data_057a65d5 == '\0') {
          __this_03 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
      }
      else {
        auVar10 = ZEXT416((uint)SQRT(fVar9));
        if (1e-05 < SQRT(fVar9)) goto label_04296a86;
label_04296a2a:
        if (g_data_057a65d5 == '\0') {
          __this_03 = (Controllers_HumanAIController_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar14 = (float)uVar15 - (float)uVar1;
      fVar13 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      fVar9 = fVar12 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (9.9999994e-11 <= fVar9 * fVar9 + fVar13 * fVar13 + fVar14 * fVar14) {
        UVar17.fields.z = fVar12;
        UVar17.fields.x = (float)(int)uVar15;
        UVar17.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
        fVar12 = Controllers_BaseAIController__GetTargetAngle
                           ((Controllers_BaseAIController_o *)__this,UVar17,method_01);
joined_r0x04296b3d:
        if ((char)useMoveAngle != '\0') {
          fVar12 = fVar12 + *(float *)&(__this->fields)._agent;
        }
        fVar12 = (float)(~-(uint)(360.0 < fVar12) & (uint)fVar12 |
                        (uint)(fVar12 + -360.0) & -(uint)(360.0 < fVar12));
        return (float)(~-(uint)(fVar12 < 0.0) & (uint)fVar12 | (uint)(fVar12 + 360.0) & -(uint)(fVar12 < 0.0))
        ;
      }
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        fVar12 = *(float *)&(pCVar5->fields).Detection;
        goto joined_r0x04296b3d;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (__this_03->fields)._human;
  pCVar7 = __this_03;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar5->fields).Detection + 4) = 1;
  if (((((char)(pCVar5->fields).IsRefillable == '\0') || (*(int *)&(pCVar5->fields).Weapon != 0)) ||
      ((pCVar5->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar5->fields).Animation + 4) == '\0')) {
    (pCVar5->fields).IsAttackableState = 0x3f800000;
    cVar2 = *(char *)&(__this_03->fields).AIStates;
  }
  else {
    (pCVar5->fields).IsAttackableState = 0x3e800000;
    cVar2 = *(char *)&(__this_03->fields).AIStates;
  }
  if (cVar2 == '\0') {
    fVar12 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(__this_03->fields)._agent = fVar12;
    pCVar5 = (__this_03->fields)._human;
    method_01 = (MethodInfo *)0x1;
    fVar12 = Controllers_HumanAIController__GetChaseAngle
                       (__this_03,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(__this_03->fields)._target,1,
                        method_00);
  }
  else {
    *(undefined1 *)((long)&(__this_03->fields)._agent + 4) = 0;
    lVar4 = *(long *)&(pCVar5->fields).Dead;
    if (lVar4 == 0) goto label_04296d95;
    __this_01 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18);
    pCVar7 = (Controllers_HumanAIController_o *)0x0;
    if (__this_01 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    __this_02 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this_03->fields)._usePathfinding;
    method_01 = (MethodInfo *)0x0;
    UVar17 = UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar7 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar12 = UVar17.fields.z * UVar17.fields.z +
             UVar17.fields.y * UVar17.fields.y + UVar17.fields.x * UVar17.fields.x;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (__this_02 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method_01 = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(__this_02,fVar12,(MethodInfo *)0x0);
    fVar12 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(__this_03->fields)._agent = fVar12;
    pCVar5 = (__this_03->fields)._human;
    pCVar7 = __this_03;
    fVar12 = Controllers_HumanAIController__GetAgentNavAngle
                       (__this_03,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(__this_03->fields)._target,
                        method_01);
  }
  if (pCVar5 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar5->fields).Detection = fVar12;
    Controllers_HumanAIController__RefreshAgent(__this_03,method_01);
    return extraout_XMM0_Da;
  }
label_04296d95:
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar8 = *(MethodInfo **)&(pCVar7->fields).TargetVelocity.fields.z;
  if (method_01 != pMVar8) {
    pfVar6 = &(pCVar7->fields).TargetVelocity.fields.z;
    if (method_01 != (MethodInfo *)0x0) {
      (**(code **)(method_01->methodPointer + 0x198))
                (method_01,*(undefined8 *)(method_01->methodPointer + 0x1a0));
      pMVar8 = *(MethodInfo **)pfVar6;
    }
    *(MethodInfo **)pfVar6 = method_01;
    fVar12 = (float)il2cpp_runtime_helper_022b4080(pfVar6,method_01);
    if (pMVar8 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar8->methodPointer + 0x1b8);
      fVar12 = (float)(*vtableDispatch)
                                (pMVar8,*(undefined8 *)(pMVar8->methodPointer + 0x1c0),extraout_RDX,
                                 vtableDispatch);
      return fVar12;
    }
  }
  return fVar12;
}


// Controllers.HumanAIController$$MoveToPosition
// il2cpp: void Controllers_HumanAIController__MoveToPosition (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4296b90

void Controllers_HumanAIController__MoveToPosition(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  char cVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *__this_01;
  code *vtableDispatch;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  float *pfVar4;
  Controllers_HumanAIController_o *pCVar5;
  MethodInfo *pMVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  pCVar2 = (__this->fields)._human;
  pCVar5 = __this;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_04296d95;
  *(undefined1 *)((long)&(pCVar2->fields).Detection + 4) = 1;
  if (((((char)(pCVar2->fields).IsRefillable == '\0') || (*(int *)&(pCVar2->fields).Weapon != 0)) ||
      ((pCVar2->fields).FinishSetup != 0)) || (*(char *)((long)&(pCVar2->fields).Animation + 4) == '\0')) {
    (pCVar2->fields).IsAttackableState = 0x3f800000;
    cVar1 = *(char *)&(__this->fields).AIStates;
  }
  else {
    (pCVar2->fields).IsAttackableState = 0x3e800000;
    cVar1 = *(char *)&(__this->fields).AIStates;
  }
  if (cVar1 == '\0') {
    fVar7 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields)._agent = fVar7;
    pCVar2 = (__this->fields)._human;
    method = (MethodInfo *)0x1;
    fVar7 = Controllers_HumanAIController__GetChaseAngle
                      (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(__this->fields)._target,
                       1,method_00);
  }
  else {
    *(undefined1 *)((long)&(__this->fields)._agent + 4) = 0;
    lVar3 = *(long *)&(pCVar2->fields).Dead;
    if (lVar3 == 0) goto label_04296d95;
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
    pCVar5 = (Controllers_HumanAIController_o *)0x0;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_04296d95;
    __this_01 = *(UnityEngine_AI_NavMeshAgent_o **)&(__this->fields)._usePathfinding;
    method = (MethodInfo *)0x0;
    UVar8 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    pCVar5 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar7 = UVar8.fields.z * UVar8.fields.z +
            UVar8.fields.y * UVar8.fields.y + UVar8.fields.x * UVar8.fields.x;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (__this_01 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_04296d95;
    method = (MethodInfo *)0x0;
    UnityEngine_AI_NavMeshAgent__set_speed(__this_01,fVar7,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    *(float *)&(__this->fields)._agent = fVar7;
    pCVar2 = (__this->fields)._human;
    pCVar5 = __this;
    fVar7 = Controllers_HumanAIController__GetAgentNavAngle
                      (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(__this->fields)._target,
                       method);
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    *(float *)&(pCVar2->fields).Detection = fVar7;
    Controllers_HumanAIController__RefreshAgent(__this,method);
    return;
  }
label_04296d95:
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = *(MethodInfo **)&(pCVar5->fields).TargetVelocity.fields.z;
  if (method != pMVar6) {
    pfVar4 = &(pCVar5->fields).TargetVelocity.fields.z;
    if (method != (MethodInfo *)0x0) {
      (**(code **)(method->methodPointer + 0x198))(method,*(undefined8 *)(method->methodPointer + 0x1a0));
      pMVar6 = *(MethodInfo **)pfVar4;
    }
    *(MethodInfo **)pfVar4 = method;
    il2cpp_runtime_helper_022b4080(pfVar4,method);
    if (pMVar6 != (MethodInfo *)0x0) {
      vtableDispatch = *(code **)(pMVar6->methodPointer + 0x1b8);
      (*vtableDispatch)
                (pMVar6,*(undefined8 *)(pMVar6->methodPointer + 0x1c0),extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$SwitchAIState
// il2cpp: void Controllers_HumanAIController__SwitchAIState (Controllers_HumanAIController_o* __this, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x4296da0

void Controllers_HumanAIController__SwitchAIState
               (Controllers_HumanAIController_o *__this,Controllers_HumanAIState_o *aiState,MethodInfo *method
               )

{
  Il2CppMethodPointer vtableDispatch;
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
    il2cpp_runtime_helper_022b4080(pfVar1,aiState,method);
    if (pCVar2 != (Controllers_HumanAIState_o *)0x0) {
      vtableDispatch = (pCVar2->klass->vtable)._8_OnStateExit.methodPtr;
      (*vtableDispatch)
                (pCVar2,(pCVar2->klass->vtable)._8_OnStateExit.method,extraout_RDX_00,vtableDispatch);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$SetAIState
// il2cpp: void Controllers_HumanAIController__SetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x4293d00

void Controllers_HumanAIController__SetAIState
               (Controllers_HumanAIController_o *__this,System_String_o *name,
               Controllers_HumanAIState_o *aiState,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  UnityEngine_Object_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Characters_TitanColliderToggler_o *__this_00;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_01;
  undefined1 auVar6 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  Map_MapTargetable_o *__this_06;
  bool_conflict bVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_Transform_o *pUVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  long lVar14;
  long lVar15;
  UnityEngine_Object_o *pUVar16;
  float fVar17;
  System_Int32_array *pSVar18;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar19;
  float fVar20;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  undefined1 auVar28 [12];
  System_Nullable_Vector3__o __this_08;
  undefined8 uStackY_170;
  undefined8 uStackY_168;
  float fStackY_160;
  float fStackY_15c;
  float fStackY_158;
  float fStackY_154;
  long lStackY_148;
  UnityEngine_Object_o *pUStackY_140;
  float in_stack_fffffffffffffec8;
  float in_stack_fffffffffffffecc;
  undefined4 in_stack_fffffffffffffed0;
  undefined4 in_stack_fffffffffffffed4;
  float in_stack_fffffffffffffed8;
  float in_stack_fffffffffffffedc;
  float fStack_118;
  float fStack_114;
  _union_249689 _Stack_108;
  undefined8 uStack_100;
  Map_MapTargetable_o *pMStack_f8;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  _union_249689 _Stack_c8;
  undefined8 uStack_c0;
  Map_MapTargetable_o *pMStack_b8;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_b0;
  float fStack_60;
  float fStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057adcf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adcf8 = '\x01';
  }
  __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (__this_07 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_07,(Il2CppObject *)name,(Il2CppObject *)aiState,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0();
    g_data_057adceb = '\x01';
  }
  pUVar16 = __this_07[1].monitor;
  if (pUVar16 == (UnityEngine_Object_o *)0x0) {
    return;
  }
  pUVar4 = pUVar16->klass;
  bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
  if (((pUVar4->_2).naturalAligment < bVar1) || ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseTitan)
     ) {
    uVar2._0_1_ = (pUVar4->_2).rank;
    uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_ITargetable) {
          pVVar8 = &(pUVar4->vtable)._0_Equals + (*(int *)((long)&pIVar5->offset + lVar14) + 1);
          goto label_04293e35;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar16,TypeInfo_ITargetable,1);
label_04293e35:
    pSVar18 = (System_Int32_array *)(*pVVar8->methodPtr)(pUVar16);
    __this_07[1].fields._buckets = pSVar18;
    *(float *)&__this_07[1].fields._entries = in_XMM1_Da;
    lVar14._0_4_ = (__this_07->fields)._freeCount;
    lVar14._4_4_ = (__this_07->fields)._version;
joined_r0x0429403e:
    if (((lVar14 != 0) && (*(long *)(lVar14 + 0x70) != 0)) &&
       (pUVar9 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x70) + 0x10),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UVar25 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      *(ulong *)((long)&__this_07[1].fields._entries + 4) =
           CONCAT44((float)((ulong)pSVar18 >> 0x20) - UVar25.fields.y,SUB84(pSVar18,0) - UVar25.fields.x);
      __this_07[1].fields._freeList = (int32_t)(in_XMM1_Da - UVar25.fields.z);
      return;
    }
label_04294044:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pUVar16[10].monitor == (void *)0x0) ||
       (name = *(System_String_o **)((long)pUVar16[10].monitor + 0x68), name == (System_String_o *)0x0))
    goto label_04294044;
    bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if ((bVar1 <= (name->klass->_2).naturalAligment) &&
       ((name->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)name,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UVar25 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
        in_XMM1_Da = UVar25.fields.z;
        fVar19 = UnityEngine_CapsuleCollider__get_radius
                           ((UnityEngine_CapsuleCollider_o *)name,(MethodInfo *)0x0);
        pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)name,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar26 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          in_XMM1_Da = UVar26.fields.z;
          pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)name,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            UVar27 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
            in_XMM1_Da = UVar27.fields.z;
            pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)name,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              fStack_40 = UVar25.fields.x;
              fStack_3c = UVar25.fields.y;
              if (fStack_40 <= fStack_3c) {
                fStack_40 = fStack_3c;
              }
              fVar17 = fVar19 * fStack_40 * 1.5;
              fStack_50 = UVar27.fields.x;
              fStack_4c = UVar27.fields.y;
              fStack_60 = UVar26.fields.x;
              fStack_5c = UVar26.fields.y;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              UVar25 = UnityEngine_Transform__get_up(pUVar9,(MethodInfo *)0x0);
              in_XMM1_Da = UVar25.fields.z;
              fVar19 = fVar19 * fStack_40 * 0.5;
              __this_07[1].fields._buckets =
                   (System_Int32_array *)
                   CONCAT44(fVar19 * UVar25.fields.y + (fStack_5c - fVar17 * fStack_4c),
                            fVar19 * UVar25.fields.x + (fStack_60 - fVar17 * fStack_50));
              *(float *)&__this_07[1].fields._entries =
                   fVar19 * in_XMM1_Da + (UVar26.fields.z - fVar17 * UVar27.fields.z);
              __this_00 = (Characters_TitanColliderToggler_o *)pUVar16[10].fields.m_CachedPtr;
              if (__this_00 != (Characters_TitanColliderToggler_o *)0x0) {
                Characters_TitanColliderToggler__RegisterLook(__this_00,(MethodInfo *)0x0);
                pSVar18 = __this_07[1].fields._buckets;
                in_XMM1_Da = *(float *)&__this_07[1].fields._entries;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                lVar14._0_4_ = (__this_07->fields)._freeCount;
                lVar14._4_4_ = (__this_07->fields)._version;
                goto joined_r0x0429403e;
              }
            }
          }
        }
      }
      goto label_04294044;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pSStack_b0 = __this_07;
  if (g_data_057adcec == '\0') {
    pUStackY_140 = (UnityEngine_Object_o *)0x4294089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pUStackY_140 = (UnityEngine_Object_o *)0x4294095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pUStackY_140 = (UnityEngine_Object_o *)0x42940a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTargetable_get_Current);
    pUStackY_140 = (UnityEngine_Object_o *)0x42940ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    pUStackY_140 = (UnityEngine_Object_o *)0x42940b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pUStackY_140 = (UnityEngine_Object_o *)0x42940c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adcec = '\x01';
  }
  _Stack_108.genericMethod = (void *)0x0;
  uStack_100 = 0;
  pMStack_f8 = (Map_MapTargetable_o *)0x0;
  if (((name[1].fields == (System_String_Fields)0x0) ||
      (lVar14 = *(long *)((long)name[1].fields + 0x70), lVar14 == 0)) ||
     (pUVar9 = *(UnityEngine_Transform_o **)(lVar14 + 0x10), pUVar9 == (UnityEngine_Transform_o *)0x0))
  goto label_04294468;
  pUStackY_140 = (UnityEngine_Object_o *)0x429410b;
  UVar25 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
  in_XMM1_Da = UVar25.fields.z;
  fStack_e8 = in_XMM1_Da;
  fStack_e4 = in_XMM1_Db;
  fStack_e0 = (float)in_XMM1_Dc;
  fStack_dc = (float)in_XMM1_Dd;
  if ((name[1].fields == (System_String_Fields)0x0) ||
     (lVar14 = *(long *)((long)name[1].fields + 0xb8), lVar14 == 0)) goto label_04294468;
  x = *(UnityEngine_Object_o **)(lVar14 + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStackY_140 = (UnityEngine_Object_o *)0x429414e;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar16 = (UnityEngine_Object_o *)0x0;
  pUStackY_140 = (UnityEngine_Object_o *)0x429415d;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_stack_fffffffffffffec8 = INFINITY;
  fStack_114 = UVar25.fields.y;
  fStack_d8 = fStack_114;
  fStack_d4 = fStack_114;
  fStack_118 = UVar25.fields.x;
  if ((char)bVar7 == '\0') {
label_04294192:
    iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar16 = (UnityEngine_Object_o *)0x0;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto label_04294468;
    if (*(char *)&x[4].monitor != '\0') goto label_04294192;
    lVar14 = x[4].fields.m_CachedPtr;
    if ((lVar14 == 0) ||
       (pUVar9 = *(UnityEngine_Transform_o **)(lVar14 + 0x10), pUVar9 == (UnityEngine_Transform_o *)0x0))
    goto label_04294468;
    pUStackY_140 = (UnityEngine_Object_o *)0x429435a;
    UVar25 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    fVar20 = UVar25.fields.z;
    fVar19 = UVar25.fields.x;
    fVar17 = UVar25.fields.y;
    uVar22 = extraout_XMM0_Dc;
    uVar23 = extraout_XMM0_Dd;
    if (g_data_057a68cb == '\0') {
      pUStackY_140 = (UnityEngine_Object_o *)0x429437b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      in_stack_fffffffffffffecc = fVar17;
      in_stack_fffffffffffffed0 = uVar22;
      in_stack_fffffffffffffed4 = uVar23;
      in_stack_fffffffffffffed8 = fVar20;
      in_stack_fffffffffffffedc = in_XMM1_Db;
    }
    fVar21 = fVar17 - fStack_d8;
    fVar20 = fVar20 - fStack_e8;
    fVar19 = fVar19 - fStack_118;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      pUStackY_140 = (UnityEngine_Object_o *)0x42943c6;
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffecc = fVar17;
      in_stack_fffffffffffffed0 = uVar22;
      in_stack_fffffffffffffed4 = uVar23;
      in_stack_fffffffffffffed8 = fVar20;
      in_stack_fffffffffffffedc = fVar19;
    }
    in_stack_fffffffffffffec8 = fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20;
    if (in_stack_fffffffffffffec8 < 0.0) {
      pUStackY_140 = (UnityEngine_Object_o *)0x4294437;
      in_stack_fffffffffffffec8 = sqrtf(in_stack_fffffffffffffec8);
    }
    else {
      in_stack_fffffffffffffec8 = SQRT(in_stack_fffffffffffffec8);
    }
    in_XMM1_Da = INFINITY;
    if (in_stack_fffffffffffffec8 < INFINITY) {
      in_XMM1_Da = *(float *)&name[2].klass;
      in_XMM1_Db = 0.0;
      if (in_stack_fffffffffffffec8 < in_XMM1_Da) {
        iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
        pUVar16 = x;
        goto joined_r0x042941a3;
      }
    }
    in_stack_fffffffffffffec8 = INFINITY;
    in_XMM1_Db = 0.0;
    iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
    pUVar16 = (UnityEngine_Object_o *)0x0;
  }
joined_r0x042941a3:
  if (iVar3 == 0) {
    pUStackY_140 = (UnityEngine_Object_o *)0x42941aa;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    pUStackY_140 = (UnityEngine_Object_o *)0x42941d5;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_c8,__this_01,MethodInfo_List_1_T_Enumerator_Map_MapTargetable_GetEnumerator);
    fStack_e0 = fStack_e4;
    pMStack_f8 = pMStack_b8;
    _Stack_108 = _Stack_c8;
    uStack_100 = uStack_c0;
    fStack_e4 = fStack_118;
    fStack_dc = fStack_114;
label_04294220:
    do {
      do {
        do {
          pUStackY_140 = (UnityEngine_Object_o *)0x429422c;
          __this_02.fields._list._4_4_ = in_stack_fffffffffffffecc;
          __this_02.fields._list._0_4_ = in_stack_fffffffffffffec8;
          __this_02.fields._index = in_stack_fffffffffffffed0;
          __this_02.fields._version = in_stack_fffffffffffffed4;
          __this_02.fields._current._0_4_ = in_stack_fffffffffffffed8;
          __this_02.fields._current._4_4_ = in_stack_fffffffffffffedc;
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&_Stack_108);
          __this_06 = pMStack_f8;
          if ((char)bVar7 == '\0') {
            pUStackY_140 = (UnityEngine_Object_o *)0x4294324;
            __this_03.fields._list._4_4_ = in_stack_fffffffffffffecc;
            __this_03.fields._list._0_4_ = in_stack_fffffffffffffec8;
            __this_03.fields._index = in_stack_fffffffffffffed0;
            __this_03.fields._version = in_stack_fffffffffffffed4;
            __this_03.fields._current._0_4_ = in_stack_fffffffffffffed8;
            __this_03.fields._current._4_4_ = in_stack_fffffffffffffedc;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&_Stack_108);
            return;
          }
        } while (pMStack_f8 == (Map_MapTargetable_o *)0x0);
        pUStackY_140 = (UnityEngine_Object_o *)0x4294248;
        bVar7 = Map_MapTargetable__ValidTarget(pMStack_f8,(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      pUStackY_140 = (UnityEngine_Object_o *)0x4294256;
      UVar25 = Map_MapTargetable__GetPosition(__this_06,(MethodInfo *)0x0);
      in_stack_fffffffffffffed8 = UVar25.fields.x;
      in_stack_fffffffffffffedc = UVar25.fields.y;
      if (g_data_057a68cb == '\0') {
        pUStackY_140 = (UnityEngine_Object_o *)0x4294280;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar3 == 0) {
        pUStackY_140 = (UnityEngine_Object_o *)0x4294299;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar19 = UVar25.fields.z - fStack_e8;
      fVar19 = (in_stack_fffffffffffffed8 - fStack_e4) * (in_stack_fffffffffffffed8 - fStack_e4) +
               (in_stack_fffffffffffffedc - fStack_d8) * (in_stack_fffffffffffffedc - fStack_d8) +
               fVar19 * fVar19;
      if (fVar19 < 0.0) goto label_042942eb;
      fVar19 = SQRT(fVar19);
    } while (in_stack_fffffffffffffec8 <= fVar19);
    goto label_04294210;
  }
label_04294468:
  pUStackY_140 = (UnityEngine_Object_o *)0x429446d;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  uVar11 = auVar28._0_8_;
  if (auVar28._8_4_ == 1) {
    pUStackY_140 = (UnityEngine_Object_o *)0x429449d;
    plVar10 = (long *)__cxa_begin_catch(uVar11);
    lVar14 = *plVar10;
    pUStackY_140 = (UnityEngine_Object_o *)0x42944a5;
    __cxa_end_catch();
    pUStackY_140 = (UnityEngine_Object_o *)0x42944b9;
    __this_04.fields._list._4_4_ = in_stack_fffffffffffffecc;
    __this_04.fields._list._0_4_ = in_stack_fffffffffffffec8;
    __this_04.fields._index = in_stack_fffffffffffffed0;
    __this_04.fields._version = in_stack_fffffffffffffed4;
    __this_04.fields._current._0_4_ = in_stack_fffffffffffffed8;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffedc;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_108);
    if (lVar14 == 0) {
      return;
    }
    pUStackY_140 = (UnityEngine_Object_o *)0x42944ca;
    uVar11 = il2cpp_runtime_helper_022fefe0(lVar14);
  }
  else {
    lVar14 = 0;
  }
  pUStackY_140 = (UnityEngine_Object_o *)0x42944e1;
  __this_05.fields._list._4_4_ = in_stack_fffffffffffffecc;
  __this_05.fields._list._0_4_ = in_stack_fffffffffffffec8;
  __this_05.fields._index = in_stack_fffffffffffffed0;
  __this_05.fields._version = in_stack_fffffffffffffed4;
  __this_05.fields._current._0_4_ = in_stack_fffffffffffffed8;
  __this_05.fields._current._4_4_ = in_stack_fffffffffffffedc;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_108);
  if (lVar14 == 0) {
    pUStackY_140 = (UnityEngine_Object_o *)0x42944ee;
    _Unwind_Resume(uVar11);
  }
  pUStackY_140 = (UnityEngine_Object_o *)0x42944f6;
  lVar12 = il2cpp_runtime_helper_022fefe0(lVar14);
  pUStackY_140 = (UnityEngine_Object_o *)0x42944fe;
  il2cpp_runtime_helper_01f66400();
  lStackY_148 = lVar14;
  pUStackY_140 = pUVar16;
  if (g_data_057adced == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0();
    g_data_057adced = '\x01';
  }
  plVar10 = *(long **)(lVar12 + 0x58);
  if (plVar10 == (long *)0x0) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar22 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar12 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar12 + 0x90) = uVar22;
    *(undefined8 *)(lVar12 + 0x78) = 0;
    *(undefined8 *)(lVar12 + 0x80) = 0;
    return;
  }
  lVar14 = *plVar10;
  if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
    lVar15 = 0;
    do {
      if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_ITargetable) {
        puVar13 = (undefined8 *)
                  (lVar14 + (long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) + 1) * 0x10 + 0x138);
        goto label_04294606;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
  }
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_ITargetable,1);
label_04294606:
  __this_08.fields.value.fields._4_8_ = (*(code *)*puVar13)(plVar10,puVar13[1]);
  if (*(char *)(lVar12 + 0x78) == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      in_XMM1_Db = 0.0;
      g_data_057a65d5 = '\x01';
    }
    uVar22 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar12 + 0x88) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar12 + 0x90) = uVar22;
  }
  else {
    fStackY_160 = (float)__this_08.fields.value.fields._4_8_ - (float)*(undefined8 *)(lVar12 + 0x7c);
    fStackY_15c = (float)((ulong)__this_08.fields.value.fields._4_8_ >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar12 + 0x7c) >> 0x20);
    fStackY_158 = extraout_XMM0_Dc_00 - 0.0;
    fStackY_154 = extraout_XMM0_Dd_00 - 0.0;
    fVar19 = *(float *)(lVar12 + 0x84);
    fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Db = 0.0;
    auVar6._4_4_ = fStackY_15c;
    auVar6._0_4_ = fStackY_160;
    auVar6._8_4_ = fStackY_158;
    auVar6._12_4_ = fStackY_154;
    auVar24._4_4_ = fVar17;
    auVar24._0_4_ = fVar17;
    auVar24._8_4_ = extraout_XMM0_Dc_01;
    auVar24._12_4_ = extraout_XMM0_Dd_01;
    auVar24 = divps(auVar6,auVar24);
    *(long *)(lVar12 + 0x88) = auVar24._0_8_;
    *(float *)(lVar12 + 0x90) = (in_XMM1_Da - fVar19) / fVar17;
  }
  uStackY_170 = 0;
  uStackY_168 = 0;
  UVar25.fields.y = in_XMM1_Db;
  UVar25.fields.x = in_XMM1_Da;
  UVar25.fields.z = (float)__this_08.fields.value.fields._4_8_;
  __this_08.fields._0_8_ = &uStackY_170;
  System_Nullable_Vector3____ctor(__this_08,UVar25,MethodInfo_Nullable_1_UnityEngine_Vector3);
  *(undefined8 *)(lVar12 + 0x78) = uStackY_170;
  *(undefined8 *)(lVar12 + 0x80) = uStackY_168;
  return;
label_042942eb:
  pUStackY_140 = (UnityEngine_Object_o *)0x42942f0;
  fVar19 = sqrtf(fVar19);
  if (fVar19 < in_stack_fffffffffffffec8) {
label_04294210:
    if (fVar19 < *(float *)&name[2].klass) {
      in_stack_fffffffffffffec8 = fVar19;
    }
  }
  goto label_04294220;
}


// Controllers.HumanAIController$$HasAIState
// il2cpp: bool Controllers_HumanAIController__HasAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4296e10

bool_conflict
Controllers_HumanAIController__HasAIState
          (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  code *vtableDispatch;
  long lVar3;
  Characters_ITargetable_o *pCVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  Il2CppObject *pIVar6;
  Controllers_HumanAIController_o *pCVar7;
  System_Collections_Generic_Dictionary_object__object__c *pSVar8;
  Il2CppClass *pIVar9;
  void *pvVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_Collections_Generic_HashSet_T__o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  undefined8 extraout_RDX_03;
  Controllers_HumanAIController_o *__this_01;
  Il2CppClass *__this_02;
  void **ppvVar13;
  System_String_o *key;
  Controllers_HumanAIController_o *__this_03;
  System_Collections_Generic_HashSet_T__o *__this_04;
  float *pfVar14;
  undefined4 uVar15;
  float in_XMM1_Da;
  int32_t in_XMM2_Da;
  undefined1 auVar16 [16];
  
  key = name;
  if (g_data_057adcf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adcf9 = '\x01';
  }
  __this_01 = (Controllers_HumanAIController_o *)(__this->fields).Callbacks;
  if (__this_01 != (Controllers_HumanAIController_o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcfa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    g_data_057adcfa = '\x01';
  }
  __this_03 = (Controllers_HumanAIController_o *)(__this_01->fields).Callbacks;
  if (__this_03 != (Controllers_HumanAIController_o *)0x0) {
    pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                        (Il2CppObject *)key,MethodInfo_HumanAIState_get_Item);
    return (bool_conflict)pIVar6;
  }
  pCVar4 = (Characters_ITargetable_o *)il2cpp_runtime_helper_022b2c90();
  pMVar12 = extraout_RDX;
  if (g_data_057adcfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfb = '\x01';
    pMVar12 = extraout_RDX_00;
  }
  __this_02 = (Il2CppClass *)0x0;
  Controllers_HumanAIController__set_Target(__this_03,(Characters_ITargetable_o *)0x0,pMVar12);
  (__this_03->fields)._target = pCVar4;
  (__this_03->fields).TargetPosition.fields.x = in_XMM1_Da;
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields).Callbacks;
  if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04296fea:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_02 = "MoveTo";
    pCVar7 = (Controllers_HumanAIController_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar11,(Il2CppObject *)"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pCVar7 == (Controllers_HumanAIController_o *)0x0) goto label_04296fea;
    pSVar8 = (System_Collections_Generic_Dictionary_object__object__c *)pCVar7->klass;
    bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
    __this_01 = pCVar7;
    __this_02 = TypeInfo_MoveTo;
    if ((bVar1 <= (pSVar8->_2).naturalAligment) &&
       ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MoveTo)) {
      *(int32_t *)&(pCVar7->fields)._character = in_XMM2_Da;
      if (pCVar7 != *(Controllers_HumanAIController_o **)&(__this_03->fields).TargetVelocity.fields.z) {
        pfVar14 = &(__this_03->fields).TargetVelocity.fields.z;
        (*(pSVar8->vtable)._6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.methodPtr)
                  (pCVar7,(pSVar8->vtable)._6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.
                          method);
        plVar2 = *(long **)pfVar14;
        *(Controllers_HumanAIController_o **)pfVar14 = pCVar7;
        auVar16 = il2cpp_runtime_helper_022b4080(pfVar14,pCVar7);
        pSVar8 = auVar16._0_8_;
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x1b8);
          bVar5 = (*vtableDispatch)
                            (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),auVar16._8_8_,vtableDispatch);
          return bVar5;
        }
      }
      return (bool_conflict)pSVar8;
    }
  }
  uVar15 = il2cpp_runtime_helper_022b2fd0();
  pMVar12 = extraout_RDX_01;
  if (g_data_057adcfc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfc = '\x01';
    pMVar12 = extraout_RDX_02;
  }
  Controllers_HumanAIController__set_Target(__this_01,(Characters_ITargetable_o *)__this_02,pMVar12);
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields).Callbacks;
  if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar9 = (Il2CppClass *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar11,(Il2CppObject *)"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pIVar9 != (Il2CppClass *)0x0) {
      pvVar10 = (pIVar9->_1).image;
      bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
      __this_02 = pIVar9;
      if ((bVar1 <= *(byte *)((long)pvVar10 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar10 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MoveTo)) {
        *(undefined4 *)&(pIVar9->_1).byval_arg.data = uVar15;
        if (pIVar9 != *(Il2CppClass **)&(__this_01->fields).TargetVelocity.fields.z) {
          pfVar14 = &(__this_01->fields).TargetVelocity.fields.z;
          (**(code **)((long)pvVar10 + 0x198))(pIVar9,*(undefined8 *)((long)pvVar10 + 0x1a0));
          plVar2 = *(long **)pfVar14;
          *(Il2CppClass **)pfVar14 = pIVar9;
          auVar16 = il2cpp_runtime_helper_022b4080(pfVar14,pIVar9);
          pvVar10 = auVar16._0_8_;
          if (plVar2 != (long *)0x0) {
            vtableDispatch = *(code **)(*plVar2 + 0x1b8);
            bVar5 = (*vtableDispatch)
                              (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),auVar16._8_8_,vtableDispatch);
            return bVar5;
          }
        }
        return (bool_conflict)pvVar10;
      }
      goto label_04297122;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04297122:
  il2cpp_runtime_helper_022b2fd0();
  pIVar9 = __this_02;
  Controllers_HumanAIController__set_Target
            ((Controllers_HumanAIController_o *)__this_02,(Characters_ITargetable_o *)0x0,method_00);
  lVar3 = *(long *)&(__this_02->_1).byval_arg.bits;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0xcc) = 0;
    *(undefined4 *)(lVar3 + 0x218) = 0;
    plVar2 = (__this_02->_1).methods;
    if (plVar2 != (long *)0x0) {
      ppvVar13 = &(__this_02->_1).methods;
      *ppvVar13 = (void *)0x0;
      il2cpp_runtime_helper_022b4080(ppvVar13,0);
      vtableDispatch = *(code **)(*plVar2 + 0x1b8);
      bVar5 = (*vtableDispatch)
                        (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX_03,vtableDispatch);
      return bVar5;
    }
    return (bool_conflict)lVar3;
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
  *(undefined4 *)&(pIVar9->_1).this_arg.data = 0x461c4000;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  (pIVar9->_1).nestedTypes = (Il2CppClass **)pIVar6;
  il2cpp_runtime_helper_022b4080(&(pIVar9->_1).nestedTypes,pIVar6);
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar11,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
  (pIVar9->_1).implementedInterfaces = (Il2CppClass **)pSVar11;
  il2cpp_runtime_helper_022b4080(&(pIVar9->_1).implementedInterfaces,pSVar11);
  *(undefined1 *)&(pIVar9->_1).interfaceOffsets = 1;
  __this_00 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  __this_04 = __this_00;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_00 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_00,0xf,MethodInfo_Boolean_Add);
    (pIVar9->_2).typeHierarchy = (Il2CppClass **)__this_00;
    il2cpp_runtime_helper_022b4080(&pIVar9->_2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pIVar9,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// Controllers.HumanAIController$$GetAIState
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIController__GetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4296e60

Controllers_HumanAIState_o *
Controllers_HumanAIController__GetAIState
          (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  code *vtableDispatch;
  Characters_ITargetable_o *pCVar3;
  Controllers_HumanAIState_o *pCVar4;
  Controllers_HumanAIController_o *pCVar5;
  Il2CppClass *pIVar6;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_T__o *__this_01;
  Controllers_HumanAIState_o *extraout_RAX;
  Controllers_HumanAIState_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  MethodInfo *method_00;
  undefined8 extraout_RDX_03;
  Il2CppClass *__this_02;
  void **ppvVar9;
  Controllers_HumanAIController_o *__this_03;
  System_Collections_Generic_HashSet_T__o *__this_04;
  float *pfVar10;
  undefined4 uVar11;
  float in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined1 auVar12 [16];
  
  if (g_data_057adcfa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    g_data_057adcfa = '\x01';
  }
  __this_03 = (Controllers_HumanAIController_o *)(__this->fields).Callbacks;
  if (__this_03 != (Controllers_HumanAIController_o *)0x0) {
    pCVar4 = (Controllers_HumanAIState_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                        (Il2CppObject *)name,MethodInfo_HumanAIState_get_Item);
    return pCVar4;
  }
  pCVar3 = (Characters_ITargetable_o *)il2cpp_runtime_helper_022b2c90();
  pMVar8 = extraout_RDX;
  if (g_data_057adcfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfb = '\x01';
    pMVar8 = extraout_RDX_00;
  }
  __this_02 = (Il2CppClass *)0x0;
  Controllers_HumanAIController__set_Target(__this_03,(Characters_ITargetable_o *)0x0,pMVar8);
  (__this_03->fields)._target = pCVar3;
  (__this_03->fields).TargetPosition.fields.x = in_XMM1_Da;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields).Callbacks;
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04296fea:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_02 = "MoveTo";
    pCVar5 = (Controllers_HumanAIController_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar7,(Il2CppObject *)"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pCVar5 == (Controllers_HumanAIController_o *)0x0) goto label_04296fea;
    pIVar6 = (Il2CppClass *)pCVar5->klass;
    bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
    __this = pCVar5;
    __this_02 = TypeInfo_MoveTo;
    if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MoveTo)) {
      *(undefined4 *)&(pCVar5->fields)._character = in_XMM2_Da;
      if (pCVar5 != *(Controllers_HumanAIController_o **)&(__this_03->fields).TargetVelocity.fields.z) {
        pfVar10 = &(__this_03->fields).TargetVelocity.fields.z;
        (*pIVar6->vtable[6].methodPtr)(pCVar5,pIVar6->vtable[6].method);
        plVar2 = *(long **)pfVar10;
        *(Controllers_HumanAIController_o **)pfVar10 = pCVar5;
        auVar12 = il2cpp_runtime_helper_022b4080(pfVar10,pCVar5);
        pIVar6 = auVar12._0_8_;
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x1b8);
          pCVar4 = (Controllers_HumanAIState_o *)
                   (*vtableDispatch)
                             (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),auVar12._8_8_,vtableDispatch);
          return pCVar4;
        }
      }
      return (Controllers_HumanAIState_o *)pIVar6;
    }
  }
  uVar11 = il2cpp_runtime_helper_022b2fd0();
  pMVar8 = extraout_RDX_01;
  if (g_data_057adcfc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfc = '\x01';
    pMVar8 = extraout_RDX_02;
  }
  Controllers_HumanAIController__set_Target(__this,(Characters_ITargetable_o *)__this_02,pMVar8);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar6 = (Il2CppClass *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar7,(Il2CppObject *)"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pIVar6 != (Il2CppClass *)0x0) {
      pCVar4 = (pIVar6->_1).image;
      bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
      __this_02 = pIVar6;
      if ((bVar1 <= *(byte *)&pCVar4[9].fields.Human) &&
         (*(Il2CppClass **)((long)pCVar4[6].monitor + (ulong)bVar1 * 8 + -8) == TypeInfo_MoveTo)) {
        *(undefined4 *)&(pIVar6->_1).byval_arg.data = uVar11;
        if (pIVar6 != *(Il2CppClass **)&(__this->fields).TargetVelocity.fields.z) {
          pfVar10 = &(__this->fields).TargetVelocity.fields.z;
          (*(code *)pCVar4[0xc].fields.Controller)(pIVar6,pCVar4[0xd].klass);
          plVar2 = *(long **)pfVar10;
          *(Il2CppClass **)pfVar10 = pIVar6;
          auVar12 = il2cpp_runtime_helper_022b4080(pfVar10,pIVar6);
          pCVar4 = auVar12._0_8_;
          if (plVar2 != (long *)0x0) {
            vtableDispatch = *(code **)(*plVar2 + 0x1b8);
            pCVar4 = (Controllers_HumanAIState_o *)
                     (*vtableDispatch)
                               (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),auVar12._8_8_,vtableDispatch);
            return pCVar4;
          }
        }
        return pCVar4;
      }
      goto label_04297122;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04297122:
  il2cpp_runtime_helper_022b2fd0();
  pIVar6 = __this_02;
  Controllers_HumanAIController__set_Target
            ((Controllers_HumanAIController_o *)__this_02,(Characters_ITargetable_o *)0x0,method_00);
  pCVar4 = *(Controllers_HumanAIState_o **)&(__this_02->_1).byval_arg.bits;
  if (pCVar4 != (Controllers_HumanAIState_o *)0x0) {
    *(undefined1 *)((long)&pCVar4[6].monitor + 4) = 0;
    *(undefined4 *)&pCVar4[0x10].fields.Controller = 0;
    plVar2 = (__this_02->_1).methods;
    if (plVar2 != (long *)0x0) {
      ppvVar9 = &(__this_02->_1).methods;
      *ppvVar9 = (void *)0x0;
      il2cpp_runtime_helper_022b4080(ppvVar9,0);
      vtableDispatch = *(code **)(*plVar2 + 0x1b8);
      pCVar4 = (Controllers_HumanAIState_o *)
               (*vtableDispatch)
                         (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX_03,vtableDispatch);
      return pCVar4;
    }
    return pCVar4;
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
  *(undefined4 *)&(pIVar6->_1).this_arg.data = 0x461c4000;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  (pIVar6->_1).nestedTypes = (Il2CppClass **)__this_00;
  il2cpp_runtime_helper_022b4080(&(pIVar6->_1).nestedTypes,__this_00);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
  (pIVar6->_1).implementedInterfaces = (Il2CppClass **)pSVar7;
  il2cpp_runtime_helper_022b4080(&(pIVar6->_1).implementedInterfaces,pSVar7);
  *(undefined1 *)&(pIVar6->_1).interfaceOffsets = 1;
  __this_01 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  __this_04 = __this_01;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_01,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_01 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,0xf,MethodInfo_Boolean_Add);
    (pIVar6->_2).typeHierarchy = (Il2CppClass **)__this_01;
    il2cpp_runtime_helper_022b4080(&pIVar6->_2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pIVar6,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// Controllers.HumanAIController$$MoveTo
// il2cpp: void Controllers_HumanAIController__MoveTo (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, float range, const MethodInfo* method);
// 0x4296eb0

void Controllers_HumanAIController__MoveTo
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,float range,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  code *vtableDispatch;
  void *pvVar3;
  long lVar4;
  Controllers_HumanAIController_o *pCVar5;
  Il2CppClass *pIVar6;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_HashSet_T__o *__this_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined8 extraout_RDX_03;
  MethodInfo *method_01;
  undefined8 extraout_RDX_04;
  Controllers_HumanAIController_o *unaff_RBX;
  Il2CppClass *__this_02;
  void **ppvVar8;
  System_Collections_Generic_HashSet_T__o *__this_03;
  float *pfVar9;
  undefined4 uVar10;
  
  if (g_data_057adcfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfb = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_02 = (Il2CppClass *)0x0;
  Controllers_HumanAIController__set_Target(__this,(Characters_ITargetable_o *)0x0,in_RDX);
  (__this->fields)._target = position.fields._0_8_;
  (__this->fields).TargetPosition.fields.x = position.fields.z;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04296fea:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_02 = "MoveTo";
    pCVar5 = (Controllers_HumanAIController_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar7,(Il2CppObject *)"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pCVar5 == (Controllers_HumanAIController_o *)0x0) goto label_04296fea;
    pIVar6 = (Il2CppClass *)pCVar5->klass;
    bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
    unaff_RBX = pCVar5;
    __this_02 = TypeInfo_MoveTo;
    if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MoveTo)) {
      *(float *)&(pCVar5->fields)._character = range;
      if (pCVar5 != *(Controllers_HumanAIController_o **)&(__this->fields).TargetVelocity.fields.z) {
        pfVar9 = &(__this->fields).TargetVelocity.fields.z;
        (*pIVar6->vtable[6].methodPtr)(pCVar5,pIVar6->vtable[6].method);
        plVar2 = *(long **)pfVar9;
        *(Controllers_HumanAIController_o **)pfVar9 = pCVar5;
        il2cpp_runtime_helper_022b4080(pfVar9,pCVar5);
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x1b8);
          (*vtableDispatch)
                    (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX_00,vtableDispatch);
          return;
        }
      }
      return;
    }
  }
  uVar10 = il2cpp_runtime_helper_022b2fd0();
  method_00 = extraout_RDX_01;
  if (g_data_057adcfc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfc = '\x01';
    method_00 = extraout_RDX_02;
  }
  Controllers_HumanAIController__set_Target(unaff_RBX,(Characters_ITargetable_o *)__this_02,method_00);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(unaff_RBX->fields).Callbacks;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar6 = (Il2CppClass *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar7,(Il2CppObject *)"MoveTo",MethodInfo_HumanAIState_get_Item);
    if (pIVar6 != (Il2CppClass *)0x0) {
      pvVar3 = (pIVar6->_1).image;
      bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
      __this_02 = pIVar6;
      if ((bVar1 <= *(byte *)((long)pvVar3 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MoveTo)) {
        *(undefined4 *)&(pIVar6->_1).byval_arg.data = uVar10;
        if (pIVar6 != *(Il2CppClass **)&(unaff_RBX->fields).TargetVelocity.fields.z) {
          pfVar9 = &(unaff_RBX->fields).TargetVelocity.fields.z;
          (**(code **)((long)pvVar3 + 0x198))(pIVar6,*(undefined8 *)((long)pvVar3 + 0x1a0));
          plVar2 = *(long **)pfVar9;
          *(Il2CppClass **)pfVar9 = pIVar6;
          il2cpp_runtime_helper_022b4080(pfVar9,pIVar6);
          if (plVar2 != (long *)0x0) {
            vtableDispatch = *(code **)(*plVar2 + 0x1b8);
            (*vtableDispatch)
                      (plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX_03,vtableDispatch);
            return;
          }
        }
        return;
      }
      goto label_04297122;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04297122:
  il2cpp_runtime_helper_022b2fd0();
  pIVar6 = __this_02;
  Controllers_HumanAIController__set_Target
            ((Controllers_HumanAIController_o *)__this_02,(Characters_ITargetable_o *)0x0,method_01);
  lVar4 = *(long *)&(__this_02->_1).byval_arg.bits;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0xcc) = 0;
    *(undefined4 *)(lVar4 + 0x218) = 0;
    plVar2 = (__this_02->_1).methods;
    if (plVar2 != (long *)0x0) {
      ppvVar8 = &(__this_02->_1).methods;
      *ppvVar8 = (void *)0x0;
      il2cpp_runtime_helper_022b4080(ppvVar8,0);
      vtableDispatch = *(code **)(*plVar2 + 0x1b8);
      (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX_04,vtableDispatch);
      return;
    }
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
  *(undefined4 *)&(pIVar6->_1).this_arg.data = 0x461c4000;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  (pIVar6->_1).nestedTypes = (Il2CppClass **)__this_00;
  il2cpp_runtime_helper_022b4080(&(pIVar6->_1).nestedTypes,__this_00);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
  (pIVar6->_1).implementedInterfaces = (Il2CppClass **)pSVar7;
  il2cpp_runtime_helper_022b4080(&(pIVar6->_1).implementedInterfaces,pSVar7);
  *(undefined1 *)&(pIVar6->_1).interfaceOffsets = 1;
  __this_01 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  __this_03 = __this_01;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_01,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_01 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,0xf,MethodInfo_Boolean_Add);
    (pIVar6->_2).typeHierarchy = (Il2CppClass **)__this_01;
    il2cpp_runtime_helper_022b4080(&pIVar6->_2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pIVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$MoveToTarget
// il2cpp: void Controllers_HumanAIController__MoveToTarget (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* targetable, float range, const MethodInfo* method);
// 0x4297000

void Controllers_HumanAIController__MoveToTarget
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *targetable,float range,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  Characters_Human_o *pCVar4;
  Controllers_HumanAIController_o *pCVar5;
  Controllers_HumanAIState_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_HashSet_T__o *__this_01;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  undefined8 extraout_RDX_01;
  System_Collections_Generic_HashSet_T__o *__this_02;
  float *pfVar7;
  
  if (g_data_057adcfc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanAIState_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MoveTo);
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057adcfc = '\x01';
    method = extraout_RDX;
  }
  Controllers_HumanAIController__set_Target(__this,targetable,method);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Callbacks;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = (Controllers_HumanAIController_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item(pSVar6,"MoveTo",MethodInfo_HumanAIState_get_Item)
    ;
    if (pCVar5 != (Controllers_HumanAIController_o *)0x0) {
      pIVar2 = (Il2CppClass *)pCVar5->klass;
      bVar1 = (TypeInfo_MoveTo->_2).naturalAligment;
      targetable = (Characters_ITargetable_o *)pCVar5;
      if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MoveTo)) {
        *(float *)&(pCVar5->fields)._character = range;
        if (pCVar5 != *(Controllers_HumanAIController_o **)&(__this->fields).TargetVelocity.fields.z) {
          pfVar7 = &(__this->fields).TargetVelocity.fields.z;
          (*pIVar2->vtable[6].methodPtr)(pCVar5,pIVar2->vtable[6].method);
          plVar3 = *(long **)pfVar7;
          *(Controllers_HumanAIController_o **)pfVar7 = pCVar5;
          il2cpp_runtime_helper_022b4080(pfVar7,pCVar5);
          if (plVar3 != (long *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x1b8);
            (*UNRECOVERED_JUMPTABLE_00)
                      (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
        return;
      }
      goto label_04297122;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04297122:
  il2cpp_runtime_helper_022b2fd0();
  pCVar5 = (Controllers_HumanAIController_o *)targetable;
  Controllers_HumanAIController__set_Target
            ((Controllers_HumanAIController_o *)targetable,(Characters_ITargetable_o *)0x0,method_00);
  pCVar4 = (((Controllers_HumanAIController_o *)targetable)->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 0;
    (pCVar4->fields).IsAttackableState = 0;
    plVar3 = *(long **)&(((Controllers_HumanAIController_o *)targetable)->fields).TargetVelocity.fields.z;
    if (plVar3 != (long *)0x0) {
      pfVar7 = &(((Controllers_HumanAIController_o *)targetable)->fields).TargetVelocity.fields.z;
      *(undefined8 *)pfVar7 = 0;
      il2cpp_runtime_helper_022b4080(pfVar7,0);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x1b8);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar3,*(undefined8 *)(*plVar3 + 0x1c0),extraout_RDX_01,UNRECOVERED_JUMPTABLE_00);
      return;
    }
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
  (pCVar5->fields).DetectRange = 10000.0;
  __this_00 = (Controllers_HumanAIState_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (pCVar5->fields).AIState = __this_00;
  il2cpp_runtime_helper_022b4080(&(pCVar5->fields).AIState,__this_00);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
  (pCVar5->fields).Callbacks = (Controllers_HumanAICallback_o *)pSVar6;
  il2cpp_runtime_helper_022b4080(&(pCVar5->fields).Callbacks,pSVar6);
  *(undefined1 *)&(pCVar5->fields).AIStates = 1;
  __this_01 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  __this_02 = __this_01;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_01,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_01 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_01,0xf,MethodInfo_Boolean_Add);
    *(System_Collections_Generic_HashSet_T__o **)&(pCVar5->fields)._moveAngle = __this_01;
    il2cpp_runtime_helper_022b4080(&(pCVar5->fields)._moveAngle);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pCVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$Idle
// il2cpp: void Controllers_HumanAIController__Idle (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x4297130

void Controllers_HumanAIController__Idle(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long *plVar2;
  code *vtableDispatch;
  Controllers_HumanAIState_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_HashSet_T__o *__this_02;
  MethodInfo *in_RDX;
  undefined8 extraout_RDX;
  float *pfVar3;
  Controllers_HumanAIController_o *__this_03;
  System_Collections_Generic_HashSet_T__o *__this_04;
  
  __this_03 = __this;
  Controllers_HumanAIController__set_Target(__this,(Characters_ITargetable_o *)0x0,in_RDX);
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4) = 0;
    (pCVar1->fields).IsAttackableState = 0;
    plVar2 = *(long **)&(__this->fields).TargetVelocity.fields.z;
    if (plVar2 != (long *)0x0) {
      pfVar3 = &(__this->fields).TargetVelocity.fields.z;
      *(undefined8 *)pfVar3 = 0;
      il2cpp_runtime_helper_022b4080(pfVar3,0);
      vtableDispatch = *(code **)(*plVar2 + 0x1b8);
      (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x1c0),extraout_RDX,vtableDispatch);
      return;
    }
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
  (__this_03->fields).DetectRange = 10000.0;
  __this_00 = (Controllers_HumanAIState_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_03->fields).AIState = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).AIState,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
  (__this_03->fields).Callbacks = (Controllers_HumanAICallback_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).Callbacks,__this_01);
  *(undefined1 *)&(__this_03->fields).AIStates = 1;
  __this_02 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  __this_04 = __this_02;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_02,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_02 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,0xf,MethodInfo_Boolean_Add);
    *(System_Collections_Generic_HashSet_T__o **)&(__this_03->fields)._moveAngle = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._moveAngle);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$.ctor
// il2cpp: void Controllers_HumanAIController___ctor (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x42971b0

void Controllers_HumanAIController___ctor(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Controllers_HumanAIState_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_HashSet_T__o *__this_02;
  System_Collections_Generic_HashSet_T__o *__this_03;
  
  if (g_data_057adcfd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_HumanAIState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAICallback);
    g_data_057adcfd = '\x01';
  }
  (__this->fields).DetectRange = 10000.0;
  __this_00 = (Controllers_HumanAIState_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanAICallback);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).AIState = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AIState,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_Controllers_HumanAIState);
  (__this->fields).Callbacks = (Controllers_HumanAICallback_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Callbacks,__this_01);
  *(undefined1 *)&(__this->fields).AIStates = 1;
  __this_02 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  __this_03 = __this_02;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_02,MethodInfo_HashSet_1_Characters_HumanState);
  if (__this_02 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,0xf,MethodInfo_Boolean_Add);
    *(System_Collections_Generic_HashSet_T__o **)&(__this->fields)._moveAngle = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._moveAngle);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$.cctor
// il2cpp: void Controllers_HumanAIController___cctor (const MethodInfo* method);
// 0x4297360

void Controllers_HumanAIController___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (g_data_057adcfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAIController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adcfe = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanAIController + 0xb8))->m_Mask = (int32_t)UVar3.fields.m_Mask
              ;
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcff == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcff = '\x01';
  }
  return;
}


