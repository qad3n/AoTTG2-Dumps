// Type: Characters.TitanSteamEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/TitanSteamEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanSteamEffect$$ConfigureRegrowth
// il2cpp: void Characters_TitanSteamEffect__ConfigureRegrowth (UnityEngine_ParticleSystem_o* particles, float titanSize, const MethodInfo* method);
// 0x1821cebb0

void Characters_TitanSteamEffect__ConfigureRegrowth
               (UnityEngine_ParticleSystem_o *particles,float titanSize,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxGradient_o *pUVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar2;
  UnityEngine_ParticleSystem_MainModule_o local_res8;
  UnityEngine_ParticleSystem_ShapeModule_o local_res20;
  UnityEngine_ParticleSystem_NoiseModule_o local_c8 [2];
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_b8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_98;
  UnityEngine_ParticleSystem_MinMaxGradient_o local_58;
  
  if (Il2CppMethodInitialized_184346ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_184346ea7 = '\x01';
  }
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res20.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ShapeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_c8[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_NoiseModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
  }
  Characters_TitanSteamEffect__Prepare(particles,(MethodInfo *)0x0);
  if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
    local_res8.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_MainModule_Fields)
         UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_res8,false,(MethodInfo *)0x0);
    local_b8.m_Mode = 0x3f800000;
    local_b8.m_CurveMultiplier = 1.0;
    local_b8.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x3ecccccd3f800000;
    pUVar1 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                       (&local_58,(UnityEngine_Color_o *)&local_b8,(MethodInfo *)0x0);
    local_98.m_Mode = (pUVar1->fields).m_Mode;
    local_98._4_4_ = *(undefined4 *)&(pUVar1->fields).field_0x4;
    local_98.m_GradientMin = (pUVar1->fields).m_GradientMin;
    local_98.m_GradientMax = (pUVar1->fields).m_GradientMax;
    local_98.m_ColorMin.fields.r = (pUVar1->fields).m_ColorMin.fields.r;
    local_98.m_ColorMin.fields.g = (pUVar1->fields).m_ColorMin.fields.g;
    local_98.m_ColorMin.fields.b = (pUVar1->fields).m_ColorMin.fields.b;
    local_98.m_ColorMin.fields.a = (pUVar1->fields).m_ColorMin.fields.a;
    local_98.m_ColorMax.fields.r = (pUVar1->fields).m_ColorMax.fields.r;
    local_98.m_ColorMax.fields.g = (pUVar1->fields).m_ColorMax.fields.g;
    local_98.m_ColorMax.fields.b = (pUVar1->fields).m_ColorMax.fields.b;
    local_98.m_ColorMax.fields.a = (pUVar1->fields).m_ColorMax.fields.a;
    UnityEngine_ParticleSystem_MainModule__set_startColor
              (&local_res8,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_98,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                       ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_98,titanSize * 3.0,
                        (MethodInfo *)0x0);
    local_b8.m_Mode = (pUVar2->fields).m_Mode;
    local_b8.m_CurveMultiplier = (pUVar2->fields).m_CurveMultiplier;
    local_b8.m_CurveMin = (pUVar2->fields).m_CurveMin;
    local_b8.m_CurveMax = (pUVar2->fields).m_CurveMax;
    local_b8.m_ConstantMin = (pUVar2->fields).m_ConstantMin;
    local_b8.m_ConstantMax = (pUVar2->fields).m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSize
              (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_b8,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                       ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_98,titanSize * 5.0,
                        (MethodInfo *)0x0);
    local_b8.m_Mode = (pUVar2->fields).m_Mode;
    local_b8.m_CurveMultiplier = (pUVar2->fields).m_CurveMultiplier;
    local_b8.m_CurveMin = (pUVar2->fields).m_CurveMin;
    local_b8.m_CurveMax = (pUVar2->fields).m_CurveMax;
    local_b8.m_ConstantMin = (pUVar2->fields).m_ConstantMin;
    local_b8.m_ConstantMax = (pUVar2->fields).m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSpeed
              (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_b8,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_scalingMode(&local_res8,2,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_res8,1,(MethodInfo *)0x0);
    local_res20.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_ShapeModule_Fields)
         UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_shapeType(&local_res20,4,(MethodInfo *)0x0);
    local_c8[0] = UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                       ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_98,titanSize * 0.5,
                        (MethodInfo *)0x0);
    local_b8.m_Mode = (pUVar2->fields).m_Mode;
    local_b8.m_CurveMultiplier = (pUVar2->fields).m_CurveMultiplier;
    local_b8.m_CurveMin = (pUVar2->fields).m_CurveMin;
    local_b8.m_CurveMax = (pUVar2->fields).m_CurveMax;
    local_b8.m_ConstantMin = (pUVar2->fields).m_ConstantMin;
    local_b8.m_ConstantMax = (pUVar2->fields).m_ConstantMax;
    UnityEngine_ParticleSystem_NoiseModule__set_strength
              (local_c8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_b8,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.TitanSteamEffect$$Configure
// il2cpp: void Characters_TitanSteamEffect__Configure (UnityEngine_ParticleSystem_o* particles, float worldSize, bool plume, float rate, const MethodInfo* method);
// 0x1821ceda0

void Characters_TitanSteamEffect__Configure
               (UnityEngine_ParticleSystem_o *particles,float worldSize,bool plume,float rate,
               MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar1;
  UnityEngine_ParticleSystem_MinMaxGradient_o *pUVar2;
  UnityEngine_Gradient_o *__this;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  UnityEngine_AnimationCurve_o *curve;
  Il2CppClass *pIVar3;
  MethodInfo *pMVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_ParticleSystem_MainModule_o local_res8;
  UnityEngine_ParticleSystem_NoiseModule_o local_1d8;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule_o local_1d0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_1c8;
  UnityEngine_ParticleSystem_EmissionModule_o local_188 [2];
  _union_125884 local_178;
  _union_125884 _Stack_170;
  undefined1 local_168 [16];
  UnityEngine_AnimationCurve_o *local_158;
  UnityEngine_Color_Fields UStack_150;
  UnityEngine_Color_Fields UStack_140;
  _union_125884 local_128;
  _union_125884 local_120;
  _union_125884 local_118;
  UnityEngine_ParticleSystem_ColorOverLifetimeModule_o local_110;
  UnityEngine_ParticleSystem_SizeOverLifetimeModule_o local_108;
  UnityEngine_ParticleSystem_RotationOverLifetimeModule_o local_100;
  undefined1 local_f8 [16];
  UnityEngine_AnimationCurve_o *local_e8;
  undefined1 auStack_e0 [8];
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_d8;
  UnityEngine_ParticleSystem_MinMaxGradient_o local_a0 [2];
  
  if (Il2CppMethodInitialized_184346ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_ParticleSystem_Burst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientAlphaKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientColorKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Gradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_184346ea8 = '\x01';
  }
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_1d0.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_VelocityOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_1d8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_NoiseModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_110.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_108.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_100.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_RotationOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_188[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (worldSize <= 0.001) {
    worldSize = 0.001;
  }
  if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
  }
  Characters_TitanSteamEffect__Prepare(particles,(MethodInfo *)0x0);
  if (particles == (UnityEngine_ParticleSystem_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)
       UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_res8,false,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_loop(&local_res8,true,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_stopAction(&local_res8,0,(MethodInfo *)0x0);
  fVar8 = 1.8;
  if (plume) {
    fVar9 = 1.1;
    fVar6 = 1.8;
  }
  else {
    fVar9 = 0.7;
    fVar6 = 1.3;
  }
  local_168._0_8_ = 0;
  local_168._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
  local_158 = (UnityEngine_AnimationCurve_o *)0x0;
  UStack_150.r = 0.0;
  UStack_150.g = 0.0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_168,fVar9,fVar6,(MethodInfo *)0x0);
  local_1c8._0_8_ = local_168._0_8_;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)local_168._8_8_;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)local_158;
  local_1c8.m_ColorMin.fields.r = UStack_150.r;
  local_1c8.m_ColorMin.fields.g = UStack_150.g;
  UnityEngine_ParticleSystem_MainModule__set_startLifetime
            (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  fVar9 = 0.09;
  if (plume) {
    fVar6 = worldSize * 0.115;
    fVar7 = 0.2;
  }
  else {
    fVar6 = worldSize * 0.05;
    fVar7 = 0.09;
  }
  local_168._0_8_ = 0;
  local_168._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
  local_158 = (UnityEngine_AnimationCurve_o *)0x0;
  UStack_150.r = 0.0;
  UStack_150.g = 0.0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_168,fVar6,worldSize * fVar7,(MethodInfo *)0x0);
  local_1c8._0_8_ = local_168._0_8_;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)local_168._8_8_;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)local_158;
  local_1c8.m_ColorMin.fields.r = UStack_150.r;
  local_1c8.m_ColorMin.fields.g = UStack_150.g;
  UnityEngine_ParticleSystem_MainModule__set_startSize
            (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),0.0,(MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar1->fields).m_Mode;
  local_1c8._4_4_ = (pUVar1->fields).m_CurveMultiplier;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMin;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMax;
  local_1c8.m_ColorMin.fields.r = (pUVar1->fields).m_ConstantMin;
  local_1c8.m_ColorMin.fields.g = (pUVar1->fields).m_ConstantMax;
  UnityEngine_ParticleSystem_MainModule__set_startSpeed
            (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  local_178 = (_union_125884)0x3f8000003f800000;
  _Stack_170 = (_union_125884)0x3f8000003f800000;
  pUVar2 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxGradient_o *)(auStack_e0 + 8),
                      (UnityEngine_Color_o *)&local_178._at_Byte0,(MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar2->fields).m_Mode;
  local_1c8._4_4_ = *(undefined4 *)&(pUVar2->fields).field_0x4;
  local_1c8.m_GradientMin = (pUVar2->fields).m_GradientMin;
  local_1c8.m_GradientMax = (pUVar2->fields).m_GradientMax;
  local_1c8.m_ColorMin.fields.r = (pUVar2->fields).m_ColorMin.fields.r;
  local_1c8.m_ColorMin.fields.g = (pUVar2->fields).m_ColorMin.fields.g;
  local_1c8.m_ColorMin.fields.b = (pUVar2->fields).m_ColorMin.fields.b;
  local_1c8.m_ColorMin.fields.a = (pUVar2->fields).m_ColorMin.fields.a;
  local_1c8.m_ColorMax.fields.r = (pUVar2->fields).m_ColorMax.fields.r;
  local_1c8.m_ColorMax.fields.g = (pUVar2->fields).m_ColorMax.fields.g;
  local_1c8.m_ColorMax.fields.b = (pUVar2->fields).m_ColorMax.fields.b;
  local_1c8.m_ColorMax.fields.a = (pUVar2->fields).m_ColorMax.fields.a;
  UnityEngine_ParticleSystem_MainModule__set_startColor
            (&local_res8,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_1c8,(MethodInfo *)0x0);
  local_f8._0_8_ = 0;
  local_f8._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
  local_e8 = (UnityEngine_AnimationCurve_o *)0x0;
  auStack_e0._0_4_ = 0.0;
  auStack_e0._4_4_ = 0.0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_f8,-3.1415927,3.1415927,(MethodInfo *)0x0);
  local_1c8._0_8_ = local_f8._0_8_;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)local_f8._8_8_;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)local_e8;
  local_1c8.m_ColorMin.fields.r = (float)auStack_e0._0_4_;
  local_1c8.m_ColorMin.fields.g = (float)auStack_e0._4_4_;
  UnityEngine_ParticleSystem_MainModule__set_startRotation
            (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_MainModule__set_scalingMode(&local_res8,2,(MethodInfo *)0x0);
  pMVar4 = (MethodInfo *)0x1;
  UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_res8,1,(MethodInfo *)0x0);
  if (!plume) {
    fVar8 = 1.3;
  }
  if (Il2CppMethodInitialized_18433df29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df29 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar5 = il2cpp_runtime_helper_1804f45c0((double)(fVar8 * rate),pMVar4);
  UnityEngine_ParticleSystem_MainModule__set_maxParticles(&local_res8,(int)dVar5 + 8,(MethodInfo *)0x0);
  local_1d0.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_VelocityOverLifetimeModule_Fields)
       UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_enabled(&local_1d0,true,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_space(&local_1d0,1,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),0.0,(MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar1->fields).m_Mode;
  local_1c8._4_4_ = (pUVar1->fields).m_CurveMultiplier;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMin;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMax;
  local_1c8.m_ColorMin.fields.r = (pUVar1->fields).m_ConstantMin;
  local_1c8.m_ColorMin.fields.g = (pUVar1->fields).m_ConstantMax;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_x
            (&local_1d0,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  if (!plume) {
    fVar9 = 0.06;
  }
  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),fVar9 * worldSize,
                      (MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar1->fields).m_Mode;
  local_1c8._4_4_ = (pUVar1->fields).m_CurveMultiplier;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMin;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMax;
  local_1c8.m_ColorMin.fields.r = (pUVar1->fields).m_ConstantMin;
  local_1c8.m_ColorMin.fields.g = (pUVar1->fields).m_ConstantMax;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_y
            (&local_1d0,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),0.0,(MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar1->fields).m_Mode;
  local_1c8._4_4_ = (pUVar1->fields).m_CurveMultiplier;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMin;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMax;
  local_1c8.m_ColorMin.fields.r = (pUVar1->fields).m_ConstantMin;
  local_1c8.m_ColorMin.fields.g = (pUVar1->fields).m_ConstantMax;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_z
            (&local_1d0,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  local_1d8 = UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_NoiseModule__set_enabled(&local_1d8,true,(MethodInfo *)0x0);
  if (plume) {
    fVar8 = 0.018;
  }
  else {
    fVar8 = 0.009;
  }
  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),fVar8 * worldSize,
                      (MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar1->fields).m_Mode;
  local_1c8._4_4_ = (pUVar1->fields).m_CurveMultiplier;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMin;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMax;
  local_1c8.m_ColorMin.fields.r = (pUVar1->fields).m_ConstantMin;
  local_1c8.m_ColorMin.fields.g = (pUVar1->fields).m_ConstantMax;
  UnityEngine_ParticleSystem_NoiseModule__set_strength
            (&local_1d8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_NoiseModule__set_frequency(&local_1d8,8.0 / worldSize,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),0.3,(MethodInfo *)0x0);
  local_1c8.m_Mode = (pUVar1->fields).m_Mode;
  local_1c8._4_4_ = (pUVar1->fields).m_CurveMultiplier;
  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMin;
  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar1->fields).m_CurveMax;
  local_1c8.m_ColorMin.fields.r = (pUVar1->fields).m_ConstantMin;
  local_1c8.m_ColorMin.fields.g = (pUVar1->fields).m_ConstantMax;
  UnityEngine_ParticleSystem_NoiseModule__set_scrollSpeed
            (&local_1d8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_NoiseModule__set_damping(&local_1d8,false,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_NoiseModule__set_octaveCount(&local_1d8,2,(MethodInfo *)0x0);
  local_110.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)
       UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
  UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled(&local_110,true,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
  UnityEngine_Gradient___ctor(__this,(MethodInfo *)0x0);
  colorKeys = (UnityEngine_GradientColorKey_array *)SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
  local_178 = (_union_125884)0x3f8000003f800000;
  _Stack_170 = (_union_125884)0x3f8000003f800000;
  local_e8 = (UnityEngine_AnimationCurve_o *)((ulonglong)local_e8 & 0xffffffff00000000);
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0.0;
  local_f8._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
  UnityEngine_GradientColorKey___ctor
            ((UnityEngine_GradientColorKey_o *)local_f8,(UnityEngine_Color_o *)&local_178._at_Byte0,0.38,
             (MethodInfo *)0x0);
  if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
    if ((int)colorKeys->max_length != 0) {
      colorKeys->m_Items[0].fields.color.fields.r = (float)local_f8._0_4_;
      colorKeys->m_Items[0].fields.color.fields.g = (float)local_f8._4_4_;
      colorKeys->m_Items[0].fields.color.fields.b = (float)local_f8._8_4_;
      colorKeys->m_Items[0].fields.color.fields.a = (float)local_f8._12_4_;
      colorKeys->m_Items[0].fields.time = local_e8._0_4_;
      if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
      }
      local_178 = *(_union_125884 *)TypeInfo_Characters_TitanSteamEffect->static_fields;
      _Stack_170 = ((_union_125884 *)TypeInfo_Characters_TitanSteamEffect->static_fields)[1];
      local_168._0_8_ = 0;
      local_168._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
      local_158 = (UnityEngine_AnimationCurve_o *)((ulonglong)local_158 & 0xffffffff00000000);
      UnityEngine_GradientColorKey___ctor
                ((UnityEngine_GradientColorKey_o *)local_168,(UnityEngine_Color_o *)&local_178._at_Byte0,1.0,
                 (MethodInfo *)0x0);
      if (1 < (uint)colorKeys->max_length) {
        colorKeys->m_Items[1].fields.color.fields.r = (float)local_168._0_4_;
        colorKeys->m_Items[1].fields.color.fields.g = (float)local_168._4_4_;
        colorKeys->m_Items[1].fields.color.fields.b = (float)local_168._8_4_;
        colorKeys->m_Items[1].fields.color.fields.a = (float)local_168._12_4_;
        colorKeys->m_Items[1].fields.time = local_158._0_4_;
        alphaKeys = (UnityEngine_GradientAlphaKey_array *)
                    SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,4);
        local_128 = (_union_125884)0x0;
        Unity_Burst_Intrinsics_v64___ctor_1028c00
                  ((Unity_Burst_Intrinsics_v64_o *)&local_128._at_Byte0,0.0,0.0,(MethodInfo *)0x0);
        if (alphaKeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_1821cf742;
        if ((int)alphaKeys->max_length != 0) {
          alphaKeys->m_Items[0].fields.alpha = (float)local_128._at_UInt0.UInt0;
          alphaKeys->m_Items[0].fields.time = (float)local_128._at_UInt1.UInt1;
          if (plume) {
            fVar8 = 0.28;
          }
          else {
            fVar8 = 0.35;
          }
          local_120 = (_union_125884)0x0;
          Unity_Burst_Intrinsics_v64___ctor_1028c00
                    ((Unity_Burst_Intrinsics_v64_o *)&local_120._at_Byte0,fVar8,0.2,(MethodInfo *)0x0);
          if (1 < (uint)alphaKeys->max_length) {
            alphaKeys->m_Items[1].fields.time = (float)local_120._at_UInt1.UInt1;
            alphaKeys->m_Items[1].fields.alpha = (float)local_120._at_UInt0.UInt0;
            local_118 = (_union_125884)0x0;
            Unity_Burst_Intrinsics_v64___ctor_1028c00
                      ((Unity_Burst_Intrinsics_v64_o *)&local_118._at_Byte0,0.1,0.6,(MethodInfo *)0x0);
            if (2 < (uint)alphaKeys->max_length) {
              alphaKeys->m_Items[2].fields.time = (float)local_118._at_UInt1.UInt1;
              alphaKeys->m_Items[2].fields.alpha = (float)local_118._at_UInt0.UInt0;
              local_178 = (_union_125884)0x0;
              Unity_Burst_Intrinsics_v64___ctor_1028c00
                        ((Unity_Burst_Intrinsics_v64_o *)&local_178._at_Byte0,0.0,1.0,(MethodInfo *)0x0);
              if (3 < (uint)alphaKeys->max_length) {
                alphaKeys->m_Items[3].fields.alpha = (float)local_178._at_UInt0.UInt0;
                alphaKeys->m_Items[3].fields.time = (float)local_178._at_UInt1.UInt1;
                if (__this != (UnityEngine_Gradient_o *)0x0) {
                  UnityEngine_Gradient__SetKeys(__this,colorKeys,alphaKeys,(MethodInfo *)0x0);
                  pUVar2 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_2fc8f10
                                     (local_a0,__this,(MethodInfo *)0x0);
                  local_168._0_4_ = (pUVar2->fields).m_Mode;
                  local_168._4_4_ = *(undefined4 *)&(pUVar2->fields).field_0x4;
                  local_168._8_8_ = (pUVar2->fields).m_GradientMin;
                  local_158 = (UnityEngine_AnimationCurve_o *)(pUVar2->fields).m_GradientMax;
                  UStack_150.r = (pUVar2->fields).m_ColorMin.fields.r;
                  UStack_150.g = (pUVar2->fields).m_ColorMin.fields.g;
                  UStack_150.b = (pUVar2->fields).m_ColorMin.fields.b;
                  UStack_150.a = (pUVar2->fields).m_ColorMin.fields.a;
                  UStack_140.r = (pUVar2->fields).m_ColorMax.fields.r;
                  UStack_140.g = (pUVar2->fields).m_ColorMax.fields.g;
                  UStack_140.b = (pUVar2->fields).m_ColorMax.fields.b;
                  UStack_140.a = (pUVar2->fields).m_ColorMax.fields.a;
                  UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color
                            (&local_110,(UnityEngine_ParticleSystem_MinMaxGradient_o *)local_168,
                             (MethodInfo *)0x0);
                  local_108.fields.m_ParticleSystem =
                       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)
                       UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
                  UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled
                            (&local_108,true,(MethodInfo *)0x0);
                  curve = UnityEngine_AnimationCurve__Linear(0.0,0.55,1.0,1.7,(MethodInfo *)0x0);
                  local_d8.m_Mode = 0;
                  local_d8._4_4_ = 0;
                  local_d8.m_GradientMin = (UnityEngine_Gradient_o *)0x0;
                  local_d8.m_GradientMax = (UnityEngine_Gradient_o *)0x0;
                  local_d8.m_ColorMin.fields.r = 0.0;
                  local_d8.m_ColorMin.fields.g = 0.0;
                  UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8c00
                            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)(auStack_e0 + 8),1.0,curve,
                             (MethodInfo *)0x0);
                  local_168._0_8_ = local_d8._0_8_;
                  local_168._8_8_ = local_d8.m_GradientMin;
                  local_158 = (UnityEngine_AnimationCurve_o *)local_d8.m_GradientMax;
                  UStack_150.r = local_d8.m_ColorMin.fields.r;
                  UStack_150.g = local_d8.m_ColorMin.fields.g;
                  UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size
                            (&local_108,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_168,
                             (MethodInfo *)0x0);
                  local_100.fields.m_ParticleSystem =
                       (UnityEngine_ParticleSystem_RotationOverLifetimeModule_Fields)
                       UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
                  UnityEngine_ParticleSystem_RotationOverLifetimeModule__set_enabled
                            (&local_100,true,(MethodInfo *)0x0);
                  local_1c8.m_Mode = 0;
                  local_1c8._4_4_ = 0;
                  local_1c8.m_GradientMin = (UnityEngine_Gradient_o *)0x0;
                  local_1c8.m_GradientMax = (UnityEngine_Gradient_o *)0x0;
                  local_1c8.m_ColorMin.fields.r = 0.0;
                  local_1c8.m_ColorMin.fields.g = 0.0;
                  UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
                            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,-0.873,0.873,
                             (MethodInfo *)0x0);
                  local_168._0_8_ = local_1c8._0_8_;
                  local_168._8_8_ = local_1c8.m_GradientMin;
                  local_158 = (UnityEngine_AnimationCurve_o *)local_1c8.m_GradientMax;
                  UStack_150.r = local_1c8.m_ColorMin.fields.r;
                  UStack_150.g = local_1c8.m_ColorMin.fields.g;
                  UnityEngine_ParticleSystem_RotationOverLifetimeModule__set_z
                            (&local_100,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_168,
                             (MethodInfo *)0x0);
                  local_188[0].fields.m_ParticleSystem =
                       (UnityEngine_ParticleSystem_EmissionModule_Fields)
                       UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
                  pUVar1 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_f8,rate,
                                      (MethodInfo *)0x0);
                  local_168._0_4_ = (pUVar1->fields).m_Mode;
                  local_168._4_4_ = (pUVar1->fields).m_CurveMultiplier;
                  local_168._8_8_ = (pUVar1->fields).m_CurveMin;
                  local_158 = (pUVar1->fields).m_CurveMax;
                  UStack_150.r = (pUVar1->fields).m_ConstantMin;
                  UStack_150.g = (pUVar1->fields).m_ConstantMax;
                  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                            (local_188,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_168,(MethodInfo *)0x0
                            );
                  pMVar4 = MethodInfo_System_Array_Empty_ParticleSystem_Burst;
                  if ((MethodInfo_System_Array_Empty_ParticleSystem_Burst->field7_0x38).rgctx_data ==
                      (Il2CppRGCTXData *)0x0) {
                    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_ParticleSystem_Burst);
                  }
                  pIVar3 = (pMVar4->field7_0x38).rgctx_data[2].klass;
                  if (((pIVar3->_2).bitflags1 & 1) == 0) {
                    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
                  }
                  if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(pIVar3);
                  }
                  pIVar3 = (pMVar4->field7_0x38).rgctx_data[2].klass;
                  if (((pIVar3->_2).bitflags1 & 1) == 0) {
                    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
                  }
                  UnityEngine_ParticleSystem_EmissionModule__SetBursts
                            (local_188,*(UnityEngine_ParticleSystem_Burst_array **)pIVar3->static_fields,
                             (MethodInfo *)0x0);
                  UnityEngine_ParticleSystem_EmissionModule__set_enabled(local_188,true,(MethodInfo *)0x0);
                  return;
                }
                ThrowNullReferenceException();
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1821cf742:
  ThrowNullReferenceException();
}


