// Type: Weather.RainWeatherEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/RainWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/RainWeatherEffect.cs
// --------------------------------

// Weather.RainWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_RainWeatherEffect__get__positionOffset (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x181dae3b0

UnityEngine_Vector3_o *
Weather_RainWeatherEffect__get__positionOffset
          (UnityEngine_Vector3_o *__return_storage_ptr__,Weather_RainWeatherEffect_o *__this,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  (__return_storage_ptr__->fields).x = (pUVar3->upVector).fields.x * 30.0;
  uVar1 = (pUVar3->upVector).fields.y;
  uVar2 = (pUVar3->upVector).fields.z;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 30.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 30.0;
  return __return_storage_ptr__;
}


// Weather.RainWeatherEffect$$Randomize
// il2cpp: void Weather_RainWeatherEffect__Randomize (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x181dadcd0
// eh: try 0x181daddc2..0x181dae08a -> pad 0x1833193c0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dae021: mov rdx, qword ptr [rip + 0x22e1e20]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x181dae028: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dae02d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dae032: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dae037: test rcx, rcx
// asm:   0x181dae03a: jne 0x181dae08a
// asm:   0x181dae08a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833193c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833193c5: push rbp
// asm:   0x1833193c6: sub rsp, 0x30
// asm:   0x1833193ca: mov rbp, rdx
// asm:   0x1833193cd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x1833193d4: mov rcx, qword ptr [rax]
// asm:   0x1833193d7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833193db: movabs rax, 0
// asm:   0x1833193e5: add rsp, 0x30
// asm:   0x1833193e9: pop rbp
// asm:   0x1833193ea: ret 

