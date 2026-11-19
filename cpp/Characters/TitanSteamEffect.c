// Type: Characters.TitanSteamEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanSteamEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanSteamEffect$$ConfigureRegrowth
// il2cpp: void Characters_TitanSteamEffect__ConfigureRegrowth (UnityEngine_ParticleSystem_o* particles, float titanSize, const MethodInfo* method);
// 0x5c60bb0

void Characters_TitanSteamEffect__ConfigureRegrowth
               (UnityEngine_ParticleSystem_o *particles,float titanSize,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_02;
  UnityEngine_Color_o color;
  UnityEngine_ParticleSystem_NoiseModule_o local_c0;
  UnityEngine_ParticleSystem_ShapeModule_o local_b8;
  UnityEngine_ParticleSystem_MainModule_o local_b0;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_a8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_88;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_68;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_48;
  
  if (Il2CppMethodInitialized_07547899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_07547899 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
    Characters_TitanSteamEffect__Prepare(particles,method);
  }
  else {
    Characters_TitanSteamEffect__Prepare(particles,method);
  }
  if (particles == (UnityEngine_ParticleSystem_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_b0 = UnityEngine_ParticleSystem__get_main(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_b0,false,(MethodInfo *)0x0);
  color.fields.b = 1.0;
  color.fields.a = 0.4;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
            ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_48,color,(MethodInfo *)0x0);
  value_02.fields.m_GradientMin = local_48.m_GradientMin;
  value_02.fields.m_Mode = local_48.m_Mode;
  value_02.fields._4_4_ = local_48._4_4_;
  value_02.fields.m_GradientMax = local_48.m_GradientMax;
  value_02.fields.m_ColorMin.fields.r = local_48.m_ColorMin.fields.r;
  value_02.fields.m_ColorMin.fields.g = local_48.m_ColorMin.fields.g;
  value_02.fields.m_ColorMin.fields.b = local_48.m_ColorMin.fields.b;
  value_02.fields.m_ColorMin.fields.a = local_48.m_ColorMin.fields.a;
  value_02.fields.m_ColorMax.fields.r = local_48.m_ColorMax.fields.r;
  value_02.fields.m_ColorMax.fields.g = local_48.m_ColorMax.fields.g;
  value_02.fields.m_ColorMax.fields.b = local_48.m_ColorMax.fields.b;
  value_02.fields.m_ColorMax.fields.a = local_48.m_ColorMax.fields.a;
  UnityEngine_ParticleSystem_MainModule__set_startColor(&local_b0,value_02,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_68,titanSize * 3.0,(MethodInfo *)0x0);
  value.fields.m_CurveMin = local_68.m_CurveMin;
  value.fields.m_Mode = local_68.m_Mode;
  value.fields.m_CurveMultiplier = local_68.m_CurveMultiplier;
  value.fields.m_CurveMax = local_68.m_CurveMax;
  value.fields.m_ConstantMin = local_68.m_ConstantMin;
  value.fields.m_ConstantMax = local_68.m_ConstantMax;
  UnityEngine_ParticleSystem_MainModule__set_startSize(&local_b0,value,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_88,titanSize * 5.0,(MethodInfo *)0x0);
  value_00.fields.m_CurveMin = local_88.m_CurveMin;
  value_00.fields.m_Mode = local_88.m_Mode;
  value_00.fields.m_CurveMultiplier = local_88.m_CurveMultiplier;
  value_00.fields.m_CurveMax = local_88.m_CurveMax;
  value_00.fields.m_ConstantMin = local_88.m_ConstantMin;
  value_00.fields.m_ConstantMax = local_88.m_ConstantMax;
  UnityEngine_ParticleSystem_MainModule__set_startSpeed(&local_b0,value_00,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_scalingMode(&local_b0,2,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_b0,1,(MethodInfo *)0x0);
  local_b8 = UnityEngine_ParticleSystem__get_shape(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_shapeType(&local_b8,4,(MethodInfo *)0x0);
  local_c0 = UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_a8,titanSize * 0.5,(MethodInfo *)0x0);
  value_01.fields.m_CurveMin = local_a8.m_CurveMin;
  value_01.fields.m_Mode = local_a8.m_Mode;
  value_01.fields.m_CurveMultiplier = local_a8.m_CurveMultiplier;
  value_01.fields.m_CurveMax = local_a8.m_CurveMax;
  value_01.fields.m_ConstantMin = local_a8.m_ConstantMin;
  value_01.fields.m_ConstantMax = local_a8.m_ConstantMax;
  UnityEngine_ParticleSystem_NoiseModule__set_strength(&local_c0,value_01,(MethodInfo *)0x0);
  return;
}


// Characters.TitanSteamEffect$$Configure
// il2cpp: void Characters_TitanSteamEffect__Configure (UnityEngine_ParticleSystem_o* particles, float worldSize, bool plume, float rate, const MethodInfo* method);
// 0x5c60ee0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c61042: movss xmm2, dword ptr [rip - 0x4c9f626]
// asm:   0x5c6104a: jne 0x5c6102e
// asm:   0x5c6104c: movss xmm1, dword ptr [rip - 0x4c9f2a4]
// asm:   0x5c61314: movss xmm1, dword ptr [rip - 0x4c9f8e0]
// asm:   0x5c61927: jmp 0x5c618a6

void Characters_TitanSteamEffect__Configure
               (UnityEngine_ParticleSystem_o *particles,float worldSize,bool plume,float rate,
               MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_02;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_03;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_04;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_05;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_06;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_07;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_08;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_09;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_10;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_11;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_12;
  UnityEngine_Gradient_o *__this;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  UnityEngine_AnimationCurve_o *curve;
  Il2CppClass *pIVar3;
  undefined7 in_register_00000031;
  MethodInfo *pMVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o color;
  UnityEngine_Color_o col;
  UnityEngine_GradientAlphaKey_Fields local_130;
  float local_124;
  float local_120;
  float local_11c;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_118;
  UnityEngine_ParticleSystem_EmissionModule_o local_f8;
  UnityEngine_ParticleSystem_ColorOverLifetimeModule_o local_f0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_e8;
  undefined1 local_a8 [16];
  UnityEngine_AnimationCurve_o *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  UnityEngine_GradientAlphaKey_Fields local_68;
  UnityEngine_GradientAlphaKey_Fields local_60;
  UnityEngine_ParticleSystem_RotationOverLifetimeModule_o local_58;
  UnityEngine_ParticleSystem_SizeOverLifetimeModule_o local_50;
  UnityEngine_ParticleSystem_NoiseModule_o local_48;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule_o local_40;
  UnityEngine_ParticleSystem_MainModule_o local_38;
  
  pMVar4 = (MethodInfo *)CONCAT71(in_register_00000031,plume);
  local_11c = rate;
  if (Il2CppMethodInitialized_0754789a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_ParticleSystem_Burst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientAlphaKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientColorKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Gradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_0754789a = '\x01';
  }
  local_40.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_VelocityOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_48.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_NoiseModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_f0.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_50.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_58.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_RotationOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_f8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
  }
  Characters_TitanSteamEffect__Prepare(particles,pMVar4);
  if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
    local_38 = UnityEngine_ParticleSystem__get_main(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_38,false,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_loop(&local_38,true,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_stopAction(&local_38,0,(MethodInfo *)0x0);
    local_e8.m_GradientMax = (UnityEngine_Gradient_o *)0x0;
    local_e8.m_ColorMin.fields.r = 0.0;
    local_e8.m_ColorMin.fields.g = 0.0;
    local_e8.m_Mode = 0;
    local_e8._4_4_ = 0;
    local_e8.m_GradientMin = (UnityEngine_Gradient_o *)0x0;
    if (plume) {
      fVar6 = 1.1;
      fVar5 = 1.8;
      local_120 = 0.115;
    }
    else {
      fVar5 = 1.3;
      fVar6 = 0.7;
      local_120 = 0.05;
    }
    if (worldSize <= 0.001) {
      worldSize = 0.001;
    }
    if (plume) {
      local_124 = 0.2;
    }
    else {
      local_124 = 0.09;
    }
    UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_e8,fVar6,fVar5,(MethodInfo *)0x0);
    value.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMin;
    value.fields.m_Mode = local_e8.m_Mode;
    value.fields.m_CurveMultiplier = (float)local_e8._4_4_;
    value.fields.m_CurveMax = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMax;
    value.fields.m_ConstantMin = local_e8.m_ColorMin.fields.r;
    value.fields.m_ConstantMax = local_e8.m_ColorMin.fields.g;
    UnityEngine_ParticleSystem_MainModule__set_startLifetime(&local_38,value,(MethodInfo *)0x0);
    local_118.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
    local_118.m_ConstantMin = 0.0;
    local_118.m_ConstantMax = 0.0;
    local_118.m_Mode = 0;
    local_118.m_CurveMultiplier = 0.0;
    local_118.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_118,local_120 * worldSize,
               local_124 * worldSize,(MethodInfo *)0x0);
    value_00.fields.m_CurveMin = local_118.m_CurveMin;
    value_00.fields.m_Mode = local_118.m_Mode;
    value_00.fields.m_CurveMultiplier = local_118.m_CurveMultiplier;
    value_00.fields.m_CurveMax = local_118.m_CurveMax;
    value_00.fields.m_ConstantMin = local_118.m_ConstantMin;
    value_00.fields.m_ConstantMax = local_118.m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSize(&local_38,value_00,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_88,0.0,(MethodInfo *)0x0);
    value_01.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_88._8_8_;
    value_01.fields.m_Mode = local_88._0_4_;
    value_01.fields.m_CurveMultiplier = (float)local_88._4_4_;
    value_01.fields.m_CurveMax = local_78;
    value_01.fields.m_ConstantMin = (float)uStack_70;
    value_01.fields.m_ConstantMax = uStack_70._4_4_;
    UnityEngine_ParticleSystem_MainModule__set_startSpeed(&local_38,value_01,(MethodInfo *)0x0);
    color.fields.b = 1.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 1.0;
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_e8,color,(MethodInfo *)0x0);
    value_11.fields.m_GradientMin = local_e8.m_GradientMin;
    value_11.fields.m_Mode = local_e8.m_Mode;
    value_11.fields._4_4_ = local_e8._4_4_;
    value_11.fields.m_GradientMax = local_e8.m_GradientMax;
    value_11.fields.m_ColorMin.fields.r = local_e8.m_ColorMin.fields.r;
    value_11.fields.m_ColorMin.fields.g = local_e8.m_ColorMin.fields.g;
    value_11.fields.m_ColorMin.fields.b = local_e8.m_ColorMin.fields.b;
    value_11.fields.m_ColorMin.fields.a = local_e8.m_ColorMin.fields.a;
    value_11.fields.m_ColorMax.fields.r = local_e8.m_ColorMax.fields.r;
    value_11.fields.m_ColorMax.fields.g = local_e8.m_ColorMax.fields.g;
    value_11.fields.m_ColorMax.fields.b = local_e8.m_ColorMax.fields.b;
    value_11.fields.m_ColorMax.fields.a = local_e8.m_ColorMax.fields.a;
    UnityEngine_ParticleSystem_MainModule__set_startColor(&local_38,value_11,(MethodInfo *)0x0);
    local_98 = (UnityEngine_AnimationCurve_o *)0x0;
    uStack_90._0_4_ = 0.0;
    uStack_90._4_4_ = 0.0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0.0;
    local_a8._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_a8,-3.1415927,3.1415927,(MethodInfo *)0x0);
    value_02.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_a8._8_8_;
    value_02.fields.m_Mode = local_a8._0_4_;
    value_02.fields.m_CurveMultiplier = (float)local_a8._4_4_;
    value_02.fields.m_CurveMax = local_98;
    value_02.fields.m_ConstantMin = (float)uStack_90;
    value_02.fields.m_ConstantMax = uStack_90._4_4_;
    UnityEngine_ParticleSystem_MainModule__set_startRotation(&local_38,value_02,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_scalingMode(&local_38,2,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_38,1,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e7f9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f9 = '\x01';
    }
    fVar5 = fVar5 * local_11c;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar6 = ceilf(fVar5);
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(&local_38,(int)fVar6 + 8,(MethodInfo *)0x0);
    local_40 = UnityEngine_ParticleSystem__get_velocityOverLifetime(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_enabled(&local_40,true,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_space(&local_40,1,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_e8,0.0,(MethodInfo *)0x0);
    value_03.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMin;
    value_03.fields.m_Mode = local_e8.m_Mode;
    value_03.fields.m_CurveMultiplier = (float)local_e8._4_4_;
    value_03.fields.m_CurveMax = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMax;
    value_03.fields.m_ConstantMin = local_e8.m_ColorMin.fields.r;
    value_03.fields.m_ConstantMax = local_e8.m_ColorMin.fields.g;
    UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_x(&local_40,value_03,(MethodInfo *)0x0);
    if (plume) {
      fVar6 = worldSize * 0.09;
      fVar5 = 0.018;
    }
    else {
      fVar6 = worldSize * 0.06;
      fVar5 = 0.009;
    }
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_e8,fVar6,(MethodInfo *)0x0);
    value_04.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMin;
    value_04.fields.m_Mode = local_e8.m_Mode;
    value_04.fields.m_CurveMultiplier = (float)local_e8._4_4_;
    value_04.fields.m_CurveMax = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMax;
    value_04.fields.m_ConstantMin = local_e8.m_ColorMin.fields.r;
    value_04.fields.m_ConstantMax = local_e8.m_ColorMin.fields.g;
    UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_y(&local_40,value_04,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_118,0.0,(MethodInfo *)0x0);
    value_05.fields.m_CurveMin = local_118.m_CurveMin;
    value_05.fields.m_Mode = local_118.m_Mode;
    value_05.fields.m_CurveMultiplier = local_118.m_CurveMultiplier;
    value_05.fields.m_CurveMax = local_118.m_CurveMax;
    value_05.fields.m_ConstantMin = local_118.m_ConstantMin;
    value_05.fields.m_ConstantMax = local_118.m_ConstantMax;
    UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_z(&local_40,value_05,(MethodInfo *)0x0);
    local_48 = UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_NoiseModule__set_enabled(&local_48,true,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_e8,fVar5 * worldSize,(MethodInfo *)0x0);
    value_06.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMin;
    value_06.fields.m_Mode = local_e8.m_Mode;
    value_06.fields.m_CurveMultiplier = (float)local_e8._4_4_;
    value_06.fields.m_CurveMax = (UnityEngine_AnimationCurve_o *)local_e8.m_GradientMax;
    value_06.fields.m_ConstantMin = local_e8.m_ColorMin.fields.r;
    value_06.fields.m_ConstantMax = local_e8.m_ColorMin.fields.g;
    UnityEngine_ParticleSystem_NoiseModule__set_strength(&local_48,value_06,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_NoiseModule__set_frequency(&local_48,8.0 / worldSize,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_118,0.3,(MethodInfo *)0x0);
    value_07.fields.m_CurveMin = local_118.m_CurveMin;
    value_07.fields.m_Mode = local_118.m_Mode;
    value_07.fields.m_CurveMultiplier = local_118.m_CurveMultiplier;
    value_07.fields.m_CurveMax = local_118.m_CurveMax;
    value_07.fields.m_ConstantMin = local_118.m_ConstantMin;
    value_07.fields.m_ConstantMax = local_118.m_ConstantMax;
    UnityEngine_ParticleSystem_NoiseModule__set_scrollSpeed(&local_48,value_07,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_NoiseModule__set_damping(&local_48,false,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_NoiseModule__set_octaveCount(&local_48,2,(MethodInfo *)0x0);
    local_f0 = UnityEngine_ParticleSystem__get_colorOverLifetime(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled(&local_f0,true,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
    UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
    colorKeys = (UnityEngine_GradientColorKey_array *)
                SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
    local_88._0_4_ = 0;
    local_88._4_4_ = 0.0;
    local_88._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
    local_78 = (UnityEngine_AnimationCurve_o *)((ulong)local_78._4_4_ << 0x20);
    col.fields.b = 1.0;
    col.fields.a = 1.0;
    col.fields.r = 1.0;
    col.fields.g = 1.0;
    UnityEngine_GradientColorKey___ctor((UnityEngine_GradientColorKey_o *)local_88,col,0.38,(MethodInfo *)0x0)
    ;
    if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
      if ((int)colorKeys->max_length != 0) {
        colorKeys->m_Items[0].fields.time = (float)local_78;
        colorKeys->m_Items[0].fields.color.fields.r = (float)local_88._0_4_;
        colorKeys->m_Items[0].fields.color.fields.g = (float)local_88._4_4_;
        colorKeys->m_Items[0].fields.color.fields.b = (float)local_88._8_4_;
        colorKeys->m_Items[0].fields.color.fields.a = (float)local_88._12_4_;
        if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
        }
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0.0;
        local_a8._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
        local_98 = (UnityEngine_AnimationCurve_o *)((ulong)local_98 & 0xffffffff00000000);
        UnityEngine_GradientColorKey___ctor
                  ((UnityEngine_GradientColorKey_o *)local_a8,
                   (UnityEngine_Color_o)
                   *(UnityEngine_Color_Fields *)TypeInfo_Characters_TitanSteamEffect->static_fields,1.0,
                   (MethodInfo *)0x0);
        if ((colorKeys->max_length & 0xfffffffe) != 0) {
          colorKeys->m_Items[1].fields.time = local_98._0_4_;
          colorKeys->m_Items[1].fields.color.fields.r = (float)local_a8._0_4_;
          colorKeys->m_Items[1].fields.color.fields.g = (float)local_a8._4_4_;
          colorKeys->m_Items[1].fields.color.fields.b = (float)local_a8._8_4_;
          colorKeys->m_Items[1].fields.color.fields.a = (float)local_a8._12_4_;
          alphaKeys = (UnityEngine_GradientAlphaKey_array *)
                      SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,4);
          local_130.alpha = 0.0;
          local_130.time = 0.0;
          UnityEngine_GradientAlphaKey___ctor
                    ((UnityEngine_GradientAlphaKey_o *)&local_130,0.0,0.0,(MethodInfo *)0x0);
          if (alphaKeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_05c61931;
          if ((int)alphaKeys->max_length != 0) {
            alphaKeys->m_Items[0].fields = local_130;
            if (plume) {
              fVar6 = 0.28;
            }
            else {
              fVar6 = 0.35;
            }
            local_130.alpha = 0.0;
            local_130.time = 0.0;
            UnityEngine_GradientAlphaKey___ctor
                      ((UnityEngine_GradientAlphaKey_o *)&local_130,fVar6,0.2,(MethodInfo *)0x0);
            if ((alphaKeys->max_length & 0xfffffffe) != 0) {
              alphaKeys->m_Items[1].fields = local_130;
              local_60.alpha = 0.0;
              local_60.time = 0.0;
              UnityEngine_GradientAlphaKey___ctor
                        ((UnityEngine_GradientAlphaKey_o *)&local_60,0.1,0.6,(MethodInfo *)0x0);
              if (2 < (uint)alphaKeys->max_length) {
                alphaKeys->m_Items[2].fields = local_60;
                local_68.alpha = 0.0;
                local_68.time = 0.0;
                UnityEngine_GradientAlphaKey___ctor
                          ((UnityEngine_GradientAlphaKey_o *)&local_68,0.0,1.0,(MethodInfo *)0x0);
                if ((alphaKeys->max_length & 0xfffffffc) != 0) {
                  alphaKeys->m_Items[3].fields = local_68;
                  if (__this != (UnityEngine_Gradient_o *)0x0) {
                    UnityEngine_Gradient__SetKeys(__this,colorKeys,alphaKeys,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_69c4a70
                              ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_e8,__this,
                               (MethodInfo *)0x0);
                    value_12.fields.m_GradientMin = local_e8.m_GradientMin;
                    value_12.fields.m_Mode = local_e8.m_Mode;
                    value_12.fields._4_4_ = local_e8._4_4_;
                    value_12.fields.m_GradientMax = local_e8.m_GradientMax;
                    value_12.fields.m_ColorMin.fields.r = local_e8.m_ColorMin.fields.r;
                    value_12.fields.m_ColorMin.fields.g = local_e8.m_ColorMin.fields.g;
                    value_12.fields.m_ColorMin.fields.b = local_e8.m_ColorMin.fields.b;
                    value_12.fields.m_ColorMin.fields.a = local_e8.m_ColorMin.fields.a;
                    value_12.fields.m_ColorMax.fields.r = local_e8.m_ColorMax.fields.r;
                    value_12.fields.m_ColorMax.fields.g = local_e8.m_ColorMax.fields.g;
                    value_12.fields.m_ColorMax.fields.b = local_e8.m_ColorMax.fields.b;
                    value_12.fields.m_ColorMax.fields.a = local_e8.m_ColorMax.fields.a;
                    UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color
                              (&local_f0,value_12,(MethodInfo *)0x0);
                    local_50 = UnityEngine_ParticleSystem__get_sizeOverLifetime(particles,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled
                              (&local_50,true,(MethodInfo *)0x0);
                    curve = UnityEngine_AnimationCurve__Linear(0.0,0.55,1.0,1.7,(MethodInfo *)0x0);
                    local_118.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
                    local_118.m_ConstantMin = 0.0;
                    local_118.m_ConstantMax = 0.0;
                    local_118.m_Mode = 0;
                    local_118.m_CurveMultiplier = 0.0;
                    local_118.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
                    UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c4760
                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_118,1.0,curve,
                               (MethodInfo *)0x0);
                    value_08.fields.m_CurveMin = local_118.m_CurveMin;
                    value_08.fields.m_Mode = local_118.m_Mode;
                    value_08.fields.m_CurveMultiplier = local_118.m_CurveMultiplier;
                    value_08.fields.m_CurveMax = local_118.m_CurveMax;
                    value_08.fields.m_ConstantMin = local_118.m_ConstantMin;
                    value_08.fields.m_ConstantMax = local_118.m_ConstantMax;
                    UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size
                              (&local_50,value_08,(MethodInfo *)0x0);
                    local_58 = UnityEngine_ParticleSystem__get_rotationOverLifetime
                                         (particles,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_RotationOverLifetimeModule__set_enabled
                              (&local_58,true,(MethodInfo *)0x0);
                    local_78 = (UnityEngine_AnimationCurve_o *)0x0;
                    uStack_70._0_4_ = 0.0;
                    uStack_70._4_4_ = 0.0;
                    local_88._0_4_ = 0;
                    local_88._4_4_ = 0.0;
                    local_88._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
                    UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_88,-0.873,0.873,
                               (MethodInfo *)0x0);
                    value_09.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_88._8_8_;
                    value_09.fields.m_Mode = local_88._0_4_;
                    value_09.fields.m_CurveMultiplier = (float)local_88._4_4_;
                    value_09.fields.m_CurveMax = local_78;
                    value_09.fields.m_ConstantMin = (float)uStack_70;
                    value_09.fields.m_ConstantMax = uStack_70._4_4_;
                    UnityEngine_ParticleSystem_RotationOverLifetimeModule__set_z
                              (&local_58,value_09,(MethodInfo *)0x0);
                    local_f8 = UnityEngine_ParticleSystem__get_emission(particles,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_a8,local_11c,
                               (MethodInfo *)0x0);
                    value_10.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)local_a8._8_8_;
                    value_10.fields.m_Mode = local_a8._0_4_;
                    value_10.fields.m_CurveMultiplier = (float)local_a8._4_4_;
                    value_10.fields.m_CurveMax = local_98;
                    value_10.fields.m_ConstantMin = (float)uStack_90;
                    value_10.fields.m_ConstantMax = uStack_90._4_4_;
                    UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                              (&local_f8,value_10,(MethodInfo *)0x0);
                    pMVar4 = MethodInfo_System_Array_Empty_ParticleSystem_Burst;
                    if ((MethodInfo_System_Array_Empty_ParticleSystem_Burst->field7_0x38).methodMetadataHandle
                        == (void *)0x0) {
                      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_ParticleSystem_Burst);
                      pIVar3 = *(Il2CppClass **)((long)(pMVar4->field7_0x38).methodMetadataHandle + 0x10);
                      bVar1 = (pIVar3->_2).bitflags1;
                    }
                    else {
                      pIVar3 = *(Il2CppClass **)
                                ((long)(MethodInfo_System_Array_Empty_ParticleSystem_Burst->field7_0x38).
                                       methodMetadataHandle + 0x10);
                      bVar1 = (pIVar3->_2).bitflags1;
                    }
                    if ((bVar1 & 1) == 0) {
                      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
                      uVar2 = (pIVar3->_2).cctor_finished_or_no_cctor;
                    }
                    else {
                      uVar2 = (pIVar3->_2).cctor_finished_or_no_cctor;
                    }
                    if (uVar2 == 0) {
                      il2cpp_codegen_runtime_class_init(pIVar3);
                      pIVar3 = (pMVar4->field7_0x38).rgctx_data[2].klass;
                      bVar1 = (pIVar3->_2).bitflags1;
                    }
                    else {
                      pIVar3 = (pMVar4->field7_0x38).rgctx_data[2].klass;
                      bVar1 = (pIVar3->_2).bitflags1;
                    }
                    if ((bVar1 & 1) == 0) {
                      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
                    }
                    UnityEngine_ParticleSystem_EmissionModule__SetBursts
                              (&local_f8,*(UnityEngine_ParticleSystem_Burst_array **)pIVar3->static_fields,
                               (MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_EmissionModule__set_enabled(&local_f8,true,(MethodInfo *)0x0);
                    return;
                  }
                  goto label_05c61931;
                }
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05c61931:
  ThrowNullReferenceException();
}


// Characters.TitanSteamEffect$$Prepare
// il2cpp: void Characters_TitanSteamEffect__Prepare (UnityEngine_ParticleSystem_o* particles, const MethodInfo* method);
// 0x5c60dd0

void Characters_TitanSteamEffect__Prepare(UnityEngine_ParticleSystem_o *particles,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *__this;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_0754789b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_71a4fc0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754789b = '\x01';
  }
  if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)particles,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_71a4fc0);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          __this = (UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4];
          if (__this == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c60ebd;
          UnityEngine_ParticleSystem__Stop(__this,true,0,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)particles,
                             (MethodInfo *)0x0);
          if (bVar1) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05c60ebd;
            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
          }
          uVar4 = uVar4 + 1;
          uVar2 = (uint)pSVar3->max_length;
        } while ((int)uVar4 < (int)uVar2);
      }
      return;
    }
  }
label_05c60ebd:
  ThrowNullReferenceException();
}


// Characters.TitanSteamEffect$$SetSurface
// il2cpp: void Characters_TitanSteamEffect__SetSurface (UnityEngine_ParticleSystem_o* particles, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x5c61940

void Characters_TitanSteamEffect__SetSurface
               (UnityEngine_ParticleSystem_o *particles,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  UnityEngine_ParticleSystem_ShapeModule_o local_18;
  
  if (particles == (UnityEngine_ParticleSystem_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18 = UnityEngine_ParticleSystem__get_shape(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_enabled(&local_18,true,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_shapeType(&local_18,6,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_mesh(&local_18,mesh,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_meshShapeType(&local_18,2,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_useMeshColors(&local_18,false,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ShapeModule__set_useMeshMaterialIndex(&local_18,false,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  UnityEngine_ParticleSystem_ShapeModule__set_position
            (&local_18,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  UnityEngine_ParticleSystem_ShapeModule__set_rotation
            (&local_18,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  UnityEngine_ParticleSystem_ShapeModule__set_scale
            (&local_18,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Characters.TitanSteamEffect$$.cctor
// il2cpp: void Characters_TitanSteamEffect___cctor (const MethodInfo* method);
// 0x5c61a70

void Characters_TitanSteamEffect___cctor(MethodInfo *method)

{
  Characters_TitanSteamEffect_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_0754789c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_0754789c = '\x01';
  }
  pCVar1 = TypeInfo_Characters_TitanSteamEffect->static_fields;
  (pCVar1->SteamColor).fields.r = 0.86;
  (pCVar1->SteamColor).fields.g = 0.88;
  (pCVar1->SteamColor).fields.b = 0.9;
  (pCVar1->SteamColor).fields.a = 1.0;
  return;
}


