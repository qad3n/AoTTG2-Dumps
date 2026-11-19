// Type: Weather.RainWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/RainWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/RainWeatherEffect.cs
// --------------------------------

// Weather.RainWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_RainWeatherEffect__get__positionOffset (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x5855fd0

UnityEngine_Vector3_o
Weather_RainWeatherEffect__get__positionOffset(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.x;
  uVar2 = (pUVar3->upVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 30.0;
  UVar4.fields.y = (float)uVar2 * 30.0;
  UVar4.fields.z = (pUVar3->upVector).fields.z * 30.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Weather.RainWeatherEffect$$Randomize
// il2cpp: void Weather_RainWeatherEffect__Randomize (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x5856020
// eh: try 0x585611a..0x585631d -> pad 0x585634a (+21 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5856364..0x5856369 -> pad 0x585638e cleanup
// eh: try 0x5856391..0x585639b -> pad 0x58563a3 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5856322: jmp 0x585634c
// asm:   0x5856324: jmp 0x585634c
// asm:   0x5856326: jmp 0x585634c
// asm:   0x5856328: jmp 0x585634c
// asm:   0x585632a: jmp 0x585634c
// asm:   0x585632c: jmp 0x585634c
// asm:   0x585632e: jmp 0x585634c
// asm:   0x5856330: jmp 0x585634c
// asm:   0x5856332: jmp 0x585634c
// asm:   0x5856334: jmp 0x585634c
// asm:   0x5856336: jmp 0x585634c
// asm:   0x5856338: jmp 0x585634c
// asm:   0x585633a: jmp 0x585634c
// asm:   0x585633c: jmp 0x585634c
// asm:   0x585633e: jmp 0x585634c
// asm:   0x5856340: jmp 0x585634c
// asm:   0x5856342: jmp 0x585634c
// asm:   0x5856344: jmp 0x585634c
// asm:   0x5856346: jmp 0x585634c
// asm:   0x5856348: jmp 0x585634c
// asm:   0x585634a: jmp 0x585634c
// asm:   0x585634c: mov rbx, rax
// asm:   0x585634f: cmp edx, 1
// asm:   0x5856352: jne 0x5856391
// asm:   0x5856354: mov rdi, rbx
// asm:   0x5856357: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585635c: mov rbx, qword ptr [rax]
// asm:   0x585635f: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5856364: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5856369: lea rax, [rip + 0x1a38338]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x5856370: mov rsi, qword ptr [rax]
// asm:   0x5856373: lea rdi, [rsp + 0x10]
// asm:   0x5856378: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585637d: test rbx, rbx
// asm:   0x5856380: je 0x58562eb
// asm:   0x5856386: mov rdi, rbx
// asm:   0x5856389: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585638e: mov rbx, rax
// asm:   0x5856391: lea rdi, [rsp + 0x28]
// asm:   0x5856396: call 0x2fce6c0  ; il2cpp_runtime_helper_02fce6c0()
// asm:   0x585639b: mov rdi, rbx
// asm:   0x585639e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58563a3: mov rdi, rax
// asm:   0x58563a6: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_RainWeatherEffect__Randomize(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Il2CppObject *__this_01;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  float angle;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o axis;
  System_Collections_Generic_List_Enumerator_object__o SStack_88;
  undefined1 auStack_70 [16];
  UnityEngine_Component_o *pUStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07545078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    Il2CppMethodInitialized_07545078 = '\x01';
  }
  SStack_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_88.fields._index = 0;
  SStack_88.fields._version = 0;
  SStack_88.fields._current = (Il2CppObject *)0x0;
  fVar6 = UnityEngine_Random__Range(0.0,20.0,(MethodInfo *)0x0);
  fVar6 = UnityEngine_Random__Range(-fVar6,fVar6,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
  SStack_88.fields._current = (Il2CppObject *)pUStack_60;
  SStack_88.fields._list = (System_Collections_Generic_List_T__o *)auStack_70._0_8_;
  SStack_88.fields._index = auStack_70._8_4_;
  SStack_88.fields._version = auStack_70._12_4_;
  auStack_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_70._8_8_ = &SStack_88;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&SStack_88,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    __this_01 = SStack_88.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&SStack_88,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
      return;
    }
    if ((UnityEngine_Component_o *)SStack_88.fields._current == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)SStack_88.fields._current,(MethodInfo *)0x0);
    UVar7 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)
                      (__this,(__this->klass->vtable)._4_get__positionOffset.method);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__set_localPosition(pUVar4,UVar7,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__set_localRotation
              (pUVar4,(UnityEngine_Quaternion_o)
                      *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._transform;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    auStack_58._8_4_ = extraout_XMM0_Dc;
    auStack_58._0_8_ = UVar7.fields._0_8_;
    auStack_58._12_4_ = extraout_XMM0_Dd;
    if (Il2CppMethodInitialized_0753e72e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72e = '\x01';
    }
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar7.fields.x = (float)auStack_58._0_4_;
    UVar7.fields.y = (float)auStack_58._4_4_;
    UnityEngine_Transform__RotateAround
              (pUVar5,UVar7,
               (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
               fVar6,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._transform;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    point.fields.z = UVar7.fields.z;
    auStack_58._8_4_ = extraout_XMM0_Dc_00;
    auStack_58._0_8_ = UVar7.fields._0_8_;
    auStack_58._12_4_ = extraout_XMM0_Dd_00;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    uStack_48._0_4_ = (pUVar2->upVector).fields.x;
    uStack_48._4_4_ = (pUVar2->upVector).fields.y;
    uStack_40 = 0;
    fVar1 = (pUVar2->upVector).fields.z;
    angle = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) break;
    point.fields.x = (float)auStack_58._0_4_;
    point.fields.y = (float)auStack_58._4_4_;
    axis.fields.z = fVar1;
    axis.fields.x = (float)(undefined4)uStack_48;
    axis.fields.y = (float)uStack_48._4_4_;
    UnityEngine_Transform__RotateAround(pUVar5,point,axis,angle,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Weather.RainWeatherEffect$$SetLevel
// il2cpp: void Weather_RainWeatherEffect__SetLevel (Weather_RainWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x58563b0

void Weather_RainWeatherEffect__SetLevel(Weather_RainWeatherEffect_o *__this,float level,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_02;
  UnityEngine_ParticleSystem_o *pUVar2;
  Weather_RainWeatherEffect_c *pWVar3;
  MethodInfo *pMVar4;
  int32_t iVar5;
  float fVar6;
  float fVar7;
  UnityEngine_ParticleSystem_EmissionModule_o UStack_60;
  UnityEngine_ParticleSystem_MainModule_o UStack_58;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_50;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_30;
  
  if (Il2CppMethodInitialized_07545079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    Il2CppMethodInitialized_07545079 = '\x01';
  }
  (__this->fields)._level = level;
  if (0.0 < level) {
    if (0.5 <= level) {
      (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
                (__this,1,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_058566b9;
      pUVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto label_058566b9;
      UStack_58 = UnityEngine_ParticleSystem__get_main(pUVar2,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_058566b9;
      pUVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto label_058566b9;
      fVar6 = level + -0.5 + level + -0.5;
      UStack_60 = UnityEngine_ParticleSystem__get_emission(pUVar2,(MethodInfo *)0x0);
      fVar7 = (*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                        (__this,fVar6 * 150.0 + 100.0,(__this->klass->vtable)._18_ClampParticles.method);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_30,fVar7,(MethodInfo *)0x0);
      value_01.fields.m_CurveMin = UStack_30.m_CurveMin;
      value_01.fields.m_Mode = UStack_30.m_Mode;
      value_01.fields.m_CurveMultiplier = UStack_30.m_CurveMultiplier;
      value_01.fields.m_CurveMax = UStack_30.m_CurveMax;
      value_01.fields.m_ConstantMin = UStack_30.m_ConstantMin;
      value_01.fields.m_ConstantMax = UStack_30.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(&UStack_60,value_01,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_50,fVar6 * 10.0 + 50.0,(MethodInfo *)0x0)
      ;
      value_02.fields.m_CurveMin = UStack_50.m_CurveMin;
      value_02.fields.m_Mode = UStack_50.m_Mode;
      value_02.fields.m_CurveMultiplier = UStack_50.m_CurveMultiplier;
      value_02.fields.m_CurveMax = UStack_50.m_CurveMax;
      value_02.fields.m_ConstantMin = UStack_50.m_ConstantMin;
      value_02.fields.m_ConstantMax = UStack_50.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize(&UStack_58,value_02,(MethodInfo *)0x0);
      pWVar3 = __this->klass;
      pMVar4 = (pWVar3->vtable)._14_SetActiveAudio.method;
      iVar5 = 1;
    }
    else {
      (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
                (__this,0,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
label_058566b9:
        ThrowNullReferenceException();
      }
      pUVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto label_058566b9;
      UStack_58 = UnityEngine_ParticleSystem__get_main(pUVar2,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto label_058566b9;
      pUVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto label_058566b9;
      fVar6 = level + level;
      UStack_60 = UnityEngine_ParticleSystem__get_emission(pUVar2,(MethodInfo *)0x0);
      fVar7 = (*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                        (__this,fVar6 * 150.0 + 50.0,(__this->klass->vtable)._18_ClampParticles.method);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_30,fVar7,(MethodInfo *)0x0);
      value.fields.m_CurveMin = UStack_30.m_CurveMin;
      value.fields.m_Mode = UStack_30.m_Mode;
      value.fields.m_CurveMultiplier = UStack_30.m_CurveMultiplier;
      value.fields.m_CurveMax = UStack_30.m_CurveMax;
      value.fields.m_ConstantMin = UStack_30.m_ConstantMin;
      value.fields.m_ConstantMax = UStack_30.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(&UStack_60,value,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_50,fVar6 * 30.0 + 30.0,(MethodInfo *)0x0)
      ;
      value_00.fields.m_CurveMin = UStack_50.m_CurveMin;
      value_00.fields.m_Mode = UStack_50.m_Mode;
      value_00.fields.m_CurveMultiplier = UStack_50.m_CurveMultiplier;
      value_00.fields.m_CurveMax = UStack_50.m_CurveMax;
      value_00.fields.m_ConstantMin = UStack_50.m_ConstantMin;
      value_00.fields.m_ConstantMax = UStack_50.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize(&UStack_58,value_00,(MethodInfo *)0x0);
      pWVar3 = __this->klass;
      pMVar4 = (pWVar3->vtable)._14_SetActiveAudio.method;
      iVar5 = 0;
    }
    (*(pWVar3->vtable)._14_SetActiveAudio.methodPtr)(__this,iVar5,fVar6 * 0.25 + 0.25,pMVar4);
  }
  return;
}


// Weather.RainWeatherEffect$$Setup
// il2cpp: void Weather_RainWeatherEffect__Setup (Weather_RainWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x58566c0

void Weather_RainWeatherEffect__Setup
               (Weather_RainWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,method);
  return;
}


// Weather.RainWeatherEffect$$.ctor
// il2cpp: void Weather_RainWeatherEffect___ctor (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x58566d0

void Weather_RainWeatherEffect___ctor(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,method);
  return;
}