void Weather_RainWeatherEffect__Randomize(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Il2CppObject *__this_01;
  bool bVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  float fVar12;
  float angle;
  System_Collections_Generic_List_Enumerator_object__o local_148;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_Fields local_118;
  UnityEngine_Vector3_Fields local_108;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  UnityEngine_Vector3_o local_b0;
  UnityEngine_Vector3_o local_a0;
  UnityEngine_Vector3_o local_90 [8];
  
  if (Il2CppMethodInitialized_184344920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    Il2CppMethodInitialized_184344920 = '\x01';
  }
  local_148.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.fields._index = 0;
  local_148.fields._version = 0;
  local_148.fields._current = (Il2CppObject *)0x0;
  fVar12 = UnityEngine_Random__Range(0.0,20.0,(MethodInfo *)0x0);
  fVar12 = UnityEngine_Random__Range(-fVar12,fVar12,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_d8,(System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
  local_148.fields._list = local_d8.fields._list;
  local_148.fields._index = local_d8.fields._index;
  local_148.fields._version = local_d8.fields._version;
  local_148.fields._current = local_d8.fields._current;
  while( true ) {
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_148,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    __this_01 = local_148.fields._current;
    if (!bVar8) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_148,
                 MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
      return;
    }
    if ((UnityEngine_Component_o *)local_148.fields._current == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)local_148.fields._current,(MethodInfo *)0x0);
    pUVar10 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)
                        (&local_b0,__this,(__this->klass->vtable)._4_get__positionOffset.method);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_128.x = (pUVar10->fields).x;
    local_128.y = (pUVar10->fields).y;
    local_128.z = (pUVar10->fields).z;
    UnityEngine_Transform__set_localPosition(pUVar9,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_d8.fields._list = *(System_Collections_Generic_List_T__o **)&(pUVar6->identityQuaternion).fields;
    local_d8.fields._index = (int32_t)(pUVar6->identityQuaternion).fields.z;
    local_d8.fields._version = (int32_t)(pUVar6->identityQuaternion).fields.w;
    UnityEngine_Transform__set_localRotation(pUVar9,(UnityEngine_Quaternion_o *)&local_d8,(MethodInfo *)0x0);
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Transform__get_position(&local_a0,pUVar9,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar10->fields).x;
    uVar1._4_4_ = (pUVar10->fields).y;
    fVar4 = (pUVar10->fields).z;
    if (Il2CppMethodInitialized_18433de5d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5d = '\x01';
    }
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_118.x = (pUVar7->forwardVector).fields.x;
    local_118.y = (pUVar7->forwardVector).fields.y;
    local_118.z = (pUVar7->forwardVector).fields.z;
    local_108._0_8_ = uVar1;
    local_108.z = fVar4;
    UnityEngine_Transform__RotateAround
              (pUVar11,(UnityEngine_Vector3_o *)&local_108,(UnityEngine_Vector3_o *)&local_118,fVar12,
               (MethodInfo *)0x0);
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Transform__get_position(local_90,pUVar9,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar10->fields).x;
    uVar2._4_4_ = (pUVar10->fields).y;
    fVar4 = (pUVar10->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3._0_4_ = (pUVar7->upVector).fields.x;
    uVar3._4_4_ = (pUVar7->upVector).fields.y;
    fVar5 = (pUVar7->upVector).fields.z;
    angle = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
    local_f8._0_8_ = uVar3;
    local_f8.z = fVar5;
    local_e8._0_8_ = uVar2;
    local_e8.z = fVar4;
    UnityEngine_Transform__RotateAround
              (pUVar11,(UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Vector3_o *)&local_f8,angle,
               (MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.RainWeatherEffect$$SetLevel
// il2cpp: void Weather_RainWeatherEffect__SetLevel (Weather_RainWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x181dae0a0

void Weather_RainWeatherEffect__SetLevel(Weather_RainWeatherEffect_o *__this,float level,MethodInfo *method)

{
  _func_35 *p_Var1;
  System_Collections_Generic_List_ParticleSystem__o *pSVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar4;
  Weather_RainWeatherEffect_c *pWVar5;
  int32_t iVar6;
  MethodInfo *pMVar7;
  float fVar8;
  float fVar9;
  UnityEngine_ParticleSystem_EmissionModule_o local_res8;
  UnityEngine_ParticleSystem_MainModule_o local_res20;
  UnityEngine_ParticleSystem_EmissionModule_o local_68;
  UnityEngine_ParticleSystem_MainModule_o local_60;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_58;
  UnityEngine_ParticleSystem_MinMaxCurve_o local_38;
  
  if (Il2CppMethodInitialized_184344921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    Il2CppMethodInitialized_184344921 = '\x01';
  }
  (__this->fields)._level = level;
  local_60.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_68.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res20.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (0.0 < level) {
    pMVar7 = (__this->klass->vtable)._12_SetActiveParticleSystem.method;
    p_Var1 = (__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr;
    if (level < 0.5) {
      fVar9 = level + level;
      (*p_Var1)(__this,0,pMVar7);
      pSVar2 = (__this->fields)._particleSystems;
      if (pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_181dae38f;
      pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,0,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181dae38f;
      local_60.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_MainModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar3,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._particleSystems;
      if (pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_181dae38f;
      pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,0,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181dae38f;
      local_68.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar3,(MethodInfo *)0x0);
      fVar8 = (*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                        (__this,fVar9 * 150.0 + 50.0,(__this->klass->vtable)._18_ClampParticles.method);
      pUVar4 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&local_38,fVar8,(MethodInfo *)0x0);
      local_58.m_Mode = (pUVar4->fields).m_Mode;
      local_58.m_CurveMultiplier = (pUVar4->fields).m_CurveMultiplier;
      local_58.m_CurveMin = (pUVar4->fields).m_CurveMin;
      local_58.m_CurveMax = (pUVar4->fields).m_CurveMax;
      local_58.m_ConstantMin = (pUVar4->fields).m_ConstantMin;
      local_58.m_ConstantMax = (pUVar4->fields).m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                (&local_68,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_58,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                         (&local_38,fVar9 * 30.0 + 30.0,(MethodInfo *)0x0);
      local_58.m_Mode = (pUVar4->fields).m_Mode;
      local_58.m_CurveMultiplier = (pUVar4->fields).m_CurveMultiplier;
      local_58.m_CurveMin = (pUVar4->fields).m_CurveMin;
      local_58.m_CurveMax = (pUVar4->fields).m_CurveMax;
      local_58.m_ConstantMin = (pUVar4->fields).m_ConstantMin;
      local_58.m_ConstantMax = (pUVar4->fields).m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize
                (&local_60,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_58,(MethodInfo *)0x0);
      iVar6 = 0;
      pWVar5 = __this->klass;
      pMVar7 = (pWVar5->vtable)._14_SetActiveAudio.method;
    }
    else {
      fVar9 = (level - 0.5) + (level - 0.5);
      (*p_Var1)(__this,1,pMVar7);
      pSVar2 = (__this->fields)._particleSystems;
      if (pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
label_181dae38f:
        ThrowNullReferenceException();
      }
      pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181dae38f;
      local_res20.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_MainModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar3,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._particleSystems;
      if (pSVar2 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_181dae38f;
      pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181dae38f;
      local_res8.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar3,(MethodInfo *)0x0);
      fVar8 = (*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                        (__this,fVar9 * 150.0 + 100.0,(__this->klass->vtable)._18_ClampParticles.method);
      pUVar4 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&local_38,fVar8,(MethodInfo *)0x0);
      local_58.m_Mode = (pUVar4->fields).m_Mode;
      local_58.m_CurveMultiplier = (pUVar4->fields).m_CurveMultiplier;
      local_58.m_CurveMin = (pUVar4->fields).m_CurveMin;
      local_58.m_CurveMax = (pUVar4->fields).m_CurveMax;
      local_58.m_ConstantMin = (pUVar4->fields).m_ConstantMin;
      local_58.m_ConstantMax = (pUVar4->fields).m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_58,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                         (&local_38,fVar9 * 10.0 + 50.0,(MethodInfo *)0x0);
      local_58.m_Mode = (pUVar4->fields).m_Mode;
      local_58.m_CurveMultiplier = (pUVar4->fields).m_CurveMultiplier;
      local_58.m_CurveMin = (pUVar4->fields).m_CurveMin;
      local_58.m_CurveMax = (pUVar4->fields).m_CurveMax;
      local_58.m_ConstantMin = (pUVar4->fields).m_ConstantMin;
      local_58.m_ConstantMax = (pUVar4->fields).m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize
                (&local_res20,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_58,(MethodInfo *)0x0);
      iVar6 = 1;
      pWVar5 = __this->klass;
      pMVar7 = (pWVar5->vtable)._14_SetActiveAudio.method;
    }
    (*(pWVar5->vtable)._14_SetActiveAudio.methodPtr)(__this,iVar6,fVar9 * 0.25 + 0.25,pMVar7);
  }
  return;
}


// Weather.RainWeatherEffect$$Setup
// il2cpp: void Weather_RainWeatherEffect__Setup (Weather_RainWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181dae3a0

void
Weather_RainWeatherEffect__Setup(Weather_RainWeatherEffect_o* __this, UnityEngine_Transform_o* parent, MethodInfo* method)

{
  Weather_BaseWeatherEffect__Setup((Weather_BaseWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.RainWeatherEffect$$.ctor
// il2cpp: void Weather_RainWeatherEffect___ctor (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1230

void
Weather_RainWeatherEffect___ctor(Weather_RainWeatherEffect_o* __this, MethodInfo* method)

{
  Weather_BaseWeatherEffect___ctor((Weather_BaseWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