// Characters.TitanSteamEffect$$Prepare
// il2cpp: void Characters_TitanSteamEffect__Prepare (UnityEngine_ParticleSystem_o* particles, const MethodInfo* method);
// 0x1821cf750

void Characters_TitanSteamEffect__Prepare(UnityEngine_ParticleSystem_o *particles,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *__this;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184346ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_40ac078);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346ea9 = '\x01';
  }
  if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)particles,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_40ac078);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this = (UnityEngine_ParticleSystem_o *)pSVar2->m_Items[(int)uVar3];
        if (__this == (UnityEngine_ParticleSystem_o *)0x0) break;
        UnityEngine_ParticleSystem__Stop(__this,true,0,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)particles,(MethodInfo *)0x0)
        ;
        if (bVar1) {
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
          UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        }
        uVar3 = uVar3 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanSteamEffect$$SetSurface
// il2cpp: void Characters_TitanSteamEffect__SetSurface (UnityEngine_ParticleSystem_o* particles, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x1821cf860

void Characters_TitanSteamEffect__SetSurface
               (UnityEngine_ParticleSystem_o *particles,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_ParticleSystem_ShapeModule_o local_res8 [4];
  UnityEngine_Vector3_Fields local_18;
  
  local_res8[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ShapeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
    local_res8[0].fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_ShapeModule_Fields)
         UnityEngine_ParticleSystem__get_noise(particles,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_enabled(local_res8,true,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_shapeType(local_res8,6,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_mesh(local_res8,mesh,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_meshShapeType(local_res8,2,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_useMeshColors(local_res8,false,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem_ShapeModule__set_useMeshMaterialIndex(local_res8,false,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.x = (pUVar1->zeroVector).fields.x;
    local_18.y = (pUVar1->zeroVector).fields.y;
    local_18.z = (pUVar1->zeroVector).fields.z;
    UnityEngine_ParticleSystem_ShapeModule__set_position
              (local_res8,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.x = (pUVar1->zeroVector).fields.x;
    local_18.y = (pUVar1->zeroVector).fields.y;
    local_18.z = (pUVar1->zeroVector).fields.z;
    UnityEngine_ParticleSystem_ShapeModule__set_rotation
              (local_res8,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.x = (pUVar1->oneVector).fields.x;
    local_18.y = (pUVar1->oneVector).fields.y;
    local_18.z = (pUVar1->oneVector).fields.z;
    UnityEngine_ParticleSystem_ShapeModule__set_scale
              (local_res8,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.TitanSteamEffect$$.cctor
// il2cpp: void Characters_TitanSteamEffect___cctor (const MethodInfo* method);
// 0x1821cf9e0

void Characters_TitanSteamEffect___cctor(MethodInfo *method)

{
  Characters_TitanSteamEffect_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_184346eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_184346eaa = '\x01';
  }
  pCVar1 = TypeInfo_Characters_TitanSteamEffect->static_fields;
  (pCVar1->SteamColor).fields.r = 0.86;
  (pCVar1->SteamColor).fields.g = 0.88;
  (pCVar1->SteamColor).fields.b = 0.9;
  (pCVar1->SteamColor).fields.a = 1.0;
  return;
}


